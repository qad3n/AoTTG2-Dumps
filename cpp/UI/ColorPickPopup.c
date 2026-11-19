// Type: UI.ColorPickPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/ColorPickPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ColorPickPopup.cs
// --------------------------------

// UI.ColorPickPopup$$get_Title
// il2cpp: System_String_o* UI_ColorPickPopup__get_Title (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cb8370

System_String_o * UI_ColorPickPopup__get_Title(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547ad9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorPickPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547ad9 = '\x01';
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
// 0x5cb8410

float UI_ColorPickPopup__get_Width(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 520.0;
}


// UI.ColorPickPopup$$get_Height
// il2cpp: float UI_ColorPickPopup__get_Height (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cb8420

float UI_ColorPickPopup__get_Height(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 520.0;
}


// UI.ColorPickPopup$$get_VerticalSpacing
// il2cpp: float UI_ColorPickPopup__get_VerticalSpacing (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cb8430

float UI_ColorPickPopup__get_VerticalSpacing(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 12.0;
}


// UI.ColorPickPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ColorPickPopup__get_PanelAlignment (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cb8440

int32_t UI_ColorPickPopup__get_PanelAlignment(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.ColorPickPopup$$Setup
// il2cpp: void UI_ColorPickPopup__Setup (UI_ColorPickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cb8450

void UI_ColorPickPopup__Setup(UI_ColorPickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547ada == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_Setup_b__53_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ColorPickPopup_Setup_b__53_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547ada = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)method_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar3,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ColorPickPopup_Setup_b__53_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton
            (pUVar1,(UI_ElementStyle_o *)method_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar3,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ColorPickPopup_Setup_b__53_1,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton
            (pUVar1,(UI_ElementStyle_o *)method_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  UI_ColorPickPopup__SetupPickerUI(__this,method_00);
  UI_ColorPickPopup__EnsureTextures(__this,method_00);
  return;
}


// UI.ColorPickPopup$$Show
// il2cpp: void UI_ColorPickPopup__Show (UI_ColorPickPopup_o* __this, Settings_ColorSetting_o* setting, UnityEngine_UI_Image_o* image, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x5cb96b0

void UI_ColorPickPopup__Show
               (UI_ColorPickPopup_o *__this,Settings_ColorSetting_o *setting,UnityEngine_UI_Image_o *image,
               UnityEngine_Events_UnityAction_o *onChangeColor,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Utility_Color255_o *__this_00;
  bool bVar2;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o UVar6;
  UnityEngine_Color_o rgbColor;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547adb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_07547adb = '\x01';
  }
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pMVar3 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar3);
    (__this->fields)._setting = setting;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
    (__this->fields)._image = image;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
    if ((setting != (Settings_ColorSetting_o *)0x0) &&
       (pSVar1 = (__this->fields)._alpha, pSVar1 != (Settings_IntSetting_o *)0x0)) {
      (pSVar1->fields).MinValue = (setting->fields).MinAlpha;
      (__this->fields)._onChangeColor = onChangeColor;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._onChangeColor);
      __this_00 = (setting->fields)._value;
      if (__this_00 != (Utility_Color255_o *)0x0) {
        UVar6 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
        rgbColor.fields.b = UVar6.fields.b;
        rgbColor.fields._0_8_ = UVar6.fields._0_8_;
        rgbColor.fields.a = 1.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor,&(__this->fields)._hue,&(__this->fields)._saturation,&(__this->fields)._value,
                   (MethodInfo *)0x0);
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
        (__this->fields)._hexInputActive = false;
        (__this->fields)._svTextureDirty = true;
        (__this->fields)._alphaTextureDirty = true;
        pMVar3 = (MethodInfo *)0x1;
        UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,method_00);
        if ((__this->fields)._svTextureDirty != false) {
          UI_ColorPickPopup__UpdateSVTexture(__this,pMVar3);
          (__this->fields)._svTextureDirty = false;
        }
        if ((__this->fields)._alphaTextureDirty == false) {
          return;
        }
        UI_ColorPickPopup__UpdateAlphaTexture(__this,pMVar3);
        (__this->fields)._alphaTextureDirty = false;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$SetupPickerUI
// il2cpp: void UI_ColorPickPopup__SetupPickerUI (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cb8730

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
  UI_ColorPickDragArea_o *pUVar9;
  System_Action_float__float__o *pSVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_UI_LayoutElement_o *pUVar13;
  UnityEngine_UI_Image_o *pUVar14;
  UnityEngine_Events_UnityAction_o *pUVar15;
  UI_InputSettingElement_o *pUVar16;
  UnityEngine_Events_UnityAction_o *__this_02;
  System_Func_string__bool__o *__this_03;
  System_Func_string__string__o *__this_04;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_R8;
  UnityEngine_RectTransform_o *local_50;
  UnityEngine_RectTransform_o *local_48;
  UnityEngine_RectTransform_o *local_40;
  UI_ElementStyle_o *local_38;
  
  if (Il2CppMethodInitialized_07547adc == '\0') {
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
    Il2CppMethodInitialized_07547adc = '\x01';
  }
  local_40 = (UnityEngine_RectTransform_o *)0x0;
  local_48 = (UnityEngine_RectTransform_o *)0x0;
  local_50 = (UnityEngine_RectTransform_o *)0x0;
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
    pUVar5 = (UI_ColorPickPopup_o *)UI_ElementFactory__CreateVerticalGroup(pUVar4,10.0,1,(MethodInfo *)0x0);
    if (pUVar5 != (UI_ColorPickPopup_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar5,(MethodInfo *)0x0);
      pUVar6 = (UI_ColorPickPopup_o *)
               UI_ElementFactory__CreateHorizontalGroup(pUVar4,10.0,1,(MethodInfo *)0x0);
      if (pUVar6 != (UI_ColorPickPopup_o *)0x0) {
        pUVar7 = pUVar6;
        pUVar4 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
        pUVar7 = (UI_ColorPickPopup_o *)
                 UI_ColorPickPopup__CreateTextureContainer
                           (pUVar7,pUVar4,"SVContainer",260.0,260.0,&(__this->fields)._svRect,in_R8);
        if (pUVar7 != (UI_ColorPickPopup_o *)0x0) {
          local_38 = __this_01;
          pUVar4 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0)
          ;
          pUVar8 = UI_ColorPickPopup__CreateTextureSurface
                             (pUVar7,pUVar4,"SVImage",&local_40,in_R8);
          (__this->fields)._svImage = pUVar8;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._svImage);
          pUVar8 = (__this->fields)._svImage;
          if (pUVar8 != (UnityEngine_UI_RawImage_o *)0x0) {
            pUVar9 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar8,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_ColorPickDragArea);
            pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_float_float);
            System_Action_float__float____ctor
                      (pSVar10,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ColorPickPopup_OnSVDragged,
                       (MethodInfo_4A8AB00 *)0x0);
            if (pUVar9 != (UI_ColorPickDragArea_o *)0x0) {
              (pUVar9->fields)._mode = 0;
              pUVar7 = (UI_ColorPickPopup_o *)&(pUVar9->fields)._onChanged;
              (pUVar9->fields)._onChanged = pSVar10;
              Il2CppCodeGenWriteBarrier((void **)pUVar7);
              pUVar11 = UI_ColorPickPopup__CreateHandle
                                  (pUVar7,local_40,(UnityEngine_Vector2_o)0x4160000041600000,method_00);
              (__this->fields)._svHandle = pUVar11;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._svHandle);
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
                Il2CppCodeGenWriteBarrier(&(__this->fields)._hueImage);
                pUVar8 = (__this->fields)._hueImage;
                if (pUVar8 != (UnityEngine_UI_RawImage_o *)0x0) {
                  pUVar9 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar8,
                                      (MethodInfo_34B0830 *)
                                      MethodInfo_UnityEngine_Component_GetComponent_ColorPickDragArea);
                  pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_float_float);
                  System_Action_float__float____ctor
                            (pSVar10,(Il2CppObject *)__this,
                             (intptr_t)MethodInfo_UI_ColorPickPopup_OnHueDragged,(MethodInfo_4A8AB00 *)0x0);
                  if (pUVar9 != (UI_ColorPickDragArea_o *)0x0) {
                    (pUVar9->fields)._mode = 2;
                    pUVar6 = (UI_ColorPickPopup_o *)&(pUVar9->fields)._onChanged;
                    (pUVar9->fields)._onChanged = pSVar10;
                    Il2CppCodeGenWriteBarrier((void **)pUVar6);
                    pUVar11 = UI_ColorPickPopup__CreateHandle
                                        (pUVar6,local_48,(UnityEngine_Vector2_o)0x4040000041c00000,method_01);
                    (__this->fields)._hueHandle = pUVar11;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._hueHandle);
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
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._alphaImage);
                      pUVar8 = (__this->fields)._alphaImage;
                      if (pUVar8 != (UnityEngine_UI_RawImage_o *)0x0) {
                        pUVar9 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar8,
                                            (MethodInfo_34B0830 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_ColorPickDragArea);
                        pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_float_float)
                        ;
                        System_Action_float__float____ctor
                                  (pSVar10,(Il2CppObject *)__this,
                                   (intptr_t)MethodInfo_UI_ColorPickPopup_OnAlphaDragged,
                                   (MethodInfo_4A8AB00 *)0x0);
                        if (pUVar9 != (UI_ColorPickDragArea_o *)0x0) {
                          (pUVar9->fields)._mode = 1;
                          pUVar5 = (UI_ColorPickPopup_o *)&(pUVar9->fields)._onChanged;
                          (pUVar9->fields)._onChanged = pSVar10;
                          Il2CppCodeGenWriteBarrier((void **)pUVar5);
                          pUVar11 = UI_ColorPickPopup__CreateHandle
                                              (pUVar5,local_50,(UnityEngine_Vector2_o)0x41a0000040c00000,
                                               method_02);
                          (__this->fields)._alphaHandle = pUVar11;
                          Il2CppCodeGenWriteBarrier(&(__this->fields)._alphaHandle);
                          pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                          pUVar3 = UI_ElementFactory__CreateVerticalGroup(pUVar4,10.0,0,(MethodInfo *)0x0);
                          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
                            pUVar12 = UI_ElementFactory__InstantiateAndBind
                                                (pUVar4,"Prefabs/Elements/ColorPreview",(MethodInfo *)0x0);
                            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                                  (pUVar12,(MethodInfo_353B730 *)
                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                  );
                              if (pUVar13 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                (*(pUVar13->klass->vtable)._36_set_preferredWidth.methodPtr)
                                          (pUVar13,96.0,(pUVar13->klass->vtable)._36_set_preferredWidth.method
                                          );
                                pUVar13 = UnityEngine_GameObject__GetComponent_object_
                                                    (pUVar12,(MethodInfo_353B730 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                                    );
                                if (pUVar13 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                                  (*(pUVar13->klass->vtable)._38_set_preferredHeight.methodPtr)
                                            (pUVar13,56.0,
                                             (pUVar13->klass->vtable)._38_set_preferredHeight.method);
                                  pUVar4 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar4 = UnityEngine_Transform__Find
                                                       (pUVar4,"Image",(MethodInfo *)0x0);
                                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                      pUVar14 = UnityEngine_Component__GetComponent_object_
                                                          ((UnityEngine_Component_o *)pUVar4,
                                                           (MethodInfo_34B0830 *)
                                                           MethodInfo_UnityEngine_Component_GetComponent_Image
                                                          );
                                      (__this->fields)._preview = pUVar14;
                                      Il2CppCodeGenWriteBarrier(&(__this->fields)._preview);
                                      pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0)
                                      ;
                                      pSVar1 = (__this->fields)._red;
                                      pUVar15 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)
                                                           TypeInfo_UnityEngine_Events_UnityAction);
                                      UnityEngine_Events_UnityAction___ctor
                                                (pUVar15,(Il2CppObject *)__this,
                                                 (intptr_t)MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged,
                                                 (MethodInfo *)0x0);
                                      pUVar12 = UI_ElementFactory__CreateInputSetting
                                                          (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar1,
                                                           "R","",62.0,
                                                           34.0,false,pUVar15,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (System_Func_string__bool__o *)0x0,
                                                           (System_Func_string__string__o *)0x0,
                                                           (MethodInfo *)0x0);
                                      if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar16 = UnityEngine_GameObject__GetComponent_object_
                                                            (pUVar12,(MethodInfo_353B730 *)
                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                       );
                                        (__this->fields)._redInput = pUVar16;
                                        Il2CppCodeGenWriteBarrier(&(__this->fields)._redInput);
                                        pUVar4 = UnityEngine_GameObject__get_transform
                                                           (pUVar3,(MethodInfo *)0x0);
                                        pSVar1 = (__this->fields)._green;
                                        pUVar15 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                             TypeInfo_UnityEngine_Events_UnityAction);
                                        UnityEngine_Events_UnityAction___ctor
                                                  (pUVar15,(Il2CppObject *)__this,
                                                   (intptr_t)MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged,
                                                   (MethodInfo *)0x0);
                                        pUVar12 = UI_ElementFactory__CreateInputSetting
                                                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar1
                                                             ,"G","",62.0
                                                             ,34.0,false,pUVar15,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             (MethodInfo *)0x0);
                                        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                          pUVar16 = UnityEngine_GameObject__GetComponent_object_
                                                              (pUVar12,(MethodInfo_353B730 *)
                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                       );
                                          (__this->fields)._greenInput = pUVar16;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields)._greenInput);
                                          pUVar4 = UnityEngine_GameObject__get_transform
                                                             (pUVar3,(MethodInfo *)0x0);
                                          pSVar1 = (__this->fields)._blue;
                                          pUVar15 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                               TypeInfo_UnityEngine_Events_UnityAction);
                                          UnityEngine_Events_UnityAction___ctor
                                                    (pUVar15,(Il2CppObject *)__this,
                                                     (intptr_t)MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged
                                                     ,(MethodInfo *)0x0);
                                          pUVar12 = UI_ElementFactory__CreateInputSetting
                                                              (pUVar4,__this_00,
                                                               (Settings_BaseSetting_o *)pSVar1,
                                                               "B","",
                                                               62.0,34.0,false,pUVar15,
                                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                                               (System_Func_string__bool__o *)0x0,
                                                               (System_Func_string__string__o *)0x0,
                                                               (MethodInfo *)0x0);
                                          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar16 = UnityEngine_GameObject__GetComponent_object_
                                                                (pUVar12,(MethodInfo_353B730 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                       );
                                            (__this->fields)._blueInput = pUVar16;
                                            Il2CppCodeGenWriteBarrier(&(__this->fields)._blueInput);
                                            pUVar4 = UnityEngine_GameObject__get_transform
                                                               (pUVar3,(MethodInfo *)0x0);
                                            pSVar1 = (__this->fields)._alpha;
                                            pUVar15 = il2cpp_codegen_object_new
                                                                ((Il2CppClass *)
                                                                 TypeInfo_UnityEngine_Events_UnityAction);
                                            UnityEngine_Events_UnityAction___ctor
                                                      (pUVar15,(Il2CppObject *)__this,
                                                       (intptr_t)
                                                       MethodInfo_UI_ColorPickPopup_OnRGBAInputChanged,
                                                       (MethodInfo *)0x0);
                                            pUVar12 = UI_ElementFactory__CreateInputSetting
                                                                (pUVar4,__this_00,
                                                                 (Settings_BaseSetting_o *)pSVar1,
                                                                 "A","",
                                                                 62.0,34.0,false,pUVar15,
                                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                                 (System_Func_string__bool__o *)0x0,
                                                                 (System_Func_string__string__o *)0x0,
                                                                 (MethodInfo *)0x0);
                                            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar16 = UnityEngine_GameObject__GetComponent_object_
                                                                  (pUVar12,(MethodInfo_353B730 *)
                                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                       );
                                              (__this->fields)._alphaInput = pUVar16;
                                              Il2CppCodeGenWriteBarrier(&(__this->fields)._alphaInput);
                                              pUVar4 = UnityEngine_GameObject__get_transform
                                                                 (pUVar3,(MethodInfo *)0x0);
                                              setting = (__this->fields)._hex;
                                              pUVar15 = il2cpp_codegen_object_new
                                                                  ((Il2CppClass *)
                                                                   TypeInfo_UnityEngine_Events_UnityAction);
                                              UnityEngine_Events_UnityAction___ctor
                                                        (pUVar15,(Il2CppObject *)__this,
                                                         (intptr_t)
                                                         MethodInfo_UI_ColorPickPopup_OnHexInputChanged,
                                                         (MethodInfo *)0x0);
                                              __this_02 = il2cpp_codegen_object_new
                                                                    ((Il2CppClass *)
                                                                     TypeInfo_UnityEngine_Events_UnityAction);
                                              UnityEngine_Events_UnityAction___ctor
                                                        (__this_02,(Il2CppObject *)__this,
                                                         (intptr_t)
                                                         MethodInfo_UI_ColorPickPopup_OnHexInputEndEdit,
                                                         (MethodInfo *)0x0);
                                              __this_03 = il2cpp_codegen_object_new
                                                                    ((Il2CppClass *)
                                                                     TypeInfo_System_Func_string_bool);
                                              System_Func_object__bool____ctor
                                                        ((System_Func_object__bool__o *)__this_03,
                                                         (Il2CppObject *)__this,
                                                         (intptr_t)
                                                         MethodInfo_UI_ColorPickPopup_IsHexInputValid,
                                                         (MethodInfo_4F19300 *)0x0);
                                              __this_04 = il2cpp_codegen_object_new
                                                                    ((Il2CppClass *)
                                                                     TypeInfo_System_Func_string_string);
                                              System_Func_object__object____ctor
                                                        ((System_Func_object__object__o *)__this_04,
                                                         (Il2CppObject *)__this,
                                                         (intptr_t)
                                                         MethodInfo_UI_ColorPickPopup_CleanupHexInput,
                                                         (MethodInfo_4F19B50 *)0x0);
                                              pUVar3 = UI_ElementFactory__CreateInputSetting
                                                                 (pUVar4,local_38,
                                                                  (Settings_BaseSetting_o *)setting,
                                                                  "Hex","",
                                                                  116.0,34.0,false,pUVar15,__this_02,__this_03
                                                                  ,__this_04,(MethodInfo *)0x0);
                                              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                                                pUVar16 = UnityEngine_GameObject__GetComponent_object_
                                                                    (pUVar3,(MethodInfo_353B730 *)
                                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                                       );
                                                (__this->fields)._hexInput = pUVar16;
                                                Il2CppCodeGenWriteBarrier(&(__this->fields)._hexInput);
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
// 0x5cba320

void UI_ColorPickPopup__OnButtonClick(UI_ColorPickPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  bool bVar4;
  Utility_Color255_o *pUVar5;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar6;
  
  if (Il2CppMethodInitialized_07547add == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547add = '\x01';
  }
  bVar4 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar4) {
label_05cba421:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  method_00 = (MethodInfo *)"Save";
  bVar4 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  pSVar1 = (__this->fields)._setting;
  pUVar5 = UI_ColorPickPopup__GetCurrentColor255(__this,method_00);
  if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pUVar5,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
    pSVar1 = (__this->fields)._setting;
    if ((pSVar1 != (Settings_ColorSetting_o *)0x0) &&
       (pUVar5 = (pSVar1->fields)._value, pUVar5 != (Utility_Color255_o *)0x0)) {
      pUVar2 = (__this->fields)._image;
      UVar6 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
        (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                  (pUVar2,UVar6,(pUVar2->klass->vtable)._23_set_color.method);
        pUVar3 = (__this->fields)._onChangeColor;
        if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code,(pUVar3->fields).method);
        }
        goto label_05cba421;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$OnSVDragged
// il2cpp: void UI_ColorPickPopup__OnSVDragged (UI_ColorPickPopup_o* __this, float normalizedX, float normalizedY, const MethodInfo* method);
// 0x5cba9d0

void UI_ColorPickPopup__OnSVDragged
               (UI_ColorPickPopup_o *__this,float normalizedX,float normalizedY,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  (__this->fields)._saturation = normalizedX;
  (__this->fields)._value = normalizedY;
  (__this->fields)._alphaTextureDirty = true;
  UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,in_RDX);
  return;
}


// UI.ColorPickPopup$$OnHueDragged
// il2cpp: void UI_ColorPickPopup__OnHueDragged (UI_ColorPickPopup_o* __this, float normalizedX, float normalizedY, const MethodInfo* method);
// 0x5cbaa00

void UI_ColorPickPopup__OnHueDragged
               (UI_ColorPickPopup_o *__this,float normalizedX,float normalizedY,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  (__this->fields)._hue = 1.0 - normalizedY;
  (__this->fields)._svTextureDirty = true;
  (__this->fields)._alphaTextureDirty = true;
  UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,in_RDX);
  return;
}


