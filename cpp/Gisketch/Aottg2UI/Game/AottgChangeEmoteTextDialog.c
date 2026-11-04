// Type: Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangeEmoteTextDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x181e0f2b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344c46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Change Emote Text");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.ChangeEmoteText");
    Il2CppMethodInitialized_184344c46 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("MainMenu.Profile.ChangeEmoteText","Change Emote Text",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x181e0f280

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344c47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/chat");
    Il2CppMethodInitialized_184344c47 = '\x01';
  }
  return "material-icons/chat";
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_GuardUnsavedChanges
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_GuardUnsavedChanges (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_GuardUnsavedChanges(Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, MethodInfo* method)

{
  return true;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x181e0f180

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344c48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344c48 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e0ed00

void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  byte bVar1;
  int32_t index;
  Settings_ListSetting_StringSetting__o *__this_00;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Settings_BaseSetting_o *pSVar3;
  void **ppvVar4;
  
  if (Il2CppMethodInitialized_184344c49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgEmoteEditSelection);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-change-emote-text-input");
    il2cpp_codegen_initialize_runtime_metadata(&"Text emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Text Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.TextEmotePlaceholder");
    Il2CppMethodInitialized_184344c49 = '\x01';
  }
  index = TypeInfo_Gisketch_Aottg2UI_Game_AottgEmoteEditSelection->static_fields->TextIndex;
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__FormInput
                       (body,"profile-change-emote-text-input","Text Emote","Text emote",0,
                        "inputField",layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x28,
                        (System_Action_GisketchActionContext__o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0
                       );
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).textKey = "MainMenu.Profile.TextEmotePlaceholder";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).textKey,"MainMenu.Profile.TextEmotePlaceholder");
      if (Il2CppMethodInitialized_184344c4b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
        Il2CppMethodInitialized_184344c4b = '\x01';
      }
      if (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings == (Settings_EmoteSettings_o *)0x0)
      {
        ppvVar4 = *(void ***)(g_data_184354e50 + 0xb8);
label_181e0ef8c:
        value = *ppvVar4;
        (pGVar2->fields).value = value;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value,value);
        return;
      }
      __this_00 = (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings->fields).TextEmotes;
      if (__this_00 != (Settings_ListSetting_StringSetting__o *)0x0) {
        pSVar3 = Settings_ListSetting_object___GetItemAt
                           ((Settings_ListSetting_T__o *)__this_00,index,
                            (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
        if (pSVar3 != (Settings_BaseSetting_o *)0x0) {
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((pSVar3->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar3,TypeInfo_Settings_StringSetting);
          }
          ppvVar4 = &(*(uint64_t *)((char *)pSVar3 + 0x20));
          goto label_181e0ef8c;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x181e0efd0

void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344c4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.emote.text.save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_184344c4a = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","overlay.close",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
              (footer,"Common.Save","Save","profile.emote.text.save",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__TextValue (int32_t index, const MethodInfo* method);
// 0x181e0f090

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog__TextValue(int32_t index,MethodInfo *method)

{
  byte bVar1;
  Settings_ListSetting_StringSetting__o *__this;
  Settings_BaseSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344c4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344c4b = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings != (Settings_EmoteSettings_o *)0x0) {
    __this = (TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings->fields).TextEmotes;
    if (__this != (Settings_ListSetting_StringSetting__o *)0x0) {
      pSVar2 = Settings_ListSetting_object___GetItemAt
                         ((Settings_ListSetting_T__o *)__this,index,
                          (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
      if (pSVar2 != (Settings_BaseSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if ((bVar1 <= (pSVar2->klass->_2).typeHierarchyDepth) &&
           ((pSVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          return (*(uint64_t *)((char *)pSVar2 + 0x20));
        }
        il2cpp_codegen_raise_invalid_cast_exception(pSVar2,TypeInfo_Settings_StringSetting);
      }
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog___ctor(Gisketch_Aottg2UI_Game_AottgChangeEmoteTextDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


