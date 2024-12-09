# Lab 5 Realtime 

## Activity 1 Drift and Jitter Data

| Delay | Period | Measured <br> Frequency | Desired <br> Frequency | Duty <br> Cycle | Jitter | Drift - 1 hr |
|:-----------:|:------------:|:------------:|:------------:|:------------:|:------------:|:------------:|
| sleep      |  199.9989 ms |   5.00003 Hz |  5 Hz         |  50%        |  1.079 us    |   000.0216s  |
| sleep_delay|  218.4003 ms |   4.54983 Hz |  5 Hz         |  50%        |  1.254 us    |   324.1224s  |
| task       |  200.0016 ms |   4.99995 Hz |  5 Hz         |  50 %       |  1.213 us    |   000.0360s  |
| task_delay |  219.0193 ms |   4.56093 Hz |  5 Hz         |  50%        |  1.305 us    |   316.1304s  |
| timer      |  200.0214 ms |   4.99998 Hz |  5 Hz         |  50%        |  1.003 us    |   000.0144s  |
| timer_delay|  200.0214 ms |   4.99998 Hz |  5 Hz         |  50 %       |  1.169 us    |   000.0144s  |

## Activity 2 Interrupt Handler
Delay between sync signal without busy wait loop 1.37 us
Delay between sync signal with busy wait loop 2.0453 ms


