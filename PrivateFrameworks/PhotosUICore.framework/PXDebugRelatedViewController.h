/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDebugRelatedViewController : UIViewController <MFMailComposeViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSCountedSet * _countedKeywords;
    double  _curationScore;
    NSMutableDictionary * _currentKeywords;
    NSString * _debugDescription;
    double  _graphScore;
    BOOL  _isInteresting;
    NSDictionary * _matchingKeywords;
    double  _matchingScore;
    NSDictionary * _matchingWeight;
    double  _neighborScore;
    NSDictionary * _referenceKeywords;
    NSDictionary * _relatedKeywords;
    double  _relatedScore;
    unsigned int  _relatedType;
    UISegmentedControl * _segmentedControl;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeAction:(id)arg1;
- (void)_initDataSourceWithKeywords:(id)arg1;
- (void)_sendByEmailAction:(id)arg1;
- (void)_setupWithDictionary:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewDidLoad;

@end
