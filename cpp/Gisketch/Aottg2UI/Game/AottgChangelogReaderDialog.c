// Type: Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogReaderDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___cctor (const MethodInfo* method);
// 0x5e7a290

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075487eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
    Il2CppMethodInitialized_075487eb = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9)
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, const MethodInfo* method);
// 0x5e7a300

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildReady>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildReady_b__13_0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ready, const MethodInfo* method);
// 0x5e7a310

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildReady_b__13_0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ready,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  ApplicationManagers_Changelog_ChangelogEntryResponse_o *pAVar3;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_075487ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-markdown");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Refreshing");
    Il2CppMethodInitialized_075487ec = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor == 0)
    goto label_05e7a491;
label_05e7a33f:
    if (g_data_0754878a != '\0') goto label_05e7a34c;
label_05e7a4a3:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
    g_data_0754878a = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor == 0)
    goto label_05e7a4c6;
label_05e7a35c:
    pAVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->static_fields->
             _ReaderEntry_k__BackingField;
    if (pAVar3 != (ApplicationManagers_Changelog_ChangelogEntryResponse_o *)0x0) goto label_05e7a370;
label_05e7a4e2:
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e7a586;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor != 0)
    goto label_05e7a33f;
label_05e7a491:
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
    if (g_data_0754878a == '\0') goto label_05e7a4a3;
label_05e7a34c:
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor != 0)
    goto label_05e7a35c;
label_05e7a4c6:
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
    pAVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->static_fields->
             _ReaderEntry_k__BackingField;
    if (pAVar3 == (ApplicationManagers_Changelog_ChangelogEntryResponse_o *)0x0) goto label_05e7a4e2;
label_05e7a370:
    pSVar1 = (pAVar3->fields)._ContentMarkdown_k__BackingField;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer);
    value = "changelog-reader-markdown";
    if (Il2CppMethodInitialized_075487d6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"changelog-markdown");
      Il2CppMethodInitialized_075487d6 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields)._markdown = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._markdown);
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar2) {
      value = "changelog-markdown";
    }
    (__this_00->fields)._id = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._id);
    (__this_00->fields)._maxLines = 0;
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e7a586;
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ready,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                     (ready,"Common.Refreshing","stateMetaText","changelog-reader-refreshing",
                      (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                      (MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this_01->fields).visible = "changelog.reader.refreshing";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).bind = __this_01;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind);
      return;
    }
  }
