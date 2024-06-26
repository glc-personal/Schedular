# Scheduler
Scheduling tool for optimizing work schedules from multiple users given criteria.

## Purpose
The purpose of the Scheduler Software System (Sc) is to provide an interface for 
generating a work schedule for each employee on a team. Employees are able to 
schedule their availability on the system for each work week at a half hour 
interval. Managers have the ability to define scheduling criteria, together with 
the team’s availability, are able to automatically generate a work schedule for 
each employee on the team.

## Product Scope
The Sc is to provide an easy-to-use interface for the user base to schedule work 
hours based on defined criteria

## Definitions and Acronyms
| Word, Acronym, or Abbreviation | Definition |
|--------------------------------|------------|
| Sc                             | Scheduler Software System |
| User                           | An individual capable of using the software. |
| Employee                       | A user who can obtain an optimized work schedule. |
| Manager                        | An employee who can define schedule criteria and initiate scheduling for their team. |
| Team                           | A set of employees led by a single manager. |
| Criterion                      | A single rule defined by a manager. |
| Schedule Criteria              | A set of criterion for scheduling. |
| Quarter Hour                   | Minimum allotted time which can be booked or not booked. |
| Hour                           | Collection of four quarter hours. |
| Day                            | Named collection of 24 hours. |
| Week                           | Collection of 7 consecutive days. |
| Month                          | Collection of 4 consecutive weeks. |
| Schedule                       | N days worth of booked and not booked time. |
| Availability Schedule          | Schedule for time available on a per week basis. |
| Work Schedule                  | Schedule generated by the Sc on a per week basis for the team as a collective and with the ability to show for each employee on the team individually. |

## Overall Description
### User Needs
The user base needs the ability to set time when they are available to be scheduled, when they cannot be scheduled, and when they are potentially able to be scheduled to increase flexibility. From the available times the manager will be able to automatically generate a work schedule for the week based on their defined criteria. The manager must be able to see the overall work schedule for the week and be able to provide a work schedule for each employee individually.

### Assumptions and Dependencies
There are several key assumptions to be enforced:
- The smallest unit of time an employee can be available or booked is a quarter hour (i.e. a 15 minute period).
- The largest unit of time an employee can be available or book is a day.
- The largest unit of time an employee can be unavailable is a week (this does not mean an employee can’t set more than a week as unavailable, it means that they cannot set more than one week at a time when marking time as unavailable).

