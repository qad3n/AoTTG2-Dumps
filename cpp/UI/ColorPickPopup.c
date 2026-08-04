// Type: UI.ColorPickPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ColorPickPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ColorPickPopup.cs
// --------------------------------

// UI.ColorPickPopup$$get_Title
// il2cpp: System_String_o* UI_ColorPickPopup__get_Title (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4346ba0

System_String_o * UI_ColorPickPopup__get_Title(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae0e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"ColorPickPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae0e5 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","ColorPickPopup","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ColorPickPopup$$get_Width
// il2cpp: float UI_ColorPickPopup__get_Width (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4346c40

float UI_ColorPickPopup__get_Width(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 520.0;
}


// UI.ColorPickPopup$$get_Height
// il2cpp: float UI_ColorPickPopup__get_Height (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4346c50

float UI_ColorPickPopup__get_Height(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 520.0;
}


// UI.ColorPickPopup$$get_VerticalSpacing
// il2cpp: float UI_ColorPickPopup__get_VerticalSpacing (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4346c60

float UI_ColorPickPopup__get_VerticalSpacing(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 12.0;
}


// UI.ColorPickPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ColorPickPopup__get_PanelAlignment (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4346c70

int32_t UI_ColorPickPopup__get_PanelAlignment(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.ColorPickPopup$$Setup
// il2cpp: void UI_ColorPickPopup__Setup (UI_ColorPickPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4346c80

void UI_ColorPickPopup__Setup(UI_ColorPickPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte *pbVar1;
  UnityEngine_Texture2D_o **ppUVar2;
  UnityEngine_Texture2D_o **ppUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Object_o *x;
  UnityEngine_UI_RawImage_o *pUVar5;
  Settings_IntSetting_o *pSVar6;
  Utility_Color255_o *__this_00;
  int32_t iVar7;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  MethodInfo *pMVar10;
  UnityEngine_Events_UnityAction_o *pUVar11;
  UnityEngine_Texture2D_o *pUVar12;
  UnityEngine_Color32_array *pUVar13;
  UnityEngine_GameObject_o *__this_01;
  byte extraout_DL;
  MethodInfo *extraout_RDX;
  UnityEngine_UI_Image_o *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_Events_UnityAction_o *pUVar14;
  byte bVar15;
  Settings_ColorSetting_o *pSVar16;
  UnityEngine_UI_Image_o *pUVar17;
  UI_ColorPickPopup_o *__this_02;
  UI_ColorPickPopup_o *pUVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Color_o UVar21;
  UnityEngine_Color_o rgbColor;
  float fStack_6c;
  
  if (g_data_057ae0e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__53_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__53_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae0e6 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  iVar7 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar9 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pMVar10 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pMVar10,iVar7,120.0,20.0,pSVar9,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar4,(UI_ElementStyle_o *)pMVar10,pSVar9,0.0,pUVar11,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).BottomBar;
  pSVar9 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar4,(UI_ElementStyle_o *)pMVar10,pSVar9,0.0,pUVar11,(MethodInfo *)0x0);
  UI_ColorPickPopup__SetupPickerUI(__this,pMVar10);
  if (g_data_057ae0f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorPickPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057ae0f0 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_04347c85:
    pUVar12 = (__this->fields)._svTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppUVar2 = &(__this->fields)._svTexture;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_04347d54:
      pUVar12 = (__this->fields)._alphaTexture;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppUVar3 = &(__this->fields)._alphaTexture;
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
label_04347e23:
        pUVar5 = (__this->fields)._hueImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          pUVar5 = (__this->fields)._hueImage;
          if (pUVar5 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04347f17;
          UnityEngine_UI_RawImage__set_texture
                    (pUVar5,(UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),(MethodInfo *)0x0)
          ;
        }
        pUVar5 = (__this->fields)._svImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          pUVar5 = (__this->fields)._svImage;
          if (pUVar5 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04347f17;
          UnityEngine_UI_RawImage__set_texture(pUVar5,(UnityEngine_Texture_o *)*ppUVar2,(MethodInfo *)0x0);
        }
        pUVar5 = (__this->fields)._alphaImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        pUVar5 = (__this->fields)._alphaImage;
        if (pUVar5 != (UnityEngine_UI_RawImage_o *)0x0) {
          UnityEngine_UI_RawImage__set_texture(pUVar5,(UnityEngine_Texture_o *)*ppUVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pUVar12 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
        pUVar11 = (UnityEngine_Events_UnityAction_o *)&g_data_00000004;
        UnityEngine_Texture2D___ctor_4dd9130(pUVar12,0xc0,1,4,0,(MethodInfo *)0x0);
        *ppUVar3 = pUVar12;
        il2cpp_runtime_helper_022b4080(ppUVar3);
        if ((UnityEngine_Texture_o *)*ppUVar3 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar3,1,(MethodInfo *)0x0);
          if ((UnityEngine_Texture_o *)*ppUVar3 != (UnityEngine_Texture_o *)0x0) {
            UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar3,1,(MethodInfo *)0x0);
            pUVar13 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32,0xc0);
            (__this->fields)._alphaPixels = pUVar13;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._alphaPixels);
            goto label_04347e23;
          }
        }
      }
    }
    else {
      pUVar12 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
      pUVar11 = (UnityEngine_Events_UnityAction_o *)&g_data_00000004;
      UnityEngine_Texture2D___ctor_4dd9130(pUVar12,0xc0,0xc0,4,0,(MethodInfo *)0x0);
      *ppUVar2 = pUVar12;
      il2cpp_runtime_helper_022b4080(ppUVar2);
      if ((UnityEngine_Texture_o *)*ppUVar2 != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0);
        if ((UnityEngine_Texture_o *)*ppUVar2 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0);
          pUVar13 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32,0x9000);
          (__this->fields)._svPixels = pUVar13;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._svPixels);
          goto label_04347d54;
        }
      }
    }
  }
  else {
    pUVar12 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    pUVar11 = (UnityEngine_Events_UnityAction_o *)&g_data_00000004;
    UnityEngine_Texture2D___ctor_4dd9130(pUVar12,1,0x100,4,0,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) = pUVar12;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ColorPickPopup + 0xb8));
    if ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) != (UnityEngine_Texture_o *)0x0) {
      UnityEngine_Texture__set_wrapMode
                ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),1,(MethodInfo *)0x0);
      if ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_filterMode
                  ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),1,(MethodInfo *)0x0);
        pUVar13 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32);
        if (pUVar13 == (UnityEngine_Color32_array *)0x0) goto label_04347f1c;
        pUVar14 = (UnityEngine_Events_UnityAction_o *)0x0;
        do {
          UVar21 = UnityEngine_Color__HSVToRGB_4de5b40
                             ((float)(int)pUVar14 / -255.0 + 1.0,1.0,1.0,1,(MethodInfo *)0x0);
          iVar7 = il2cpp_runtime_helper_03b428b0(UVar21.fields._0_8_,UVar21.fields.b,0);
          pUVar11 = (UnityEngine_Events_UnityAction_o *)(ulong)(uint)pUVar13->max_length;
          if (pUVar11 <= pUVar14) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_04347f17;
          }
          (&pUVar13->m_Items[0].fields.rgba)[(long)pUVar14] = iVar7;
          pUVar14 = (UnityEngine_Events_UnityAction_o *)((long)&pUVar14->klass + 1);
        } while (pUVar14 != (UnityEngine_Events_UnityAction_o *)0x100);
        if ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) !=
            (UnityEngine_Texture2D_o *)0x0) {
          UnityEngine_Texture2D__SetPixels32_4dd9b90
                    ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),pUVar13,
                     (MethodInfo *)0x0);
          if ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) !=
              (UnityEngine_Texture2D_o *)0x0) {
            pUVar11 = (UnityEngine_Events_UnityAction_o *)0x0;
            UnityEngine_Texture2D__Apply
                      ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),0,1,(MethodInfo *)0x0
                      );
            goto label_04347c85;
          }
        }
      }
    }
  }
label_04347f17:
  il2cpp_runtime_helper_022b2c90();
label_04347f1c:
  pSVar16 = (Settings_ColorSetting_o *)0x0;
  UVar21 = UnityEngine_Color__HSVToRGB_4de5b40(1.0,1.0,1.0,1,(MethodInfo *)0x0);
  __this_02 = (UI_ColorPickPopup_o *)0x0;
  il2cpp_runtime_helper_03b428b0(UVar21.fields._0_8_,UVar21.fields.b);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae0e7 = '\x01';
  }
  bVar15 = 0;
  pUVar18 = __this_02;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pMVar10 = (MethodInfo *)0x0;
    bVar8 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this_02,pMVar10);
    (__this_02->fields)._setting = pSVar16;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields)._setting,pSVar16);
    pUVar18 = (UI_ColorPickPopup_o *)&(__this_02->fields)._image;
    (__this_02->fields)._image = extraout_RDX_00;
    pUVar17 = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080();
    bVar15 = (byte)pUVar17;
    if ((pSVar16 != (Settings_ColorSetting_o *)0x0) &&
       (pSVar6 = (__this_02->fields)._alpha, pSVar6 != (Settings_IntSetting_o *)0x0)) {
      (pSVar6->fields).MinValue = (pSVar16->fields).MinAlpha;
      (__this_02->fields)._onChangeColor = pUVar11;
      il2cpp_runtime_helper_022b4080(&(__this_02->fields)._onChangeColor);
      bVar15 = (byte)pUVar11;
      __this_00 = (pSVar16->fields)._value;
      pUVar18 = (UI_ColorPickPopup_o *)0x0;
      if (__this_00 != (Utility_Color255_o *)0x0) {
        UVar21 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
        rgbColor.fields.b = UVar21.fields.b;
        rgbColor.fields._0_8_ = UVar21.fields._0_8_;
        rgbColor.fields.a = 1.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor,&(__this_02->fields)._hue,&(__this_02->fields)._saturation,
                   &(__this_02->fields)._value,(MethodInfo *)0x0);
        fStack_6c = UVar21.fields.a;
        fVar19 = (float)(pSVar16->fields).MinAlpha / 255.0;
        if (fVar19 <= fStack_6c) {
          fVar19 = fStack_6c;
        }
        fVar20 = 1.0;
        if (fVar19 <= 1.0) {
          fVar20 = fVar19;
        }
        (__this_02->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar19) & (uint)fVar20);
        *(undefined1 *)((long)&(__this_02->fields)._suppressInputCallbacks + 3) = 0;
        *(undefined2 *)((long)&(__this_02->fields)._suppressInputCallbacks + 1) = 0x101;
        pMVar10 = (MethodInfo *)0x1;
        UI_ColorPickPopup__ApplyCurrentColorToUI(__this_02,1,method_00);
        if (*(char *)((long)&(__this_02->fields)._suppressInputCallbacks + 1) != '\0') {
          UI_ColorPickPopup__UpdateSVTexture(__this_02,pMVar10);
          *(undefined1 *)((long)&(__this_02->fields)._suppressInputCallbacks + 1) = 0;
        }
        if (*(char *)((long)&(__this_02->fields)._suppressInputCallbacks + 2) == '\0') {
          return;
        }
        UI_ColorPickPopup__UpdateAlphaTexture(__this_02,pMVar10);
        *(undefined1 *)((long)&(__this_02->fields)._suppressInputCallbacks + 2) = 0;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pbVar1 = (byte *)((long)&(pUVar18->fields)._suppressInputCallbacks + 1);
  *pbVar1 = *pbVar1 | bVar15;
  pbVar1 = (byte *)((long)&(pUVar18->fields)._suppressInputCallbacks + 2);
  *pbVar1 = *pbVar1 | extraout_DL;
  return;
}


// UI.ColorPickPopup$$Show
// il2cpp: void UI_ColorPickPopup__Show (UI_ColorPickPopup_o* __this, Settings_ColorSetting_o* setting, UnityEngine_UI_Image_o* image, UnityEngine_Events_UnityAction_o* onChangeColor, const MethodInfo* method);
// 0x4347f50

void UI_ColorPickPopup__Show
               (UI_ColorPickPopup_o *__this,Settings_ColorSetting_o *setting,UnityEngine_UI_Image_o *image,
               UnityEngine_Events_UnityAction_o *onChangeColor,MethodInfo *method)

{
  byte *pbVar1;
  Settings_IntSetting_o *pSVar2;
  Utility_Color255_o *__this_00;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_01;
  byte extraout_DL;
  MethodInfo *method_00;
  byte bVar4;
  MethodInfo *pMVar5;
  UI_ColorPickPopup_o *pUVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Color_o UVar9;
  UnityEngine_Color_o rgbColor;
  float fStack_34;
  
  if (g_data_057ae0e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae0e7 = '\x01';
  }
  bVar4 = 0;
  pUVar6 = __this;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pMVar5 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar5);
    (__this->fields)._setting = setting;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._setting,setting);
    pUVar6 = (UI_ColorPickPopup_o *)&(__this->fields)._image;
    (__this->fields)._image = image;
    il2cpp_runtime_helper_022b4080();
    bVar4 = (byte)image;
    if ((setting != (Settings_ColorSetting_o *)0x0) &&
       (pSVar2 = (__this->fields)._alpha, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      (pSVar2->fields).MinValue = (setting->fields).MinAlpha;
      (__this->fields)._onChangeColor = onChangeColor;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._onChangeColor);
      bVar4 = (byte)onChangeColor;
      __this_00 = (setting->fields)._value;
      pUVar6 = (UI_ColorPickPopup_o *)0x0;
      if (__this_00 != (Utility_Color255_o *)0x0) {
        UVar9 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
        rgbColor.fields.b = UVar9.fields.b;
        rgbColor.fields._0_8_ = UVar9.fields._0_8_;
        rgbColor.fields.a = 1.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor,&(__this->fields)._hue,&(__this->fields)._saturation,&(__this->fields)._value,
                   (MethodInfo *)0x0);
        fStack_34 = UVar9.fields.a;
        fVar7 = (float)(setting->fields).MinAlpha / 255.0;
        if (fVar7 <= fStack_34) {
          fVar7 = fStack_34;
        }
        fVar8 = 1.0;
        if (fVar7 <= 1.0) {
          fVar8 = fVar7;
        }
        (__this->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar8);
        *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 3) = 0;
        *(undefined2 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0x101;
        pMVar5 = (MethodInfo *)0x1;
        UI_ColorPickPopup__ApplyCurrentColorToUI(__this,1,method_00);
        if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 1) != '\0') {
          UI_ColorPickPopup__UpdateSVTexture(__this,pMVar5);
          *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0;
        }
        if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 2) == '\0') {
          return;
        }
        UI_ColorPickPopup__UpdateAlphaTexture(__this,pMVar5);
        *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 2) = 0;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pbVar1 = (byte *)((long)&(pUVar6->fields)._suppressInputCallbacks + 1);
  *pbVar1 = *pbVar1 | bVar4;
  pbVar1 = (byte *)((long)&(pUVar6->fields)._suppressInputCallbacks + 2);
  *pbVar1 = *pbVar1 | extraout_DL;
  return;
}


// UI.ColorPickPopup$$SetupPickerUI
// il2cpp: void UI_ColorPickPopup__SetupPickerUI (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4346f60

void UI_ColorPickPopup__SetupPickerUI(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  byte *pbVar1;
  UnityEngine_Texture2D_o **ppUVar2;
  UnityEngine_Texture2D_o **ppUVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_StringSetting_o *setting;
  UnityEngine_Object_o *x;
  Utility_Color255_o *__this_00;
  bool_conflict bVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_01;
  UI_ElementStyle_o *__this_02;
  UnityEngine_GameObject_o *pUVar8;
  UI_ColorPickPopup_o *pUVar9;
  UI_ColorPickPopup_o *pUVar10;
  UI_ColorPickPopup_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UI_ColorPickPopup_o *pUVar13;
  UnityEngine_UI_RawImage_o *pUVar14;
  Il2CppObject *pIVar15;
  UnityEngine_RectTransform_o *pUVar16;
  UnityEngine_UI_Image_o *pUVar17;
  UnityEngine_Events_UnityAction_o *pUVar18;
  UnityEngine_GameObject_o *pUVar19;
  UI_InputSettingElement_o *pUVar20;
  UnityEngine_Events_UnityAction_o *onEndEdit;
  System_Func_string__bool__o *onValidate;
  System_Func_string__string__o *onCleanup;
  UnityEngine_Texture2D_o *pUVar21;
  UnityEngine_Color32_array *pUVar22;
  System_String_o **textureRect;
  byte extraout_DL;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_UI_Image_o *extraout_RDX;
  MethodInfo *method_03;
  Il2CppClass *pIVar23;
  byte bVar24;
  Settings_ColorSetting_o *pSVar25;
  MethodInfo *pMVar26;
  MethodInfo *in_R8;
  float fVar27;
  float fVar28;
  UnityEngine_Color_o UVar29;
  UnityEngine_Color_o rgbColor;
  float fStackY_f4;
  undefined1 local_50 [16];
  UnityEngine_RectTransform_o *local_40;
  UI_ElementStyle_o *local_38;
  
  if (g_data_057ae0e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_float_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_CleanupHexInput);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_IsHexInputValid);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnAlphaDragged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnHexInputChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnHexInputEndEdit);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnHueDragged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnRGBAInputChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnSVDragged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"SVContainer");
    il2cpp_runtime_helper_023445d0(&"HueContainer");
    il2cpp_runtime_helper_023445d0(&"Hex");
    il2cpp_runtime_helper_023445d0(&"R");
    il2cpp_runtime_helper_023445d0(&"AlphaContainer");
    il2cpp_runtime_helper_023445d0(&"AlphaImage");
    il2cpp_runtime_helper_023445d0(&"G");
    il2cpp_runtime_helper_023445d0(&"HueImage");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/ColorPreview");
    il2cpp_runtime_helper_023445d0(&"Image");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"SVImage");
    il2cpp_runtime_helper_023445d0(&"A");
    g_data_057ae0e8 = '\x01';
  }
  local_40 = (UnityEngine_RectTransform_o *)0x0;
  local_50._8_8_ = (UnityEngine_RectTransform_o *)0x0;
  local_50._0_8_ = (UnityEngine_RectTransform_o *)0x0;
  pSVar7 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x12,24.0,8.0,pSVar7,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  textureRect = (System_String_o **)0x0;
  UI_ElementStyle___ctor(__this_02,0x12,52.0,10.0,pSVar7,(MethodInfo *)0x0);
  pUVar9 = (UI_ColorPickPopup_o *)(__this->fields).SinglePanel;
  pUVar8 = UI_ElementFactory__CreateHorizontalGroup
                     ((UnityEngine_Transform_o *)pUVar9,12.0,1,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pUVar9 = (UI_ColorPickPopup_o *)UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
    pUVar10 = (UI_ColorPickPopup_o *)
              UI_ElementFactory__CreateVerticalGroup
                        ((UnityEngine_Transform_o *)pUVar9,10.0,1,(MethodInfo *)0x0);
    if (pUVar10 != (UI_ColorPickPopup_o *)0x0) {
      pUVar9 = (UI_ColorPickPopup_o *)
               UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
      pUVar11 = (UI_ColorPickPopup_o *)
                UI_ElementFactory__CreateHorizontalGroup
                          ((UnityEngine_Transform_o *)pUVar9,10.0,1,(MethodInfo *)0x0);
      if (pUVar11 != (UI_ColorPickPopup_o *)0x0) {
        pUVar9 = pUVar11;
        pUVar12 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar11,(MethodInfo *)0x0)
        ;
        textureRect = (System_String_o **)&(__this->fields)._svRect;
        pUVar13 = (UI_ColorPickPopup_o *)
                  UI_ColorPickPopup__CreateTextureContainer
                            (pUVar9,pUVar12,"SVContainer",260.0,260.0,
                             (UnityEngine_RectTransform_o **)textureRect,in_R8);
        if (pUVar13 != (UI_ColorPickPopup_o *)0x0) {
          local_38 = __this_02;
          pUVar12 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar13,(MethodInfo *)0x0);
          textureRect = (System_String_o **)&stack0xffffffffffffffc0;
          pUVar14 = UI_ColorPickPopup__CreateTextureSurface
                              (pUVar13,pUVar12,"SVImage",(UnityEngine_RectTransform_o **)textureRect,in_R8)
          ;
          (__this->fields)._svImage = pUVar14;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._svImage);
          pUVar14 = (__this->fields)._svImage;
          pUVar9 = (UI_ColorPickPopup_o *)0x0;
          if (pUVar14 != (UnityEngine_UI_RawImage_o *)0x0) {
            pIVar15 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar14,MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
            pUVar13 = (UI_ColorPickPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_float_float);
            textureRect = (System_String_o **)0x0;
            pUVar9 = pUVar13;
            System_Action_float__float____ctor();
            if (pIVar15 != (Il2CppObject *)0x0) {
              *(undefined4 *)&pIVar15[2].klass = 0;
              pUVar9 = (UI_ColorPickPopup_o *)&pIVar15[2].monitor;
              pIVar15[2].monitor = pUVar13;
              il2cpp_runtime_helper_022b4080(pUVar9,pUVar13);
              pUVar16 = UI_ColorPickPopup__CreateHandle
                                  (pUVar9,local_40,(UnityEngine_Vector2_o)0x4160000041600000,method_00);
              (__this->fields)._svHandle = pUVar16;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._svHandle);
              pUVar12 = UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pUVar11,(MethodInfo *)0x0);
              textureRect = (System_String_o **)&(__this->fields)._hueRect;
              pUVar13 = (UI_ColorPickPopup_o *)
                        UI_ColorPickPopup__CreateTextureContainer
                                  (pUVar11,pUVar12,"HueContainer",28.0,260.0,
                                   (UnityEngine_RectTransform_o **)textureRect,in_R8);
              pUVar9 = pUVar11;
              if (pUVar13 != (UI_ColorPickPopup_o *)0x0) {
                pUVar12 = UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)pUVar13,(MethodInfo *)0x0);
                textureRect = (System_String_o **)(local_50 + 8);
                pUVar14 = UI_ColorPickPopup__CreateTextureSurface
                                    (pUVar13,pUVar12,"HueImage",(UnityEngine_RectTransform_o **)textureRect,
                                     in_R8);
                (__this->fields)._hueImage = pUVar14;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._hueImage);
                pUVar14 = (__this->fields)._hueImage;
                pUVar9 = (UI_ColorPickPopup_o *)0x0;
                if (pUVar14 != (UnityEngine_UI_RawImage_o *)0x0) {
                  pIVar15 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar14,MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
                  pUVar11 = (UI_ColorPickPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_float_float);
                  textureRect = (System_String_o **)0x0;
                  pUVar9 = pUVar11;
                  System_Action_float__float____ctor();
                  if (pIVar15 != (Il2CppObject *)0x0) {
                    *(undefined4 *)&pIVar15[2].klass = 2;
                    pUVar9 = (UI_ColorPickPopup_o *)&pIVar15[2].monitor;
                    pIVar15[2].monitor = pUVar11;
                    il2cpp_runtime_helper_022b4080(pUVar9,pUVar11);
                    pUVar16 = UI_ColorPickPopup__CreateHandle
                                        (pUVar9,(UnityEngine_RectTransform_o *)local_50._8_8_,
                                         (UnityEngine_Vector2_o)0x4040000041c00000,method_01);
                    (__this->fields)._hueHandle = pUVar16;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._hueHandle);
                    pUVar12 = UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
                    textureRect = (System_String_o **)&(__this->fields)._alphaRect;
                    pUVar11 = (UI_ColorPickPopup_o *)
                              UI_ColorPickPopup__CreateTextureContainer
                                        (pUVar10,pUVar12,"AlphaContainer",260.0,24.0,
                                         (UnityEngine_RectTransform_o **)textureRect,in_R8);
                    pUVar9 = pUVar10;
                    if (pUVar11 != (UI_ColorPickPopup_o *)0x0) {
                      pUVar12 = UnityEngine_GameObject__get_transform
                                          ((UnityEngine_GameObject_o *)pUVar11,(MethodInfo *)0x0);
                      textureRect = (System_String_o **)local_50;
                      pUVar14 = UI_ColorPickPopup__CreateTextureSurface
                                          (pUVar11,pUVar12,"AlphaImage",
                                           (UnityEngine_RectTransform_o **)textureRect,in_R8);
                      (__this->fields)._alphaImage = pUVar14;
                      il2cpp_runtime_helper_022b4080(&(__this->fields)._alphaImage);
                      pUVar14 = (__this->fields)._alphaImage;
                      pUVar9 = (UI_ColorPickPopup_o *)0x0;
                      if (pUVar14 != (UnityEngine_UI_RawImage_o *)0x0) {
                        pIVar15 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar14,MethodInfo_ColorPickDragArea_GetComponent_ColorPickDragArea);
                        pUVar10 = (UI_ColorPickPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_float_float);
                        textureRect = (System_String_o **)0x0;
                        pUVar9 = pUVar10;
                        System_Action_float__float____ctor();
                        if (pIVar15 != (Il2CppObject *)0x0) {
                          *(undefined4 *)&pIVar15[2].klass = 1;
                          pUVar9 = (UI_ColorPickPopup_o *)&pIVar15[2].monitor;
                          pIVar15[2].monitor = pUVar10;
                          il2cpp_runtime_helper_022b4080(pUVar9,pUVar10);
                          pUVar16 = UI_ColorPickPopup__CreateHandle
                                              (pUVar9,(UnityEngine_RectTransform_o *)local_50._0_8_,
                                               (UnityEngine_Vector2_o)0x41a0000040c00000,method_02);
                          (__this->fields)._alphaHandle = pUVar16;
                          il2cpp_runtime_helper_022b4080(&(__this->fields)._alphaHandle);
                          pUVar9 = (UI_ColorPickPopup_o *)
                                   UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                          pUVar8 = UI_ElementFactory__CreateVerticalGroup
                                             ((UnityEngine_Transform_o *)pUVar9,10.0,0,(MethodInfo *)0x0);
                          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar9 = (UI_ColorPickPopup_o *)
                                     UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                            textureRect = &"Prefabs/Elements/ColorPreview";
                            pUVar10 = (UI_ColorPickPopup_o *)
                                      UI_ElementFactory__InstantiateAndBind
                                                ((UnityEngine_Transform_o *)pUVar9,"Prefabs/Elements/ColorPreview",
                                                 (MethodInfo *)0x0);
                            if ((pUVar10 != (UI_ColorPickPopup_o *)0x0) &&
                               (pUVar9 = pUVar10,
                               pIVar15 = UnityEngine_GameObject__GetComponent_object_
                                                   ((UnityEngine_GameObject_o *)pUVar10,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                               pIVar15 != (Il2CppObject *)0x0)) {
                              textureRect = (System_String_o **)pIVar15->klass;
                              (*((Il2CppClass *)textureRect)->vtable[0x24].methodPtr)
                                        (0x42c00000,pIVar15,((Il2CppClass *)textureRect)->vtable[0x24].method)
                              ;
                              pUVar9 = pUVar10;
                              pIVar15 = UnityEngine_GameObject__GetComponent_object_
                                                  ((UnityEngine_GameObject_o *)pUVar10,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                              if (pIVar15 != (Il2CppObject *)0x0) {
                                textureRect = (System_String_o **)pIVar15->klass;
                                (*((Il2CppClass *)textureRect)->vtable[0x26].methodPtr)(0x42600000,pIVar15);
                                pUVar11 = (UI_ColorPickPopup_o *)
                                          UnityEngine_GameObject__get_transform
                                                    ((UnityEngine_GameObject_o *)pUVar10,(MethodInfo *)0x0);
                                pUVar9 = pUVar10;
                                if (pUVar11 != (UI_ColorPickPopup_o *)0x0) {
                                  textureRect = &"Image";
                                  pUVar12 = UnityEngine_Transform__Find
                                                      ((UnityEngine_Transform_o *)pUVar11,"Image",
                                                       (MethodInfo *)0x0);
                                  pUVar9 = pUVar11;
                                  if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar17 = (UnityEngine_UI_Image_o *)
                                              UnityEngine_Component__GetComponent_object_
                                                        ((UnityEngine_Component_o *)pUVar12,MethodInfo_Image_GetComponent_Image);
                                    (__this->fields)._preview = pUVar17;
                                    il2cpp_runtime_helper_022b4080(&(__this->fields)._preview);
                                    pUVar9 = (UI_ColorPickPopup_o *)
                                             UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                                    pSVar4 = (__this->fields)._red;
                                    pUVar18 = (UnityEngine_Events_UnityAction_o *)
                                              il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                    UnityEngine_Events_UnityAction___ctor();
                                    textureRect = (System_String_o **)"R";
                                    pUVar19 = UI_ElementFactory__CreateInputSetting
                                                        ((UnityEngine_Transform_o *)pUVar9,__this_01,
                                                         (Settings_BaseSetting_o *)pSVar4,
                                                         (System_String_o *)"R","",62.0,
                                                         34.0,0,pUVar18,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (System_Func_string__bool__o *)0x0,
                                                         (System_Func_string__string__o *)0x0,
                                                         (MethodInfo *)0x0);
                                    if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar20 = (UI_InputSettingElement_o *)
                                                UnityEngine_GameObject__GetComponent_object_
                                                          (pUVar19,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
                                      (__this->fields)._redInput = pUVar20;
                                      il2cpp_runtime_helper_022b4080(&(__this->fields)._redInput);
                                      pUVar9 = (UI_ColorPickPopup_o *)
                                               UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0)
                                      ;
                                      pSVar4 = (__this->fields)._green;
                                      pUVar18 = (UnityEngine_Events_UnityAction_o *)
                                                il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                      UnityEngine_Events_UnityAction___ctor();
                                      textureRect = (System_String_o **)"G";
                                      pUVar19 = UI_ElementFactory__CreateInputSetting
                                                          ((UnityEngine_Transform_o *)pUVar9,__this_01,
                                                           (Settings_BaseSetting_o *)pSVar4,
                                                           (System_String_o *)"G","",62.0,
                                                           34.0,0,pUVar18,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (System_Func_string__bool__o *)0x0,
                                                           (System_Func_string__string__o *)0x0,
                                                           (MethodInfo *)0x0);
                                      if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar20 = (UI_InputSettingElement_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            (pUVar19,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
                                        (__this->fields)._greenInput = pUVar20;
                                        il2cpp_runtime_helper_022b4080(&(__this->fields)._greenInput);
                                        pUVar9 = (UI_ColorPickPopup_o *)
                                                 UnityEngine_GameObject__get_transform
                                                           (pUVar8,(MethodInfo *)0x0);
                                        pSVar4 = (__this->fields)._blue;
                                        pUVar18 = (UnityEngine_Events_UnityAction_o *)
                                                  il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                        UnityEngine_Events_UnityAction___ctor();
                                        textureRect = (System_String_o **)"B";
                                        pUVar19 = UI_ElementFactory__CreateInputSetting
                                                            ((UnityEngine_Transform_o *)pUVar9,__this_01,
                                                             (Settings_BaseSetting_o *)pSVar4,
                                                             (System_String_o *)"B","",62.0
                                                             ,34.0,0,pUVar18,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             (MethodInfo *)0x0);
                                        if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                                          pUVar20 = (UI_InputSettingElement_o *)
                                                    UnityEngine_GameObject__GetComponent_object_
                                                              (pUVar19,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
                                          (__this->fields)._blueInput = pUVar20;
                                          il2cpp_runtime_helper_022b4080(&(__this->fields)._blueInput);
                                          pUVar9 = (UI_ColorPickPopup_o *)
                                                   UnityEngine_GameObject__get_transform
                                                             (pUVar8,(MethodInfo *)0x0);
                                          pSVar4 = (__this->fields)._alpha;
                                          pUVar18 = (UnityEngine_Events_UnityAction_o *)
                                                    il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                          UnityEngine_Events_UnityAction___ctor();
                                          textureRect = (System_String_o **)"A";
                                          pUVar19 = UI_ElementFactory__CreateInputSetting
                                                              ((UnityEngine_Transform_o *)pUVar9,__this_01,
                                                               (Settings_BaseSetting_o *)pSVar4,
                                                               (System_String_o *)"A","",
                                                               62.0,34.0,0,pUVar18,
                                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                                               (System_Func_string__bool__o *)0x0,
                                                               (System_Func_string__string__o *)0x0,
                                                               (MethodInfo *)0x0);
                                          if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar20 = (UI_InputSettingElement_o *)
                                                      UnityEngine_GameObject__GetComponent_object_
                                                                (pUVar19,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
                                            (__this->fields)._alphaInput = pUVar20;
                                            il2cpp_runtime_helper_022b4080(&(__this->fields)._alphaInput);
                                            pUVar9 = (UI_ColorPickPopup_o *)
                                                     UnityEngine_GameObject__get_transform
                                                               (pUVar8,(MethodInfo *)0x0);
                                            setting = (__this->fields)._hex;
                                            pUVar18 = (UnityEngine_Events_UnityAction_o *)
                                                      il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                            UnityEngine_Events_UnityAction___ctor();
                                            onEndEdit = (UnityEngine_Events_UnityAction_o *)
                                                        il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                            UnityEngine_Events_UnityAction___ctor();
                                            onValidate = (System_Func_string__bool__o *)
                                                         il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
                                            System_Func_object__bool____ctor();
                                            onCleanup = (System_Func_string__string__o *)
                                                        il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
                                            System_Func_object__object____ctor();
                                            textureRect = (System_String_o **)"Hex";
                                            pUVar8 = UI_ElementFactory__CreateInputSetting
                                                               ((UnityEngine_Transform_o *)pUVar9,local_38,
                                                                (Settings_BaseSetting_o *)setting,
                                                                (System_String_o *)"Hex","",
                                                                116.0,34.0,0,pUVar18,onEndEdit,onValidate,
                                                                onCleanup,(MethodInfo *)0x0);
                                            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar20 = (UI_InputSettingElement_o *)
                                                        UnityEngine_GameObject__GetComponent_object_
                                                                  (pUVar8,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
                                              (__this->fields)._hexInput = pUVar20;
                                              il2cpp_runtime_helper_022b4080(&(__this->fields)._hexInput,pUVar20);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorPickPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057ae0f0 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_04347c85:
    pUVar21 = (pUVar9->fields)._svTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppUVar2 = &(pUVar9->fields)._svTexture;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
label_04347d54:
      pUVar21 = (pUVar9->fields)._alphaTexture;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppUVar3 = &(pUVar9->fields)._alphaTexture;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
label_04347e23:
        pUVar14 = (pUVar9->fields)._hueImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pUVar14 = (pUVar9->fields)._hueImage;
          if (pUVar14 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04347f17;
          UnityEngine_UI_RawImage__set_texture
                    (pUVar14,(UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),(MethodInfo *)0x0
                    );
        }
        pUVar14 = (pUVar9->fields)._svImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pUVar14 = (pUVar9->fields)._svImage;
          if (pUVar14 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04347f17;
          UnityEngine_UI_RawImage__set_texture(pUVar14,(UnityEngine_Texture_o *)*ppUVar2,(MethodInfo *)0x0);
        }
        pUVar14 = (pUVar9->fields)._alphaImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        pUVar14 = (pUVar9->fields)._alphaImage;
        if (pUVar14 != (UnityEngine_UI_RawImage_o *)0x0) {
          UnityEngine_UI_RawImage__set_texture(pUVar14,(UnityEngine_Texture_o *)*ppUVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pUVar21 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
        textureRect = (System_String_o **)&g_data_00000004;
        UnityEngine_Texture2D___ctor_4dd9130(pUVar21,0xc0,1,4,0,(MethodInfo *)0x0);
        *ppUVar3 = pUVar21;
        il2cpp_runtime_helper_022b4080(ppUVar3);
        if ((UnityEngine_Texture_o *)*ppUVar3 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar3,1,(MethodInfo *)0x0);
          if ((UnityEngine_Texture_o *)*ppUVar3 != (UnityEngine_Texture_o *)0x0) {
            UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar3,1,(MethodInfo *)0x0);
            pUVar22 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32,0xc0);
            (pUVar9->fields)._alphaPixels = pUVar22;
            il2cpp_runtime_helper_022b4080(&(pUVar9->fields)._alphaPixels);
            goto label_04347e23;
          }
        }
      }
    }
    else {
      pUVar21 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
      textureRect = (System_String_o **)&g_data_00000004;
      UnityEngine_Texture2D___ctor_4dd9130(pUVar21,0xc0,0xc0,4,0,(MethodInfo *)0x0);
      *ppUVar2 = pUVar21;
      il2cpp_runtime_helper_022b4080(ppUVar2);
      if ((UnityEngine_Texture_o *)*ppUVar2 != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0);
        if ((UnityEngine_Texture_o *)*ppUVar2 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0);
          pUVar22 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32,0x9000);
          (pUVar9->fields)._svPixels = pUVar22;
          il2cpp_runtime_helper_022b4080(&(pUVar9->fields)._svPixels);
          goto label_04347d54;
        }
      }
    }
  }
  else {
    pUVar21 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    textureRect = (System_String_o **)&g_data_00000004;
    UnityEngine_Texture2D___ctor_4dd9130(pUVar21,1,0x100,4,0,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) = pUVar21;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ColorPickPopup + 0xb8));
    if ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) != (UnityEngine_Texture_o *)0x0) {
      UnityEngine_Texture__set_wrapMode
                ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),1,(MethodInfo *)0x0);
      if ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_filterMode
                  ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),1,(MethodInfo *)0x0);
        pUVar22 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32);
        if (pUVar22 == (UnityEngine_Color32_array *)0x0) goto label_04347f1c;
        pIVar23 = (Il2CppClass *)0x0;
        do {
          UVar29 = UnityEngine_Color__HSVToRGB_4de5b40
                             ((float)(int)pIVar23 / -255.0 + 1.0,1.0,1.0,1,(MethodInfo *)0x0);
          iVar6 = il2cpp_runtime_helper_03b428b0(UVar29.fields.r,UVar29.fields.b,0);
          textureRect = (System_String_o **)(ulong)(uint)pUVar22->max_length;
          if (textureRect <= pIVar23) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_04347f17;
          }
          (&pUVar22->m_Items[0].fields.rgba)[(long)pIVar23] = iVar6;
          pIVar23 = (Il2CppClass *)((long)&(pIVar23->_1).image + 1);
        } while (pIVar23 != (Il2CppClass *)0x100);
        if ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) !=
            (UnityEngine_Texture2D_o *)0x0) {
          UnityEngine_Texture2D__SetPixels32_4dd9b90
                    ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),pUVar22,
                     (MethodInfo *)0x0);
          if ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) !=
              (UnityEngine_Texture2D_o *)0x0) {
            textureRect = (System_String_o **)0x0;
            UnityEngine_Texture2D__Apply
                      ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),0,1,(MethodInfo *)0x0
                      );
            goto label_04347c85;
          }
        }
      }
    }
  }
