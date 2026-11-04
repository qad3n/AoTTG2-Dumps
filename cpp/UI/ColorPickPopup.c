// Type: UI.ColorPickPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ColorPickPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ColorPickPopup.cs
// --------------------------------

// UI.ColorPickPopup$$get_Title
// il2cpp: System_String_o* UI_ColorPickPopup__get_Title (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821c0be0

System_String_o * UI_ColorPickPopup__get_Title(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346edf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorPickPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346edf = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","ColorPickPopup","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ColorPickPopup$$get_Width
// il2cpp: float UI_ColorPickPopup__get_Width (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821c0bd0

float
UI_ColorPickPopup__get_Width(UI_ColorPickPopup_o* __this, MethodInfo* method)

{
  return 520.0;
}


// UI.ColorPickPopup$$get_Height
// il2cpp: float UI_ColorPickPopup__get_Height (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821c0bd0

float
UI_ColorPickPopup__get_Height(UI_ColorPickPopup_o* __this, MethodInfo* method)

{
  return 520.0;
}


// UI.ColorPickPopup$$get_VerticalSpacing
// il2cpp: float UI_ColorPickPopup__get_VerticalSpacing (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821c0c80

float
UI_ColorPickPopup__get_VerticalSpacing(UI_ColorPickPopup_o* __this, MethodInfo* method)

{
  return 12.0;
}


// UI.ColorPickPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ColorPickPopup__get_PanelAlignment (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_ColorPickPopup__get_PanelAlignment(UI_ColorPickPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.ColorPickPopup$$Setup
// il2cpp: void UI_ColorPickPopup__Setup (UI_ColorPickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821bf750

void UI_ColorPickPopup__Setup(UI_ColorPickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (Il2CppMethodInitialized_184346ee0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_Setup_b__53_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_Setup_b__53_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346ee0 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ColorPickPopup_Setup_b__53_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ColorPickPopup_Setup_b__53_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  UI_ColorPickPopup__SetupPickerUI(__this,(MethodInfo *)0x0);
  UI_ColorPickPopup__EnsureTextures(__this,(MethodInfo *)0x0);
  return;
}


// UI.ColorPickPopup$$Show
// il2cpp: void UI_ColorPickPopup__Show (UI_ColorPickPopup_o* __this, Settings_ColorSetting_o* setting, UnityEngine_UI_Image_o* image, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x1821bf920

void UI_ColorPickPopup__Show
               (UI_ColorPickPopup_o *__this,Settings_ColorSetting_o *setting,UnityEngine_UI_Image_o *image,
               UnityEngine_Events_UnityAction_o *onChangeColor,MethodInfo *method)

{
  float fVar1;
  Settings_IntSetting_o *pSVar2;
  Utility_Color255_o *__this_00;
  bool bVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Color_o *pUVar4;
  float fVar5;
  UnityEngine_Color_o local_58;
  UnityEngine_Color_o local_48 [2];
  
  if (Il2CppMethodInitialized_184346ee1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_184346ee1 = '\x01';
  }
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    bVar3 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._setting = setting;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,setting);
    (__this->fields)._image = image;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._image,image);
    if ((setting != (Settings_ColorSetting_o *)0x0) &&
       (pSVar2 = (__this->fields)._alpha, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      (pSVar2->fields).MinValue = (setting->fields).MinAlpha;
      (__this->fields)._onChangeColor = onChangeColor;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._onChangeColor,onChangeColor);
      __this_00 = (setting->fields)._value;
      if (__this_00 != (Utility_Color255_o *)0x0) {
        pUVar4 = Utility_Color255__ToColor(local_48,__this_00,(MethodInfo *)0x0);
        local_58.fields.a = 1.0;
        local_58.fields.r = (pUVar4->fields).r;
        local_58.fields.g = (pUVar4->fields).g;
        fVar1 = (pUVar4->fields).a;
        local_58.fields.b = (pUVar4->fields).b;
        UnityEngine_Color__RGBToHSV
                  (&local_58,&(__this->fields)._hue,&(__this->fields)._saturation,&(__this->fields)._value,
                   (MethodInfo *)0x0);
        fVar5 = (float)(setting->fields).MinAlpha / 255.0;
        if (fVar5 <= fVar1) {
          fVar5 = fVar1;
        }
        if (fVar5 < 0.0) {
          fVar5 = 0.0;
        }
        else if (1.0 < fVar5) {
          fVar5 = 1.0;
        }
        (__this->fields)._alphaValue = fVar5;
        (__this->fields)._alphaTextureDirty = true;
        (__this->fields)._hexInputActive = false;
        (__this->fields)._svTextureDirty = true;
        UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,(MethodInfo *)0x0);
        if ((__this->fields)._svTextureDirty != false) {
          UI_ColorPickPopup__UpdateSVTexture(__this,(MethodInfo *)0x0);
          (__this->fields)._svTextureDirty = false;
        }
        if ((__this->fields)._alphaTextureDirty == false) {
          return;
        }
        UI_ColorPickPopup__UpdateAlphaTexture(__this,(MethodInfo *)0x0);
        (__this->fields)._alphaTextureDirty = false;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$SetupPickerUI
// il2cpp: void UI_ColorPickPopup__SetupPickerUI (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821beb80

void UI_ColorPickPopup__SetupPickerUI(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *setting;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_RawImage_o *pUVar7;
  UI_ColorPickDragArea_o *pUVar8;
  System_Action_float__float__o *pSVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_UI_LayoutElement_o *pUVar11;
  UnityEngine_UI_Image_o *value;
  UnityEngine_Events_UnityAction_o *pUVar12;
  UI_InputSettingElement_o *pUVar13;
  UnityEngine_Events_UnityAction_o *__this_03;
  System_Func_string__bool__o *__this_04;
  System_Func_string__string__o *__this_05;
  UnityEngine_RectTransform_o *local_res8;
  UnityEngine_RectTransform_o *local_res18;
  UnityEngine_RectTransform_o *local_res20;
  
  if (Il2CppMethodInitialized_184346ee2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_float_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_CleanupHexInput);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_IsHexInputValid);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_OnAlphaDragged);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_OnHexInputChanged);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_OnHexInputEndEdit);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_OnHueDragged);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_OnSVDragged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_ColorPickDragArea);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"SVContainer");
    il2cpp_codegen_initialize_runtime_metadata(&"HueContainer");
    il2cpp_codegen_initialize_runtime_metadata(&"Hex");
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&"AlphaContainer");
    il2cpp_codegen_initialize_runtime_metadata(&"AlphaImage");
    il2cpp_codegen_initialize_runtime_metadata(&"G");
    il2cpp_codegen_initialize_runtime_metadata(&"HueImage");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/Elements/ColorPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"SVImage");
    il2cpp_codegen_initialize_runtime_metadata(&"A");
    Il2CppMethodInitialized_184346ee2 = '\x01';
  }
  local_res8 = (UnityEngine_RectTransform_o *)0x0;
  local_res18 = (UnityEngine_RectTransform_o *)0x0;
  local_res20 = (UnityEngine_RectTransform_o *)0x0;
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x12,24.0,8.0,pSVar2,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x12,52.0,10.0,pSVar2,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,12.0,1,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    pUVar5 = UI_ElementFactory__CreateVerticalGroup(pUVar4,10.0,1,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      pUVar6 = UI_ElementFactory__CreateHorizontalGroup(pUVar4,10.0,1,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
        __this_02 = UI_ColorPickPopup__CreateTextureContainer
                              (__this,pUVar4,"SVContainer",260.0,260.0,&(__this->fields)._svRect,
                               (MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
          pUVar7 = UI_ColorPickPopup__CreateTextureSurface
                             (__this,pUVar4,"SVImage",&local_res8,(MethodInfo *)0x0);
          (__this->fields)._svImage = pUVar7;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._svImage,pUVar7);
          pUVar7 = (__this->fields)._svImage;
          if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
            pUVar8 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar7,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_ColorPickDragArea);
            pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_float_float);
            System_Action_float__float____ctor
                      (pSVar9,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ColorPickPopup_OnSVDragged,
                       (MethodInfo_14680D0 *)0x0);
            if (pUVar8 != (UI_ColorPickDragArea_o *)0x0) {
              (pUVar8->fields)._mode = 0;
              (pUVar8->fields)._onChanged = pSVar9;
              Il2CppCodeGenWriteBarrier(&(pUVar8->fields)._onChanged,pSVar9);
              pUVar10 = UI_ColorPickPopup__CreateHandle
                                  (__this,local_res8,(UnityEngine_Vector2_o)0x4160000041600000,
                                   (MethodInfo *)0x0);
              (__this->fields)._svHandle = pUVar10;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._svHandle,pUVar10);
              pUVar4 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
              pUVar6 = UI_ColorPickPopup__CreateTextureContainer
                                 (__this,pUVar4,"HueContainer",28.0,260.0,&(__this->fields)._hueRect,
                                  (MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                pUVar4 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
                pUVar7 = UI_ColorPickPopup__CreateTextureSurface
                                   (__this,pUVar4,"HueImage",&local_res18,(MethodInfo *)0x0);
                (__this->fields)._hueImage = pUVar7;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._hueImage,pUVar7);
                pUVar7 = (__this->fields)._hueImage;
                if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
                  pUVar8 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar7,
                                      (MethodInfo_6651A0 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_ColorPickDragArea);
                  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_float_float);
                  System_Action_float__float____ctor
                            (pSVar9,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ColorPickPopup_OnHueDragged
                             ,(MethodInfo_14680D0 *)0x0);
                  if (pUVar8 != (UI_ColorPickDragArea_o *)0x0) {
                    (pUVar8->fields)._mode = 2;
                    (pUVar8->fields)._onChanged = pSVar9;
                    Il2CppCodeGenWriteBarrier(&(pUVar8->fields)._onChanged,pSVar9);
                    pUVar10 = UI_ColorPickPopup__CreateHandle
                                        (__this,local_res18,(UnityEngine_Vector2_o)0x4040000041c00000,
                                         (MethodInfo *)0x0);
                    (__this->fields)._hueHandle = pUVar10;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._hueHandle,pUVar10);
                    pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                    pUVar5 = UI_ColorPickPopup__CreateTextureContainer
                                       (__this,pUVar4,"AlphaContainer",260.0,24.0,
                                        &(__this->fields)._alphaRect,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                      pUVar7 = UI_ColorPickPopup__CreateTextureSurface
                                         (__this,pUVar4,"AlphaImage",&local_res20,(MethodInfo *)0x0);
                      (__this->fields)._alphaImage = pUVar7;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._alphaImage,pUVar7);
                      pUVar7 = (__this->fields)._alphaImage;
                      if (pUVar7 != (UnityEngine_UI_RawImage_o *)0x0) {
                        pUVar8 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar7,
                                            (MethodInfo_6651A0 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_ColorPickDragArea);
                        pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_float_float);
                        System_Action_float__float____ctor
                                  (pSVar9,(Il2CppObject *)__this,
                                   (intptr_t)MethodInfo_UI_ColorPickPopup_OnAlphaDragged,
                                   (MethodInfo_14680D0 *)0x0);
                        if (pUVar8 != (UI_ColorPickDragArea_o *)0x0) {
                          (pUVar8->fields)._mode = 1;
                          (pUVar8->fields)._onChanged = pSVar9;
                          Il2CppCodeGenWriteBarrier(&(pUVar8->fields)._onChanged,pSVar9);
                          pUVar10 = UI_ColorPickPopup__CreateHandle
                                              (__this,local_res20,(UnityEngine_Vector2_o)0x41a0000040c00000,
                                               (MethodInfo *)0x0);
                          (__this->fields)._alphaHandle = pUVar10;
                          Il2CppCodeGenWriteBarrier(&(__this->fields)._alphaHandle,pUVar10);
                          pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                          pUVar3 = UI_ElementFactory__CreateVerticalGroup(pUVar4,10.0,0,(MethodInfo *)0x0);
                          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                            pUVar5 = UI_ElementFactory__InstantiateAndBind
                                               (pUVar4,"Prefabs/Elements/ColorPreview",(MethodInfo *)0x0);
                            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                                  (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                  );
                              if (pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                (*(pUVar11->klass->vtable)._36_set_preferredWidth.methodPtr)
                                          (pUVar11,96.0,(pUVar11->klass->vtable)._36_set_preferredWidth.method
                                          );
                                pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                                    (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                    );
                                if (pUVar11 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                  (*(pUVar11->klass->vtable)._38_set_preferredHeight.methodPtr)
                                            (pUVar11,56.0,
                                             (pUVar11->klass->vtable)._38_set_preferredHeight.method);
                                  pUVar4 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar4 = UnityEngine_Transform__Find
                                                       (pUVar4,"Image",(MethodInfo *)0x0);
                                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                      value = UnityEngine_Component__GetComponent_object_
                                                        ((UnityEngine_Component_o *)pUVar4,
                                                         (MethodInfo_6651A0 *)
                                                         MethodInfo_UnityEngine_Component_GetComponent_Image);
                                      (__this->fields)._preview = value;
                                      Il2CppCodeGenWriteBarrier(&(__this->fields)._preview,value);
                                      pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0)
                                      ;
                                      pSVar1 = (__this->fields)._red;
                                      pUVar12 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)
                                                           TypeInfo_UnityEngine_Events_UnityAction);
                                      UnityEngine_Events_UnityAction___ctor
                                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar12,
                                                 (Il2CppObject *)__this,
                                                 (intptr_t)MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged,
                                                 (MethodInfo *)0x0);
                                      pUVar5 = UI_ElementFactory__CreateInputSetting
                                                         (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar1,
                                                          "R","",62.0,
                                                          34.0,false,pUVar12,
                                                          (UnityEngine_Events_UnityAction_o *)0x0,
                                                          (System_Func_string__bool__o *)0x0,
                                                          (System_Func_string__string__o *)0x0,
                                                          (MethodInfo *)0x0);
                                      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                                            (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                       );
                                        (__this->fields)._redInput = pUVar13;
                                        Il2CppCodeGenWriteBarrier(&(__this->fields)._redInput,pUVar13);
                                        pUVar4 = UnityEngine_GameObject__get_transform
                                                           (pUVar3,(MethodInfo *)0x0);
                                        pSVar1 = (__this->fields)._green;
                                        pUVar12 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                             TypeInfo_UnityEngine_Events_UnityAction);
                                        UnityEngine_Events_UnityAction___ctor
                                                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar12,
                                                   (Il2CppObject *)__this,
                                                   (intptr_t)MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged,
                                                   (MethodInfo *)0x0);
                                        pUVar5 = UI_ElementFactory__CreateInputSetting
                                                           (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar1,
                                                            "G","",62.0,
                                                            34.0,false,pUVar12,
                                                            (UnityEngine_Events_UnityAction_o *)0x0,
                                                            (System_Func_string__bool__o *)0x0,
                                                            (System_Func_string__string__o *)0x0,
                                                            (MethodInfo *)0x0);
                                        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                          pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                                              (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                            
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                       );
                                          (__this->fields)._greenInput = pUVar13;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields)._greenInput,pUVar13);
                                          pUVar4 = UnityEngine_GameObject__get_transform
                                                             (pUVar3,(MethodInfo *)0x0);
                                          pSVar1 = (__this->fields)._blue;
                                          pUVar12 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                               TypeInfo_UnityEngine_Events_UnityAction);
                                          UnityEngine_Events_UnityAction___ctor
                                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar12,
                                                     (Il2CppObject *)__this,
                                                     (intptr_t)MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged
                                                     ,(MethodInfo *)0x0);
                                          pUVar5 = UI_ElementFactory__CreateInputSetting
                                                             (pUVar4,__this_00,
                                                              (Settings_BaseSetting_o *)pSVar1,
                                                              "B","",62.0
                                                              ,34.0,false,pUVar12,
                                                              (UnityEngine_Events_UnityAction_o *)0x0,
                                                              (System_Func_string__bool__o *)0x0,
                                                              (System_Func_string__string__o *)0x0,
                                                              (MethodInfo *)0x0);
                                          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                                                (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                       );
                                            (__this->fields)._blueInput = pUVar13;
                                            Il2CppCodeGenWriteBarrier(&(__this->fields)._blueInput,pUVar13);
                                            pUVar4 = UnityEngine_GameObject__get_transform
                                                               (pUVar3,(MethodInfo *)0x0);
                                            pSVar1 = (__this->fields)._alpha;
                                            pUVar12 = il2cpp_codegen_object_new
                                                                ((Il2CppClass *)
                                                                 TypeInfo_UnityEngine_Events_UnityAction);
                                            UnityEngine_Events_UnityAction___ctor
                                                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                       pUVar12,(Il2CppObject *)__this,
                                                       (intptr_t)
                                                       MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged,
                                                       (MethodInfo *)0x0);
                                            pUVar5 = UI_ElementFactory__CreateInputSetting
                                                               (pUVar4,__this_00,
                                                                (Settings_BaseSetting_o *)pSVar1,
                                                                "A","",
                                                                62.0,34.0,false,pUVar12,
                                                                (UnityEngine_Events_UnityAction_o *)0x0,
                                                                (System_Func_string__bool__o *)0x0,
                                                                (System_Func_string__string__o *)0x0,
                                                                (MethodInfo *)0x0);
                                            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                                                  (pUVar5,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                       );
                                              (__this->fields)._alphaInput = pUVar13;
                                              Il2CppCodeGenWriteBarrier(&(__this->fields)._alphaInput,pUVar13)
                                              ;
                                              pUVar4 = UnityEngine_GameObject__get_transform
                                                                 (pUVar3,(MethodInfo *)0x0);
                                              setting = (__this->fields)._hex;
                                              pUVar12 = il2cpp_codegen_object_new
                                                                  ((Il2CppClass *)
                                                                   TypeInfo_UnityEngine_Events_UnityAction);
                                              UnityEngine_Events_UnityAction___ctor
                                                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                         pUVar12,(Il2CppObject *)__this,
                                                         (intptr_t)
                                                         MethodInfo_UI_ColorPickPopup_OnHexInputChanged,
                                                         (MethodInfo *)0x0);
                                              __this_03 = il2cpp_codegen_object_new
                                                                    ((Il2CppClass *)
                                                                     TypeInfo_UnityEngine_Events_UnityAction);
                                              UnityEngine_Events_UnityAction___ctor
                                                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                         __this_03,(Il2CppObject *)__this,
                                                         (intptr_t)
                                                         MethodInfo_UI_ColorPickPopup_OnHexInputEndEdit,
                                                         (MethodInfo *)0x0);
                                              __this_04 = il2cpp_codegen_object_new
                                                                    ((Il2CppClass *)
                                                                     TypeInfo_System_Func_string_bool);
                                              System_Func_object__bool____ctor
                                                        ((System_Predicate_object__o *)__this_04,
                                                         (Il2CppObject *)__this,
                                                         (intptr_t)
                                                         MethodInfo_UI_ColorPickPopup_IsHexInputValid,
                                                         (MethodInfo_B61EB0 *)0x0);
                                              __this_05 = il2cpp_codegen_object_new
                                                                    ((Il2CppClass *)
                                                                     TypeInfo_System_Func_string_string);
                                              System_Xml_Linq_XHashtable_ExtractKeyDelegate_object____ctor
                                                        ((
                                                       System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o
                                                       *)__this_05,(Il2CppObject *)__this,
                                                       (intptr_t)MethodInfo_UI_ColorPickPopup_CleanupHexInput,
                                                       (MethodInfo_16E67D0 *)0x0);
                                              pUVar3 = UI_ElementFactory__CreateInputSetting
                                                                 (pUVar4,__this_01,
                                                                  (Settings_BaseSetting_o *)setting,
                                                                  "Hex","",
                                                                  116.0,34.0,false,pUVar12,__this_03,__this_04
                                                                  ,__this_05,(MethodInfo *)0x0);
                                              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                                                pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                                                    (pUVar3,(MethodInfo_6F5650 *)
                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                       );
                                                (__this->fields)._hexInput = pUVar13;
                                                Il2CppCodeGenWriteBarrier(&(__this->fields)._hexInput,pUVar13)
                                                ;
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


