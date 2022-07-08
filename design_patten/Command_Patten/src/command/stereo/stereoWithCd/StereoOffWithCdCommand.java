package command.stereo.stereoWithCd;

import command.Command;
import command.stereo.Stereo;

public class StereoOffWithCdCommand implements Command {
    Stereo stereo;

    public StereoOffWithCdCommand(Stereo stereo) { this.stereo = stereo; }

    @Override
    public void execute() { stereo.off(); }

    @Override
    public void undo() {
        stereo.on();
        stereo.setCd();
    }
}
