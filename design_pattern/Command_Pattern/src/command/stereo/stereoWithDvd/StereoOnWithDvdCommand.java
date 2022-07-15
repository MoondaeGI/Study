package command.stereo.stereoWithDvd;

import command.Command;
import command.stereo.Stereo;

public class StereoOnWithDvdCommand implements Command {
    Stereo stereo;

    public StereoOnWithDvdCommand(Stereo stereo) { this.stereo = stereo; }

    @Override
    public void execute() {
        stereo.on();
        stereo.setDvd();
    }

    @Override
    public void undo() { stereo.on(); }
}
