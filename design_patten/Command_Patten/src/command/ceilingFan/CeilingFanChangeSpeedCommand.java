package command.ceilingFan;

import command.Command;

public class CeilingFanChangeSpeedCommand implements Command {
    CeilingFan ceilingFan;
    private static int previousSpeed;

    public CeilingFanChangeSpeedCommand(CeilingFan ceilingFan) {
        this.ceilingFan = ceilingFan;
    }

    @Override
    public void execute() {
        previousSpeed = ceilingFan.getSpped();

        if (previousSpeed == CeilingFan.HIGH) {
            ceilingFan.setLOW();
        } else if (previousSpeed == CeilingFan.MIDDLE) {
            ceilingFan.setHigh();
        } else {
            ceilingFan.setMiddle();
        }
    }

    @Override
    public void undo() {
        if (previousSpeed == CeilingFan.HIGH) {
            ceilingFan.setMiddle();
        } else if (previousSpeed == CeilingFan.MIDDLE) {
            ceilingFan.setLOW();
        } else {
            ceilingFan.setHigh();
        }

        previousSpeed = ceilingFan.getSpped();
    }
}
