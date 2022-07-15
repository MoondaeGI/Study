package command.stereo.stereoWithCd;

import command.Command;
import command.stereo.Stereo;

public class StereoOnWithCdCommand implements Command {
    Stereo stereo;

    public StereoOnWithCdCommand(Stereo stereo) { this.stereo = stereo; }

    @Override
    public void execute() {
        stereo.on();
        stereo.setCd();
    }

    @Override
    public void undo() {
        stereo.off();
    }
}
