// Type: UI.ColorPickPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ColorPickPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/ColorPickPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.ColorPickPopup$$get_Title
// il2cpp: System_String_o* UI_ColorPickPopup__get_Title (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401d4d0

System_String_o * UI_ColorPickPopup__get_Title(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057042cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"SettingsPopup");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"ColorPickPopup");
    il2cpp_init_method_metadata(&"");
    DAT_057042cf = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","ColorPickPopup","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.ColorPickPopup$$get_Width
// il2cpp: float UI_ColorPickPopup__get_Width (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401d570

float UI_ColorPickPopup__get_Width(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 520.0;
}


// UI.ColorPickPopup$$get_Height
// il2cpp: float UI_ColorPickPopup__get_Height (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401d580

float UI_ColorPickPopup__get_Height(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 520.0;
}


// UI.ColorPickPopup$$get_VerticalSpacing
// il2cpp: float UI_ColorPickPopup__get_VerticalSpacing (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401d590

float UI_ColorPickPopup__get_VerticalSpacing(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 12.0;
}


// UI.ColorPickPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ColorPickPopup__get_PanelAlignment (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401d5a0

int32_t UI_ColorPickPopup__get_PanelAlignment(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.ColorPickPopup$$Setup
// il2cpp: void UI_ColorPickPopup__Setup (UI_ColorPickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x401d5b0

void UI_ColorPickPopup__Setup(UI_ColorPickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *extraout_RDX;
  
  if (DAT_057042d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__53_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__53_1);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_057042d0 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor
            ((UI_ElementStyle_o *)method_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar1,(UI_ElementStyle_o *)method_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar1,(UI_ElementStyle_o *)method_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  UI_ColorPickPopup__SetupPickerUI(__this,method_00);
  UI_ColorPickPopup__EnsureTextures(__this,method_00);
  return;
}


// UI.ColorPickPopup$$Show
// il2cpp: void UI_ColorPickPopup__Show (UI_ColorPickPopup_o* __this, Settings_ColorSetting_o* setting, UnityEngine_UI_Image_o* image, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x401e880

void UI_ColorPickPopup__Show
               (UI_ColorPickPopup_o *__this,Settings_ColorSetting_o *setting,
               UnityEngine_UI_Image_o *image,UnityEngine_Events_UnityAction_o *onChangeColor,
               MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Utility_Color255_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o UVar6;
  UnityEngine_Color_o rgbColor;
  float fStack_34;
  
  if (DAT_057042d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    DAT_057042d1 = '\x01';
  }
  __this_01 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pMVar3 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar3);
    (__this->fields)._setting = setting;
    il2cpp_runtime_glue(&(__this->fields)._setting,setting);
    (__this->fields)._image = image;
    il2cpp_runtime_glue(&(__this->fields)._image,image);
    if ((setting != (Settings_ColorSetting_o *)0x0) &&
       (pSVar1 = (__this->fields)._alpha, pSVar1 != (Settings_IntSetting_o *)0x0)) {
      (pSVar1->fields).MinValue = (setting->fields).MinAlpha;
      (__this->fields)._onChangeColor = onChangeColor;
      il2cpp_runtime_glue(&(__this->fields)._onChangeColor);
      __this_00 = (setting->fields)._value;
      if (__this_00 != (Utility_Color255_o *)0x0) {
        UVar6 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
        rgbColor.fields.b = UVar6.fields.b;
        rgbColor.fields._0_8_ = UVar6.fields._0_8_;
        rgbColor.fields.a = 1.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor,&(__this->fields)._hue,&(__this->fields)._saturation,
                   &(__this->fields)._value,(MethodInfo *)0x0);
        fStack_34 = UVar6.fields.a;
        fVar4 = (float)(setting->fields).MinAlpha / 255.0;
        if (fVar4 <= fStack_34) {
          fVar4 = fStack_34;
        }
        fVar5 = 1.0;
        if (fVar4 <= 1.0) {
          fVar5 = fVar4;
        }
        (__this->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
        *(undefined2 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0x101;
        pMVar3 = (MethodInfo *)0x1;
        UI_ColorPickPopup__ApplyCurrentColorToUI(__this,1,method_00);
        if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 1) != '\0') {
          UI_ColorPickPopup__UpdateSVTexture(__this,pMVar3);
          *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0;
        }
        if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 2) == '\0') {
          return;
        }
        UI_ColorPickPopup__UpdateAlphaTexture(__this,pMVar3);
        *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 2) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$SetupPickerUI
// il2cpp: void UI_ColorPickPopup__SetupPickerUI (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401d890

