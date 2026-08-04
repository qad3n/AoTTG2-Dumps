// Type: UI.DropdownSelectElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/DropdownSelectElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSelectElement.cs
// --------------------------------

// UI.DropdownSelectElement$$Setup
// il2cpp: void UI_DropdownSelectElement__Setup (UI_DropdownSelectElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, const MethodInfo* method);
// 0x438f100

void UI_DropdownSelectElement__Setup
               (UI_DropdownSelectElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth
               ,float elementHeight,float optionsWidth,float maxScrollHeight,
               UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  UnityEngine_GameObject_o **ppUVar3;
  UnityEngine_UI_Scrollbar_o **ppUVar4;
  byte bVar5;
  int32_t iVar6;
  uint uVar7;
  int iVar8;
  System_String_o *pSVar9;
  Il2CppClass *__this_00;
  System_Diagnostics_StackTrace_array *pSVar10;
  UnityEngine_Vector2_o UVar11;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_UI_Text_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_GameObject_o *pUVar14;
  Il2CppObject *pIVar15;
  UnityEngine_Events_UnityAction_o *call;
  ulong uVar16;
  UnityEngine_UI_Selectable_o *__this_01;
  UnityEngine_RectTransform_o *pUVar17;
  UnityEngine_UI_ScrollRect_o *__this_02;
  UnityEngine_UI_Scrollbar_o *pUVar18;
  UnityEngine_Transform_o *pUVar19;
  undefined8 uVar20;
  System_ArgumentException_o *__this_03;
  System_String_o *pSVar21;
  int32_t value_01;
  UI_ElementStyle_o *style_00;
  ulong uVar22;
  MethodInfo_255A0F0 **__this_04;
  Settings_TypedSetting_T__o *__this_05;
  MethodInfo *pMVar23;
  float fVar24;
  UnityEngine_Color_o UVar25;
  UnityEngine_UI_ColorBlock_o UStack_b0;
  UI_DropdownSelectElement_o *pUStack_58;
  UnityEngine_Events_UnityAction_o *in_stack_ffffffffffffffe0;
  
  pSVar21 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_04 = (MethodInfo_255A0F0 **)__this;
  UI_DropdownSettingElement__Setup
            ((UI_DropdownSettingElement_o *)__this,setting,style,pSVar21,options,tooltip,elementWidth,
             elementHeight,optionsWidth,maxScrollHeight,onDropdownOptionSelect,
             (MethodInfo *)in_stack_ffffffffffffffe0);
  if (style != (UI_ElementStyle_o *)0x0) {
    __this = (UI_DropdownSelectElement_o *)(__this->fields)._selectedButtonLabel;
    iVar6 = (style->fields).FontSize;
    if (g_data_057ae295 == '\0') {
      __this_04 = &MethodInfo_Text_GetComponent_Text;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae295 = '\x01';
    }
    if ((__this != (UI_DropdownSelectElement_o *)0x0) &&
       (setting = (Settings_BaseSetting_o *)MethodInfo_Text_GetComponent_Text, __this_04 = (MethodInfo_255A0F0 **)__this,
       pUVar12 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this,MethodInfo_Text_GetComponent_Text)
       , pUVar12 != (UnityEngine_UI_Text_o *)0x0)) {
      (*(pUVar12->klass->vtable)._75_set_text.methodPtr)
                (pUVar12,title,(pUVar12->klass->vtable)._75_set_text.method);
      UnityEngine_UI_Text__set_fontSize(pUVar12,iVar6,(MethodInfo *)0x0);
      return;
    }
  }
  fVar24 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar23 = (MethodInfo *)tooltip;
  pUStack_58 = __this;
  if (g_data_057ae2a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Scrollbar_GetComponent_Scrollbar);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponent_ScrollRect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DropdownTextColor");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"DropdownBorderColor");
    il2cpp_runtime_helper_023445d0(&"DropdownScrollbarBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"DropdownScrollbar");
    il2cpp_runtime_helper_023445d0(&"Dropdown/Mask");
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    il2cpp_runtime_helper_023445d0(&"Image");
    il2cpp_runtime_helper_023445d0(&"Scrollbar");
    il2cpp_runtime_helper_023445d0(&"Dropdown/SelectedButton");
    il2cpp_runtime_helper_023445d0(&"Options");
    g_data_057ae2a0 = '\x01';
  }
  if (options == (System_String_array *)0x0) goto label_0438fd4d;
  if (options->max_length != 0) {
    (((UI_DropdownSettingElement_o *)__this_04)->fields)._onDropdownOptionSelect = in_stack_ffffffffffffffe0;
    il2cpp_runtime_helper_022b4080(&(((UI_DropdownSettingElement_o *)__this_04)->fields)._onDropdownOptionSelect);
    (((UI_DropdownSettingElement_o *)__this_04)->fields)._options = options;
    il2cpp_runtime_helper_022b4080(&(((UI_DropdownSettingElement_o *)__this_04)->fields)._options);
    pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    if ((pUVar13 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar13 = UnityEngine_Transform__Find(pUVar13,"Dropdown/Mask",(MethodInfo *)0x0),
       pUVar13 == (UnityEngine_Transform_o *)0x0)) {
label_0438fd4d:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
      ppUVar1 = &(((UI_DropdownSettingElement_o *)__this_04)->fields)._optionsPanel;
      (((UI_DropdownSettingElement_o *)__this_04)->fields)._optionsPanel = pUVar14;
      il2cpp_runtime_helper_022b4080();
      pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
      if ((pUVar13 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar13 = UnityEngine_Transform__Find(pUVar13,"Dropdown/SelectedButton",(MethodInfo *)0x0),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_0438fd4d;
      pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
      ppUVar2 = &(((UI_DropdownSettingElement_o *)__this_04)->fields)._selectedButton;
      (((UI_DropdownSettingElement_o *)__this_04)->fields)._selectedButton = pUVar14;
      il2cpp_runtime_helper_022b4080();
      pUVar14 = (((UI_DropdownSettingElement_o *)__this_04)->fields)._selectedButton;
      if (((pUVar14 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar13 = UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0),
          pUVar13 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar13 = UnityEngine_Transform__Find(pUVar13,"Label",(MethodInfo *)0x0),
         pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_0438fd4d;
      pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
      ppUVar3 = &(((UI_DropdownSettingElement_o *)__this_04)->fields)._selectedButtonLabel;
      (((UI_DropdownSettingElement_o *)__this_04)->fields)._selectedButtonLabel = pUVar14;
      il2cpp_runtime_helper_022b4080(ppUVar3,pUVar14);
      if ((int)options->max_length != 0) {
        if (style_00 != (UI_ElementStyle_o *)0x0) {
          pUVar14 = (((UI_DropdownSettingElement_o *)__this_04)->fields)._selectedButtonLabel;
          pSVar9 = options->m_Items[0];
          iVar6 = (style_00->fields).FontSize;
          if (g_data_057ae295 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            g_data_057ae295 = '\x01';
          }
          if ((pUVar14 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar12 = (UnityEngine_UI_Text_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_Text_GetComponent_Text),
             pUVar12 != (UnityEngine_UI_Text_o *)0x0)) {
            (*(pUVar12->klass->vtable)._75_set_text.methodPtr)
                      (pUVar12,pSVar9,(pUVar12->klass->vtable)._75_set_text.method);
            UnityEngine_UI_Text__set_fontSize(pUVar12,iVar6,(MethodInfo *)0x0);
            if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
               (pIVar15 = UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_Button_GetComponent_Button),
               pIVar15 != (Il2CppObject *)0x0)) {
              __this_00 = pIVar15[0x10].klass;
              call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_00 != (Il2CppClass *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
                if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                   (pIVar15 = UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                   pIVar15 != (Il2CppObject *)0x0)) {
                  (*pIVar15->klass->vtable[0x24].methodPtr)
                            (fVar24,pIVar15,pIVar15->klass->vtable[0x24].method);
                  if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                     (pIVar15 = UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                     pIVar15 != (Il2CppObject *)0x0)) {
                    (*pIVar15->klass->vtable[0x26].methodPtr)
                              (elementHeight,pIVar15,pIVar15->klass->vtable[0x26].method);
                    if (0 < (int)options->max_length) {
                      uVar16 = options->max_length & 0xffffffff;
                      uVar22 = 0;
                      do {
                        if (uVar16 <= uVar22) goto label_0438fd52;
                        UI_DropdownSettingElement__CreateOptionButton
                                  ((UI_DropdownSettingElement_o *)__this_04,options->m_Items[uVar22],
                                   (int32_t)uVar22,optionsWidth,elementHeight,(style_00->fields).FontSize,
                                   (style_00->fields).ThemePanel,pMVar23);
                        uVar22 = uVar22 + 1;
                        uVar7 = (uint)options->max_length;
                        uVar16 = (ulong)uVar7;
                      } while ((long)uVar22 < (long)(int)uVar7);
                    }
                    if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                      __this_01 = (UnityEngine_UI_Selectable_o *)
                                  UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_Button_GetComponent_Button);
                      pSVar9 = (style_00->fields).ThemePanel;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UI_UIManager__GetThemeColorBlock
                                (&UStack_b0,pSVar9,"DefaultSetting","Dropdown","DefaultPanel",(MethodInfo *)0x0);
                      if (__this_01 != (UnityEngine_UI_Selectable_o *)0x0) {
                        value.fields.m_NormalColor.fields.b = UStack_b0.fields.m_NormalColor.fields.b;
                        value.fields.m_NormalColor.fields.a = UStack_b0.fields.m_NormalColor.fields.a;
                        value.fields.m_NormalColor.fields.r = UStack_b0.fields.m_NormalColor.fields.r;
                        value.fields.m_NormalColor.fields.g = UStack_b0.fields.m_NormalColor.fields.g;
                        value.fields.m_HighlightedColor.fields.r =
                             UStack_b0.fields.m_HighlightedColor.fields.r;
                        value.fields.m_HighlightedColor.fields.g =
                             UStack_b0.fields.m_HighlightedColor.fields.g;
                        value.fields.m_HighlightedColor.fields.b =
                             UStack_b0.fields.m_HighlightedColor.fields.b;
                        value.fields.m_HighlightedColor.fields.a =
                             UStack_b0.fields.m_HighlightedColor.fields.a;
                        value.fields.m_PressedColor.fields.r = UStack_b0.fields.m_PressedColor.fields.r;
                        value.fields.m_PressedColor.fields.g = UStack_b0.fields.m_PressedColor.fields.g;
                        value.fields.m_PressedColor.fields.b = UStack_b0.fields.m_PressedColor.fields.b;
                        value.fields.m_PressedColor.fields.a = UStack_b0.fields.m_PressedColor.fields.a;
                        value.fields.m_SelectedColor.fields.r = UStack_b0.fields.m_SelectedColor.fields.r;
                        value.fields.m_SelectedColor.fields.g = UStack_b0.fields.m_SelectedColor.fields.g;
                        value.fields.m_SelectedColor.fields.b = UStack_b0.fields.m_SelectedColor.fields.b;
                        value.fields.m_SelectedColor.fields.a = UStack_b0.fields.m_SelectedColor.fields.a;
                        value.fields.m_DisabledColor.fields.r = UStack_b0.fields.m_DisabledColor.fields.r;
                        value.fields.m_DisabledColor.fields.g = UStack_b0.fields.m_DisabledColor.fields.g;
                        value.fields.m_DisabledColor.fields.b = UStack_b0.fields.m_DisabledColor.fields.b;
                        value.fields.m_DisabledColor.fields.a = UStack_b0.fields.m_DisabledColor.fields.a;
                        value.fields.m_ColorMultiplier = UStack_b0.fields.m_ColorMultiplier;
                        value.fields.m_FadeDuration = UStack_b0.fields.m_FadeDuration;
                        UnityEngine_UI_Selectable__set_colors(__this_01,value,(MethodInfo *)0x0);
                        pUVar14 = *ppUVar3;
                        if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar15 = UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_Text_GetComponent_Text);
                          UVar25 = UI_UIManager__GetThemeColor
                                             ((style_00->fields).ThemePanel,"DefaultSetting","DropdownTextColor",
                                              "DefaultPanel",(MethodInfo *)0x0);
                          if (pIVar15 != (Il2CppObject *)0x0) {
                            (*pIVar15->klass->vtable[0x17].methodPtr)(UVar25.fields.r,UVar25.fields.b,pIVar15)
                            ;
                            if (((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                                (pUVar13 = UnityEngine_GameObject__get_transform(*ppUVar2,(MethodInfo *)0x0),
                                pUVar13 != (UnityEngine_Transform_o *)0x0)) &&
                               (pUVar13 = UnityEngine_Transform__Find(pUVar13,"Image",(MethodInfo *)0x0),
                               pUVar13 != (UnityEngine_Transform_o *)0x0)) {
                              pIVar15 = UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)pUVar13,MethodInfo_Image_GetComponent_Image);
                              UVar25 = UI_UIManager__GetThemeColor
                                                 ((style_00->fields).ThemePanel,"DefaultSetting","DropdownTextColor",
                                                  "DefaultPanel",(MethodInfo *)0x0);
                              if (pIVar15 != (Il2CppObject *)0x0) {
                                (*pIVar15->klass->vtable[0x17].methodPtr)
                                          (UVar25.fields.r,UVar25.fields.b,pIVar15);
                                if (((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                    (pUVar13 = UnityEngine_GameObject__get_transform
                                                         (*ppUVar1,(MethodInfo *)0x0),
                                    pUVar13 != (UnityEngine_Transform_o *)0x0)) &&
                                   (pUVar13 = UnityEngine_Transform__Find
                                                        (pUVar13,"Options",(MethodInfo *)0x0),
                                   pUVar13 != (UnityEngine_Transform_o *)0x0)) {
                                  pIVar15 = UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar13,MethodInfo_Image_GetComponent_Image);
                                  UVar25 = UI_UIManager__GetThemeColor
                                                     ((style_00->fields).ThemePanel,"DefaultSetting","DropdownBorderColor",
                                                      "DefaultPanel",(MethodInfo *)0x0);
                                  if (pIVar15 != (Il2CppObject *)0x0) {
                                    (*pIVar15->klass->vtable[0x17].methodPtr)(UVar25.fields.r,UVar25.fields.b)
                                    ;
                                    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                                    if (((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                        (pUVar13 = UnityEngine_GameObject__get_transform
                                                             (*ppUVar1,(MethodInfo *)0x0),
                                        pUVar13 != (UnityEngine_Transform_o *)0x0)) &&
                                       ((pUVar13 = UnityEngine_Transform__Find
                                                             (pUVar13,"Options",(MethodInfo *)0x0),
                                        pUVar13 != (UnityEngine_Transform_o *)0x0 &&
                                        (pUVar17 = (UnityEngine_RectTransform_o *)
                                                   UnityEngine_Component__GetComponent_object_
                                                             ((UnityEngine_Component_o *)pUVar13,MethodInfo_RectTransform_GetComponent_RectTransform)
                                        , pUVar17 != (UnityEngine_RectTransform_o *)0x0)))) {
                                      UVar11 = UnityEngine_RectTransform__get_sizeDelta
                                                         (pUVar17,(MethodInfo *)0x0);
                                      if (maxScrollHeight < UVar11.fields.y) {
label_0438f9fe:
                                        if (((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                            (pUVar13 = UnityEngine_GameObject__get_transform
                                                                 (*ppUVar1,(MethodInfo *)0x0),
                                            pUVar13 != (UnityEngine_Transform_o *)0x0)) &&
                                           (pUVar13 = UnityEngine_Transform__Find
                                                                (pUVar13,"Scrollbar",(MethodInfo *)0x0),
                                           pUVar13 != (UnityEngine_Transform_o *)0x0)) {
                                          pUVar18 = (UnityEngine_UI_Scrollbar_o *)
                                                    UnityEngine_Component__GetComponent_object_
                                                              ((UnityEngine_Component_o *)pUVar13,MethodInfo_Scrollbar_GetComponent_Scrollbar
                                                              );
                                          ppUVar4 = &(((UI_DropdownSettingElement_o *)__this_04)->fields).
                                                     _scrollBar;
                                          (((UI_DropdownSettingElement_o *)__this_04)->fields)._scrollBar =
                                               pUVar18;
                                          il2cpp_runtime_helper_022b4080(ppUVar4,pUVar18);
                                          pUVar18 = (((UI_DropdownSettingElement_o *)__this_04)->fields).
                                                    _scrollBar;
                                          pSVar9 = (style_00->fields).ThemePanel;
                                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pMVar23 = (MethodInfo *)0x0;
                                          UI_UIManager__GetThemeColorBlock
                                                    (&UStack_b0,pSVar9,"DefaultSetting","DropdownScrollbar","DefaultPanel",
                                                     (MethodInfo *)0x0);
                                          if (pUVar18 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                            value_00.fields.m_NormalColor.fields.b =
                                                 UStack_b0.fields.m_NormalColor.fields.b;
                                            value_00.fields.m_NormalColor.fields.a =
                                                 UStack_b0.fields.m_NormalColor.fields.a;
                                            value_00.fields.m_NormalColor.fields.r =
                                                 UStack_b0.fields.m_NormalColor.fields.r;
                                            value_00.fields.m_NormalColor.fields.g =
                                                 UStack_b0.fields.m_NormalColor.fields.g;
                                            value_00.fields.m_HighlightedColor.fields.r =
                                                 UStack_b0.fields.m_HighlightedColor.fields.r;
                                            value_00.fields.m_HighlightedColor.fields.g =
                                                 UStack_b0.fields.m_HighlightedColor.fields.g;
                                            value_00.fields.m_HighlightedColor.fields.b =
                                                 UStack_b0.fields.m_HighlightedColor.fields.b;
                                            value_00.fields.m_HighlightedColor.fields.a =
                                                 UStack_b0.fields.m_HighlightedColor.fields.a;
                                            value_00.fields.m_PressedColor.fields.r =
                                                 UStack_b0.fields.m_PressedColor.fields.r;
                                            value_00.fields.m_PressedColor.fields.g =
                                                 UStack_b0.fields.m_PressedColor.fields.g;
                                            value_00.fields.m_PressedColor.fields.b =
                                                 UStack_b0.fields.m_PressedColor.fields.b;
                                            value_00.fields.m_PressedColor.fields.a =
                                                 UStack_b0.fields.m_PressedColor.fields.a;
                                            value_00.fields.m_SelectedColor.fields.r =
                                                 UStack_b0.fields.m_SelectedColor.fields.r;
                                            value_00.fields.m_SelectedColor.fields.g =
                                                 UStack_b0.fields.m_SelectedColor.fields.g;
                                            value_00.fields.m_SelectedColor.fields.b =
                                                 UStack_b0.fields.m_SelectedColor.fields.b;
                                            value_00.fields.m_SelectedColor.fields.a =
                                                 UStack_b0.fields.m_SelectedColor.fields.a;
                                            value_00.fields.m_DisabledColor.fields.r =
                                                 UStack_b0.fields.m_DisabledColor.fields.r;
                                            value_00.fields.m_DisabledColor.fields.g =
                                                 UStack_b0.fields.m_DisabledColor.fields.g;
                                            value_00.fields.m_DisabledColor.fields.b =
                                                 UStack_b0.fields.m_DisabledColor.fields.b;
                                            value_00.fields.m_DisabledColor.fields.a =
                                                 UStack_b0.fields.m_DisabledColor.fields.a;
                                            value_00.fields.m_ColorMultiplier =
                                                 UStack_b0.fields.m_ColorMultiplier;
                                            value_00.fields.m_FadeDuration = UStack_b0.fields.m_FadeDuration;
                                            UnityEngine_UI_Selectable__set_colors
                                                      ((UnityEngine_UI_Selectable_o *)pUVar18,value_00,
                                                       (MethodInfo *)0x0);
                                            pUVar18 = *ppUVar4;
                                            if (pUVar18 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                              pIVar15 = UnityEngine_Component__GetComponent_object_
                                                                  ((UnityEngine_Component_o *)pUVar18,
                                                                   MethodInfo_Image_GetComponent_Image);
                                              UVar25 = UI_UIManager__GetThemeColor
                                                                 ((style_00->fields).ThemePanel,"DefaultSetting",
                                                                  "DropdownScrollbarBackgroundColor","DefaultPanel",(MethodInfo *)0x0)
                                              ;
                                              if (pIVar15 != (Il2CppObject *)0x0) {
                                                (*pIVar15->klass->vtable[0x17].methodPtr)
                                                          (UVar25.fields.r,UVar25.fields.b,pIVar15,
                                                           pIVar15->klass->vtable[0x17].method);
                                                if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                                   (pUVar17 = (UnityEngine_RectTransform_o *)
                                                              UnityEngine_GameObject__GetComponent_object_
                                                                        (*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform),
                                                   pUVar17 != (UnityEngine_RectTransform_o *)0x0)) {
                                                  UVar11.fields.y = maxScrollHeight;
                                                  UVar11.fields.x = optionsWidth;
                                                  UnityEngine_RectTransform__set_sizeDelta
                                                            (pUVar17,UVar11,(MethodInfo *)0x0);
                                                  pUVar13 = UnityEngine_Component__get_transform
                                                                      ((UnityEngine_Component_o *)__this_04,
                                                                       (MethodInfo *)0x0);
                                                  if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
                                                     ((pUVar13 = UnityEngine_Transform__Find
                                                                           (pUVar13,"Label",
                                                                            (MethodInfo *)0x0),
                                                      pUVar13 != (UnityEngine_Transform_o *)0x0 &&
                                                      (pIVar15 = UnityEngine_Component__GetComponent_object_
                                                                           ((UnityEngine_Component_o *)pUVar13
                                                                            ,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                                                      pIVar15 != (Il2CppObject *)0x0)))) {
                                                    (*pIVar15->klass->vtable[0x26].methodPtr)
                                                              (elementHeight,pIVar15);
                                                    (((UI_DropdownSettingElement_o *)__this_04)->fields).
                                                    _optionsOffset.fields.x = (optionsWidth - fVar24) * 0.5;
                                                    (((UI_DropdownSettingElement_o *)__this_04)->fields).
                                                    _optionsOffset.fields.y =
                                                         2.0 - (maxScrollHeight + elementHeight) * 0.5;
                                                    (((UI_DropdownSettingElement_o *)__this_04)->fields).
                                                    _optionsOffset.fields.z = 0.0;
                                                    pUVar14 = (((UI_DropdownSettingElement_o *)__this_04)->
                                                              fields)._optionsPanel;
                                                    if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
                                                      pUVar13 = UnityEngine_GameObject__get_transform
                                                                          (pUVar14,(MethodInfo *)0x0);
                                                      pUVar19 = UnityEngine_Component__get_transform
                                                                          ((UnityEngine_Component_o *)
                                                                           __this_04,(MethodInfo *)0x0);
                                                      if ((pUVar19 != (UnityEngine_Transform_o *)0x0) &&
                                                         (pUVar19 = UnityEngine_Transform__get_root
                                                                              (pUVar19,(MethodInfo *)0x0),
                                                         pUVar13 != (UnityEngine_Transform_o *)0x0)) {
                                                        UnityEngine_Transform__SetParent_4e09e30
                                                                  (pUVar13,pUVar19,1,(MethodInfo *)0x0);
                                                        if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                          UnityEngine_GameObject__SetActive
                                                                    (*ppUVar1,0,(MethodInfo *)0x0);
                                                          UI_BaseSettingElement__Setup
                                                                    ((UI_BaseSettingElement_o *)__this_04,
                                                                     setting,style_00,pSVar21,tooltip,pMVar23)
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
                                      else if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                              (__this_02 = (UnityEngine_UI_ScrollRect_o *)
                                                           UnityEngine_GameObject__GetComponent_object_
                                                                     (*ppUVar1,MethodInfo_ScrollRect_GetComponent_ScrollRect),
                                              __this_02 != (UnityEngine_UI_ScrollRect_o *)0x0)) {
                                        UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                  (__this_02,(UnityEngine_UI_Scrollbar_o *)0x0,
                                                   (MethodInfo *)0x0);
                                        if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                           (((pUVar13 = UnityEngine_GameObject__get_transform
                                                                  (*ppUVar1,(MethodInfo *)0x0),
                                             pUVar13 != (UnityEngine_Transform_o *)0x0 &&
                                             (pUVar13 = UnityEngine_Transform__Find
                                                                  (pUVar13,"Scrollbar",(MethodInfo *)0x0),
                                             pUVar13 != (UnityEngine_Transform_o *)0x0)) &&
                                            (pUVar14 = UnityEngine_Component__get_gameObject
                                                                 ((UnityEngine_Component_o *)pUVar13,
                                                                  (MethodInfo *)0x0),
                                            pUVar14 != (UnityEngine_GameObject_o *)0x0)))) {
                                          UnityEngine_GameObject__SetActive(pUVar14,0,(MethodInfo *)0x0);
                                          maxScrollHeight = UVar11.fields.y;
                                          goto label_0438f9fe;
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
        goto label_0438fd4d;
      }
    }
label_0438fd52:
    il2cpp_runtime_helper_022b2ca0();
  }
  uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_03 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar20);
  pSVar21 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Dropdown cannot have 0 options.");
  System_ArgumentException___ctor_3c12490(__this_03,pSVar21,(MethodInfo *)0x0);
  pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae29e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae29e = '\x01';
  }
  pUVar18 = *(UnityEngine_UI_Scrollbar_o **)&(__this_03->fields)._HResult;
  __this_05 = (Settings_TypedSetting_T__o *)0x0;
  if (pUVar18 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    fVar24 = UnityEngine_UI_Scrollbar__get_value(pUVar18,(MethodInfo *)0x0);
    *(float *)&(__this_03->fields)._dynamicMethods = fVar24;
    pUVar14 = (UnityEngine_GameObject_o *)(__this_03->fields)._stackTrace;
    __this_05 = (Settings_TypedSetting_T__o *)0x0;
    if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar14,0,(MethodInfo *)0x0);
      iVar8 = *(int *)&(__this_03->fields)._innerException;
      if (iVar8 != 2) {
        if (iVar8 == 4) {
          __this_05 = (Settings_TypedSetting_T__o *)(__this_03->fields)._data;
          if (__this_05 == (Settings_TypedSetting_T__o *)0x0) goto label_0438fee6;
          bVar5 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((__this_05->klass->_2).naturalAligment < bVar5) ||
             ((__this_05->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_StringSetting)) goto label_0438feeb;
          Settings_TypedSetting_object___set_Value(__this_05,pIVar15,MethodInfo_Void_set_Value);
        }
        pSVar10 = (__this_03->fields).captured_traces;
joined_r0x0438fedf:
        if (pSVar10 != (System_Diagnostics_StackTrace_array *)0x0) {
          (*(code *)pSVar10->max_length)(pSVar10->m_Items[4],pSVar10->m_Items[1]);
          return;
        }
        return;
      }
      __this_05 = (Settings_TypedSetting_T__o *)(__this_03->fields)._data;
      if (__this_05 != (Settings_TypedSetting_T__o *)0x0) {
        bVar5 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar5 <= (__this_05->klass->_2).naturalAligment) &&
           ((__this_05->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_IntSetting)) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)__this_05,value_01,MethodInfo_Void_set_Value);
          pSVar10 = (__this_03->fields).captured_traces;
          goto joined_r0x0438fedf;
        }
        goto label_0438feeb;
      }
    }
  }
label_0438fee6:
  il2cpp_runtime_helper_022b2c90();
label_0438feeb:
  il2cpp_runtime_helper_022b2fd0();
  if (__this_05[3].klass != (Settings_TypedSetting_T__c *)0x0) {
    fVar24 = UnityEngine_UI_Scrollbar__get_value
                       ((UnityEngine_UI_Scrollbar_o *)__this_05[3].klass,(MethodInfo *)0x0);
    *(float *)&__this_05[2].fields._value = fVar24;
    pUVar14 = (UnityEngine_GameObject_o *)__this_05[1].fields._value;
    if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar14,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.DropdownSelectElement$$OnDropdownOptionClick
// il2cpp: void UI_DropdownSelectElement__OnDropdownOptionClick (UI_DropdownSelectElement_o* __this, System_String_o* option, int32_t index, const MethodInfo* method);
// 0x438fda0

void UI_DropdownSelectElement__OnDropdownOptionClick
               (UI_DropdownSelectElement_o *__this,System_String_o *option,int32_t index,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Settings_TypedSetting_T__o *__this_01;
  float fVar5;
  
  if (g_data_057ae29e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae29e = '\x01';
  }
  __this_00 = (__this->fields)._scrollBar;
  __this_01 = (Settings_TypedSetting_T__o *)0x0;
  if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    fVar5 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar5;
    pUVar3 = (__this->fields)._optionsPanel;
    __this_01 = (Settings_TypedSetting_T__o *)0x0;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      iVar2 = (__this->fields)._settingType;
      if (iVar2 != 2) {
        if (iVar2 == 4) {
          __this_01 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
          if (__this_01 == (Settings_TypedSetting_T__o *)0x0) goto label_0438fee6;
          bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((__this_01->klass->_2).naturalAligment < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_0438feeb;
          Settings_TypedSetting_object___set_Value(__this_01,(Il2CppObject *)option,MethodInfo_Void_set_Value);
        }
        pUVar4 = (__this->fields)._onDropdownOptionSelect;
joined_r0x0438fedf:
        if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
          return;
        }
        return;
      }
      __this_01 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
      if (__this_01 != (Settings_TypedSetting_T__o *)0x0) {
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_01,index,MethodInfo_Void_set_Value);
          pUVar4 = (__this->fields)._onDropdownOptionSelect;
          goto joined_r0x0438fedf;
        }
        goto label_0438feeb;
      }
    }
  }
label_0438fee6:
  il2cpp_runtime_helper_022b2c90();
label_0438feeb:
  il2cpp_runtime_helper_022b2fd0();
  if (__this_01[3].klass != (Settings_TypedSetting_T__c *)0x0) {
    fVar5 = UnityEngine_UI_Scrollbar__get_value
                      ((UnityEngine_UI_Scrollbar_o *)__this_01[3].klass,(MethodInfo *)0x0);
    *(float *)&__this_01[2].fields._value = fVar5;
    pUVar3 = (UnityEngine_GameObject_o *)__this_01[1].fields._value;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.DropdownSelectElement$$SyncElement
// il2cpp: void UI_DropdownSelectElement__SyncElement (UI_DropdownSelectElement_o* __this, const MethodInfo* method);
// 0x438ff30

void UI_DropdownSelectElement__SyncElement(UI_DropdownSelectElement_o *__this,MethodInfo *method)

{
  return;
}


// UI.DropdownSelectElement$$.ctor
// il2cpp: void UI_DropdownSelectElement___ctor (UI_DropdownSelectElement_o* __this, const MethodInfo* method);
// 0x438ff40

void UI_DropdownSelectElement___ctor(UI_DropdownSelectElement_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  
  (__this->fields)._currentScrollValue = 1.0;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._lastKnownPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._lastKnownPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._lastKnownPosition.fields.z = fVar1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