// UI.ColorPickPopup$$OnAlphaDragged
// il2cpp: void UI_ColorPickPopup__OnAlphaDragged (UI_ColorPickPopup_o* __this, float normalizedX, float normalizedY, const MethodInfo* method);
// 0x5cbaa30

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
      ThrowNullReferenceException();
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
  (__this->fields)._alphaTextureDirty = true;
  UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,in_RDX);
  return;
}


// UI.ColorPickPopup$$OnRGBAInputChanged
// il2cpp: void UI_ColorPickPopup__OnRGBAInputChanged (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbab00

void UI_ColorPickPopup__OnRGBAInputChanged(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  int32_t *piVar4;
  Settings_IntSetting_o *pSVar5;
  MethodInfo *method_00;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  UnityEngine_Color_o rgbColor;
  
  if (Il2CppMethodInitialized_07547ade == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547ade = '\x01';
  }
  if ((__this->fields)._suppressInputCallbacks != false) {
    return;
  }
  pSVar5 = (__this->fields)._red;
  if (((pSVar5 == (Settings_IntSetting_o *)0x0) ||
      (pSVar1 = (__this->fields)._green, pSVar1 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar2 = (__this->fields)._blue, pSVar2 == (Settings_IntSetting_o *)0x0)) {
label_05cbac2b:
    ThrowNullReferenceException();
  }
  auVar7._0_4_ = (float)(pSVar5->fields)._value;
  auVar7._4_4_ = (float)(pSVar1->fields)._value;
  auVar7._8_8_ = 0;
  auVar7 = divps(auVar7,_DAT_01009880);
  rgbColor.fields.a = 1.0;
  rgbColor.fields.b = (float)(pSVar2->fields)._value / 255.0;
  rgbColor.fields._0_8_ = auVar7._0_8_;
  UnityEngine_Color__RGBToHSV
            (rgbColor,&(__this->fields)._hue,&(__this->fields)._saturation,&(__this->fields)._value,
             (MethodInfo *)0x0);
  pSVar3 = (__this->fields)._setting;
  if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
    pSVar5 = (__this->fields)._alpha;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_05cbac2b;
    piVar4 = &(pSVar5->fields).MinValue;
  }
  else {
    pSVar5 = (__this->fields)._alpha;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_05cbac2b;
    piVar4 = &(pSVar3->fields).MinAlpha;
  }
  auVar8._0_4_ = (float)*piVar4;
  auVar8._4_4_ = (float)(pSVar5->fields)._value;
  auVar8._8_8_ = 0;
  auVar9 = divps(auVar8,_DAT_01009880);
  if (auVar9._0_4_ <= auVar9._4_4_) {
    auVar9._0_4_ = auVar9._4_4_;
  }
  fVar6 = auVar9._0_4_;
  fVar10 = 1.0;
  if (fVar6 <= 1.0) {
    fVar10 = fVar6;
  }
  (__this->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar10);
  (__this->fields)._svTextureDirty = true;
  (__this->fields)._alphaTextureDirty = true;
  UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,method_00);
  return;
}