label_04347f17:
  il2cpp_runtime_helper_022b2c90();
label_04347f1c:
  pSVar25 = (Settings_ColorSetting_o *)0x0;
  UVar29 = UnityEngine_Color__HSVToRGB_4de5b40(1.0,1.0,1.0,1,(MethodInfo *)0x0);
  pUVar9 = (UI_ColorPickPopup_o *)0x0;
  il2cpp_runtime_helper_03b428b0(UVar29.fields.r,UVar29.fields.b);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae0e7 = '\x01';
  }
  bVar24 = 0;
  pUVar10 = pUVar9;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pMVar26 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)pUVar9,pMVar26);
    (pUVar9->fields)._setting = pSVar25;
    il2cpp_runtime_helper_022b4080(&(pUVar9->fields)._setting,pSVar25);
    pUVar10 = (UI_ColorPickPopup_o *)&(pUVar9->fields)._image;
    (pUVar9->fields)._image = extraout_RDX;
    pUVar17 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    bVar24 = (byte)pUVar17;
    if ((pSVar25 != (Settings_ColorSetting_o *)0x0) &&
       (pSVar4 = (pUVar9->fields)._alpha, pSVar4 != (Settings_IntSetting_o *)0x0)) {
      (pSVar4->fields).MinValue = (pSVar25->fields).MinAlpha;
      (pUVar9->fields)._onChangeColor = (UnityEngine_Events_UnityAction_o *)textureRect;
      il2cpp_runtime_helper_022b4080(&(pUVar9->fields)._onChangeColor);
      bVar24 = (byte)textureRect;
      __this_00 = (pSVar25->fields)._value;
      pUVar10 = (UI_ColorPickPopup_o *)0x0;
      if (__this_00 != (Utility_Color255_o *)0x0) {
        UVar29 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
        rgbColor.fields.b = UVar29.fields.b;
        rgbColor.fields.a = 1.0;
        rgbColor.fields.r = (float)(int)UVar29.fields._0_8_;
        rgbColor.fields.g = (float)(int)((ulong)UVar29.fields._0_8_ >> 0x20);
        UnityEngine_Color__RGBToHSV
                  (rgbColor,&(pUVar9->fields)._hue,&(pUVar9->fields)._saturation,&(pUVar9->fields)._value,
                   (MethodInfo *)0x0);
        fStackY_f4 = UVar29.fields.a;
        fVar27 = (float)(pSVar25->fields).MinAlpha / 255.0;
        if (fVar27 <= fStackY_f4) {
          fVar27 = fStackY_f4;
        }
        fVar28 = 1.0;
        if (fVar27 <= 1.0) {
          fVar28 = fVar27;
        }
        (pUVar9->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar27) & (uint)fVar28);
        *(undefined1 *)((long)&(pUVar9->fields)._suppressInputCallbacks + 3) = 0;
        *(undefined2 *)((long)&(pUVar9->fields)._suppressInputCallbacks + 1) = 0x101;
        pMVar26 = (MethodInfo *)0x1;
        UI_ColorPickPopup__ApplyCurrentColorToUI(pUVar9,1,method_03);
        if (*(char *)((long)&(pUVar9->fields)._suppressInputCallbacks + 1) != '\0') {
          UI_ColorPickPopup__UpdateSVTexture(pUVar9,pMVar26);
          *(undefined1 *)((long)&(pUVar9->fields)._suppressInputCallbacks + 1) = 0;
        }
        if (*(char *)((long)&(pUVar9->fields)._suppressInputCallbacks + 2) == '\0') {
          return;
        }
        UI_ColorPickPopup__UpdateAlphaTexture(pUVar9,pMVar26);
        *(undefined1 *)((long)&(pUVar9->fields)._suppressInputCallbacks + 2) = 0;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pbVar1 = (byte *)((long)&(pUVar10->fields)._suppressInputCallbacks + 1);
  *pbVar1 = *pbVar1 | bVar24;
  pbVar1 = (byte *)((long)&(pUVar10->fields)._suppressInputCallbacks + 2);
  *pbVar1 = *pbVar1 | extraout_DL;
  return;
}


// UI.ColorPickPopup$$OnButtonClick
// il2cpp: void UI_ColorPickPopup__OnButtonClick (UI_ColorPickPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4348bb0

void UI_ColorPickPopup__OnButtonClick(UI_ColorPickPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int iVar1;
  Settings_ColorSetting_o *pSVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Settings_IntSetting_o *pSVar5;
  double dVar6;
  _union_14 _Var7;
  undefined1 auVar8 [16];
  bool_conflict bVar9;
  Utility_Color255_o *pUVar10;
  int32_t *piVar11;
  int iVar12;
  MethodInfo *method_00;
  int32_t a;
  UI_ColorPickPopup_o *__this_00;
  MethodInfo *pMVar13;
  UI_ColorPickPopup_o *__this_01;
  _union_14 *p_Var14;
  int g;
  int b;
  int r;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  UnityEngine_Color_o UVar19;
  _union_14 _Stack_a8;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  _union_14 _Stack_68;
  undefined1 auStack_60 [16];
  double dStack_48;
  UI_ColorPickPopup_o *pUStack_40;
  
  if (g_data_057ae0e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae0e9 = '\x01';
  }
  bVar9 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
label_04348cb1:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pMVar13 = "Save";
  bVar9 = System_String__op_Equality(name,(System_String_o *)"Save",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  __this_00 = (UI_ColorPickPopup_o *)(__this->fields)._setting;
  __this_01 = __this;
  pUVar10 = UI_ColorPickPopup__GetCurrentColor255(__this,pMVar13);
  if (__this_00 != (UI_ColorPickPopup_o *)0x0) {
    __this_01 = __this_00;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)pUVar10,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields)._setting;
    if ((pSVar2 != (Settings_ColorSetting_o *)0x0) &&
       (__this_01 = (UI_ColorPickPopup_o *)(pSVar2->fields)._value, __this_01 != (UI_ColorPickPopup_o *)0x0))
    {
      pUVar3 = (__this->fields)._image;
      UVar19 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
      __this_00 = (UI_ColorPickPopup_o *)0x0;
      if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
        (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                  (UVar19.fields.r,UVar19.fields.b,pUVar3,(pUVar3->klass->vtable)._23_set_color.method);
        pUVar4 = (__this->fields)._onChangeColor;
        if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
        }
        goto label_04348cb1;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_40 = __this_00;
  if (g_data_057ae0f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ae0f5 = '\x01';
  }
  uVar17 = 0;
  uVar18 = 0;
  p_Var14 = (_union_14 *)0x1;
  pMVar13 = (MethodInfo *)0x0;
  UVar19 = UnityEngine_Color__HSVToRGB_4de5b40
                     ((__this_01->fields)._hue,(__this_01->fields)._saturation,(__this_01->fields)._value,1,
                      (MethodInfo *)0x0);
  fVar16 = UVar19.fields.b;
  pSVar2 = (__this_01->fields)._setting;
  auStack_80._8_4_ = uVar17;
  auStack_80._0_8_ = UVar19.fields._8_8_;
  auStack_80._12_4_ = uVar18;
  if (pSVar2 == (Settings_ColorSetting_o *)0x0) {
    pSVar5 = (__this_01->fields)._alpha;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_043492bd;
    piVar11 = &(pSVar5->fields).MinValue;
  }
  else {
    piVar11 = &(pSVar2->fields).MinAlpha;
  }
  fVar16 = (__this_01->fields)._alphaValue;
  fVar15 = (float)*piVar11 / 255.0;
  if ((float)*piVar11 / 255.0 <= fVar16) {
    fVar15 = fVar16;
  }
  auStack_60 = ZEXT416((uint)fVar15);
  uStack_98 = extraout_XMM0_Dc;
  auStack_a0 = (undefined1  [8])UVar19.fields._0_8_;
  uStack_94 = extraout_XMM0_Dd;
  fVar16 = UVar19.fields.r;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    fVar16 = (float)auStack_a0._0_4_;
  }
  _Stack_68._0_4_ = fVar16 * 255.0;
  uVar17 = fVar16 * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar17 = _Stack_68._0_4_;
  }
  p_Var14 = &_Stack_a8;
  auStack_90._0_8_ = (double)(float)uVar17;
  dVar6 = modf((double)(float)uVar17,(double *)p_Var14,pMVar13);
  if (0.0 <= (float)_Stack_68._0_4_) {
    if ((dVar6 == 0.5) && (!NAN(dVar6))) {
      _Stack_68 = _Stack_a8;
      if (((long)(double)_Stack_a8 & 1U) != 0) {
        _Stack_68.genericMethod = (void *)(_Stack_a8.genericMethod + 1.0);
      }
      goto label_04348e4e;
    }
    dVar6 = floor((double)auStack_90._0_8_ + 0.5,(MethodInfo *)p_Var14);
    uVar17 = SUB84(dVar6,0);
    uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
label_04349056:
    _Stack_68._4_4_ = uVar18;
    _Stack_68._0_4_ = uVar17;
    auStack_a0._0_4_ = auStack_a0._4_4_;
  }
  else {
    if ((dVar6 != -0.5) || (NAN(dVar6))) {
      dVar6 = ceil((double)auStack_90._0_8_ + -0.5,(MethodInfo *)p_Var14);
      uVar17 = SUB84(dVar6,0);
      uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
      goto label_04349056;
    }
    _Stack_68 = _Stack_a8;
    if (((long)(double)_Stack_a8 & 1U) != 0) {
      _Stack_68 = (void *)(_Stack_a8.genericMethod + -1.0);
    }
label_04348e4e:
    auStack_a0._0_4_ = auStack_a0._4_4_;
  }
  auStack_a0._4_4_ = auStack_a0._0_4_;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  auStack_a0._0_4_ = (float)auStack_a0._0_4_ * 255.0;
  fVar16 = (float)auStack_a0._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    fVar16 = (float)auStack_a0._0_4_;
  }
  p_Var14 = &_Stack_a8;
  auStack_90._0_8_ = (double)fVar16;
  dVar6 = modf((double)fVar16,(double *)p_Var14,pMVar13);
  auStack_a0 = (undefined1  [8])_Stack_a8;
  if (0.0 <= (float)auStack_a0._0_4_) {
    if ((dVar6 != 0.5) || (NAN(dVar6))) {
      dVar6 = floor((double)auStack_90._0_8_ + 0.5,(MethodInfo *)p_Var14);
      auStack_a0 = (undefined1  [8])dVar6;
    }
    else {
      if (((long)(double)_Stack_a8 & 1U) != 0) {
        auStack_a0 = (undefined1  [8])((double)_Stack_a8 + 1.0);
      }
label_04348f37:
    }
  }
  else if ((dVar6 != -0.5) || (NAN(dVar6))) {
    dVar6 = ceil((double)auStack_90._0_8_ + -0.5,(MethodInfo *)p_Var14);
    auStack_a0 = (undefined1  [8])dVar6;
  }
  else {
    if (((long)(double)_Stack_a8 & 1U) == 0) goto label_04348f37;
    auStack_a0 = (undefined1  [8])((double)_Stack_a8 + -1.0);
  }
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  auStack_80._0_4_ = (float)auStack_80._0_4_ * 255.0;
  fVar16 = (float)auStack_80._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    fVar16 = (float)auStack_80._0_4_;
  }
  fVar15 = 1.0;
  if ((float)auStack_60._0_4_ <= 1.0) {
    fVar15 = (float)auStack_60._0_4_;
  }
  auStack_90 = ZEXT416((uint)fVar15);
  dStack_48 = (double)fVar16;
  p_Var14 = &_Stack_a8;
  dVar6 = modf(dStack_48,(double *)p_Var14,pMVar13);
  _Var7 = _Stack_a8;
  if (0.0 <= (float)auStack_80._0_4_) {
    if ((dVar6 == 0.5) && (!NAN(dVar6))) {
      if (((long)(double)_Stack_a8 & 1U) != 0) {
        _Var7.genericMethod = (void *)(_Stack_a8.genericMethod + 1.0);
      }
      goto label_0434901e;
    }
    dVar6 = floor(dStack_48 + 0.5,(MethodInfo *)p_Var14);
    uVar17 = SUB84(dVar6,0);
    uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
label_043490ff:
    auVar8 = auStack_80;
    auStack_80._4_4_ = uVar18;
    auStack_80._0_4_ = uVar17;
    auStack_80._8_8_ = auVar8._8_8_;
  }
  else {
    if ((dVar6 != -0.5) || (NAN(dVar6))) {
      dVar6 = ceil(dStack_48 + -0.5,(MethodInfo *)p_Var14);
      uVar17 = SUB84(dVar6,0);
      uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
      goto label_043490ff;
    }
    if (((long)(double)_Stack_a8 & 1U) != 0) {
      _Var7 = (void *)(_Stack_a8.genericMethod + -1.0);
    }
label_0434901e:
    auStack_80._0_8_ = _Var7.genericMethod;
  }
  auStack_60._4_4_ = auStack_60._4_4_ & auStack_90._4_4_;
  auStack_60._0_4_ = -(uint)(0.0 <= (float)auStack_60._0_4_) & (uint)((float)auStack_90._0_4_ * 255.0);
  auStack_60._8_4_ = auStack_60._8_4_ & auStack_90._8_4_;
  auStack_60._12_4_ = auStack_60._12_4_ & auStack_90._12_4_;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  p_Var14 = &_Stack_a8;
  auStack_90._0_8_ = (double)(float)auStack_60._0_4_;
  dVar6 = modf((double)(float)auStack_60._0_4_,(double *)p_Var14,pMVar13);
  fVar16 = 0.0;
  uVar17 = _Stack_a8._0_4_;
  uVar18 = _Stack_a8._4_4_;
  if (0.0 <= (float)auStack_60._0_4_) {
    if ((dVar6 != 0.5) || (NAN(dVar6))) {
      dVar6 = floor((double)auStack_90._0_8_ + 0.5,(MethodInfo *)p_Var14);
      uVar17 = SUB84(dVar6,0);
      uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
    }
    else if (((long)(double)_Stack_a8 & 1U) != 0) {
      dVar6 = (double)_Stack_a8 + 1.0;
      pSVar2 = (__this_01->fields)._setting;
      goto joined_r0x043491dd;
    }
label_04349249:
    dVar6 = (double)CONCAT44(uVar18,uVar17);
    pSVar2 = (__this_01->fields)._setting;
  }
  else if ((dVar6 != -0.5) || (NAN(dVar6))) {
    dVar6 = ceil((double)auStack_90._0_8_ + -0.5,(MethodInfo *)p_Var14);
    pSVar2 = (__this_01->fields)._setting;
  }
  else {
    if (((long)(double)_Stack_a8 & 1U) == 0) goto label_04349249;
    dVar6 = (double)_Stack_a8 + -1.0;
    pSVar2 = (__this_01->fields)._setting;
  }
joined_r0x043491dd:
  if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
    r = (int)(double)_Stack_68;
    g = (int)(double)auStack_a0;
    b = (int)(double)auStack_80._0_8_;
    iVar12 = (int)dVar6;
    iVar1 = (pSVar2->fields).MinAlpha;
    a = 0xff;
    if (iVar12 < 0x100) {
      a = iVar12;
    }
    if (iVar12 < iVar1) {
      a = iVar1;
    }
    pUVar10 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar10,r,g,b,a,(MethodInfo *)0x0);
    return;
  }
label_043492bd:
  uVar17 = il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)p_Var14 + 300) = uVar17;
  *(float *)(p_Var14 + 0x26) = fVar16;
  *(undefined1 *)((long)p_Var14 + 0x192) = 1;
  UI_ColorPickPopup__ApplyCurrentColorToUI((UI_ColorPickPopup_o *)p_Var14,1,method_00);
  return;
}


// UI.ColorPickPopup$$OnSVDragged
// il2cpp: void UI_ColorPickPopup__OnSVDragged (UI_ColorPickPopup_o* __this, float normalizedX, float normalizedY, const MethodInfo* method);
// 0x43492d0

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
// 0x4349300

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
// 0x4349330

void UI_ColorPickPopup__OnAlphaDragged
               (UI_ColorPickPopup_o *__this,float normalizedX,float normalizedY,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  int32_t *piVar4;
  Settings_IntSetting_o *pSVar5;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  UI_ColorPickPopup_o *H;
  undefined4 in_XMM0_Db;
  float fVar6;
  undefined4 in_XMM1_Db;
  float fVar7;
  UnityEngine_Color_o rgbColor;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
    pSVar5 = (__this->fields)._alpha;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) {
      il2cpp_runtime_helper_022b2c90(CONCAT44(in_XMM0_Db,normalizedX),CONCAT44(in_XMM1_Db,normalizedY));
      if ((__this->fields)._setting != (Settings_ColorSetting_o *)0x0) {
        return;
      }
      if ((__this->fields)._alpha != (Settings_IntSetting_o *)0x0) {
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      H = __this;
      if (g_data_057ae0ea == '\0') {
        H = (UI_ColorPickPopup_o *)&MethodInfo_Int32_get_Value;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae0ea = '\x01';
      }
      if ((char)(__this->fields)._suppressInputCallbacks != '\0') {
        return;
      }
      pSVar5 = (__this->fields)._red;
      if (((pSVar5 != (Settings_IntSetting_o *)0x0) &&
          (pSVar2 = (__this->fields)._green, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
         (pSVar3 = (__this->fields)._blue, pSVar3 != (Settings_IntSetting_o *)0x0)) {
        rgbColor.fields.r = (float)(pSVar5->fields)._value / 255.0;
        rgbColor.fields.g = (float)(pSVar2->fields)._value / 255.0;
        H = (UI_ColorPickPopup_o *)&(__this->fields)._hue;
        rgbColor.fields.a = 1.0;
        rgbColor.fields.b = (float)(pSVar3->fields)._value / 255.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor,(float *)H,&(__this->fields)._saturation,&(__this->fields)._value,
                   (MethodInfo *)0x0);
        pSVar1 = (__this->fields)._setting;
        if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
          pSVar5 = (__this->fields)._alpha;
          if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_0434952f;
          piVar4 = &(pSVar5->fields).MinValue;
        }
        else {
          pSVar5 = (__this->fields)._alpha;
          if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_0434952f;
          piVar4 = &(pSVar1->fields).MinAlpha;
        }
        fVar6 = (float)(pSVar5->fields)._value / 255.0;
        fVar7 = (float)*piVar4 / 255.0;
        if ((float)*piVar4 / 255.0 <= fVar6) {
          fVar7 = fVar6;
        }
        fVar6 = 1.0;
        if (fVar7 <= 1.0) {
          fVar6 = fVar7;
        }
        (__this->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar6);
        *(undefined2 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0x101;
        UI_ColorPickPopup__ApplyCurrentColorToUI(__this,1,method_00);
        return;
      }
label_0434952f:
      il2cpp_runtime_helper_022b2c90();
      if ((char)(H->fields)._suppressInputCallbacks != '\0') {
        return;
      }
      *(undefined1 *)((long)&(H->fields)._suppressInputCallbacks + 3) = 1;
      return;
    }
    piVar4 = &(pSVar5->fields).MinValue;
  }
  else {
    piVar4 = &(pSVar1->fields).MinAlpha;
  }
  fVar7 = 1.0;
  if (normalizedX <= 1.0) {
    fVar7 = normalizedX;
  }
  (__this->fields)._alphaValue =
       (1.0 - (float)*piVar4 / 255.0) * (float)(-(uint)(0.0 <= normalizedX) & (uint)fVar7) +
       (float)*piVar4 / 255.0;
  *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 2) = 1;
  UI_ColorPickPopup__ApplyCurrentColorToUI(__this,1,in_RDX);
  return;
}


// UI.ColorPickPopup$$OnRGBAInputChanged
// il2cpp: void UI_ColorPickPopup__OnRGBAInputChanged (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4349400