void UI_ColorPickPopup__SetupPickerUI(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *setting;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UI_ColorPickPopup_o *pUVar5;
  UI_ColorPickPopup_o *pUVar6;
  UI_ColorPickPopup_o *pUVar7;
  UnityEngine_UI_RawImage_o *pUVar8;
  Il2CppObject *pIVar9;
  void *pvVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_UI_Image_o *pUVar13;
  UnityEngine_Events_UnityAction_o *pUVar14;
  UI_InputSettingElement_o *pUVar15;
  UnityEngine_Events_UnityAction_o *onEndEdit;
  System_Func_string__bool__o *onValidate;
  System_Func_string__string__o *onCleanup;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_R8;
  UnityEngine_RectTransform_o *local_50;
  UnityEngine_RectTransform_o *local_48;
  UnityEngine_RectTransform_o *local_40;
  UI_ElementStyle_o *local_38;
  
  if (DAT_057042d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_float__float);
    il2cpp_init_method_metadata(&MethodInfo_String_CleanupHexInput);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_IsHexInputValid);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnAlphaDragged);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnHexInputChanged);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnHexInputEndEdit);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnHueDragged);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnRGBAInputChanged);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnSVDragged);
    il2cpp_init_method_metadata(&MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"SVContainer");
    il2cpp_init_method_metadata(&"HueContainer");
    il2cpp_init_method_metadata(&"Hex");
    il2cpp_init_method_metadata(&"R");
    il2cpp_init_method_metadata(&"AlphaContainer");
    il2cpp_init_method_metadata(&"AlphaImage");
    il2cpp_init_method_metadata(&"G");
    il2cpp_init_method_metadata(&"HueImage");
    il2cpp_init_method_metadata(&"B");
    il2cpp_init_method_metadata(&"Prefabs/Elements/ColorPreview");
    il2cpp_init_method_metadata(&"Image");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"SVImage");
    il2cpp_init_method_metadata(&"A");
    DAT_057042d2 = '\x01';
  }
  local_40 = (UnityEngine_RectTransform_o *)0x0;
  local_48 = (UnityEngine_RectTransform_o *)0x0;
  local_50 = (UnityEngine_RectTransform_o *)0x0;
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x12,24.0,8.0,pSVar2,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x12,52.0,10.0,pSVar2,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateHorizontalGroup
                     ((__this->fields).SinglePanel,12.0,1,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
    pUVar5 = (UI_ColorPickPopup_o *)
             UI_ElementFactory__CreateVerticalGroup(pUVar4,10.0,1,(MethodInfo *)0x0);
    if (pUVar5 != (UI_ColorPickPopup_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform
                         ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
      pUVar6 = (UI_ColorPickPopup_o *)
               UI_ElementFactory__CreateHorizontalGroup(pUVar4,10.0,1,(MethodInfo *)0x0);
      if (pUVar6 != (UI_ColorPickPopup_o *)0x0) {
        pUVar7 = pUVar6;
        pUVar4 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
        pUVar7 = (UI_ColorPickPopup_o *)
                 UI_ColorPickPopup__CreateTextureContainer
                           (pUVar7,pUVar4,"SVContainer",260.0,260.0,&(__this->fields)._svRect,in_R8);
        if (pUVar7 != (UI_ColorPickPopup_o *)0x0) {
          local_38 = __this_01;
          pUVar4 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
          pUVar8 = UI_ColorPickPopup__CreateTextureSurface
                             (pUVar7,pUVar4,"SVImage",&local_40,in_R8);
          (__this->fields)._svImage = pUVar8;
          il2cpp_runtime_glue(&(__this->fields)._svImage,pUVar8);
          pUVar8 = (__this->fields)._svImage;
          if (pUVar8 != (UnityEngine_UI_RawImage_o *)0x0) {
            pIVar9 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar8,MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
            pvVar10 = (void *)il2cpp_runtime_glue(TypeInfo_Action_float__float);
            System_Action<float__float>___ctor();
            if (pIVar9 != (Il2CppObject *)0x0) {
              *(undefined4 *)&pIVar9[2].klass = 0;
              pUVar7 = (UI_ColorPickPopup_o *)&pIVar9[2].monitor;
              pIVar9[2].monitor = pvVar10;
              il2cpp_runtime_glue(pUVar7,pvVar10);
              pUVar11 = UI_ColorPickPopup__CreateHandle
                                  (pUVar7,local_40,(UnityEngine_Vector2_o)0x4160000041600000,
                                   method_00);
              (__this->fields)._svHandle = pUVar11;
              il2cpp_runtime_glue(&(__this->fields)._svHandle);
              pUVar4 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
              pUVar6 = (UI_ColorPickPopup_o *)
                       UI_ColorPickPopup__CreateTextureContainer
                                 (pUVar6,pUVar4,"HueContainer",28.0,260.0,&(__this->fields)._hueRect,
                                  in_R8);
              if (pUVar6 != (UI_ColorPickPopup_o *)0x0) {
                pUVar4 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
                pUVar8 = UI_ColorPickPopup__CreateTextureSurface
                                   (pUVar6,pUVar4,"HueImage",&local_48,in_R8);
                (__this->fields)._hueImage = pUVar8;
                il2cpp_runtime_glue(&(__this->fields)._hueImage,pUVar8);
                pUVar8 = (__this->fields)._hueImage;
                if (pUVar8 != (UnityEngine_UI_RawImage_o *)0x0) {
                  pIVar9 = UnityEngine_Component__GetComponent<object>
                                     ((UnityEngine_Component_o *)pUVar8,MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
                  pvVar10 = (void *)il2cpp_runtime_glue(TypeInfo_Action_float__float);
                  System_Action<float__float>___ctor();
                  if (pIVar9 != (Il2CppObject *)0x0) {
                    *(undefined4 *)&pIVar9[2].klass = 2;
                    pUVar6 = (UI_ColorPickPopup_o *)&pIVar9[2].monitor;
                    pIVar9[2].monitor = pvVar10;
                    il2cpp_runtime_glue(pUVar6,pvVar10);
                    pUVar11 = UI_ColorPickPopup__CreateHandle
                                        (pUVar6,local_48,(UnityEngine_Vector2_o)0x4040000041c00000,
                                         method_01);
                    (__this->fields)._hueHandle = pUVar11;
                    il2cpp_runtime_glue(&(__this->fields)._hueHandle);
                    pUVar4 = UnityEngine_GameObject__get_transform
                                       ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
                    pUVar5 = (UI_ColorPickPopup_o *)
                             UI_ColorPickPopup__CreateTextureContainer
                                       (pUVar5,pUVar4,"AlphaContainer",260.0,24.0,
                                        &(__this->fields)._alphaRect,in_R8);
                    if (pUVar5 != (UI_ColorPickPopup_o *)0x0) {
                      pUVar4 = UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
                      pUVar8 = UI_ColorPickPopup__CreateTextureSurface
                                         (pUVar5,pUVar4,"AlphaImage",&local_50,in_R8);
                      (__this->fields)._alphaImage = pUVar8;
                      il2cpp_runtime_glue(&(__this->fields)._alphaImage,pUVar8);
                      pUVar8 = (__this->fields)._alphaImage;
                      if (pUVar8 != (UnityEngine_UI_RawImage_o *)0x0) {
                        pIVar9 = UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)pUVar8,MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
                        pvVar10 = (void *)il2cpp_runtime_glue(TypeInfo_Action_float__float);
                        System_Action<float__float>___ctor();
                        if (pIVar9 != (Il2CppObject *)0x0) {
                          *(undefined4 *)&pIVar9[2].klass = 1;
                          pUVar5 = (UI_ColorPickPopup_o *)&pIVar9[2].monitor;
                          pIVar9[2].monitor = pvVar10;
                          il2cpp_runtime_glue(pUVar5,pvVar10);
                          pUVar11 = UI_ColorPickPopup__CreateHandle
                                              (pUVar5,local_50,
                                               (UnityEngine_Vector2_o)0x41a0000040c00000,method_02);
                          (__this->fields)._alphaHandle = pUVar11;
                          il2cpp_runtime_glue(&(__this->fields)._alphaHandle);
                          pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                          pUVar3 = UI_ElementFactory__CreateVerticalGroup
                                             (pUVar4,10.0,0,(MethodInfo *)0x0);
                          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0)
                            ;
                            pUVar12 = UI_ElementFactory__InstantiateAndBind
                                                (pUVar4,"Prefabs/Elements/ColorPreview",(MethodInfo *)0x0);
                            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                              pIVar9 = UnityEngine_GameObject__GetComponent<object>
                                                 (pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                              if (pIVar9 != (Il2CppObject *)0x0) {
                                (*pIVar9->klass->vtable[0x24].methodPtr)
                                          (0x42c00000,pIVar9,pIVar9->klass->vtable[0x24].method);
                                pIVar9 = UnityEngine_GameObject__GetComponent<object>
                                                   (pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                if (pIVar9 != (Il2CppObject *)0x0) {
                                  (*pIVar9->klass->vtable[0x26].methodPtr)(0x42600000,pIVar9);
                                  pUVar4 = UnityEngine_GameObject__get_transform
                                                     (pUVar12,(MethodInfo *)0x0);
                                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar4 = UnityEngine_Transform__Find
                                                       (pUVar4,"Image",(MethodInfo *)0x0);
                                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                      pUVar13 = (UnityEngine_UI_Image_o *)
                                                UnityEngine_Component__GetComponent<object>
                                                          ((UnityEngine_Component_o *)pUVar4,
                                                           MethodInfo_Image_GetComponent_Image);
                                      (__this->fields)._preview = pUVar13;
                                      il2cpp_runtime_glue(&(__this->fields)._preview);
                                      pUVar4 = UnityEngine_GameObject__get_transform
                                                         (pUVar3,(MethodInfo *)0x0);
                                      pSVar1 = (__this->fields)._red;
                                      pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                il2cpp_runtime_glue(TypeInfo_UnityAction);
                                      UnityEngine_Events_UnityAction___ctor();
                                      pUVar12 = UI_ElementFactory__CreateInputSetting
                                                          (pUVar4,__this_00,
                                                           (Settings_BaseSetting_o *)pSVar1,
                                                           "R","",62.0,34.0,0,
                                                           pUVar14,(UnityEngine_Events_UnityAction_o
                                                                    *)0x0,
                                                           (System_Func_string__bool__o *)0x0,
                                                           (System_Func_string__string__o *)0x0,
                                                           (MethodInfo *)0x0);
                                      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar15 = (UI_InputSettingElement_o *)
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar12,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
                                        (__this->fields)._redInput = pUVar15;
                                        il2cpp_runtime_glue(&(__this->fields)._redInput);
                                        pUVar4 = UnityEngine_GameObject__get_transform
                                                           (pUVar3,(MethodInfo *)0x0);
                                        pSVar1 = (__this->fields)._green;
                                        pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                  il2cpp_runtime_glue(TypeInfo_UnityAction);
                                        UnityEngine_Events_UnityAction___ctor();
                                        pUVar12 = UI_ElementFactory__CreateInputSetting
                                                            (pUVar4,__this_00,
                                                             (Settings_BaseSetting_o *)pSVar1,
                                                             "G","",62.0,34.0,0,
                                                             pUVar14,(
                                                  UnityEngine_Events_UnityAction_o *)0x0,
                                                  (System_Func_string__bool__o *)0x0,
                                                  (System_Func_string__string__o *)0x0,
                                                  (MethodInfo *)0x0);
                                        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                          pUVar15 = (UI_InputSettingElement_o *)
                                                    UnityEngine_GameObject__GetComponent<object>
                                                              (pUVar12,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
                                          (__this->fields)._greenInput = pUVar15;
                                          il2cpp_runtime_glue(&(__this->fields)._greenInput);
                                          pUVar4 = UnityEngine_GameObject__get_transform
                                                             (pUVar3,(MethodInfo *)0x0);
                                          pSVar1 = (__this->fields)._blue;
                                          pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                    il2cpp_runtime_glue(TypeInfo_UnityAction);
                                          UnityEngine_Events_UnityAction___ctor();
                                          pUVar12 = UI_ElementFactory__CreateInputSetting
                                                              (pUVar4,__this_00,
                                                               (Settings_BaseSetting_o *)pSVar1,
                                                               "B","",62.0,34.0,0
                                                               ,pUVar14,(
                                                  UnityEngine_Events_UnityAction_o *)0x0,
                                                  (System_Func_string__bool__o *)0x0,
                                                  (System_Func_string__string__o *)0x0,
                                                  (MethodInfo *)0x0);
                                          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar15 = (UI_InputSettingElement_o *)
                                                      UnityEngine_GameObject__GetComponent<object>
                                                                (pUVar12,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
                                            (__this->fields)._blueInput = pUVar15;
                                            il2cpp_runtime_glue(&(__this->fields)._blueInput);
                                            pUVar4 = UnityEngine_GameObject__get_transform
                                                               (pUVar3,(MethodInfo *)0x0);
                                            pSVar1 = (__this->fields)._alpha;
                                            pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                      il2cpp_runtime_glue(TypeInfo_UnityAction);
                                            UnityEngine_Events_UnityAction___ctor();
                                            pUVar12 = UI_ElementFactory__CreateInputSetting
                                                                (pUVar4,__this_00,
                                                                 (Settings_BaseSetting_o *)pSVar1,
                                                                 "A","",62.0,34.0
                                                                 ,0,pUVar14,
                                                                 (UnityEngine_Events_UnityAction_o *
                                                                 )0x0,(System_Func_string__bool__o *
                                                                      )0x0,
                                                                 (System_Func_string__string__o *)
                                                                 0x0,(MethodInfo *)0x0);
                                            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar15 = (UI_InputSettingElement_o *)
                                                        UnityEngine_GameObject__GetComponent<object>
                                                                  (pUVar12,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
                                              (__this->fields)._alphaInput = pUVar15;
                                              il2cpp_runtime_glue(&(__this->fields)._alphaInput);
                                              pUVar4 = UnityEngine_GameObject__get_transform
                                                                 (pUVar3,(MethodInfo *)0x0);
                                              setting = (__this->fields)._hex;
                                              pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                        il2cpp_runtime_glue(TypeInfo_UnityAction);
                                              UnityEngine_Events_UnityAction___ctor();
                                              onEndEdit = (UnityEngine_Events_UnityAction_o *)
                                                          il2cpp_runtime_glue(TypeInfo_UnityAction);
                                              UnityEngine_Events_UnityAction___ctor();
                                              onValidate = (System_Func_string__bool__o *)
                                                           il2cpp_runtime_glue(TypeInfo_Func_string__bool);
                                              System_Func<object__bool>___ctor();
                                              onCleanup = (System_Func_string__string__o *)
                                                          il2cpp_runtime_glue(TypeInfo_Func_string__string);
                                              System_Func<object__object>___ctor();
                                              pUVar3 = UI_ElementFactory__CreateInputSetting
                                                                 (pUVar4,local_38,
                                                                  (Settings_BaseSetting_o *)setting,
                                                                  "Hex","",116.0,
                                                                  34.0,0,pUVar14,onEndEdit,
                                                                  onValidate,onCleanup,
                                                                  (MethodInfo *)0x0);
                                              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                                                pUVar15 = (UI_InputSettingElement_o *)
                                                                                                                    
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar3,MethodInfo_InputSettingElement_GetComponent_InputSettingEle);
                                                (__this->fields)._hexInput = pUVar15;
                                                il2cpp_runtime_glue(&(__this->fields)._hexInput,
                                                                   pUVar15);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$OnButtonClick
// il2cpp: void UI_ColorPickPopup__OnButtonClick (UI_ColorPickPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x401f4e0

void UI_ColorPickPopup__OnButtonClick
               (UI_ColorPickPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  bool_conflict bVar4;
  Utility_Color255_o *pUVar5;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar6;
  
  if (DAT_057042d3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_057042d3 = '\x01';
  }
  bVar4 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    method_00 = "Save";
    bVar4 = System_String__op_Equality(name,(System_String_o *)"Save",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    pSVar1 = (__this->fields)._setting;
    pUVar5 = UI_ColorPickPopup__GetCurrentColor255(__this,method_00);
    if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pUVar5,MethodInfo_Void_set_Value);
      pSVar1 = (__this->fields)._setting;
      if ((pSVar1 != (Settings_ColorSetting_o *)0x0) &&
         (pUVar5 = (pSVar1->fields)._value, pUVar5 != (Utility_Color255_o *)0x0)) {
        pUVar2 = (__this->fields)._image;
        UVar6 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                    (UVar6.fields._0_8_,UVar6.fields._8_8_,pUVar2,
                     (pUVar2->klass->vtable)._23_set_color.method);
          pUVar3 = (__this->fields)._onChangeColor;
          if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
            (*(code *)(pUVar3->fields).invoke_impl)
                      ((pUVar3->fields).method_code,(pUVar3->fields).method);
          }
          goto LAB_0401f5e1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0401f5e1:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.ColorPickPopup$$OnSVDragged
// il2cpp: void UI_ColorPickPopup__OnSVDragged (UI_ColorPickPopup_o* __this, float normalizedX, float normalizedY, const MethodInfo* method);
// 0x401fc00

void UI_ColorPickPopup__OnSVDragged
               (UI_ColorPickPopup_o *__this,float normalizedX,float normalizedY,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  (__this->fields)._saturation = normalizedX;
  (__this->fields)._value = normalizedY;
  *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 2) = 1;
  UI_ColorPickPopup__ApplyCurrentColorToUI(__this,1,in_RDX);
  return;
}


// UI.ColorPickPopup$$OnHueDragged
// il2cpp: void UI_ColorPickPopup__OnHueDragged (UI_ColorPickPopup_o* __this, float normalizedX, float normalizedY, const MethodInfo* method);
// 0x401fc30

void UI_ColorPickPopup__OnHueDragged
               (UI_ColorPickPopup_o *__this,float normalizedX,float normalizedY,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  (__this->fields)._hue = 1.0 - normalizedY;
  *(undefined2 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0x101;
  UI_ColorPickPopup__ApplyCurrentColorToUI(__this,1,in_RDX);
  return;
}


// UI.ColorPickPopup$$OnAlphaDragged
// il2cpp: void UI_ColorPickPopup__OnAlphaDragged (UI_ColorPickPopup_o* __this, float normalizedX, float normalizedY, const MethodInfo* method);
// 0x401fc60

void UI_ColorPickPopup__OnAlphaDragged
               (UI_ColorPickPopup_o *__this,float normalizedX,float normalizedY,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  int32_t *piVar3;
  MethodInfo *in_RDX;
  float fVar4;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
    pSVar2 = (__this->fields)._alpha;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar3 = &(pSVar2->fields).MinValue;
  }
  else {
    piVar3 = &(pSVar1->fields).MinAlpha;
  }
  fVar4 = 1.0;
  if (normalizedX <= 1.0) {
    fVar4 = normalizedX;
  }
  (__this->fields)._alphaValue =
       (1.0 - (float)*piVar3 / 255.0) * (float)(-(uint)(0.0 <= normalizedX) & (uint)fVar4) +
       (float)*piVar3 / 255.0;
  *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 2) = 1;
  UI_ColorPickPopup__ApplyCurrentColorToUI(__this,1,in_RDX);
  return;
}


// UI.ColorPickPopup$$OnRGBAInputChanged
// il2cpp: void UI_ColorPickPopup__OnRGBAInputChanged (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401fd30

void UI_ColorPickPopup__OnRGBAInputChanged(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  int32_t *piVar5;
  MethodInfo *method_00;
  float fVar6;
  float fVar7;
  UnityEngine_Color_o rgbColor;
  
  if (DAT_057042d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_057042d4 = '\x01';
  }
  if ((char)(__this->fields)._suppressInputCallbacks != '\0') {
    return;
  }
  pSVar4 = (__this->fields)._red;
  if (((pSVar4 != (Settings_IntSetting_o *)0x0) &&
      (pSVar1 = (__this->fields)._green, pSVar1 != (Settings_IntSetting_o *)0x0)) &&
     (pSVar2 = (__this->fields)._blue, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    rgbColor.fields.r = (float)(pSVar4->fields)._value / 255.0;
    rgbColor.fields.g = (float)(pSVar1->fields)._value / 255.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.b = (float)(pSVar2->fields)._value / 255.0;
    UnityEngine_Color__RGBToHSV
              (rgbColor,&(__this->fields)._hue,&(__this->fields)._saturation,
               &(__this->fields)._value,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
      pSVar4 = (__this->fields)._alpha;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto LAB_0401fe5f;
      piVar5 = &(pSVar4->fields).MinValue;
    }
    else {
      pSVar4 = (__this->fields)._alpha;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto LAB_0401fe5f;
      piVar5 = &(pSVar3->fields).MinAlpha;
    }
    fVar7 = (float)(pSVar4->fields)._value / 255.0;
    fVar6 = (float)*piVar5 / 255.0;
    if ((float)*piVar5 / 255.0 <= fVar7) {
      fVar6 = fVar7;
    }
    fVar7 = 1.0;
    if (fVar6 <= 1.0) {
      fVar7 = fVar6;
    }
    (__this->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar7);
    *(undefined2 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0x101;
    UI_ColorPickPopup__ApplyCurrentColorToUI(__this,1,method_00);
    return;
  }
LAB_0401fe5f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$OnHexInputChanged
// il2cpp: void UI_ColorPickPopup__OnHexInputChanged (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401fe70

void UI_ColorPickPopup__OnHexInputChanged(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  if ((char)(__this->fields)._suppressInputCallbacks != '\0') {
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 3) = 1;
  return;
}


// UI.ColorPickPopup$$OnHexInputEndEdit
// il2cpp: void UI_ColorPickPopup__OnHexInputEndEdit (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401fe90

void UI_ColorPickPopup__OnHexInputEndEdit(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool_conflict bVar5;
  System_String_o *htmlString;
  int32_t *piVar6;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar7;
  UI_ColorPickPopup_o *__this_00;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o rgbColor;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  char *pcStack_20;
  
  pMVar7 = (MethodInfo *)auStack_38;
  __this_00 = __this;
  if (DAT_057042d5 == '\0') {
    __this_00 = (UI_ColorPickPopup_o *)&MethodInfo_String_get_Value;
    il2cpp_init_method_metadata();
    DAT_057042d5 = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((char)(__this->fields)._suppressInputCallbacks != '\0') {
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 3) = 0;
  pSVar2 = (__this->fields)._hex;
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    method_01 = (MethodInfo *)(pSVar2->fields)._value;
    auStack_38._0_8_ = (Il2CppMethodPointer)0x0;
    auStack_38._8_8_ = (InvokerMethod)0x0;
    htmlString = UI_ColorPickPopup__CleanupHexInput(__this_00,(System_String_o *)method_01,in_RDX);
    if (htmlString != (System_String_o *)0x0) {
      iVar1 = (htmlString->fields)._stringLength;
      if (((iVar1 != 9) && (iVar1 != 7)) ||
         (bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                            (htmlString,(UnityEngine_Color_o *)auStack_38,(MethodInfo *)0x0),
         method_01 = pMVar7, (char)bVar5 == '\0')) {
        UI_ColorPickPopup__SyncInputValuesFromCurrentColor(__this,method_01);
        return;
      }
      if ((htmlString->fields)._stringLength == 7) {
        auStack_38._12_4_ = (__this->fields)._alphaValue;
      }
      uStack_28 = (InvokerMethod)auStack_38._8_8_;
      pcStack_20 = (char *)0x0;
      rgbColor.fields.a = 1.0;
      rgbColor.fields.b = (float)auStack_38._8_8_;
      rgbColor.fields.r = (float)auStack_38._0_4_;
      rgbColor.fields.g = (float)auStack_38._4_4_;
      UnityEngine_Color__RGBToHSV
                (rgbColor,&(__this->fields)._hue,&(__this->fields)._saturation,
                 &(__this->fields)._value,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._setting;
      if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
        pSVar4 = (__this->fields)._alpha;
        if (pSVar4 == (Settings_IntSetting_o *)0x0) goto LAB_04020023;
        piVar6 = &(pSVar4->fields).MinValue;
      }
      else {
        piVar6 = &(pSVar3->fields).MinAlpha;
      }
      fVar8 = (float)*piVar6 / 255.0;
      if ((float)*piVar6 / 255.0 <= uStack_28._4_4_) {
        fVar8 = uStack_28._4_4_;
      }
      fVar9 = 1.0;
      if (fVar8 <= 1.0) {
        fVar9 = fVar8;
      }
      (__this->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
      *(undefined2 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0x101;
      pMVar7 = (MethodInfo *)0x1;
      UI_ColorPickPopup__ApplyCurrentColorToUI(__this,1,method_00);
      if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 1) != '\0') {
        UI_ColorPickPopup__UpdateSVTexture(__this,pMVar7);
        *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0;
      }
      if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 2) == '\0') {
        return;
      }
      UI_ColorPickPopup__UpdateAlphaTexture(__this,pMVar7);
      *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 2) = 0;
      return;
    }
  }
LAB_04020023:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$IsHexInputValid
// il2cpp: bool UI_ColorPickPopup__IsHexInputValid (UI_ColorPickPopup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4020860

bool_conflict
UI_ColorPickPopup__IsHexInputValid
          (UI_ColorPickPopup_o *__this,System_String_o *value,MethodInfo *method)

{
  uint16_t character;
  bool_conflict bVar1;
  bool_conflict bVar2;
  System_String_o *__this_00;
  int iVar3;
  
  if (DAT_057042d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Uri);
    il2cpp_init_method_metadata(&"#");
    DAT_057042d6 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
LAB_04020949:
    bVar1 = 0;
  }
  else {
    __this_00 = System_String__Trim(value,(MethodInfo *)0x0);
    if ((__this_00 == (System_String_o *)0x0) ||
       ((bVar1 = System_String__StartsWith(__this_00,"#",(MethodInfo *)0x0),
        (char)bVar1 != '\0' &&
        (__this_00 = System_String__Substring(__this_00,1,(MethodInfo *)0x0),
        __this_00 == (System_String_o *)0x0)))) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar3 = (__this_00->fields)._stringLength;
    bVar1 = 0;
    if (((iVar3 != 0) && (iVar3 < 9)) && (bVar1 = 1, 0 < iVar3)) {
      iVar3 = 0;
      do {
        character = System_String__get_Chars(__this_00,iVar3,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = System_Uri__IsHexDigit(character,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') goto LAB_04020949;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (__this_00->fields)._stringLength);
    }
  }
  return bVar1;
}


// UI.ColorPickPopup$$CleanupHexInput
// il2cpp: System_String_o* UI_ColorPickPopup__CleanupHexInput (UI_ColorPickPopup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4020960

System_String_o *
UI_ColorPickPopup__CleanupHexInput
          (UI_ColorPickPopup_o *__this,System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *a;
  
  if (DAT_057042d7 == '\0') {
    il2cpp_init_method_metadata(&"#");
    il2cpp_init_method_metadata(&"#FFFFFF");
    DAT_057042d7 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    pSVar2 = System_String__Trim(value,(MethodInfo *)0x0);
    if (pSVar2 == (System_String_o *)0x0) {
LAB_04020a5b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = System_String__ToUpperInvariant(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality
                      (a,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0
                      );
    pSVar2 = "#FFFFFF";
    if ((char)bVar1 == '\0') {
      if ((a == (System_String_o *)0x0) ||
         ((bVar1 = System_String__StartsWith(a,"#",(MethodInfo *)0x0), (char)bVar1 == '\0'
          && (a = System_String__Concat("#",a,(MethodInfo *)0x0),
             a == (System_String_o *)0x0)))) goto LAB_04020a5b;
      pSVar2 = a;
      if (9 < (a->fields)._stringLength) {
        pSVar2 = System_String__Substring(a,0,9,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  return pSVar2;
}


// UI.ColorPickPopup$$TryParseCompleteHexColor
// il2cpp: bool UI_ColorPickPopup__TryParseCompleteHexColor (UI_ColorPickPopup_o* __this, System_String_o* input, UnityEngine_Color_o* color, const MethodInfo* method);
// 0x4020030

bool_conflict
UI_ColorPickPopup__TryParseCompleteHexColor
          (UI_ColorPickPopup_o *__this,System_String_o *input,UnityEngine_Color_o *color,
          MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_String_o *htmlString;
  bool_conflict bVar3;
  UnityEngine_Color_Fields local_38;
  
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.0;
  (color->fields).r = 1.0;
  (color->fields).g = 1.0;
  (color->fields).b = 1.0;
  (color->fields).a = 1.0;
  htmlString = UI_ColorPickPopup__CleanupHexInput(__this,input,(MethodInfo *)color);
  if (htmlString != (System_String_o *)0x0) {
    iVar1 = (htmlString->fields)._stringLength;
    if ((iVar1 == 9) || (iVar1 == 7)) {
      bVar3 = 0;
      bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                        (htmlString,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if ((htmlString->fields)._stringLength == 7) {
          local_38.a = (__this->fields)._alphaValue;
        }
        (color->fields).r = local_38.r;
        (color->fields).g = local_38.g;
        (color->fields).b = local_38.b;
        (color->fields).a = local_38.a;
        bVar3 = 1;
      }
    }
    else {
      bVar3 = 0;
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$ApplyCurrentColorToUI
// il2cpp: void UI_ColorPickPopup__ApplyCurrentColorToUI (UI_ColorPickPopup_o* __this, bool syncInputs, const MethodInfo* method);
// 0x401ea30

void UI_ColorPickPopup__ApplyCurrentColorToUI
               (UI_ColorPickPopup_o *__this,bool_conflict syncInputs,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_UI_Image_c *pUVar2;
  bool_conflict bVar3;
  undefined4 in_register_00000034;
  MethodInfo *pMVar4;
  UnityEngine_Color_o UVar5;
  float local_38;
  float local_28;
  
  pMVar4 = (MethodInfo *)CONCAT44(in_register_00000034,syncInputs);
  if (DAT_057042d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057042d8 = '\x01';
  }
  UI_ColorPickPopup__UpdatePickerHandles(__this,pMVar4);
  UVar5 = UnityEngine_Color__HSVToRGB
                    ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,1,
                     (MethodInfo *)0x0);
  if (((__this->fields)._setting == (Settings_ColorSetting_o *)0x0) &&
     ((__this->fields)._alpha == (Settings_IntSetting_o *)0x0)) {
LAB_0401eb67:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar1 = (__this->fields)._preview;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._preview;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_0401eb67;
    local_38 = UVar5.fields.b;
    pUVar2 = pUVar1->klass;
    pMVar4 = (pUVar2->vtable)._23_set_color.method;
    local_28 = UVar5.fields.r;
    (*(pUVar2->vtable)._23_set_color.methodPtr)(local_28,local_38);
  }
  if ((char)syncInputs == '\0') {
    return;
  }
  UI_ColorPickPopup__SyncInputValuesFromCurrentColor(__this,pMVar4);
  return;
}


// UI.ColorPickPopup$$SyncInputValuesFromCurrentColor
// il2cpp: void UI_ColorPickPopup__SyncInputValuesFromCurrentColor (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x40200d0

void UI_ColorPickPopup__SyncInputValuesFromCurrentColor
               (UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UI_InputSettingElement_o *pUVar3;
  Settings_StringSetting_o *__this_00;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  bool_conflict bVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  MethodInfo *pMVar10;
  MethodInfo *pMVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar14;
  undefined4 uVar15;
  UnityEngine_Color_o UVar16;
  Il2CppMethodPointer local_70;
  undefined1 local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [24];
  
  if (DAT_057042d9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_057042d9 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._suppressInputCallbacks = 1;
  uVar14 = 0;
  uVar15 = 0;
  pMVar10 = (MethodInfo *)0x0;
  UVar16 = UnityEngine_Color__HSVToRGB
                     ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,1,
                      (MethodInfo *)0x0);
  uStack_40 = extraout_XMM0_Dc;
  local_48 = (undefined1  [8])UVar16.fields._0_8_;
  uStack_3c = extraout_XMM0_Dd;
  local_38._8_4_ = uVar14;
  local_38._0_8_ = UVar16.fields._8_8_;
  local_38._12_4_ = uVar15;
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
    pSVar2 = (__this->fields)._alpha;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_0402085b;
    piVar8 = &(pSVar2->fields).MinValue;
  }
  else {
    piVar8 = &(pSVar1->fields).MinAlpha;
  }
  fVar13 = (__this->fields)._alphaValue;
  fVar12 = (float)*piVar8 / 255.0;
  if ((float)*piVar8 / 255.0 <= fVar13) {
    fVar12 = fVar13;
  }
  local_58 = ZEXT416((uint)fVar12);
  pSVar2 = (__this->fields)._red;
  if (DAT_056ff244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
  }
  local_68._4_4_ = local_48._4_4_;
  local_68._0_4_ = (float)local_48._0_4_ * 255.0;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  fVar13 = (float)local_48._0_4_ * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    fVar13 = (float)local_68._0_4_;
  }
  dVar4 = (double)fVar13;
  pMVar11 = (MethodInfo *)&local_70;
  dVar5 = modf(dVar4,(double *)pMVar11,pMVar10);
  uVar14 = SUB84(local_70,0);
  uVar15 = (undefined4)((ulong)local_70 >> 0x20);
  if (0.0 <= (float)local_68._0_4_) {
    if ((dVar5 != 0.5) || (NAN(dVar5))) {
      dVar4 = floor(dVar4 + 0.5,pMVar11);
      uVar14 = SUB84(dVar4,0);
      uVar15 = (undefined4)((ulong)dVar4 >> 0x20);
    }
    else if (((long)(double)local_70 & 1U) != 0) {
      dVar4 = (double)local_70 + 1.0;
      goto joined_r0x04020279;
    }
LAB_04020292:
    dVar4 = (double)CONCAT44(uVar15,uVar14);
  }
  else if ((dVar5 != -0.5) || (NAN(dVar5))) {
    dVar4 = ceil(dVar4 + -0.5,pMVar11);
  }
  else {
    if (((long)(double)local_70 & 1U) == 0) goto LAB_04020292;
    dVar4 = (double)local_70 + -1.0;
  }
joined_r0x04020279:
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_0402085b;
  pMVar10 = (MethodInfo *)(ulong)(uint)(int)dVar4;
  Settings_TypedSetting<int>__set_Value
            ((Settings_TypedSetting_int__o *)pSVar2,(int)dVar4,MethodInfo_Void_set_Value);
  pSVar2 = (__this->fields)._green;
  fVar13 = (float)local_48._4_4_;
  local_68._4_4_ = local_48._4_4_;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  if (DAT_056ff244 == '\0') {
    local_68._0_4_ = local_48._4_4_;
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
    fVar13 = (float)local_68._0_4_;
  }
  local_68._0_4_ = fVar13 * 255.0;
  fVar13 = fVar13 * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    fVar13 = (float)local_68._0_4_;
  }
  dVar4 = (double)fVar13;
  pMVar11 = (MethodInfo *)&local_70;
  dVar5 = modf(dVar4,(double *)pMVar11,pMVar10);
  uVar14 = SUB84(local_70,0);
  uVar15 = (undefined4)((ulong)local_70 >> 0x20);
  if (0.0 <= (float)local_68._0_4_) {
    if ((dVar5 != 0.5) || (NAN(dVar5))) {
      dVar4 = floor(dVar4 + 0.5,pMVar11);
      uVar14 = SUB84(dVar4,0);
      uVar15 = (undefined4)((ulong)dVar4 >> 0x20);
    }
    else if (((long)(double)local_70 & 1U) != 0) {
      dVar4 = (double)local_70 + 1.0;
      goto joined_r0x0402039a;
    }
LAB_040203b3:
    dVar4 = (double)CONCAT44(uVar15,uVar14);
  }
  else if ((dVar5 != -0.5) || (NAN(dVar5))) {
    dVar4 = ceil(dVar4 + -0.5,pMVar11);
  }
  else {
    if (((long)(double)local_70 & 1U) == 0) goto LAB_040203b3;
    dVar4 = (double)local_70 + -1.0;
  }
joined_r0x0402039a:
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_0402085b;
  pMVar10 = (MethodInfo *)(ulong)(uint)(int)dVar4;
  Settings_TypedSetting<int>__set_Value
            ((Settings_TypedSetting_int__o *)pSVar2,(int)dVar4,MethodInfo_Void_set_Value);
  pSVar2 = (__this->fields)._blue;
  if (DAT_056ff244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
  }
  local_68._0_4_ = (float)local_38._0_4_ * 255.0;
  fVar13 = (float)local_38._0_4_ * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    fVar13 = (float)local_68._0_4_;
  }
  dVar4 = (double)fVar13;
  pMVar11 = (MethodInfo *)&local_70;
  dVar5 = modf(dVar4,(double *)pMVar11,pMVar10);
  uVar14 = SUB84(local_70,0);
  uVar15 = (undefined4)((ulong)local_70 >> 0x20);
  if (0.0 <= (float)local_68._0_4_) {
    if ((dVar5 != 0.5) || (NAN(dVar5))) {
      dVar4 = floor(dVar4 + 0.5,pMVar11);
      uVar14 = SUB84(dVar4,0);
      uVar15 = (undefined4)((ulong)dVar4 >> 0x20);
    }
    else if (((long)(double)local_70 & 1U) != 0) {
      dVar4 = (double)local_70 + 1.0;
      goto joined_r0x040204aa;
    }
LAB_040204c3:
    dVar4 = (double)CONCAT44(uVar15,uVar14);
  }
  else if ((dVar5 != -0.5) || (NAN(dVar5))) {
    dVar4 = ceil(dVar4 + -0.5,pMVar11);
  }
  else {
    if (((long)(double)local_70 & 1U) == 0) goto LAB_040204c3;
    dVar4 = (double)local_70 + -1.0;
  }
joined_r0x040204aa:
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_0402085b;
  pMVar10 = (MethodInfo *)(ulong)(uint)(int)dVar4;
  Settings_TypedSetting<int>__set_Value
            ((Settings_TypedSetting_int__o *)pSVar2,(int)dVar4,MethodInfo_Void_set_Value);
  pSVar1 = (__this->fields)._setting;
  pSVar2 = (__this->fields)._alpha;
  if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_0402085b;
    piVar8 = &(pSVar2->fields).MinValue;
  }
  else {
    piVar8 = &(pSVar1->fields).MinAlpha;
  }
  local_68._0_4_ = 1.0;
  if ((float)local_58._0_4_ <= 1.0) {
    local_68._0_4_ = local_58._0_4_;
  }
  local_68._0_4_ = -(uint)(0.0 <= (float)local_58._0_4_) & local_68._0_4_;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = ZEXT416((uint)local_68._0_4_);
  if ((float)local_68._0_4_ <= (float)*piVar8 / 255.0) {
    local_68._0_4_ = (float)*piVar8 / 255.0;
  }
  if (DAT_056ff244 == '\0') {
    _local_68 = ZEXT416((uint)local_68._0_4_);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
  }
  local_68._0_4_ = (float)local_68._0_4_ * 255.0;
  fVar13 = (float)local_68._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    fVar13 = (float)local_68._0_4_;
  }
  dVar4 = (double)fVar13;
  pMVar11 = (MethodInfo *)&local_70;
  dVar5 = modf(dVar4,(double *)pMVar11,pMVar10);
  uVar14 = SUB84(local_70,0);
  uVar15 = (undefined4)((ulong)local_70 >> 0x20);
  if (0.0 <= (float)local_68._0_4_) {
    if ((dVar5 != 0.5) || (NAN(dVar5))) {
      dVar4 = floor(dVar4 + 0.5,pMVar11);
      uVar14 = SUB84(dVar4,0);
      uVar15 = (undefined4)((ulong)dVar4 >> 0x20);
    }
    else if (((long)(double)local_70 & 1U) != 0) {
      dVar4 = (double)local_70 + 1.0;
      goto joined_r0x0402061e;
    }
LAB_04020637:
    dVar4 = (double)CONCAT44(uVar15,uVar14);
  }
  else if ((dVar5 != -0.5) || (NAN(dVar5))) {
    dVar4 = ceil(dVar4 + -0.5,pMVar11);
  }
  else {
    if (((long)(double)local_70 & 1U) == 0) goto LAB_04020637;
    dVar4 = (double)local_70 + -1.0;
  }
joined_r0x0402061e:
  if (pSVar2 == (Settings_IntSetting_o *)0x0) {
LAB_0402085b:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Settings_TypedSetting<int>__set_Value
            ((Settings_TypedSetting_int__o *)pSVar2,(int)dVar4,MethodInfo_Void_set_Value);
  pUVar3 = (__this->fields)._redInput;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar3 = (__this->fields)._redInput;
    if (pUVar3 == (UI_InputSettingElement_o *)0x0) goto LAB_0402085b;
    (*(pUVar3->klass->vtable)._6_SyncElement.methodPtr)();
  }
  pUVar3 = (__this->fields)._greenInput;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar3 = (__this->fields)._greenInput;
    if (pUVar3 == (UI_InputSettingElement_o *)0x0) goto LAB_0402085b;
    (*(pUVar3->klass->vtable)._6_SyncElement.methodPtr)();
  }
  pUVar3 = (__this->fields)._blueInput;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar3 = (__this->fields)._blueInput;
    if (pUVar3 == (UI_InputSettingElement_o *)0x0) goto LAB_0402085b;
    (*(pUVar3->klass->vtable)._6_SyncElement.methodPtr)();
  }
  pUVar3 = (__this->fields)._alphaInput;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar3 = (__this->fields)._alphaInput;
    if (pUVar3 == (UI_InputSettingElement_o *)0x0) goto LAB_0402085b;
    (*(pUVar3->klass->vtable)._6_SyncElement.methodPtr)
              (pUVar3,(pUVar3->klass->vtable)._6_SyncElement.method);
  }
  if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 3) == '\0') {
    __this_00 = (__this->fields)._hex;
    uVar14 = local_38._0_4_;
    uVar15 = local_58._0_4_;
    if (DAT_057042de == '\0') {
      local_58._4_4_ = local_58._0_4_;
      local_58._0_4_ = local_38._0_4_;
      local_58._8_4_ = local_38._8_4_;
      local_58._12_4_ = local_38._12_4_;
      il2cpp_init_method_metadata();
      DAT_057042de = '\x01';
      uVar14 = local_58._0_4_;
      uVar15 = local_58._4_4_;
    }
    auVar6 = _local_48;
    UVar16.fields.a = (float)uVar15;
    UVar16.fields.b = (float)uVar14;
    UVar16.fields.r = (float)local_48._0_4_;
    UVar16.fields.g = (float)local_48._4_4_;
    _local_48 = auVar6;
    pSVar9 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar16,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat("#",pSVar9,(MethodInfo *)0x0);
    if (__this_00 == (Settings_StringSetting_o *)0x0) goto LAB_0402085b;
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)pSVar9,MethodInfo_Void_set_Value);
    pUVar3 = (__this->fields)._hexInput;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 != '\0') {
      pUVar3 = (__this->fields)._hexInput;
      if (pUVar3 == (UI_InputSettingElement_o *)0x0) goto LAB_0402085b;
      (*(pUVar3->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar3,(pUVar3->klass->vtable)._6_SyncElement.method);
    }
  }
  *(undefined1 *)&(__this->fields)._suppressInputCallbacks = 0;
  return;
}


// UI.ColorPickPopup$$Update
// il2cpp: void UI_ColorPickPopup__Update (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4020e50

void UI_ColorPickPopup__Update(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 1) != '\0') {
    UI_ColorPickPopup__UpdateSVTexture(__this,method);
    *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0;
  }
  if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 2) != '\0') {
    UI_ColorPickPopup__UpdateAlphaTexture(__this,method);
    *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 2) = 0;
  }
  return;
}


// UI.ColorPickPopup$$MarkTextureDirty
// il2cpp: void UI_ColorPickPopup__MarkTextureDirty (UI_ColorPickPopup_o* __this, bool svDirty, bool alphaDirty, const MethodInfo* method);
// 0x401ea20

void UI_ColorPickPopup__MarkTextureDirty
               (UI_ColorPickPopup_o *__this,bool_conflict svDirty,bool_conflict alphaDirty,
               MethodInfo *method)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((long)&(__this->fields)._suppressInputCallbacks + 1);
  *pbVar1 = *pbVar1 | (byte)svDirty;
  pbVar1 = (byte *)((long)&(__this->fields)._suppressInputCallbacks + 2);
  *pbVar1 = *pbVar1 | (byte)alphaDirty;
  return;
}


// UI.ColorPickPopup$$RefreshTextures
// il2cpp: void UI_ColorPickPopup__RefreshTextures (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401eb70

void UI_ColorPickPopup__RefreshTextures(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 1) != '\0') {
    UI_ColorPickPopup__UpdateSVTexture(__this,method);
    *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0;
  }
  if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 2) != '\0') {
    UI_ColorPickPopup__UpdateAlphaTexture(__this,method);
    *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 2) = 0;
  }
  return;
}


// UI.ColorPickPopup$$EnsureTextures
// il2cpp: void UI_ColorPickPopup__EnsureTextures (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401e3d0

void UI_ColorPickPopup__EnsureTextures(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o **ppUVar1;
  UnityEngine_Texture2D_o **ppUVar2;
  UnityEngine_Object_o *x;
  UnityEngine_UI_RawImage_o *pUVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  UnityEngine_Texture2D_o *pUVar6;
  UnityEngine_Color32_array *pUVar7;
  ulong uVar8;
  UnityEngine_Color_o UVar9;
  
  if (DAT_057042da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color32);
    il2cpp_init_method_metadata(&TypeInfo_ColorPickPopup);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    DAT_057042da = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar6 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor(pUVar6,1,0x100,4,0,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) = pUVar6;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ColorPickPopup + 0xb8),pUVar6);
    if ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) ==
        (UnityEngine_Texture_o *)0x0) goto LAB_0401e847;
    UnityEngine_Texture__set_wrapMode
              ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),1,(MethodInfo *)0x0);
    if ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) ==
        (UnityEngine_Texture_o *)0x0) goto LAB_0401e847;
    UnityEngine_Texture__set_filterMode
              ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),1,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_Color32_array *)il2cpp_glue_02274930(TypeInfo_Color32);
    if (pUVar7 == (UnityEngine_Color32_array *)0x0) {
      UVar9 = UnityEngine_Color__HSVToRGB(1.0,1.0,1.0,1,(MethodInfo *)0x0);
      il2cpp_glue_03ad8d60(UVar9.fields._0_8_,UVar9.fields._8_8_,0);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar8 = 0;
    do {
      UVar9 = UnityEngine_Color__HSVToRGB
                        ((float)(int)uVar8 / -255.0 + 1.0,1.0,1.0,1,(MethodInfo *)0x0);
      iVar5 = il2cpp_glue_03ad8d60(UVar9.fields._0_8_,UVar9.fields._8_8_,0);
      if ((uint)pUVar7->max_length <= uVar8) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (&pUVar7->m_Items[0].fields.rgba)[uVar8] = iVar5;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x100);
    if ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) ==
        (UnityEngine_Texture2D_o *)0x0) goto LAB_0401e847;
    UnityEngine_Texture2D__SetPixels32
              ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),pUVar7,
               (MethodInfo *)0x0);
    if ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) ==
        (UnityEngine_Texture2D_o *)0x0) goto LAB_0401e847;
    UnityEngine_Texture2D__Apply
              ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),0,1,
               (MethodInfo *)0x0);
  }
  pUVar6 = (__this->fields)._svTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._svTexture;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar6 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor(pUVar6,0xc0,0xc0,4,0,(MethodInfo *)0x0);
    *ppUVar1 = pUVar6;
    il2cpp_runtime_glue(ppUVar1,pUVar6);
    if ((UnityEngine_Texture_o *)*ppUVar1 == (UnityEngine_Texture_o *)0x0) goto LAB_0401e847;
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar1,1,(MethodInfo *)0x0);
    if ((UnityEngine_Texture_o *)*ppUVar1 == (UnityEngine_Texture_o *)0x0) goto LAB_0401e847;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar1,1,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_Color32_array *)il2cpp_glue_02274930(TypeInfo_Color32,0x9000);
    (__this->fields)._svPixels = pUVar7;
    il2cpp_runtime_glue(&(__this->fields)._svPixels);
  }
  pUVar6 = (__this->fields)._alphaTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar2 = &(__this->fields)._alphaTexture;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar6 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor(pUVar6,0xc0,1,4,0,(MethodInfo *)0x0);
    *ppUVar2 = pUVar6;
    il2cpp_runtime_glue(ppUVar2,pUVar6);
    if ((UnityEngine_Texture_o *)*ppUVar2 == (UnityEngine_Texture_o *)0x0) goto LAB_0401e847;
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0);
    if ((UnityEngine_Texture_o *)*ppUVar2 == (UnityEngine_Texture_o *)0x0) goto LAB_0401e847;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0);
    pUVar7 = (UnityEngine_Color32_array *)il2cpp_glue_02274930(TypeInfo_Color32,0xc0);
    (__this->fields)._alphaPixels = pUVar7;
    il2cpp_runtime_glue(&(__this->fields)._alphaPixels);
  }
  pUVar3 = (__this->fields)._hueImage;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar3 = (__this->fields)._hueImage;
    if (pUVar3 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_0401e847;
    UnityEngine_UI_RawImage__set_texture
              (pUVar3,(UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),
               (MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._svImage;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar3 = (__this->fields)._svImage;
    if (pUVar3 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_0401e847;
    UnityEngine_UI_RawImage__set_texture(pUVar3,(UnityEngine_Texture_o *)*ppUVar1,(MethodInfo *)0x0)
    ;
  }
  pUVar3 = (__this->fields)._alphaImage;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pUVar3 = (__this->fields)._alphaImage;
  if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
    UnityEngine_UI_RawImage__set_texture(pUVar3,(UnityEngine_Texture_o *)*ppUVar2,(MethodInfo *)0x0)
    ;
    return;
  }
LAB_0401e847:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$UpdateSVTexture
// il2cpp: void UI_ColorPickPopup__UpdateSVTexture (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4020e90

void UI_ColorPickPopup__UpdateSVTexture(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  UnityEngine_Color32_array *pUVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UnityEngine_Color_o UVar8;
  
  if (DAT_057042db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057042db = '\x01';
  }
  pUVar1 = (__this->fields)._svTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar7 = 0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  iVar6 = 0;
  do {
    iVar5 = 0;
    do {
      pUVar2 = (__this->fields)._svPixels;
      UVar8 = UnityEngine_Color__HSVToRGB
                        ((__this->fields)._hue,(float)iVar5 / 191.0,(float)iVar6 / 191.0,1,
                         (MethodInfo *)0x0);
      iVar4 = il2cpp_glue_03ad8d60(UVar8.fields._0_8_,UVar8.fields._8_8_,0);
      if (pUVar2 == (UnityEngine_Color32_array *)0x0) goto LAB_04020fd3;
      if ((uint)pUVar2->max_length <= (uint)(iVar7 + iVar5)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (&pUVar2->m_Items[0].fields.rgba)[iVar7 + iVar5] = iVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xc0);
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 0xc0;
  } while (iVar6 != 0xc0);
  pUVar1 = (__this->fields)._svTexture;
  if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__SetPixels32(pUVar1,(__this->fields)._svPixels,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._svTexture;
    if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply(pUVar1,0,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_04020fd3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$UpdateAlphaTexture
// il2cpp: void UI_ColorPickPopup__UpdateAlphaTexture (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4020fe0

void UI_ColorPickPopup__UpdateAlphaTexture(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  UnityEngine_Color32_array *pUVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  ulong uVar5;
  UnityEngine_Color_o UVar6;
  float local_38;
  float local_28;
  
  if (DAT_057042dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057042dc = '\x01';
  }
  pUVar1 = (__this->fields)._alphaTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  UVar6 = UnityEngine_Color__HSVToRGB
                    ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,1,
                     (MethodInfo *)0x0);
  if (((__this->fields)._setting != (Settings_ColorSetting_o *)0x0) ||
     ((__this->fields)._alpha != (Settings_IntSetting_o *)0x0)) {
    uVar5 = 0;
    do {
      pUVar2 = (__this->fields)._alphaPixels;
      local_38 = UVar6.fields.b;
      local_28 = UVar6.fields.r;
      iVar4 = il2cpp_glue_03ad8d60(local_28,local_38,0);
      if (pUVar2 == (UnityEngine_Color32_array *)0x0) goto LAB_0402117d;
      if ((uint)pUVar2->max_length <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (&pUVar2->m_Items[0].fields.rgba)[uVar5] = iVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0xc0);
    pUVar1 = (__this->fields)._alphaTexture;
    if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__SetPixels32(pUVar1,(__this->fields)._alphaPixels,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._alphaTexture;
      if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__Apply(pUVar1,0,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0402117d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$UpdatePickerHandles
// il2cpp: void UI_ColorPickPopup__UpdatePickerHandles (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4020a60

void UI_ColorPickPopup__UpdatePickerHandles(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool_conflict bVar5;
  int32_t *piVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  float fVar8;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Rect_o UVar11;
  float local_28;
  
  if (DAT_057042dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057042dd = '\x01';
  }
  pUVar7 = (__this->fields)._svRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = (__this->fields)._svHandle;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 != '\0') {
      pUVar7 = (__this->fields)._svRect;
      if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04020d4e;
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._svRect;
      if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04020d4e;
      UVar11 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._svHandle;
      if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04020d4e;
      local_28 = UVar10.fields.m_Width;
      fVar8 = UVar11.fields.m_Height + -6.0;
      uVar1 = (__this->fields)._saturation;
      uVar2 = (__this->fields)._value;
      value.fields.x = (float)uVar1 * (local_28 + -6.0) + (local_28 + -6.0) * -0.5;
      value.fields.y = (float)uVar2 * fVar8 + fVar8 * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar7,value,(MethodInfo *)0x0);
    }
  }
  pUVar7 = (__this->fields)._hueRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar7 = (__this->fields)._hueHandle;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 != '\0') {
      pUVar7 = (__this->fields)._hueRect;
      if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04020d4e;
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._hueHandle;
      if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04020d4e;
      fVar8 = UVar10.fields.m_Height + -6.0;
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar7,(UnityEngine_Vector2_o)
                        ((ulong)(uint)((1.0 - (__this->fields)._hue) * fVar8 + fVar8 * -0.5) << 0x20
                        ),(MethodInfo *)0x0);
    }
  }
  pUVar7 = (__this->fields)._alphaRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar7 = (__this->fields)._alphaHandle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar7 = (__this->fields)._alphaRect;
  if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
    UVar10 = UnityEngine_RectTransform__get_rect(pUVar7,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
      pSVar4 = (__this->fields)._alpha;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto LAB_04020d4e;
      piVar6 = &(pSVar4->fields).MinValue;
    }
    else {
      piVar6 = &(pSVar3->fields).MinAlpha;
    }
    fVar8 = (float)*piVar6 / 255.0;
    if ((fVar8 != 1.0) || (NAN(fVar8))) {
      fVar8 = ((__this->fields)._alphaValue - fVar8) / (1.0 - fVar8);
      if (0.0 <= fVar8) {
        fVar9 = 1.0;
        if (fVar8 <= 1.0) {
          fVar9 = fVar8;
        }
        pUVar7 = (__this->fields)._alphaHandle;
        if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto LAB_04020d4e;
        goto LAB_04020d1b;
      }
    }
    fVar9 = 0.0;
    pUVar7 = (__this->fields)._alphaHandle;
    if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
LAB_04020d1b:
      fVar8 = UVar10.fields.m_Width + -6.0;
      value_00.fields.y = 0.0;
      value_00.fields.x = fVar8 * fVar9 + fVar8 * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar7,value_00,(MethodInfo *)0x0);
      return;
    }
  }
LAB_04020d4e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$GetCurrentColor
// il2cpp: UnityEngine_Color_o UI_ColorPickPopup__GetCurrentColor (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4020d60

UnityEngine_Color_o
UI_ColorPickPopup__GetCurrentColor(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  int32_t *piVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o UVar6;
  
  UVar6 = UnityEngine_Color__HSVToRGB
                    ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,1,
                     (MethodInfo *)0x0);
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
    pSVar2 = (__this->fields)._alpha;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar3 = &(pSVar2->fields).MinValue;
  }
  else {
    piVar3 = &(pSVar1->fields).MinAlpha;
  }
  fVar5 = (__this->fields)._alphaValue;
  fVar4 = (float)*piVar3 / 255.0;
  if ((float)*piVar3 / 255.0 <= fVar5) {
    fVar4 = fVar5;
  }
  fVar5 = 1.0;
  if (fVar4 <= 1.0) {
    fVar5 = fVar4;
  }
  UVar6.fields.a = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
  return (UnityEngine_Color_o)UVar6.fields;
}