// UI.ColorPickPopup$$OnHexInputChanged
// il2cpp: void UI_ColorPickPopup__OnHexInputChanged (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbac30

void UI_ColorPickPopup__OnHexInputChanged(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._suppressInputCallbacks == false) {
    (__this->fields)._hexInputActive = true;
    return;
  }
  return;
}


// UI.ColorPickPopup$$OnHexInputEndEdit
// il2cpp: void UI_ColorPickPopup__OnHexInputEndEdit (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbac50

void UI_ColorPickPopup__OnHexInputEndEdit(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool bVar5;
  System_String_o *htmlString;
  int32_t *piVar6;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *pMVar7;
  MethodInfo *pMVar8;
  MethodInfo **__this_00;
  float fVar9;
  float fVar10;
  UnityEngine_Color_o rgbColor;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  char *pcStack_20;
  
  __this_00 = (MethodInfo **)__this;
  if (g_data_07547adf == '\0') {
    __this_00 = &MethodInfo_Settings_TypedSetting_string_get_Value;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    g_data_07547adf = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((__this->fields)._suppressInputCallbacks != false) {
    return;
  }
  (__this->fields)._hexInputActive = false;
  pSVar2 = (__this->fields)._hex;
  if (pSVar2 != (Settings_StringSetting_o *)0x0) {
    pMVar8 = (MethodInfo *)(pSVar2->fields)._value;
    auStack_38 = (undefined1  [8])0x0;
    uStack_30 = (InvokerMethod)0x0;
    htmlString = UI_ColorPickPopup__CleanupHexInput
                           ((UI_ColorPickPopup_o *)__this_00,(System_String_o *)pMVar8,in_RDX);
    pMVar7 = (MethodInfo *)auStack_38;
    if (htmlString != (System_String_o *)0x0) {
      iVar1 = (htmlString->fields)._stringLength;
      if (((iVar1 != 9) && (iVar1 != 7)) ||
         (bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                            (htmlString,(UnityEngine_Color_o *)auStack_38,(MethodInfo *)0x0), pMVar8 = pMVar7,
         !bVar5)) {
        UI_ColorPickPopup__SyncInputValuesFromCurrentColor(__this,pMVar8);
        return;
      }
      if ((htmlString->fields)._stringLength == 7) {
        uStack_30 = (InvokerMethod)CONCAT44((__this->fields)._alphaValue,(float)uStack_30);
      }
      uStack_28 = uStack_30;
      pcStack_20 = (char *)0x0;
      rgbColor.fields.a = 1.0;
      rgbColor.fields.b = (float)(int)uStack_30;
      rgbColor.fields.r = (float)auStack_38._0_4_;
      rgbColor.fields.g = (float)auStack_38._4_4_;
      UnityEngine_Color__RGBToHSV
                (rgbColor,&(__this->fields)._hue,&(__this->fields)._saturation,&(__this->fields)._value,
                 (MethodInfo *)0x0);
      pSVar3 = (__this->fields)._setting;
      if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
        pSVar4 = (__this->fields)._alpha;
        if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05cbadef;
        piVar6 = &(pSVar4->fields).MinValue;
      }
      else {
        piVar6 = &(pSVar3->fields).MinAlpha;
      }
      fVar9 = (float)*piVar6 / 255.0;
      if ((float)*piVar6 / 255.0 <= uStack_28._4_4_) {
        fVar9 = uStack_28._4_4_;
      }
      fVar10 = 1.0;
      if (fVar9 <= 1.0) {
        fVar10 = fVar9;
      }
      (__this->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar9) & (uint)fVar10);
      (__this->fields)._svTextureDirty = true;
      (__this->fields)._alphaTextureDirty = true;
      pMVar8 = (MethodInfo *)0x1;
      UI_ColorPickPopup__ApplyCurrentColorToUI(__this,true,method_00);
      if ((__this->fields)._svTextureDirty != false) {
        UI_ColorPickPopup__UpdateSVTexture(__this,pMVar8);
        (__this->fields)._svTextureDirty = false;
      }
      if ((__this->fields)._alphaTextureDirty == false) {
        return;
      }
      UI_ColorPickPopup__UpdateAlphaTexture(__this,pMVar8);
      (__this->fields)._alphaTextureDirty = false;
      return;
    }
  }
label_05cbadef:
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$IsHexInputValid
// il2cpp: bool UI_ColorPickPopup__IsHexInputValid (UI_ColorPickPopup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cbb6b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cbb74c: nop dword ptr [rax]
// asm:   0x5cbb785: jmp 0x5cbb78d

bool UI_ColorPickPopup__IsHexInputValid(UI_ColorPickPopup_o *__this,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint16_t character;
  System_String_o *__this_00;
  int iVar2;
  
  if (Il2CppMethodInitialized_07547ae0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Uri);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_07547ae0 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    bVar1 = false;
  }
  else {
    __this_00 = System_String__Trim(value,(MethodInfo *)0x0);
    if ((__this_00 == (System_String_o *)0x0) ||
       ((bVar1 = System_String__StartsWith(__this_00,"#",(MethodInfo *)0x0), bVar1 &&
        (__this_00 = System_String__Substring(__this_00,1,(MethodInfo *)0x0),
        __this_00 == (System_String_o *)0x0)))) {
      ThrowNullReferenceException();
    }
    iVar2 = (__this_00->fields)._stringLength;
    bVar1 = false;
    if ((iVar2 != 0) && (iVar2 < 9)) {
      if (iVar2 < 1) {
        bVar1 = true;
      }
      else {
        iVar2 = 0;
        do {
          character = System_String__get_Chars(__this_00,iVar2,(MethodInfo *)0x0);
          if ((TypeInfo_System_Uri->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Uri);
          }
          bVar1 = System_Uri__IsHexDigit(character,(MethodInfo *)0x0);
        } while ((bVar1) && (iVar2 = iVar2 + 1, iVar2 < (__this_00->fields)._stringLength));
      }
    }
  }
  return bVar1;
}


