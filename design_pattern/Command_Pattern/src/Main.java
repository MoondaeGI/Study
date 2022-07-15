import command.ceilingFan.CeilingFan;
import command.ceilingFan.CeilingFanChangeSpeedCommand;
import command.ceilingFan.CeilingFanOffCommand;
import command.ceilingFan.CeilingFanOnCommand;
import command.light.Light;
import command.light.LightOffCommand;
import command.light.LightOnCommand;
import command.stereo.Stereo;
import command.stereo.stereoWithCd.StereoOffWithCdCommand;
import command.stereo.stereoWithCd.StereoOnWithCdCommand;
import command.stereo.stereoWithDvd.StereoOffWithDvdCommand;
import command.stereo.stereoWithDvd.StereoOnWithDvdCommand;
import remoteControl.RemoteControl;

public class Main {
    public static void main(String[] args) {
        RemoteControl remoteControl = new RemoteControl();

        Light light = new Light();
        Stereo stereo = new Stereo();
        CeilingFan ceilingFan = new CeilingFan();

        remoteControl.setCommand(0, new LightOnCommand(light), new LightOffCommand(light));
        remoteControl.setCommand(1, new StereoOnWithCdCommand(stereo), new StereoOffWithCdCommand(stereo));
        remoteControl.setCommand(2, new StereoOnWithDvdCommand(stereo), new StereoOffWithDvdCommand(stereo));
        remoteControl.setCommand(3, new CeilingFanOnCommand(ceilingFan), new CeilingFanOffCommand(ceilingFan));
        remoteControl.setCommand(4, new CeilingFanChangeSpeedCommand(ceilingFan), new CeilingFanOffCommand(ceilingFan));

        remoteControl.onButtonWasPushed(0);
        remoteControl.offButtonWasPushed(0);

        System.out.println(remoteControl);

        remoteControl.onButtonWasPushed(1);
        remoteControl.undoButtonWasPushed();
        remoteControl.onButtonWasPushed(1);
        remoteControl.offButtonWasPushed(1);

        remoteControl.onButtonWasPushed(3);
        remoteControl.onButtonWasPushed(4);
        remoteControl.onButtonWasPushed(4);
        remoteControl.onButtonWasPushed(4);

        System.out.println();

        for (int i = 0; i <10; i++) {
            remoteControl.undoButtonWasPushed();
        }
    }
}