// UI.ColorPickPopup$$OnButtonClick
// il2cpp: void UI_ColorPickPopup__OnButtonClick (UI_ColorPickPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821be220

void UI_ColorPickPopup__OnButtonClick(UI_ColorPickPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Settings_ColorSetting_o *pSVar4;
  Settings_ColorSetting_o *pSVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  bool bVar8;
  int32_t tryStart;
  int32_t tryEnd;
  int32_t finallyStart;
  int iVar9;
  UnityEngine_Color_o *pUVar10;
  Utility_Color255_o *pUVar11;
  int finallyEnd;
  UnityEngine_Color_o local_68 [5];
  
  if (Il2CppMethodInitialized_184346ee3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346ee3 = '\x01';
  }
  bVar8 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (!bVar8) {
    bVar8 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
    if (!bVar8) {
      return;
    }
    pSVar4 = (__this->fields)._setting;
    if (Il2CppMethodInitialized_184346eef == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
      Il2CppMethodInitialized_184346eef = '\x01';
    }
    pUVar10 = UI_ColorPickPopup__GetCurrentColor(local_68,__this,(MethodInfo *)0x0);
    fVar1 = (pUVar10->fields).g;
    fVar2 = (pUVar10->fields).b;
    fVar3 = (pUVar10->fields).a;
    tryStart = il2cpp_runtime_helper_181290af0((pUVar10->fields).r * 255.0,0);
    tryEnd = il2cpp_runtime_helper_181290af0(fVar1 * 255.0,0);
    finallyStart = il2cpp_runtime_helper_181290af0(fVar2 * 255.0,0);
    iVar9 = il2cpp_runtime_helper_181290af0(fVar3 * 255.0,0);
    pSVar5 = (__this->fields)._setting;
    if (pSVar5 != (Settings_ColorSetting_o *)0x0) {
      finallyEnd = (pSVar5->fields).MinAlpha;
      if ((finallyEnd <= iVar9) && (finallyEnd = 0xff, iVar9 < 0x100)) {
        finallyEnd = iVar9;
      }
      pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor
                ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar11,tryStart,tryEnd,finallyStart
                 ,finallyEnd,(MethodInfo *)0x0);
      if (pSVar4 != (Settings_ColorSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pUVar11,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
        pSVar4 = (__this->fields)._setting;
        if ((pSVar4 != (Settings_ColorSetting_o *)0x0) &&
           (pUVar11 = (pSVar4->fields)._value, pUVar11 != (Utility_Color255_o *)0x0)) {
          pUVar6 = (__this->fields)._image;
          pUVar10 = Utility_Color255__ToColor(local_68,pUVar11,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
            local_68[0].fields.r = (pUVar10->fields).r;
            local_68[0].fields.g = (pUVar10->fields).g;
            local_68[0].fields.b = (pUVar10->fields).b;
            local_68[0].fields.a = (pUVar10->fields).a;
            (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                      (pUVar6,local_68,(pUVar6->klass->vtable)._23_set_color.method);
            if ((__this->fields)._onChangeColor != (UnityEngine_Events_UnityAction_o *)0x0) {
              pUVar7 = (__this->fields)._onChangeColor;
              (*(code *)(pUVar7->fields).invoke_impl)((pUVar7->fields).method_code,(pUVar7->fields).method);
            }
            (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
            return;
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ColorPickPopup$$OnSVDragged
// il2cpp: void UI_ColorPickPopup__OnSVDragged (UI_ColorPickPopup_o* __this, float normalizedX, float normalizedY, const MethodInfo* method);
// 0x1821beb00

void UI_ColorPickPopup__OnSVDragged
               (UI_ColorPickPopup_o *__this,float normalizedX,float normalizedY,MethodInfo *method)

{
  (__this->fields)._saturation = normalizedX;
  (__this->fields)._value = normalizedY;
  (__this->fields)._svTextureDirty = (__this->fields)._svTextureDirty != false;
  (__this->fields)._alphaTextureDirty = true;
  UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,(MethodInfo *)0x0);
  return;
}


// UI.ColorPickPopup$$OnHueDragged
// il2cpp: void UI_ColorPickPopup__OnHueDragged (UI_ColorPickPopup_o* __this, float normalizedX, float normalizedY, const MethodInfo* method);
// 0x1821be950

void UI_ColorPickPopup__OnHueDragged
               (UI_ColorPickPopup_o *__this,float normalizedX,float normalizedY,MethodInfo *method)

{
  (__this->fields)._svTextureDirty = true;
  (__this->fields)._alphaTextureDirty = true;
  (__this->fields)._hue = 1.0 - normalizedY;
  UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,(MethodInfo *)0x0);
  return;
}


// UI.ColorPickPopup$$OnAlphaDragged
// il2cpp: void UI_ColorPickPopup__OnAlphaDragged (UI_ColorPickPopup_o* __this, float normalizedX, float normalizedY, const MethodInfo* method);
// 0x1821be180

void UI_ColorPickPopup__OnAlphaDragged
               (UI_ColorPickPopup_o *__this,float normalizedX,float normalizedY,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  
  if ((__this->fields)._setting == (Settings_ColorSetting_o *)0x0) {
    pSVar2 = (__this->fields)._alpha;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar1 = (pSVar2->fields).MinValue;
  }
  else {
    iVar1 = (((__this->fields)._setting)->fields).MinAlpha;
  }
  if (normalizedX < 0.0) {
    normalizedX = 0.0;
  }
  else if (1.0 < normalizedX) {
    normalizedX = 1.0;
  }
  (__this->fields)._alphaTextureDirty = true;
  (__this->fields)._svTextureDirty = (__this->fields)._svTextureDirty != false;
  (__this->fields)._alphaValue = (1.0 - (float)iVar1 / 255.0) * normalizedX + (float)iVar1 / 255.0;
  UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,(MethodInfo *)0x0);
  return;
}


// UI.ColorPickPopup$$OnRGBAInputChanged
// il2cpp: void UI_ColorPickPopup__OnRGBAInputChanged (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821be980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821bea7e: jmp 0x1821bea98

void UI_ColorPickPopup__OnRGBAInputChanged(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Color_o local_28 [2];
  
  if (Il2CppMethodInitialized_184346ee4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346ee4 = '\x01';
  }
  if ((__this->fields)._suppressInputCallbacks == false) {
    pSVar4 = (__this->fields)._red;
    if (((pSVar4 == (Settings_IntSetting_o *)0x0) ||
        (pSVar2 = (__this->fields)._green, pSVar2 == (Settings_IntSetting_o *)0x0)) ||
       (pSVar3 = (__this->fields)._blue, pSVar3 == (Settings_IntSetting_o *)0x0)) {
label_1821beaf3:
      ThrowNullReferenceException();
    }
    local_28[0].fields.a = 1.0;
    local_28[0].fields.r = (float)(pSVar4->fields)._value / 255.0;
    local_28[0].fields.b = (float)(pSVar3->fields)._value / 255.0;
    local_28[0].fields.g = (float)(pSVar2->fields)._value / 255.0;
    UnityEngine_Color__RGBToHSV
              (local_28,&(__this->fields)._hue,&(__this->fields)._saturation,&(__this->fields)._value,
               (MethodInfo *)0x0);
    if ((__this->fields)._setting == (Settings_ColorSetting_o *)0x0) {
      pSVar4 = (__this->fields)._alpha;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_1821beaf3;
      iVar1 = (pSVar4->fields).MinValue;
    }
    else {
      iVar1 = (((__this->fields)._setting)->fields).MinAlpha;
      pSVar4 = (__this->fields)._alpha;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_1821beaf3;
    }
    fVar6 = (float)(pSVar4->fields)._value / 255.0;
    fVar5 = (float)iVar1 / 255.0;
    if ((float)iVar1 / 255.0 <= fVar6) {
      fVar5 = fVar6;
    }
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (1.0 < fVar5) {
      fVar5 = 1.0;
    }
    (__this->fields)._alphaValue = fVar5;
    (__this->fields)._svTextureDirty = true;
    (__this->fields)._alphaTextureDirty = true;
    UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,(MethodInfo *)0x0);
  }
  return;
}


// UI.ColorPickPopup$$OnHexInputChanged
// il2cpp: void UI_ColorPickPopup__OnHexInputChanged (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821be660

void UI_ColorPickPopup__OnHexInputChanged(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._suppressInputCallbacks == false) {
    (__this->fields)._hexInputActive = true;
  }
  return;
}


// UI.ColorPickPopup$$OnHexInputEndEdit
// il2cpp: void UI_ColorPickPopup__OnHexInputEndEdit (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821be680
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821be7ab: mov rdi, qword ptr [rip + 0x1eebe5e]  ; "#FFFFFF"
// asm:   0x1821be7b2: jmp 0x1821be7c5
// asm:   0x1821be910: mov rdi, qword ptr [rsp + 0x60]
// asm:   0x1821be915: movaps xmm6, xmmword ptr [rsp + 0x40]

void UI_ColorPickPopup__OnHexInputEndEdit(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_String_o *a;
  float fVar6;
  float fVar7;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346ee5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346ee5 = '\x01';
  }
  if ((__this->fields)._suppressInputCallbacks == false) {
    pSVar2 = (__this->fields)._hex;
    (__this->fields)._hexInputActive = false;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) {
label_1821be939:
      ThrowNullReferenceException();
    }
    pSVar5 = (pSVar2->fields)._value;
    local_28[0].r = 0.0;
    local_28[0].g = 0.0;
    local_28[0].b = 0.0;
    local_28[0].a = 0.0;
    if (Il2CppMethodInitialized_184346ee7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"#");
      il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
      Il2CppMethodInitialized_184346ee7 = '\x01';
    }
    if (pSVar5 == (System_String_o *)0x0) {
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0);
      if (pSVar5 == (System_String_o *)0x0) goto label_1821be93f;
      a = System_String__ToUpperInvariant(pSVar5,(MethodInfo *)0x0);
      bVar4 = System_String__op_Equality
                        (a,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      pSVar5 = "#FFFFFF";
      if (!bVar4) {
        if ((a == (System_String_o *)0x0) ||
           ((bVar4 = System_String__StartsWith(a,"#",(MethodInfo *)0x0), !bVar4 &&
            (a = System_String__Concat_1969e50("#",a,(MethodInfo *)0x0),
            a == (System_String_o *)0x0)))) goto label_1821be93f;
        pSVar5 = a;
        if (9 < (a->fields)._stringLength) {
          pSVar5 = System_String__Substring_1972740(a,0,9,(MethodInfo *)0x0);
        }
      }
    }
    if (pSVar5 == (System_String_o *)0x0) {
label_1821be93f:
      ThrowNullReferenceException();
    }
    if ((((pSVar5->fields)._stringLength != 7) && ((pSVar5->fields)._stringLength != 9)) ||
       (bVar4 = UnityEngine_ColorUtility__TryParseHtmlString
                          (pSVar5,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0), !bVar4)) {
      UI_ColorPickPopup__SyncInputValuesFromCurrentColor(__this,(MethodInfo *)0x0);
      return;
    }
    if ((pSVar5->fields)._stringLength == 7) {
      fVar7 = (__this->fields)._alphaValue;
    }
    else {
      fVar7 = local_28[0].a;
    }
    local_28[0].a = 1.0;
    UnityEngine_Color__RGBToHSV
              ((UnityEngine_Color_o *)local_28,&(__this->fields)._hue,&(__this->fields)._saturation,
               &(__this->fields)._value,(MethodInfo *)0x0);
    if ((__this->fields)._setting == (Settings_ColorSetting_o *)0x0) {
      pSVar3 = (__this->fields)._alpha;
      if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_1821be939;
      iVar1 = (pSVar3->fields).MinValue;
    }
    else {
      iVar1 = (((__this->fields)._setting)->fields).MinAlpha;
    }
    fVar6 = (float)iVar1 / 255.0;
    if ((float)iVar1 / 255.0 <= fVar7) {
      fVar6 = fVar7;
    }
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (1.0 < fVar6) {
      fVar6 = 1.0;
    }
    (__this->fields)._alphaValue = fVar6;
    (__this->fields)._svTextureDirty = true;
    (__this->fields)._alphaTextureDirty = true;
    UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,(MethodInfo *)0x0);
    if ((__this->fields)._svTextureDirty != false) {
      UI_ColorPickPopup__UpdateSVTexture(__this,(MethodInfo *)0x0);
      (__this->fields)._svTextureDirty = false;
    }
    if ((__this->fields)._alphaTextureDirty != false) {
      UI_ColorPickPopup__UpdateAlphaTexture(__this,(MethodInfo *)0x0);
      (__this->fields)._alphaTextureDirty = false;
    }
  }
  return;
}