// UI.ColorPickPopup$$CleanupHexInput
// il2cpp: System_String_o* UI_ColorPickPopup__CleanupHexInput (UI_ColorPickPopup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5cbb7a0

System_String_o *
UI_ColorPickPopup__CleanupHexInput(UI_ColorPickPopup_o *__this,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547ae1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    Il2CppMethodInitialized_07547ae1 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    pSVar2 = System_String__Trim(value,(MethodInfo *)0x0);
    if (pSVar2 == (System_String_o *)0x0) {
label_05cbb89b:
      ThrowNullReferenceException();
    }
    pSVar2 = System_String__ToUpperInvariant(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality
                      (pSVar2,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = "#FFFFFF";
    }
    else {
      if (pSVar2 == (System_String_o *)0x0) goto label_05cbb89b;
      bVar1 = System_String__StartsWith(pSVar2,"#",(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = System_String__Concat_52f0320("#",pSVar2,(MethodInfo *)0x0);
        if (pSVar2 == (System_String_o *)0x0) goto label_05cbb89b;
      }
      if (9 < (pSVar2->fields)._stringLength) {
        pSVar2 = System_String__Substring_53042f0(pSVar2,0,9,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  return pSVar2;
}


// UI.ColorPickPopup$$TryParseCompleteHexColor
// il2cpp: bool UI_ColorPickPopup__TryParseCompleteHexColor (UI_ColorPickPopup_o* __this, System_String_o* input, UnityEngine_Color_o* color, const MethodInfo* method);
// 0x5cbae00

bool UI_ColorPickPopup__TryParseCompleteHexColor
               (UI_ColorPickPopup_o *__this,System_String_o *input,UnityEngine_Color_o *color,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_o *htmlString;
  bool bVar3;
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
  if (htmlString == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (htmlString->fields)._stringLength;
  if ((iVar1 == 9) || (iVar1 == 7)) {
    bVar3 = false;
    bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                      (htmlString,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
    if (bVar2) {
      if ((htmlString->fields)._stringLength == 7) {
        local_38.a = (__this->fields)._alphaValue;
      }
      (color->fields).r = local_38.r;
      (color->fields).g = local_38.g;
      (color->fields).b = local_38.b;
      (color->fields).a = local_38.a;
      bVar3 = true;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// UI.ColorPickPopup$$ApplyCurrentColorToUI
// il2cpp: void UI_ColorPickPopup__ApplyCurrentColorToUI (UI_ColorPickPopup_o* __this, bool syncInputs, const MethodInfo* method);
// 0x5cb9860

void UI_ColorPickPopup__ApplyCurrentColorToUI(UI_ColorPickPopup_o *__this,bool syncInputs,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_UI_Image_o *pUVar3;
  bool bVar4;
  int32_t *piVar5;
  undefined7 in_register_00000031;
  MethodInfo *pMVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Color_o UVar9;
  UnityEngine_Color_o UVar10;
  float local_38;
  
  pMVar6 = (MethodInfo *)CONCAT71(in_register_00000031,syncInputs);
  if (Il2CppMethodInitialized_07547ae2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ae2 = '\x01';
  }
  UI_ColorPickPopup__UpdatePickerHandles(__this,pMVar6);
  UVar9 = UnityEngine_Color__HSVToRGB_68fcb80
                    ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,true,
                     (MethodInfo *)0x0);
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
    pSVar2 = (__this->fields)._alpha;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_05cb9996;
    piVar5 = &(pSVar2->fields).MinValue;
  }
  else {
    piVar5 = &(pSVar1->fields).MinAlpha;
  }
  fVar8 = (__this->fields)._alphaValue;
  fVar7 = (float)*piVar5 / 255.0;
  if ((float)*piVar5 / 255.0 <= fVar8) {
    fVar7 = fVar8;
  }
  pUVar3 = (__this->fields)._preview;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar3 = (__this->fields)._preview;
    if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) {
label_05cb9996:
      ThrowNullReferenceException();
    }
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
    local_38 = UVar9.fields.b;
    pMVar6 = (pUVar3->klass->vtable)._23_set_color.method;
    UVar10.fields.a = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar8);
    UVar10.fields.b = local_38;
    UVar10.fields.r = UVar9.fields.r;
    UVar10.fields.g = UVar9.fields.g;
    (*(pUVar3->klass->vtable)._23_set_color.methodPtr)(pUVar3,UVar10,pMVar6);
  }
  if (syncInputs) {
    UI_ColorPickPopup__SyncInputValuesFromCurrentColor(__this,pMVar6);
    return;
  }
  return;
}


// UI.ColorPickPopup$$SyncInputValuesFromCurrentColor
// il2cpp: void UI_ColorPickPopup__SyncInputValuesFromCurrentColor (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbae90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cbb61a: jmp 0x5cbb424
// asm:   0x5cbb647: jmp 0x5cbb477
// asm:   0x5cbb674: jmp 0x5cbb4ca

void UI_ColorPickPopup__SyncInputValuesFromCurrentColor(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  UI_InputSettingElement_o *pUVar5;
  UnityEngine_UI_InputField_o *pUVar6;
  Settings_StringSetting_o *__this_00;
  double dVar7;
  double dVar8;
  bool bVar9;
  int32_t *piVar10;
  System_String_o *pSVar11;
  MethodInfo *pMVar12;
  MethodInfo *pMVar13;
  float fVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar16;
  undefined4 uVar17;
  UnityEngine_Color_o UVar18;
  UnityEngine_Color_o local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  if (Il2CppMethodInitialized_07547ae3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547ae3 = '\x01';
  }
  (__this->fields)._suppressInputCallbacks = true;
  uVar16 = 0;
  uVar17 = 0;
  pMVar12 = (MethodInfo *)0x0;
  UVar18 = UnityEngine_Color__HSVToRGB_68fcb80
                     ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,true,
                      (MethodInfo *)0x0);
  local_48._8_4_ = extraout_XMM0_Dc;
  local_48._0_8_ = UVar18.fields._0_8_;
  local_48._12_4_ = extraout_XMM0_Dd;
  local_38._8_4_ = uVar16;
  local_38._0_8_ = UVar18.fields._8_8_;
  local_38._12_4_ = uVar17;
  pSVar3 = (__this->fields)._setting;
  if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
    pSVar4 = (__this->fields)._alpha;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05cbb6ab;
    piVar10 = &(pSVar4->fields).MinValue;
  }
  else {
    piVar10 = &(pSVar3->fields).MinAlpha;
  }
  fVar15 = (__this->fields)._alphaValue;
  fVar14 = (float)*piVar10 / 255.0;
  if ((float)*piVar10 / 255.0 <= fVar15) {
    fVar14 = fVar15;
  }
  local_58 = ZEXT416((uint)fVar14);
  pSVar4 = (__this->fields)._red;
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  fVar15 = (float)local_48._0_4_ * 255.0;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar7 = (double)fVar15;
  pMVar13 = (MethodInfo *)&local_68;
  dVar8 = modf(dVar7,(double *)pMVar13,pMVar12);
  if (0.0 <= fVar15) {
    if ((dVar8 != 0.5) || (NAN(dVar8))) {
      dVar7 = floor(dVar7 + 0.5,pMVar13);
    }
    else {
      dVar7 = (double)CONCAT44(local_68.fields.g,local_68.fields.r);
      if (((long)dVar7 & 1U) != 0) {
        dVar7 = dVar7 + 1.0;
      }
    }
  }
  else if ((dVar8 != -0.5) || (NAN(dVar8))) {
    dVar7 = ceil(dVar7 + -0.5,pMVar13);
  }
  else {
    dVar7 = (double)CONCAT44(local_68.fields.g,local_68.fields.r);
    if (((long)dVar7 & 1U) != 0) {
      dVar7 = dVar7 + -1.0;
    }
  }
  if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05cbb6ab;
  pMVar12 = (MethodInfo *)(ulong)(uint)(int)dVar7;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar4,(int)dVar7,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar4 = (__this->fields)._green;
  uVar16 = local_48._4_4_;
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar7 = (double)((float)uVar16 * 255.0);
  pMVar13 = (MethodInfo *)&local_68;
  dVar8 = modf(dVar7,(double *)pMVar13,pMVar12);
  if (0.0 <= (float)uVar16 * 255.0) {
    if ((dVar8 != 0.5) || (NAN(dVar8))) {
      dVar7 = floor(dVar7 + 0.5,pMVar13);
    }
    else {
      dVar7 = (double)CONCAT44(local_68.fields.g,local_68.fields.r);
      if (((long)dVar7 & 1U) != 0) {
        dVar7 = dVar7 + 1.0;
      }
    }
  }
  else if ((dVar8 != -0.5) || (NAN(dVar8))) {
    dVar7 = ceil(dVar7 + -0.5,pMVar13);
  }
  else {
    dVar7 = (double)CONCAT44(local_68.fields.g,local_68.fields.r);
    if (((long)dVar7 & 1U) != 0) {
      dVar7 = dVar7 + -1.0;
    }
  }
  if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05cbb6ab;
  pMVar12 = (MethodInfo *)(ulong)(uint)(int)dVar7;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar4,(int)dVar7,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar4 = (__this->fields)._blue;
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  fVar15 = (float)local_38._0_4_ * 255.0;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar7 = (double)fVar15;
  pMVar13 = (MethodInfo *)&local_68;
  dVar8 = modf(dVar7,(double *)pMVar13,pMVar12);
  if (0.0 <= fVar15) {
    if ((dVar8 != 0.5) || (NAN(dVar8))) {
      dVar7 = floor(dVar7 + 0.5,pMVar13);
    }
    else {
      dVar7 = (double)CONCAT44(local_68.fields.g,local_68.fields.r);
      if (((long)dVar7 & 1U) != 0) {
        dVar7 = dVar7 + 1.0;
      }
    }
  }
  else if ((dVar8 != -0.5) || (NAN(dVar8))) {
    dVar7 = ceil(dVar7 + -0.5,pMVar13);
  }
  else {
    dVar7 = (double)CONCAT44(local_68.fields.g,local_68.fields.r);
    if (((long)dVar7 & 1U) != 0) {
      dVar7 = dVar7 + -1.0;
    }
  }
  if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05cbb6ab;
  pMVar12 = (MethodInfo *)(ulong)(uint)(int)dVar7;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar4,(int)dVar7,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar3 = (__this->fields)._setting;
  pSVar4 = (__this->fields)._alpha;
  if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05cbb6ab;
    piVar10 = &(pSVar4->fields).MinValue;
  }
  else {
    piVar10 = &(pSVar3->fields).MinAlpha;
  }
  fVar15 = 1.0;
  if ((float)local_58._0_4_ <= 1.0) {
    fVar15 = (float)local_58._0_4_;
  }
  fVar15 = (float)(-(uint)(0.0 <= (float)local_58._0_4_) & (uint)fVar15);
  local_58 = ZEXT416((uint)fVar15);
  if (fVar15 <= (float)*piVar10 / 255.0) {
    fVar15 = (float)*piVar10 / 255.0;
  }
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar7 = (double)(fVar15 * 255.0);
  pMVar13 = (MethodInfo *)&local_68;
  dVar8 = modf(dVar7,(double *)pMVar13,pMVar12);
  if (0.0 <= fVar15 * 255.0) {
    if ((dVar8 != 0.5) || (NAN(dVar8))) {
      dVar7 = floor(dVar7 + 0.5,pMVar13);
    }
    else {
      dVar7 = (double)CONCAT44(local_68.fields.g,local_68.fields.r);
      if (((long)dVar7 & 1U) != 0) {
        dVar7 = dVar7 + 1.0;
      }
    }
  }
  else if ((dVar8 != -0.5) || (NAN(dVar8))) {
    dVar7 = ceil(dVar7 + -0.5,pMVar13);
  }
  else {
    dVar7 = (double)CONCAT44(local_68.fields.g,local_68.fields.r);
    if (((long)dVar7 & 1U) != 0) {
      dVar7 = dVar7 + -1.0;
    }
  }
  if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05cbb6ab;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar4,(int)dVar7,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pUVar5 = (__this->fields)._redInput;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    pUVar5 = (__this->fields)._redInput;
    if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
       (pUVar6 = (pUVar5->fields)._inputField, pUVar6 == (UnityEngine_UI_InputField_o *)0x0))
    goto label_05cbb6ab;
    if ((pUVar6->fields).m_AllowInput != false) goto label_05cbb410;
    (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)(pUVar5,(pUVar5->klass->vtable)._6_SyncElement.method);
    pUVar5 = (__this->fields)._greenInput;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05cbb410:
    pUVar5 = (__this->fields)._greenInput;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    pUVar5 = (__this->fields)._greenInput;
    if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
       (pUVar6 = (pUVar5->fields)._inputField, pUVar6 == (UnityEngine_UI_InputField_o *)0x0))
    goto label_05cbb6ab;
    if ((pUVar6->fields).m_AllowInput != false) goto label_05cbb463;
    (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)(pUVar5,(pUVar5->klass->vtable)._6_SyncElement.method);
    pUVar5 = (__this->fields)._blueInput;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05cbb463:
    pUVar5 = (__this->fields)._blueInput;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    pUVar5 = (__this->fields)._blueInput;
    if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
       (pUVar6 = (pUVar5->fields)._inputField, pUVar6 == (UnityEngine_UI_InputField_o *)0x0))
    goto label_05cbb6ab;
    if ((pUVar6->fields).m_AllowInput != false) goto label_05cbb4b6;
    (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)(pUVar5,(pUVar5->klass->vtable)._6_SyncElement.method);
    pUVar5 = (__this->fields)._alphaInput;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05cbb4b6:
    pUVar5 = (__this->fields)._alphaInput;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    pUVar5 = (__this->fields)._alphaInput;
    if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
       (pUVar6 = (pUVar5->fields)._inputField, pUVar6 == (UnityEngine_UI_InputField_o *)0x0))
    goto label_05cbb6ab;
    if ((pUVar6->fields).m_AllowInput != false) goto label_05cbb509;
    (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)(pUVar5,(pUVar5->klass->vtable)._6_SyncElement.method);
    cVar1 = (__this->fields)._hexInputActive;
  }
  else {
label_05cbb509:
    cVar1 = (__this->fields)._hexInputActive;
  }
  if (cVar1 == '\0') {
    local_58._4_4_ = local_58._0_4_;
    local_58._0_4_ = local_38._0_4_;
    local_58._8_4_ = local_38._8_4_;
    local_58._12_4_ = local_38._12_4_;
    __this_00 = (__this->fields)._hex;
    if (Il2CppMethodInitialized_07547ae8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"#");
      Il2CppMethodInitialized_07547ae8 = '\x01';
    }
    local_68.fields.b = local_58._0_4_;
    local_68.fields.a = local_58._4_4_;
    local_68.fields.r = (float)local_48._0_4_;
    local_68.fields.g = (float)local_48._4_4_;
    pSVar11 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&local_68,(MethodInfo *)0x0);
    pSVar11 = System_String__Concat_52f0320("#",pSVar11,(MethodInfo *)0x0);
    if (__this_00 == (Settings_StringSetting_o *)0x0) {
label_05cbb6ab:
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)pSVar11,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    pUVar5 = (__this->fields)._hexInput;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      pUVar5 = (__this->fields)._hexInput;
      if (pUVar5 == (UI_InputSettingElement_o *)0x0) goto label_05cbb6ab;
      (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)
                (pUVar5,(pUVar5->klass->vtable)._6_SyncElement.method);
    }
  }
  (__this->fields)._suppressInputCallbacks = false;
  return;
}