// UI.ColorPickPopup$$GetHexString
// il2cpp: System_String_o* UI_ColorPickPopup__GetHexString (UI_ColorPickPopup_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x4020df0

System_String_o *
UI_ColorPickPopup__GetHexString
          (UI_ColorPickPopup_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057042de == '\0') {
    il2cpp_init_method_metadata();
    DAT_057042de = '\x01';
  }
  pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ColorPickPopup$$GetMinAlpha01
// il2cpp: float UI_ColorPickPopup__GetMinAlpha01 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401fce0

float UI_ColorPickPopup__GetMinAlpha01(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
    return (float)(pSVar1->fields).MinAlpha / 255.0;
  }
  pSVar2 = (__this->fields)._alpha;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    return (float)(pSVar2->fields).MinValue / 255.0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$GetCurrentColor255
// il2cpp: Utility_Color255_o* UI_ColorPickPopup__GetCurrentColor255 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x401f610

/* WARNING: Type propagation algorithm not settling */

Utility_Color255_o *
UI_ColorPickPopup__GetCurrentColor255(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_ColorSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  double dVar4;
  _union_14 _Var5;
  undefined1 auVar6 [16];
  int32_t *piVar7;
  Utility_Color255_o *__this_00;
  int iVar8;
  int32_t a;
  MethodInfo *method_00;
  _union_14 *p_Var9;
  int g;
  int b;
  int r;
  float fVar10;
  float fVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar12;
  undefined4 uVar13;
  UnityEngine_Color_o UVar14;
  _union_14 local_90;
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  _union_14 local_50;
  undefined1 local_48 [16];
  double local_30;
  
  if (DAT_057042df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    DAT_057042df = '\x01';
  }
  uVar12 = 0;
  uVar13 = 0;
  method_00 = (MethodInfo *)0x0;
  UVar14 = UnityEngine_Color__HSVToRGB
                     ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,1,
                      (MethodInfo *)0x0);
  pSVar2 = (__this->fields)._setting;
  local_68._8_4_ = uVar12;
  local_68._0_8_ = UVar14.fields._8_8_;
  local_68._12_4_ = uVar13;
  if (pSVar2 == (Settings_ColorSetting_o *)0x0) {
    pSVar3 = (__this->fields)._alpha;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto LAB_0401fbed;
    piVar7 = &(pSVar3->fields).MinValue;
  }
  else {
    piVar7 = &(pSVar2->fields).MinAlpha;
  }
  fVar10 = (__this->fields)._alphaValue;
  fVar11 = (float)*piVar7 / 255.0;
  if ((float)*piVar7 / 255.0 <= fVar10) {
    fVar11 = fVar10;
  }
  local_48 = ZEXT416((uint)fVar11);
  uStack_80 = extraout_XMM0_Dc;
  local_88 = (undefined1  [8])UVar14.fields._0_8_;
  uStack_7c = extraout_XMM0_Dd;
  fVar10 = UVar14.fields.r;
  if (DAT_056ff244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
    fVar10 = (float)local_88._0_4_;
  }
  local_50._0_4_ = fVar10 * 255.0;
  uVar12 = fVar10 * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    uVar12 = local_50._0_4_;
  }
  p_Var9 = &local_90;
  local_78._0_8_ = (double)(float)uVar12;
  dVar4 = modf((double)(float)uVar12,(double *)p_Var9,method_00);
  if (0.0 <= (float)local_50._0_4_) {
    if ((dVar4 == 0.5) && (!NAN(dVar4))) {
      local_50 = local_90;
      if (((long)(double)local_90 & 1U) != 0) {
        local_50.genericMethod = (void *)(local_90.genericMethod + 1.0);
      }
      goto LAB_0401f77e;
    }
    dVar4 = floor((double)local_78._0_8_ + 0.5,(MethodInfo *)p_Var9);
    uVar12 = SUB84(dVar4,0);
    uVar13 = (undefined4)((ulong)dVar4 >> 0x20);
LAB_0401f986:
    local_50._4_4_ = uVar13;
    local_50._0_4_ = uVar12;
    local_88._0_4_ = local_88._4_4_;
  }
  else {
    if ((dVar4 != -0.5) || (NAN(dVar4))) {
      dVar4 = ceil((double)local_78._0_8_ + -0.5,(MethodInfo *)p_Var9);
      uVar12 = SUB84(dVar4,0);
      uVar13 = (undefined4)((ulong)dVar4 >> 0x20);
      goto LAB_0401f986;
    }
    local_50 = local_90;
    if (((long)(double)local_90 & 1U) != 0) {
      local_50 = (void *)(local_90.genericMethod + -1.0);
    }
LAB_0401f77e:
    local_88._0_4_ = local_88._4_4_;
  }
  local_88._4_4_ = local_88._0_4_;
  if (DAT_056ff244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
  }
  local_88._0_4_ = (float)local_88._0_4_ * 255.0;
  fVar10 = (float)local_88._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    fVar10 = (float)local_88._0_4_;
  }
  p_Var9 = &local_90;
  local_78._0_8_ = (double)fVar10;
  dVar4 = modf((double)fVar10,(double *)p_Var9,method_00);
  local_88 = (undefined1  [8])local_90;
  if (0.0 <= (float)local_88._0_4_) {
    if ((dVar4 != 0.5) || (NAN(dVar4))) {
      dVar4 = floor((double)local_78._0_8_ + 0.5,(MethodInfo *)p_Var9);
      local_88 = (undefined1  [8])dVar4;
    }
    else {
      if (((long)(double)local_90 & 1U) != 0) {
        local_88 = (undefined1  [8])((double)local_90 + 1.0);
      }
LAB_0401f867:
    }
  }
  else if ((dVar4 != -0.5) || (NAN(dVar4))) {
    dVar4 = ceil((double)local_78._0_8_ + -0.5,(MethodInfo *)p_Var9);
    local_88 = (undefined1  [8])dVar4;
  }
  else {
    if (((long)(double)local_90 & 1U) == 0) goto LAB_0401f867;
    local_88 = (undefined1  [8])((double)local_90 + -1.0);
  }
  if (DAT_056ff244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
  }
  local_68._0_4_ = (float)local_68._0_4_ * 255.0;
  fVar10 = (float)local_68._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    fVar10 = (float)local_68._0_4_;
  }
  fVar11 = 1.0;
  if ((float)local_48._0_4_ <= 1.0) {
    fVar11 = (float)local_48._0_4_;
  }
  local_78 = ZEXT416((uint)fVar11);
  local_30 = (double)fVar10;
  p_Var9 = &local_90;
  dVar4 = modf(local_30,(double *)p_Var9,method_00);
  _Var5 = local_90;
  if (0.0 <= (float)local_68._0_4_) {
    if ((dVar4 == 0.5) && (!NAN(dVar4))) {
      if (((long)(double)local_90 & 1U) != 0) {
        _Var5.genericMethod = (void *)(local_90.genericMethod + 1.0);
      }
      goto LAB_0401f94e;
    }
    dVar4 = floor(local_30 + 0.5,(MethodInfo *)p_Var9);
    uVar12 = SUB84(dVar4,0);
    uVar13 = (undefined4)((ulong)dVar4 >> 0x20);
LAB_0401fa2f:
    auVar6 = local_68;
    local_68._4_4_ = uVar13;
    local_68._0_4_ = uVar12;
    local_68._8_8_ = auVar6._8_8_;
  }
  else {
    if ((dVar4 != -0.5) || (NAN(dVar4))) {
      dVar4 = ceil(local_30 + -0.5,(MethodInfo *)p_Var9);
      uVar12 = SUB84(dVar4,0);
      uVar13 = (undefined4)((ulong)dVar4 >> 0x20);
      goto LAB_0401fa2f;
    }
    if (((long)(double)local_90 & 1U) != 0) {
      _Var5 = (void *)(local_90.genericMethod + -1.0);
    }
LAB_0401f94e:
    local_68._0_8_ = _Var5.genericMethod;
  }
  local_48._4_4_ = local_48._4_4_ & local_78._4_4_;
  local_48._0_4_ = -(uint)(0.0 <= (float)local_48._0_4_) & (uint)((float)local_78._0_4_ * 255.0);
  local_48._8_4_ = local_48._8_4_ & local_78._8_4_;
  local_48._12_4_ = local_48._12_4_ & local_78._12_4_;
  if (DAT_056ff244 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056ff244 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  p_Var9 = &local_90;
  local_78._0_8_ = (double)(float)local_48._0_4_;
  dVar4 = modf((double)(float)local_48._0_4_,(double *)p_Var9,method_00);
  uVar12 = local_90._0_4_;
  uVar13 = local_90._4_4_;
  if (0.0 <= (float)local_48._0_4_) {
    if ((dVar4 != 0.5) || (NAN(dVar4))) {
      dVar4 = floor((double)local_78._0_8_ + 0.5,(MethodInfo *)p_Var9);
      uVar12 = SUB84(dVar4,0);
      uVar13 = (undefined4)((ulong)dVar4 >> 0x20);
    }
    else if (((long)(double)local_90 & 1U) != 0) {
      dVar4 = (double)local_90 + 1.0;
      pSVar2 = (__this->fields)._setting;
      goto joined_r0x0401fb0d;
    }
LAB_0401fb79:
    dVar4 = (double)CONCAT44(uVar13,uVar12);
    pSVar2 = (__this->fields)._setting;
  }
  else if ((dVar4 != -0.5) || (NAN(dVar4))) {
    dVar4 = ceil((double)local_78._0_8_ + -0.5,(MethodInfo *)p_Var9);
    pSVar2 = (__this->fields)._setting;
  }
  else {
    if (((long)(double)local_90 & 1U) == 0) goto LAB_0401fb79;
    dVar4 = (double)local_90 + -1.0;
    pSVar2 = (__this->fields)._setting;
  }
joined_r0x0401fb0d:
  if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
    r = (int)(double)local_50;
    g = (int)(double)local_88;
    b = (int)(double)local_68._0_8_;
    iVar8 = (int)dVar4;
    iVar1 = (pSVar2->fields).MinAlpha;
    a = 0xff;
    if (iVar8 < 0x100) {
      a = iVar8;
    }
    if (iVar8 < iVar1) {
      a = iVar1;
    }
    __this_00 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
    Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
    return __this_00;
  }
