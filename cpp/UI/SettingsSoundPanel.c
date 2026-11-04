// Type: UI.SettingsSoundPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsSoundPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsSoundPanel.cs
// --------------------------------

// UI.SettingsSoundPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsSoundPanel__get_ScrollBar (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SettingsSoundPanel__get_ScrollBar(UI_SettingsSoundPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SettingsSoundPanel$$Setup
// il2cpp: void UI_SettingsSoundPanel__Setup (UI_SettingsSoundPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822f98b0

void UI_SettingsSoundPanel__Setup(UI_SettingsSoundPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  System_String_o *category;
  Settings_SoundSettings_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_IntSetting_o *setting;
  bool bVar6;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_Text_o *value;
  System_String_o *pSVar9;
  System_String_array *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Events_UnityAction_o *pUVar12;
  System_String_o *pSVar13;
  
  if (Il2CppMethodInitialized_18434764a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SettingsSoundPanel_Setup_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SettingsSoundPanel_Setup_b__3_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Menu");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"HookImpactEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"MuteMinimized");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomPlaylist");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOutEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatInput");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatAudioVolume");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseSoundEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRetractEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanGrabMusic");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelInEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatDevice");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatInputOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"AddSong");
    il2cpp_codegen_initialize_runtime_metadata(&"CrashLandEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Music");
    il2cpp_codegen_initialize_runtime_metadata(&"VoiceChatMicVolume");
    il2cpp_codegen_initialize_runtime_metadata(&"GasEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Ambient");
    il2cpp_codegen_initialize_runtime_metadata(&"Sound");
    il2cpp_codegen_initialize_runtime_metadata(&"OldHookEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Racing");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Peaceful");
    il2cpp_codegen_initialize_runtime_metadata(&"OldNapeEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"ForcePlaylist");
    il2cpp_codegen_initialize_runtime_metadata(&"OldBladeEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanVocalEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Battle");
    il2cpp_codegen_initialize_runtime_metadata(&"Volume");
    Il2CppMethodInitialized_18434764a = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar13 = "Sound";
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_SettingsPopup->_2).typeHierarchyDepth;
    if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_SettingsPopup))
    {
      il2cpp_codegen_raise_invalid_cast_exception(parent);
    }
    category = (System_String_o *)(*(uint64_t *)((char *)parent + 0xa8));
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,200.0,20.0,pSVar7,(MethodInfo *)0x0);
    pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_01,0x18,140.0,20.0,pSVar7,(MethodInfo *)0x0);
    if (pSVar2 != (Settings_SoundSettings_o *)0x0) {
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar3 = (pSVar2->fields).Volume;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"Volume","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateSliderSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,"",135.0,16.0,2,
                 0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar3 = (pSVar2->fields).Music;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"Music","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateSliderSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,"",135.0,16.0,2,
                 0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).MuteMinimized;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"MuteMinimized","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).TitanGrabMusic;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"TitanGrabMusic","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).TitanVocalEffect;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"TitanVocalEffect","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).GasEffect;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"GasEffect","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).ReelInEffect;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"ReelInEffect","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).ReelOutEffect;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"ReelOutEffect","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).HookRetractEffect;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"HookRetractEffect","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).HookImpactEffect;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"HookImpactEffect","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).CrashLandEffect;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"CrashLandEffect","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar11 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).HorseSoundEffect;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar13,"HorseSoundEffect","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar8 = UI_ElementFactory__CreateDefaultLabel
                         ((__this->fields).DoublePanelRight,__this_00,"",0,3,
                          (MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        value = UnityEngine_GameObject__GetComponent_object_
                          (pUVar8,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
        (__this->fields)._currentSongLabel = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentSongLabel,value);
        pSVar5 = (pSVar2->fields).ForcePlaylist;
        pUVar11 = (__this->fields).DoublePanelRight;
        pSVar9 = UI_UIManager__GetLocale
                           (category,pSVar13,"ForcePlaylist","",""
                            ,(MethodInfo *)0x0);
        pSVar10 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
        pSVar7 = "Default";
        if (pSVar10 != (System_String_array *)0x0) {
          if ((int)pSVar10->max_length != 0) {
            pSVar10->m_Items[0] = "Default";
            Il2CppCodeGenWriteBarrier(pSVar10->m_Items,pSVar7);
            pSVar7 = "None";
            if (1 < (uint)pSVar10->max_length) {
              pSVar10->m_Items[1] = "None";
              Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 1,pSVar7);
              pSVar7 = "Custom";
              if (2 < (uint)pSVar10->max_length) {
                pSVar10->m_Items[2] = "Custom";
                Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 2,pSVar7);
                pSVar7 = "Menu";
                if (3 < (uint)pSVar10->max_length) {
                  pSVar10->m_Items[3] = "Menu";
                  Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 3,pSVar7);
                  pSVar7 = "Ambient";
                  if (4 < (uint)pSVar10->max_length) {
                    pSVar10->m_Items[4] = "Ambient";
                    Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 4,pSVar7);
                    pSVar7 = "Peaceful";
                    if (5 < (uint)pSVar10->max_length) {
                      pSVar10->m_Items[5] = "Peaceful";
                      Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 5,pSVar7);
                      pSVar7 = "Battle";
                      if (6 < (uint)pSVar10->max_length) {
                        pSVar10->m_Items[6] = "Battle";
                        Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 6,pSVar7);
                        pSVar7 = "Racing";
                        if (7 < (uint)pSVar10->max_length) {
                          pSVar10->m_Items[7] = "Racing";
                          Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 7,pSVar7);
                          UI_ElementFactory__CreateDropdownSetting
                                    (pUVar11,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar9,pSVar10,
                                     "",160.0,40.0,300.0,(System_Nullable_float__o)0x0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,(System_Int32_array *)0x0,
                                     (MethodInfo *)0x0);
                          pSVar5 = (pSVar2->fields).CustomPlaylist;
                          if (pSVar5 != (Settings_StringSetting_o *)0x0) {
                            pSVar7 = (pSVar5->fields)._value;
                            bVar6 = System_String__op_Equality(pSVar7,"",(MethodInfo *)0x0)
                            ;
                            if (bVar6) {
                              pSVar7 = "None";
                            }
                            pUVar11 = (__this->fields).DoublePanelRight;
                            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                            }
                            pSVar9 = UI_UIManager__GetLocale
                                               (category,pSVar13,"CustomPlaylist","",
                                                "",(MethodInfo *)0x0);
                            pSVar7 = System_String__Concat_1969b70
                                               (pSVar9,": ",pSVar7,(MethodInfo *)0x0);
                            UI_ElementFactory__CreateDefaultLabel
                                      (pUVar11,__this_00,pSVar7,0,3,(MethodInfo *)0x0);
                            pUVar8 = UI_ElementFactory__CreateHorizontalGroup
                                               ((__this->fields).DoublePanelRight,10.0,3,(MethodInfo *)0x0);
                            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar11 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                              pSVar7 = UI_UIManager__GetLocale
                                                 (category,pSVar13,"AddSong",""
                                                  ,"",(MethodInfo *)0x0);
                              pUVar12 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                              UnityEngine_Events_UnityAction___ctor
                                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar12,
                                         (Il2CppObject *)__this,
                                         (intptr_t)MethodInfo_UI_SettingsSoundPanel_Setup_b__3_0,
                                         (MethodInfo *)0x0);
                              UI_ElementFactory__CreateDefaultButton
                                        (pUVar11,__this_00,pSVar7,0.0,0.0,pUVar12,(MethodInfo *)0x0);
                              pSVar7 = UI_UIManager__GetLocaleCommon("Clear",(MethodInfo *)0x0);
                              pUVar12 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                              UnityEngine_Events_UnityAction___ctor
                                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar12,
                                         (Il2CppObject *)__this,
                                         (intptr_t)MethodInfo_UI_SettingsSoundPanel_Setup_b__3_1,
                                         (MethodInfo *)0x0);
                              UI_ElementFactory__CreateDefaultButton
                                        (pUVar11,__this_00,pSVar7,0.0,0.0,pUVar12,(MethodInfo *)0x0);
                              UI_BasePanel__CreateHorizontalDivider
                                        ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,
                                         (MethodInfo *)0x0);
                              pUVar11 = (__this->fields).DoublePanelRight;
                              setting = (pSVar2->fields).VoiceChatInput;
                              pSVar7 = UI_UIManager__GetLocale
                                                 (category,pSVar13,"VoiceChatInput",""
                                                  ,"",(MethodInfo *)0x0);
                              pSVar10 = UI_UIManager__GetLocaleArray
                                                  (category,pSVar13,"VoiceChatInputOptions",
                                                   "",(MethodInfo *)0x0);
                              UI_ElementFactory__CreateDropdownSetting
                                        (pUVar11,__this_01,(Settings_BaseSetting_o *)setting,pSVar7,pSVar10,
                                         "",160.0,40.0,300.0,(System_Nullable_float__o)0x0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Int32_array *)0x0,
                                         (MethodInfo *)0x0);
                              pUVar11 = (__this->fields).DoublePanelRight;
                              pSVar5 = (pSVar2->fields).VoiceChatDevice;
                              pSVar7 = UI_UIManager__GetLocale
                                                 (category,pSVar13,"VoiceChatDevice",""
                                                  ,"",(MethodInfo *)0x0);
                              if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).
                                  cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
                              }
                              pSVar10 = ApplicationManagers_VoiceChatManager__get_MicrophoneDevices
                                                  ((MethodInfo *)0x0);
                              UI_ElementFactory__CreateDropdownSetting
                                        (pUVar11,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,pSVar10,
                                         "",160.0,40.0,300.0,(System_Nullable_float__o)0x0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Int32_array *)0x0,
                                         (MethodInfo *)0x0);
                              pUVar11 = (__this->fields).DoublePanelRight;
                              pSVar3 = (pSVar2->fields).VoiceChatMicVolume;
                              pSVar7 = UI_UIManager__GetLocale
                                                 (category,pSVar13,"VoiceChatMicVolume",""
                                                  ,"",(MethodInfo *)0x0);
                              UI_ElementFactory__CreateSliderSetting
                                        (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,
                                         "",135.0,16.0,2,0.0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              pUVar11 = (__this->fields).DoublePanelRight;
                              pSVar3 = (pSVar2->fields).VoiceChatAudioVolume;
                              pSVar7 = UI_UIManager__GetLocale
                                                 (category,pSVar13,"VoiceChatAudioVolume",""
                                                  ,"",(MethodInfo *)0x0);
                              UI_ElementFactory__CreateSliderSetting
                                        (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,
                                         "",135.0,16.0,2,0.0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              UI_BasePanel__CreateHorizontalDivider
                                        ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,
                                         (MethodInfo *)0x0);
                              pUVar11 = (__this->fields).DoublePanelRight;
                              pSVar4 = (pSVar2->fields).OldHookEffect;
                              pSVar7 = UI_UIManager__GetLocale
                                                 (category,pSVar13,"OldHookEffect",""
                                                  ,"",(MethodInfo *)0x0);
                              UI_ElementFactory__CreateToggleSetting
                                        (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                         "",30.0,30.0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              pUVar11 = (__this->fields).DoublePanelRight;
                              pSVar4 = (pSVar2->fields).OldBladeEffect;
                              pSVar7 = UI_UIManager__GetLocale
                                                 (category,pSVar13,"OldBladeEffect",""
                                                  ,"",(MethodInfo *)0x0);
                              UI_ElementFactory__CreateToggleSetting
                                        (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                         "",30.0,30.0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              pUVar11 = (__this->fields).DoublePanelRight;
                              pSVar4 = (pSVar2->fields).OldNapeEffect;
                              pSVar13 = UI_UIManager__GetLocale
                                                  (category,pSVar13,"OldNapeEffect",
                                                   "","",
                                                   (MethodInfo *)0x0);
                              UI_ElementFactory__CreateToggleSetting
                                        (pUVar11,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar13,
                                         "",30.0,30.0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          goto label_1822fa92f;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_1822fa92f:
  ThrowNullReferenceException();
}


// UI.SettingsSoundPanel$$OnButtonClick
// il2cpp: void UI_SettingsSoundPanel__OnButtonClick (UI_SettingsSoundPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822f93f0
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822f975d: mov rdx, rax
// asm:   0x1822f9760: mov rcx, rbx
// asm:   0x1822f9763: jmp 0x1822f9785
// asm:   0x1822f977e: mov rdx, qword ptr [rip + 0x1d857a3]  ; ""
// asm:   0x1822f985e: mov qword ptr [rsp + 0x30], rbx
// asm:   0x1822f9863: mov r9, rsi
// asm:   0x1822f9866: mov qword ptr [rsp + 0x28], rbx
// asm:   0x1822f986b: mov r8, r14
// asm:   0x1822f986e: mov rdx, rbp
// asm:   0x1822f9871: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1822f9876: mov rcx, rdi
// asm:   0x1822f9879: call 0x1821ca2b0  ; UI_SelectListPopup__ShowLoad()
// asm:   0x1822f987e: jmp 0x1822f97a5

void UI_SettingsSoundPanel__OnButtonClick
               (UI_SettingsSoundPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_StringSetting_o *pSVar2;
  UI_BaseMenu_o *pUVar3;
  UI_SelectListPopup_o *pUVar4;
  UI_BasePanel_o *__this_00;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  Settings_SoundSettings_o *pSVar10;
  UnityEngine_Events_UnityAction_o *__this_01;
  uint uVar11;
  
  if (Il2CppMethodInitialized_18434764b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SettingsSoundPanel_OnButtonClick_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"AddSong");
    il2cpp_codegen_initialize_runtime_metadata(&"AddFinish");
    il2cpp_codegen_initialize_runtime_metadata(&"Sound");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434764b = '\x01';
  }
  bVar6 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
  if (bVar6) {
    pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
label_1822f9765:
    if (pSVar10 == (Settings_SoundSettings_o *)0x0) goto label_1822f989d;
    pSVar2 = (pSVar10->fields).CustomPlaylist;
    pSVar9 = "";
  }
  else {
    bVar6 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
    if (bVar6) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar3 != (UI_BaseMenu_o *)0x0) {
        pUVar4 = (pUVar3->fields).SelectListPopup;
        pSVar7 = ApplicationManagers_MusicManager__GetAllSongs((MethodInfo *)0x0);
        pSVar9 = UI_UIManager__GetLocale
                           ("SettingsPopup","Sound","AddSong",
                            "","",(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_SettingsSoundPanel_OnButtonClick_b__4_0,(MethodInfo *)0x0);
        if (pUVar4 != (UI_SelectListPopup_o *)0x0) {
          UI_SelectListPopup__ShowLoad
                    (pUVar4,pSVar7,pSVar9,__this_01,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_1822f989d;
    }
    bVar6 = System_String__op_Equality(name,"AddFinish",(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((((pSVar10 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar2 = (pSVar10->fields).CustomPlaylist, pSVar2 == (Settings_StringSetting_o *)0x0)) ||
        (pSVar9 = (pSVar2->fields)._value, pSVar9 == (System_String_o *)0x0)) ||
       (pSVar8 = System_String__Split(pSVar9,0x2c,0,(MethodInfo *)0x0), pSVar8 == (System_String_array *)0x0))
    goto label_1822f989d;
    for (uVar11 = 0; (int)uVar11 < (int)pSVar8->max_length; uVar11 = uVar11 + 1) {
      if ((uint)pSVar8->max_length <= uVar11) goto label_1822f98a3;
      if (pSVar8->m_Items[(int)uVar11] == (System_String_o *)0x0) goto label_1822f989d;
      pSVar9 = System_String__Trim(pSVar8->m_Items[(int)uVar11],(MethodInfo *)0x0);
      bVar6 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
      if (bVar6) {
        if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822f989d;
        il2cpp_runtime_helper_180012890(pSVar7);
      }
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (((pUVar3 == (UI_BaseMenu_o *)0x0) ||
        (pUVar4 = (pUVar3->fields).SelectListPopup, pUVar4 == (UI_SelectListPopup_o *)0x0)) ||
       (pSVar2 = (pUVar4->fields).FinishSetting, pSVar2 == (Settings_StringSetting_o *)0x0))
    goto label_1822f989d;
    pSVar9 = (pSVar2->fields)._value;
    bVar6 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822f989d;
    if (bVar6) {
      piVar1 = &(pSVar7->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (pSVar7->fields)._items;
      if (pSVar8 == (System_String_array *)0x0) goto label_1822f989d;
      uVar11 = (pSVar7->fields)._size;
      if (uVar11 < (uint)pSVar8->max_length) {
        (pSVar7->fields)._size = uVar11 + 1;
        if ((uint)pSVar8->max_length <= uVar11) {
label_1822f98a3:
          ThrowIndexOutOfRangeException();
        }
        pSVar8->m_Items[(int)uVar11] = pSVar9;
        Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar11,pSVar9);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar9,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
      }
    }
    pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar7->fields)._size == 0) goto label_1822f9765;
    if (pSVar10 == (Settings_SoundSettings_o *)0x0) goto label_1822f989d;
    pSVar2 = (pSVar10->fields).CustomPlaylist;
    value = System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_T__o *)pSVar7,
                       (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    pSVar9 = System_String__Join(",",(System_String_array *)value,(MethodInfo *)0x0);
  }
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar9,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    __this_00 = (__this->fields).Parent;
    if (__this_00 != (UI_BasePanel_o *)0x0) {
      UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
label_1822f989d:
  ThrowNullReferenceException();
}


// UI.SettingsSoundPanel$$Update
// il2cpp: void UI_SettingsSoundPanel__Update (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x1822faa10

void UI_SettingsSoundPanel__Update(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_18434764c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentSong");
    il2cpp_codegen_initialize_runtime_metadata(&"Sound");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434764c = '\x01';
  }
  pUVar1 = (__this->fields)._currentSongLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._currentSongLabel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar3 = UI_UIManager__GetLocale
                       ("SettingsPopup","Sound","CurrentSong",
                        "","",(MethodInfo *)0x0);
    str2 = ApplicationManagers_MusicManager__GetCurrentSong((MethodInfo *)0x0);
    pSVar3 = System_String__Concat_1969b70(pSVar3,": ",str2,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
  }
  return;
}


// UI.SettingsSoundPanel$$.ctor
// il2cpp: void UI_SettingsSoundPanel___ctor (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x1822d3d10

void
UI_SettingsSoundPanel___ctor(UI_SettingsSoundPanel_o* __this, MethodInfo* method)

{
  UI_SettingsCategoryPanel___ctor((UI_SettingsSkinsHumanPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsSoundPanel$$<Setup>b__3_0
// il2cpp: void UI_SettingsSoundPanel___Setup_b__3_0 (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x1822fa990

void UI_SettingsSoundPanel___Setup_b__3_0(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434764d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    Il2CppMethodInitialized_18434764d = '\x01';
  }
  UI_SettingsSoundPanel__OnButtonClick(__this,"Add",(MethodInfo *)0x0);
  return;
}


// UI.SettingsSoundPanel$$<Setup>b__3_1
// il2cpp: void UI_SettingsSoundPanel___Setup_b__3_1 (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x1822fa9d0

void UI_SettingsSoundPanel___Setup_b__3_1(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434764e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    Il2CppMethodInitialized_18434764e = '\x01';
  }
  UI_SettingsSoundPanel__OnButtonClick(__this,"Clear",(MethodInfo *)0x0);
  return;
}


// UI.SettingsSoundPanel$$<OnButtonClick>b__4_0
// il2cpp: void UI_SettingsSoundPanel___OnButtonClick_b__4_0 (UI_SettingsSoundPanel_o* __this, const MethodInfo* method);
// 0x1822fa950

void UI_SettingsSoundPanel___OnButtonClick_b__4_0(UI_SettingsSoundPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434764f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AddFinish");
    Il2CppMethodInitialized_18434764f = '\x01';
  }
  UI_SettingsSoundPanel__OnButtonClick(__this,"AddFinish",(MethodInfo *)0x0);
  return;
}