// UI.ColorPickPopup$$Update
// il2cpp: void UI_ColorPickPopup__Update (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbbcf0

void UI_ColorPickPopup__Update(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._svTextureDirty != false) {
    UI_ColorPickPopup__UpdateSVTexture(__this,method);
    (__this->fields)._svTextureDirty = false;
  }
  if ((__this->fields)._alphaTextureDirty != false) {
    UI_ColorPickPopup__UpdateAlphaTexture(__this,method);
    (__this->fields)._alphaTextureDirty = false;
  }
  return;
}


// UI.ColorPickPopup$$MarkTextureDirty
// il2cpp: void UI_ColorPickPopup__MarkTextureDirty (UI_ColorPickPopup_o* __this, bool svDirty, bool alphaDirty, const MethodInfo* method);
// 0x5cb9850

void UI_ColorPickPopup__MarkTextureDirty
               (UI_ColorPickPopup_o *__this,bool svDirty,bool alphaDirty,MethodInfo *method)

{
  bool *pbVar1;
  
  pbVar1 = &(__this->fields)._svTextureDirty;
  *pbVar1 = (bool)(*pbVar1 | svDirty);
  pbVar1 = &(__this->fields)._alphaTextureDirty;
  *pbVar1 = (bool)(*pbVar1 | alphaDirty);
  return;
}


// UI.ColorPickPopup$$RefreshTextures
// il2cpp: void UI_ColorPickPopup__RefreshTextures (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cb99a0

void UI_ColorPickPopup__RefreshTextures(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._svTextureDirty != false) {
    UI_ColorPickPopup__UpdateSVTexture(__this,method);
    (__this->fields)._svTextureDirty = false;
  }
  if ((__this->fields)._alphaTextureDirty != false) {
    UI_ColorPickPopup__UpdateAlphaTexture(__this,method);
    (__this->fields)._alphaTextureDirty = false;
  }
  return;
}


// UI.ColorPickPopup$$EnsureTextures
// il2cpp: void UI_ColorPickPopup__EnsureTextures (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cb9270
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb937f: nop 