LAB_0401fbed:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$CreateTextureContainer
// il2cpp: UnityEngine_GameObject_o* UI_ColorPickPopup__CreateTextureContainer (UI_ColorPickPopup_o* __this, UnityEngine_Transform_o* parent, System_String_o* name, float width, float height, UnityEngine_RectTransform_o** textureRect, const MethodInfo* method);
// 0x401ebb0

UnityEngine_GameObject_o *
UI_ColorPickPopup__CreateTextureContainer
          (UI_ColorPickPopup_o *__this,UnityEngine_Transform_o *parent,System_String_o *name,
          float width,float height,UnityEngine_RectTransform_o **textureRect,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *pSVar1;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_RectTransform_o *pUVar6;
  undefined8 uVar7;
  
  if (DAT_057042e0 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_ColorPickDragArea);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeRef_RawImage);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"Texture");
    DAT_057042e0 = '\x01';
  }
  pSVar1 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto LAB_0401f0a7;
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0401f0b1;
  }
  if ((int)pSVar1->max_length == 0) goto LAB_0401f0ac;
  pSVar1->m_Items[0] = pSVar2;
  il2cpp_runtime_glue(pSVar1->m_Items);
  pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0401f0b1;
  }
  if ((uint)pSVar1->max_length < 2) goto LAB_0401f0ac;
  pSVar1->m_Items[1] = pSVar2;
  il2cpp_runtime_glue(pSVar1->m_Items + 1);
  pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (lVar3 == 0) goto LAB_0401f0b1;
  }
  if ((uint)pSVar1->max_length < 3) goto LAB_0401f0ac;
  pSVar1->m_Items[2] = pSVar2;
  il2cpp_runtime_glue(pSVar1->m_Items + 2,pSVar2);
  __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this_00,name,pSVar1,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_0401f0a7;
    UnityEngine_Transform__SetParent(pUVar4,parent,0,(MethodInfo *)0x0);
    pIVar5 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0401f0a7;
    (*pIVar5->klass->vtable[0x24].methodPtr)(width,pIVar5,pIVar5->klass->vtable[0x24].method);
    (*pIVar5->klass->vtable[0x26].methodPtr)
              ((ulong)(uint)height,pIVar5,pIVar5->klass->vtable[0x26].method);
    pIVar5 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Image_GetComponent_Image);
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_0401f0a7;
    (*pIVar5->klass->vtable[0x17].methodPtr)(0,0,pIVar5,pIVar5->klass->vtable[0x17].method);
    pSVar1 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
    if (pSVar1 == (System_Type_array *)0x0) goto LAB_0401f0a7;
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0401f0b1;
    }
    if ((int)pSVar1->max_length == 0) goto LAB_0401f0ac;
    pSVar1->m_Items[0] = pSVar2;
    il2cpp_runtime_glue(pSVar1->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_RawImage,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (lVar3 == 0) goto LAB_0401f0b1;
    }
    if (1 < (uint)pSVar1->max_length) {
      pSVar1->m_Items[1] = pSVar2;
      il2cpp_runtime_glue(pSVar1->m_Items + 1);
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_ColorPickDragArea,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        lVar3 = il2cpp_runtime_glue(pSVar2,(((pSVar1->obj).klass)->_1).element_class);
        if (lVar3 == 0) {
LAB_0401f0b1:
          uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar7,0);
        }
      }
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = pSVar2;
        il2cpp_runtime_glue(pSVar1->m_Items + 2,pSVar2);
        __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(__this_01,"Texture",pSVar1,(MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
          parent_00 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(pUVar4,parent_00,0,(MethodInfo *)0x0);
            pUVar6 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
            *textureRect = pUVar6;
            il2cpp_runtime_glue(textureRect);
            pUVar6 = *textureRect;
            if (DAT_056fe093 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector2);
              DAT_056fe093 = '\x01';
            }
            if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar6,(UnityEngine_Vector2_o)
                                **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              pUVar6 = *textureRect;
              if (DAT_0570136e == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_Vector2);
                DAT_0570136e = '\x01';
              }
              if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar6,(UnityEngine_Vector2_o)
                                  *(UnityEngine_Vector2_Fields *)
                                   (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),(MethodInfo *)0x0);
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
        goto LAB_0401f0a7;
      }
    }
