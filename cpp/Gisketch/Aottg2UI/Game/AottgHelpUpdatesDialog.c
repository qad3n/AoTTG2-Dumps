// Type: Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHelpUpdatesDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___cctor (const MethodInfo* method);
// 0x1823bdf40

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this;
  
  if (Il2CppMethodInitialized_184347cd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    Il2CppMethodInitialized_184347cd3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___ctor(Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestCard>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestCard_b__13_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x1823ba160

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestCard_b__13_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347cd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.empty");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.NonePublished");
    il2cpp_codegen_initialize_runtime_metadata(&"No published changelog yet.");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-empty");
    Il2CppMethodInitialized_184347cd4 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestLoading(card,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestState
            (card,"changelog.hub.empty","Changelog.NonePublished","No published changelog yet.","help-updates-latest-empty",
             (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestError(card,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestReady(card,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestReady>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ready, const MethodInfo* method);
// 0x1823ba3f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ba5bb: jmp 0x1823ba6b9

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ready,MethodInfo *method)

{
  ApplicationManagers_Changelog_ChangelogEntryResponse_o *pAVar1;
  Il2CppObject *object;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347cd5 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"Refreshing...");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.status");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-open-row");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogPreviewVersion");
    Il2CppMethodInitialized_184347cd5 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
  }
  if (Il2CppMethodInitialized_184347d42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
    Il2CppMethodInitialized_184347d42 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
  }
  pAVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->static_fields->
           _LatestPreviewEntry_k__BackingField;
  if (pAVar1 == (ApplicationManagers_Changelog_ChangelogEntryResponse_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton
              (ready,"help-updates-latest-ready-skeleton",(MethodInfo *)0x0);
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823ba8e0;
  }
  else {
    pSVar2 = System_String__Concat_1969e50
                       ("v",(pAVar1->fields)._Version_k__BackingField,(MethodInfo *)0x0);
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823ba8e0;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ready,pSVar2,"changelogPreviewVersion","help-updates-latest-version",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ready,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"changelogPreviewMeta",
               "help-updates-latest-status","changelog.hub.status",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ready,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"changelogPreviewMeta",
               "help-updates-latest-date","changelog.hub.date",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = (pAVar1->fields)._ContentMarkdown_k__BackingField;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer);
    Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer___ctor
              (__this_00,pSVar2,"help-updates-latest-markdown-preview",5,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ready,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                     (ready,"Common.Refreshing","Refreshing...","changelogPreviewMeta",
                      "help-updates-latest-refreshing",(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this_01->fields).visible = "changelog.hub.refreshing";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible,"changelog.hub.refreshing");
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).bind = __this_01;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind,__this_01);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
      }
      __this_02 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__14_1;
      if (__this_02 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
        }
        object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9;
        __this_02 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this_02,object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestReady_b__14_1,
                   (MethodInfo *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__14_1 =
             (System_Action_AottgUi__o *)__this_02;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__14_1,
                   __this_02);
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
                (ready,(System_String_o *)0x0,(System_Action_AottgUi__o *)__this_02,"help-updates-open-row",
                 layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_1823ba8e0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestReady>b__14_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_1 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823ba8f0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_1
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347cd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.openLatest");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.SeeMore");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-open-latest");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.open.enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SEE MORE");
    Il2CppMethodInitialized_184347cd6 = '\x01';
  }
  key = "Changelog.SeeMore";
  pSVar1 = "SEE MORE";
  if (Il2CppMethodInitialized_184347ca2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347ca2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar1,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (row,0,pSVar1,"changelog.openLatest","help-updates-open-latest",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",
                        (MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "Changelog.SeeMore";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"Changelog.SeeMore");
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_00->fields).enabled = "changelog.hub.open.enabled";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled,"changelog.hub.open.enabled");
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestLoading>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestLoading_b__15_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loading, const MethodInfo* method);
// 0x1823ba3b0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestLoading_b__15_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loading,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347cd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-loading-skeleton");
    Il2CppMethodInitialized_184347cd7 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton
            (loading,"help-updates-latest-loading-skeleton",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestError>b__17_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestError_b__17_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* failed, const MethodInfo* method);