void UI_ColorPickPopup__EnsureTextures(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o **targetAddress;
  UnityEngine_Texture2D_o **targetAddress_00;
  UnityEngine_Texture2D_o **targetAddress_01;
  UnityEngine_UI_RawImage_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Texture2D_o *pUVar4;
  UnityEngine_Color32_array *pUVar5;
  ulong uVar6;
  UnityEngine_Color_o UVar7;
  
  if (Il2CppMethodInitialized_07547ae4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color32_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_07547ae4 = '\x01';
  }
  pUVar4 = (__this->fields)._hueTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._hueTexture;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
    UnityEngine_Texture2D___ctor_68efe30(pUVar4,1,0x100,4,false,(MethodInfo *)0x0);
    *targetAddress = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if ((UnityEngine_Texture_o *)*targetAddress == (UnityEngine_Texture_o *)0x0) goto label_05cb967d;
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*targetAddress,1,(MethodInfo *)0x0);
    if ((UnityEngine_Texture_o *)*targetAddress == (UnityEngine_Texture_o *)0x0) goto label_05cb967d;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*targetAddress,1,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Color32_array *)SZArrayNew(TypeInfo_UnityEngine_Color32_array,0x100);
    if (pUVar5 == (UnityEngine_Color32_array *)0x0) {
      UVar7 = UnityEngine_Color__HSVToRGB_68fcb80(1.0,1.0,1.0,true,(MethodInfo *)0x0);
      il2cpp_runtime_helper_05334d00(UVar7.fields._0_8_,UVar7.fields._8_8_,0);
      ThrowNullReferenceException();
    }
    uVar6 = 0;
    do {
      UVar7 = UnityEngine_Color__HSVToRGB_68fcb80
                        ((float)(int)uVar6 / -255.0 + 1.0,1.0,1.0,true,(MethodInfo *)0x0);
      iVar3 = il2cpp_runtime_helper_05334d00(UVar7.fields._0_8_,UVar7.fields._8_8_,0);
      if ((uint)pUVar5->max_length <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pUVar5->m_Items[uVar6].fields._overlap_0._at_rgba.rgba = iVar3;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x100);
    if (*targetAddress == (UnityEngine_Texture2D_o *)0x0) goto label_05cb967d;
    UnityEngine_Texture2D__SetPixels32_68f0850(*targetAddress,pUVar5,(MethodInfo *)0x0);
    if (*targetAddress == (UnityEngine_Texture2D_o *)0x0) goto label_05cb967d;
    UnityEngine_Texture2D__Apply(*targetAddress,false,true,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._svTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress_00 = &(__this->fields)._svTexture;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
    UnityEngine_Texture2D___ctor_68efe30(pUVar4,0xc0,0xc0,4,false,(MethodInfo *)0x0);
    *targetAddress_00 = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    if ((UnityEngine_Texture_o *)*targetAddress_00 == (UnityEngine_Texture_o *)0x0) goto label_05cb967d;
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*targetAddress_00,1,(MethodInfo *)0x0);
    if ((UnityEngine_Texture_o *)*targetAddress_00 == (UnityEngine_Texture_o *)0x0) goto label_05cb967d;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*targetAddress_00,1,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Color32_array *)SZArrayNew(TypeInfo_UnityEngine_Color32_array,0x9000);
    (__this->fields)._svPixels = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._svPixels);
  }
  pUVar4 = (__this->fields)._alphaTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress_01 = &(__this->fields)._alphaTexture;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
    UnityEngine_Texture2D___ctor_68efe30(pUVar4,0xc0,1,4,false,(MethodInfo *)0x0);
    *targetAddress_01 = pUVar4;
    Il2CppCodeGenWriteBarrier(targetAddress_01);
    if ((UnityEngine_Texture_o *)*targetAddress_01 == (UnityEngine_Texture_o *)0x0) goto label_05cb967d;
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*targetAddress_01,1,(MethodInfo *)0x0);
    if ((UnityEngine_Texture_o *)*targetAddress_01 == (UnityEngine_Texture_o *)0x0) goto label_05cb967d;
    UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*targetAddress_01,1,(MethodInfo *)0x0);
    pUVar5 = (UnityEngine_Color32_array *)SZArrayNew(TypeInfo_UnityEngine_Color32_array,0xc0);
    (__this->fields)._alphaPixels = pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._alphaPixels);
  }
  pUVar1 = (__this->fields)._hueImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._hueImage;
    if (pUVar1 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05cb967d;
    UnityEngine_UI_RawImage__set_texture(pUVar1,(UnityEngine_Texture_o *)*targetAddress,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._svImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._svImage;
    if (pUVar1 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05cb967d;
    UnityEngine_UI_RawImage__set_texture(pUVar1,(UnityEngine_Texture_o *)*targetAddress_00,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._alphaImage;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields)._alphaImage;
  if (pUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
    UnityEngine_UI_RawImage__set_texture(pUVar1,(UnityEngine_Texture_o *)*targetAddress_01,(MethodInfo *)0x0);
    return;
  }
label_05cb967d:
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$UpdateSVTexture
// il2cpp: void UI_ColorPickPopup__UpdateSVTexture (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbbd30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cbbd9e: nop 

void UI_ColorPickPopup__UpdateSVTexture(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  UnityEngine_Color32_array *pUVar2;
  bool bVar3;
  int32_t iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UnityEngine_Color_o UVar8;
  
  if (Il2CppMethodInitialized_07547ae5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ae5 = '\x01';
  }
  pUVar1 = (__this->fields)._svTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  iVar7 = 0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  iVar6 = 0;
  do {
    iVar5 = 0;
    do {
      pUVar2 = (__this->fields)._svPixels;
      UVar8 = UnityEngine_Color__HSVToRGB_68fcb80
                        ((__this->fields)._hue,(float)iVar5 / 191.0,(float)iVar6 / 191.0,true,
                         (MethodInfo *)0x0);
      iVar4 = il2cpp_runtime_helper_05334d00(UVar8.fields._0_8_,UVar8.fields._8_8_,0);
      if (pUVar2 == (UnityEngine_Color32_array *)0x0) goto label_05cbbe71;
      if ((uint)pUVar2->max_length <= (uint)(iVar7 + iVar5)) {
        ThrowIndexOutOfRangeException();
      }
      pUVar2->m_Items[iVar7 + iVar5].fields._overlap_0._at_rgba.rgba = iVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0xc0);
    iVar6 = iVar6 + 1;
    iVar7 = iVar7 + 0xc0;
  } while (iVar6 != 0xc0);
  pUVar1 = (__this->fields)._svTexture;
  if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__SetPixels32_68f0850(pUVar1,(__this->fields)._svPixels,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._svTexture;
    if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply(pUVar1,false,false,(MethodInfo *)0x0);
      return;
    }
  }
label_05cbbe71:
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$UpdateAlphaTexture
// il2cpp: void UI_ColorPickPopup__UpdateAlphaTexture (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbbe80
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cbbf1e: add rax, 0x28
// asm:   0x5cbbf22: jmp 0x5cbbf38
// asm:   0x5cbbf34: add rax, 0x20

void UI_ColorPickPopup__UpdateAlphaTexture(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  UnityEngine_Color32_array *pUVar2;
  bool bVar3;
  int32_t iVar4;
  ulong uVar5;
  UnityEngine_Color_o UVar6;
  float local_38;
  float local_28;
  
  if (Il2CppMethodInitialized_07547ae6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ae6 = '\x01';
  }
  pUVar1 = (__this->fields)._alphaTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  UVar6 = UnityEngine_Color__HSVToRGB_68fcb80
                    ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,true,
                     (MethodInfo *)0x0);
  if (((__this->fields)._setting != (Settings_ColorSetting_o *)0x0) ||
     ((__this->fields)._alpha != (Settings_IntSetting_o *)0x0)) {
    uVar5 = 0;
    do {
      pUVar2 = (__this->fields)._alphaPixels;
      local_38 = UVar6.fields.b;
      local_28 = UVar6.fields.r;
      iVar4 = il2cpp_runtime_helper_05334d00(local_28,local_38,0);
      if (pUVar2 == (UnityEngine_Color32_array *)0x0) goto label_05cbc020;
      if ((uint)pUVar2->max_length <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      pUVar2->m_Items[uVar5].fields._overlap_0._at_rgba.rgba = iVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0xc0);
    pUVar1 = (__this->fields)._alphaTexture;
    if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__SetPixels32_68f0850(pUVar1,(__this->fields)._alphaPixels,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._alphaTexture;
      if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__Apply(pUVar1,false,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05cbc020:
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$UpdatePickerHandles
// il2cpp: void UI_ColorPickPopup__UpdatePickerHandles (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbb8a0

void UI_ColorPickPopup__UpdatePickerHandles(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Settings_IntSetting_o *pSVar4;
  bool bVar5;
  Settings_ColorSetting_o *pSVar6;
  int32_t *piVar7;
  float fVar8;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  float fVar9;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Rect_o UVar11;
  float local_28;
  
  if (Il2CppMethodInitialized_07547ae7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07547ae7 = '\x01';
  }
  pUVar3 = (__this->fields)._svRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar3 = (__this->fields)._svHandle;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (__this->fields)._svRect;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05cbbbf9;
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      pUVar3 = (__this->fields)._svRect;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05cbbbf9;
      UVar11 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._svHandle;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05cbbbf9;
      local_28 = UVar10.fields.m_Width;
      fVar9 = UVar11.fields.m_Height + -6.0;
      uVar1 = (__this->fields)._saturation;
      uVar2 = (__this->fields)._value;
      value.fields.x = (float)uVar1 * (local_28 + -6.0) + (local_28 + -6.0) * -0.5;
      value.fields.y = (float)uVar2 * fVar9 + fVar9 * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value,(MethodInfo *)0x0);
    }
  }
  pUVar3 = (__this->fields)._hueRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar3 = (__this->fields)._hueHandle;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (__this->fields)._hueRect;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05cbbbf9;
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      pUVar3 = (__this->fields)._hueHandle;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05cbbbf9;
      fVar9 = UVar10.fields.m_Height + -6.0;
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar3,(UnityEngine_Vector2_o)
                        ((ulong)(uint)((1.0 - (__this->fields)._hue) * fVar9 + fVar9 * -0.5) << 0x20),
                 (MethodInfo *)0x0);
    }
  }
  pUVar3 = (__this->fields)._alphaRect;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  pUVar3 = (__this->fields)._alphaHandle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  pUVar3 = (__this->fields)._alphaRect;
  if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_05cbbbf9;
  UVar10 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    pSVar6 = (__this->fields)._setting;
    if (pSVar6 == (Settings_ColorSetting_o *)0x0) goto label_05cbbb51;
label_05cbbb28:
    piVar7 = &(pSVar6->fields).MinAlpha;
  }
  else {
    pSVar6 = (__this->fields)._setting;
    if (pSVar6 != (Settings_ColorSetting_o *)0x0) goto label_05cbbb28;
label_05cbbb51:
    pSVar4 = (__this->fields)._alpha;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05cbbbf9;
    piVar7 = &(pSVar4->fields).MinValue;
  }
  fVar9 = (float)*piVar7 / 255.0;
  if ((fVar9 != 1.0) || (NAN(fVar9))) {
    fVar8 = ((__this->fields)._alphaValue - fVar9) / (1.0 - fVar9);
    fVar9 = 1.0;
    if (fVar8 <= 1.0) {
      fVar9 = fVar8;
    }
    fVar9 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
    pUVar3 = (__this->fields)._alphaHandle;
  }
  else {
    fVar9 = 0.0;
    pUVar3 = (__this->fields)._alphaHandle;
  }
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    fVar8 = UVar10.fields.m_Width + -6.0;
    value_00.fields.y = 0.0;
    value_00.fields.x = fVar8 * fVar9 + fVar8 * -0.5;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar3,value_00,(MethodInfo *)0x0);
    return;
  }