// UI.ColorPickPopup$$IsHexInputValid
// il2cpp: bool UI_ColorPickPopup__IsHexInputValid (UI_ColorPickPopup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1821be060

bool UI_ColorPickPopup__IsHexInputValid(UI_ColorPickPopup_o *__this,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint16_t character;
  System_String_o *__this_00;
  int32_t index;
  
  if (Il2CppMethodInitialized_184346ee6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_184346ee6 = '\x01';
  }
  if (value != (System_String_o *)0x0) {
    __this_00 = System_String__Trim(value,(MethodInfo *)0x0);
    if (__this_00 == (System_String_o *)0x0) {
label_1821be15a:
      ThrowNullReferenceException();
    }
    bVar1 = System_String__StartsWith(__this_00,"#",(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = System_String__Substring(__this_00,1,(MethodInfo *)0x0);
      if (__this_00 == (System_String_o *)0x0) goto label_1821be15a;
    }
    if (((__this_00->fields)._stringLength != 0) && ((__this_00->fields)._stringLength < 9)) {
      index = 0;
      while( true ) {
        if ((__this_00->fields)._stringLength <= index) {
          return true;
        }
        character = System_String__get_Chars(__this_00,index,(MethodInfo *)0x0);
        if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
        }
        bVar1 = System_Uri__IsHexDigit(character,(MethodInfo *)0x0);
        if (!bVar1) break;
        index = index + 1;
      }
    }
  }
  return false;
}