void UI_ColorPickPopup__OnRGBAInputChanged(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  int32_t *piVar5;
  MethodInfo *method_00;
  UI_ColorPickPopup_o *H;
  float fVar6;
  float fVar7;
  UnityEngine_Color_o rgbColor;
  
  H = __this;
  if (g_data_057ae0ea == '\0') {
    H = (UI_ColorPickPopup_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0ea = '\x01';
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
    H = (UI_ColorPickPopup_o *)&(__this->fields)._hue;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.b = (float)(pSVar2->fields)._value / 255.0;
    UnityEngine_Color__RGBToHSV
              (rgbColor,(float *)H,&(__this->fields)._saturation,&(__this->fields)._value,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
      pSVar4 = (__this->fields)._alpha;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_0434952f;
      piVar5 = &(pSVar4->fields).MinValue;
    }
    else {
      pSVar4 = (__this->fields)._alpha;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_0434952f;
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
label_0434952f:
  il2cpp_runtime_helper_022b2c90();
  if ((char)(H->fields)._suppressInputCallbacks != '\0') {
    return;
  }
  *(undefined1 *)((long)&(H->fields)._suppressInputCallbacks + 3) = 1;
  return;
}


// UI.ColorPickPopup$$OnHexInputChanged
// il2cpp: void UI_ColorPickPopup__OnHexInputChanged (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4349540

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
// 0x4349560

void UI_ColorPickPopup__OnHexInputEndEdit(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_ColorSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  UI_InputSettingElement_o *pUVar6;
  UnityEngine_UI_InputField_o *pUVar7;
  System_String_c *pSVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  uint16_t character;
  bool_conflict bVar13;
  System_String_o *pSVar14;
  int32_t *piVar15;
  System_String_o *pSVar16;
  char **ppcVar17;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o *unaff_RBX;
  int iVar18;
  MethodInfo *pMVar19;
  UI_ColorPickPopup_o *__this_00;
  UI_ColorPickPopup_o *pUVar20;
  MethodInfo *pMVar21;
  System_String_Fields SVar22;
  System_String_Fields __this_01;
  float fVar23;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  UnityEngine_Color_o UVar27;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o UVar28;
  UnityEngine_Rect_o UVar29;
  UnityEngine_Color_o color_00;
  float fStack_150;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [24];
  System_String_o *pSStack_90;
  Il2CppMethodPointer pIStack_70;
  float fStack_68;
  float fStack_64;
  System_String_o *pSStack_58;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  char *pcStack_20;
  
  pMVar19 = (MethodInfo *)auStack_38;
  __this_00 = __this;
  if (cRam00000000057ae0eb == '\0') {
    __this_00 = (UI_ColorPickPopup_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    cRam00000000057ae0eb = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((char)(__this->fields)._suppressInputCallbacks != '\0') {
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 3) = 0;
  pSVar3 = (__this->fields)._hex;
  if (pSVar3 != (Settings_StringSetting_o *)0x0) {
    method = (MethodInfo *)(pSVar3->fields)._value;
    auStack_38._0_8_ = (Il2CppMethodPointer)0x0;
    auStack_38._8_8_ = (InvokerMethod)0x0;
    pSVar14 = UI_ColorPickPopup__CleanupHexInput(__this_00,(System_String_o *)method,in_RDX);
    if (pSVar14 != (System_String_o *)0x0) {
      iVar18 = (pSVar14->fields)._stringLength;
      if (((iVar18 != 9) && (iVar18 != 7)) ||
         (bVar13 = UnityEngine_ColorUtility__TryParseHtmlString
                             (pSVar14,(UnityEngine_Color_o *)auStack_38,(MethodInfo *)0x0), method = pMVar19,
         (char)bVar13 == '\0')) {
        UI_ColorPickPopup__SyncInputValuesFromCurrentColor(__this,method);
        return;
      }
      if ((pSVar14->fields)._stringLength == 7) {
        auStack_38._12_4_ = (__this->fields)._alphaValue;
      }
      __this_00 = (UI_ColorPickPopup_o *)&(__this->fields)._hue;
      method = (MethodInfo *)&(__this->fields)._saturation;
      uStack_28 = (InvokerMethod)auStack_38._8_8_;
      pcStack_20 = (char *)0x0;
      UVar27.fields.a = 1.0;
      UVar27.fields.b = (float)auStack_38._8_8_;
      UVar27.fields.r = (float)auStack_38._0_4_;
      UVar27.fields.g = (float)auStack_38._4_4_;
      UnityEngine_Color__RGBToHSV
                (UVar27,(float *)__this_00,(float *)method,&(__this->fields)._value,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._setting;
      if (pSVar4 != (Settings_ColorSetting_o *)0x0) {
        piVar15 = &(pSVar4->fields).MinAlpha;
code_r0x04349664:
        fVar24 = (float)*piVar15 / 255.0;
        if ((float)*piVar15 / 255.0 <= uStack_28._4_4_) {
          fVar24 = uStack_28._4_4_;
        }
        fVar23 = 1.0;
        if (fVar24 <= 1.0) {
          fVar23 = fVar24;
        }
        (__this->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar24) & (uint)fVar23);
        *(undefined2 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0x101;
        pMVar19 = (MethodInfo *)0x1;
        UI_ColorPickPopup__ApplyCurrentColorToUI(__this,1,method_00);
        if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 1) != '\0') {
          UI_ColorPickPopup__UpdateSVTexture(__this,pMVar19);
          *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 1) = 0;
        }
        if (*(char *)((long)&(__this->fields)._suppressInputCallbacks + 2) != '\0') {
          UI_ColorPickPopup__UpdateAlphaTexture(__this,pMVar19);
          *(undefined1 *)((long)&(__this->fields)._suppressInputCallbacks + 2) = 0;
        }
        return;
      }
      pSVar5 = (__this->fields)._alpha;
      unaff_RBX = pSVar14;
      if (pSVar5 != (Settings_IntSetting_o *)0x0) {
        piVar15 = &(pSVar5->fields).MinValue;
        goto code_r0x04349664;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_70 = (Il2CppMethodPointer)0x0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  *(undefined4 *)&method_01->methodPointer = 0x3f800000;
  *(undefined4 *)((long)&method_01->methodPointer + 4) = 0x3f800000;
  *(undefined4 *)&method_01->virtualMethodPointer = 0x3f800000;
  *(undefined4 *)((long)&method_01->virtualMethodPointer + 4) = 0x3f800000;
  pUVar20 = __this_00;
  pSStack_58 = unaff_RBX;
  pSVar14 = UI_ColorPickPopup__CleanupHexInput(__this_00,(System_String_o *)method,method_01);
  if (pSVar14 != (System_String_o *)0x0) {
    iVar18 = (pSVar14->fields)._stringLength;
    if (((iVar18 == 9) || (iVar18 == 7)) &&
       (bVar13 = UnityEngine_ColorUtility__TryParseHtmlString
                           (pSVar14,(UnityEngine_Color_o *)&pIStack_70,(MethodInfo *)0x0),
       (char)bVar13 != '\0')) {
      if ((pSVar14->fields)._stringLength == 7) {
        fStack_64 = (__this_00->fields)._alphaValue;
      }
      method_01->methodPointer = pIStack_70;
      *(float *)&method_01->virtualMethodPointer = fStack_68;
      *(float *)((long)&method_01->virtualMethodPointer + 4) = fStack_64;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_90 = unaff_RBX;
  if (g_data_057ae0ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae0ef = '\x01';
  }
  *(undefined1 *)&(pUVar20->fields)._suppressInputCallbacks = 1;
  uVar25 = 0;
  uVar26 = 0;
  pMVar19 = (MethodInfo *)0x0;
  UVar27 = UnityEngine_Color__HSVToRGB_4de5b40
                     ((pUVar20->fields)._hue,(pUVar20->fields)._saturation,(pUVar20->fields)._value,1,
                      (MethodInfo *)0x0);
  uStack_b0 = extraout_XMM0_Dc;
  auStack_b8 = (undefined1  [8])UVar27.fields._0_8_;
  uStack_ac = extraout_XMM0_Dd;
  auStack_a8._8_4_ = uVar25;
  auStack_a8._0_8_ = UVar27.fields._8_8_;
  auStack_a8._12_4_ = uVar26;
  pSVar4 = (pUVar20->fields)._setting;
  if (pSVar4 == (Settings_ColorSetting_o *)0x0) {
    pSVar5 = (pUVar20->fields)._alpha;
    if (pSVar5 != (Settings_IntSetting_o *)0x0) {
      piVar15 = &(pSVar5->fields).MinValue;
      goto label_04349842;
    }
  }
  else {
    piVar15 = &(pSVar4->fields).MinAlpha;
label_04349842:
    fVar24 = (pUVar20->fields)._alphaValue;
    fVar23 = (float)*piVar15 / 255.0;
    if ((float)*piVar15 / 255.0 <= fVar24) {
      fVar23 = fVar24;
    }
    auStack_c8 = ZEXT416((uint)fVar23);
    pSVar5 = (pUVar20->fields)._red;
    if (g_data_057a7b0a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a7b0a = '\x01';
    }
    auStack_d8._4_4_ = auStack_b8._4_4_;
    auStack_d8._0_4_ = (float)auStack_b8._0_4_ * 255.0;
    uStack_d0 = uStack_b0;
    uStack_cc = uStack_ac;
    fVar24 = (float)auStack_b8._0_4_ * 255.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      fVar24 = (float)auStack_d8._0_4_;
    }
    dVar10 = (double)fVar24;
    pMVar21 = (MethodInfo *)auStack_e0;
    dVar11 = modf(dVar10,(double *)pMVar21,pMVar19);
    uVar25 = auStack_e0._0_4_;
    uVar26 = auStack_e0._4_4_;
    if (0.0 <= (float)auStack_d8._0_4_) {
      if ((dVar11 != 0.5) || (NAN(dVar11))) {
        dVar10 = floor(dVar10 + 0.5,pMVar21);
        uVar25 = SUB84(dVar10,0);
        uVar26 = (undefined4)((ulong)dVar10 >> 0x20);
      }
      else if (((long)(double)auStack_e0 & 1U) != 0) {
        dVar10 = (double)auStack_e0 + 1.0;
        goto joined_r0x04349949;
      }
label_04349962:
      dVar10 = (double)CONCAT44(uVar26,uVar25);
    }
    else if ((dVar11 != -0.5) || (NAN(dVar11))) {
      dVar10 = ceil(dVar10 + -0.5,pMVar21);
    }
    else {
      if (((long)(double)auStack_e0 & 1U) == 0) goto label_04349962;
      dVar10 = (double)auStack_e0 + -1.0;
    }
joined_r0x04349949:
    if (pSVar5 != (Settings_IntSetting_o *)0x0) {
      pMVar19 = (MethodInfo *)(ulong)(uint)(int)dVar10;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar5,(int)dVar10,MethodInfo_Void_set_Value);
      pSVar5 = (pUVar20->fields)._green;
      fVar24 = (float)auStack_b8._4_4_;
      auStack_d8._4_4_ = auStack_b8._4_4_;
      uStack_d0 = uStack_b0;
      uStack_cc = uStack_ac;
      if (g_data_057a7b0a == '\0') {
        auStack_d8._0_4_ = auStack_b8._4_4_;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a7b0a = '\x01';
        fVar24 = (float)auStack_d8._0_4_;
      }
      auStack_d8._0_4_ = fVar24 * 255.0;
      fVar24 = fVar24 * 255.0;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        fVar24 = (float)auStack_d8._0_4_;
      }
      dVar10 = (double)fVar24;
      pMVar21 = (MethodInfo *)auStack_e0;
      dVar11 = modf(dVar10,(double *)pMVar21,pMVar19);
      uVar25 = auStack_e0._0_4_;
      uVar26 = auStack_e0._4_4_;
      if (0.0 <= (float)auStack_d8._0_4_) {
        if ((dVar11 != 0.5) || (NAN(dVar11))) {
          dVar10 = floor(dVar10 + 0.5,pMVar21);
          uVar25 = SUB84(dVar10,0);
          uVar26 = (undefined4)((ulong)dVar10 >> 0x20);
        }
        else if (((long)(double)auStack_e0 & 1U) != 0) {
          dVar10 = (double)auStack_e0 + 1.0;
          goto joined_r0x04349a6a;
        }
label_04349a83:
        dVar10 = (double)CONCAT44(uVar26,uVar25);
      }
      else if ((dVar11 != -0.5) || (NAN(dVar11))) {
        dVar10 = ceil(dVar10 + -0.5,pMVar21);
      }
      else {
        if (((long)(double)auStack_e0 & 1U) == 0) goto label_04349a83;
        dVar10 = (double)auStack_e0 + -1.0;
      }
joined_r0x04349a6a:
      if (pSVar5 != (Settings_IntSetting_o *)0x0) {
        pMVar19 = (MethodInfo *)(ulong)(uint)(int)dVar10;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar5,(int)dVar10,MethodInfo_Void_set_Value)
        ;
        pSVar5 = (pUVar20->fields)._blue;
        if (g_data_057a7b0a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a7b0a = '\x01';
        }
        auStack_d8._0_4_ = (float)auStack_a8._0_4_ * 255.0;
        fVar24 = (float)auStack_a8._0_4_ * 255.0;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          fVar24 = (float)auStack_d8._0_4_;
        }
        dVar10 = (double)fVar24;
        pMVar21 = (MethodInfo *)auStack_e0;
        dVar11 = modf(dVar10,(double *)pMVar21,pMVar19);
        uVar25 = auStack_e0._0_4_;
        uVar26 = auStack_e0._4_4_;
        if (0.0 <= (float)auStack_d8._0_4_) {
          if ((dVar11 != 0.5) || (NAN(dVar11))) {
            dVar10 = floor(dVar10 + 0.5,pMVar21);
            uVar25 = SUB84(dVar10,0);
            uVar26 = (undefined4)((ulong)dVar10 >> 0x20);
          }
          else if (((long)(double)auStack_e0 & 1U) != 0) {
            dVar10 = (double)auStack_e0 + 1.0;
            goto joined_r0x04349b7a;
          }
label_04349b93:
          dVar10 = (double)CONCAT44(uVar26,uVar25);
        }
        else if ((dVar11 != -0.5) || (NAN(dVar11))) {
          dVar10 = ceil(dVar10 + -0.5,pMVar21);
        }
        else {
          if (((long)(double)auStack_e0 & 1U) == 0) goto label_04349b93;
          dVar10 = (double)auStack_e0 + -1.0;
        }
joined_r0x04349b7a:
        if (pSVar5 != (Settings_IntSetting_o *)0x0) {
          pMVar19 = (MethodInfo *)(ulong)(uint)(int)dVar10;
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar5,(int)dVar10,MethodInfo_Void_set_Value);
          pSVar4 = (pUVar20->fields)._setting;
          pSVar5 = (pUVar20->fields)._alpha;
          if (pSVar4 == (Settings_ColorSetting_o *)0x0) {
            if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_0434a004;
            piVar15 = &(pSVar5->fields).MinValue;
          }
          else {
            piVar15 = &(pSVar4->fields).MinAlpha;
          }
          auStack_d8._0_4_ = 1.0;
          if ((float)auStack_c8._0_4_ <= 1.0) {
            auStack_d8._0_4_ = auStack_c8._0_4_;
          }
          auStack_d8._0_4_ = -(uint)(0.0 <= (float)auStack_c8._0_4_) & auStack_d8._0_4_;
          auStack_d8._4_4_ = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          auStack_c8 = ZEXT416((uint)auStack_d8._0_4_);
          if ((float)auStack_d8._0_4_ <= (float)*piVar15 / 255.0) {
            auStack_d8._0_4_ = (float)*piVar15 / 255.0;
          }
          if (g_data_057a7b0a == '\0') {
            _auStack_d8 = ZEXT416((uint)auStack_d8._0_4_);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a7b0a = '\x01';
          }
          auStack_d8._0_4_ = (float)auStack_d8._0_4_ * 255.0;
          fVar24 = (float)auStack_d8._0_4_;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            fVar24 = (float)auStack_d8._0_4_;
          }
          dVar10 = (double)fVar24;
          pMVar21 = (MethodInfo *)auStack_e0;
          dVar11 = modf(dVar10,(double *)pMVar21,pMVar19);
          uVar25 = auStack_e0._0_4_;
          uVar26 = auStack_e0._4_4_;
          if (0.0 <= (float)auStack_d8._0_4_) {
            if ((dVar11 != 0.5) || (NAN(dVar11))) {
              dVar10 = floor(dVar10 + 0.5,pMVar21);
              uVar25 = SUB84(dVar10,0);
              uVar26 = (undefined4)((ulong)dVar10 >> 0x20);
            }
            else if (((long)(double)auStack_e0 & 1U) != 0) {
              dVar10 = (double)auStack_e0 + 1.0;
              goto joined_r0x04349ce9;
            }
label_04349d02:
            dVar10 = (double)CONCAT44(uVar26,uVar25);
          }
          else if ((dVar11 != -0.5) || (NAN(dVar11))) {
            dVar10 = ceil(dVar10 + -0.5,pMVar21);
          }
          else {
            if (((long)(double)auStack_e0 & 1U) == 0) goto label_04349d02;
            dVar10 = (double)auStack_e0 + -1.0;
          }
joined_r0x04349ce9:
          if (pSVar5 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar5,(int)dVar10,MethodInfo_Void_set_Value);
            pUVar6 = (pUVar20->fields)._redInput;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar19 = (MethodInfo *)0x0;
            bVar13 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
label_04349d74:
              pUVar6 = (pUVar20->fields)._greenInput;
              iVar18 = *(int *)(TypeInfo_Object + 0xe4);
            }
            else {
              pUVar6 = (pUVar20->fields)._redInput;
              if ((pUVar6 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar7 = (pUVar6->fields)._inputField, pUVar7 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar7->fields).m_Mesh != '\0') goto label_04349d74;
              (*(pUVar6->klass->vtable)._6_SyncElement.methodPtr)();
              pUVar6 = (pUVar20->fields)._greenInput;
              iVar18 = *(int *)(TypeInfo_Object + 0xe4);
            }
            if (iVar18 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar19 = (MethodInfo *)0x0;
            bVar13 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
label_04349dc7:
              pUVar6 = (pUVar20->fields)._blueInput;
              iVar18 = *(int *)(TypeInfo_Object + 0xe4);
            }
            else {
              pUVar6 = (pUVar20->fields)._greenInput;
              if ((pUVar6 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar7 = (pUVar6->fields)._inputField, pUVar7 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar7->fields).m_Mesh != '\0') goto label_04349dc7;
              (*(pUVar6->klass->vtable)._6_SyncElement.methodPtr)();
              pUVar6 = (pUVar20->fields)._blueInput;
              iVar18 = *(int *)(TypeInfo_Object + 0xe4);
            }
            if (iVar18 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar19 = (MethodInfo *)0x0;
            bVar13 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
label_04349e1a:
              pUVar6 = (pUVar20->fields)._alphaInput;
              iVar18 = *(int *)(TypeInfo_Object + 0xe4);
            }
            else {
              pUVar6 = (pUVar20->fields)._blueInput;
              if ((pUVar6 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar7 = (pUVar6->fields)._inputField, pUVar7 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar7->fields).m_Mesh != '\0') goto label_04349e1a;
              (*(pUVar6->klass->vtable)._6_SyncElement.methodPtr)();
              pUVar6 = (pUVar20->fields)._alphaInput;
              iVar18 = *(int *)(TypeInfo_Object + 0xe4);
            }
            if (iVar18 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar19 = (MethodInfo *)0x0;
            bVar13 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar13 == '\0') {
label_04349e6d:
              cVar2 = *(char *)((long)&(pUVar20->fields)._suppressInputCallbacks + 3);
            }
            else {
              pUVar6 = (pUVar20->fields)._alphaInput;
              if ((pUVar6 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar7 = (pUVar6->fields)._inputField, pUVar7 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar7->fields).m_Mesh != '\0') goto label_04349e6d;
              (*(pUVar6->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar6,(pUVar6->klass->vtable)._6_SyncElement.method);
              cVar2 = *(char *)((long)&(pUVar20->fields)._suppressInputCallbacks + 3);
            }
            if (cVar2 != '\0') goto label_04349ff0;
            auStack_c8._4_4_ = auStack_c8._0_4_;
            auStack_c8._0_4_ = auStack_a8._0_4_;
            auStack_c8._8_4_ = auStack_a8._8_4_;
            auStack_c8._12_4_ = auStack_a8._12_4_;
            pSVar3 = (pUVar20->fields)._hex;
            if (g_data_057ae0f4 == '\0') {
              il2cpp_runtime_helper_023445d0();
              g_data_057ae0f4 = '\x01';
            }
            auVar12 = _auStack_b8;
            color.fields.b = (float)(int)auStack_c8._0_8_;
            color.fields.a = (float)(int)((ulong)auStack_c8._0_8_ >> 0x20);
            color.fields.r = (float)auStack_b8._0_4_;
            color.fields.g = (float)auStack_b8._4_4_;
            _auStack_b8 = auVar12;
            pMVar19 = (MethodInfo *)UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
            pSVar14 = System_String__Concat_3ae5ba0("#",(System_String_o *)pMVar19,(MethodInfo *)0x0)
            ;
            if (pSVar3 != (Settings_StringSetting_o *)0x0) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar14,MethodInfo_Void_set_Value);
              pUVar6 = (pUVar20->fields)._hexInput;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar19 = (MethodInfo *)0x0;
              bVar13 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                 );
              if ((char)bVar13 == '\0') {
label_04349ff0:
                *(undefined1 *)&(pUVar20->fields)._suppressInputCallbacks = 0;
                return;
              }
              pUVar6 = (pUVar20->fields)._hexInput;
              if (pUVar6 != (UI_InputSettingElement_o *)0x0) {
                (*(pUVar6->klass->vtable)._6_SyncElement.methodPtr)
                          (pUVar6,(pUVar6->klass->vtable)._6_SyncElement.method);
                goto label_04349ff0;
              }
            }
          }
        }
      }
    }
  }
label_0434a004:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057ae0ec = '\x01';
  }
  if (pMVar19 == (MethodInfo *)0x0) {
    return;
  }
  pSVar14 = (System_String_o *)0x0;
  pSVar16 = System_String__Trim((System_String_o *)pMVar19,(MethodInfo *)0x0);
  if (pSVar16 != (System_String_o *)0x0) {
    bVar13 = System_String__StartsWith(pSVar16,"#",(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
label_0434a091:
      iVar18 = (pSVar16->fields)._stringLength;
      if (((iVar18 != 0) && (iVar18 < 9)) && (0 < iVar18)) {
        iVar18 = 0;
        do {
          character = System_String__get_Chars(pSVar16,iVar18,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar13 = System_Uri__IsHexDigit(character,(MethodInfo *)0x0);
        } while (((char)bVar13 != '\0') && (iVar18 = iVar18 + 1, iVar18 < (pSVar16->fields)._stringLength));
      }
      return;
    }
    pSVar14 = (System_String_o *)0x1;
    pSVar16 = System_String__Substring(pSVar16,1,(MethodInfo *)0x0);
    if (pSVar16 != (System_String_o *)0x0) goto label_0434a091;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057ae0ed = '\x01';
  }
  if (pSVar14 == (System_String_o *)0x0) {
    return;
  }
  pSVar16 = System_String__Trim(pSVar14,(MethodInfo *)0x0);
  if (pSVar16 != (System_String_o *)0x0) {
    pSVar16 = System_String__ToUpperInvariant(pSVar16,(MethodInfo *)0x0);
    pSVar14 = pSVar16;
    bVar13 = System_String__op_Equality
                       (pSVar16,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      return;
    }
    if ((pSVar16 != (System_String_o *)0x0) &&
       ((bVar13 = System_String__StartsWith(pSVar16,"#",(MethodInfo *)0x0), (char)bVar13 != '\0' ||
        (pSVar14 = "#",
        pSVar16 = System_String__Concat_3ae5ba0("#",pSVar16,(MethodInfo *)0x0),
        pSVar16 != (System_String_o *)0x0)))) {
      if ((pSVar16->fields)._stringLength < 10) {
        return;
      }
      System_String__Substring_3af8da0(pSVar16,0,9,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f3 = '\x01';
  }
  pSVar8 = pSVar14[8].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    pSVar8 = pSVar14[9].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pSVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      SVar22._stringLength = 0;
      SVar22._firstChar = 0;
      SVar22._6_2_ = 0;
      if (pSVar14[8].klass == (System_String_c *)0x0) goto label_0434a4fe;
      UVar28 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_RectTransform_o *)pSVar14[8].klass,(MethodInfo *)0x0);
      SVar22._stringLength = 0;
      SVar22._firstChar = 0;
      SVar22._6_2_ = 0;
      if (pSVar14[8].klass == (System_String_c *)0x0) goto label_0434a4fe;
      UVar29 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_RectTransform_o *)pSVar14[8].klass,(MethodInfo *)0x0);
      SVar22._stringLength = 0;
      SVar22._firstChar = 0;
      SVar22._6_2_ = 0;
      if (pSVar14[9].klass == (System_String_c *)0x0) goto label_0434a4fe;
      fStack_150 = UVar28.fields.m_Width;
      fVar24 = UVar29.fields.m_Height + -6.0;
      uVar1 = *(undefined8 *)((long)&pSVar14[0xc].monitor + 4);
      value.fields.y = (float)((ulong)uVar1 >> 0x20) * fVar24 + fVar24 * -0.5;
      value.fields.x = (float)uVar1 * (fStack_150 + -6.0) + (fStack_150 + -6.0) * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)pSVar14[9].klass,value,(MethodInfo *)0x0);
    }
  }
  pUVar9 = pSVar14[8].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    pUVar9 = pSVar14[9].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      SVar22._stringLength = 0;
      SVar22._firstChar = 0;
      SVar22._6_2_ = 0;
      if (pSVar14[8].monitor == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      UVar28 = UnityEngine_RectTransform__get_rect(pSVar14[8].monitor,(MethodInfo *)0x0);
      SVar22._stringLength = 0;
      SVar22._firstChar = 0;
      SVar22._6_2_ = 0;
      if (pSVar14[9].monitor == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      fVar24 = UVar28.fields.m_Height + -6.0;
      UnityEngine_RectTransform__set_anchoredPosition
                (pSVar14[9].monitor,
                 (UnityEngine_Vector2_o)
                 ((ulong)(uint)((1.0 - *(float *)&pSVar14[0xc].monitor) * fVar24 + fVar24 * -0.5) << 0x20),
                 (MethodInfo *)0x0);
    }
  }
  SVar22 = pSVar14[8].fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return;
  }
  SVar22 = pSVar14[9].fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return;
  }
  SVar22 = pSVar14[8].fields;
  if (SVar22 != (System_String_Fields)0x0) {
    UVar28 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)SVar22,(MethodInfo *)0x0);
    if (pSVar14[7].monitor == (void *)0x0) {
      if (pSVar14[0xe].klass == (System_String_c *)0x0) goto label_0434a4fe;
      ppcVar17 = &((pSVar14[0xe].klass)->_1).namespaze;
    }
    else {
      ppcVar17 = (char **)((long)pSVar14[7].monitor + 0x20);
    }
    fVar24 = (float)*(int *)ppcVar17 / 255.0;
    if ((fVar24 != 1.0) || (NAN(fVar24))) {
      fVar24 = (*(float *)&pSVar14[0xc].fields._firstChar - fVar24) / (1.0 - fVar24);
      if (0.0 <= fVar24) {
        fVar23 = 1.0;
        if (fVar24 <= 1.0) {
          fVar23 = fVar24;
        }
        __this_01 = pSVar14[9].fields;
        if (__this_01 == (System_String_Fields)0x0) {
          SVar22._stringLength = 0;
          SVar22._firstChar = 0;
          SVar22._6_2_ = 0;
          goto label_0434a4fe;
        }
        goto label_0434a4cb;
      }
    }
    fVar23 = 0.0;
    __this_01 = pSVar14[9].fields;
    SVar22._stringLength = 0;
    SVar22._firstChar = 0;
    SVar22._6_2_ = 0;
    if (__this_01 != (System_String_Fields)0x0) {
label_0434a4cb:
      fVar24 = UVar28.fields.m_Width + -6.0;
      value_00.fields.y = 0.0;
      value_00.fields.x = fVar24 * fVar23 + fVar24 * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)__this_01,value_00,(MethodInfo *)0x0);
      return;
    }
  }
