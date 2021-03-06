/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKEmergencyCardBirthdateTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {
    HKMedicalIDEditorDateCell * _editableCell;
    NSCalendar * _gregorianCalendar;
    _HKCustomInsetCellLayoutManager * _layoutManager;
}

- (void).cxx_destruct;
- (id)_cachedCalendar;
- (id)_createEditableCell;
- (BOOL)canEditRowAtIndex:(int)arg1;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (void)didCommitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (id)initInEditMode:(BOOL)arg1;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (BOOL)shouldHighlightRowAtIndex:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (void)timeZoneDidChange:(id)arg1;
- (id)title;

@end