// UI.ColorPickPopup$$CleanupHexInput
// il2cpp: System_String_o* UI_ColorPickPopup__CleanupHexInput (UI_ColorPickPopup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1821bccf0

System_String_o *
UI_ColorPickPopup__CleanupHexInput(UI_ColorPickPopup_o *__this,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346ee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    Il2CppMethodInitialized_184346ee7 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pSVar2 = System_String__Trim(value,(MethodInfo *)0x0);
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar2 = System_String__ToUpperInvariant(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality
                      (pSVar2,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar1) {
      return "#FFFFFF";
    }
    if (pSVar2 != (System_String_o *)0x0) {
      bVar1 = System_String__StartsWith(pSVar2,"#",(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = System_String__Concat_1969e50("#",pSVar2,(MethodInfo *)0x0);
        if (pSVar2 == (System_String_o *)0x0) goto label_1821bcde8;
      }
      if (9 < (pSVar2->fields)._stringLength) {
        pSVar2 = System_String__Substring_1972740(pSVar2,0,9,(MethodInfo *)0x0);
      }
      return pSVar2;
    }
  }
label_1821bcde8:
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$TryParseCompleteHexColor
// il2cpp: bool UI_ColorPickPopup__TryParseCompleteHexColor (UI_ColorPickPopup_o* __this, System_String_o* input, UnityEngine_Color_o* color, const MethodInfo* method);
// 0x1821bff30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c003b: mov rbx, qword ptr [rip + 0x1eea5ce]  ; "#FFFFFF"
// asm:   0x1821c0042: jmp 0x1821c0055

bool UI_ColorPickPopup__TryParseCompleteHexColor
               (UI_ColorPickPopup_o *__this,System_String_o *input,UnityEngine_Color_o *color,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *a;
  bool bVar2;
  UnityEngine_Color_Fields local_18;
  
  bVar2 = Il2CppMethodInitialized_184346ee7 == '\0';
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  (color->fields).r = 1.0;
  (color->fields).g = 1.0;
  (color->fields).b = 1.0;
  (color->fields).a = 1.0;
  if (bVar2) {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    Il2CppMethodInitialized_184346ee7 = '\x01';
  }
  if (input == (System_String_o *)0x0) {
    pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    pSVar1 = System_String__Trim(input,(MethodInfo *)0x0);
    if (pSVar1 == (System_String_o *)0x0) goto label_1821c00ba;
    a = System_String__ToUpperInvariant(pSVar1,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality
                      (a,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    pSVar1 = "#FFFFFF";
    if (!bVar2) {
      if ((a == (System_String_o *)0x0) ||
         ((bVar2 = System_String__StartsWith(a,"#",(MethodInfo *)0x0), !bVar2 &&
          (a = System_String__Concat_1969e50("#",a,(MethodInfo *)0x0),
          a == (System_String_o *)0x0)))) goto label_1821c00ba;
      pSVar1 = a;
      if (9 < (a->fields)._stringLength) {
        pSVar1 = System_String__Substring_1972740(a,0,9,(MethodInfo *)0x0);
      }
    }
  }
  if (pSVar1 != (System_String_o *)0x0) {
    if ((((pSVar1->fields)._stringLength == 7) || ((pSVar1->fields)._stringLength == 9)) &&
       (bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                          (pSVar1,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0), bVar2)) {
      if ((pSVar1->fields)._stringLength == 7) {
        local_18.a = (__this->fields)._alphaValue;
      }
      (color->fields).r = local_18.r;
      (color->fields).g = local_18.g;
      (color->fields).b = local_18.b;
      (color->fields).a = local_18.a;
      return true;
    }
    return false;
  }
label_1821c00ba:
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$ApplyCurrentColorToUI
// il2cpp: void UI_ColorPickPopup__ApplyCurrentColorToUI (UI_ColorPickPopup_o* __this, bool syncInputs, const MethodInfo* method);
// 0x1821bcc10

void UI_ColorPickPopup__ApplyCurrentColorToUI(UI_ColorPickPopup_o *__this,bool syncInputs,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346ee8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346ee8 = '\x01';
  }
  UI_ColorPickPopup__UpdatePickerHandles(__this,(MethodInfo *)0x0);
  pUVar5 = UI_ColorPickPopup__GetCurrentColor((UnityEngine_Color_o *)local_28,__this,(MethodInfo *)0x0);
  pUVar1 = (__this->fields)._preview;
  uVar2._0_4_ = (pUVar5->fields).r;
  uVar2._4_4_ = (pUVar5->fields).g;
  uVar3._0_4_ = (pUVar5->fields).b;
  uVar3._4_4_ = (pUVar5->fields).a;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar1 = (__this->fields)._preview;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_28[0]._0_8_ = uVar2;
    local_28[0]._8_8_ = uVar3;
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,(UnityEngine_Color_o *)local_28,(pUVar1->klass->vtable)._23_set_color.method);
  }
  if (syncInputs) {
    UI_ColorPickPopup__SyncInputValuesFromCurrentColor(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.ColorPickPopup$$SyncInputValuesFromCurrentColor
// il2cpp: void UI_ColorPickPopup__SyncInputValuesFromCurrentColor (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821bfb00

void UI_ColorPickPopup__SyncInputValuesFromCurrentColor(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  Settings_IntSetting_o *pSVar6;
  UI_InputSettingElement_o *pUVar7;
  UnityEngine_UI_InputField_o *pUVar8;
  Settings_StringSetting_o *__this_00;
  bool bVar9;
  int32_t iVar10;
  UnityEngine_Color_o *pUVar11;
  System_String_o *pSVar12;
  undefined1 auVar15 [12];
  undefined1 auVar14 [16];
  UnityEngine_Color_o local_68 [6];
  float fVar13;
  
  if (Il2CppMethodInitialized_184346ee9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184346ee9 = '\x01';
  }
  (__this->fields)._suppressInputCallbacks = true;
  pUVar11 = UI_ColorPickPopup__GetCurrentColor(local_68,__this,(MethodInfo *)0x0);
  pSVar6 = (__this->fields)._red;
  fVar1 = (pUVar11->fields).r;
  fVar2 = (pUVar11->fields).g;
  fVar3 = (pUVar11->fields).b;
  fVar4 = (pUVar11->fields).a;
  iVar10 = il2cpp_runtime_helper_181290af0(fVar1 * 255.0,0);
  if (pSVar6 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar6,iVar10,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar6 = (__this->fields)._green;
    iVar10 = il2cpp_runtime_helper_181290af0(fVar2 * 255.0,0);
    if (pSVar6 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar6,iVar10,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar6 = (__this->fields)._blue;
      iVar10 = il2cpp_runtime_helper_181290af0(fVar3 * 255.0,0);
      if (pSVar6 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar6,iVar10,
                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        if ((__this->fields)._setting == (Settings_ColorSetting_o *)0x0) {
          pSVar6 = (__this->fields)._alpha;
          if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_1821bff26;
          iVar5 = (pSVar6->fields).MinValue;
        }
        else {
          iVar5 = (((__this->fields)._setting)->fields).MinAlpha;
        }
        pSVar6 = (__this->fields)._alpha;
        auVar15 = ZEXT812(0);
        fVar13 = (float)iVar5 / 255.0;
        if ((float)iVar5 / 255.0 < fVar4) {
          auVar15 = (undefined1  [12])0x0;
          fVar13 = fVar4;
        }
        auVar14._0_4_ = fVar13 * 255.0;
        auVar14._4_12_ = auVar15;
        iVar10 = il2cpp_runtime_helper_181290af0(auVar14._0_8_,0);
        if (pSVar6 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar6,iVar10,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pUVar7 = (__this->fields)._redInput;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar9) {
            pUVar7 = (__this->fields)._redInput;
            if ((pUVar7 == (UI_InputSettingElement_o *)0x0) ||
               (pUVar8 = (pUVar7->fields)._inputField, pUVar8 == (UnityEngine_UI_InputField_o *)0x0))
            goto label_1821bff26;
            if ((pUVar8->fields).m_AllowInput == false) {
              (*(pUVar7->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar7,(pUVar7->klass->vtable)._6_SyncElement.method);
            }
          }
          pUVar7 = (__this->fields)._greenInput;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar9) {
            pUVar7 = (__this->fields)._greenInput;
            if ((pUVar7 == (UI_InputSettingElement_o *)0x0) ||
               (pUVar8 = (pUVar7->fields)._inputField, pUVar8 == (UnityEngine_UI_InputField_o *)0x0))
            goto label_1821bff26;
            if ((pUVar8->fields).m_AllowInput == false) {
              (*(pUVar7->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar7,(pUVar7->klass->vtable)._6_SyncElement.method);
            }
          }
          pUVar7 = (__this->fields)._blueInput;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar9) {
            pUVar7 = (__this->fields)._blueInput;
            if ((pUVar7 == (UI_InputSettingElement_o *)0x0) ||
               (pUVar8 = (pUVar7->fields)._inputField, pUVar8 == (UnityEngine_UI_InputField_o *)0x0))
            goto label_1821bff26;
            if ((pUVar8->fields).m_AllowInput == false) {
              (*(pUVar7->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar7,(pUVar7->klass->vtable)._6_SyncElement.method);
            }
          }
          pUVar7 = (__this->fields)._alphaInput;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar9) {
            pUVar7 = (__this->fields)._alphaInput;
            if ((pUVar7 == (UI_InputSettingElement_o *)0x0) ||
               (pUVar8 = (pUVar7->fields)._inputField, pUVar8 == (UnityEngine_UI_InputField_o *)0x0))
            goto label_1821bff26;
            if ((pUVar8->fields).m_AllowInput == false) {
              (*(pUVar7->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar7,(pUVar7->klass->vtable)._6_SyncElement.method);
            }
          }
          if ((__this->fields)._hexInputActive == false) {
            __this_00 = (__this->fields)._hex;
            if (Il2CppMethodInitialized_184346eee == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"#");
              Il2CppMethodInitialized_184346eee = '\x01';
            }
            local_68[0].fields.r = fVar1;
            local_68[0].fields.g = fVar2;
            local_68[0].fields.b = fVar3;
            local_68[0].fields.a = fVar4;
            pSVar12 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800(local_68,(MethodInfo *)0x0);
            pSVar12 = System_String__Concat_1969e50("#",pSVar12,(MethodInfo *)0x0);
            if (__this_00 == (Settings_StringSetting_o *)0x0) goto label_1821bff26;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)pSVar12,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            pUVar7 = (__this->fields)._hexInput;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar9) {
              pUVar7 = (__this->fields)._hexInput;
              if (pUVar7 == (UI_InputSettingElement_o *)0x0) goto label_1821bff26;
              (*(pUVar7->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar7,(pUVar7->klass->vtable)._6_SyncElement.method);
            }
          }
          (__this->fields)._suppressInputCallbacks = false;
          return;
        }
      }
    }
  }
label_1821bff26:
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$Update
// il2cpp: void UI_ColorPickPopup__Update (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821beb40

void
UI_ColorPickPopup__Update(UI_ColorPickPopup_o* __this, MethodInfo* method)

{
  if ((__this->fields)._svTextureDirty != false) {
    UI_ColorPickPopup__UpdateSVTexture(__this,(MethodInfo *)0x0);
    (__this->fields)._svTextureDirty = false;
  }
  if ((__this->fields)._alphaTextureDirty != false) {
    UI_ColorPickPopup__UpdateAlphaTexture(__this,(MethodInfo *)0x0);
    (__this->fields)._alphaTextureDirty = false;
  }
  return;
}


// UI.ColorPickPopup$$MarkTextureDirty
// il2cpp: void UI_ColorPickPopup__MarkTextureDirty (UI_ColorPickPopup_o* __this, bool svDirty, bool alphaDirty, const MethodInfo* method);
// 0x1821be160

void UI_ColorPickPopup__MarkTextureDirty
               (UI_ColorPickPopup_o *__this,bool svDirty,bool alphaDirty,MethodInfo *method)

{
  (__this->fields)._svTextureDirty = svDirty || (__this->fields)._svTextureDirty != false;
  (__this->fields)._alphaTextureDirty = alphaDirty || (__this->fields)._alphaTextureDirty != false;
  return;
}


// UI.ColorPickPopup$$RefreshTextures
// il2cpp: void UI_ColorPickPopup__RefreshTextures (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821beb40

void UI_ColorPickPopup__RefreshTextures(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._svTextureDirty != false) {
    UI_ColorPickPopup__UpdateSVTexture(__this,(MethodInfo *)0x0);
    (__this->fields)._svTextureDirty = false;
  }
  if ((__this->fields)._alphaTextureDirty != false) {
    UI_ColorPickPopup__UpdateAlphaTexture(__this,(MethodInfo *)0x0);
    (__this->fields)._alphaTextureDirty = false;
  }
  return;
}


// UI.ColorPickPopup$$EnsureTextures
// il2cpp: void UI_ColorPickPopup__EnsureTextures (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821bd7b0

void UI_ColorPickPopup__EnsureTextures(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture_o *pUVar1;
  UnityEngine_UI_RawImage_o *pUVar2;
  bool bVar3;
  UnityEngine_Texture2D_o *pUVar4;
  UnityEngine_Color32_array *pUVar5;
  UnityEngine_Color_o *pUVar6;
  uint uVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  _union_53103 local_res18;
  UnityEngine_Color_o local_78 [7];
  ulonglong uVar8;
  
  if (Il2CppMethodInitialized_184346eea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color32_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ColorPickPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_184346eea = '\x01';
  }
  pUVar4 = TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
    UnityEngine_Texture2D___ctor_2efc630(pUVar4,1,0x100,4,false,(MethodInfo *)0x0);
    TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture = pUVar4;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture,pUVar4);
    pUVar1 = (UnityEngine_Texture_o *)TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture;
    if (pUVar1 == (UnityEngine_Texture_o *)0x0) goto label_1821bdd8e;
    UnityEngine_Texture__set_wrapMode(pUVar1,1,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Texture_o *)TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture;
    if (pUVar1 == (UnityEngine_Texture_o *)0x0) goto label_1821bdd8e;
    UnityEngine_Texture__set_filterMode(pUVar1,1,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Color32_array *)SZArrayNew(TypeInfo_UnityEngine_Color32_array,0x100);
    uVar8 = 0;
    do {
      uVar7 = (uint)uVar8;
      pUVar6 = UnityEngine_Color__HSVToRGB_2f01e90
                         (local_78,1.0 - (float)(int)uVar7 / 255.0,1.0,1.0,true,(MethodInfo *)0x0);
      fVar9 = (pUVar6->fields).r;
      auVar11 = ZEXT416((uint)fVar9);
      if (fVar9 < 0.0) {
        auVar11 = ZEXT816(0);
      }
      else if (1.0 < fVar9) {
        auVar11._0_12_ = ZEXT812(0x3f800000);
        auVar11._12_4_ = 0;
      }
      auVar12._4_12_ = auVar11._4_12_;
      auVar12._0_4_ = auVar11._0_4_ * 255.0;
      fVar9 = (float)il2cpp_runtime_helper_180012930(auVar12._0_8_);
      fVar10 = (float)il2cpp_runtime_helper_180012930();
      local_res18._at_g.g = (char)(int)fVar10;
      local_res18._at_b._lead[0] = (char)(int)fVar9;
      fVar9 = (float)il2cpp_runtime_helper_180012930();
      local_res18._at_b.b = (char)(int)fVar9;
      fVar9 = (float)il2cpp_runtime_helper_180012930();
      local_res18._at_a.a = (char)(int)fVar9;
      if (pUVar5 == (UnityEngine_Color32_array *)0x0) goto label_1821bdd8e;
      if ((uint)pUVar5->max_length <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      pUVar5->m_Items[uVar8].fields._overlap_0 = local_res18;
      uVar8 = (ulonglong)(uVar7 + 1);
    } while ((int)(uVar7 + 1) < 0x100);
    pUVar4 = TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture;
    if (pUVar4 == (UnityEngine_Texture2D_o *)0x0) goto label_1821bdd8e;
    UnityEngine_Texture2D__SetPixels32_2efb6e0(pUVar4,pUVar5,(MethodInfo *)0x0);
    pUVar4 = TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture;
    if (pUVar4 == (UnityEngine_Texture2D_o *)0x0) goto label_1821bdd8e;
    UnityEngine_Texture2D__Apply(pUVar4,false,true,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._svTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
    UnityEngine_Texture2D___ctor_2efc630(pUVar4,0xc0,0xc0,4,false,(MethodInfo *)0x0);
    (__this->fields)._svTexture = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._svTexture,pUVar4);
    pUVar1 = (UnityEngine_Texture_o *)(__this->fields)._svTexture;
    if (pUVar1 == (UnityEngine_Texture_o *)0x0) goto label_1821bdd8e;
    UnityEngine_Texture__set_wrapMode(pUVar1,1,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Texture_o *)(__this->fields)._svTexture;
    if (pUVar1 == (UnityEngine_Texture_o *)0x0) goto label_1821bdd8e;
    UnityEngine_Texture__set_filterMode(pUVar1,1,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Color32_array *)SZArrayNew(TypeInfo_UnityEngine_Color32_array,0x9000);
    (__this->fields)._svPixels = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._svPixels,pUVar5);
  }
  pUVar4 = (__this->fields)._alphaTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
    UnityEngine_Texture2D___ctor_2efc630(pUVar4,0xc0,1,4,false,(MethodInfo *)0x0);
    (__this->fields)._alphaTexture = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._alphaTexture,pUVar4);
    pUVar1 = (UnityEngine_Texture_o *)(__this->fields)._alphaTexture;
    if (pUVar1 == (UnityEngine_Texture_o *)0x0) goto label_1821bdd8e;
    UnityEngine_Texture__set_wrapMode(pUVar1,1,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Texture_o *)(__this->fields)._alphaTexture;
    if (pUVar1 == (UnityEngine_Texture_o *)0x0) goto label_1821bdd8e;
    UnityEngine_Texture__set_filterMode(pUVar1,1,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Color32_array *)SZArrayNew(TypeInfo_UnityEngine_Color32_array,0xc0);
    (__this->fields)._alphaPixels = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._alphaPixels,pUVar5);
  }
  pUVar2 = (__this->fields)._hueImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._hueImage;
    if (pUVar2 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1821bdd8e;
    UnityEngine_UI_RawImage__set_texture
              (pUVar2,(UnityEngine_Texture_o *)TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture,
               (MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields)._svImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._svImage;
    if (pUVar2 == (UnityEngine_UI_RawImage_o *)0x0) goto label_1821bdd8e;
    UnityEngine_UI_RawImage__set_texture
              (pUVar2,(UnityEngine_Texture_o *)(__this->fields)._svTexture,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields)._alphaImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._alphaImage;
    if (pUVar2 == (UnityEngine_UI_RawImage_o *)0x0) {
label_1821bdd8e:
      ThrowNullReferenceException();
    }
    UnityEngine_UI_RawImage__set_texture
              (pUVar2,(UnityEngine_Texture_o *)(__this->fields)._alphaTexture,(MethodInfo *)0x0);
  }
  return;
}