label_05cbbbf9:
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$GetCurrentColor
// il2cpp: UnityEngine_Color_o UI_ColorPickPopup__GetCurrentColor (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbbc00

UnityEngine_Color_o UI_ColorPickPopup__GetCurrentColor(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  int32_t *piVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o UVar6;
  UnityEngine_Color_o UVar7;
  
  UVar6 = UnityEngine_Color__HSVToRGB_68fcb80
                    ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,true,
                     (MethodInfo *)0x0);
  UVar7.fields._0_8_ = UVar6.fields._0_8_;
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
    pSVar2 = (__this->fields)._alpha;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
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
  UVar7.fields.a = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
  UVar7.fields.b = UVar6.fields.b;
  return (UnityEngine_Color_o)UVar7.fields;
}


// UI.ColorPickPopup$$GetHexString
// il2cpp: System_String_o* UI_ColorPickPopup__GetHexString (UI_ColorPickPopup_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5cbbc90

System_String_o *
UI_ColorPickPopup__GetHexString(UI_ColorPickPopup_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Color_o UStack_10;
  
  if (Il2CppMethodInitialized_07547ae8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_07547ae8 = '\x01';
  }
  UStack_10.fields.r = color.fields.r;
  UStack_10.fields.g = color.fields.g;
  UStack_10.fields.b = color.fields.b;
  UStack_10.fields.a = color.fields.a;
  pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&UStack_10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ColorPickPopup$$GetMinAlpha01
// il2cpp: float UI_ColorPickPopup__GetMinAlpha01 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbaab0

float UI_ColorPickPopup__GetMinAlpha01(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
    return (float)(pSVar1->fields).MinAlpha / 255.0;
  }
  pSVar2 = (__this->fields)._alpha;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (float)(pSVar2->fields).MinValue / 255.0;
}


// UI.ColorPickPopup$$GetCurrentColor255
// il2cpp: Utility_Color255_o* UI_ColorPickPopup__GetCurrentColor255 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cba450
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cba7ce: jmp 0x5cba5d6
// asm:   0x5cba813: jmp 0x5cba6a7

Utility_Color255_o * UI_ColorPickPopup__GetCurrentColor255(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  double dVar5;
  _union_14 _Var6;
  undefined1 auVar7 [16];
  int32_t *piVar8;
  Utility_Color255_o *__this_00;
  int iVar9;
  int a;
  MethodInfo *method_00;
  _union_14 *p_Var10;
  int r;
  int b;
  int g;
  float fVar11;
  float fVar12;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar13;
  undefined4 uVar14;
  UnityEngine_Color_o UVar15;
  _union_14 local_90;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  _union_14 local_70;
  undefined1 local_68 [16];
  _union_14 local_50;
  undefined1 local_48 [16];
  double local_30;
  
  if (Il2CppMethodInitialized_07547ae9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_07547ae9 = '\x01';
  }
  uVar13 = 0;
  uVar14 = 0;
  method_00 = (MethodInfo *)0x0;
  UVar15 = UnityEngine_Color__HSVToRGB_68fcb80
                     ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,true,
                      (MethodInfo *)0x0);
  pSVar3 = (__this->fields)._setting;
  local_68._8_4_ = uVar13;
  local_68._0_8_ = UVar15.fields._8_8_;
  local_68._12_4_ = uVar14;
  if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
    pSVar4 = (__this->fields)._alpha;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05cba9c5;
    piVar8 = &(pSVar4->fields).MinValue;
  }
  else {
    piVar8 = &(pSVar3->fields).MinAlpha;
  }
  fVar11 = (__this->fields)._alphaValue;
  fVar12 = (float)*piVar8 / 255.0;
  if ((float)*piVar8 / 255.0 <= fVar11) {
    fVar12 = fVar11;
  }
  local_48 = ZEXT416((uint)fVar12);
  fStack_80 = (float)extraout_XMM0_Dc;
  local_88 = (undefined1  [8])UVar15.fields._0_8_;
  fStack_7c = (float)extraout_XMM0_Dd;
  fVar11 = UVar15.fields.r;
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
    fVar11 = (float)local_88._0_4_;
  }
  local_50._0_4_ = fVar11 * 255.0;
  fVar11 = fVar11 * 255.0;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar11 = (float)local_50._0_4_;
  }
  local_70.genericMethod = (void *)(double)fVar11;
  p_Var10 = &local_90;
  dVar5 = modf((double)local_70.genericMethod,(double *)p_Var10,method_00);
  if (0.0 <= (float)local_50._0_4_) {
    if ((dVar5 == 0.5) && (!NAN(dVar5))) {
      local_50.genericMethod = local_90.genericMethod;
      if (((long)(double)local_90.genericMethod & 1U) != 0) {
        local_50.genericMethod = (void *)((double)local_90.genericMethod + 1.0);
      }
      goto label_05cba5be;
    }
    dVar5 = floor((double)local_70.genericMethod + 0.5,(MethodInfo *)p_Var10);
    uVar13 = SUB84(dVar5,0);
    uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
label_05cba7b2:
    local_50._4_4_ = uVar14;
    local_50._0_4_ = uVar13;
    local_88._0_4_ = local_88._4_4_;
  }
  else {
    if ((dVar5 != -0.5) || (NAN(dVar5))) {
      dVar5 = ceil((double)local_70.genericMethod + -0.5,(MethodInfo *)p_Var10);
      uVar13 = SUB84(dVar5,0);
      uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
      goto label_05cba7b2;
    }
    local_50.genericMethod = local_90.genericMethod;
    if (((long)(double)local_90.genericMethod & 1U) != 0) {
      local_50.genericMethod = (void *)((double)local_90.genericMethod + -1.0);
    }
label_05cba5be:
    local_88._0_4_ = local_88._4_4_;
  }
  local_88._4_4_ = local_88._0_4_;
  fStack_80 = (float)local_88._0_4_;
  fStack_7c = (float)local_88._0_4_;
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  local_88._0_4_ = (float)local_88._0_4_ * 255.0;
  fVar11 = (float)local_88._0_4_;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar11 = (float)local_88._0_4_;
  }
  local_70.genericMethod = (void *)(double)fVar11;
  p_Var10 = &local_90;
  dVar5 = modf((double)local_70.genericMethod,(double *)p_Var10,method_00);
  if (0.0 <= (float)local_88._0_4_) {
    if ((dVar5 == 0.5) && (!NAN(dVar5))) {
      local_70.genericMethod = local_90.genericMethod;
      if (((long)(double)local_90.genericMethod & 1U) != 0) {
        local_70.genericMethod = (void *)((double)local_90.genericMethod + 1.0);
      }
      goto label_05cba693;
    }
    dVar5 = floor((double)local_70.genericMethod + 0.5,(MethodInfo *)p_Var10);
    uVar13 = SUB84(dVar5,0);
    uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
label_05cba7fb:
    local_70._4_4_ = uVar14;
    local_70._0_4_ = uVar13;
  }
  else {
    if ((dVar5 != -0.5) || (NAN(dVar5))) {
      dVar5 = ceil((double)local_70.genericMethod + -0.5,(MethodInfo *)p_Var10);
      uVar13 = SUB84(dVar5,0);
      uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
      goto label_05cba7fb;
    }
    local_70.genericMethod = local_90.genericMethod;
    if (((long)(double)local_90.genericMethod & 1U) != 0) {
      local_70.genericMethod = (void *)((double)local_90.genericMethod + -1.0);
    }
label_05cba693:
  }
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  local_68._0_4_ = (float)local_68._0_4_ * 255.0;
  fVar11 = (float)local_68._0_4_;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar11 = (float)local_68._0_4_;
  }
  fVar12 = 1.0;
  if ((float)local_48._0_4_ <= 1.0) {
    fVar12 = (float)local_48._0_4_;
  }
  _local_88 = ZEXT416((uint)fVar12);
  local_30 = (double)fVar11;
  p_Var10 = &local_90;
  dVar5 = modf(local_30,(double *)p_Var10,method_00);
  _Var6 = local_90;
  if (0.0 <= (float)local_68._0_4_) {
    if ((dVar5 == 0.5) && (!NAN(dVar5))) {
      if (((long)(double)local_90.genericMethod & 1U) != 0) {
        _Var6.genericMethod = (void *)((double)local_90.genericMethod + 1.0);
      }
      goto label_05cba77a;
    }
    dVar5 = floor(local_30 + 0.5,(MethodInfo *)p_Var10);
    uVar13 = SUB84(dVar5,0);
    uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
label_05cba840:
    auVar7 = local_68;
    local_68._4_4_ = uVar14;
    local_68._0_4_ = uVar13;
    local_68._8_8_ = auVar7._8_8_;
  }
  else {
    if ((dVar5 != -0.5) || (NAN(dVar5))) {
      dVar5 = ceil(local_30 + -0.5,(MethodInfo *)p_Var10);
      uVar13 = SUB84(dVar5,0);
      uVar14 = (undefined4)((ulong)dVar5 >> 0x20);
      goto label_05cba840;
    }
    if (((long)(double)local_90.genericMethod & 1U) != 0) {
      _Var6.genericMethod = (void *)((double)local_90.genericMethod + -1.0);
    }
label_05cba77a:
    local_68._0_8_ = _Var6.genericMethod;
  }
  local_48._4_4_ = local_48._4_4_ & local_88._4_4_;
  local_48._0_4_ = -(uint)(0.0 <= (float)local_48._0_4_) & (uint)((float)local_88._0_4_ * 255.0);
  local_48._8_4_ = local_48._8_4_ & (uint)fStack_80;
  local_48._12_4_ = local_48._12_4_ & (uint)fStack_7c;
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  p_Var10 = &local_90;
  local_88 = (undefined1  [8])(double)(float)local_48._0_4_;
  dVar5 = modf((double)(float)local_48._0_4_,(double *)p_Var10,method_00);
  if (0.0 <= (float)local_48._0_4_) {
    if ((dVar5 != 0.5) || (NAN(dVar5))) {
      local_90.genericMethod = (void *)floor((double)local_88 + 0.5,(MethodInfo *)p_Var10);
    }
    else if (((long)(double)local_90.genericMethod & 1U) != 0) {
      local_90.genericMethod = (void *)((double)local_90.genericMethod + 1.0);
    }
  }
  else if ((dVar5 != -0.5) || (NAN(dVar5))) {
    local_90.genericMethod = (void *)ceil((double)local_88 + -0.5,(MethodInfo *)p_Var10);
  }
  else if (((long)(double)local_90.genericMethod & 1U) != 0) {
    local_90.genericMethod = (void *)((double)local_90.genericMethod + -1.0);
  }
  pSVar3 = (__this->fields)._setting;
  if (pSVar3 != (Settings_ColorSetting_o *)0x0) {
    iVar9 = (int)(double)local_90.genericMethod;
    b = (int)(double)local_68._0_8_;
    g = (int)(double)local_70.genericMethod;
    r = (int)(double)local_50.genericMethod;
    iVar2 = (pSVar3->fields).MinAlpha;
    a = 0xff;
    if (iVar9 < 0xff) {
      a = iVar9;
    }
    if (iVar9 < iVar2) {
      a = iVar2;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
    return __this_00;
  }
label_05cba9c5:
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$CreateTextureContainer
// il2cpp: UnityEngine_GameObject_o* UI_ColorPickPopup__CreateTextureContainer (UI_ColorPickPopup_o* __this, UnityEngine_Transform_o* parent, System_String_o* name, float width, float height, UnityEngine_RectTransform_o** textureRect, const MethodInfo* method);
// 0x5cb99e0

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
  
  if (Il2CppMethodInitialized_07547aea == '\0') {
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
    Il2CppMethodInitialized_07547aea = '\x01';
  }
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto label_05cb9edd;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05cb9ee7;
  }
  if ((int)pSVar1->max_length == 0) goto label_05cb9ee2;
  pSVar1->m_Items[0] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05cb9ee7;
  }
  if ((pSVar1->max_length & 0xfffffffe) == 0) goto label_05cb9ee2;
  pSVar1->m_Items[1] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05cb9ee7;
  }
  if ((uint)pSVar1->max_length < 3) goto label_05cb9ee2;
  pSVar1->m_Items[2] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(__this_00,name,pSVar1,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_05cb9edd:
    ThrowNullReferenceException();
  }
  pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cb9edd;
  UnityEngine_Transform__SetParent_692d510(pUVar4,parent,false,(MethodInfo *)0x0);
  pUVar5 = UnityEngine_GameObject__GetComponent_object_
                     (__this_00,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cb9edd;
  (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar5,width,(pUVar5->klass->vtable)._36_set_preferredWidth.method);
  (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar5,height,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
  pUVar6 = UnityEngine_GameObject__GetComponent_object_
                     (__this_00,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto label_05cb9edd;
  (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
            (pUVar6,(UnityEngine_Color_o)(ZEXT816(0x3f00000000000000) << 0x40),
             (pUVar6->klass->vtable)._23_set_color.method);
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto label_05cb9edd;
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05cb9ee7;
  }
  if ((int)pSVar1->max_length == 0) goto label_05cb9ee2;
  pSVar1->m_Items[0] = pSVar2;
  Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_RawImage,(MethodInfo *)0x0);
  if (pSVar2 != (System_Type_o *)0x0) {
    pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
    if (pIVar3 == (Il2CppObject *)0x0) goto label_05cb9ee7;
  }
  if ((pSVar1->max_length & 0xfffffffe) != 0) {
    pSVar1->m_Items[1] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_ColorPickDragArea,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
label_05cb9ee7:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if (2 < (uint)pSVar1->max_length) {
      pSVar1->m_Items[2] = pSVar2;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this_01,"Texture",pSVar1,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pUVar4 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        parent_00 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(pUVar4,parent_00,false,(MethodInfo *)0x0);
          pUVar7 = UnityEngine_GameObject__GetComponent_object_
                             (__this_01,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          *textureRect = pUVar7;
          Il2CppCodeGenWriteBarrier(textureRect);
          pUVar7 = *textureRect;
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (pUVar7,(UnityEngine_Vector2_o)
                              (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            pUVar7 = *textureRect;
            if (Il2CppMethodInitialized_07542885 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_07542885 = '\x01';
            }
            if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar7,(UnityEngine_Vector2_o)
                                (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                         (MethodInfo *)0x0);
              if (*textureRect != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_offsetMin
                          (*textureRect,(UnityEngine_Vector2_o)0x4040000040400000,(MethodInfo *)0x0);
                if (*textureRect != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_offsetMax
                            (*textureRect,(UnityEngine_Vector2_o)0xc0400000c0400000,(MethodInfo *)0x0);
                  return __this_00;
                }
              }
            }
          }
        }
      }
      goto label_05cb9edd;
    }
  }
label_05cb9ee2:
  ThrowIndexOutOfRangeException();
}


