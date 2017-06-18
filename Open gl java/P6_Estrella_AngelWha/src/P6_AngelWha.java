import java.awt.Frame;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import javax.media.opengl.GLCapabilities;
import javax.media.opengl.GLProfile;
import javax.media.opengl.awt.GLCanvas;


public class P6_AngelWha {
    public static void main(String []args){
        GLProfile prof = GLProfile.getDefault();
        GLCapabilities cap = new GLCapabilities(prof);
        MiLienzo canvas = new MiLienzo(cap);
        canvas.setSize(500,500);
        Frame frame = new Frame();
      frame.add(canvas);
       frame.setSize(canvas.getWidth(), canvas.getHeight());
        frame.addWindowListener(new WindowAdapter(){
            @Override
            public void windowClosing(WindowEvent e){
                new Thread(){
                    @Override
                    public void run(){
                        System.exit(0);
                    }
                }.start();
            }
        }
            );
        frame.setVisible(true);
    }
}