label_05e7a586:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildLoading>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildLoading_b__14_0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loading, const MethodInfo* method);
// 0x5e7a590

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildLoading_b__14_0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loading,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_075487ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-line-4");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-line-0");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-title");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-line-1");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-line-3");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-line-2");
    Il2CppMethodInitialized_075487ed = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(48.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(30.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (loading == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (loading,"changelog-reader-loading-title",pGVar3,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (loading,"changelog-reader-loading-line-0",pGVar3,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(96.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (loading,"changelog-reader-loading-line-1",pGVar3,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(88.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (loading,"changelog-reader-loading-line-2",pGVar3,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(76.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (loading,"changelog-reader-loading-line-3",pGVar3,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(58.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (loading,"changelog-reader-loading-line-4",pGVar3,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildError>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildError_b__15_0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* failed, const MethodInfo* method);
// 0x5e7aa80

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildError_b__15_0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *failed,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075487ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.TryAgain");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.retryReader");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-retry");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Retry");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.error");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-error");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.LoadFailed");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-error-title");
    Il2CppMethodInitialized_075487ee = '\x01';
  }
  if (failed == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (failed,"Changelog.LoadFailed","text","changelog-reader-error-title",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (failed,"Common.TryAgain","stateMetaText","changelog-reader-error","changelog.reader.error",
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
            (failed,0,"Common.Retry","changelog.retryReader","changelog-reader-retry",(System_String_o *)0x0
             ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",(MethodInfo *)0x0
            );
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x5e7a270

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c__DisplayClass17_0$$<BuildStatePanel>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___BuildStatePanel_b__0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* state, const MethodInfo* method);
// 0x5e7abf0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___BuildStatePanel_b__0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *state,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *id;
  
  if (Il2CppMethodInitialized_075487ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"-text");
    Il2CppMethodInitialized_075487ef = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x5e79440

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075487e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.Title");
    Il2CppMethodInitialized_075487e1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Changelog.Title",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x5e794a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075487e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/material-icons/description");
    Il2CppMethodInitialized_075487e2 = '\x01';
  }
  return "Icons/material-icons/description";
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x5e794d0

int32_t Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_HeaderTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_HeaderTitleKey (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x5e794e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_HeaderTitleKey
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075487e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.title");
    Il2CppMethodInitialized_075487e3 = '\x01';
  }
  return "changelog.reader.title";
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x5e79510

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075487e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075487e4 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(980.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(94.0,(MethodInfo *)0x0);
  maxHeight = Gisketch_Aottg2UI_Code_AottgUi__Percent(88.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,maxHeight,0.0,0.0,0.0,0.0,0.0,
                      0.0,0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e79600

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  MethodInfo *pMVar1;
  MethodInfo *in_R8;
  
  pMVar1 = (MethodInfo *)body;
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildLoading(body,(MethodInfo *)body);
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildError(body,pMVar1);
  if (Il2CppMethodInitialized_075487e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.NotFound");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.empty");
    Il2CppMethodInitialized_075487e9 = '\x01';
  }
  pMVar1 = (MethodInfo *)"changelog.reader.empty";
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel
            (body,"changelog.reader.empty","Changelog.NotFound","changelog-reader-empty",in_R8);
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildReady(body,pMVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x5e79ea0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075487e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.next.enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Previous");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.previous");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Close");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.next");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Next");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.previous.enabled");
    Il2CppMethodInitialized_075487e5 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
                       (footer,"Common.Previous","changelog.previous",(MethodInfo *)0x0);
    pGVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (pGVar2->fields).enabled = "changelog.reader.previous.enabled";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).enabled);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
        pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
                           (footer,"Common.Next","changelog.next",(MethodInfo *)0x0);
        pGVar2 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar2,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (pGVar2->fields).enabled = "changelog.reader.next.enabled";
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).enabled);
          if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar1->fields).bind = pGVar2;
            Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
            Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
                      (footer,"Common.Close","overlay.close",(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildReady (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e79ba0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildReady
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075487e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildReady_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-ready");
    Il2CppMethodInitialized_075487e6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields;
  __this = pGVar1->__9__13_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildReady_b__13_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields;
    pGVar1->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__13_0);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(430.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  contentLayout =
       Gisketch_Aottg2UI_Code_AottgUi__Layout
                 ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                  (System_String_o *)0x0,8.0,pGVar2,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                  (MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                       (body,style,__this,"changelog-reader-ready",layout,contentLayout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.reader.ready";
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


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildLoading (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e79680

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075487e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildLoading_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_075487e7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields;
  __this = pGVar1->__9__14_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildLoading_b__14_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields;
    pGVar1->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__14_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,style,__this,"changelog-reader-loading",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.reader.loading";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildError (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e798e0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildError
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075487e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildError_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-failed");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.failed");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_075487e8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields;
  __this = pGVar1->__9__15_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildError_b__15_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields;
    pGVar1->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__15_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,style,__this,"changelog-reader-failed",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.reader.failed";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildEmpty
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildEmpty (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e79b40

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildEmpty
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_075487e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.NotFound");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.empty");
    Il2CppMethodInitialized_075487e9 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel
            (body,"changelog.reader.empty","Changelog.NotFound","changelog-reader-empty",in_R8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildStatePanel
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* visibleKey, System_String_o* textKey, System_String_o* id, const MethodInfo* method);
// 0x5e7a060

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *visibleKey,System_String_o *textKey,
               System_String_o *id,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_075487ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c__DisplayClass17_0_BuildStatePanel_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c__DisplayClass17_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_075487ea = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c__DisplayClass17_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o *)0x0) {
    (__this->fields).textKey = textKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields).textKey);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c__DisplayClass17_0_BuildStatePanel_b__0
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
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (body,"default",__this_00,id_00,layout,
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


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x5e7a280

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