// UI.ColorPickPopup$$CreateTextureSurface
// il2cpp: UnityEngine_UI_RawImage_o* UI_ColorPickPopup__CreateTextureSurface (UI_ColorPickPopup_o* __this, UnityEngine_Transform_o* container, System_String_o* name, UnityEngine_RectTransform_o** rect, const MethodInfo* method);
// 0x5cb9f00

UnityEngine_UI_RawImage_o *
UI_ColorPickPopup__CreateTextureSurface
          (UI_ColorPickPopup_o *__this,UnityEngine_Transform_o *container,System_String_o *name,
          UnityEngine_RectTransform_o **rect,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_RectTransform_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547aeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    Il2CppMethodInitialized_07547aeb = '\x01';
  }
  if (container != (UnityEngine_Transform_o *)0x0) {
    __this_00 = UnityEngine_Transform__Find(container,"Texture",(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
      if (__this_01 != (UnityEngine_UI_RawImage_o *)0x0) {
        UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_01,name,(MethodInfo *)0x0);
        (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (__this_01,true,(__this_01->klass->vtable)._25_set_raycastTarget.method);
        pUVar1 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this_00,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform)
        ;
        *rect = pUVar1;
        Il2CppCodeGenWriteBarrier(rect);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ColorPickPopup$$CreateHandle
// il2cpp: UnityEngine_RectTransform_o* UI_ColorPickPopup__CreateHandle (UI_ColorPickPopup_o* __this, UnityEngine_RectTransform_o* parent, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x5cba000

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
  UnityEngine_Color_o UVar4;
  
  if (Il2CppMethodInitialized_07547aec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Shadow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Shadow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Handle");
    Il2CppMethodInitialized_07547aec = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_05cba306:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_05cba310;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05cba310;
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Shadow,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
label_05cba310:
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this_00,"Handle",components,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510
                      (__this_01,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
            __this_02 = UnityEngine_GameObject__GetComponent_object_
                                  (__this_00,
                                   (MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax
                        (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_sizeDelta(__this_02,size,(MethodInfo *)0x0);
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
              if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
                UVar4.fields.b = 1.0;
                UVar4.fields.a = 0.85;
                UVar4.fields.r = 1.0;
                UVar4.fields.g = 1.0;
                (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                          (pUVar3,UVar4,(pUVar3->klass->vtable)._23_set_color.method);
                (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (pUVar3,false,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
                __this_03 = UnityEngine_GameObject__GetComponent_object_
                                      (__this_00,
                                       (MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Shadow);
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
        goto label_05cba306;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ColorPickPopup$$OnDestroy
// il2cpp: void UI_ColorPickPopup__OnDestroy (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbc030

void UI_ColorPickPopup__OnDestroy(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547aed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547aed = '\x01';
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
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
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
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._hueTexture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._hueTexture;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ColorPickPopup$$.ctor
// il2cpp: void UI_ColorPickPopup___ctor (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbc150

void UI_ColorPickPopup___ctor(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547aee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    Il2CppMethodInitialized_07547aee = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._red = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._red);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._green = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._green);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._blue = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._blue);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._alpha = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._alpha);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730
            ((Settings_StringSetting_o *)method_00,"#FFFFFFFF",9,(MethodInfo *)0x0);
  (__this->fields)._hex = (Settings_StringSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hex);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.ColorPickPopup$$<Setup>b__53_0
// il2cpp: void UI_ColorPickPopup___Setup_b__53_0 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbc2d0

void UI_ColorPickPopup___Setup_b__53_0(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547aef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547aef = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ColorPickPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.ColorPickPopup$$<Setup>b__53_1
// il2cpp: void UI_ColorPickPopup___Setup_b__53_1 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x5cbc310

void UI_ColorPickPopup___Setup_b__53_1(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547af0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547af0 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_ColorPickPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