label_0434a4fe:
  il2cpp_runtime_helper_022b2c90();
  UVar27 = UnityEngine_Color__HSVToRGB_4de5b40
                     (*(float *)((long)SVar22 + 0x128),*(float *)((long)SVar22 + 300),
                      *(float *)&((UnityEngine_RectTransform_Fields *)((long)SVar22 + 0x130))->m_CachedPtr,1,
                      (MethodInfo *)0x0);
  fVar24 = UVar27.fields.b;
  fVar23 = UVar27.fields.a;
  if ((*(void **)((long)SVar22 + 0xb0) == (void *)0x0) &&
     (((UnityEngine_RectTransform_o *)((long)SVar22 + 0x150))->klass == (UnityEngine_RectTransform_c *)0x0)) {
    uVar1 = il2cpp_runtime_helper_022b2c90(UVar27.fields.r);
    if (g_data_057ae0f4 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ae0f4 = '\x01';
    }
    color_00.fields.a = fVar23;
    color_00.fields.b = fVar24;
    color_00.fields.r = (float)(int)uVar1;
    color_00.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
    pSVar14 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    System_String__Concat_3ae5ba0("#",pSVar14,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ColorPickPopup$$IsHexInputValid
// il2cpp: bool UI_ColorPickPopup__IsHexInputValid (UI_ColorPickPopup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x434a010

bool_conflict
UI_ColorPickPopup__IsHexInputValid(UI_ColorPickPopup_o *__this,System_String_o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_String_c *pSVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_RectTransform_c *pUVar4;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  uint16_t character;
  bool_conflict bVar5;
  bool_conflict bVar6;
  bool_conflict extraout_EAX;
  System_String_o *pSVar7;
  System_String_o *a;
  char **ppcVar8;
  int iVar9;
  System_String_o *pSVar10;
  System_String_Fields SVar11;
  System_String_Fields __this_00;
  float fVar12;
  float fVar13;
  UnityEngine_Rect_o UVar14;
  UnityEngine_Rect_o UVar15;
  UnityEngine_Color_o UVar16;
  float fStack_68;
  
  if (g_data_057ae0ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057ae0ec = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    return 0;
  }
  pSVar10 = (System_String_o *)0x0;
  pSVar7 = System_String__Trim(value,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_o *)0x0) {
    bVar5 = System_String__StartsWith(pSVar7,"#",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
label_0434a091:
      iVar9 = (pSVar7->fields)._stringLength;
      bVar5 = 0;
      if (((iVar9 != 0) && (iVar9 < 9)) && (bVar5 = 1, 0 < iVar9)) {
        iVar9 = 0;
        do {
          character = System_String__get_Chars(pSVar7,iVar9,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = System_Uri__IsHexDigit(character,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            return 0;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (pSVar7->fields)._stringLength);
      }
      return bVar5;
    }
    pSVar10 = (System_String_o *)0x1;
    pSVar7 = System_String__Substring(pSVar7,1,(MethodInfo *)0x0);
    if (pSVar7 != (System_String_o *)0x0) goto label_0434a091;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057ae0ed = '\x01';
  }
  if (pSVar10 == (System_String_o *)0x0) {
    pSVar7 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    goto label_0434a200;
  }
  pSVar7 = System_String__Trim(pSVar10,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_o *)0x0) {
    a = System_String__ToUpperInvariant(pSVar7,(MethodInfo *)0x0);
    pSVar10 = a;
    bVar5 = System_String__op_Equality
                      (a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    pSVar7 = "#FFFFFF";
    if ((char)bVar5 != '\0') {
label_0434a200:
      return (bool_conflict)pSVar7;
    }
    if ((a != (System_String_o *)0x0) &&
       ((bVar5 = System_String__StartsWith(a,"#",(MethodInfo *)0x0), (char)bVar5 != '\0' ||
        (pSVar10 = "#", a = System_String__Concat_3ae5ba0("#",a,(MethodInfo *)0x0),
        a != (System_String_o *)0x0)))) {
      pSVar7 = a;
      if (9 < (a->fields)._stringLength) {
        pSVar10 = System_String__Substring_3af8da0(a,0,9,(MethodInfo *)0x0);
        return (bool_conflict)pSVar10;
      }
      goto label_0434a200;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f3 = '\x01';
  }
  pSVar2 = pSVar10[8].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pSVar2 = pSVar10[9].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      SVar11._stringLength = 0;
      SVar11._firstChar = 0;
      SVar11._6_2_ = 0;
      if (pSVar10[8].klass == (System_String_c *)0x0) goto label_0434a4fe;
      UVar14 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_RectTransform_o *)pSVar10[8].klass,(MethodInfo *)0x0);
      SVar11._stringLength = 0;
      SVar11._firstChar = 0;
      SVar11._6_2_ = 0;
      if (pSVar10[8].klass == (System_String_c *)0x0) goto label_0434a4fe;
      UVar15 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_RectTransform_o *)pSVar10[8].klass,(MethodInfo *)0x0);
      SVar11._stringLength = 0;
      SVar11._firstChar = 0;
      SVar11._6_2_ = 0;
      if (pSVar10[9].klass == (System_String_c *)0x0) goto label_0434a4fe;
      fStack_68 = UVar14.fields.m_Width;
      fVar13 = UVar15.fields.m_Height + -6.0;
      uVar1 = *(undefined8 *)((long)&pSVar10[0xc].monitor + 4);
      value_00.fields.y = (float)((ulong)uVar1 >> 0x20) * fVar13 + fVar13 * -0.5;
      value_00.fields.x = (float)uVar1 * (fStack_68 + -6.0) + (fStack_68 + -6.0) * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)pSVar10[9].klass,value_00,(MethodInfo *)0x0);
    }
  }
  pUVar3 = pSVar10[8].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = pSVar10[9].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      SVar11._stringLength = 0;
      SVar11._firstChar = 0;
      SVar11._6_2_ = 0;
      if (pSVar10[8].monitor == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      UVar14 = UnityEngine_RectTransform__get_rect(pSVar10[8].monitor,(MethodInfo *)0x0);
      SVar11._stringLength = 0;
      SVar11._firstChar = 0;
      SVar11._6_2_ = 0;
      if (pSVar10[9].monitor == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      fVar13 = UVar14.fields.m_Height + -6.0;
      UnityEngine_RectTransform__set_anchoredPosition
                (pSVar10[9].monitor,
                 (UnityEngine_Vector2_o)
                 ((ulong)(uint)((1.0 - *(float *)&pSVar10[0xc].monitor) * fVar13 + fVar13 * -0.5) << 0x20),
                 (MethodInfo *)0x0);
    }
  }
  SVar11 = pSVar10[8].fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return bVar5;
  }
  SVar11 = pSVar10[9].fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return bVar5;
  }
  SVar11 = pSVar10[8].fields;
  if (SVar11 != (System_String_Fields)0x0) {
    UVar14 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)SVar11,(MethodInfo *)0x0);
    if (pSVar10[7].monitor == (void *)0x0) {
      if (pSVar10[0xe].klass == (System_String_c *)0x0) goto label_0434a4fe;
      ppcVar8 = &((pSVar10[0xe].klass)->_1).namespaze;
    }
    else {
      ppcVar8 = (char **)((long)pSVar10[7].monitor + 0x20);
    }
    fVar13 = (float)*(int *)ppcVar8 / 255.0;
    if ((fVar13 != 1.0) || (NAN(fVar13))) {
      fVar13 = (*(float *)&pSVar10[0xc].fields._firstChar - fVar13) / (1.0 - fVar13);
      if (0.0 <= fVar13) {
        fVar12 = 1.0;
        if (fVar13 <= 1.0) {
          fVar12 = fVar13;
        }
        __this_00 = pSVar10[9].fields;
        if (__this_00 == (System_String_Fields)0x0) {
          SVar11._stringLength = 0;
          SVar11._firstChar = 0;
          SVar11._6_2_ = 0;
          goto label_0434a4fe;
        }
        goto label_0434a4cb;
      }
    }
    fVar12 = 0.0;
    __this_00 = pSVar10[9].fields;
    SVar11._stringLength = 0;
    SVar11._firstChar = 0;
    SVar11._6_2_ = 0;
    if (__this_00 != (System_String_Fields)0x0) {
label_0434a4cb:
      fVar13 = UVar14.fields.m_Width + -6.0;
      value_01.fields.y = 0.0;
      value_01.fields.x = fVar13 * fVar12 + fVar13 * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)__this_00,value_01,(MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
label_0434a4fe:
  il2cpp_runtime_helper_022b2c90();
  UVar16 = UnityEngine_Color__HSVToRGB_4de5b40
                     (*(float *)((long)SVar11 + 0x128),*(float *)((long)SVar11 + 300),
                      *(float *)&((UnityEngine_RectTransform_Fields *)((long)SVar11 + 0x130))->m_CachedPtr,1,
                      (MethodInfo *)0x0);
  fVar13 = UVar16.fields.b;
  fVar12 = UVar16.fields.a;
  if (*(void **)((long)SVar11 + 0xb0) == (void *)0x0) {
    pUVar4 = ((UnityEngine_RectTransform_o *)((long)SVar11 + 0x150))->klass;
    if (pUVar4 == (UnityEngine_RectTransform_c *)0x0) {
      uVar1 = il2cpp_runtime_helper_022b2c90(UVar16.fields.r);
      if (g_data_057ae0f4 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057ae0f4 = '\x01';
      }
      UVar16.fields.a = fVar12;
      UVar16.fields.b = fVar13;
      UVar16.fields.r = (float)(int)uVar1;
      UVar16.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
      pSVar10 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar16,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat_3ae5ba0("#",pSVar10,(MethodInfo *)0x0);
      return (bool_conflict)pSVar10;
    }
    iVar9 = (int)&(pUVar4->_1).namespaze;
  }
  else {
    iVar9 = (int)*(void **)((long)SVar11 + 0xb0) + 0x20;
  }
  return iVar9;
}


// UI.ColorPickPopup$$CleanupHexInput
// il2cpp: System_String_o* UI_ColorPickPopup__CleanupHexInput (UI_ColorPickPopup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x434a110

System_String_o *
UI_ColorPickPopup__CleanupHexInput(UI_ColorPickPopup_o *__this,System_String_o *value,MethodInfo *method)

{
  undefined8 uVar1;
  System_String_c *pSVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_RectTransform_c *pUVar4;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  char **ppcVar7;
  System_String_o *extraout_RAX;
  System_String_Fields SVar8;
  System_String_Fields __this_00;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Color_o UVar13;
  float fStack_40;
  
  if (g_data_057ae0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057ae0ed = '\x01';
  }
  if (value == (System_String_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar6 = System_String__Trim(value,(MethodInfo *)0x0);
  if (pSVar6 != (System_String_o *)0x0) {
    pSVar6 = System_String__ToUpperInvariant(pSVar6,(MethodInfo *)0x0);
    value = pSVar6;
    bVar5 = System_String__op_Equality
                      (pSVar6,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return "#FFFFFF";
    }
    if ((pSVar6 != (System_String_o *)0x0) &&
       ((bVar5 = System_String__StartsWith(pSVar6,"#",(MethodInfo *)0x0), (char)bVar5 != '\0' ||
        (value = "#", pSVar6 = System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0),
        pSVar6 != (System_String_o *)0x0)))) {
      if ((pSVar6->fields)._stringLength < 10) {
        return pSVar6;
      }
      pSVar6 = System_String__Substring_3af8da0(pSVar6,0,9,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f3 = '\x01';
  }
  pSVar2 = value[8].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pSVar2 = value[9].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      SVar8._stringLength = 0;
      SVar8._firstChar = 0;
      SVar8._6_2_ = 0;
      if (value[8].klass == (System_String_c *)0x0) goto label_0434a4fe;
      UVar11 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_RectTransform_o *)value[8].klass,(MethodInfo *)0x0);
      SVar8._stringLength = 0;
      SVar8._firstChar = 0;
      SVar8._6_2_ = 0;
      if (value[8].klass == (System_String_c *)0x0) goto label_0434a4fe;
      UVar12 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_RectTransform_o *)value[8].klass,(MethodInfo *)0x0);
      SVar8._stringLength = 0;
      SVar8._firstChar = 0;
      SVar8._6_2_ = 0;
      if (value[9].klass == (System_String_c *)0x0) goto label_0434a4fe;
      fStack_40 = UVar11.fields.m_Width;
      fVar10 = UVar12.fields.m_Height + -6.0;
      uVar1 = *(undefined8 *)((long)&value[0xc].monitor + 4);
      value_00.fields.y = (float)((ulong)uVar1 >> 0x20) * fVar10 + fVar10 * -0.5;
      value_00.fields.x = (float)uVar1 * (fStack_40 + -6.0) + (fStack_40 + -6.0) * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)value[9].klass,value_00,(MethodInfo *)0x0);
    }
  }
  pUVar3 = value[8].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = value[9].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      SVar8._stringLength = 0;
      SVar8._firstChar = 0;
      SVar8._6_2_ = 0;
      if (value[8].monitor == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      UVar11 = UnityEngine_RectTransform__get_rect(value[8].monitor,(MethodInfo *)0x0);
      SVar8._stringLength = 0;
      SVar8._firstChar = 0;
      SVar8._6_2_ = 0;
      if (value[9].monitor == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      fVar10 = UVar11.fields.m_Height + -6.0;
      UnityEngine_RectTransform__set_anchoredPosition
                (value[9].monitor,
                 (UnityEngine_Vector2_o)
                 ((ulong)(uint)((1.0 - *(float *)&value[0xc].monitor) * fVar10 + fVar10 * -0.5) << 0x20),
                 (MethodInfo *)0x0);
    }
  }
  SVar8 = value[8].fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return (System_String_o *)CONCAT44(extraout_var,bVar5);
  }
  SVar8 = value[9].fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return (System_String_o *)CONCAT44(extraout_var_00,bVar5);
  }
  SVar8 = value[8].fields;
  if (SVar8 != (System_String_Fields)0x0) {
    UVar11 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)SVar8,(MethodInfo *)0x0);
    if (value[7].monitor == (void *)0x0) {
      if (value[0xe].klass == (System_String_c *)0x0) goto label_0434a4fe;
      ppcVar7 = &((value[0xe].klass)->_1).namespaze;
    }
    else {
      ppcVar7 = (char **)((long)value[7].monitor + 0x20);
    }
    fVar10 = (float)*(int *)ppcVar7 / 255.0;
    if ((fVar10 != 1.0) || (NAN(fVar10))) {
      fVar10 = (*(float *)&value[0xc].fields._firstChar - fVar10) / (1.0 - fVar10);
      if (0.0 <= fVar10) {
        fVar9 = 1.0;
        if (fVar10 <= 1.0) {
          fVar9 = fVar10;
        }
        __this_00 = value[9].fields;
        if (__this_00 == (System_String_Fields)0x0) {
          SVar8._stringLength = 0;
          SVar8._firstChar = 0;
          SVar8._6_2_ = 0;
          goto label_0434a4fe;
        }
        goto label_0434a4cb;
      }
    }
    fVar9 = 0.0;
    __this_00 = value[9].fields;
    SVar8._stringLength = 0;
    SVar8._firstChar = 0;
    SVar8._6_2_ = 0;
    if (__this_00 != (System_String_Fields)0x0) {
label_0434a4cb:
      fVar10 = UVar11.fields.m_Width + -6.0;
      value_01.fields.y = 0.0;
      value_01.fields.x = fVar10 * fVar9 + fVar10 * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)__this_00,value_01,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
label_0434a4fe:
  il2cpp_runtime_helper_022b2c90();
  UVar13 = UnityEngine_Color__HSVToRGB_4de5b40
                     (*(float *)((long)SVar8 + 0x128),*(float *)((long)SVar8 + 300),
                      *(float *)&((UnityEngine_RectTransform_Fields *)((long)SVar8 + 0x130))->m_CachedPtr,1,
                      (MethodInfo *)0x0);
  fVar10 = UVar13.fields.b;
  fVar9 = UVar13.fields.a;
  if (*(void **)((long)SVar8 + 0xb0) == (void *)0x0) {
    pUVar4 = ((UnityEngine_RectTransform_o *)((long)SVar8 + 0x150))->klass;
    if (pUVar4 == (UnityEngine_RectTransform_c *)0x0) {
      uVar1 = il2cpp_runtime_helper_022b2c90(UVar13.fields.r);
      if (g_data_057ae0f4 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057ae0f4 = '\x01';
      }
      UVar13.fields.a = fVar9;
      UVar13.fields.b = fVar10;
      UVar13.fields.r = (float)(int)uVar1;
      UVar13.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
      pSVar6 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar13,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_3ae5ba0("#",pSVar6,(MethodInfo *)0x0);
      return pSVar6;
    }
    pSVar6 = (System_String_o *)&(pUVar4->_1).namespaze;
  }
  else {
    pSVar6 = (System_String_o *)((long)*(void **)((long)SVar8 + 0xb0) + 0x20);
  }
  return pSVar6;
}


// UI.ColorPickPopup$$TryParseCompleteHexColor
// il2cpp: bool UI_ColorPickPopup__TryParseCompleteHexColor (UI_ColorPickPopup_o* __this, System_String_o* input, UnityEngine_Color_o* color, const MethodInfo* method);
// 0x4349700

bool_conflict
UI_ColorPickPopup__TryParseCompleteHexColor
          (UI_ColorPickPopup_o *__this,System_String_o *input,UnityEngine_Color_o *color,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  UI_InputSettingElement_o *pUVar5;
  Settings_StringSetting_o *__this_00;
  System_String_c *pSVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_RectTransform_c *pUVar8;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  uint16_t character;
  bool_conflict bVar12;
  uint uVar13;
  bool_conflict bVar14;
  bool_conflict extraout_EAX;
  System_String_o *pSVar15;
  int32_t *piVar16;
  MethodInfo *method_00;
  System_String_o *pSVar18;
  System_String_o *a;
  char **ppcVar19;
  int iVar20;
  UI_ColorPickPopup_o *pUVar21;
  MethodInfo *pMVar22;
  System_String_Fields SVar23;
  System_String_Fields __this_01;
  float fVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  UnityEngine_Color_o UVar28;
  UnityEngine_Rect_o UVar29;
  UnityEngine_Rect_o UVar30;
  UnityEngine_Color_o color_00;
  float fStack_118;
  Il2CppMethodPointer pIStack_a8;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [24];
  UnityEngine_Color_Fields local_38;
  UnityEngine_UI_InputField_o *pUVar17;
  
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.0;
  (color->fields).r = 1.0;
  (color->fields).g = 1.0;
  (color->fields).b = 1.0;
  (color->fields).a = 1.0;
  pUVar21 = __this;
  pSVar15 = UI_ColorPickPopup__CleanupHexInput(__this,input,(MethodInfo *)color);
  if (pSVar15 != (System_String_o *)0x0) {
    iVar20 = (pSVar15->fields)._stringLength;
    if ((iVar20 == 9) || (iVar20 == 7)) {
      bVar14 = 0;
      bVar12 = UnityEngine_ColorUtility__TryParseHtmlString
                         (pSVar15,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        if ((pSVar15->fields)._stringLength == 7) {
          local_38.a = (__this->fields)._alphaValue;
        }
        (color->fields).r = local_38.r;
        (color->fields).g = local_38.g;
        (color->fields).b = local_38.b;
        (color->fields).a = local_38.a;
        bVar14 = 1;
      }
    }
    else {
      bVar14 = 0;
    }
    return bVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae0ef = '\x01';
  }
  *(undefined1 *)&(pUVar21->fields)._suppressInputCallbacks = 1;
  uVar26 = 0;
  uVar27 = 0;
  method_00 = (MethodInfo *)0x0;
  UVar28 = UnityEngine_Color__HSVToRGB_4de5b40
                     ((pUVar21->fields)._hue,(pUVar21->fields)._saturation,(pUVar21->fields)._value,1,
                      (MethodInfo *)0x0);
  uStack_78 = extraout_XMM0_Dc;
  auStack_80 = (undefined1  [8])UVar28.fields._0_8_;
  uStack_74 = extraout_XMM0_Dd;
  auStack_70._8_4_ = uVar26;
  auStack_70._0_8_ = UVar28.fields._8_8_;
  auStack_70._12_4_ = uVar27;
  pSVar3 = (pUVar21->fields)._setting;
  if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
    pSVar4 = (pUVar21->fields)._alpha;
    if (pSVar4 != (Settings_IntSetting_o *)0x0) {
      piVar16 = &(pSVar4->fields).MinValue;
      goto label_04349842;
    }
  }
  else {
    piVar16 = &(pSVar3->fields).MinAlpha;
label_04349842:
    fVar25 = (pUVar21->fields)._alphaValue;
    fVar24 = (float)*piVar16 / 255.0;
    if ((float)*piVar16 / 255.0 <= fVar25) {
      fVar24 = fVar25;
    }
    auStack_90 = ZEXT416((uint)fVar24);
    pSVar4 = (pUVar21->fields)._red;
    if (g_data_057a7b0a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a7b0a = '\x01';
    }
    auStack_a0._4_4_ = auStack_80._4_4_;
    auStack_a0._0_4_ = (float)auStack_80._0_4_ * 255.0;
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    fVar25 = (float)auStack_80._0_4_ * 255.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      fVar25 = (float)auStack_a0._0_4_;
    }
    dVar9 = (double)fVar25;
    pMVar22 = (MethodInfo *)&pIStack_a8;
    dVar10 = modf(dVar9,(double *)pMVar22,method_00);
    uVar26 = SUB84(pIStack_a8,0);
    uVar27 = (undefined4)((ulong)pIStack_a8 >> 0x20);
    if (0.0 <= (float)auStack_a0._0_4_) {
      if ((dVar10 != 0.5) || (NAN(dVar10))) {
        dVar9 = floor(dVar9 + 0.5,pMVar22);
        uVar26 = SUB84(dVar9,0);
        uVar27 = (undefined4)((ulong)dVar9 >> 0x20);
      }
      else if (((long)(double)pIStack_a8 & 1U) != 0) {
        dVar9 = (double)pIStack_a8 + 1.0;
        goto joined_r0x04349949;
      }
label_04349962:
      dVar9 = (double)CONCAT44(uVar27,uVar26);
    }
    else if ((dVar10 != -0.5) || (NAN(dVar10))) {
      dVar9 = ceil(dVar9 + -0.5,pMVar22);
    }
    else {
      if (((long)(double)pIStack_a8 & 1U) == 0) goto label_04349962;
      dVar9 = (double)pIStack_a8 + -1.0;
    }
joined_r0x04349949:
    if (pSVar4 != (Settings_IntSetting_o *)0x0) {
      method_00 = (MethodInfo *)(ulong)(uint)(int)dVar9;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar4,(int)dVar9,MethodInfo_Void_set_Value);
      pSVar4 = (pUVar21->fields)._green;
      fVar25 = (float)auStack_80._4_4_;
      auStack_a0._4_4_ = auStack_80._4_4_;
      uStack_98 = uStack_78;
      uStack_94 = uStack_74;
      if (g_data_057a7b0a == '\0') {
        auStack_a0._0_4_ = auStack_80._4_4_;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a7b0a = '\x01';
        fVar25 = (float)auStack_a0._0_4_;
      }
      auStack_a0._0_4_ = fVar25 * 255.0;
      fVar25 = fVar25 * 255.0;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        fVar25 = (float)auStack_a0._0_4_;
      }
      dVar9 = (double)fVar25;
      pMVar22 = (MethodInfo *)&pIStack_a8;
      dVar10 = modf(dVar9,(double *)pMVar22,method_00);
      uVar26 = SUB84(pIStack_a8,0);
      uVar27 = (undefined4)((ulong)pIStack_a8 >> 0x20);
      if (0.0 <= (float)auStack_a0._0_4_) {
        if ((dVar10 != 0.5) || (NAN(dVar10))) {
          dVar9 = floor(dVar9 + 0.5,pMVar22);
          uVar26 = SUB84(dVar9,0);
          uVar27 = (undefined4)((ulong)dVar9 >> 0x20);
        }
        else if (((long)(double)pIStack_a8 & 1U) != 0) {
          dVar9 = (double)pIStack_a8 + 1.0;
          goto joined_r0x04349a6a;
        }
label_04349a83:
        dVar9 = (double)CONCAT44(uVar27,uVar26);
      }
      else if ((dVar10 != -0.5) || (NAN(dVar10))) {
        dVar9 = ceil(dVar9 + -0.5,pMVar22);
      }
      else {
        if (((long)(double)pIStack_a8 & 1U) == 0) goto label_04349a83;
        dVar9 = (double)pIStack_a8 + -1.0;
      }
joined_r0x04349a6a:
      if (pSVar4 != (Settings_IntSetting_o *)0x0) {
        method_00 = (MethodInfo *)(ulong)(uint)(int)dVar9;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar4,(int)dVar9,MethodInfo_Void_set_Value);
        pSVar4 = (pUVar21->fields)._blue;
        if (g_data_057a7b0a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a7b0a = '\x01';
        }
        auStack_a0._0_4_ = (float)auStack_70._0_4_ * 255.0;
        fVar25 = (float)auStack_70._0_4_ * 255.0;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          fVar25 = (float)auStack_a0._0_4_;
        }
        dVar9 = (double)fVar25;
        pMVar22 = (MethodInfo *)&pIStack_a8;
        dVar10 = modf(dVar9,(double *)pMVar22,method_00);
        uVar26 = SUB84(pIStack_a8,0);
        uVar27 = (undefined4)((ulong)pIStack_a8 >> 0x20);
        if (0.0 <= (float)auStack_a0._0_4_) {
          if ((dVar10 != 0.5) || (NAN(dVar10))) {
            dVar9 = floor(dVar9 + 0.5,pMVar22);
            uVar26 = SUB84(dVar9,0);
            uVar27 = (undefined4)((ulong)dVar9 >> 0x20);
          }
          else if (((long)(double)pIStack_a8 & 1U) != 0) {
            dVar9 = (double)pIStack_a8 + 1.0;
            goto joined_r0x04349b7a;
          }
label_04349b93:
          dVar9 = (double)CONCAT44(uVar27,uVar26);
        }
        else if ((dVar10 != -0.5) || (NAN(dVar10))) {
          dVar9 = ceil(dVar9 + -0.5,pMVar22);
        }
        else {
          if (((long)(double)pIStack_a8 & 1U) == 0) goto label_04349b93;
          dVar9 = (double)pIStack_a8 + -1.0;
        }
joined_r0x04349b7a:
        if (pSVar4 != (Settings_IntSetting_o *)0x0) {
          method_00 = (MethodInfo *)(ulong)(uint)(int)dVar9;
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar4,(int)dVar9,MethodInfo_Void_set_Value);
          pSVar3 = (pUVar21->fields)._setting;
          pSVar4 = (pUVar21->fields)._alpha;
          if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
            if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_0434a004;
            piVar16 = &(pSVar4->fields).MinValue;
          }
          else {
            piVar16 = &(pSVar3->fields).MinAlpha;
          }
          auStack_a0._0_4_ = 1.0;
          if ((float)auStack_90._0_4_ <= 1.0) {
            auStack_a0._0_4_ = auStack_90._0_4_;
          }
          auStack_a0._0_4_ = -(uint)(0.0 <= (float)auStack_90._0_4_) & auStack_a0._0_4_;
          auStack_a0._4_4_ = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          auStack_90 = ZEXT416((uint)auStack_a0._0_4_);
          if ((float)auStack_a0._0_4_ <= (float)*piVar16 / 255.0) {
            auStack_a0._0_4_ = (float)*piVar16 / 255.0;
          }
          if (g_data_057a7b0a == '\0') {
            _auStack_a0 = ZEXT416((uint)auStack_a0._0_4_);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a7b0a = '\x01';
          }
          auStack_a0._0_4_ = (float)auStack_a0._0_4_ * 255.0;
          fVar25 = (float)auStack_a0._0_4_;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            fVar25 = (float)auStack_a0._0_4_;
          }
          dVar9 = (double)fVar25;
          pMVar22 = (MethodInfo *)&pIStack_a8;
          dVar10 = modf(dVar9,(double *)pMVar22,method_00);
          uVar26 = SUB84(pIStack_a8,0);
          uVar27 = (undefined4)((ulong)pIStack_a8 >> 0x20);
          if (0.0 <= (float)auStack_a0._0_4_) {
            if ((dVar10 != 0.5) || (NAN(dVar10))) {
              dVar9 = floor(dVar9 + 0.5,pMVar22);
              uVar26 = SUB84(dVar9,0);
              uVar27 = (undefined4)((ulong)dVar9 >> 0x20);
            }
            else if (((long)(double)pIStack_a8 & 1U) != 0) {
              dVar9 = (double)pIStack_a8 + 1.0;
              goto joined_r0x04349ce9;
            }
label_04349d02:
            dVar9 = (double)CONCAT44(uVar27,uVar26);
          }
          else if ((dVar10 != -0.5) || (NAN(dVar10))) {
            dVar9 = ceil(dVar9 + -0.5,pMVar22);
          }
          else {
            if (((long)(double)pIStack_a8 & 1U) == 0) goto label_04349d02;
            dVar9 = (double)pIStack_a8 + -1.0;
          }
joined_r0x04349ce9:
          if (pSVar4 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar4,(int)dVar9,MethodInfo_Void_set_Value);
            pUVar5 = (pUVar21->fields)._redInput;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x0;
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
label_04349d74:
              pUVar5 = (pUVar21->fields)._greenInput;
              iVar20 = *(int *)(TypeInfo_Object + 0xe4);
            }
            else {
              pUVar5 = (pUVar21->fields)._redInput;
              if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar17 = (pUVar5->fields)._inputField, pUVar17 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar17->fields).m_Mesh != '\0') goto label_04349d74;
              (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)();
              pUVar5 = (pUVar21->fields)._greenInput;
              iVar20 = *(int *)(TypeInfo_Object + 0xe4);
            }
            if (iVar20 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x0;
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
label_04349dc7:
              pUVar5 = (pUVar21->fields)._blueInput;
              iVar20 = *(int *)(TypeInfo_Object + 0xe4);
            }
            else {
              pUVar5 = (pUVar21->fields)._greenInput;
              if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar17 = (pUVar5->fields)._inputField, pUVar17 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar17->fields).m_Mesh != '\0') goto label_04349dc7;
              (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)();
              pUVar5 = (pUVar21->fields)._blueInput;
              iVar20 = *(int *)(TypeInfo_Object + 0xe4);
            }
            if (iVar20 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x0;
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
label_04349e1a:
              pUVar5 = (pUVar21->fields)._alphaInput;
              iVar20 = *(int *)(TypeInfo_Object + 0xe4);
            }
            else {
              pUVar5 = (pUVar21->fields)._blueInput;
              if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar17 = (pUVar5->fields)._inputField, pUVar17 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar17->fields).m_Mesh != '\0') goto label_04349e1a;
              (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)();
              pUVar5 = (pUVar21->fields)._alphaInput;
              iVar20 = *(int *)(TypeInfo_Object + 0xe4);
            }
            if (iVar20 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x0;
            uVar13 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            pUVar17 = (UnityEngine_UI_InputField_o *)(ulong)uVar13;
            if ((char)uVar13 == '\0') {
label_04349e6d:
              bVar12 = (bool_conflict)pUVar17;
              cVar2 = *(char *)((long)&(pUVar21->fields)._suppressInputCallbacks + 3);
            }
            else {
              pUVar5 = (pUVar21->fields)._alphaInput;
              if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar17 = (pUVar5->fields)._inputField, pUVar17 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar17->fields).m_Mesh != '\0') goto label_04349e6d;
              bVar12 = (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)
                                 (pUVar5,(pUVar5->klass->vtable)._6_SyncElement.method);
              cVar2 = *(char *)((long)&(pUVar21->fields)._suppressInputCallbacks + 3);
            }
            if (cVar2 != '\0') goto label_04349ff0;
            auStack_90._4_4_ = auStack_90._0_4_;
            auStack_90._0_4_ = auStack_70._0_4_;
            auStack_90._8_4_ = auStack_70._8_4_;
            auStack_90._12_4_ = auStack_70._12_4_;
            __this_00 = (pUVar21->fields)._hex;
            if (g_data_057ae0f4 == '\0') {
              il2cpp_runtime_helper_023445d0();
              g_data_057ae0f4 = '\x01';
            }
            auVar11 = _auStack_80;
            UVar28.fields.b = (float)(int)auStack_90._0_8_;
            UVar28.fields.a = (float)(int)((ulong)auStack_90._0_8_ >> 0x20);
            UVar28.fields.r = (float)auStack_80._0_4_;
            UVar28.fields.g = (float)auStack_80._4_4_;
            _auStack_80 = auVar11;
            method_00 = (MethodInfo *)UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar28,(MethodInfo *)0x0);
            pSVar15 = System_String__Concat_3ae5ba0
                                ("#",(System_String_o *)method_00,(MethodInfo *)0x0);
            if (__this_00 != (Settings_StringSetting_o *)0x0) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)pSVar15,MethodInfo_Void_set_Value);
              pUVar5 = (pUVar21->fields)._hexInput;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (MethodInfo *)0x0;
              bVar12 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                 );
              if ((char)bVar12 == '\0') {
label_04349ff0:
                *(undefined1 *)&(pUVar21->fields)._suppressInputCallbacks = 0;
                return bVar12;
              }
              pUVar5 = (pUVar21->fields)._hexInput;
              if (pUVar5 != (UI_InputSettingElement_o *)0x0) {
                bVar12 = (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)
                                   (pUVar5,(pUVar5->klass->vtable)._6_SyncElement.method);
                goto label_04349ff0;
              }
            }
          }
        }
      }
    }
  }
