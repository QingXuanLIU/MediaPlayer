#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>
#import <MediaPlayer/MediaPlayer.h>

@interface MediaPlayerViewController : UIViewController <AVAudioPlayerDelegate>
{
    IBOutlet UIButton *audioButton;
    SystemSoundID shortSound;
    
    AVAudioPlayer *audioPlayer;
    
    MPMoviePlayerController *moviePlayer;
}

- (IBAction)playAudioFile:(id)sender;
- (IBAction)playShortSound:(id)sender;

@end