// UI.ColorPickPopup$$UpdateSVTexture
// il2cpp: void UI_ColorPickPopup__UpdateSVTexture (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821c08a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c093e: nop 

void UI_ColorPickPopup__UpdateSVTexture(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  UnityEngine_Color32_array *pUVar2;
  bool bVar3;
  UnityEngine_Color32_o UVar4;
  UnityEngine_Color_o *pUVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_o local_48 [3];
  
  if (Il2CppMethodInitialized_184346eeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346eeb = '\x01';
  }
  pUVar1 = (__this->fields)._svTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  uVar10 = 0;
  uVar7 = uVar10;
  uVar8 = uVar10;
  do {
    uVar9 = uVar10;
    do {
      pUVar2 = (__this->fields)._svPixels;
      pUVar5 = UnityEngine_Color__HSVToRGB_2f01e90
                         (local_48,(__this->fields)._hue,(float)(int)uVar9 / 191.0,(float)(int)uVar8 / 191.0,
                          true,(MethodInfo *)0x0);
      local_58.r = (pUVar5->fields).r;
      local_58.g = (pUVar5->fields).g;
      local_58.b = (pUVar5->fields).b;
      local_58.a = (pUVar5->fields).a;
      UVar4 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Color32_array *)0x0) goto label_1821c0a1c;
      if ((uint)pUVar2->max_length <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      lVar6 = (longlong)(int)uVar7;
      uVar9 = uVar9 + 1;
      uVar7 = uVar7 + 1;
      pUVar2->m_Items[lVar6].fields._overlap_0._at_rgba.rgba = (int32_t)UVar4.fields._overlap_0;
    } while ((int)uVar9 < 0xc0);
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0xc0);
  pUVar1 = (__this->fields)._svTexture;
  if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__SetPixels32_2efb6e0(pUVar1,(__this->fields)._svPixels,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._svTexture;
    if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply(pUVar1,false,false,(MethodInfo *)0x0);
      return;
    }
  }