label_0434a004:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057ae0ec = '\x01';
  }
  if (method_00 == (MethodInfo *)0x0) {
    return 0;
  }
  pSVar15 = (System_String_o *)0x0;
  pSVar18 = System_String__Trim((System_String_o *)method_00,(MethodInfo *)0x0);
  if (pSVar18 != (System_String_o *)0x0) {
    bVar12 = System_String__StartsWith(pSVar18,"#",(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
label_0434a091:
      iVar20 = (pSVar18->fields)._stringLength;
      bVar12 = 0;
      if (((iVar20 != 0) && (iVar20 < 9)) && (bVar12 = 1, 0 < iVar20)) {
        iVar20 = 0;
        do {
          character = System_String__get_Chars(pSVar18,iVar20,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar14 = System_Uri__IsHexDigit(character,(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            return 0;
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < (pSVar18->fields)._stringLength);
      }
      return bVar12;
    }
    pSVar15 = (System_String_o *)0x1;
    pSVar18 = System_String__Substring(pSVar18,1,(MethodInfo *)0x0);
    if (pSVar18 != (System_String_o *)0x0) goto label_0434a091;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057ae0ed = '\x01';
  }
  if (pSVar15 == (System_String_o *)0x0) {
    pSVar18 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    goto label_0434a200;
  }
  pSVar18 = System_String__Trim(pSVar15,(MethodInfo *)0x0);
  if (pSVar18 != (System_String_o *)0x0) {
    a = System_String__ToUpperInvariant(pSVar18,(MethodInfo *)0x0);
    pSVar15 = a;
    bVar12 = System_String__op_Equality
                       (a,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    pSVar18 = "#FFFFFF";
    if ((char)bVar12 != '\0') {
label_0434a200:
      return (bool_conflict)pSVar18;
    }
    if ((a != (System_String_o *)0x0) &&
       ((bVar12 = System_String__StartsWith(a,"#",(MethodInfo *)0x0), (char)bVar12 != '\0' ||
        (pSVar15 = "#", a = System_String__Concat_3ae5ba0("#",a,(MethodInfo *)0x0),
        a != (System_String_o *)0x0)))) {
      pSVar18 = a;
      if (9 < (a->fields)._stringLength) {
        pSVar15 = System_String__Substring_3af8da0(a,0,9,(MethodInfo *)0x0);
        return (bool_conflict)pSVar15;
      }
      goto label_0434a200;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f3 = '\x01';
  }
  pSVar6 = pSVar15[8].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    pSVar6 = pSVar15[9].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      SVar23._stringLength = 0;
      SVar23._firstChar = 0;
      SVar23._6_2_ = 0;
      if (pSVar15[8].klass == (System_String_c *)0x0) goto label_0434a4fe;
      UVar29 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_RectTransform_o *)pSVar15[8].klass,(MethodInfo *)0x0);
      SVar23._stringLength = 0;
      SVar23._firstChar = 0;
      SVar23._6_2_ = 0;
      if (pSVar15[8].klass == (System_String_c *)0x0) goto label_0434a4fe;
      UVar30 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_RectTransform_o *)pSVar15[8].klass,(MethodInfo *)0x0);
      SVar23._stringLength = 0;
      SVar23._firstChar = 0;
      SVar23._6_2_ = 0;
      if (pSVar15[9].klass == (System_String_c *)0x0) goto label_0434a4fe;
      fStack_118 = UVar29.fields.m_Width;
      fVar25 = UVar30.fields.m_Height + -6.0;
      uVar1 = *(undefined8 *)((long)&pSVar15[0xc].monitor + 4);
      value.fields.y = (float)((ulong)uVar1 >> 0x20) * fVar25 + fVar25 * -0.5;
      value.fields.x = (float)uVar1 * (fStack_118 + -6.0) + (fStack_118 + -6.0) * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)pSVar15[9].klass,value,(MethodInfo *)0x0);
    }
  }
  pUVar7 = pSVar15[8].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    pUVar7 = pSVar15[9].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      SVar23._stringLength = 0;
      SVar23._firstChar = 0;
      SVar23._6_2_ = 0;
      if (pSVar15[8].monitor == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      UVar29 = UnityEngine_RectTransform__get_rect(pSVar15[8].monitor,(MethodInfo *)0x0);
      SVar23._stringLength = 0;
      SVar23._firstChar = 0;
      SVar23._6_2_ = 0;
      if (pSVar15[9].monitor == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      fVar25 = UVar29.fields.m_Height + -6.0;
      UnityEngine_RectTransform__set_anchoredPosition
                (pSVar15[9].monitor,
                 (UnityEngine_Vector2_o)
                 ((ulong)(uint)((1.0 - *(float *)&pSVar15[0xc].monitor) * fVar25 + fVar25 * -0.5) << 0x20),
                 (MethodInfo *)0x0);
    }
  }
  SVar23 = pSVar15[8].fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return bVar12;
  }
  SVar23 = pSVar15[9].fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return bVar12;
  }
  SVar23 = pSVar15[8].fields;
  if (SVar23 != (System_String_Fields)0x0) {
    UVar29 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)SVar23,(MethodInfo *)0x0);
    if (pSVar15[7].monitor == (void *)0x0) {
      if (pSVar15[0xe].klass == (System_String_c *)0x0) goto label_0434a4fe;
      ppcVar19 = &((pSVar15[0xe].klass)->_1).namespaze;
    }
    else {
      ppcVar19 = (char **)((long)pSVar15[7].monitor + 0x20);
    }
    fVar25 = (float)*(int *)ppcVar19 / 255.0;
    if ((fVar25 != 1.0) || (NAN(fVar25))) {
      fVar25 = (*(float *)&pSVar15[0xc].fields._firstChar - fVar25) / (1.0 - fVar25);
      if (0.0 <= fVar25) {
        fVar24 = 1.0;
        if (fVar25 <= 1.0) {
          fVar24 = fVar25;
        }
        __this_01 = pSVar15[9].fields;
        if (__this_01 == (System_String_Fields)0x0) {
          SVar23._stringLength = 0;
          SVar23._firstChar = 0;
          SVar23._6_2_ = 0;
          goto label_0434a4fe;
        }
        goto label_0434a4cb;
      }
    }
    fVar24 = 0.0;
    __this_01 = pSVar15[9].fields;
    SVar23._stringLength = 0;
    SVar23._firstChar = 0;
    SVar23._6_2_ = 0;
    if (__this_01 != (System_String_Fields)0x0) {
label_0434a4cb:
      fVar25 = UVar29.fields.m_Width + -6.0;
      value_00.fields.y = 0.0;
      value_00.fields.x = fVar25 * fVar24 + fVar25 * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)__this_01,value_00,(MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
label_0434a4fe:
  il2cpp_runtime_helper_022b2c90();
  UVar28 = UnityEngine_Color__HSVToRGB_4de5b40
                     (*(float *)((long)SVar23 + 0x128),*(float *)((long)SVar23 + 300),
                      *(float *)&((UnityEngine_RectTransform_Fields *)((long)SVar23 + 0x130))->m_CachedPtr,1,
                      (MethodInfo *)0x0);
  fVar25 = UVar28.fields.b;
  fVar24 = UVar28.fields.a;
  if (*(void **)((long)SVar23 + 0xb0) == (void *)0x0) {
    pUVar8 = ((UnityEngine_RectTransform_o *)((long)SVar23 + 0x150))->klass;
    if (pUVar8 == (UnityEngine_RectTransform_c *)0x0) {
      uVar1 = il2cpp_runtime_helper_022b2c90(UVar28.fields.r);
      if (g_data_057ae0f4 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057ae0f4 = '\x01';
      }
      color_00.fields.a = fVar24;
      color_00.fields.b = fVar25;
      color_00.fields.r = (float)(int)uVar1;
      color_00.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
      pSVar15 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
      pSVar15 = System_String__Concat_3ae5ba0("#",pSVar15,(MethodInfo *)0x0);
      return (bool_conflict)pSVar15;
    }
    iVar20 = (int)&(pUVar8->_1).namespaze;
  }
  else {
    iVar20 = (int)*(void **)((long)SVar23 + 0xb0) + 0x20;
  }
  return iVar20;
}


// UI.ColorPickPopup$$ApplyCurrentColorToUI
// il2cpp: void UI_ColorPickPopup__ApplyCurrentColorToUI (UI_ColorPickPopup_o* __this, bool syncInputs, const MethodInfo* method);
// 0x4348100

void UI_ColorPickPopup__ApplyCurrentColorToUI
               (UI_ColorPickPopup_o *__this,bool_conflict syncInputs,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_UI_Image_c *pUVar2;
  bool_conflict bVar3;
  undefined4 in_register_00000034;
  MethodInfo *pMVar4;
  UI_ColorPickPopup_o *__this_00;
  UnityEngine_Color_o UVar5;
  float local_38;
  float local_28;
  
  pMVar4 = (MethodInfo *)CONCAT44(in_register_00000034,syncInputs);
  if (g_data_057ae0ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0ee = '\x01';
  }
  UI_ColorPickPopup__UpdatePickerHandles(__this,pMVar4);
  __this_00 = (UI_ColorPickPopup_o *)0x1;
  pMVar4 = (MethodInfo *)0x0;
  UVar5 = UnityEngine_Color__HSVToRGB_4de5b40
                    ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,1,
                     (MethodInfo *)0x0);
  if (((__this->fields)._setting == (Settings_ColorSetting_o *)0x0) &&
     ((__this->fields)._alpha == (Settings_IntSetting_o *)0x0)) {
label_04348237:
    il2cpp_runtime_helper_022b2c90();
    if (*(char *)((long)&(__this_00->fields)._suppressInputCallbacks + 1) != '\0') {
      UI_ColorPickPopup__UpdateSVTexture(__this_00,pMVar4);
      *(undefined1 *)((long)&(__this_00->fields)._suppressInputCallbacks + 1) = 0;
    }
    if (*(char *)((long)&(__this_00->fields)._suppressInputCallbacks + 2) != '\0') {
      UI_ColorPickPopup__UpdateAlphaTexture(__this_00,pMVar4);
      *(undefined1 *)((long)&(__this_00->fields)._suppressInputCallbacks + 2) = 0;
    }
    return;
  }
  pUVar1 = (__this->fields)._preview;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._preview;
    __this_00 = (UI_ColorPickPopup_o *)0x0;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_04348237;
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
// 0x43497a0

void UI_ColorPickPopup__SyncInputValuesFromCurrentColor(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  UI_InputSettingElement_o *pUVar5;
  UnityEngine_UI_InputField_o *pUVar6;
  Settings_StringSetting_o *__this_00;
  System_String_c *pSVar7;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  uint16_t character;
  bool_conflict bVar12;
  int32_t *piVar13;
  MethodInfo *method_00;
  System_String_o *pSVar14;
  char **ppcVar15;
  int iVar16;
  System_String_o *pSVar17;
  MethodInfo *pMVar18;
  System_String_Fields SVar19;
  System_String_Fields __this_01;
  float fVar20;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  UnityEngine_Color_o UVar24;
  UnityEngine_Rect_o UVar25;
  UnityEngine_Rect_o UVar26;
  UnityEngine_Color_o color;
  float fStack_e0;
  Il2CppMethodPointer local_70;
  undefined1 local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [24];
  
  if (g_data_057ae0ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae0ef = '\x01';
  }
  *(undefined1 *)&(__this->fields)._suppressInputCallbacks = 1;
  uVar22 = 0;
  uVar23 = 0;
  method_00 = (MethodInfo *)0x0;
  UVar24 = UnityEngine_Color__HSVToRGB_4de5b40
                     ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,1,
                      (MethodInfo *)0x0);
  uStack_40 = extraout_XMM0_Dc;
  local_48 = (undefined1  [8])UVar24.fields._0_8_;
  uStack_3c = extraout_XMM0_Dd;
  local_38._8_4_ = uVar22;
  local_38._0_8_ = UVar24.fields._8_8_;
  local_38._12_4_ = uVar23;
  pSVar3 = (__this->fields)._setting;
  if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
    pSVar4 = (__this->fields)._alpha;
    if (pSVar4 != (Settings_IntSetting_o *)0x0) {
      piVar13 = &(pSVar4->fields).MinValue;
      goto label_04349842;
    }
  }
  else {
    piVar13 = &(pSVar3->fields).MinAlpha;
label_04349842:
    fVar21 = (__this->fields)._alphaValue;
    fVar20 = (float)*piVar13 / 255.0;
    if ((float)*piVar13 / 255.0 <= fVar21) {
      fVar20 = fVar21;
    }
    local_58 = ZEXT416((uint)fVar20);
    pSVar4 = (__this->fields)._red;
    if (g_data_057a7b0a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a7b0a = '\x01';
    }
    local_68._4_4_ = local_48._4_4_;
    local_68._0_4_ = (float)local_48._0_4_ * 255.0;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    fVar21 = (float)local_48._0_4_ * 255.0;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      fVar21 = (float)local_68._0_4_;
    }
    dVar9 = (double)fVar21;
    pMVar18 = (MethodInfo *)&local_70;
    dVar10 = modf(dVar9,(double *)pMVar18,method_00);
    uVar22 = SUB84(local_70,0);
    uVar23 = (undefined4)((ulong)local_70 >> 0x20);
    if (0.0 <= (float)local_68._0_4_) {
      if ((dVar10 != 0.5) || (NAN(dVar10))) {
        dVar9 = floor(dVar9 + 0.5,pMVar18);
        uVar22 = SUB84(dVar9,0);
        uVar23 = (undefined4)((ulong)dVar9 >> 0x20);
      }
      else if (((long)(double)local_70 & 1U) != 0) {
        dVar9 = (double)local_70 + 1.0;
        goto joined_r0x04349949;
      }
label_04349962:
      dVar9 = (double)CONCAT44(uVar23,uVar22);
    }
    else if ((dVar10 != -0.5) || (NAN(dVar10))) {
      dVar9 = ceil(dVar9 + -0.5,pMVar18);
    }
    else {
      if (((long)(double)local_70 & 1U) == 0) goto label_04349962;
      dVar9 = (double)local_70 + -1.0;
    }
joined_r0x04349949:
    if (pSVar4 != (Settings_IntSetting_o *)0x0) {
      method_00 = (MethodInfo *)(ulong)(uint)(int)dVar9;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar4,(int)dVar9,MethodInfo_Void_set_Value);
      pSVar4 = (__this->fields)._green;
      fVar21 = (float)local_48._4_4_;
      local_68._4_4_ = local_48._4_4_;
      uStack_60 = uStack_40;
      uStack_5c = uStack_3c;
      if (g_data_057a7b0a == '\0') {
        local_68._0_4_ = local_48._4_4_;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a7b0a = '\x01';
        fVar21 = (float)local_68._0_4_;
      }
      local_68._0_4_ = fVar21 * 255.0;
      fVar21 = fVar21 * 255.0;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        fVar21 = (float)local_68._0_4_;
      }
      dVar9 = (double)fVar21;
      pMVar18 = (MethodInfo *)&local_70;
      dVar10 = modf(dVar9,(double *)pMVar18,method_00);
      uVar22 = SUB84(local_70,0);
      uVar23 = (undefined4)((ulong)local_70 >> 0x20);
      if (0.0 <= (float)local_68._0_4_) {
        if ((dVar10 != 0.5) || (NAN(dVar10))) {
          dVar9 = floor(dVar9 + 0.5,pMVar18);
          uVar22 = SUB84(dVar9,0);
          uVar23 = (undefined4)((ulong)dVar9 >> 0x20);
        }
        else if (((long)(double)local_70 & 1U) != 0) {
          dVar9 = (double)local_70 + 1.0;
          goto joined_r0x04349a6a;
        }
label_04349a83:
        dVar9 = (double)CONCAT44(uVar23,uVar22);
      }
      else if ((dVar10 != -0.5) || (NAN(dVar10))) {
        dVar9 = ceil(dVar9 + -0.5,pMVar18);
      }
      else {
        if (((long)(double)local_70 & 1U) == 0) goto label_04349a83;
        dVar9 = (double)local_70 + -1.0;
      }
joined_r0x04349a6a:
      if (pSVar4 != (Settings_IntSetting_o *)0x0) {
        method_00 = (MethodInfo *)(ulong)(uint)(int)dVar9;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar4,(int)dVar9,MethodInfo_Void_set_Value);
        pSVar4 = (__this->fields)._blue;
        if (g_data_057a7b0a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a7b0a = '\x01';
        }
        local_68._0_4_ = (float)local_38._0_4_ * 255.0;
        fVar21 = (float)local_38._0_4_ * 255.0;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          fVar21 = (float)local_68._0_4_;
        }
        dVar9 = (double)fVar21;
        pMVar18 = (MethodInfo *)&local_70;
        dVar10 = modf(dVar9,(double *)pMVar18,method_00);
        uVar22 = SUB84(local_70,0);
        uVar23 = (undefined4)((ulong)local_70 >> 0x20);
        if (0.0 <= (float)local_68._0_4_) {
          if ((dVar10 != 0.5) || (NAN(dVar10))) {
            dVar9 = floor(dVar9 + 0.5,pMVar18);
            uVar22 = SUB84(dVar9,0);
            uVar23 = (undefined4)((ulong)dVar9 >> 0x20);
          }
          else if (((long)(double)local_70 & 1U) != 0) {
            dVar9 = (double)local_70 + 1.0;
            goto joined_r0x04349b7a;
          }
label_04349b93:
          dVar9 = (double)CONCAT44(uVar23,uVar22);
        }
        else if ((dVar10 != -0.5) || (NAN(dVar10))) {
          dVar9 = ceil(dVar9 + -0.5,pMVar18);
        }
        else {
          if (((long)(double)local_70 & 1U) == 0) goto label_04349b93;
          dVar9 = (double)local_70 + -1.0;
        }
joined_r0x04349b7a:
        if (pSVar4 != (Settings_IntSetting_o *)0x0) {
          method_00 = (MethodInfo *)(ulong)(uint)(int)dVar9;
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar4,(int)dVar9,MethodInfo_Void_set_Value);
          pSVar3 = (__this->fields)._setting;
          pSVar4 = (__this->fields)._alpha;
          if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
            if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_0434a004;
            piVar13 = &(pSVar4->fields).MinValue;
          }
          else {
            piVar13 = &(pSVar3->fields).MinAlpha;
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
          if ((float)local_68._0_4_ <= (float)*piVar13 / 255.0) {
            local_68._0_4_ = (float)*piVar13 / 255.0;
          }
          if (g_data_057a7b0a == '\0') {
            _local_68 = ZEXT416((uint)local_68._0_4_);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a7b0a = '\x01';
          }
          local_68._0_4_ = (float)local_68._0_4_ * 255.0;
          fVar21 = (float)local_68._0_4_;
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            fVar21 = (float)local_68._0_4_;
          }
          dVar9 = (double)fVar21;
          pMVar18 = (MethodInfo *)&local_70;
          dVar10 = modf(dVar9,(double *)pMVar18,method_00);
          uVar22 = SUB84(local_70,0);
          uVar23 = (undefined4)((ulong)local_70 >> 0x20);
          if (0.0 <= (float)local_68._0_4_) {
            if ((dVar10 != 0.5) || (NAN(dVar10))) {
              dVar9 = floor(dVar9 + 0.5,pMVar18);
              uVar22 = SUB84(dVar9,0);
              uVar23 = (undefined4)((ulong)dVar9 >> 0x20);
            }
            else if (((long)(double)local_70 & 1U) != 0) {
              dVar9 = (double)local_70 + 1.0;
              goto joined_r0x04349ce9;
            }
label_04349d02:
            dVar9 = (double)CONCAT44(uVar23,uVar22);
          }
          else if ((dVar10 != -0.5) || (NAN(dVar10))) {
            dVar9 = ceil(dVar9 + -0.5,pMVar18);
          }
          else {
            if (((long)(double)local_70 & 1U) == 0) goto label_04349d02;
            dVar9 = (double)local_70 + -1.0;
          }
joined_r0x04349ce9:
          if (pSVar4 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar4,(int)dVar9,MethodInfo_Void_set_Value);
            pUVar5 = (__this->fields)._redInput;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x0;
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
label_04349d74:
              pUVar5 = (__this->fields)._greenInput;
              iVar16 = *(int *)(TypeInfo_Object + 0xe4);
            }
            else {
              pUVar5 = (__this->fields)._redInput;
              if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar6 = (pUVar5->fields)._inputField, pUVar6 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar6->fields).m_Mesh != '\0') goto label_04349d74;
              (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)();
              pUVar5 = (__this->fields)._greenInput;
              iVar16 = *(int *)(TypeInfo_Object + 0xe4);
            }
            if (iVar16 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x0;
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
label_04349dc7:
              pUVar5 = (__this->fields)._blueInput;
              iVar16 = *(int *)(TypeInfo_Object + 0xe4);
            }
            else {
              pUVar5 = (__this->fields)._greenInput;
              if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar6 = (pUVar5->fields)._inputField, pUVar6 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar6->fields).m_Mesh != '\0') goto label_04349dc7;
              (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)();
              pUVar5 = (__this->fields)._blueInput;
              iVar16 = *(int *)(TypeInfo_Object + 0xe4);
            }
            if (iVar16 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x0;
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
label_04349e1a:
              pUVar5 = (__this->fields)._alphaInput;
              iVar16 = *(int *)(TypeInfo_Object + 0xe4);
            }
            else {
              pUVar5 = (__this->fields)._blueInput;
              if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar6 = (pUVar5->fields)._inputField, pUVar6 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar6->fields).m_Mesh != '\0') goto label_04349e1a;
              (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)();
              pUVar5 = (__this->fields)._alphaInput;
              iVar16 = *(int *)(TypeInfo_Object + 0xe4);
            }
            if (iVar16 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x0;
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
label_04349e6d:
              cVar2 = *(char *)((long)&(__this->fields)._suppressInputCallbacks + 3);
            }
            else {
              pUVar5 = (__this->fields)._alphaInput;
              if ((pUVar5 == (UI_InputSettingElement_o *)0x0) ||
                 (pUVar6 = (pUVar5->fields)._inputField, pUVar6 == (UnityEngine_UI_InputField_o *)0x0))
              goto label_0434a004;
              if (*(char *)&(pUVar6->fields).m_Mesh != '\0') goto label_04349e6d;
              (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)
                        (pUVar5,(pUVar5->klass->vtable)._6_SyncElement.method);
              cVar2 = *(char *)((long)&(__this->fields)._suppressInputCallbacks + 3);
            }
            if (cVar2 != '\0') goto label_04349ff0;
            local_58._4_4_ = local_58._0_4_;
            local_58._0_4_ = local_38._0_4_;
            local_58._8_4_ = local_38._8_4_;
            local_58._12_4_ = local_38._12_4_;
            __this_00 = (__this->fields)._hex;
            if (g_data_057ae0f4 == '\0') {
              il2cpp_runtime_helper_023445d0();
              g_data_057ae0f4 = '\x01';
            }
            auVar11 = _local_48;
            UVar24.fields.b = (float)(int)local_58._0_8_;
            UVar24.fields.a = (float)(int)((ulong)local_58._0_8_ >> 0x20);
            UVar24.fields.r = (float)local_48._0_4_;
            UVar24.fields.g = (float)local_48._4_4_;
            _local_48 = auVar11;
            method_00 = (MethodInfo *)UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar24,(MethodInfo *)0x0);
            pSVar17 = System_String__Concat_3ae5ba0
                                ("#",(System_String_o *)method_00,(MethodInfo *)0x0);
            if (__this_00 != (Settings_StringSetting_o *)0x0) {
              Settings_TypedSetting_object___set_Value
                        ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)pSVar17,MethodInfo_Void_set_Value);
              pUVar5 = (__this->fields)._hexInput;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (MethodInfo *)0x0;
              bVar12 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                 );
              if ((char)bVar12 == '\0') {
label_04349ff0:
                *(undefined1 *)&(__this->fields)._suppressInputCallbacks = 0;
                return;
              }
              pUVar5 = (__this->fields)._hexInput;
              if (pUVar5 != (UI_InputSettingElement_o *)0x0) {
                (*(pUVar5->klass->vtable)._6_SyncElement.methodPtr)
                          (pUVar5,(pUVar5->klass->vtable)._6_SyncElement.method);
                goto label_04349ff0;
              }
            }
          }
        }
      }
    }
  }
label_0434a004:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Uri);
    il2cpp_runtime_helper_023445d0(&"#");
    g_data_057ae0ec = '\x01';
  }
  if (method_00 == (MethodInfo *)0x0) {
    return;
  }
  pSVar17 = (System_String_o *)0x0;
  pSVar14 = System_String__Trim((System_String_o *)method_00,(MethodInfo *)0x0);
  if (pSVar14 != (System_String_o *)0x0) {
    bVar12 = System_String__StartsWith(pSVar14,"#",(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
label_0434a091:
      iVar16 = (pSVar14->fields)._stringLength;
      if (((iVar16 != 0) && (iVar16 < 9)) && (0 < iVar16)) {
        iVar16 = 0;
        do {
          character = System_String__get_Chars(pSVar14,iVar16,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Uri + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = System_Uri__IsHexDigit(character,(MethodInfo *)0x0);
        } while (((char)bVar12 != '\0') && (iVar16 = iVar16 + 1, iVar16 < (pSVar14->fields)._stringLength));
      }
      return;
    }
    pSVar17 = (System_String_o *)0x1;
    pSVar14 = System_String__Substring(pSVar14,1,(MethodInfo *)0x0);
    if (pSVar14 != (System_String_o *)0x0) goto label_0434a091;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0ed == '\0') {
    il2cpp_runtime_helper_023445d0(&"#");
    il2cpp_runtime_helper_023445d0(&"#FFFFFF");
    g_data_057ae0ed = '\x01';
  }
  if (pSVar17 == (System_String_o *)0x0) {
    return;
  }
  pSVar14 = System_String__Trim(pSVar17,(MethodInfo *)0x0);
  if (pSVar14 != (System_String_o *)0x0) {
    pSVar14 = System_String__ToUpperInvariant(pSVar14,(MethodInfo *)0x0);
    pSVar17 = pSVar14;
    bVar12 = System_String__op_Equality
                       (pSVar14,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    if ((pSVar14 != (System_String_o *)0x0) &&
       ((bVar12 = System_String__StartsWith(pSVar14,"#",(MethodInfo *)0x0), (char)bVar12 != '\0' ||
        (pSVar17 = "#",
        pSVar14 = System_String__Concat_3ae5ba0("#",pSVar14,(MethodInfo *)0x0),
        pSVar14 != (System_String_o *)0x0)))) {
      if ((pSVar14->fields)._stringLength < 10) {
        return;
      }
      System_String__Substring_3af8da0(pSVar14,0,9,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f3 = '\x01';
  }
  pSVar7 = pSVar17[8].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    pSVar7 = pSVar17[9].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pSVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      SVar19._stringLength = 0;
      SVar19._firstChar = 0;
      SVar19._6_2_ = 0;
      if (pSVar17[8].klass == (System_String_c *)0x0) goto label_0434a4fe;
      UVar25 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_RectTransform_o *)pSVar17[8].klass,(MethodInfo *)0x0);
      SVar19._stringLength = 0;
      SVar19._firstChar = 0;
      SVar19._6_2_ = 0;
      if (pSVar17[8].klass == (System_String_c *)0x0) goto label_0434a4fe;
      UVar26 = UnityEngine_RectTransform__get_rect
                         ((UnityEngine_RectTransform_o *)pSVar17[8].klass,(MethodInfo *)0x0);
      SVar19._stringLength = 0;
      SVar19._firstChar = 0;
      SVar19._6_2_ = 0;
      if (pSVar17[9].klass == (System_String_c *)0x0) goto label_0434a4fe;
      fStack_e0 = UVar25.fields.m_Width;
      fVar21 = UVar26.fields.m_Height + -6.0;
      uVar1 = *(undefined8 *)((long)&pSVar17[0xc].monitor + 4);
      value.fields.y = (float)((ulong)uVar1 >> 0x20) * fVar21 + fVar21 * -0.5;
      value.fields.x = (float)uVar1 * (fStack_e0 + -6.0) + (fStack_e0 + -6.0) * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)pSVar17[9].klass,value,(MethodInfo *)0x0);
    }
  }
  pUVar8 = pSVar17[8].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    pUVar8 = pSVar17[9].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      SVar19._stringLength = 0;
      SVar19._firstChar = 0;
      SVar19._6_2_ = 0;
      if (pSVar17[8].monitor == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      UVar25 = UnityEngine_RectTransform__get_rect(pSVar17[8].monitor,(MethodInfo *)0x0);
      SVar19._stringLength = 0;
      SVar19._firstChar = 0;
      SVar19._6_2_ = 0;
      if (pSVar17[9].monitor == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      fVar21 = UVar25.fields.m_Height + -6.0;
      UnityEngine_RectTransform__set_anchoredPosition
                (pSVar17[9].monitor,
                 (UnityEngine_Vector2_o)
                 ((ulong)(uint)((1.0 - *(float *)&pSVar17[0xc].monitor) * fVar21 + fVar21 * -0.5) << 0x20),
                 (MethodInfo *)0x0);
    }
  }
  SVar19 = pSVar17[8].fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return;
  }
  SVar19 = pSVar17[9].fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)SVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return;
  }
  SVar19 = pSVar17[8].fields;
  if (SVar19 != (System_String_Fields)0x0) {
    UVar25 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)SVar19,(MethodInfo *)0x0);
    if (pSVar17[7].monitor == (void *)0x0) {
      if (pSVar17[0xe].klass == (System_String_c *)0x0) goto label_0434a4fe;
      ppcVar15 = &((pSVar17[0xe].klass)->_1).namespaze;
    }
    else {
      ppcVar15 = (char **)((long)pSVar17[7].monitor + 0x20);
    }
    fVar21 = (float)*(int *)ppcVar15 / 255.0;
    if ((fVar21 != 1.0) || (NAN(fVar21))) {
      fVar21 = (*(float *)&pSVar17[0xc].fields._firstChar - fVar21) / (1.0 - fVar21);
      if (0.0 <= fVar21) {
        fVar20 = 1.0;
        if (fVar21 <= 1.0) {
          fVar20 = fVar21;
        }
        __this_01 = pSVar17[9].fields;
        if (__this_01 == (System_String_Fields)0x0) {
          SVar19._stringLength = 0;
          SVar19._firstChar = 0;
          SVar19._6_2_ = 0;
          goto label_0434a4fe;
        }
        goto label_0434a4cb;
      }
    }
    fVar20 = 0.0;
    __this_01 = pSVar17[9].fields;
    SVar19._stringLength = 0;
    SVar19._firstChar = 0;
    SVar19._6_2_ = 0;
    if (__this_01 != (System_String_Fields)0x0) {
label_0434a4cb:
      fVar21 = UVar25.fields.m_Width + -6.0;
      value_00.fields.y = 0.0;
      value_00.fields.x = fVar21 * fVar20 + fVar21 * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)__this_01,value_00,(MethodInfo *)0x0);
      return;
    }
  }
