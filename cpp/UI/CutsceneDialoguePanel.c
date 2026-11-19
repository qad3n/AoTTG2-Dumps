// Type: UI.CutsceneDialoguePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/CutsceneDialoguePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CutsceneDialoguePopup.cs
// --------------------------------

// UI.CutsceneDialoguePanel$$get_EscapeBehavior
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_EscapeBehavior (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d5f0

int32_t UI_CutsceneDialoguePanel__get_EscapeBehavior(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.CutsceneDialoguePanel$$get_Title
// il2cpp: System_String_o* UI_CutsceneDialoguePanel__get_Title (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d600

System_String_o * UI_CutsceneDialoguePanel__get_Title(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.CutsceneDialoguePanel$$get_Width
// il2cpp: float UI_CutsceneDialoguePanel__get_Width (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d620

float UI_CutsceneDialoguePanel__get_Width(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 600.0;
}


// UI.CutsceneDialoguePanel$$get_Height
// il2cpp: float UI_CutsceneDialoguePanel__get_Height (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d630

float UI_CutsceneDialoguePanel__get_Height(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 224.0;
}


// UI.CutsceneDialoguePanel$$get_TopBarHeight
// il2cpp: float UI_CutsceneDialoguePanel__get_TopBarHeight (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d640

float UI_CutsceneDialoguePanel__get_TopBarHeight(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.CutsceneDialoguePanel$$get_BottomBarHeight
// il2cpp: float UI_CutsceneDialoguePanel__get_BottomBarHeight (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d650

float UI_CutsceneDialoguePanel__get_BottomBarHeight(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.CutsceneDialoguePanel$$get_VerticalPadding
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_VerticalPadding (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d660

int32_t UI_CutsceneDialoguePanel__get_VerticalPadding(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.CutsceneDialoguePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_HorizontalPadding (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d670

int32_t UI_CutsceneDialoguePanel__get_HorizontalPadding(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CutsceneDialoguePanel$$get_VerticalSpacing
// il2cpp: float UI_CutsceneDialoguePanel__get_VerticalSpacing (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d680

float UI_CutsceneDialoguePanel__get_VerticalSpacing(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.CutsceneDialoguePanel$$get_PanelAlignment
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_PanelAlignment (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d690

int32_t UI_CutsceneDialoguePanel__get_PanelAlignment(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.CutsceneDialoguePanel$$get_PopupAnimationType
// il2cpp: int32_t UI_CutsceneDialoguePanel__get_PopupAnimationType (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d6a0

int32_t UI_CutsceneDialoguePanel__get_PopupAnimationType
                  (UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.CutsceneDialoguePanel$$get_AnimationTime
// il2cpp: float UI_CutsceneDialoguePanel__get_AnimationTime (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d6b0

float UI_CutsceneDialoguePanel__get_AnimationTime(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.CutsceneDialoguePanel$$get_ThemePanel
// il2cpp: System_String_o* UI_CutsceneDialoguePanel__get_ThemePanel (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1d6c0

System_String_o *
UI_CutsceneDialoguePanel__get_ThemePanel(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547db4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CutsceneDialoguePanel");
    Il2CppMethodInitialized_07547db4 = '\x01';
  }
  return "CutsceneDialoguePanel";
}


// UI.CutsceneDialoguePanel$$Setup
// il2cpp: void UI_CutsceneDialoguePanel__Setup (UI_CutsceneDialoguePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d1d6f0

void UI_CutsceneDialoguePanel__Setup
               (UI_CutsceneDialoguePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **targetAddress;
  Settings_InputSettings_o *pSVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  System_String_o *arg0;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar8;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_UI_RawImage_o *pUVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_07547db5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Cutscene");
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Profile/Levi1Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"SkipHint");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547db5 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar6 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
    UI_ElementFactory__CreateHorizontalGroup(pUVar7,0.0,0,(MethodInfo *)0x0);
    pUVar6 = UI_ElementFactory__CreateDefaultLabel
                       (pUVar7,__this_00,"",0,3,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar5 = UI_UIManager__GetLocale
                       ("InGame","Cutscene","SkipHint",
                        "","",(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar1 != (Settings_InputSettings_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_GeneralInputSettings_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).SkipCutscene, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
      arg0 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
      pSVar5 = System_String__Format(pSVar5,(Il2CppObject *)arg0,(MethodInfo *)0x0);
      __this_01 = UI_ElementFactory__CreateDefaultLabel(pUVar7,__this_00,pSVar5,0,5,(MethodInfo *)0x0);
      UI_ElementFactory__CreateHorizontalGroup(pUVar7,0.0,0,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar6,(MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
        fVar11 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                           (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
        if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar8->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar8,fVar11 * 0.5 + -30.0,(pUVar8->klass->vtable)._36_set_preferredWidth.method);
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            pUVar8 = UnityEngine_GameObject__GetComponent_object_
                               (__this_01,
                                (MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            fVar11 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                               (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
            if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
              (*(pUVar8->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar8,fVar11 * 0.5 + -30.0,(pUVar8->klass->vtable)._36_set_preferredWidth.method);
              (__this->fields)._labelRight = __this_01;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._labelRight);
              pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar6,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_Text);
              (__this->fields)._titleLabel = pUVar9;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._titleLabel);
              UI_BasePanel__CreateHorizontalDivider
                        ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
              UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,0.0,0,(MethodInfo *)0x0);
              pUVar6 = UI_ElementFactory__CreateHorizontalGroup
                                 ((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  parent_00 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                  pUVar6 = UI_ElementFactory__CreateRawImage
                                     (parent_00,__this_00,"Icons/Profile/Levi1Icon",128.0,128.0,(MethodInfo *)0x0)
                  ;
                  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                        (pUVar6,(MethodInfo_353B730 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_RawImage);
                    (__this->fields)._image = pUVar10;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
                    pUVar7 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                    pUVar6 = UI_ElementFactory__CreateDefaultLabel
                                       (pUVar7,__this_00,"",0,3,(MethodInfo *)0x0);
                    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar6,(MethodInfo_353B730 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Text);
                      targetAddress = &(__this->fields)._contentLabel;
                      (__this->fields)._contentLabel = pUVar9;
                      Il2CppCodeGenWriteBarrier(targetAddress);
                      pUVar9 = (__this->fields)._contentLabel;
                      if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                        pUVar8 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar9,
                                            (MethodInfo_34B0830 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                        if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                          (*(pUVar8->klass->vtable)._38_set_preferredHeight.methodPtr)
                                    (pUVar8,128.0,(pUVar8->klass->vtable)._38_set_preferredHeight.method);
                          pUVar9 = *targetAddress;
                          if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                            pUVar8 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar9,
                                                (MethodInfo_34B0830 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
                            fVar11 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                                               (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
                            iVar4 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                                              (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method
                                              );
                            if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                              (*(pUVar8->klass->vtable)._36_set_preferredWidth.methodPtr)
                                        (pUVar8,(fVar11 - ((float)iVar4 + (float)iVar4)) + -128.0 + -10.0,
                                         (pUVar8->klass->vtable)._36_set_preferredWidth.method);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CutsceneDialoguePanel$$Show
// il2cpp: void UI_CutsceneDialoguePanel__Show (UI_CutsceneDialoguePanel_o* __this, System_String_o* icon, System_String_o* title, System_String_o* content, bool full, const MethodInfo* method);
// 0x5d1dc10

void UI_CutsceneDialoguePanel__Show
               (UI_CutsceneDialoguePanel_o *__this,System_String_o *icon,System_String_o *title,
               System_String_o *content,bool full,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  System_String_o *path;
  UnityEngine_UI_Text_o *text;
  UnityEngine_GameObject_o *__this_01;
  System_String_o *pSVar1;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_07547db6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Profile/");
    Il2CppMethodInitialized_07547db6 = '\x01';
  }
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetProfileIcon(icon,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._image;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  pSVar1 = System_String__Concat_52f0320("Icons/Profile/",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  value = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset(path,pSVar1,true,false,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
    if ((value != (UnityEngine_Texture_o *)0x0) &&
       (value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
    text = (__this->fields)._titleLabel;
    if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    }
    UI_LanguageFonts__SetText(text,title,(MethodInfo *)0x0);
    UI_LanguageFonts__SetText((__this->fields)._contentLabel,content,(MethodInfo *)0x0);
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._labelRight;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,full,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CutsceneDialoguePanel$$.ctor
// il2cpp: void UI_CutsceneDialoguePanel___ctor (UI_CutsceneDialoguePanel_o* __this, const MethodInfo* method);
// 0x5d1dde0

void UI_CutsceneDialoguePanel___ctor(UI_CutsceneDialoguePanel_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