LAB_0401f0ac:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0401f0a7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$CreateTextureSurface
// il2cpp: UnityEngine_UI_RawImage_o* UI_ColorPickPopup__CreateTextureSurface (UI_ColorPickPopup_o* __this, UnityEngine_Transform_o* container, System_String_o* name, UnityEngine_RectTransform_o** rect, const MethodInfo* method);
// 0x401f0c0

UnityEngine_UI_RawImage_o *
UI_ColorPickPopup__CreateTextureSurface
          (UI_ColorPickPopup_o *__this,UnityEngine_Transform_o *container,System_String_o *name,
          UnityEngine_RectTransform_o **rect,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_RectTransform_o *pUVar1;
  
  if (DAT_057042e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&"Texture");
    DAT_057042e1 = '\x01';
  }
  if (container != (UnityEngine_Transform_o *)0x0) {
    __this_00 = UnityEngine_Transform__Find(container,"Texture",(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      __this_01 = (UnityEngine_UI_RawImage_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this_00,MethodInfo_RawImage_GetComponent_RawImage);
      if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
        UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_01,name,(MethodInfo *)0x0);
        (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (__this_01,1,(__this_01->klass->vtable)._25_set_raycastTarget.method);
        pUVar1 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
        *rect = pUVar1;
        il2cpp_runtime_glue(rect,pUVar1);
        return __this_01;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$CreateHandle
// il2cpp: UnityEngine_RectTransform_o* UI_ColorPickPopup__CreateHandle (UI_ColorPickPopup_o* __this, UnityEngine_RectTransform_o* parent, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x401f1c0

UnityEngine_RectTransform_o *
UI_ColorPickPopup__CreateHandle
          (UI_ColorPickPopup_o *__this,UnityEngine_RectTransform_o *parent,
          UnityEngine_Vector2_o size,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Il2CppObject *pIVar3;
  UnityEngine_UI_Shadow_o *__this_03;
  undefined8 uVar4;
  MethodInfo *extraout_RDX;
  
  if (DAT_057042e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_Shadow_GetComponent_Shadow);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_Image);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeRef_Shadow);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"Handle");
    DAT_057042e2 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,3,method);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
