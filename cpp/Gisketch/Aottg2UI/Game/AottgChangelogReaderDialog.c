// Type: Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogReaderDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___cctor (const MethodInfo* method);
// 0x1823bddf0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this;
  
  if (Il2CppMethodInitialized_184347cbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
    Il2CppMethodInitialized_184347cbf = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___ctor(Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildReady>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildReady_b__13_0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ready, const MethodInfo* method);
// 0x1823bb450

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildReady_b__13_0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ready,MethodInfo *method)

{
  ApplicationManagers_Changelog_ChangelogEntryResponse_o *pAVar1;
  System_String_o *markdown;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_184347cc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-markdown");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"Refreshing...");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Refreshing");
    Il2CppMethodInitialized_184347cc0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
  }
  if (Il2CppMethodInitialized_184347c40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
    Il2CppMethodInitialized_184347c40 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState);
  }
  pAVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogDialogState->static_fields->
           _ReaderEntry_k__BackingField;
  if (pAVar1 == (ApplicationManagers_Changelog_ChangelogEntryResponse_o *)0x0) {
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823bb634;
  }
  else {
    markdown = (pAVar1->fields)._ContentMarkdown_k__BackingField;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer);
    Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer___ctor
              (__this_00,markdown,"changelog-reader-markdown",0,(MethodInfo *)0x0);
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823bb634;
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ready,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                     (ready,"Common.Refreshing","Refreshing...","stateMetaText",
                      "changelog-reader-refreshing",(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this_01->fields).visible = "changelog.reader.refreshing";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible,"changelog.reader.refreshing");
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).bind = __this_01;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this_01);
      return;
    }
  }
label_1823bb634:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildLoading>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildLoading_b__14_0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loading, const MethodInfo* method);
// 0x1823bac90

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildLoading_b__14_0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loading,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184347cc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-line-4");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-line-0");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-title");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-line-1");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-line-3");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-loading-line-2");
    Il2CppMethodInitialized_184347cc1 = '\x01';
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
  if (loading != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
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
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
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
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
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
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
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
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
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
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loading,"changelog-reader-loading-line-4",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildError>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildError_b__15_0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* failed, const MethodInfo* method);
// 0x1823b9db0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildError_b__15_0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *failed,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.TryAgain");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.retryReader");
    il2cpp_codegen_initialize_runtime_metadata(&"Try again.");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-retry");
    il2cpp_codegen_initialize_runtime_metadata(&"Retry");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Retry");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.error");
    il2cpp_codegen_initialize_runtime_metadata(&"Could not load changelog.");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-error");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.LoadFailed");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-error-title");
    Il2CppMethodInitialized_184347cc2 = '\x01';
  }
  if (failed != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (failed,"Changelog.LoadFailed","Could not load changelog.","text","changelog-reader-error-title",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (failed,"Common.TryAgain","Try again.","stateMetaText","changelog-reader-error",
               "changelog.reader.error",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
              (failed,0,"Common.Retry","Retry","changelog.retryReader",
               "changelog-reader-retry",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___ctor(Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c__DisplayClass17_0$$<BuildStatePanel>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___BuildStatePanel_b__0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* state, const MethodInfo* method);
// 0x1823bcd50

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___BuildStatePanel_b__0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *state,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *fallback;
  System_String_o *id;
  
  if (Il2CppMethodInitialized_184347cc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"-text");
    Il2CppMethodInitialized_184347cc3 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x1823a83a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347cb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.Title");
    Il2CppMethodInitialized_184347cb5 = '\x01';
  }
  key = "Changelog.Title";
  pSVar1 = "Changelog";
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


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x1823a8370

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/material-icons/description");
    Il2CppMethodInitialized_184347cb6 = '\x01';
  }
  return "Icons/material-icons/description";
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Variant(Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, MethodInfo* method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_HeaderTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_HeaderTitleKey (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x1823a8210

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_HeaderTitleKey
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347cb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.title");
    Il2CppMethodInitialized_184347cb7 = '\x01';
  }
  return "changelog.reader.title";
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x1823a8240

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347cb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347cb8 = '\x01';
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
// 0x1823a73e0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildLoading(body,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildError(body,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347cbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog not found.");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.NotFound");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.empty");
    Il2CppMethodInitialized_184347cbd = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel
            (body,"changelog.reader.empty","Changelog.NotFound","Changelog not found.","changelog-reader-empty",
             (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildReady(body,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x1823a77b0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_184347cb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.next.enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Next");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Previous");
    il2cpp_codegen_initialize_runtime_metadata(&"Close");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.previous");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Close");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.next");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Next");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.previous.enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Prev");
    Il2CppMethodInitialized_184347cb9 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
                       (footer,"Common.Previous","Prev","changelog.previous",
                        (MethodInfo *)0x0);
    pGVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (pGVar2->fields).enabled = "changelog.reader.previous.enabled";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).enabled,"changelog.reader.previous.enabled");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,pGVar2);
        pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
                           (footer,"Common.Next","Next","changelog.next",
                            (MethodInfo *)0x0);
        pGVar2 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (pGVar2->fields).enabled = "changelog.reader.next.enabled";
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).enabled,"changelog.reader.next.enabled");
          if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar1->fields).bind = pGVar2;
            Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,pGVar2);
            Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
                      (footer,"Common.Close","Close","overlay.close",
                       (MethodInfo *)0x0);
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
// 0x1823a7c60

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildReady
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347cba == '\0') {
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
    Il2CppMethodInitialized_184347cba = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9__13_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildReady_b__13_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9__13_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9__13_0,__this)
    ;
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(430.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  contentLayout =
       Gisketch_Aottg2UI_Code_AottgUi__Layout
                 ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                  (System_String_o *)0x0,8.0,pGVar1,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                  (MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                       (body,style,(System_Action_AottgUi__o *)__this,"changelog-reader-ready",layout,
                        contentLayout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.reader.ready";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"changelog.reader.ready");
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildLoading (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x1823a79b0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347cbb == '\0') {
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
    Il2CppMethodInitialized_184347cbb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9__14_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildLoading_b__14_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9__14_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9__14_0,__this)
    ;
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,style,(System_Action_AottgUi__o *)__this,"changelog-reader-loading",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.reader.loading";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"changelog.reader.loading");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildError (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x1823a7510

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildError
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347cbc == '\0') {
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
    Il2CppMethodInitialized_184347cbc = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9__15_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c_BuildError_b__15_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9__15_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c->static_fields->__9__15_0,__this)
    ;
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,style,(System_Action_AottgUi__o *)__this,"changelog-reader-failed",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "changelog.reader.failed";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"changelog.reader.failed");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildEmpty
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildEmpty (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x1823a7480

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildEmpty
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347cbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog not found.");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.NotFound");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-reader-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.reader.empty");
    Il2CppMethodInitialized_184347cbd = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel
            (body,"changelog.reader.empty","Changelog.NotFound","Changelog not found.","changelog-reader-empty",
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildStatePanel
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* visibleKey, System_String_o* textKey, System_String_o* text, System_String_o* id, const MethodInfo* method);
// 0x1823a7fe0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *visibleKey,System_String_o *textKey,
               System_String_o *text,System_String_o *id,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184347cbe == '\0') {
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
    Il2CppMethodInitialized_184347cbe = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c__DisplayClass17_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o *)0x0) {
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
               MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_c__DisplayClass17_0_BuildStatePanel_b__0
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
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (body,"default",(System_Action_AottgUi__o *)__this,id_00,layout,
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


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___ctor(Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