label_0434a4fe:
  il2cpp_runtime_helper_022b2c90();
  UVar24 = UnityEngine_Color__HSVToRGB_4de5b40
                     (*(float *)((long)SVar19 + 0x128),*(float *)((long)SVar19 + 300),
                      *(float *)&((UnityEngine_RectTransform_Fields *)((long)SVar19 + 0x130))->m_CachedPtr,1,
                      (MethodInfo *)0x0);
  fVar21 = UVar24.fields.b;
  fVar20 = UVar24.fields.a;
  if ((*(void **)((long)SVar19 + 0xb0) == (void *)0x0) &&
     (((UnityEngine_RectTransform_o *)((long)SVar19 + 0x150))->klass == (UnityEngine_RectTransform_c *)0x0)) {
    uVar1 = il2cpp_runtime_helper_022b2c90(UVar24.fields.r);
    if (g_data_057ae0f4 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ae0f4 = '\x01';
    }
    color.fields.a = fVar20;
    color.fields.b = fVar21;
    color.fields.r = (float)(int)uVar1;
    color.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
    pSVar17 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    System_String__Concat_3ae5ba0("#",pSVar17,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ColorPickPopup$$Update
// il2cpp: void UI_ColorPickPopup__Update (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x434a600

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
// 0x43480f0

void UI_ColorPickPopup__MarkTextureDirty
               (UI_ColorPickPopup_o *__this,bool_conflict svDirty,bool_conflict alphaDirty,MethodInfo *method)

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
// 0x4348240

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
// 0x4347aa0

void UI_ColorPickPopup__EnsureTextures(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  byte *pbVar1;
  UnityEngine_Texture2D_o **ppUVar2;
  UnityEngine_Texture2D_o **ppUVar3;
  UnityEngine_Object_o *x;
  UnityEngine_UI_RawImage_o *pUVar4;
  Settings_IntSetting_o *pSVar5;
  Utility_Color255_o *__this_00;
  bool_conflict bVar6;
  int32_t iVar7;
  UnityEngine_Texture2D_o *pUVar8;
  UnityEngine_Color32_array *pUVar9;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Events_UnityAction_o *in_RCX;
  byte extraout_DL;
  UnityEngine_UI_Image_o *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_Events_UnityAction_o *pUVar10;
  byte bVar11;
  Settings_ColorSetting_o *pSVar12;
  UnityEngine_UI_Image_o *pUVar13;
  MethodInfo *pMVar14;
  UI_ColorPickPopup_o *__this_02;
  UI_ColorPickPopup_o *pUVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Color_o UVar18;
  UnityEngine_Color_o rgbColor;
  float fStack_6c;
  
  if (g_data_057ae0f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorPickPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057ae0f0 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_04347c85:
    pUVar8 = (__this->fields)._svTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppUVar2 = &(__this->fields)._svTexture;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_04347d54:
      pUVar8 = (__this->fields)._alphaTexture;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppUVar3 = &(__this->fields)._alphaTexture;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
label_04347e23:
        pUVar4 = (__this->fields)._hueImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          pUVar4 = (__this->fields)._hueImage;
          if (pUVar4 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04347f17;
          UnityEngine_UI_RawImage__set_texture
                    (pUVar4,(UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),(MethodInfo *)0x0)
          ;
        }
        pUVar4 = (__this->fields)._svImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          pUVar4 = (__this->fields)._svImage;
          if (pUVar4 == (UnityEngine_UI_RawImage_o *)0x0) goto label_04347f17;
          UnityEngine_UI_RawImage__set_texture(pUVar4,(UnityEngine_Texture_o *)*ppUVar2,(MethodInfo *)0x0);
        }
        pUVar4 = (__this->fields)._alphaImage;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pUVar4 = (__this->fields)._alphaImage;
        if (pUVar4 != (UnityEngine_UI_RawImage_o *)0x0) {
          UnityEngine_UI_RawImage__set_texture(pUVar4,(UnityEngine_Texture_o *)*ppUVar3,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pUVar8 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
        in_RCX = (UnityEngine_Events_UnityAction_o *)&g_data_00000004;
        UnityEngine_Texture2D___ctor_4dd9130(pUVar8,0xc0,1,4,0,(MethodInfo *)0x0);
        *ppUVar3 = pUVar8;
        il2cpp_runtime_helper_022b4080(ppUVar3);
        if ((UnityEngine_Texture_o *)*ppUVar3 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar3,1,(MethodInfo *)0x0);
          if ((UnityEngine_Texture_o *)*ppUVar3 != (UnityEngine_Texture_o *)0x0) {
            UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar3,1,(MethodInfo *)0x0);
            pUVar9 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32,0xc0);
            (__this->fields)._alphaPixels = pUVar9;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._alphaPixels);
            goto label_04347e23;
          }
        }
      }
    }
    else {
      pUVar8 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
      in_RCX = (UnityEngine_Events_UnityAction_o *)&g_data_00000004;
      UnityEngine_Texture2D___ctor_4dd9130(pUVar8,0xc0,0xc0,4,0,(MethodInfo *)0x0);
      *ppUVar2 = pUVar8;
      il2cpp_runtime_helper_022b4080(ppUVar2);
      if ((UnityEngine_Texture_o *)*ppUVar2 != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0);
        if ((UnityEngine_Texture_o *)*ppUVar2 != (UnityEngine_Texture_o *)0x0) {
          UnityEngine_Texture__set_filterMode((UnityEngine_Texture_o *)*ppUVar2,1,(MethodInfo *)0x0);
          pUVar9 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32,0x9000);
          (__this->fields)._svPixels = pUVar9;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._svPixels);
          goto label_04347d54;
        }
      }
    }
  }
  else {
    pUVar8 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    in_RCX = (UnityEngine_Events_UnityAction_o *)&g_data_00000004;
    UnityEngine_Texture2D___ctor_4dd9130(pUVar8,1,0x100,4,0,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) = pUVar8;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ColorPickPopup + 0xb8));
    if ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) != (UnityEngine_Texture_o *)0x0) {
      UnityEngine_Texture__set_wrapMode
                ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),1,(MethodInfo *)0x0);
      if ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) != (UnityEngine_Texture_o *)0x0) {
        UnityEngine_Texture__set_filterMode
                  ((UnityEngine_Texture_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),1,(MethodInfo *)0x0);
        pUVar9 = (UnityEngine_Color32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Color32);
        if (pUVar9 == (UnityEngine_Color32_array *)0x0) goto label_04347f1c;
        pUVar10 = (UnityEngine_Events_UnityAction_o *)0x0;
        do {
          UVar18 = UnityEngine_Color__HSVToRGB_4de5b40
                             ((float)(int)pUVar10 / -255.0 + 1.0,1.0,1.0,1,(MethodInfo *)0x0);
          iVar7 = il2cpp_runtime_helper_03b428b0(UVar18.fields._0_8_,UVar18.fields.b,0);
          in_RCX = (UnityEngine_Events_UnityAction_o *)(ulong)(uint)pUVar9->max_length;
          if (in_RCX <= pUVar10) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_04347f17;
          }
          (&pUVar9->m_Items[0].fields.rgba)[(long)pUVar10] = iVar7;
          pUVar10 = (UnityEngine_Events_UnityAction_o *)((long)&pUVar10->klass + 1);
        } while (pUVar10 != (UnityEngine_Events_UnityAction_o *)0x100);
        if ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) !=
            (UnityEngine_Texture2D_o *)0x0) {
          UnityEngine_Texture2D__SetPixels32_4dd9b90
                    ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),pUVar9,
                     (MethodInfo *)0x0);
          if ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) !=
              (UnityEngine_Texture2D_o *)0x0) {
            in_RCX = (UnityEngine_Events_UnityAction_o *)0x0;
            UnityEngine_Texture2D__Apply
                      ((UnityEngine_Texture2D_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8),0,1,(MethodInfo *)0x0
                      );
            goto label_04347c85;
          }
        }
      }
    }
  }
label_04347f17:
  il2cpp_runtime_helper_022b2c90();
label_04347f1c:
  pSVar12 = (Settings_ColorSetting_o *)0x0;
  UVar18 = UnityEngine_Color__HSVToRGB_4de5b40(1.0,1.0,1.0,1,(MethodInfo *)0x0);
  __this_02 = (UI_ColorPickPopup_o *)0x0;
  il2cpp_runtime_helper_03b428b0(UVar18.fields._0_8_,UVar18.fields.b);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    g_data_057ae0e7 = '\x01';
  }
  bVar11 = 0;
  pUVar15 = __this_02;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pMVar14 = (MethodInfo *)0x0;
    bVar6 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this_02,pMVar14);
    (__this_02->fields)._setting = pSVar12;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields)._setting,pSVar12);
    pUVar15 = (UI_ColorPickPopup_o *)&(__this_02->fields)._image;
    (__this_02->fields)._image = extraout_RDX;
    pUVar13 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    bVar11 = (byte)pUVar13;
    if ((pSVar12 != (Settings_ColorSetting_o *)0x0) &&
       (pSVar5 = (__this_02->fields)._alpha, pSVar5 != (Settings_IntSetting_o *)0x0)) {
      (pSVar5->fields).MinValue = (pSVar12->fields).MinAlpha;
      (__this_02->fields)._onChangeColor = in_RCX;
      il2cpp_runtime_helper_022b4080(&(__this_02->fields)._onChangeColor);
      bVar11 = (byte)in_RCX;
      __this_00 = (pSVar12->fields)._value;
      pUVar15 = (UI_ColorPickPopup_o *)0x0;
      if (__this_00 != (Utility_Color255_o *)0x0) {
        UVar18 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
        rgbColor.fields.b = UVar18.fields.b;
        rgbColor.fields._0_8_ = UVar18.fields._0_8_;
        rgbColor.fields.a = 1.0;
        UnityEngine_Color__RGBToHSV
                  (rgbColor,&(__this_02->fields)._hue,&(__this_02->fields)._saturation,
                   &(__this_02->fields)._value,(MethodInfo *)0x0);
        fStack_6c = UVar18.fields.a;
        fVar16 = (float)(pSVar12->fields).MinAlpha / 255.0;
        if (fVar16 <= fStack_6c) {
          fVar16 = fStack_6c;
        }
        fVar17 = 1.0;
        if (fVar16 <= 1.0) {
          fVar17 = fVar16;
        }
        (__this_02->fields)._alphaValue = (float)(-(uint)(0.0 <= fVar16) & (uint)fVar17);
        *(undefined1 *)((long)&(__this_02->fields)._suppressInputCallbacks + 3) = 0;
        *(undefined2 *)((long)&(__this_02->fields)._suppressInputCallbacks + 1) = 0x101;
        pMVar14 = (MethodInfo *)0x1;
        UI_ColorPickPopup__ApplyCurrentColorToUI(__this_02,1,method_00);
        if (*(char *)((long)&(__this_02->fields)._suppressInputCallbacks + 1) != '\0') {
          UI_ColorPickPopup__UpdateSVTexture(__this_02,pMVar14);
          *(undefined1 *)((long)&(__this_02->fields)._suppressInputCallbacks + 1) = 0;
        }
        if (*(char *)((long)&(__this_02->fields)._suppressInputCallbacks + 2) == '\0') {
          return;
        }
        UI_ColorPickPopup__UpdateAlphaTexture(__this_02,pMVar14);
        *(undefined1 *)((long)&(__this_02->fields)._suppressInputCallbacks + 2) = 0;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pbVar1 = (byte *)((long)&(pUVar15->fields)._suppressInputCallbacks + 1);
  *pbVar1 = *pbVar1 | bVar11;
  pbVar1 = (byte *)((long)&(pUVar15->fields)._suppressInputCallbacks + 2);
  *pbVar1 = *pbVar1 | extraout_DL;
  return;
}


// UI.ColorPickPopup$$UpdateSVTexture
// il2cpp: void UI_ColorPickPopup__UpdateSVTexture (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x434a640

void UI_ColorPickPopup__UpdateSVTexture(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  UnityEngine_Color32_array *pUVar2;
  UnityEngine_Object_o *pUVar3;
  long lVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  undefined4 uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  UnityEngine_Color_o UVar14;
  float fStack_70;
  float fStack_60;
  
  if (g_data_057ae0f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f1 = '\x01';
  }
  pUVar1 = (__this->fields)._svTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar13 = 0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  iVar12 = 0;
  do {
    iVar9 = 0;
    do {
      pUVar2 = (__this->fields)._svPixels;
      UVar14 = UnityEngine_Color__HSVToRGB_4de5b40
                         ((__this->fields)._hue,(float)iVar9 / 191.0,(float)iVar12 / 191.0,1,(MethodInfo *)0x0
                         );
      lVar10 = 0;
      iVar6 = il2cpp_runtime_helper_03b428b0(UVar14.fields.r,UVar14.fields.b);
      if (pUVar2 == (UnityEngine_Color32_array *)0x0) goto label_0434a783;
      if ((uint)pUVar2->max_length <= (uint)(iVar13 + iVar9)) {
        il2cpp_runtime_helper_022b2ca0();
        goto label_0434a783;
      }
      (&pUVar2->m_Items[0].fields.rgba)[iVar13 + iVar9] = iVar6;
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0xc0);
    iVar12 = iVar12 + 1;
    iVar13 = iVar13 + 0xc0;
  } while (iVar12 != 0xc0);
  pUVar1 = (__this->fields)._svTexture;
  lVar10 = 0;
  if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__SetPixels32_4dd9b90(pUVar1,(__this->fields)._svPixels,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._svTexture;
    lVar10 = 0;
    if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply(pUVar1,0,0,(MethodInfo *)0x0);
      return;
    }
  }
label_0434a783:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f2 = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)(lVar10 + 0x110);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  lVar11 = 1;
  UVar14 = UnityEngine_Color__HSVToRGB_4de5b40
                     (*(float *)(lVar10 + 0x128),*(float *)(lVar10 + 300),*(float *)(lVar10 + 0x130),1,
                      (MethodInfo *)0x0);
  if ((*(long *)(lVar10 + 0xb0) != 0) || (*(long *)(lVar10 + 0x150) != 0)) {
    uVar8 = 0;
    do {
      lVar4 = *(long *)(lVar10 + 0x120);
      fStack_70 = UVar14.fields.b;
      fStack_60 = UVar14.fields.r;
      lVar11 = 0;
      uVar7 = il2cpp_runtime_helper_03b428b0(fStack_60,fStack_70);
      if (lVar4 == 0) goto label_0434a92d;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto label_0434a932;
      *(undefined4 *)(lVar4 + 0x20 + uVar8 * 4) = uVar7;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0xc0);
    lVar11 = 0;
    if (*(UnityEngine_Texture2D_o **)(lVar10 + 0x110) != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__SetPixels32_4dd9b90
                (*(UnityEngine_Texture2D_o **)(lVar10 + 0x110),*(UnityEngine_Color32_array **)(lVar10 + 0x120)
                 ,(MethodInfo *)0x0);
      lVar11 = 0;
      if (*(UnityEngine_Texture2D_o **)(lVar10 + 0x110) != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__Apply(*(UnityEngine_Texture2D_o **)(lVar10 + 0x110),0,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_0434a92d:
  il2cpp_runtime_helper_022b2c90();
label_0434a932:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae0f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorPickPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f9 = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)(lVar11 + 0x108);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = *(UnityEngine_Object_o **)(lVar11 + 0x108);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
  }
  pUVar3 = *(UnityEngine_Object_o **)(lVar11 + 0x110);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = *(UnityEngine_Object_o **)(lVar11 + 0x110);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
  }
  pUVar3 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) = 0;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ColorPickPopup + 0xb8),0);
    return;
  }
  return;
}


// UI.ColorPickPopup$$UpdateAlphaTexture
// il2cpp: void UI_ColorPickPopup__UpdateAlphaTexture (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x434a790

void UI_ColorPickPopup__UpdateAlphaTexture(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  UnityEngine_Color32_array *pUVar2;
  UnityEngine_Object_o *pUVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  ulong uVar6;
  long lVar7;
  UnityEngine_Color_o UVar8;
  float local_38;
  float local_28;
  
  if (g_data_057ae0f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f2 = '\x01';
  }
  pUVar1 = (__this->fields)._alphaTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  lVar7 = 1;
  UVar8 = UnityEngine_Color__HSVToRGB_4de5b40
                    ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,1,
                     (MethodInfo *)0x0);
  if (((__this->fields)._setting != (Settings_ColorSetting_o *)0x0) ||
     ((__this->fields)._alpha != (Settings_IntSetting_o *)0x0)) {
    uVar6 = 0;
    do {
      pUVar2 = (__this->fields)._alphaPixels;
      local_38 = UVar8.fields.b;
      local_28 = UVar8.fields.r;
      lVar7 = 0;
      iVar5 = il2cpp_runtime_helper_03b428b0(local_28,local_38);
      if (pUVar2 == (UnityEngine_Color32_array *)0x0) goto label_0434a92d;
      if ((uint)pUVar2->max_length <= uVar6) goto label_0434a932;
      (&pUVar2->m_Items[0].fields.rgba)[uVar6] = iVar5;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0xc0);
    pUVar1 = (__this->fields)._alphaTexture;
    lVar7 = 0;
    if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__SetPixels32_4dd9b90(pUVar1,(__this->fields)._alphaPixels,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._alphaTexture;
      lVar7 = 0;
      if (pUVar1 != (UnityEngine_Texture2D_o *)0x0) {
        UnityEngine_Texture2D__Apply(pUVar1,0,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_0434a92d:
  il2cpp_runtime_helper_022b2c90();
label_0434a932:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae0f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorPickPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f9 = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)(lVar7 + 0x108);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar3 = *(UnityEngine_Object_o **)(lVar7 + 0x108);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
  }
  pUVar3 = *(UnityEngine_Object_o **)(lVar7 + 0x110);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar3 = *(UnityEngine_Object_o **)(lVar7 + 0x110);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
  }
  pUVar3 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar3 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) = 0;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ColorPickPopup + 0xb8),0);
    return;
  }
  return;
}


// UI.ColorPickPopup$$UpdatePickerHandles
// il2cpp: void UI_ColorPickPopup__UpdatePickerHandles (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x434a210

void UI_ColorPickPopup__UpdatePickerHandles(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  undefined8 uVar5;
  bool_conflict bVar6;
  int32_t *piVar7;
  System_String_o *str1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  UnityEngine_Rect_o UVar12;
  UnityEngine_Color_o UVar13;
  float local_28;
  
  if (g_data_057ae0f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f3 = '\x01';
  }
  pUVar8 = (__this->fields)._svRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar8 = (__this->fields)._svHandle;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar8 = (__this->fields)._svRect;
      __this_00 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      UVar11 = UnityEngine_RectTransform__get_rect(pUVar8,(MethodInfo *)0x0);
      pUVar8 = (__this->fields)._svRect;
      __this_00 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      UVar12 = UnityEngine_RectTransform__get_rect(pUVar8,(MethodInfo *)0x0);
      pUVar8 = (__this->fields)._svHandle;
      __this_00 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      local_28 = UVar11.fields.m_Width;
      fVar10 = UVar12.fields.m_Height + -6.0;
      uVar1 = (__this->fields)._saturation;
      uVar2 = (__this->fields)._value;
      value.fields.y = (float)uVar2 * fVar10 + fVar10 * -0.5;
      value.fields.x = (float)uVar1 * (local_28 + -6.0) + (local_28 + -6.0) * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar8,value,(MethodInfo *)0x0);
    }
  }
  pUVar8 = (__this->fields)._hueRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar8 = (__this->fields)._hueHandle;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar8 = (__this->fields)._hueRect;
      __this_00 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      UVar11 = UnityEngine_RectTransform__get_rect(pUVar8,(MethodInfo *)0x0);
      pUVar8 = (__this->fields)._hueHandle;
      __this_00 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_0434a4fe;
      fVar10 = UVar11.fields.m_Height + -6.0;
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar8,(UnityEngine_Vector2_o)
                        ((ulong)(uint)((1.0 - (__this->fields)._hue) * fVar10 + fVar10 * -0.5) << 0x20),
                 (MethodInfo *)0x0);
    }
  }
  pUVar8 = (__this->fields)._alphaRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar8 = (__this->fields)._alphaHandle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  __this_00 = (__this->fields)._alphaRect;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar11 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._setting;
    if (pSVar3 == (Settings_ColorSetting_o *)0x0) {
      pSVar4 = (__this->fields)._alpha;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_0434a4fe;
      piVar7 = &(pSVar4->fields).MinValue;
    }
    else {
      piVar7 = &(pSVar3->fields).MinAlpha;
    }
    fVar10 = (float)*piVar7 / 255.0;
    if ((fVar10 != 1.0) || (NAN(fVar10))) {
      fVar10 = ((__this->fields)._alphaValue - fVar10) / (1.0 - fVar10);
      if (0.0 <= fVar10) {
        fVar9 = 1.0;
        if (fVar10 <= 1.0) {
          fVar9 = fVar10;
        }
        pUVar8 = (__this->fields)._alphaHandle;
        if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) {
          __this_00 = (UnityEngine_RectTransform_o *)0x0;
          goto label_0434a4fe;
        }
        goto label_0434a4cb;
      }
    }
    fVar9 = 0.0;
    pUVar8 = (__this->fields)._alphaHandle;
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
label_0434a4cb:
      fVar10 = UVar11.fields.m_Width + -6.0;
      value_00.fields.y = 0.0;
      value_00.fields.x = fVar10 * fVar9 + fVar10 * -0.5;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar8,value_00,(MethodInfo *)0x0);
      return;
    }
  }
label_0434a4fe:
  il2cpp_runtime_helper_022b2c90();
  UVar13 = UnityEngine_Color__HSVToRGB_4de5b40
                     (*(float *)&__this_00[0xc].monitor,*(float *)((long)&__this_00[0xc].monitor + 4),
                      *(float *)&__this_00[0xc].fields.m_CachedPtr,1,(MethodInfo *)0x0);
  fVar10 = UVar13.fields.b;
  fVar9 = UVar13.fields.a;
  if ((__this_00[7].monitor == (void *)0x0) && (__this_00[0xe].klass == (UnityEngine_RectTransform_c *)0x0)) {
    uVar5 = il2cpp_runtime_helper_022b2c90(UVar13.fields.r);
    if (g_data_057ae0f4 == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ae0f4 = '\x01';
    }
    UVar13.fields.a = fVar9;
    UVar13.fields.b = fVar10;
    UVar13.fields.r = (float)(int)uVar5;
    UVar13.fields.g = (float)(int)((ulong)uVar5 >> 0x20);
    str1 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar13,(MethodInfo *)0x0);
    System_String__Concat_3ae5ba0("#",str1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ColorPickPopup$$GetCurrentColor
// il2cpp: UnityEngine_Color_o UI_ColorPickPopup__GetCurrentColor (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x434a510

UnityEngine_Color_o UI_ColorPickPopup__GetCurrentColor(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  undefined8 uVar3;
  int32_t *piVar4;
  System_String_o *str1;
  undefined4 extraout_XMM0_Da;
  float fVar6;
  UnityEngine_Color_o UVar7;
  UnityEngine_Color_o UVar8;
  UnityEngine_Color_o UVar9;
  undefined4 extraout_XMM0_Db;
  float fVar5;
  
  UVar7 = UnityEngine_Color__HSVToRGB_4de5b40
                    ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,1,
                     (MethodInfo *)0x0);
  UVar8.fields.b = UVar7.fields.b;
  fVar5 = UVar7.fields.a;
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
    pSVar2 = (__this->fields)._alpha;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
      uVar3 = il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae0f4 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057ae0f4 = '\x01';
      }
      UVar7.fields.a = fVar5;
      UVar7.fields.b = UVar8.fields.b;
      UVar7.fields.r = (float)(int)uVar3;
      UVar7.fields.g = (float)(int)((ulong)uVar3 >> 0x20);
      str1 = UnityEngine_ColorUtility__ToHtmlStringRGBA(UVar7,(MethodInfo *)0x0);
      System_String__Concat_3ae5ba0("#",str1,(MethodInfo *)0x0);
      UVar9.fields.g = (float)extraout_XMM0_Db;
      UVar9.fields.r = (float)extraout_XMM0_Da;
      UVar9.fields.a = fVar5;
      UVar9.fields.b = UVar8.fields.b;
      return (UnityEngine_Color_o)UVar9.fields;
    }
    piVar4 = &(pSVar2->fields).MinValue;
  }
  else {
    piVar4 = &(pSVar1->fields).MinAlpha;
  }
  fVar5 = (__this->fields)._alphaValue;
  fVar6 = (float)*piVar4 / 255.0;
  if ((float)*piVar4 / 255.0 <= fVar5) {
    fVar6 = fVar5;
  }
  fVar5 = 1.0;
  if (fVar6 <= 1.0) {
    fVar5 = fVar6;
  }
  UVar8.fields.a = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar5);
  UVar8.fields.r = (float)(int)UVar7.fields._0_8_;
  UVar8.fields.g = (float)(int)((ulong)UVar7.fields._0_8_ >> 0x20);
  return (UnityEngine_Color_o)UVar8.fields;
}


// UI.ColorPickPopup$$GetHexString
// il2cpp: System_String_o* UI_ColorPickPopup__GetHexString (UI_ColorPickPopup_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x434a5a0

