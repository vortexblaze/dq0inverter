% --- Control Parameters ---
Kp = 10;          % Proportional gain (replace with your value)
Ki = 1;          % Integral gain (replace with your value)
saturation_limit = 400; % Anti-windup saturation limit 
control_frequency = 10000; % Control loop frequency in Hz


if isempty(integral_term) 
    integral_term = 0;
end

if isempty(previous_time)
   previous_time = tic; % Equivalent to high_resolution_clock::now()
end

% --- Function to Calculate Control Output ---
function control_output = calculate_control_output(desired_power, measured_power, Vd)
    % Calculate dt based on control frequency
    current_time = tic; % Measure current time
    dt = current_time - previous_time;
    previous_time = current_time;

    % Calculate error
    error = desired_power - measured_power;

    % Update integral term with anti-windup (clamping)
    integral_term = integral_term + error * dt;
    integral_term = max(-saturation_limit, min(integral_term, saturation_limit));

    % Calculate control output
    control_output = (1 / Vd) * (Kp * error + Ki * integral_term);
end

% ----  Example Usage within a Control Loop ----
while true % Main control loop

    % ... Get sensor readings and desired power ...
    desired_power = ...;
    measured_power = Vd*Id;
    Vd = ; 

    % Calculate control output 
    control_output = calculate_control_output(desired_power, measured_power, Vd);

    % ... Apply control output to the system ...

    % (Optional) Delay until next control cycle based on control_frequency 
    pause(1/control_frequency); 
end