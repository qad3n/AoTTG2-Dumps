// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsDefaultConfirmDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o* __this, const MethodInfo* method);
// 0x1823145e0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347766 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Defaults.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Restore Default Settings");
    Il2CppMethodInitialized_184347766 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("SettingsPopup.Defaults.Title","Restore Default Settings",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__get_Variant (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__get_Variant(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o* __this, MethodInfo* method)

{
  return 1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__get_BodyScrollable(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o* __this, const MethodInfo* method);
// 0x1823144e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347767 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347767 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x1823143b0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347768 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Restore default settings? This will replace your settings and save immediately. Custom skin sets will not be changed.");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Defaults.Message");
    Il2CppMethodInitialized_184347768 = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__CalloutKey
              (body,2,"SettingsPopup.Defaults.Message","Restore default settings? This will replace your settings and save immediately. Custom skin sets will not be changed.",(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x182314420

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347769 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Restore Defaults");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"settings.confirm.default");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Defaults.Restore");
    Il2CppMethodInitialized_184347769 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","overlay.close",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
              (footer,"SettingsPopup.Defaults.Restore","Restore Defaults","settings.confirm.default",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDefaultConfirmDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