System_String_o *
UI_ColorPickPopup__GetHexString(UI_ColorPickPopup_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae0f4 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0f4 = '\x01';
  }
  pSVar1 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0("#",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ColorPickPopup$$GetMinAlpha01
// il2cpp: float UI_ColorPickPopup__GetMinAlpha01 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x43493b0

float UI_ColorPickPopup__GetMinAlpha01(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  int32_t *piVar5;
  MethodInfo *method_00;
  UI_ColorPickPopup_o *H;
  float fVar6;
  float extraout_XMM0_Da;
  float fVar7;
  UnityEngine_Color_o rgbColor;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_ColorSetting_o *)0x0) {
    return (float)(pSVar1->fields).MinAlpha / 255.0;
  }
  pSVar4 = (__this->fields)._alpha;
  if (pSVar4 != (Settings_IntSetting_o *)0x0) {
    return (float)(pSVar4->fields).MinValue / 255.0;
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  H = __this;
  if (g_data_057ae0ea == '\0') {
    H = (UI_ColorPickPopup_o *)&MethodInfo_Int32_get_Value;
    fVar6 = (float)il2cpp_runtime_helper_023445d0();
    g_data_057ae0ea = '\x01';
  }
  if ((char)(__this->fields)._suppressInputCallbacks != '\0') {
    return fVar6;
  }
  pSVar4 = (__this->fields)._red;
  if (((pSVar4 != (Settings_IntSetting_o *)0x0) &&
      (pSVar2 = (__this->fields)._green, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
     (pSVar3 = (__this->fields)._blue, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    rgbColor.fields.r = (float)(pSVar4->fields)._value / 255.0;
    rgbColor.fields.g = (float)(pSVar2->fields)._value / 255.0;
    H = (UI_ColorPickPopup_o *)&(__this->fields)._hue;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.b = (float)(pSVar3->fields)._value / 255.0;
    UnityEngine_Color__RGBToHSV
              (rgbColor,(float *)H,&(__this->fields)._saturation,&(__this->fields)._value,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._setting;
    if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
      pSVar4 = (__this->fields)._alpha;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_0434952f;
      piVar5 = &(pSVar4->fields).MinValue;
    }
    else {
      pSVar4 = (__this->fields)._alpha;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_0434952f;
      piVar5 = &(pSVar1->fields).MinAlpha;
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
    return extraout_XMM0_Da;
  }
label_0434952f:
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  if ((char)(H->fields)._suppressInputCallbacks != '\0') {
    return fVar6;
  }
  *(undefined1 *)((long)&(H->fields)._suppressInputCallbacks + 3) = 1;
  return fVar6;
}


// UI.ColorPickPopup$$GetCurrentColor255
// il2cpp: Utility_Color255_o* UI_ColorPickPopup__GetCurrentColor255 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x4348ce0

Utility_Color255_o * UI_ColorPickPopup__GetCurrentColor255(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_ColorSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  double dVar4;
  _union_14 _Var5;
  undefined1 auVar6 [16];
  int32_t *piVar7;
  Utility_Color255_o *__this_00;
  Utility_Color255_o *extraout_RAX;
  int iVar8;
  MethodInfo *method_00;
  int32_t a;
  MethodInfo *method_01;
  _union_14 *p_Var9;
  int g;
  int b;
  int r;
  float fVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar11;
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
  
  if (g_data_057ae0f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ae0f5 = '\x01';
  }
  uVar12 = 0;
  uVar13 = 0;
  p_Var9 = (_union_14 *)0x1;
  method_01 = (MethodInfo *)0x0;
  UVar14 = UnityEngine_Color__HSVToRGB_4de5b40
                     ((__this->fields)._hue,(__this->fields)._saturation,(__this->fields)._value,1,
                      (MethodInfo *)0x0);
  fVar11 = UVar14.fields.b;
  pSVar2 = (__this->fields)._setting;
  local_68._8_4_ = uVar12;
  local_68._0_8_ = UVar14.fields._8_8_;
  local_68._12_4_ = uVar13;
  if (pSVar2 == (Settings_ColorSetting_o *)0x0) {
    pSVar3 = (__this->fields)._alpha;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_043492bd;
    piVar7 = &(pSVar3->fields).MinValue;
  }
  else {
    piVar7 = &(pSVar2->fields).MinAlpha;
  }
  fVar11 = (__this->fields)._alphaValue;
  fVar10 = (float)*piVar7 / 255.0;
  if ((float)*piVar7 / 255.0 <= fVar11) {
    fVar10 = fVar11;
  }
  local_48 = ZEXT416((uint)fVar10);
  uStack_80 = extraout_XMM0_Dc;
  local_88 = (undefined1  [8])UVar14.fields._0_8_;
  uStack_7c = extraout_XMM0_Dd;
  fVar11 = UVar14.fields.r;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    fVar11 = (float)local_88._0_4_;
  }
  local_50._0_4_ = fVar11 * 255.0;
  uVar12 = fVar11 * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar12 = local_50._0_4_;
  }
  p_Var9 = &local_90;
  local_78._0_8_ = (double)(float)uVar12;
  dVar4 = modf((double)(float)uVar12,(double *)p_Var9,method_01);
  if (0.0 <= (float)local_50._0_4_) {
    if ((dVar4 == 0.5) && (!NAN(dVar4))) {
      local_50 = local_90;
      if (((long)(double)local_90 & 1U) != 0) {
        local_50.genericMethod = (void *)(local_90.genericMethod + 1.0);
      }
      goto label_04348e4e;
    }
    dVar4 = floor((double)local_78._0_8_ + 0.5,(MethodInfo *)p_Var9);
    uVar12 = SUB84(dVar4,0);
    uVar13 = (undefined4)((ulong)dVar4 >> 0x20);
label_04349056:
    local_50._4_4_ = uVar13;
    local_50._0_4_ = uVar12;
    local_88._0_4_ = local_88._4_4_;
  }
  else {
    if ((dVar4 != -0.5) || (NAN(dVar4))) {
      dVar4 = ceil((double)local_78._0_8_ + -0.5,(MethodInfo *)p_Var9);
      uVar12 = SUB84(dVar4,0);
      uVar13 = (undefined4)((ulong)dVar4 >> 0x20);
      goto label_04349056;
    }
    local_50 = local_90;
    if (((long)(double)local_90 & 1U) != 0) {
      local_50 = (void *)(local_90.genericMethod + -1.0);
    }
label_04348e4e:
    local_88._0_4_ = local_88._4_4_;
  }
  local_88._4_4_ = local_88._0_4_;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  local_88._0_4_ = (float)local_88._0_4_ * 255.0;
  fVar11 = (float)local_88._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    fVar11 = (float)local_88._0_4_;
  }
  p_Var9 = &local_90;
  local_78._0_8_ = (double)fVar11;
  dVar4 = modf((double)fVar11,(double *)p_Var9,method_01);
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
label_04348f37:
    }
  }
  else if ((dVar4 != -0.5) || (NAN(dVar4))) {
    dVar4 = ceil((double)local_78._0_8_ + -0.5,(MethodInfo *)p_Var9);
    local_88 = (undefined1  [8])dVar4;
  }
  else {
    if (((long)(double)local_90 & 1U) == 0) goto label_04348f37;
    local_88 = (undefined1  [8])((double)local_90 + -1.0);
  }
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  local_68._0_4_ = (float)local_68._0_4_ * 255.0;
  fVar11 = (float)local_68._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    fVar11 = (float)local_68._0_4_;
  }
  fVar10 = 1.0;
  if ((float)local_48._0_4_ <= 1.0) {
    fVar10 = (float)local_48._0_4_;
  }
  local_78 = ZEXT416((uint)fVar10);
  local_30 = (double)fVar11;
  p_Var9 = &local_90;
  dVar4 = modf(local_30,(double *)p_Var9,method_01);
  _Var5 = local_90;
  if (0.0 <= (float)local_68._0_4_) {
    if ((dVar4 == 0.5) && (!NAN(dVar4))) {
      if (((long)(double)local_90 & 1U) != 0) {
        _Var5.genericMethod = (void *)(local_90.genericMethod + 1.0);
      }
      goto label_0434901e;
    }
    dVar4 = floor(local_30 + 0.5,(MethodInfo *)p_Var9);
    uVar12 = SUB84(dVar4,0);
    uVar13 = (undefined4)((ulong)dVar4 >> 0x20);
label_043490ff:
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
      goto label_043490ff;
    }
    if (((long)(double)local_90 & 1U) != 0) {
      _Var5 = (void *)(local_90.genericMethod + -1.0);
    }
label_0434901e:
    local_68._0_8_ = _Var5.genericMethod;
  }
  local_48._4_4_ = local_48._4_4_ & local_78._4_4_;
  local_48._0_4_ = -(uint)(0.0 <= (float)local_48._0_4_) & (uint)((float)local_78._0_4_ * 255.0);
  local_48._8_4_ = local_48._8_4_ & local_78._8_4_;
  local_48._12_4_ = local_48._12_4_ & local_78._12_4_;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  p_Var9 = &local_90;
  local_78._0_8_ = (double)(float)local_48._0_4_;
  dVar4 = modf((double)(float)local_48._0_4_,(double *)p_Var9,method_01);
  fVar11 = 0.0;
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
      goto joined_r0x043491dd;
    }
label_04349249:
    dVar4 = (double)CONCAT44(uVar13,uVar12);
    pSVar2 = (__this->fields)._setting;
  }
  else if ((dVar4 != -0.5) || (NAN(dVar4))) {
    dVar4 = ceil((double)local_78._0_8_ + -0.5,(MethodInfo *)p_Var9);
    pSVar2 = (__this->fields)._setting;
  }
  else {
    if (((long)(double)local_90 & 1U) == 0) goto label_04349249;
    dVar4 = (double)local_90 + -1.0;
    pSVar2 = (__this->fields)._setting;
  }
joined_r0x043491dd:
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
    __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(__this_00,r,g,b,a,(MethodInfo *)0x0);
    return __this_00;
  }
label_043492bd:
  uVar12 = il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)p_Var9 + 300) = uVar12;
  *(float *)(p_Var9 + 0x26) = fVar11;
  *(undefined1 *)((long)p_Var9 + 0x192) = 1;
  UI_ColorPickPopup__ApplyCurrentColorToUI((UI_ColorPickPopup_o *)p_Var9,1,method_00);
  return extraout_RAX;
}


// UI.ColorPickPopup$$CreateTextureContainer
// il2cpp: UnityEngine_GameObject_o* UI_ColorPickPopup__CreateTextureContainer (UI_ColorPickPopup_o* __this, UnityEngine_Transform_o* parent, System_String_o* name, float width, float height, UnityEngine_RectTransform_o** textureRect, const MethodInfo* method);
// 0x4348280

UnityEngine_GameObject_o *
UI_ColorPickPopup__CreateTextureContainer
          (UI_ColorPickPopup_o *__this,UnityEngine_Transform_o *parent,System_String_o *name,float width,
          float height,UnityEngine_RectTransform_o **textureRect,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *pSVar1;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  System_String_o **ppSVar9;
  UnityEngine_Object_o *__this_01;
  Il2CppClass *pIVar10;
  System_String_o *value;
  intptr_t extraout_RDX;
  undefined4 uVar11;
  System_String_o *pSVar12;
  MethodInfo_24E7B40 *pMVar13;
  
  pIVar10 = (Il2CppClass *)textureRect;
  if (g_data_057ae0f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_ColorPickDragArea);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeRef_RawImage);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"Texture");
    g_data_057ae0f6 = '\x01';
  }
  pSVar1 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 == (System_Type_array *)0x0) goto label_04348777;
  if (pSVar2 != (System_Type_o *)0x0) {
    lVar3 = il2cpp_runtime_helper_023051f0(pSVar2);
    if (lVar3 == 0) goto label_04348781;
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = pSVar2;
    il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
    if (pSVar2 != (System_Type_o *)0x0) {
      lVar3 = il2cpp_runtime_helper_023051f0(pSVar2);
      if (lVar3 == 0) goto label_04348781;
    }
    if (1 < (uint)pSVar1->max_length) {
      pSVar1->m_Items[1] = pSVar2;
      il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if (pSVar2 != (System_Type_o *)0x0) {
        lVar3 = il2cpp_runtime_helper_023051f0(pSVar2);
        if (lVar3 == 0) goto label_04348781;
      }
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = pSVar2;
        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 2,pSVar2);
        pUVar4 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        pIVar10 = (Il2CppClass *)0x0;
        UnityEngine_GameObject___ctor_4dfc440(pUVar4,name,pSVar1,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            pIVar10 = (Il2CppClass *)0x0;
            UnityEngine_Transform__SetParent_4e09e30(pUVar5,parent,0,(MethodInfo *)0x0);
            pIVar6 = UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar6 != (Il2CppObject *)0x0) {
              (*pIVar6->klass->vtable[0x24].methodPtr)(width,pIVar6,pIVar6->klass->vtable[0x24].method);
              (*pIVar6->klass->vtable[0x26].methodPtr)
                        ((ulong)(uint)height,pIVar6,pIVar6->klass->vtable[0x26].method);
              pIVar6 = UnityEngine_GameObject__GetComponent_object_(pUVar4,MethodInfo_Image_GetComponent_Image);
              if (pIVar6 != (Il2CppObject *)0x0) {
                pIVar10 = pIVar6->klass;
                (*pIVar10->vtable[0x17].methodPtr)(0,0,pIVar6,pIVar10->vtable[0x17].method);
                pSVar1 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                pSVar2 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                if (pSVar1 != (System_Type_array *)0x0) {
                  if (pSVar2 != (System_Type_o *)0x0) {
                    lVar3 = il2cpp_runtime_helper_023051f0(pSVar2);
                    if (lVar3 == 0) goto label_04348781;
                  }
                  if ((int)pSVar1->max_length != 0) {
                    pSVar1->m_Items[0] = pSVar2;
                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_RawImage,(MethodInfo *)0x0);
                    if (pSVar2 != (System_Type_o *)0x0) {
                      lVar3 = il2cpp_runtime_helper_023051f0(pSVar2);
                      if (lVar3 == 0) goto label_04348781;
                    }
                    if (1 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[1] = pSVar2;
                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_ColorPickDragArea,(MethodInfo *)0x0);
                      if (pSVar2 != (System_Type_o *)0x0) {
                        lVar3 = il2cpp_runtime_helper_023051f0(pSVar2);
                        if (lVar3 == 0) goto label_04348781;
                      }
                      if (2 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[2] = pSVar2;
                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 2,pSVar2);
                        __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                        pIVar10 = (Il2CppClass *)0x0;
                        UnityEngine_GameObject___ctor_4dfc440(__this_00,"Texture",pSVar1,(MethodInfo *)0x0)
                        ;
                        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                          pUVar7 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                            pIVar10 = (Il2CppClass *)0x0;
                            UnityEngine_Transform__SetParent_4e09e30(pUVar5,pUVar7,0,(MethodInfo *)0x0);
                            pUVar8 = (UnityEngine_RectTransform_o *)
                                     UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
                            *textureRect = pUVar8;
                            il2cpp_runtime_helper_022b4080(textureRect);
                            pUVar8 = *textureRect;
                            if (g_data_057a694c == '\0') {
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                              g_data_057a694c = '\x01';
                            }
                            if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                              UnityEngine_RectTransform__set_anchorMin
                                        (pUVar8,(UnityEngine_Vector2_o)
                                                **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                         (MethodInfo *)0x0);
                              pUVar8 = *textureRect;
                              if (g_data_057a9c86 == '\0') {
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                g_data_057a9c86 = '\x01';
                              }
                              if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                UnityEngine_RectTransform__set_anchorMax
                                          (pUVar8,(UnityEngine_Vector2_o)
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
                                    return pUVar4;
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto label_04348777;
                      }
                    }
                  }
                  goto label_0434877c;
                }
              }
            }
          }
        }
label_04348777:
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
label_0434877c:
  il2cpp_runtime_helper_022b2ca0();
label_04348781:
  ppSVar9 = (System_String_o **)il2cpp_runtime_helper_0231b270();
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  pUVar5 = pUVar7;
  if (g_data_057ae0f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    ppSVar9 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0f7 = '\x01';
  }
  uVar11 = SUB84(pUVar5,0);
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    pSVar12 = "Texture";
    pUVar5 = UnityEngine_Transform__Find(pUVar7,"Texture",(MethodInfo *)0x0);
    uVar11 = SUB84(pSVar12,0);
    ppSVar9 = (System_String_o **)pUVar7;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pMVar13 = MethodInfo_RawImage_GetComponent_RawImage;
      ppSVar9 = (System_String_o **)pUVar5;
      __this_01 = (UnityEngine_Object_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_RawImage_GetComponent_RawImage);
      uVar11 = SUB84(pMVar13,0);
      if (__this_01 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name(__this_01,value,(MethodInfo *)0x0);
        (*(code *)__this_01->klass[1].vtable._1_Finalize.method)
                  (__this_01,1,__this_01->klass[1].vtable._2_GetHashCode.methodPtr);
        pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_RectTransform_GetComponent_RectTransform);
        (pIVar10->_1).image = pIVar6;
        il2cpp_runtime_helper_022b4080(pIVar10,pIVar6);
        return (UnityEngine_GameObject_o *)__this_01;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&((UnityEngine_Transform_o *)((long)ppSVar9 + 0x18))->monitor = uVar11;
  (((UnityEngine_Transform_o *)((long)ppSVar9 + 0x18))->fields).m_CachedPtr = extraout_RDX;
  pUVar4 = (UnityEngine_GameObject_o *)
           il2cpp_runtime_helper_022b4080(&((UnityEngine_Transform_o *)((long)ppSVar9 + 0x18))->fields,extraout_RDX);
  return pUVar4;
}


// UI.ColorPickPopup$$CreateTextureSurface
// il2cpp: UnityEngine_UI_RawImage_o* UI_ColorPickPopup__CreateTextureSurface (UI_ColorPickPopup_o* __this, UnityEngine_Transform_o* container, System_String_o* name, UnityEngine_RectTransform_o** rect, const MethodInfo* method);
// 0x4348790

UnityEngine_UI_RawImage_o *
UI_ColorPickPopup__CreateTextureSurface
          (UI_ColorPickPopup_o *__this,UnityEngine_Transform_o *container,System_String_o *name,
          UnityEngine_RectTransform_o **rect,MethodInfo *method)

{
  UI_ColorPickPopup_o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Transform_o *extraout_RDX;
  undefined4 uVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *pSVar5;
  MethodInfo_24E7B40 *pMVar6;
  System_String_o **ppSVar7;
  
  pUVar4 = container;
  if (g_data_057ae0f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    ppSVar7 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae0f7 = '\x01';
    __this = (UI_ColorPickPopup_o *)ppSVar7;
  }
  uVar3 = SUB84(pUVar4,0);
  if (container != (UnityEngine_Transform_o *)0x0) {
    pSVar5 = "Texture";
    __this_00 = (UI_ColorPickPopup_o *)UnityEngine_Transform__Find(container,"Texture",(MethodInfo *)0x0);
    uVar3 = SUB84(pSVar5,0);
    __this = (UI_ColorPickPopup_o *)container;
    if (__this_00 != (UI_ColorPickPopup_o *)0x0) {
      pMVar6 = MethodInfo_RawImage_GetComponent_RawImage;
      __this = __this_00;
      pUVar1 = (UnityEngine_UI_RawImage_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_RawImage_GetComponent_RawImage);
      uVar3 = SUB84(pMVar6,0);
      if (pUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
        UnityEngine_Object__set_name((UnityEngine_Object_o *)pUVar1,name,(MethodInfo *)0x0);
        (*(pUVar1->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (pUVar1,1,(pUVar1->klass->vtable)._25_set_raycastTarget.method);
        pUVar2 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
        *rect = pUVar2;
        il2cpp_runtime_helper_022b4080(rect,pUVar2);
        return pUVar1;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&(__this->fields).SinglePanel = uVar3;
  (__this->fields).DoublePanelLeft = extraout_RDX;
  pUVar1 = (UnityEngine_UI_RawImage_o *)il2cpp_runtime_helper_022b4080(&(__this->fields).DoublePanelLeft,extraout_RDX);
  return pUVar1;
}


// UI.ColorPickPopup$$CreateHandle
// il2cpp: UnityEngine_RectTransform_o* UI_ColorPickPopup__CreateHandle (UI_ColorPickPopup_o* __this, UnityEngine_RectTransform_o* parent, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x4348890

UnityEngine_RectTransform_o *
UI_ColorPickPopup__CreateHandle
          (UI_ColorPickPopup_o *__this,UnityEngine_RectTransform_o *parent,UnityEngine_Vector2_o size,
          MethodInfo *method)

{
  int iVar1;
  Settings_ColorSetting_o *pSVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Settings_IntSetting_o *pSVar5;
  double dVar6;
  _union_14 _Var7;
  System_RuntimeTypeHandle_o handle;
  undefined1 auVar8 [16];
  bool_conflict bVar9;
  System_Type_array *components;
  System_Type_o *pSVar10;
  long lVar11;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_UI_Shadow_o *__this_01;
  UI_ColorPickPopup_o *__this_02;
  undefined4 extraout_var;
  Utility_Color255_o *pUVar14;
  int32_t *piVar15;
  UnityEngine_RectTransform_o *extraout_RAX;
  int iVar16;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  int32_t a;
  UI_ColorPickPopup_o *__this_03;
  System_String_o *a_00;
  MethodInfo *pMVar17;
  UI_ColorPickPopup_o *__this_04;
  _union_14 *p_Var18;
  int g;
  int b;
  int r;
  UnityEngine_GameObject_o *unaff_R15;
  float fVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  UnityEngine_Color_o UVar23;
  _union_14 _Stack_e0;
  undefined1 auStack_d8 [8];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  _union_14 _Stack_a0;
  undefined1 auStack_98 [16];
  double dStack_80;
  UI_ColorPickPopup_o *pUStack_78;
  System_Type_array *pSStack_70;
  UI_ColorPickPopup_o *pUStack_68;
  UnityEngine_GameObject_o *pUStack_60;
  
  if (g_data_057ae0f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Shadow_GetComponent_Shadow);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_Image);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeRef_Shadow);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"Handle");
    g_data_057ae0f8 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type,3,method);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_04348b93:
    il2cpp_runtime_helper_022b2c90();
label_04348b98:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar10 == (System_Type_o *)0x0) || (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10), lVar11 != 0)) {
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar10;
      il2cpp_runtime_helper_022b4080(components->m_Items);
      pSVar10 = System_Type__GetTypeFromHandle(TypeRef_Image,(MethodInfo *)0x0);
      if ((pSVar10 != (System_Type_o *)0x0) && (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10), lVar11 == 0))
      goto label_04348b9d;
      if (1 < (uint)components->max_length) {
        components->m_Items[1] = pSVar10;
        il2cpp_runtime_helper_022b4080(components->m_Items + 1);
        pSVar10 = System_Type__GetTypeFromHandle(TypeRef_Shadow,(MethodInfo *)0x0);
        if ((pSVar10 != (System_Type_o *)0x0) && (lVar11 = il2cpp_runtime_helper_023051f0(pSVar10), lVar11 == 0))
        goto label_04348b9d;
        if (2 < (uint)components->max_length) {
          components->m_Items[2] = pSVar10;
          il2cpp_runtime_helper_022b4080(components->m_Items + 2,pSVar10);
          unaff_R15 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
          UnityEngine_GameObject___ctor_4dfc440(unaff_R15,"Handle",components,(MethodInfo *)0x0);
          if ((unaff_R15 != (UnityEngine_GameObject_o *)0x0) &&
             (__this_00 = UnityEngine_GameObject__get_transform(unaff_R15,(MethodInfo *)0x0),
             __this_00 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetParent_4e09e30
                      (__this_00,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
            pUVar12 = (UnityEngine_RectTransform_o *)
                      UnityEngine_GameObject__GetComponent_object_(unaff_R15,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar12,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar12,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_sizeDelta(pUVar12,size,(MethodInfo *)0x0);
              pIVar13 = UnityEngine_GameObject__GetComponent_object_(unaff_R15,MethodInfo_Image_GetComponent_Image);
              if (pIVar13 != (Il2CppObject *)0x0) {
                (*pIVar13->klass->vtable[0x17].methodPtr)
                          (0x3f800000,0x3f800000,pIVar13,pIVar13->klass->vtable[0x17].method);
                (*pIVar13->klass->vtable[0x19].methodPtr)(pIVar13,0,pIVar13->klass->vtable[0x19].method);
                __this_01 = (UnityEngine_UI_Shadow_o *)
                            UnityEngine_GameObject__GetComponent_object_(unaff_R15,MethodInfo_Shadow_GetComponent_Shadow);
                if (__this_01 != (UnityEngine_UI_Shadow_o *)0x0) {
                  UnityEngine_UI_Shadow__set_effectColor
                            (__this_01,(UnityEngine_Color_o)(ZEXT816(0x3f66666600000000) << 0x40),
                             (MethodInfo *)0x0);
                  UnityEngine_UI_Shadow__set_effectDistance
                            (__this_01,(UnityEngine_Vector2_o)0xbf8000003f800000,(MethodInfo *)0x0);
                  return pUVar12;
                }
              }
            }
          }
          goto label_04348b93;
        }
      }
    }
    goto label_04348b98;
  }
label_04348b9d:
  __this_02 = (UI_ColorPickPopup_o *)il2cpp_runtime_helper_0231b270();
  a_00 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae0e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae0e9 = '\x01';
  }
  bVar9 = System_String__op_Equality(a_00,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
label_04348cb1:
    pUVar12 = (UnityEngine_RectTransform_o *)
              (*(__this_02->klass->vtable)._22_Hide.methodPtr)
                        (__this_02,(__this_02->klass->vtable)._22_Hide.method);
    return pUVar12;
  }
  pMVar17 = "Save";
  bVar9 = System_String__op_Equality(a_00,(System_String_o *)"Save",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return (UnityEngine_RectTransform_o *)CONCAT44(extraout_var,bVar9);
  }
  __this_03 = (UI_ColorPickPopup_o *)(__this_02->fields)._setting;
  __this_04 = __this_02;
  pUVar14 = UI_ColorPickPopup__GetCurrentColor255(__this_02,pMVar17);
  if (__this_03 != (UI_ColorPickPopup_o *)0x0) {
    __this_04 = __this_03;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)pUVar14,MethodInfo_Void_set_Value);
    pSVar2 = (__this_02->fields)._setting;
    if ((pSVar2 != (Settings_ColorSetting_o *)0x0) &&
       (__this_04 = (UI_ColorPickPopup_o *)(pSVar2->fields)._value, __this_04 != (UI_ColorPickPopup_o *)0x0))
    {
      pUVar3 = (__this_02->fields)._image;
      UVar23 = Utility_Color255__ToColor((Utility_Color255_o *)__this_04,(MethodInfo *)0x0);
      __this_03 = (UI_ColorPickPopup_o *)0x0;
      if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
        (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                  (UVar23.fields.r,UVar23.fields.b,pUVar3,(pUVar3->klass->vtable)._23_set_color.method);
        pUVar4 = (__this_02->fields)._onChangeColor;
        if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
        }
        goto label_04348cb1;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_78 = __this_03;
  pSStack_70 = components;
  pUStack_68 = __this_02;
  pUStack_60 = unaff_R15;
  if (g_data_057ae0f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ae0f5 = '\x01';
  }
  uVar21 = 0;
  uVar22 = 0;
  p_Var18 = (_union_14 *)0x1;
  pMVar17 = (MethodInfo *)0x0;
  UVar23 = UnityEngine_Color__HSVToRGB_4de5b40
                     ((__this_04->fields)._hue,(__this_04->fields)._saturation,(__this_04->fields)._value,1,
                      (MethodInfo *)0x0);
  fVar20 = UVar23.fields.b;
  pSVar2 = (__this_04->fields)._setting;
  auStack_b8._8_4_ = uVar21;
  auStack_b8._0_8_ = UVar23.fields._8_8_;
  auStack_b8._12_4_ = uVar22;
  if (pSVar2 == (Settings_ColorSetting_o *)0x0) {
    pSVar5 = (__this_04->fields)._alpha;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_043492bd;
    piVar15 = &(pSVar5->fields).MinValue;
  }
  else {
    piVar15 = &(pSVar2->fields).MinAlpha;
  }
  fVar20 = (__this_04->fields)._alphaValue;
  fVar19 = (float)*piVar15 / 255.0;
  if ((float)*piVar15 / 255.0 <= fVar20) {
    fVar19 = fVar20;
  }
  auStack_98 = ZEXT416((uint)fVar19);
  uStack_d0 = extraout_XMM0_Dc;
  auStack_d8 = (undefined1  [8])UVar23.fields._0_8_;
  uStack_cc = extraout_XMM0_Dd;
  fVar20 = UVar23.fields.r;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    fVar20 = (float)auStack_d8._0_4_;
  }
  _Stack_a0._0_4_ = fVar20 * 255.0;
  uVar21 = fVar20 * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar21 = _Stack_a0._0_4_;
  }
  p_Var18 = &_Stack_e0;
  auStack_c8._0_8_ = (double)(float)uVar21;
  dVar6 = modf((double)(float)uVar21,(double *)p_Var18,pMVar17);
  if (0.0 <= (float)_Stack_a0._0_4_) {
    if ((dVar6 == 0.5) && (!NAN(dVar6))) {
      _Stack_a0 = _Stack_e0;
      if (((long)(double)_Stack_e0 & 1U) != 0) {
        _Stack_a0.genericMethod = (void *)(_Stack_e0.genericMethod + 1.0);
      }
      goto label_04348e4e;
    }
    dVar6 = floor((double)auStack_c8._0_8_ + 0.5,(MethodInfo *)p_Var18);
    uVar21 = SUB84(dVar6,0);
    uVar22 = (undefined4)((ulong)dVar6 >> 0x20);
label_04349056:
    _Stack_a0._4_4_ = uVar22;
    _Stack_a0._0_4_ = uVar21;
    auStack_d8._0_4_ = auStack_d8._4_4_;
  }
  else {
    if ((dVar6 != -0.5) || (NAN(dVar6))) {
      dVar6 = ceil((double)auStack_c8._0_8_ + -0.5,(MethodInfo *)p_Var18);
      uVar21 = SUB84(dVar6,0);
      uVar22 = (undefined4)((ulong)dVar6 >> 0x20);
      goto label_04349056;
    }
    _Stack_a0 = _Stack_e0;
    if (((long)(double)_Stack_e0 & 1U) != 0) {
      _Stack_a0 = (void *)(_Stack_e0.genericMethod + -1.0);
    }
label_04348e4e:
    auStack_d8._0_4_ = auStack_d8._4_4_;
  }
  auStack_d8._4_4_ = auStack_d8._0_4_;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  auStack_d8._0_4_ = (float)auStack_d8._0_4_ * 255.0;
  fVar20 = (float)auStack_d8._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    fVar20 = (float)auStack_d8._0_4_;
  }
  p_Var18 = &_Stack_e0;
  auStack_c8._0_8_ = (double)fVar20;
  dVar6 = modf((double)fVar20,(double *)p_Var18,pMVar17);
  auStack_d8 = (undefined1  [8])_Stack_e0;
  if (0.0 <= (float)auStack_d8._0_4_) {
    if ((dVar6 != 0.5) || (NAN(dVar6))) {
      dVar6 = floor((double)auStack_c8._0_8_ + 0.5,(MethodInfo *)p_Var18);
      auStack_d8 = (undefined1  [8])dVar6;
    }
    else {
      if (((long)(double)_Stack_e0 & 1U) != 0) {
        auStack_d8 = (undefined1  [8])((double)_Stack_e0 + 1.0);
      }
label_04348f37:
    }
  }
  else if ((dVar6 != -0.5) || (NAN(dVar6))) {
    dVar6 = ceil((double)auStack_c8._0_8_ + -0.5,(MethodInfo *)p_Var18);
    auStack_d8 = (undefined1  [8])dVar6;
  }
  else {
    if (((long)(double)_Stack_e0 & 1U) == 0) goto label_04348f37;
    auStack_d8 = (undefined1  [8])((double)_Stack_e0 + -1.0);
  }
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  auStack_b8._0_4_ = (float)auStack_b8._0_4_ * 255.0;
  fVar20 = (float)auStack_b8._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    fVar20 = (float)auStack_b8._0_4_;
  }
  fVar19 = 1.0;
  if ((float)auStack_98._0_4_ <= 1.0) {
    fVar19 = (float)auStack_98._0_4_;
  }
  auStack_c8 = ZEXT416((uint)fVar19);
  dStack_80 = (double)fVar20;
  p_Var18 = &_Stack_e0;
  dVar6 = modf(dStack_80,(double *)p_Var18,pMVar17);
  _Var7 = _Stack_e0;
  if (0.0 <= (float)auStack_b8._0_4_) {
    if ((dVar6 == 0.5) && (!NAN(dVar6))) {
      if (((long)(double)_Stack_e0 & 1U) != 0) {
        _Var7.genericMethod = (void *)(_Stack_e0.genericMethod + 1.0);
      }
      goto label_0434901e;
    }
    dVar6 = floor(dStack_80 + 0.5,(MethodInfo *)p_Var18);
    uVar21 = SUB84(dVar6,0);
    uVar22 = (undefined4)((ulong)dVar6 >> 0x20);
label_043490ff:
    auVar8 = auStack_b8;
    auStack_b8._4_4_ = uVar22;
    auStack_b8._0_4_ = uVar21;
    auStack_b8._8_8_ = auVar8._8_8_;
  }
  else {
    if ((dVar6 != -0.5) || (NAN(dVar6))) {
      dVar6 = ceil(dStack_80 + -0.5,(MethodInfo *)p_Var18);
      uVar21 = SUB84(dVar6,0);
      uVar22 = (undefined4)((ulong)dVar6 >> 0x20);
      goto label_043490ff;
    }
    if (((long)(double)_Stack_e0 & 1U) != 0) {
      _Var7 = (void *)(_Stack_e0.genericMethod + -1.0);
    }
label_0434901e:
    auStack_b8._0_8_ = _Var7.genericMethod;
  }
  auStack_98._4_4_ = auStack_98._4_4_ & auStack_c8._4_4_;
  auStack_98._0_4_ = -(uint)(0.0 <= (float)auStack_98._0_4_) & (uint)((float)auStack_c8._0_4_ * 255.0);
  auStack_98._8_4_ = auStack_98._8_4_ & auStack_c8._8_4_;
  auStack_98._12_4_ = auStack_98._12_4_ & auStack_c8._12_4_;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  p_Var18 = &_Stack_e0;
  auStack_c8._0_8_ = (double)(float)auStack_98._0_4_;
  dVar6 = modf((double)(float)auStack_98._0_4_,(double *)p_Var18,pMVar17);
  fVar20 = 0.0;
  uVar21 = _Stack_e0._0_4_;
  uVar22 = _Stack_e0._4_4_;
  if (0.0 <= (float)auStack_98._0_4_) {
    if ((dVar6 != 0.5) || (NAN(dVar6))) {
      dVar6 = floor((double)auStack_c8._0_8_ + 0.5,(MethodInfo *)p_Var18);
      uVar21 = SUB84(dVar6,0);
      uVar22 = (undefined4)((ulong)dVar6 >> 0x20);
    }
    else if (((long)(double)_Stack_e0 & 1U) != 0) {
      dVar6 = (double)_Stack_e0 + 1.0;
      pSVar2 = (__this_04->fields)._setting;
      goto joined_r0x043491dd;
    }
label_04349249:
    dVar6 = (double)CONCAT44(uVar22,uVar21);
    pSVar2 = (__this_04->fields)._setting;
  }
  else if ((dVar6 != -0.5) || (NAN(dVar6))) {
    dVar6 = ceil((double)auStack_c8._0_8_ + -0.5,(MethodInfo *)p_Var18);
    pSVar2 = (__this_04->fields)._setting;
  }
  else {
    if (((long)(double)_Stack_e0 & 1U) == 0) goto label_04349249;
    dVar6 = (double)_Stack_e0 + -1.0;
    pSVar2 = (__this_04->fields)._setting;
  }
