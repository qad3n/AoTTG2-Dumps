// Type: Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHelpUpdatesDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___cctor (const MethodInfo* method);
// 0x5e7c5f0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075487ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    Il2CppMethodInitialized_075487ff = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, const MethodInfo* method);
// 0x5e7c660

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestCard>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestCard_b__13_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x5e7c670

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestCard_b__13_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  MethodInfo *pMVar1;
  MethodInfo *in_R8;
  
  pMVar1 = (MethodInfo *)card;
  if (Il2CppMethodInitialized_07548800 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.empty");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.NonePublished");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-empty");
    Il2CppMethodInitialized_07548800 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestLoading(card,pMVar1);
  pMVar1 = (MethodInfo *)"changelog.hub.empty";
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestState
            (card,"changelog.hub.empty","Changelog.NonePublished","help-updates-latest-empty",in_R8);
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestError(card,pMVar1);
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestReady(card,pMVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestReady>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ready, const MethodInfo* method);
// 0x5e7c6f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7cb18: jmp 0x5e7cb33

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ready,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields *pGVar4;
  System_Action_AottgUi__o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  ApplicationManagers_Changelog_ChangelogEntryResponse_o *pAVar5;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07548801 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestReady_b__14_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-date");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-version");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-ready-skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-markdown-preview");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.date");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogPreviewMeta");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-status");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"v");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.status");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-open-row");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogPreviewVersion");
    Il2CppMethodInitialized_07548801 = '\x01';
    method = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor == 0)
    goto label_05e7c9f0;
label_05e7c722:
    if (g_data_0754887c != '\0') goto label_05e7c72f;
label_05e7ca02:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
    g_data_0754887c = '\x01';
    method = extraout_RDX_01;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor == 0)
    goto label_05e7ca25;
label_05e7c73f:
    pAVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->static_fields->
             _LatestPreviewEntry_k__BackingField;
    if (pAVar5 != (ApplicationManagers_Changelog_ChangelogEntryResponse_o *)0x0) goto label_05e7c753;
label_05e7ca41:
    Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton(ready,"help-updates-latest-ready-skeleton",method);
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e7cc57;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor != 0)
    goto label_05e7c722;
label_05e7c9f0:
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
    method = extraout_RDX_00;
    if (g_data_0754887c == '\0') goto label_05e7ca02;
label_05e7c72f:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor != 0)
    goto label_05e7c73f;
label_05e7ca25:
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
    pAVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->static_fields->
             _LatestPreviewEntry_k__BackingField;
    method = extraout_RDX_02;
    if (pAVar5 == (ApplicationManagers_Changelog_ChangelogEntryResponse_o *)0x0) goto label_05e7ca41;
label_05e7c753:
    pSVar2 = System_String__Concat_52f0320
                       ("v",(pAVar5->fields)._Version_k__BackingField,(MethodInfo *)0x0);
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e7cc57;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ready,pSVar2,"changelogPreviewVersion","help-updates-latest-version",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ready,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),"changelogPreviewMeta",
               "help-updates-latest-status","changelog.hub.status",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ready,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),"changelogPreviewMeta",
               "help-updates-latest-date","changelog.hub.date",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = (pAVar5->fields)._ContentMarkdown_k__BackingField;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer);
    value = "help-updates-latest-markdown-preview";
    if (Il2CppMethodInitialized_075487d6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"changelog-markdown");
      Il2CppMethodInitialized_075487d6 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields)._markdown = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._markdown);
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1) {
      value = "changelog-markdown";
    }
    (__this_00->fields)._id = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._id);
    (__this_00->fields)._maxLines = 5;
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ready,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                     (ready,"Common.Refreshing","changelogPreviewMeta","help-updates-latest-refreshing",
                      (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                      (MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this_01->fields).visible = "changelog.hub.refreshing";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).bind = __this_01;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
        pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
        __this_02 = pGVar4->__9__14_1;
      }
      else {
        pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
        __this_02 = pGVar4->__9__14_1;
      }
      if (__this_02 == (System_Action_AottgUi__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
          pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
        }
        object = (Il2CppObject *)pGVar4->__9;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)__this_02,object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestReady_b__14_1,
                   (MethodInfo_4A81BE0 *)0x0);
        pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
        pGVar4->__9__14_1 = __this_02;
        Il2CppCodeGenWriteBarrier(&pGVar4->__9__14_1);
      }
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexStart","Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ready,(System_String_o *)0x0,__this_02,"help-updates-open-row",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_05e7cc57:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestReady>b__14_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_1 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5e7cc60

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_1
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_07548802 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.openLatest");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.SeeMore");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-open-latest");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.open.enabled");
    Il2CppMethodInitialized_07548802 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Changelog.SeeMore",(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (row,0,text,"changelog.openLatest","help-updates-open-latest",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).textKey = "Changelog.SeeMore";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).textKey);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_00->fields).enabled = "changelog.hub.open.enabled";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled);
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestLoading>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestLoading_b__15_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loading, const MethodInfo* method);
// 0x5e7cdb0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestLoading_b__15_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loading,MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07548803 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-loading-skeleton");
    Il2CppMethodInitialized_07548803 = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton(loading,"help-updates-latest-loading-skeleton",method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestError>b__17_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestError_b__17_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* failed, const MethodInfo* method);