label_1821c0a1c:
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$UpdateAlphaTexture
// il2cpp: void UI_ColorPickPopup__UpdateAlphaTexture (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821c0140
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c0243: mov rcx, qword ptr [rdi + 0xb0]
// asm:   0x1821c024a: movd xmm10, dword ptr [rcx + 0x28]
// asm:   0x1821c0250: jmp 0x1821c0268
// asm:   0x1821c0262: movd xmm10, dword ptr [rax + 0x20]

void UI_ColorPickPopup__UpdateAlphaTexture(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Texture2D_o *pUVar4;
  UnityEngine_Color32_array *pUVar5;
  bool bVar6;
  UnityEngine_Color_o *pUVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  _union_53103 local_res8;
  UnityEngine_Color_o local_c8 [11];
  
  if (Il2CppMethodInitialized_184346eec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346eec = '\x01';
  }
  pUVar4 = (__this->fields)._alphaTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pUVar7 = UnityEngine_Color__HSVToRGB_2f01e90
                     (local_c8,(__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,true
                      ,(MethodInfo *)0x0);
  if (((__this->fields)._setting != (Settings_ColorSetting_o *)0x0) ||
     ((__this->fields)._alpha != (Settings_IntSetting_o *)0x0)) {
    uVar9 = 0;
    fVar1 = (pUVar7->fields).r;
    fVar2 = (pUVar7->fields).g;
    fVar3 = (pUVar7->fields).b;
    do {
      pUVar5 = (__this->fields)._alphaPixels;
      if (fVar1 < 0.0) {
        auVar12 = ZEXT816(0);
      }
      else if (1.0 < fVar1) {
        auVar12._0_12_ = ZEXT812(0x3f800000);
        auVar12._12_4_ = 0;
      }
      else {
        auVar12 = ZEXT416((uint)fVar1);
      }
      auVar13._4_12_ = auVar12._4_12_;
      auVar13._0_4_ = auVar12._0_4_ * 255.0;
      fVar10 = (float)il2cpp_runtime_helper_180012930(auVar13._0_8_);
      if (fVar2 < 0.0) {
        auVar14 = ZEXT816(0);
      }
      else if (1.0 < fVar2) {
        auVar14._0_12_ = ZEXT812(0x3f800000);
        auVar14._12_4_ = 0;
      }
      else {
        auVar14 = ZEXT416((uint)fVar2);
      }
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = auVar14._0_4_ * 255.0;
      fVar11 = (float)il2cpp_runtime_helper_180012930(auVar15._0_8_);
      local_res8._at_g.g = (char)(int)fVar11;
      local_res8._at_b._lead[0] = (char)(int)fVar10;
      if (fVar3 < 0.0) {
        auVar16 = ZEXT816(0);
      }
      else if (1.0 < fVar3) {
        auVar16._0_12_ = ZEXT812(0x3f800000);
        auVar16._12_4_ = 0;
      }
      else {
        auVar16 = ZEXT416((uint)fVar3);
      }
      auVar17._4_12_ = auVar16._4_12_;
      auVar17._0_4_ = auVar16._0_4_ * 255.0;
      fVar10 = (float)il2cpp_runtime_helper_180012930(auVar17._0_8_);
      local_res8._at_b.b = (char)(int)fVar10;
      fVar10 = (float)il2cpp_runtime_helper_180012930();
      local_res8._at_a.a = (char)(int)fVar10;
      if (pUVar5 == (UnityEngine_Color32_array *)0x0) goto label_1821c0495;
      if ((uint)pUVar5->max_length <= (uint)uVar9) {
        ThrowIndexOutOfRangeException();
      }
      pUVar5->m_Items[uVar9].fields._overlap_0 = local_res8;
      uVar8 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < 0xc0);
    pUVar4 = (__this->fields)._alphaTexture;
    if (pUVar4 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__SetPixels32_2efb6e0(pUVar4,(__this->fields)._alphaPixels,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._alphaTexture;
      if (pUVar4 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__Apply(pUVar4,false,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1821c0495:
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$UpdatePickerHandles
// il2cpp: void UI_ColorPickPopup__UpdatePickerHandles (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821c04b0

void UI_ColorPickPopup__UpdatePickerHandles(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Settings_IntSetting_o *pSVar3;
  UnityEngine_Vector2_o value;
  bool bVar4;
  UnityEngine_Rect_o *pUVar5;
  UnityEngine_Vector2_o value_00;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o local_78 [7];
  
  if (Il2CppMethodInitialized_184346eed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184346eed = '\x01';
  }
  pUVar2 = (__this->fields)._svRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar2 = (__this->fields)._svHandle;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar2 = (__this->fields)._svRect;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_1821c0893;
      pUVar5 = UnityEngine_RectTransform__get_rect(local_78,pUVar2,(MethodInfo *)0x0);
      fVar7 = (pUVar5->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      pUVar2 = (__this->fields)._svRect;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_1821c0893;
      fVar7 = fVar7 - 6.0;
      pUVar5 = UnityEngine_RectTransform__get_rect(local_78,pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._svHandle;
      fVar6 = (pUVar5->fields).m_Height - 6.0;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_1821c0893;
      value.fields.y = -fVar6 * 0.5 + fVar6 * (__this->fields)._value;
      value.fields.x = -fVar7 * 0.5 + fVar7 * (__this->fields)._saturation;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value,(MethodInfo *)0x0);
    }
  }
  pUVar2 = (__this->fields)._hueRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar2 = (__this->fields)._hueHandle;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar2 = (__this->fields)._hueRect;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_1821c0893;
      pUVar5 = UnityEngine_RectTransform__get_rect(local_78,pUVar2,(MethodInfo *)0x0);
      fVar7 = (pUVar5->fields).m_Height;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      pUVar2 = (__this->fields)._hueHandle;
      fVar7 = fVar7 - 6.0;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_1821c0893;
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar2,(UnityEngine_Vector2_o)
                        ((ulonglong)(uint)((1.0 - (__this->fields)._hue) * fVar7 + -fVar7 * 0.5) << 0x20),
                 (MethodInfo *)0x0);
    }
  }
  pUVar2 = (__this->fields)._alphaRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar2 = (__this->fields)._alphaHandle;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar2 = (__this->fields)._alphaRect;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar5 = UnityEngine_RectTransform__get_rect(local_78,pUVar2,(MethodInfo *)0x0);
        fVar7 = (pUVar5->fields).m_Width;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        if ((__this->fields)._setting == (Settings_ColorSetting_o *)0x0) {
          pSVar3 = (__this->fields)._alpha;
          if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_1821c0893;
          iVar1 = (pSVar3->fields).MinValue;
        }
        else {
          iVar1 = (((__this->fields)._setting)->fields).MinAlpha;
        }
        fVar7 = fVar7 - 6.0;
        fVar6 = (float)iVar1 / 255.0;
        if ((fVar6 == 1.0) || (fVar6 = ((__this->fields)._alphaValue - fVar6) / (1.0 - fVar6), fVar6 < 0.0)) {
          fVar6 = 0.0;
        }
        else if (1.0 < fVar6) {
          fVar6 = 1.0;
        }
        pUVar2 = (__this->fields)._alphaHandle;
        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
          value_00.fields.y = 0.0;
          value_00.fields.x = -fVar7 * 0.5 + fVar6 * fVar7;
          UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value_00,(MethodInfo *)0x0);
          return;
        }
      }
label_1821c0893:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ColorPickPopup$$GetCurrentColor
// il2cpp: UnityEngine_Color_o UI_ColorPickPopup__GetCurrentColor (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821bded0

UnityEngine_Color_o *
UI_ColorPickPopup__GetCurrentColor
          (UnityEngine_Color_o *__return_storage_ptr__,UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  int iVar3;
  Settings_ColorSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  UnityEngine_Color_o *pUVar6;
  float fVar7;
  UnityEngine_Color_o local_18;
  
  fVar1 = (__this->fields)._value;
  fVar7 = (__this->fields)._saturation;
  fVar2 = (__this->fields)._hue;
  (__return_storage_ptr__->fields).r = 0.0;
  (__return_storage_ptr__->fields).g = 0.0;
  (__return_storage_ptr__->fields).b = 0.0;
  (__return_storage_ptr__->fields).a = 0.0;
  pUVar6 = UnityEngine_Color__HSVToRGB_2f01e90(&local_18,fVar2,fVar7,fVar1,true,(MethodInfo *)0x0);
  pSVar4 = (__this->fields)._setting;
  fVar1 = (pUVar6->fields).g;
  fVar7 = (pUVar6->fields).b;
  fVar2 = (pUVar6->fields).a;
  (__return_storage_ptr__->fields).r = (pUVar6->fields).r;
  (__return_storage_ptr__->fields).g = fVar1;
  (__return_storage_ptr__->fields).b = fVar7;
  (__return_storage_ptr__->fields).a = fVar2;
  if (pSVar4 == (Settings_ColorSetting_o *)0x0) {
    pSVar5 = (__this->fields)._alpha;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = (pSVar5->fields).MinValue;
  }
  else {
    iVar3 = (((__this->fields)._setting)->fields).MinAlpha;
  }
  fVar1 = (__this->fields)._alphaValue;
  fVar7 = (float)iVar3 / 255.0;
  if ((float)iVar3 / 255.0 <= fVar1) {
    fVar7 = fVar1;
  }
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  else if (1.0 < fVar7) {
    (__return_storage_ptr__->fields).a = 1.0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->fields).a = fVar7;
  return __return_storage_ptr__;
}


// UI.ColorPickPopup$$GetHexString
// il2cpp: System_String_o* UI_ColorPickPopup__GetHexString (UI_ColorPickPopup_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1821bdfa0

System_String_o *
UI_ColorPickPopup__GetHexString(UI_ColorPickPopup_o *__this,UnityEngine_Color_o *color,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346eee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_184346eee = '\x01';
  }
  local_18.r = (color->fields).r;
  local_18.g = (color->fields).g;
  local_18.b = (color->fields).b;
  local_18.a = (color->fields).a;
  pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                     ((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ColorPickPopup$$GetMinAlpha01
// il2cpp: float UI_ColorPickPopup__GetMinAlpha01 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821be000

float UI_ColorPickPopup__GetMinAlpha01(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if ((__this->fields)._setting != (Settings_ColorSetting_o *)0x0) {
    return (float)(((__this->fields)._setting)->fields).MinAlpha / 255.0;
  }
  pSVar1 = (__this->fields)._alpha;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    return (float)(pSVar1->fields).MinValue / 255.0;
  }
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$GetCurrentColor255
// il2cpp: Utility_Color255_o* UI_ColorPickPopup__GetCurrentColor255 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821bdda0

Utility_Color255_o * UI_ColorPickPopup__GetCurrentColor255(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Settings_ColorSetting_o *pSVar4;
  int32_t tryStart;
  int32_t tryEnd;
  int32_t finallyStart;
  int iVar5;
  UnityEngine_Color_o *pUVar6;
  Utility_Color255_o *__this_00;
  int finallyEnd;
  UnityEngine_Color_o local_78 [5];
  
  if (Il2CppMethodInitialized_184346eef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184346eef = '\x01';
  }
  pUVar6 = UI_ColorPickPopup__GetCurrentColor(local_78,__this,(MethodInfo *)0x0);
  fVar1 = (pUVar6->fields).g;
  fVar2 = (pUVar6->fields).b;
  fVar3 = (pUVar6->fields).a;
  tryStart = il2cpp_runtime_helper_181290af0((pUVar6->fields).r * 255.0,0);
  tryEnd = il2cpp_runtime_helper_181290af0(fVar1 * 255.0,0);
  finallyStart = il2cpp_runtime_helper_181290af0(fVar2 * 255.0,0);
  iVar5 = il2cpp_runtime_helper_181290af0(fVar3 * 255.0,0);
  pSVar4 = (__this->fields)._setting;
  if (pSVar4 != (Settings_ColorSetting_o *)0x0) {
    finallyEnd = (pSVar4->fields).MinAlpha;
    if ((finallyEnd <= iVar5) && (finallyEnd = 0xff, iVar5 < 0x100)) {
      finallyEnd = iVar5;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor
              ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this_00,tryStart,tryEnd,finallyStart
               ,finallyEnd,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$CreateTextureContainer
// il2cpp: UnityEngine_GameObject_o* UI_ColorPickPopup__CreateTextureContainer (UI_ColorPickPopup_o* __this, UnityEngine_Transform_o* parent, System_String_o* name, float width, float height, UnityEngine_RectTransform_o** textureRect, const MethodInfo* method);
// 0x1821bd150

UnityEngine_GameObject_o *
UI_ColorPickPopup__CreateTextureContainer
          (UI_ColorPickPopup_o *__this,UnityEngine_Transform_o *parent,System_String_o *name,float width,
          float height,UnityEngine_RectTransform_o **textureRect,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *pSVar1;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Color_Fields local_48 [2];
  
  if (Il2CppMethodInitialized_184346ef0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_ColorPickDragArea);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    Il2CppMethodInitialized_184346ef0 = '\x01';
  }
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto label_1821bd650;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
    }
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pSVar2);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)pSVar1->max_length) {
      pSVar1->m_Items[1] = pSVar2;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1,pSVar2);
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = pSVar2;
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2,pSVar2);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(__this_00,name,pSVar1,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,parent,false,(MethodInfo *)0x0);
            pUVar5 = UnityEngine_GameObject__GetComponent_object_
                               (__this_00,
                                (MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
            if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
              (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar5,width,(pUVar5->klass->vtable)._36_set_preferredWidth.method);
              (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                        (pUVar5,height,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
              pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
              if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
                local_48[0].r = 0.0;
                local_48[0].g = 0.0;
                local_48[0].b = 0.0;
                local_48[0].a = 0.5;
                (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                          (pUVar6,(UnityEngine_Color_o *)local_48,(pUVar6->klass->vtable)._23_set_color.method
                          );
                pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
                pSVar2 = System_Type__GetTypeFromHandle
                                   ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                    (MethodInfo *)0x0);
                if (pSVar1 != (System_Type_array *)0x0) {
                  if (pSVar2 != (System_Type_o *)0x0) {
                    pIVar3 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
                    if (pIVar3 == (Il2CppObject *)0x0) {
                      pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                    }
                  }
                  if ((int)pSVar1->max_length != 0) {
                    pSVar1->m_Items[0] = pSVar2;
                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pSVar2);
                    pSVar2 = System_Type__GetTypeFromHandle
                                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_RawImage,
                                        (MethodInfo *)0x0);
                    if (pSVar2 != (System_Type_o *)0x0) {
                      pIVar3 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
                      if (pIVar3 == (Il2CppObject *)0x0) {
                        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                      }
                    }
                    if (1 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[1] = pSVar2;
                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1,pSVar2);
                      pSVar2 = System_Type__GetTypeFromHandle
                                         ((System_RuntimeTypeHandle_o)TypeRef_UI_ColorPickDragArea,
                                          (MethodInfo *)0x0);
                      if (pSVar2 != (System_Type_o *)0x0) {
                        pIVar3 = il2cpp_vm_Object_IsInst
                                           ((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
                        if (pIVar3 == (Il2CppObject *)0x0) {
                          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
                        }
                      }
                      if (2 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[2] = pSVar2;
                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2,pSVar2);
                        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                        UnityEngine_GameObject___ctor_2f1abe0
                                  (__this_01,"Texture",pSVar1,(MethodInfo *)0x0);
                        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar4 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
                          parent_00 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,parent_00,false,(MethodInfo *)0x0)
                            ;
                            pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                               (__this_01,
                                                (MethodInfo_6F5650 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                            *textureRect = pUVar7;
                            Il2CppCodeGenWriteBarrier(textureRect,pUVar7);
                            pUVar7 = *textureRect;
                            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                              Il2CppMethodInitialized_18433e3c9 = '\x01';
                            }
                            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_anchorMin
                                        (pUVar7,(UnityEngine_Vector2_o)
                                                (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).
                                                fields,(MethodInfo *)0x0);
                              pUVar7 = *textureRect;
                              if (Il2CppMethodInitialized_184341f36 == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
                                Il2CppMethodInitialized_184341f36 = '\x01';
                              }
                              if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__set_anchorMax
                                          (pUVar7,(UnityEngine_Vector2_o)
                                                  (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).
                                                  fields,(MethodInfo *)0x0);
                                if (*textureRect != (UnityEngine_RectTransform_o *)0x0) {
                                  UnityEngine_RectTransform__set_offsetMin
                                            (*textureRect,(UnityEngine_Vector2_o)0x4040000040400000,
                                             (MethodInfo *)0x0);
                                  if (*textureRect != (UnityEngine_RectTransform_o *)0x0) {
                                    UnityEngine_RectTransform__set_offsetMax
                                              (*textureRect,(UnityEngine_Vector2_o)0xc0400000c0400000,
                                               (MethodInfo *)0x0);
                                    return __this_00;
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto label_1821bd650;
                      }
                    }
                  }
                  goto label_1821bd6b6;
                }
              }
            }
          }
        }
label_1821bd650:
        ThrowNullReferenceException();
      }
    }
  }