joined_r0x043491dd:
  if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
    r = (int)(double)_Stack_a0;
    g = (int)(double)auStack_d8;
    b = (int)(double)auStack_b8._0_8_;
    iVar16 = (int)dVar6;
    iVar1 = (pSVar2->fields).MinAlpha;
    a = 0xff;
    if (iVar16 < 0x100) {
      a = iVar16;
    }
    if (iVar16 < iVar1) {
      a = iVar1;
    }
    pUVar14 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar14,r,g,b,a,(MethodInfo *)0x0);
    return (UnityEngine_RectTransform_o *)pUVar14;
  }
label_043492bd:
  uVar21 = il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)p_Var18 + 300) = uVar21;
  *(float *)(p_Var18 + 0x26) = fVar20;
  *(undefined1 *)((long)p_Var18 + 0x192) = 1;
  UI_ColorPickPopup__ApplyCurrentColorToUI((UI_ColorPickPopup_o *)p_Var18,1,method_00);
  return extraout_RAX;
}


// UI.ColorPickPopup$$OnDestroy
// il2cpp: void UI_ColorPickPopup__OnDestroy (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x434a940

void UI_ColorPickPopup__OnDestroy(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  
  if (g_data_057ae0f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorPickPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0f9 = '\x01';
  }
  pUVar1 = (__this->fields)._svTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._svTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._alphaTexture;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._alphaTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar2 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_ColorPickPopup + 0xb8) = 0;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_ColorPickPopup + 0xb8),0);
    return;
  }
  return;
}


// UI.ColorPickPopup$$.ctor
// il2cpp: void UI_ColorPickPopup___ctor (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x434aaa0

void UI_ColorPickPopup___ctor(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  MethodInfo *method_00;
  
  if (g_data_057ae0fa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"#FFFFFFFF");
    g_data_057ae0fa = '\x01';
  }
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._red = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._red);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._green = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._green);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._blue = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._blue);
  pSVar1 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar1,0,0,0xff,(MethodInfo *)0x0);
  (__this->fields)._alpha = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._alpha,pSVar1);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,"#FFFFFFFF",9,(MethodInfo *)0x0);
  (__this->fields)._hex = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hex);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.ColorPickPopup$$<Setup>b__53_0
// il2cpp: void UI_ColorPickPopup___Setup_b__53_0 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x434ac20

void UI_ColorPickPopup___Setup_b__53_0(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_ColorSetting_o *pSVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Settings_IntSetting_o *pSVar5;
  double dVar6;
  _union_14 _Var7;
  undefined1 auVar8 [16];
  bool_conflict bVar9;
  Utility_Color255_o *pUVar10;
  int32_t *piVar11;
  int iVar12;
  MethodInfo *method_00;
  int32_t a;
  UI_ColorPickPopup_o *__this_00;
  MethodInfo *method_01;
  MethodInfo *pMVar13;
  UI_ColorPickPopup_o *__this_01;
  _union_14 *p_Var14;
  int g;
  int b;
  int r;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  UnityEngine_Color_o UVar19;
  _union_14 _Stack_a8;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  _union_14 _Stack_68;
  undefined1 auStack_60 [16];
  double dStack_48;
  UI_ColorPickPopup_o *pUStack_40;
  
  if (g_data_057ae0fb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae0fb = '\x01';
  }
  pMVar13 = "Save";
  if (g_data_057ae0e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae0e9 = '\x01';
  }
  bVar9 = System_String__op_Equality((System_String_o *)pMVar13,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
label_04348cb1:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  method_01 = "Save";
  bVar9 = System_String__op_Equality
                    ((System_String_o *)pMVar13,(System_String_o *)"Save",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  __this_00 = (UI_ColorPickPopup_o *)(__this->fields)._setting;
  __this_01 = __this;
  pUVar10 = UI_ColorPickPopup__GetCurrentColor255(__this,method_01);
  if (__this_00 != (UI_ColorPickPopup_o *)0x0) {
    __this_01 = __this_00;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)pUVar10,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields)._setting;
    if ((pSVar2 != (Settings_ColorSetting_o *)0x0) &&
       (__this_01 = (UI_ColorPickPopup_o *)(pSVar2->fields)._value, __this_01 != (UI_ColorPickPopup_o *)0x0))
    {
      pUVar3 = (__this->fields)._image;
      UVar19 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
      __this_00 = (UI_ColorPickPopup_o *)0x0;
      if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
        (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                  (UVar19.fields.r,UVar19.fields.b,pUVar3,(pUVar3->klass->vtable)._23_set_color.method);
        pUVar4 = (__this->fields)._onChangeColor;
        if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
        }
        goto label_04348cb1;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_40 = __this_00;
  if (g_data_057ae0f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ae0f5 = '\x01';
  }
  uVar17 = 0;
  uVar18 = 0;
  p_Var14 = (_union_14 *)0x1;
  pMVar13 = (MethodInfo *)0x0;
  UVar19 = UnityEngine_Color__HSVToRGB_4de5b40
                     ((__this_01->fields)._hue,(__this_01->fields)._saturation,(__this_01->fields)._value,1,
                      (MethodInfo *)0x0);
  fVar16 = UVar19.fields.b;
  pSVar2 = (__this_01->fields)._setting;
  auStack_80._8_4_ = uVar17;
  auStack_80._0_8_ = UVar19.fields._8_8_;
  auStack_80._12_4_ = uVar18;
  if (pSVar2 == (Settings_ColorSetting_o *)0x0) {
    pSVar5 = (__this_01->fields)._alpha;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_043492bd;
    piVar11 = &(pSVar5->fields).MinValue;
  }
  else {
    piVar11 = &(pSVar2->fields).MinAlpha;
  }
  fVar16 = (__this_01->fields)._alphaValue;
  fVar15 = (float)*piVar11 / 255.0;
  if ((float)*piVar11 / 255.0 <= fVar16) {
    fVar15 = fVar16;
  }
  auStack_60 = ZEXT416((uint)fVar15);
  uStack_98 = extraout_XMM0_Dc;
  auStack_a0 = (undefined1  [8])UVar19.fields._0_8_;
  uStack_94 = extraout_XMM0_Dd;
  fVar16 = UVar19.fields.r;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    fVar16 = (float)auStack_a0._0_4_;
  }
  _Stack_68._0_4_ = fVar16 * 255.0;
  uVar17 = fVar16 * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar17 = _Stack_68._0_4_;
  }
  p_Var14 = &_Stack_a8;
  auStack_90._0_8_ = (double)(float)uVar17;
  dVar6 = modf((double)(float)uVar17,(double *)p_Var14,pMVar13);
  if (0.0 <= (float)_Stack_68._0_4_) {
    if ((dVar6 == 0.5) && (!NAN(dVar6))) {
      _Stack_68 = _Stack_a8;
      if (((long)(double)_Stack_a8 & 1U) != 0) {
        _Stack_68.genericMethod = (void *)(_Stack_a8.genericMethod + 1.0);
      }
      goto label_04348e4e;
    }
    dVar6 = floor((double)auStack_90._0_8_ + 0.5,(MethodInfo *)p_Var14);
    uVar17 = SUB84(dVar6,0);
    uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
label_04349056:
    _Stack_68._4_4_ = uVar18;
    _Stack_68._0_4_ = uVar17;
    auStack_a0._0_4_ = auStack_a0._4_4_;
  }
  else {
    if ((dVar6 != -0.5) || (NAN(dVar6))) {
      dVar6 = ceil((double)auStack_90._0_8_ + -0.5,(MethodInfo *)p_Var14);
      uVar17 = SUB84(dVar6,0);
      uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
      goto label_04349056;
    }
    _Stack_68 = _Stack_a8;
    if (((long)(double)_Stack_a8 & 1U) != 0) {
      _Stack_68 = (void *)(_Stack_a8.genericMethod + -1.0);
    }
label_04348e4e:
    auStack_a0._0_4_ = auStack_a0._4_4_;
  }
  auStack_a0._4_4_ = auStack_a0._0_4_;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  auStack_a0._0_4_ = (float)auStack_a0._0_4_ * 255.0;
  fVar16 = (float)auStack_a0._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    fVar16 = (float)auStack_a0._0_4_;
  }
  p_Var14 = &_Stack_a8;
  auStack_90._0_8_ = (double)fVar16;
  dVar6 = modf((double)fVar16,(double *)p_Var14,pMVar13);
  auStack_a0 = (undefined1  [8])_Stack_a8;
  if (0.0 <= (float)auStack_a0._0_4_) {
    if ((dVar6 != 0.5) || (NAN(dVar6))) {
      dVar6 = floor((double)auStack_90._0_8_ + 0.5,(MethodInfo *)p_Var14);
      auStack_a0 = (undefined1  [8])dVar6;
    }
    else {
      if (((long)(double)_Stack_a8 & 1U) != 0) {
        auStack_a0 = (undefined1  [8])((double)_Stack_a8 + 1.0);
      }
label_04348f37:
    }
  }
  else if ((dVar6 != -0.5) || (NAN(dVar6))) {
    dVar6 = ceil((double)auStack_90._0_8_ + -0.5,(MethodInfo *)p_Var14);
    auStack_a0 = (undefined1  [8])dVar6;
  }
  else {
    if (((long)(double)_Stack_a8 & 1U) == 0) goto label_04348f37;
    auStack_a0 = (undefined1  [8])((double)_Stack_a8 + -1.0);
  }
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  auStack_80._0_4_ = (float)auStack_80._0_4_ * 255.0;
  fVar16 = (float)auStack_80._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    fVar16 = (float)auStack_80._0_4_;
  }
  fVar15 = 1.0;
  if ((float)auStack_60._0_4_ <= 1.0) {
    fVar15 = (float)auStack_60._0_4_;
  }
  auStack_90 = ZEXT416((uint)fVar15);
  dStack_48 = (double)fVar16;
  p_Var14 = &_Stack_a8;
  dVar6 = modf(dStack_48,(double *)p_Var14,pMVar13);
  _Var7 = _Stack_a8;
  if (0.0 <= (float)auStack_80._0_4_) {
    if ((dVar6 == 0.5) && (!NAN(dVar6))) {
      if (((long)(double)_Stack_a8 & 1U) != 0) {
        _Var7.genericMethod = (void *)(_Stack_a8.genericMethod + 1.0);
      }
      goto label_0434901e;
    }
    dVar6 = floor(dStack_48 + 0.5,(MethodInfo *)p_Var14);
    uVar17 = SUB84(dVar6,0);
    uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
label_043490ff:
    auVar8 = auStack_80;
    auStack_80._4_4_ = uVar18;
    auStack_80._0_4_ = uVar17;
    auStack_80._8_8_ = auVar8._8_8_;
  }
  else {
    if ((dVar6 != -0.5) || (NAN(dVar6))) {
      dVar6 = ceil(dStack_48 + -0.5,(MethodInfo *)p_Var14);
      uVar17 = SUB84(dVar6,0);
      uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
      goto label_043490ff;
    }
    if (((long)(double)_Stack_a8 & 1U) != 0) {
      _Var7 = (void *)(_Stack_a8.genericMethod + -1.0);
    }
label_0434901e:
    auStack_80._0_8_ = _Var7.genericMethod;
  }
  auStack_60._4_4_ = auStack_60._4_4_ & auStack_90._4_4_;
  auStack_60._0_4_ = -(uint)(0.0 <= (float)auStack_60._0_4_) & (uint)((float)auStack_90._0_4_ * 255.0);
  auStack_60._8_4_ = auStack_60._8_4_ & auStack_90._8_4_;
  auStack_60._12_4_ = auStack_60._12_4_ & auStack_90._12_4_;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  p_Var14 = &_Stack_a8;
  auStack_90._0_8_ = (double)(float)auStack_60._0_4_;
  dVar6 = modf((double)(float)auStack_60._0_4_,(double *)p_Var14,pMVar13);
  fVar16 = 0.0;
  uVar17 = _Stack_a8._0_4_;
  uVar18 = _Stack_a8._4_4_;
  if (0.0 <= (float)auStack_60._0_4_) {
    if ((dVar6 != 0.5) || (NAN(dVar6))) {
      dVar6 = floor((double)auStack_90._0_8_ + 0.5,(MethodInfo *)p_Var14);
      uVar17 = SUB84(dVar6,0);
      uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
    }
    else if (((long)(double)_Stack_a8 & 1U) != 0) {
      dVar6 = (double)_Stack_a8 + 1.0;
      pSVar2 = (__this_01->fields)._setting;
      goto joined_r0x043491dd;
    }
label_04349249:
    dVar6 = (double)CONCAT44(uVar18,uVar17);
    pSVar2 = (__this_01->fields)._setting;
  }
  else if ((dVar6 != -0.5) || (NAN(dVar6))) {
    dVar6 = ceil((double)auStack_90._0_8_ + -0.5,(MethodInfo *)p_Var14);
    pSVar2 = (__this_01->fields)._setting;
  }
  else {
    if (((long)(double)_Stack_a8 & 1U) == 0) goto label_04349249;
    dVar6 = (double)_Stack_a8 + -1.0;
    pSVar2 = (__this_01->fields)._setting;
  }
joined_r0x043491dd:
  if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
    r = (int)(double)_Stack_68;
    g = (int)(double)auStack_a0;
    b = (int)(double)auStack_80._0_8_;
    iVar12 = (int)dVar6;
    iVar1 = (pSVar2->fields).MinAlpha;
    a = 0xff;
    if (iVar12 < 0x100) {
      a = iVar12;
    }
    if (iVar12 < iVar1) {
      a = iVar1;
    }
    pUVar10 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar10,r,g,b,a,(MethodInfo *)0x0);
    return;
  }
label_043492bd:
  uVar17 = il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)p_Var14 + 300) = uVar17;
  *(float *)(p_Var14 + 0x26) = fVar16;
  *(undefined1 *)((long)p_Var14 + 0x192) = 1;
  UI_ColorPickPopup__ApplyCurrentColorToUI((UI_ColorPickPopup_o *)p_Var14,1,method_00);
  return;
}


// UI.ColorPickPopup$$<Setup>b__53_1
// il2cpp: void UI_ColorPickPopup___Setup_b__53_1 (UI_ColorPickPopup_o* __this, const MethodInfo* method);
// 0x434ac60

void UI_ColorPickPopup___Setup_b__53_1(UI_ColorPickPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_ColorSetting_o *pSVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Settings_IntSetting_o *pSVar5;
  double dVar6;
  _union_14 _Var7;
  System_String_o *a;
  undefined1 auVar8 [16];
  bool_conflict bVar9;
  Utility_Color255_o *pUVar10;
  int32_t *piVar11;
  int iVar12;
  MethodInfo *method_00;
  int32_t a_00;
  UI_ColorPickPopup_o *__this_00;
  MethodInfo *pMVar13;
  UI_ColorPickPopup_o *__this_01;
  _union_14 *p_Var14;
  int g;
  int b;
  int r;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  UnityEngine_Color_o UVar19;
  _union_14 _Stack_a8;
  undefined1 auStack_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  _union_14 _Stack_68;
  undefined1 auStack_60 [16];
  double dStack_48;
  UI_ColorPickPopup_o *pUStack_40;
  
  if (g_data_057ae0fc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae0fc = '\x01';
  }
  a = "Cancel";
  if (g_data_057ae0e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae0e9 = '\x01';
  }
  bVar9 = System_String__op_Equality(a,"Cancel",(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
label_04348cb1:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pMVar13 = "Save";
  bVar9 = System_String__op_Equality(a,(System_String_o *)"Save",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    return;
  }
  __this_00 = (UI_ColorPickPopup_o *)(__this->fields)._setting;
  __this_01 = __this;
  pUVar10 = UI_ColorPickPopup__GetCurrentColor255(__this,pMVar13);
  if (__this_00 != (UI_ColorPickPopup_o *)0x0) {
    __this_01 = __this_00;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)pUVar10,MethodInfo_Void_set_Value);
    pSVar2 = (__this->fields)._setting;
    if ((pSVar2 != (Settings_ColorSetting_o *)0x0) &&
       (__this_01 = (UI_ColorPickPopup_o *)(pSVar2->fields)._value, __this_01 != (UI_ColorPickPopup_o *)0x0))
    {
      pUVar3 = (__this->fields)._image;
      UVar19 = Utility_Color255__ToColor((Utility_Color255_o *)__this_01,(MethodInfo *)0x0);
      __this_00 = (UI_ColorPickPopup_o *)0x0;
      if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
        (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                  (UVar19.fields.r,UVar19.fields.b,pUVar3,(pUVar3->klass->vtable)._23_set_color.method);
        pUVar4 = (__this->fields)._onChangeColor;
        if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
        }
        goto label_04348cb1;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_40 = __this_00;
  if (g_data_057ae0f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    g_data_057ae0f5 = '\x01';
  }
  uVar17 = 0;
  uVar18 = 0;
  p_Var14 = (_union_14 *)0x1;
  pMVar13 = (MethodInfo *)0x0;
  UVar19 = UnityEngine_Color__HSVToRGB_4de5b40
                     ((__this_01->fields)._hue,(__this_01->fields)._saturation,(__this_01->fields)._value,1,
                      (MethodInfo *)0x0);
  fVar16 = UVar19.fields.b;
  pSVar2 = (__this_01->fields)._setting;
  auStack_80._8_4_ = uVar17;
  auStack_80._0_8_ = UVar19.fields._8_8_;
  auStack_80._12_4_ = uVar18;
  if (pSVar2 == (Settings_ColorSetting_o *)0x0) {
    pSVar5 = (__this_01->fields)._alpha;
    if (pSVar5 == (Settings_IntSetting_o *)0x0) goto label_043492bd;
    piVar11 = &(pSVar5->fields).MinValue;
  }
  else {
    piVar11 = &(pSVar2->fields).MinAlpha;
  }
  fVar16 = (__this_01->fields)._alphaValue;
  fVar15 = (float)*piVar11 / 255.0;
  if ((float)*piVar11 / 255.0 <= fVar16) {
    fVar15 = fVar16;
  }
  auStack_60 = ZEXT416((uint)fVar15);
  uStack_98 = extraout_XMM0_Dc;
  auStack_a0 = (undefined1  [8])UVar19.fields._0_8_;
  uStack_94 = extraout_XMM0_Dd;
  fVar16 = UVar19.fields.r;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    fVar16 = (float)auStack_a0._0_4_;
  }
  _Stack_68._0_4_ = fVar16 * 255.0;
  uVar17 = fVar16 * 255.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar17 = _Stack_68._0_4_;
  }
  p_Var14 = &_Stack_a8;
  auStack_90._0_8_ = (double)(float)uVar17;
  dVar6 = modf((double)(float)uVar17,(double *)p_Var14,pMVar13);
  if (0.0 <= (float)_Stack_68._0_4_) {
    if ((dVar6 == 0.5) && (!NAN(dVar6))) {
      _Stack_68 = _Stack_a8;
      if (((long)(double)_Stack_a8 & 1U) != 0) {
        _Stack_68.genericMethod = (void *)(_Stack_a8.genericMethod + 1.0);
      }
      goto label_04348e4e;
    }
    dVar6 = floor((double)auStack_90._0_8_ + 0.5,(MethodInfo *)p_Var14);
    uVar17 = SUB84(dVar6,0);
    uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
label_04349056:
    _Stack_68._4_4_ = uVar18;
    _Stack_68._0_4_ = uVar17;
    auStack_a0._0_4_ = auStack_a0._4_4_;
  }
  else {
    if ((dVar6 != -0.5) || (NAN(dVar6))) {
      dVar6 = ceil((double)auStack_90._0_8_ + -0.5,(MethodInfo *)p_Var14);
      uVar17 = SUB84(dVar6,0);
      uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
      goto label_04349056;
    }
    _Stack_68 = _Stack_a8;
    if (((long)(double)_Stack_a8 & 1U) != 0) {
      _Stack_68 = (void *)(_Stack_a8.genericMethod + -1.0);
    }
label_04348e4e:
    auStack_a0._0_4_ = auStack_a0._4_4_;
  }
  auStack_a0._4_4_ = auStack_a0._0_4_;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  auStack_a0._0_4_ = (float)auStack_a0._0_4_ * 255.0;
  fVar16 = (float)auStack_a0._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    fVar16 = (float)auStack_a0._0_4_;
  }
  p_Var14 = &_Stack_a8;
  auStack_90._0_8_ = (double)fVar16;
  dVar6 = modf((double)fVar16,(double *)p_Var14,pMVar13);
  auStack_a0 = (undefined1  [8])_Stack_a8;
  if (0.0 <= (float)auStack_a0._0_4_) {
    if ((dVar6 != 0.5) || (NAN(dVar6))) {
      dVar6 = floor((double)auStack_90._0_8_ + 0.5,(MethodInfo *)p_Var14);
      auStack_a0 = (undefined1  [8])dVar6;
    }
    else {
      if (((long)(double)_Stack_a8 & 1U) != 0) {
        auStack_a0 = (undefined1  [8])((double)_Stack_a8 + 1.0);
      }
label_04348f37:
    }
  }
  else if ((dVar6 != -0.5) || (NAN(dVar6))) {
    dVar6 = ceil((double)auStack_90._0_8_ + -0.5,(MethodInfo *)p_Var14);
    auStack_a0 = (undefined1  [8])dVar6;
  }
  else {
    if (((long)(double)_Stack_a8 & 1U) == 0) goto label_04348f37;
    auStack_a0 = (undefined1  [8])((double)_Stack_a8 + -1.0);
  }
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
  }
  auStack_80._0_4_ = (float)auStack_80._0_4_ * 255.0;
  fVar16 = (float)auStack_80._0_4_;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    fVar16 = (float)auStack_80._0_4_;
  }
  fVar15 = 1.0;
  if ((float)auStack_60._0_4_ <= 1.0) {
    fVar15 = (float)auStack_60._0_4_;
  }
  auStack_90 = ZEXT416((uint)fVar15);
  dStack_48 = (double)fVar16;
  p_Var14 = &_Stack_a8;
  dVar6 = modf(dStack_48,(double *)p_Var14,pMVar13);
  _Var7 = _Stack_a8;
  if (0.0 <= (float)auStack_80._0_4_) {
    if ((dVar6 == 0.5) && (!NAN(dVar6))) {
      if (((long)(double)_Stack_a8 & 1U) != 0) {
        _Var7.genericMethod = (void *)(_Stack_a8.genericMethod + 1.0);
      }
      goto label_0434901e;
    }
    dVar6 = floor(dStack_48 + 0.5,(MethodInfo *)p_Var14);
    uVar17 = SUB84(dVar6,0);
    uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
label_043490ff:
    auVar8 = auStack_80;
    auStack_80._4_4_ = uVar18;
    auStack_80._0_4_ = uVar17;
    auStack_80._8_8_ = auVar8._8_8_;
  }
  else {
    if ((dVar6 != -0.5) || (NAN(dVar6))) {
      dVar6 = ceil(dStack_48 + -0.5,(MethodInfo *)p_Var14);
      uVar17 = SUB84(dVar6,0);
      uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
      goto label_043490ff;
    }
    if (((long)(double)_Stack_a8 & 1U) != 0) {
      _Var7 = (void *)(_Stack_a8.genericMethod + -1.0);
    }
label_0434901e:
    auStack_80._0_8_ = _Var7.genericMethod;
  }
  auStack_60._4_4_ = auStack_60._4_4_ & auStack_90._4_4_;
  auStack_60._0_4_ = -(uint)(0.0 <= (float)auStack_60._0_4_) & (uint)((float)auStack_90._0_4_ * 255.0);
  auStack_60._8_4_ = auStack_60._8_4_ & auStack_90._8_4_;
  auStack_60._12_4_ = auStack_60._12_4_ & auStack_90._12_4_;
  if (g_data_057a7b0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a7b0a = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  p_Var14 = &_Stack_a8;
  auStack_90._0_8_ = (double)(float)auStack_60._0_4_;
  dVar6 = modf((double)(float)auStack_60._0_4_,(double *)p_Var14,pMVar13);
  fVar16 = 0.0;
  uVar17 = _Stack_a8._0_4_;
  uVar18 = _Stack_a8._4_4_;
  if (0.0 <= (float)auStack_60._0_4_) {
    if ((dVar6 != 0.5) || (NAN(dVar6))) {
      dVar6 = floor((double)auStack_90._0_8_ + 0.5,(MethodInfo *)p_Var14);
      uVar17 = SUB84(dVar6,0);
      uVar18 = (undefined4)((ulong)dVar6 >> 0x20);
    }
    else if (((long)(double)_Stack_a8 & 1U) != 0) {
      dVar6 = (double)_Stack_a8 + 1.0;
      pSVar2 = (__this_01->fields)._setting;
      goto joined_r0x043491dd;
    }
label_04349249:
    dVar6 = (double)CONCAT44(uVar18,uVar17);
    pSVar2 = (__this_01->fields)._setting;
  }
  else if ((dVar6 != -0.5) || (NAN(dVar6))) {
    dVar6 = ceil((double)auStack_90._0_8_ + -0.5,(MethodInfo *)p_Var14);
    pSVar2 = (__this_01->fields)._setting;
  }
  else {
    if (((long)(double)_Stack_a8 & 1U) == 0) goto label_04349249;
    dVar6 = (double)_Stack_a8 + -1.0;
    pSVar2 = (__this_01->fields)._setting;
  }
joined_r0x043491dd:
  if (pSVar2 != (Settings_ColorSetting_o *)0x0) {
    r = (int)(double)_Stack_68;
    g = (int)(double)auStack_a0;
    b = (int)(double)auStack_80._0_8_;
    iVar12 = (int)dVar6;
    iVar1 = (pSVar2->fields).MinAlpha;
    a_00 = 0xff;
    if (iVar12 < 0x100) {
      a_00 = iVar12;
    }
    if (iVar12 < iVar1) {
      a_00 = iVar1;
    }
    pUVar10 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(pUVar10,r,g,b,a_00,(MethodInfo *)0x0);
    return;
  }
label_043492bd:
  uVar17 = il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)((long)p_Var14 + 300) = uVar17;
  *(float *)(p_Var14 + 0x26) = fVar16;
  *(undefined1 *)((long)p_Var14 + 0x192) = 1;
  UI_ColorPickPopup__ApplyCurrentColorToUI((UI_ColorPickPopup_o *)p_Var14,1,method_00);
  return;
}


