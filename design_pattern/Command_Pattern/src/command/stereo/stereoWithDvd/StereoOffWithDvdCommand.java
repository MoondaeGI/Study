package command.stereo.stereoWithDvd;

import command.Command;
import command.stereo.Stereo;

public class StereoOffWithDvdCommand implements Command {
    Stereo stereo;

    public StereoOffWithDvdCommand(Stereo stereo) { this.stereo = stereo; }

    @Override
    public void execute() {
        stereo.off();
    }

    @Override
    public void undo() {
        stereo.on();
        stereo.setDvd();
    }
}