label_1821bd6b6:
  ThrowIndexOutOfRangeException();
}


// UI.ColorPickPopup$$CreateTextureSurface
// il2cpp: UnityEngine_UI_RawImage_o* UI_ColorPickPopup__CreateTextureSurface (UI_ColorPickPopup_o* __this, UnityEngine_Transform_o* container, System_String_o* name, UnityEngine_RectTransform_o** rect, const MethodInfo* method);
// 0x1821bd6c0

UnityEngine_UI_RawImage_o *
UI_ColorPickPopup__CreateTextureSurface
          (UI_ColorPickPopup_o *__this,UnityEngine_Transform_o *container,System_String_o *name,
          UnityEngine_RectTransform_o **rect,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_RectTransform_o *value;
  
  if (Il2CppMethodInitialized_184346ef1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    Il2CppMethodInitialized_184346ef1 = '\x01';
  }
  if (container != (UnityEngine_Transform_o *)0x0) {
    __this_00 = UnityEngine_Transform__Find(container,"Texture",(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
      if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
        UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_01,name,(MethodInfo *)0x0);
        (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (__this_01,true,(__this_01->klass->vtable)._25_set_raycastTarget.method);
        value = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this_00,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
        *rect = value;
        Il2CppCodeGenWriteBarrier(rect,value);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$CreateHandle
// il2cpp: UnityEngine_RectTransform_o* UI_ColorPickPopup__CreateHandle (UI_ColorPickPopup_o* __this, UnityEngine_RectTransform_o* parent, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x1821bcdf0

UnityEngine_RectTransform_o *
UI_ColorPickPopup__CreateHandle
          (UI_ColorPickPopup_o *__this,UnityEngine_RectTransform_o *parent,UnityEngine_Vector2_o size,
          MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_UI_Shadow_o *__this_03;
  UnityEngine_Color_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_184346ef2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Shadow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Shadow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Handle");
    Il2CppMethodInitialized_184346ef2 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1821bd112:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Shadow,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar1);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(__this_00,"Handle",components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0
                      (__this_01,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
            __this_02 = UnityEngine_GameObject__GetComponent_object_
                                  (__this_00,
                                   (MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax
                        (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_sizeDelta(__this_02,size,(MethodInfo *)0x0);
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
              if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                local_38[0].r = 1.0;
                local_38[0].g = 1.0;
                local_38[0].b = 1.0;
                local_38[0].a = 0.85;
                (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                          (pUVar3,(UnityEngine_Color_o *)local_38,(pUVar3->klass->vtable)._23_set_color.method
                          );
                (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (pUVar3,false,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
                __this_03 = UnityEngine_GameObject__GetComponent_object_
                                      (__this_00,
                                       (MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Shadow);
                if (__this_03 != (UnityEngine_UI_Shadow_o *)0x0) {
                  local_38[0].r = 0.0;
                  local_38[0].g = 0.0;
                  local_38[0].b = 0.0;
                  local_38[0].a = 0.9;
                  UnityEngine_UI_Shadow__set_effectColor
                            (__this_03,(UnityEngine_Color_o *)local_38,(MethodInfo *)0x0);
                  UnityEngine_UI_Shadow__set_effectDistance
                            (__this_03,(UnityEngine_Vector2_o)0xbf8000003f800000,(MethodInfo *)0x0);
                  return __this_02;
                }
              }
            }
          }
        }
        goto label_1821bd112;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ColorPickPopup$$OnDestroy
// il2cpp: void UI_ColorPickPopup__OnDestroy (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821be4e0

void UI_ColorPickPopup__OnDestroy(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346ef3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ColorPickPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346ef3 = '\x01';
  }
  pUVar1 = (__this->fields)._svTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._svTexture;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._alphaTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._alphaTexture;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  pUVar1 = TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture = (UnityEngine_Texture2D_o *)0x0;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ColorPickPopup->static_fields->_hueTexture,(void *)0x0);
  }
  return;
}


// UI.ColorPickPopup$$.ctor
// il2cpp: void UI_ColorPickPopup___ctor (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821c0a30

void UI_ColorPickPopup___ctor(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_184346ef4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    Il2CppMethodInitialized_184346ef4 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._red = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._red,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._green = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._green,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._blue = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._blue,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._alpha = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._alpha,pSVar1);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_00,"#FFFFFFFF",9,(MethodInfo *)0x0);
  (__this->fields)._hex = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hex,__this_00);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ColorPickPopup$$<Setup>b__53_0
// il2cpp: void UI_ColorPickPopup___Setup_b__53_0 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821c00c0

void UI_ColorPickPopup___Setup_b__53_0(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346ef5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346ef5 = '\x01';
  }
  UI_ColorPickPopup__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


// UI.ColorPickPopup$$<Setup>b__53_1
// il2cpp: void UI_ColorPickPopup___Setup_b__53_1 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x1821c0100

void UI_ColorPickPopup___Setup_b__53_1(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346ef6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_184346ef6 = '\x01';
  }
  UI_ColorPickPopup__OnButtonClick(__this,"Cancel",(MethodInfo *)0x0);
  return;
}


