//
//  KMPhotoTimelineDetailsCell.m
//  TheMovieDB
//
//  Created by Kevin Mindeguia on 04/02/2014.
//  Copyright (c) 2014 iKode Ltd. All rights reserved.
//

#import "KMMovieDetailsCell.h"

@implementation KMMovieDetailsCell

#pragma mark -
#pragma mark Init Methods

+ (KMMovieDetailsCell*) movieDetailsCell
{
    KMMovieDetailsCell * cell = [[[NSBundle mainBundle] loadNibNamed:@"KMMovieDetailsCell" owner:self options:nil] objectAtIndex:0];
    cell.selectionStyle = UITableViewCellSelectionStyleNone;
    return cell;
}

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        
        // Initialization code
    }
    return self;
}

#pragma mark -
#pragma mark View Lifecycle

- (void)awakeFromNib
{
    self.posterImageView.layer.cornerRadius = self.posterImageView.frame.size.width/2;
    self.posterImageView.layer.masksToBounds = YES;
    
    self.watchTrailerButton.layer.borderColor = [UIColor colorWithRed:0/255.0 green:161/225.0 blue:0/255.0 alpha:1.0].CGColor;
    self.watchTrailerButton.layer.cornerRadius = 15.0f;
    
    
    [self.watchTrailerButton addTarget:self action:@selector(watchTrailerButtonPressed:) forControlEvents:UIControlEventTouchUpInside];
    self.bookmarkButton.layer.borderColor =  self.bookmarkButton.titleLabel.textColor.CGColor;
    self.bookmarkButton.layer.borderWidth = 1.0f;
    self.bookmarkButton.layer.cornerRadius = 15.0f;
    [self.bookmarkButton addTarget:self action:@selector(bookmarkButtonPressed:) forControlEvents:UIControlEventTouchUpInside];
}

#pragma mark -
#pragma mark Cell Methods

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}


#pragma mark -
#pragma mark Handlers

-(void)watchTrailerButtonPressed:(UIButton *)button {
    NSLog(@"Watch trailer button pressed");
    UIActivityIndicatorView *v = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleWhite];
    v.tag = 444;
    [[button viewWithTag:444] removeFromSuperview];
    [button addSubview:v];
    [v startAnimating];
    v.color = [UIColor blueColor];
    v.center = CGPointMake(button.bounds.size.width/2.0, button.bounds.size.height/2.0);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(4 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [v stopAnimating];
        [v removeFromSuperview];
    });
}

-(void)bookmarkButtonPressed:(UIButton *)button {
    [UIView animateWithDuration:0.2 animations:^{
        [button setBackgroundColor:[UIColor colorWithRed:0 green:1 blue:0 alpha:0.5]];
        [button setTitle:@"✓" forState:UIControlStateNormal];
    }];

}
@end
