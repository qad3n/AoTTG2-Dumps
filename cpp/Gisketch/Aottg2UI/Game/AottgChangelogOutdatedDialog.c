// Type: Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogOutdatedDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c___cctor (const MethodInfo* method);
// 0x5e79230

void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075487df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c);
    Il2CppMethodInitialized_075487df = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c_o* __this, const MethodInfo* method);
// 0x5e792a0

void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog.<>c$$<BuildBody>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c___BuildBody_b__13_0 (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* versions, const MethodInfo* method);
// 0x5e792b0

void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c___BuildBody_b__13_0
               (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *versions,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075487e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.outdated.currentVersion");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-outdated-latest-label");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-outdated-current");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogPreviewMeta");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.outdated.latestVersion");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.LatestVersion");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.CurrentVersion");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-outdated-latest");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogPreviewVersion");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-outdated-current-label");
    Il2CppMethodInitialized_075487e0 = '\x01';
  }
  if (versions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (versions,"Changelog.CurrentVersion","changelogPreviewMeta","changelog-outdated-current-label",(System_String_o *)0x0
             ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (versions,"-","changelogPreviewVersion","changelog-outdated-current","changelog.outdated.currentVersion",
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (versions,"Changelog.LatestVersion","changelogPreviewMeta","changelog-outdated-latest-label",(System_String_o *)0x0
             ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (versions,"-","changelogPreviewVersion","changelog-outdated-latest","changelog.outdated.latestVersion",
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o* __this, const MethodInfo* method);
// 0x5e78c70

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075487d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.UpdateRequired");
    Il2CppMethodInitialized_075487d9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Changelog.UpdateRequired",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o* __this, const MethodInfo* method);
// 0x5e78cd0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075487da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    Il2CppMethodInitialized_075487da = '\x01';
  }
  return "warning";
}


// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o* __this, const MethodInfo* method);
// 0x5e78d00

int32_t Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o* __this, const MethodInfo* method);
// 0x5e78d10

bool Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o* __this, const MethodInfo* method);
// 0x5e78d20

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075487db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075487db = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(620.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(94.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o* __this, const MethodInfo* method);
// 0x5e78e00

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075487dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_075487dc = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e78eb0

void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075487dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c_BuildBody_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.OutdatedDetail");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-outdated-detail");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-outdated-versions");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.OutdatedMessage");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogPreviewMeta");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-outdated-message");
    Il2CppMethodInitialized_075487dd = '\x01';
  }
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (body,"Changelog.OutdatedMessage","text","changelog-outdated-message",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (body,"Changelog.OutdatedDetail","changelogPreviewMeta","changelog-outdated-detail",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c->static_fields;
  __this_00 = pGVar1->__9__13_0;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c_BuildBody_b__13_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_c->static_fields;
    pGVar1->__9__13_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__13_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,4.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,12.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,style,__this_00,"changelog-outdated-versions",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x5e79150

void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075487de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.Download");
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.SeeChangelog");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.outdated.seeChangelog");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Close");
    il2cpp_codegen_initialize_runtime_metadata(&"changelog.downloadLatest");
    Il2CppMethodInitialized_075487de = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Close","overlay.close",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__SecondaryKey
            (footer,"Changelog.SeeChangelog","changelog.outdated.seeChangelog",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
            (footer,"Changelog.Download","changelog.downloadLatest",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogOutdatedDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o* __this, const MethodInfo* method);
// 0x5e79220

void Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogOutdatedDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


