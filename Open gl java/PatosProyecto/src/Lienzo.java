import com.jogamp.opengl.util.FPSAnimator;
import java.awt.*;
import java.awt.event.*;
import javax.media.opengl.GLCapabilities;
import javax.media.opengl.GLProfile;
import javax.media.opengl.awt.GLCanvas;

public class Lienzo {
  
   public static void main(String[] args) {
        GLProfile profile = GLProfile.getDefault();            
        GLCapabilities capabilities = new GLCapabilities(profile);                    
        Patos canvas = new Patos(capabilities);   
        
        canvas.setSize(new Dimension(1200, 1000) );

        final Frame frame = new Frame();
        frame.add(canvas);
        
        final FPSAnimator animator = new FPSAnimator(canvas, 80);

        frame.addWindowListener(new WindowAdapter() {
            @Override
            public void windowClosing(WindowEvent e) {
                new Thread() {
                    @Override
                    public void run() {
                        if( animator.isStarted() ){
                            animator.stop();
                        }
                        System.exit(0);
                    }
                }.start();
            }
        });

        frame.setTitle("Patos proyecto");
        frame.setSize(canvas.getWidth(), canvas.getHeight());
        frame.setVisible(true);
        
        //animator.start();
    }
}