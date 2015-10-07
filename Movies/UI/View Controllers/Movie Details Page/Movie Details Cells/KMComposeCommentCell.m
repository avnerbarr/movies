//
//  KMComposeCommentCell.m
//  TheMovieDB
//
//  Created by Kevin Mindeguia on 04/02/2014.
//  Copyright (c) 2014 iKode Ltd. All rights reserved.
//

#import "KMComposeCommentCell.h"

@implementation KMComposeCommentCell

#pragma mark -
#pragma mark Cell Init Methods

+ (KMComposeCommentCell*) composeCommentsCell
{
    KMComposeCommentCell * cell = [[[NSBundle mainBundle] loadNibNamed:@"KMComposeCommentCell" owner:self options:nil] objectAtIndex:0];
    
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
#pragma mark Cell Methods

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

#pragma mark -
#pragma mark View Lifecycle

- (void)awakeFromNib
{
    self.composeCommentButton.layer.borderColor =  self.composeCommentButton.titleLabel.textColor.CGColor;
    self.composeCommentButton.layer.borderWidth = 1.0f;
    self.composeCommentButton.layer.cornerRadius = 15.0f;
    [self.composeCommentButton addTarget:self action:@selector(composeCommentButtonPressed:) forControlEvents:UIControlEventTouchUpInside];
}

#pragma mark -
#pragma mark Events

-(void)composeCommentButtonPressed:(UIButton *)button {
    NSLog(@"Compose comment button pressed");
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

@end