LAB_0401f4c3:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_0401f4cd;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) goto LAB_0401f4cd;
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      il2cpp_runtime_glue(components->m_Items + 1);
      pSVar1 = System_Type__GetTypeFromHandle(TypeRef_Shadow,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
        if (lVar2 == 0) {
LAB_0401f4cd:
          uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar4,0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        il2cpp_runtime_glue(components->m_Items + 2,pSVar1);
        __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
        UnityEngine_GameObject___ctor(__this_00,"Handle",components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent
                      (__this_01,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
            __this_02 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax
                        (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_sizeDelta(__this_02,size,(MethodInfo *)0x0);
              pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Image_GetComponent_Image);
              if (pIVar3 != (Il2CppObject *)0x0) {
                (*pIVar3->klass->vtable[0x17].methodPtr)
                          (0x3f800000,0x3f59999a3f800000,pIVar3,pIVar3->klass->vtable[0x17].method);
                (*pIVar3->klass->vtable[0x19].methodPtr)
                          (pIVar3,0,pIVar3->klass->vtable[0x19].method);
                __this_03 = (UnityEngine_UI_Shadow_o *)
                            UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Shadow_GetComponent_Shadow);
                if (__this_03 != (UnityEngine_UI_Shadow_o *)0x0) {
                  UnityEngine_UI_Shadow__set_effectColor
                            (__this_03,(UnityEngine_Color_o)(ZEXT816(0x3f66666600000000) << 0x40),
                             (MethodInfo *)0x0);
                  UnityEngine_UI_Shadow__set_effectDistance
                            (__this_03,(UnityEngine_Vector2_o)0xbf8000003f800000,(MethodInfo *)0x0);
                  return __this_02;
                }
              }
            }
          }
        }
        goto LAB_0401f4c3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ColorPickPopup$$OnDestroy