// 0x1823ba200

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestError_b__17_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *failed,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347cd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.TryAgain");
    il2cpp_codegen_initialize_runtime_metadata(&"Try again.");
    il2cpp_codegen_initialize_runtime_metadata(&"Retry");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Retry");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.error");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-error-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Could not load latest changelog.");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.LatestLoadFailed");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.retryLatest");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-retry");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-error");
    Il2CppMethodInitialized_184347cd8 = '\x01';
  }
  if (failed != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (failed,"Changelog.LatestLoadFailed","Could not load latest changelog.","text","help-updates-latest-error-title",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (failed,"Common.TryAgain","Try again.","stateMetaText","help-updates-latest-error",
               "changelog.hub.error",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
              (failed,0,"Common.Retry","Retry","changelog.retryLatest",
               "help-updates-latest-retry",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildHelp>b__19_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildHelp_b__19_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* help, const MethodInfo* method);
// 0x1823b9f60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ba08b: nop dword ptr [rax + rax]
// asm:   0x1823ba104: jmp 0x1823ba090

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildHelp_b__19_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *help,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  int index;
  
  if (Il2CppMethodInitialized_184347cd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MiscInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.HelpUnavailable");
    il2cpp_codegen_initialize_runtime_metadata(&"Help data unavailable.");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-help-missing");
    Il2CppMethodInitialized_184347cd9 = '\x01';
  }
  pSVar1 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(pSVar1,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar1 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
    if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_1823ba155;
    bVar2 = (*(pSVar1->klass->vtable)._16_get_IsArray.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable)._16_get_IsArray.method);
    if (bVar2) {
      pSVar1 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
      if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_1823ba155;
      pSVar3 = (*(pSVar1->klass->vtable)._11_get_Count.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._11_get_Count.method);
      if ((int)pSVar3 != 0) {
        index = 0;
        pSVar1 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
        while (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSVar3 = (*(pSVar1->klass->vtable)._11_get_Count.methodPtr)
                             (pSVar1,(pSVar1->klass->vtable)._11_get_Count.method);
          if ((int)pSVar3 <= index) {
            return;
          }
          pSVar1 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
          if (pSVar1 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
          pSVar3 = (*(pSVar1->klass->vtable)._5_get_Item.methodPtr)(pSVar1,(MethodInfo *)index);
          Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelpLink
                    (help,(SimpleJSONFixed_JSONNode_o *)pSVar3,index,(MethodInfo *)0x0);
          index = index + 1;
          pSVar1 = TypeInfo_ApplicationManagers_MiscInfo->static_fields->Help;
        }
        goto label_1823ba155;
      }
    }
  }
  if (help != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (help,"Changelog.HelpUnavailable","Help data unavailable.","stateMetaText","help-updates-help-missing",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
label_1823ba155:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___ctor (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___ctor(Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c__DisplayClass18_0$$<BuildLatestState>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___BuildLatestState_b__0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* state, const MethodInfo* method);
// 0x1823bcdf0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___BuildLatestState_b__0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *state,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *fallback;
  System_String_o *id;
  
  if (Il2CppMethodInitialized_184347cda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"-text");
    Il2CppMethodInitialized_184347cda = '\x01';
  }
  key = (__this->fields).textKey;
  fallback = (__this->fields).text;
  id = System_String__Concat_1969e50((__this->fields).id,"-text",(MethodInfo *)0x0);
  if (state != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (state,key,fallback,"stateMetaText",id,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Title (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x1823b3330

System_String_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347cc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.HelpUpdates");
    il2cpp_codegen_initialize_runtime_metadata(&"Help & Updates");
    Il2CppMethodInitialized_184347cc4 = '\x01';
  }
  key = "Changelog.HelpUpdates";
  pSVar1 = "Help & Updates";
  if (Il2CppMethodInitialized_184347ca2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347ca2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x1823b3300

System_String_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347cc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"question");
    Il2CppMethodInitialized_184347cc5 = '\x01';
  }
  return "question";
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Variant(Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, MethodInfo* method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x1823b31d0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347cc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347cc6 = '\x01';
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
// 0x1823b30e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347cc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347cc7 = '\x01';
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
// 0x1823b1610

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body
               ,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347cc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Current version");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-current-version");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-section-gap");
    il2cpp_codegen_initialize_runtime_metadata(&": v10.31.2026");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.CurrentVersion");
    Il2CppMethodInitialized_184347cc8 = '\x01';
  }
  key = "Changelog.CurrentVersion";
  pSVar1 = "Current version";
  if (Il2CppMethodInitialized_184347ca2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347ca2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar1,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50(pSVar1,": v10.31.2026",(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,pSVar1,"stateMetaText","help-updates-current-version",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestCard(body,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,(System_String_o *)0x0,(System_Action_AottgUi__o *)0x0,"help-updates-section-gap",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelp(body,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x1823b1830

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347cc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Close");
    Il2CppMethodInitialized_184347cc9 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Close","Close","overlay.close",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestCard
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestCard (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x1823b1e00

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestCard
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347cca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestCard_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"CHANGELOGS");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.SectionChangelogs");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogSectionHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-card");
    Il2CppMethodInitialized_184347cca = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (body,"Changelog.SectionChangelogs","CHANGELOGS","changelogSectionHeader","help-updates-latest-title",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    }
    style = "row";
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__13_0;
    if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9;
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestCard_b__13_0,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__13_0 =
           (System_Action_AottgUi__o *)__this;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__13_0,__this);
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,14.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,(System_Action_AottgUi__o *)__this,"help-updates-latest-card",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestReady (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x1823b25c0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestReady
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  Il2CppObject *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347ccb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestReady_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-ready");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.ready");
    Il2CppMethodInitialized_184347ccb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)
    ;
  }
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__14_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestReady_b__14_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__14_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__14_0,__this);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)0x0,(System_Action_AottgUi__o *)__this,"help-updates-latest-ready",
                        layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.hub.ready";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"changelog.hub.ready");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestLoading (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x1823b2340

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  Il2CppObject *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347ccc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestLoading_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-loading");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.loading");
    Il2CppMethodInitialized_184347ccc = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)
    ;
  }
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__15_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestLoading_b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__15_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__15_0,__this);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)0x0,(System_Action_AottgUi__o *)__this,"help-updates-latest-loading",
                        layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.hub.loading";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"changelog.hub.loading");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildPreviewSkeleton
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* idPrefix, const MethodInfo* method);
// 0x1823b2a60

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *idPrefix,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184347ccd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-line-3");
    il2cpp_codegen_initialize_runtime_metadata(&"-version");
    il2cpp_codegen_initialize_runtime_metadata(&"-line-0");
    il2cpp_codegen_initialize_runtime_metadata(&"-line-1");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"-line-2");
    Il2CppMethodInitialized_184347ccd = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(idPrefix,"-version",(MethodInfo *)0x0);
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
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (ui,pSVar1,pGVar4,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50(idPrefix,"-line-0",(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (ui,pSVar1,pGVar4,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50(idPrefix,"-line-1",(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(92.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (ui,pSVar1,pGVar4,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50(idPrefix,"-line-2",(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(78.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (ui,pSVar1,pGVar4,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50(idPrefix,"-line-3",(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(54.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (ui,pSVar1,pGVar4,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestError (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x1823b20c0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestError
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  Il2CppObject *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347cce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestError_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-latest-failed");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.hub.failed");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184347cce = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c)
    ;
  }
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__17_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildLatestError_b__17_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__17_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__17_0,__this);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)0x0,(System_Action_AottgUi__o *)__this,"help-updates-latest-failed",
                        layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.hub.failed";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"changelog.hub.failed");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestState (Gisketch_Aottg2UI_Code_AottgUi_o* card, System_String_o* visibleKey, System_String_o* textKey, System_String_o* text, System_String_o* id, const MethodInfo* method);
// 0x1823b2840

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestState
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,System_String_o *visibleKey,System_String_o *textKey,
               System_String_o *text,System_String_o *id,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347ccf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c__DisplayClass18_0_BuildLatestState_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184347ccf = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c__DisplayClass18_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o *)0x0) {
    (object->fields).textKey = textKey;
    Il2CppCodeGenWriteBarrier(&(object->fields).textKey,textKey);
    (object->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(object->fields).text,text);
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c__DisplayClass18_0_BuildLatestState_b__0
               ,(MethodInfo *)0x0);
    id_00 = (object->fields).id;
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
                         (card,(System_String_o *)0x0,(System_Action_AottgUi__o *)__this,id_00,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_00->fields).visible = visibleKey;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,visibleKey);
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar1->fields).bind = __this_00;
          Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildHelp
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelp (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x1823b1b40

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelp
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347cd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildHelp_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.SectionHelp");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-help-title");
    il2cpp_codegen_initialize_runtime_metadata(&"HELP");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-help");
    il2cpp_codegen_initialize_runtime_metadata(&"row");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogSectionHeader");
    Il2CppMethodInitialized_184347cd0 = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (body,"Changelog.SectionHelp","HELP","changelogSectionHeader","help-updates-help-title",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
    }
    style = "row";
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__19_0;
    if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9;
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c_BuildHelp_b__19_0,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__19_0 =
           (System_Action_AottgUi__o *)__this;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_c->static_fields->__9__19_0,__this);
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,14.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,(System_Action_AottgUi__o *)__this,"help-updates-help",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildHelpLink
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelpLink (Gisketch_Aottg2UI_Code_AottgUi_o* help, SimpleJSONFixed_JSONNode_o* node, int32_t index, const MethodInfo* method);
// 0x1823b18b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b1ada: mov rax, qword ptr [rip + 0x1cefd8f]  ; "Icons/material-icons/integration_instructions"
// asm:   0x1823b1ae1: jmp 0x1823b1aea
// asm:   0x1823b1ae3: mov rax, qword ptr [rip + 0x1cefe66]  ; "Icons/material-icons/map"

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelpLink
               (Gisketch_Aottg2UI_Code_AottgUi_o *help,SimpleJSONFixed_JSONNode_o *node,int32_t index,
               MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_String_o *value;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *icon;
  int32_t local_res18 [2];
  
  local_res18[0] = index;
  if (Il2CppMethodInitialized_184347cd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.openHelpLink");
    il2cpp_codegen_initialize_runtime_metadata(&"help-updates-link-");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Help link");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.HelpLink");
    Il2CppMethodInitialized_184347cd1 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((node == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"Title"),
       pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_1823b1b36;
    pSVar1 = pSVar3->klass;
    value = (System_String_o *)
            (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                      (pSVar3,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                       (MethodInfo *)pSVar1);
  }
  else {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  bVar2 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  pSVar5 = "Changelog.HelpLink";
  pSVar4 = "Help link";
  if (bVar2) {
    if (Il2CppMethodInitialized_184347ca2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347ca2 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    value = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar5,pSVar4,(MethodInfo *)0x0);
  }
  pSVar4 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_1969e50("help-updates-link-",pSVar4,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347cd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/material-icons/map");
    il2cpp_codegen_initialize_runtime_metadata(&"map");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/material-icons/integration_instructions");
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"logic");
    Il2CppMethodInitialized_184347cd2 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar5 = System_String__ToLowerInvariant(value,(MethodInfo *)0x0);
  }
  if (pSVar5 != (System_String_o *)0x0) {
    bVar2 = System_String__Contains(pSVar5,"map",(MethodInfo *)0x0);
    icon = "Icons/material-icons/map";
    if ((!bVar2) &&
       (bVar2 = System_String__Contains(pSVar5,"logic",(MethodInfo *)0x0),
       icon = "Icons/material-icons/integration_instructions", !bVar2)) {
      System_String__Contains(pSVar5,"code",(MethodInfo *)0x0);
      icon = "Icons/material-icons/integration_instructions";
    }
    if (help != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Button
                (help,3,value,"changelog.openHelpLink",pSVar4,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
      return;
    }
  }
label_1823b1b36:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$HelpIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__HelpIcon (System_String_o* title, const MethodInfo* method);
// 0x1823b3000

System_String_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__HelpIcon(System_String_o *title,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this;
  
  if (Il2CppMethodInitialized_184347cd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/material-icons/map");
    il2cpp_codegen_initialize_runtime_metadata(&"map");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/material-icons/integration_instructions");
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"logic");
    Il2CppMethodInitialized_184347cd2 = '\x01';
  }
  if (title == (System_String_o *)0x0) {
    __this = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    __this = System_String__ToLowerInvariant(title,(MethodInfo *)0x0);
  }
  if (__this != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(__this,"map",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Contains(__this,"logic",(MethodInfo *)0x0);
      if (!bVar1) {
        System_String__Contains(__this,"code",(MethodInfo *)0x0);
      }
      return "Icons/material-icons/integration_instructions";
    }
    return "Icons/material-icons/map";
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___ctor (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___ctor(Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