// 0x5e7cdf0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestError_b__17_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *failed,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548804 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.TryAgain");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Retry");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.error");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-error-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.LatestLoadFailed");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.retryLatest");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-retry");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-error");
    Il2CppMethodInitialized_07548804 = '\x01';
  }
  if (failed == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (failed,"Changelog.LatestLoadFailed","text","help-updates-latest-error-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (failed,"Common.TryAgain","stateMetaText","help-updates-latest-error","changelog.hub.error",
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
            (failed,0,"Common.Retry","changelog.retryLatest","help-updates-latest-retry",(System_String_o *)0x0
             ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",(MethodInfo *)0x0
            );
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildHelp>b__19_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildHelp_b__19_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* help, const MethodInfo* method);
// 0x5e7cf60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7d0cf: jmp 0x5e7d113

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildHelp_b__19_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *help,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  MethodInfo *in_RCX;
  int index;
  
  if (Il2CppMethodInitialized_07548805 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MiscInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.HelpUnavailable");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-help-missing");
    Il2CppMethodInitialized_07548805 = '\x01';
  }
  pSVar3 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e7d113;
    bVar1 = (*(pSVar3->klass->vtable)._16_get_IsArray.methodPtr)
                      (pSVar3,(pSVar3->klass->vtable)._16_get_IsArray.method);
    if (bVar1) {
      pSVar3 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e7d113;
      iVar2 = (*(pSVar3->klass->vtable)._11_get_Count.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._11_get_Count.method);
      if (iVar2 != 0) {
        pSVar3 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
        if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          index = 0;
          do {
            iVar2 = (*(pSVar3->klass->vtable)._11_get_Count.methodPtr)
                              (pSVar3,(pSVar3->klass->vtable)._11_get_Count.method);
            if (iVar2 <= index) {
              return;
            }
            pSVar3 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
            if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
            pSVar3 = (*(pSVar3->klass->vtable)._5_get_Item.methodPtr)
                               (pSVar3,index,(pSVar3->klass->vtable)._5_get_Item.method);
            Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelpLink(help,pSVar3,index,in_RCX);
            index = index + 1;
            pSVar3 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
          } while (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0);
        }
        goto label_05e7d113;
      }
    }
  }
  if (help != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (help,"Changelog.HelpUnavailable","stateMetaText","help-updates-help-missing",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_05e7d113:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___ctor (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x5e7c340

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___ctor
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c__DisplayClass18_0$$<BuildLatestState>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___BuildLatestState_b__0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* state, const MethodInfo* method);
// 0x5e7d120

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___BuildLatestState_b__0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *state,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *id;
  
  if (Il2CppMethodInitialized_07548806 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"-text");
    Il2CppMethodInitialized_07548806 = '\x01';
  }
  key = (__this->fields).textKey;
  id = System_String__Concat_52f0320((__this->fields).id,"-text",(MethodInfo *)0x0);
  if (state == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (state,key,"stateMetaText",id,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Title (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x5e7ac80

System_String_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075487f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.HelpUpdates");
    Il2CppMethodInitialized_075487f0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Changelog.HelpUpdates",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x5e7ace0

System_String_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075487f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"question");
    Il2CppMethodInitialized_075487f1 = '\x01';
  }
  return "question";
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x5e7ad10

int32_t Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x5e7ad20

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075487f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075487f2 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(920.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(94.0,(MethodInfo *)0x0);
  maxHeight = Gisketch_Aottg2UI_Code_AottgUi__Percent(86.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,maxHeight,0.0,0.0,0.0,0.0,0.0,
                      0.0,0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x5e7ae10

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075487f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075487f3 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e7aec0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body
               ,MethodInfo *method)

{
  System_String_o *str0;
  MethodInfo *pMVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075487f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-current-version");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-section-gap");
    il2cpp_codegen_initialize_runtime_metadata(&": v11.15.2026");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.CurrentVersion");
    Il2CppMethodInitialized_075487f4 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  str0 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Changelog.CurrentVersion",(MethodInfo *)0x0);
  pMVar1 = (MethodInfo *)System_String__Concat_52f0320(str0,": v11.15.2026",(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (body,(System_String_o *)pMVar1,"stateMetaText","help-updates-current-version",(System_String_o *)0x0
             ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestCard(body,pMVar1);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  pMVar1 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,(System_String_o *)0x0,(System_Action_AottgUi__o *)0x0,"help-updates-section-gap",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelp(body,pMVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x5e7b500

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075487f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Close");
    Il2CppMethodInitialized_075487f5 = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Close","overlay.close",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestCard
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestCard (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e7b080

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestCard
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075487f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestCard_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.SectionChangelogs");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogSectionHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-card");
    Il2CppMethodInitialized_075487f6 = '\x01';
  }
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (body,"Changelog.SectionChangelogs","changelogSectionHeader","help-updates-latest-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)
    ;
  }
  style = "row";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
  __this = pGVar1->__9__13_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestCard_b__13_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    pGVar1->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__13_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,14.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,style,__this,"help-updates-latest-card",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestReady (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x5e7b560
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7b5a3: jmp 0x5e7b640

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestReady
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075487f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestReady_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-ready");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.ready");
    Il2CppMethodInitialized_075487f7 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)
    ;
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    __this = pGVar2->__9__14_0;
  }
  else {
    pGVar2 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)->static_fields;
    __this = pGVar2->__9__14_0;
  }
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestReady_b__14_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    pGVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__14_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)0x0,__this,"help-updates-latest-ready",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.hub.ready";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestLoading (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x5e7b7d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7b813: jmp 0x5e7b8b0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075487f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestLoading_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-loading");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.loading");
    Il2CppMethodInitialized_075487f8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)
    ;
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    __this = pGVar2->__9__15_0;
  }
  else {
    pGVar2 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)->static_fields;
    __this = pGVar2->__9__15_0;
  }
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestLoading_b__15_0
               ,(MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    pGVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__15_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,9.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)0x0,__this,"help-updates-latest-loading",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.hub.loading";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildPreviewSkeleton
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* idPrefix, const MethodInfo* method);
// 0x5e7ba40

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *idPrefix,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_075487f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-line-3");
    il2cpp_codegen_initialize_runtime_metadata(&"-version");
    il2cpp_codegen_initialize_runtime_metadata(&"-line-0");
    il2cpp_codegen_initialize_runtime_metadata(&"-line-1");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"-line-2");
    Il2CppMethodInitialized_075487f9 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(idPrefix,"-version",(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(28.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (ui,pSVar1,pGVar4,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320(idPrefix,"-line-0",(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (ui,pSVar1,pGVar4,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320(idPrefix,"-line-1",(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(92.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (ui,pSVar1,pGVar4,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320(idPrefix,"-line-2",(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(78.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (ui,pSVar1,pGVar4,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320(idPrefix,"-line-3",(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(54.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (ui,pSVar1,pGVar4,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestError (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x5e7bed0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7bf13: jmp 0x5e7bfb0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestError
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075487fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestError_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-failed");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.failed");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_075487fa = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)
    ;
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    __this = pGVar2->__9__17_0;
  }
  else {
    pGVar2 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)->static_fields;
    __this = pGVar2->__9__17_0;
  }
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestError_b__17_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    pGVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__17_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)0x0,__this,"help-updates-latest-failed",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.hub.failed";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestState (Gisketch_Aottg2UI_Code_AottgUi_o* card, System_String_o* visibleKey, System_String_o* textKey, System_String_o* id, const MethodInfo* method);
// 0x5e7c140

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestState
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,System_String_o *visibleKey,System_String_o *textKey,
               System_String_o *id,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_075487fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c__DisplayClass18_0_BuildLatestState_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_075487fb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c__DisplayClass18_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o *)0x0) {
    (__this->fields).textKey = textKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields).textKey);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c__DisplayClass18_0_BuildLatestState_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    id_00 = (__this->fields).id;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (card,(System_String_o *)0x0,__this_00,id_00,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_01->fields).visible = visibleKey;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible);
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar1->fields).bind = __this_01;
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildHelp
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelp (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e7b2c0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelp
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075487fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildHelp_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.SectionHelp");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-help-title");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-help");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogSectionHeader");
    Il2CppMethodInitialized_075487fc = '\x01';
  }
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (body,"Changelog.SectionHelp","changelogSectionHeader","help-updates-help-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)
    ;
  }
  style = "row";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
  __this = pGVar1->__9__19_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildHelp_b__19_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields;
    pGVar1->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__19_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,14.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,style,__this,"help-updates-help",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildHelpLink
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelpLink (Gisketch_Aottg2UI_Code_AottgUi_o* help, SimpleJSONFixed_JSONNode_o* node, int32_t index, const MethodInfo* method);
// 0x5e7c350

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelpLink
               (Gisketch_Aottg2UI_Code_AottgUi_o *help,SimpleJSONFixed_JSONNode_o *node,int32_t index,
               MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *value;
  MethodInfo *method_00;
  System_String_o *id;
  System_String_o *icon;
  int32_t local_1c;
  
  local_1c = index;
  if (Il2CppMethodInitialized_075487fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.openHelpLink");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-link-");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.HelpLink");
    Il2CppMethodInitialized_075487fd = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e7c4df;
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"Title",(node->klass->vtable)._7_get_Item.method);
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e7c4df;
    value = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                      (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
  }
  else {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    value = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Changelog.HelpLink",(MethodInfo *)0x0)
    ;
  }
  method_00 = (MethodInfo *)System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
  id = System_String__Concat_52f0320("help-updates-link-",(System_String_o *)method_00,(MethodInfo *)0x0);
  icon = Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__HelpIcon(value,method_00);
  if (help != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (help,3,value,"changelog.openHelpLink",id,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
    return;
  }
label_05e7c4df:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$HelpIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__HelpIcon (System_String_o* title, const MethodInfo* method);
// 0x5e7c4f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__HelpIcon(System_String_o *title,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_075487fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/material-icons/map");
    il2cpp_codegen_initialize_runtime_metadata(&"map");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/material-icons/integration_instructions");
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"logic");
    Il2CppMethodInitialized_075487fe = '\x01';
  }
  if (title == (System_String_o *)0x0) {
    __this = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    __this = System_String__ToLowerInvariant(title,(MethodInfo *)0x0);
  }
  if (__this == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__Contains(__this,"map",(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar2 = &"Icons/material-icons/map";
  }
  else {
    bVar1 = System_String__Contains(__this,"logic",(MethodInfo *)0x0);
    ppSVar2 = &"Icons/material-icons/integration_instructions";
    if (!bVar1) {
      System_String__Contains(__this,"code",(MethodInfo *)0x0);
    }
  }
  return *ppSVar2;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___ctor (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x5e7c5e0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