// il2cpp: void UI_ColorPickPopup__OnDestroy (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4021190

void UI_ColorPickPopup__OnDestroy(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  
  if (DAT_057042e3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ColorPickPopup);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057042e3 = '\x01';
  }
  pUVar1 = (__this->fields)._svTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._svTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._alphaTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._alphaTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar2 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar2,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) = 0;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_ColorPickPopup + 0xb8),0);
    return;
  }
  return;
}


// UI.ColorPickPopup$$.ctor
// il2cpp: void UI_ColorPickPopup___ctor (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x40212f0

void UI_ColorPickPopup___ctor(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  MethodInfo *method_00;
  
  if (DAT_057042e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"#FFFFFFFF");
    DAT_057042e4 = '\x01';
  }
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._red = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._red);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._green = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._green);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._blue = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._blue);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._alpha = pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._alpha,pSVar1);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor
            ((Settings_StringSetting_o *)method_00,"#FFFFFFFF",9,(MethodInfo *)0x0);
  (__this->fields)._hex = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields)._hex);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.ColorPickPopup$$<Setup>b__53_0
// il2cpp: void UI_ColorPickPopup___Setup_b__53_0 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4021470

void UI_ColorPickPopup__<Setup>b__53_0(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057042e5 == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_057042e5 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ColorPickPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.ColorPickPopup$$<Setup>b__53_1
// il2cpp: void UI_ColorPickPopup___Setup_b__53_1 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x40214b0

void UI_ColorPickPopup__<Setup>b__53_1(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_057042e6 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_057042e6 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ColorPickPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


