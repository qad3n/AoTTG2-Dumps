// Type: UI.InputSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/InputSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs
// --------------------------------

// UI.InputSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_InputSettingElement__get_SupportedSettingTypes (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x43929e0

System_Collections_Generic_HashSet_SettingType__o *
UI_InputSettingElement__get_SupportedSettingTypes(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_UI_Selectable_c *pUVar3;
  void *pvVar4;
  undefined8 uVar5;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar6;
  int32_t iVar7;
  Il2CppClass *pIVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_Selectable_o *pUVar11;
  Il2CppClass *value_00;
  Il2CppObject *pIVar12;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_Events_UnityAction_T0__o *call;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX;
  System_Collections_Generic_HashSet_SettingType__o *pSVar13;
  Il2CppClass *pIVar14;
  System_String_o *in_RCX;
  UI_ElementStyle_o *style;
  undefined8 extraout_RDX;
  Il2CppClass *unaff_RBX;
  uint uVar15;
  Il2CppClass *pIVar16;
  UnityEngine_UI_InputField_o *pUVar17;
  Settings_TypedSetting_T__o *__this_01;
  System_String_o *in_R8;
  uint in_R9D;
  Il2CppClass *unaff_R14;
  undefined4 uVar18;
  undefined4 in_XMM1_Da;
  UnityEngine_Color_o UVar19;
  Il2CppClass *unaff_retaddr;
  Il2CppClass *in_stack_00000008;
  undefined8 uStackY_1a8;
  Il2CppClass *pIStackY_1a0;
  Il2CppClass *pIStackY_198;
  UnityEngine_UI_ColorBlock_o UStack_a0;
  Il2CppClass *pIStack_48;
  
  if (g_data_057ae2b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae2b6 = '\x01';
  }
  pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  pIVar14 = MethodInfo_HashSet_1_Settings_SettingType;
  pIVar16 = pIVar8;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)pIVar8,(MethodInfo_33DA550 *)MethodInfo_HashSet_1_Settings_SettingType);
  if (pIVar8 != (Il2CppClass *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pIVar8,3,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pIVar8,2,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)pIVar8,4,MethodInfo_Boolean_Add);
    return (System_Collections_Generic_HashSet_SettingType__o *)pIVar8;
  }
  uVar18 = il2cpp_runtime_helper_022b2c90();
  value_00 = pIVar14;
  pIStack_48 = pIVar8;
  if (g_data_057ae2b7 == '\0') {
    pIStackY_198 = (Il2CppClass *)0x4392adf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pIStackY_198 = (Il2CppClass *)0x4392aeb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pIStackY_198 = (Il2CppClass *)0x4392af7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pIStackY_198 = (Il2CppClass *)0x4392b03;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputFieldPasteable_AddComponent_InputFieldPasteable);
    pIStackY_198 = (Il2CppClass *)0x4392b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    pIStackY_198 = (Il2CppClass *)0x4392b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    pIStackY_198 = (Il2CppClass *)0x4392b27;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_1);
    pIStackY_198 = (Il2CppClass *)0x4392b33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStackY_198 = (Il2CppClass *)0x4392b3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    pIStackY_198 = (Il2CppClass *)0x4392b4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStackY_198 = (Il2CppClass *)0x4392b57;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    pIStackY_198 = (Il2CppClass *)0x4392b63;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    pIStackY_198 = (Il2CppClass *)0x4392b6f;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pIStackY_198 = (Il2CppClass *)0x4392b7b;
    il2cpp_runtime_helper_023445d0(&"Text");
    pIStackY_198 = (Il2CppClass *)0x4392b87;
    il2cpp_runtime_helper_023445d0(&"Input");
    pIStackY_198 = (Il2CppClass *)0x4392b93;
    il2cpp_runtime_helper_023445d0(&"InputField");
    pIStackY_198 = (Il2CppClass *)0x4392b9f;
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    pIStackY_198 = (Il2CppClass *)0x4392bab;
    il2cpp_runtime_helper_023445d0(&"InputTextColor");
    pIStackY_198 = (Il2CppClass *)0x4392bb7;
    il2cpp_runtime_helper_023445d0(&"InputSelectionColor");
    g_data_057ae2b7 = '\x01';
  }
  pIVar8 = pIVar14;
  if (style == (UI_ElementStyle_o *)0x0) {
label_04393341:
    pIStackY_198 = (Il2CppClass *)0x4393346;
    il2cpp_runtime_helper_022b2c90();
    pIVar14 = pIVar8;
  }
  else {
    if ((style->fields).FontSize < 0x13) {
      *(undefined4 *)&(pIVar16->_1).element_class = 0xfffffffe;
    }
    (pIVar16->_1).castClass = unaff_RBX;
    pIStackY_198 = (Il2CppClass *)0x4392c12;
    il2cpp_runtime_helper_022b4080(&(pIVar16->_1).castClass);
    (pIVar16->_1).declaringType = unaff_R14;
    pIStackY_198 = (Il2CppClass *)0x4392c24;
    il2cpp_runtime_helper_022b4080(&(pIVar16->_1).declaringType,unaff_R14);
    (pIVar16->_1).parent = unaff_retaddr;
    pIStackY_198 = (Il2CppClass *)0x4392c36;
    il2cpp_runtime_helper_022b4080(&(pIVar16->_1).parent,unaff_retaddr);
    (pIVar16->_1).generic_class = in_stack_00000008;
    pIStackY_198 = (Il2CppClass *)0x4392c48;
    il2cpp_runtime_helper_022b4080(&(pIVar16->_1).generic_class);
    value_00 = (Il2CppClass *)0x0;
    pIStackY_198 = (Il2CppClass *)0x4392c52;
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar16,(MethodInfo *)0x0);
    pIVar8 = unaff_retaddr;
    unaff_R14 = in_stack_00000008;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x4392c70;
    value_00 = "InputField";
    pUVar9 = UnityEngine_Transform__Find(pUVar9,(System_String_o *)"InputField",(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    value_00 = (Il2CppClass *)0x0;
    pIStackY_198 = (Il2CppClass *)0x4392c83;
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x4392c9e;
    pUVar11 = (UnityEngine_UI_Selectable_o *)
              UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_InputField_GetComponent_InputField);
    unaff_R14 = (Il2CppClass *)&(pIVar16->_1).this_arg.bits;
    *(UnityEngine_UI_Selectable_o **)&(pIVar16->_1).this_arg.bits = pUVar11;
    pIStackY_198 = (Il2CppClass *)0x4392cb3;
    il2cpp_runtime_helper_022b4080(unaff_R14);
    pIVar8 = *(Il2CppClass **)&(pIVar16->_1).this_arg.bits;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStackY_198 = (Il2CppClass *)0x4392cd0;
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = (Il2CppClass *)0x0;
    pIStackY_198 = (Il2CppClass *)0x4392cdc;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      value_00 = (Il2CppClass *)0x0;
      pIStackY_198 = (Il2CppClass *)0x4392cee;
      pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar16,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        pIStackY_198 = (Il2CppClass *)0x4392d05;
        value_00 = "InputField";
        pUVar9 = UnityEngine_Transform__Find(pUVar9,(System_String_o *)"InputField",(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          value_00 = (Il2CppClass *)0x0;
          pIStackY_198 = (Il2CppClass *)0x4392d18;
          pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0)
          ;
          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
            pIStackY_198 = (Il2CppClass *)0x4392d33;
            value_00 = (Il2CppClass *)UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_InputFieldPasteable_AddComponent_InputFieldPasteable);
            *(Il2CppClass **)unaff_R14 = value_00;
            pIStackY_198 = (Il2CppClass *)0x4392d41;
            il2cpp_runtime_helper_022b4080(unaff_R14);
            pUVar17 = *(UnityEngine_UI_InputField_o **)unaff_R14;
            if (pUVar17 != (UnityEngine_UI_InputField_o *)0x0) {
              value_00 = (Il2CppClass *)0x0;
              pIStackY_198 = (Il2CppClass *)0x4392d57;
              pUVar9 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
              if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                pIStackY_198 = (Il2CppClass *)0x4392d74;
                value_00 = "Text";
                pUVar9 = UnityEngine_Transform__Find(pUVar9,(System_String_o *)"Text",(MethodInfo *)0x0)
                ;
                if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                  pIStackY_198 = (Il2CppClass *)0x4392d8f;
                  value_00 = (Il2CppClass *)
                             UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
                  pIStackY_198 = (Il2CppClass *)0x4392d9c;
                  UnityEngine_UI_InputField__set_textComponent
                            (pUVar17,(UnityEngine_UI_Text_o *)value_00,(MethodInfo *)0x0);
                  if (*(UnityEngine_UI_Selectable_o **)unaff_R14 != (UnityEngine_UI_Selectable_o *)0x0) {
                    value_00 = (Il2CppClass *)0x1;
                    pIStackY_198 = (Il2CppClass *)0x4392db4;
                    UnityEngine_UI_Selectable__set_transition
                              (*(UnityEngine_UI_Selectable_o **)unaff_R14,1,(MethodInfo *)0x0);
                    pIVar8 = *(Il2CppClass **)unaff_R14;
                    if (pIVar8 != (Il2CppClass *)0x0) {
                      pIStackY_198 = (Il2CppClass *)0x4392dd2;
                      value_00 = (Il2CppClass *)
                                 UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pIVar8,MethodInfo_Image_GetComponent_Image);
                      pIStackY_198 = (Il2CppClass *)0x4392ddf;
                      UnityEngine_UI_Selectable__set_targetGraphic
                                ((UnityEngine_UI_Selectable_o *)pIVar8,(UnityEngine_UI_Graphic_o *)value_00,
                                 (MethodInfo *)0x0);
                      goto label_04392ddf;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_04393341;
    }
label_04392ddf:
    if (*(UnityEngine_UI_InputField_o **)unaff_R14 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x4392e12;
    UnityEngine_UI_InputField__set_text
              (*(UnityEngine_UI_InputField_o **)unaff_R14,
               (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    pUVar11 = *(UnityEngine_UI_Selectable_o **)unaff_R14;
    pIVar8 = (Il2CppClass *)(style->fields).ThemePanel;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      pIStackY_198 = (Il2CppClass *)0x4392e36;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStackY_198 = (Il2CppClass *)0x4392e68;
    value_00 = pIVar8;
    UI_UIManager__GetThemeColorBlock
              (&UStack_a0,(System_String_o *)pIVar8,(System_String_o *)"DefaultSetting","Input","DefaultPanel",
               (MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04393341;
    value_00 = (Il2CppClass *)0x0;
    pIStackY_198 = (Il2CppClass *)0x4392f28;
    value.fields.m_NormalColor.fields.b = UStack_a0.fields.m_NormalColor.fields.b;
    value.fields.m_NormalColor.fields.a = UStack_a0.fields.m_NormalColor.fields.a;
    value.fields.m_NormalColor.fields.r = UStack_a0.fields.m_NormalColor.fields.r;
    value.fields.m_NormalColor.fields.g = UStack_a0.fields.m_NormalColor.fields.g;
    value.fields.m_HighlightedColor.fields.r = UStack_a0.fields.m_HighlightedColor.fields.r;
    value.fields.m_HighlightedColor.fields.g = UStack_a0.fields.m_HighlightedColor.fields.g;
    value.fields.m_HighlightedColor.fields.b = UStack_a0.fields.m_HighlightedColor.fields.b;
    value.fields.m_HighlightedColor.fields.a = UStack_a0.fields.m_HighlightedColor.fields.a;
    value.fields.m_PressedColor.fields.r = UStack_a0.fields.m_PressedColor.fields.r;
    value.fields.m_PressedColor.fields.g = UStack_a0.fields.m_PressedColor.fields.g;
    value.fields.m_PressedColor.fields.b = UStack_a0.fields.m_PressedColor.fields.b;
    value.fields.m_PressedColor.fields.a = UStack_a0.fields.m_PressedColor.fields.a;
    value.fields.m_SelectedColor.fields.r = UStack_a0.fields.m_SelectedColor.fields.r;
    value.fields.m_SelectedColor.fields.g = UStack_a0.fields.m_SelectedColor.fields.g;
    value.fields.m_SelectedColor.fields.b = UStack_a0.fields.m_SelectedColor.fields.b;
    value.fields.m_SelectedColor.fields.a = UStack_a0.fields.m_SelectedColor.fields.a;
    value.fields.m_DisabledColor.fields.r = UStack_a0.fields.m_DisabledColor.fields.r;
    value.fields.m_DisabledColor.fields.g = UStack_a0.fields.m_DisabledColor.fields.g;
    value.fields.m_DisabledColor.fields.b = UStack_a0.fields.m_DisabledColor.fields.b;
    value.fields.m_DisabledColor.fields.a = UStack_a0.fields.m_DisabledColor.fields.a;
    value.fields.m_ColorMultiplier = UStack_a0.fields.m_ColorMultiplier;
    value.fields.m_FadeDuration = UStack_a0.fields.m_FadeDuration;
    UnityEngine_UI_Selectable__set_colors(pUVar11,value,(MethodInfo *)0x0);
    if (*(UnityEngine_UI_Selectable_o **)unaff_R14 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04393341;
    value_00 = (Il2CppClass *)0x0;
    pIStackY_198 = (Il2CppClass *)0x4392f3b;
    pUVar9 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)*(UnityEngine_UI_Selectable_o **)unaff_R14,
                        (MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x4392f5b;
    value_00 = "Text";
    pUVar9 = UnityEngine_Transform__Find(pUVar9,(System_String_o *)"Text",(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x4392f76;
    pIVar12 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar9,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
    pIStackY_198 = (Il2CppClass *)0x4392fa1;
    value_00 = "DefaultSetting";
    UVar19 = UI_UIManager__GetThemeColor
                       ((style->fields).ThemePanel,(System_String_o *)"DefaultSetting","InputTextColor","DefaultPanel",
                        (MethodInfo *)0x0);
    pIVar8 = (Il2CppClass *)&"DefaultPanel";
    if (pIVar12 == (Il2CppObject *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x4392fbe;
    (*pIVar12->klass->vtable[0x17].methodPtr)
              (UVar19.fields.r,UVar19.fields.b,pIVar12,pIVar12->klass->vtable[0x17].method);
    pUVar17 = *(UnityEngine_UI_InputField_o **)unaff_R14;
    pIStackY_198 = (Il2CppClass *)0x4392fdd;
    value_00 = "DefaultSetting";
    UVar19 = UI_UIManager__GetThemeColor
                       ((style->fields).ThemePanel,(System_String_o *)"DefaultSetting","InputSelectionColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pUVar17 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    value_00 = (Il2CppClass *)0x0;
    pIStackY_198 = (Il2CppClass *)0x4392ff3;
    UnityEngine_UI_InputField__set_selectionColor(pUVar17,UVar19,(MethodInfo *)0x0);
    pIVar8 = (Il2CppClass *)&"Text";
    if (*(UnityEngine_UI_Selectable_o **)unaff_R14 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04393341;
    value_00 = (Il2CppClass *)0x0;
    pIStackY_198 = (Il2CppClass *)0x4393014;
    pUVar9 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)*(UnityEngine_UI_Selectable_o **)unaff_R14,
                        (MethodInfo *)0x0);
    pIVar8 = (Il2CppClass *)&"Text";
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x439302f;
    value_00 = "Text";
    pUVar9 = UnityEngine_Transform__Find(pUVar9,(System_String_o *)"Text",(MethodInfo *)0x0);
    pIVar8 = (Il2CppClass *)&"Text";
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x4393043;
    value_00 = MethodInfo_Text_GetComponent_Text;
    __this_00 = (UnityEngine_UI_Text_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar9,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
    pIVar8 = (Il2CppClass *)&"Text";
    if (__this_00 == (UnityEngine_UI_Text_o *)0x0) goto label_04393341;
    uVar15 = (style->fields).FontSize + *(int *)&(pIVar16->_1).element_class;
    value_00 = (Il2CppClass *)(ulong)uVar15;
    pIStackY_198 = (Il2CppClass *)0x439305e;
    UnityEngine_UI_Text__set_fontSize(__this_00,uVar15,(MethodInfo *)0x0);
    pUVar11 = *(UnityEngine_UI_Selectable_o **)&(pIVar16->_1).this_arg.bits;
    pIVar8 = (Il2CppClass *)&"Text";
    if (pUVar11 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04393341;
    value_00 = (Il2CppClass *)0x0;
    pIStackY_198 = (Il2CppClass *)0x4393073;
    pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
    pIVar8 = (Il2CppClass *)&"Text";
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x4393089;
    value_00 = "Text";
    pUVar9 = UnityEngine_Transform__Find(pUVar9,(System_String_o *)"Text",(MethodInfo *)0x0);
    pIVar8 = (Il2CppClass *)&"Text";
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x439309d;
    pIVar8 = (Il2CppClass *)
             UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
    pIStackY_198 = (Il2CppClass *)0x43930c4;
    value_00 = "DefaultSetting";
    UVar19 = UI_UIManager__GetThemeColor
                       ((style->fields).ThemePanel,(System_String_o *)"DefaultSetting","InputTextColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pIVar8 == (Il2CppClass *)0x0) goto label_04393341;
    pUVar3 = (pIVar8->_1).image;
    value_00 = (Il2CppClass *)(pUVar3->vtable)._23_unknown.method;
    pIStackY_198 = (Il2CppClass *)0x43930e0;
    (*(pUVar3->vtable)._23_unknown.methodPtr)(UVar19.fields.r,UVar19.fields.b,pIVar8);
    if (*(UnityEngine_UI_Selectable_o **)unaff_R14 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x43930fb;
    value_00 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
    pIVar12 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)*(UnityEngine_UI_Selectable_o **)unaff_R14,
                         (MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pIVar8 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
    if (pIVar12 == (Il2CppObject *)0x0) goto label_04393341;
    value_00 = (Il2CppClass *)pIVar12->klass->vtable[0x24].method;
    pIStackY_198 = (Il2CppClass *)0x439311d;
    (*pIVar12->klass->vtable[0x24].methodPtr)(uVar18,pIVar12);
    pIVar8 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
    if (*(UnityEngine_UI_Selectable_o **)unaff_R14 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x4393131;
    value_00 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
    pIVar12 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)*(UnityEngine_UI_Selectable_o **)unaff_R14,
                         (MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pIVar8 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
    if (pIVar12 == (Il2CppObject *)0x0) goto label_04393341;
    value_00 = (Il2CppClass *)pIVar12->klass->vtable[0x26].method;
    pIStackY_198 = (Il2CppClass *)0x4393153;
    (*pIVar12->klass->vtable[0x26].methodPtr)(in_XMM1_Da,pIVar12);
    pIVar8 = pIVar14;
    if (*(UnityEngine_UI_InputField_o **)unaff_R14 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pIStackY_198 = (Il2CppClass *)0x4393172;
    UnityEngine_UI_InputField__set_lineType
              (*(UnityEngine_UI_InputField_o **)unaff_R14,(in_R9D & 0xff) * 2,(MethodInfo *)0x0);
    pIStackY_198 = (Il2CppClass *)0x439317f;
    value_00 = pIVar14;
    iVar7 = UI_BaseSettingElement__GetSettingType
                      ((UI_BaseSettingElement_o *)pIVar16,(Settings_BaseSetting_o *)pIVar14,(MethodInfo *)0x0)
    ;
    (((UnityEngine_UI_Navigation_o *)&(pIVar16->_1).byval_arg.bits)->fields).m_Mode = iVar7;
    if (iVar7 == 2) {
      if (*(UnityEngine_UI_InputField_o **)unaff_R14 != (UnityEngine_UI_InputField_o *)0x0) {
        value_00 = (Il2CppClass *)0x2;
        pIStackY_198 = (Il2CppClass *)0x439324c;
        UnityEngine_UI_InputField__set_contentType
                  (*(UnityEngine_UI_InputField_o **)unaff_R14,2,(MethodInfo *)0x0);
        pUVar17 = *(UnityEngine_UI_InputField_o **)unaff_R14;
        if (pUVar17 != (UnityEngine_UI_InputField_o *)0x0) {
          value_00 = (Il2CppClass *)0xa;
label_0439325d:
          pIStackY_198 = (Il2CppClass *)0x4393264;
          UnityEngine_UI_InputField__set_characterLimit(pUVar17,(int32_t)value_00,(MethodInfo *)0x0);
          goto label_04393264;
        }
      }
      goto label_04393341;
    }
    if (iVar7 != 4) {
      if (iVar7 == 3) {
        if (*(UnityEngine_UI_InputField_o **)unaff_R14 != (UnityEngine_UI_InputField_o *)0x0) {
          value_00 = (Il2CppClass *)0x3;
          pIStackY_198 = (Il2CppClass *)0x43931b3;
          UnityEngine_UI_InputField__set_contentType
                    (*(UnityEngine_UI_InputField_o **)unaff_R14,3,(MethodInfo *)0x0);
          pUVar17 = *(UnityEngine_UI_InputField_o **)unaff_R14;
          if (pUVar17 != (UnityEngine_UI_InputField_o *)0x0) {
            value_00 = (Il2CppClass *)&g_data_00000014;
            goto label_0439325d;
          }
        }
      }
      else {
label_04393264:
        if (*(UnityEngine_UI_Selectable_o **)unaff_R14 != (UnityEngine_UI_Selectable_o *)0x0) {
          pUVar11 = (*(UnityEngine_UI_Selectable_o **)unaff_R14)[1].fields.m_Navigation.fields.m_SelectOnLeft;
          pIStackY_198 = (Il2CppClass *)0x4393286;
          pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
          pIStackY_198 = (Il2CppClass *)0x43932a0;
          value_00 = pIVar16;
          UnityEngine_Events_UnityAction_object____ctor();
          if (pUVar11 != (UnityEngine_UI_Selectable_o *)0x0) {
            pIStackY_198 = (Il2CppClass *)0x43932bf;
            value_00 = pIVar8;
            UnityEngine_Events_UnityEvent_object___AddListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)pUVar11,
                       (UnityEngine_Events_UnityAction_T0__o *)pIVar8,MethodInfo_Void_AddListener);
            if (*(UnityEngine_UI_Selectable_o **)unaff_R14 != (UnityEngine_UI_Selectable_o *)0x0) {
              pUVar11 = (*(UnityEngine_UI_Selectable_o **)unaff_R14)[1].fields.m_Navigation.fields.
                        m_SelectOnDown;
              pIStackY_198 = (Il2CppClass *)0x43932d6;
              call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
              pIStackY_198 = (Il2CppClass *)0x43932f0;
              value_00 = pIVar16;
              UnityEngine_Events_UnityAction_object____ctor();
              pIVar8 = (Il2CppClass *)0x0;
              if (pUVar11 != (UnityEngine_UI_Selectable_o *)0x0) {
                pIStackY_198 = (Il2CppClass *)0x4393304;
                UnityEngine_Events_UnityEvent_object___AddListener
                          ((UnityEngine_Events_UnityEvent_T0__o *)pUVar11,call,MethodInfo_Void_AddListener);
                *(undefined1 *)&(pIVar16->_1).interopData = 1;
                pIStackY_198 = (Il2CppClass *)0x439332f;
                UI_BaseSettingElement__Setup
                          ((UI_BaseSettingElement_o *)pIVar16,(Settings_BaseSetting_o *)pIVar14,style,in_RCX,
                           in_R8,(MethodInfo *)0x0);
                return extraout_RAX;
              }
            }
          }
        }
      }
      goto label_04393341;
    }
    if (*(UnityEngine_UI_InputField_o **)unaff_R14 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    value_00 = (Il2CppClass *)0x0;
    pIStackY_198 = (Il2CppClass *)0x43931de;
    UnityEngine_UI_InputField__set_contentType(*(UnityEngine_UI_InputField_o **)unaff_R14,0,(MethodInfo *)0x0)
    ;
    if (pIVar14 == (Il2CppClass *)0x0) goto label_04393341;
    pUVar3 = (pIVar14->_1).image;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    value_00 = TypeInfo_StringSetting;
    if ((bVar1 <= (pUVar3->_2).naturalAligment) &&
       ((pUVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
      pUVar17 = *(UnityEngine_UI_InputField_o **)unaff_R14;
      if (pUVar17 != (UnityEngine_UI_InputField_o *)0x0) {
        uVar15 = *(uint *)&(pIVar14->_1).byval_arg.data;
        value_00 = (Il2CppClass *)(ulong)uVar15;
        if (uVar15 == 0x7fffffff) {
          value_00 = (Il2CppClass *)0x0;
        }
        goto label_0439325d;
      }
      goto label_04393341;
    }
  }
  pIStackY_198 = (Il2CppClass *)0x439334e;
  pIVar16 = pIVar14;
  pSVar13 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_022b2fd0();
  pIStackY_1a0 = pIVar14;
  pIStackY_198 = unaff_R14;
  if (g_data_057ae2b8 == '\0') {
    uStackY_1a8 = pSVar13;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pSVar13 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2b8 = '\x01';
  }
  uStackY_1a8 = (System_Collections_Generic_HashSet_SettingType__o *)0x0;
  if (*(char *)&(pIVar16->_1).interopData == '\0') {
    return pSVar13;
  }
  pIVar14 = (pIVar16->_1).parent;
  if ((pIVar14 != (Il2CppClass *)0x0) &&
     (pSVar13 = (System_Collections_Generic_HashSet_SettingType__o *)
                (*(code *)(pIVar14->_1).namespaze)
                          ((pIVar14->_1).element_class,value_00,*(undefined8 *)&(pIVar14->_1).byval_arg.bits),
     (char)pSVar13 == '\0')) {
    return pSVar13;
  }
  pvVar4 = (pIVar16->_1).generic_class;
  if (pvVar4 != (void *)0x0) {
    value_00 = (Il2CppClass *)
               (**(code **)((long)pvVar4 + 0x18))
                         (*(undefined8 *)((long)pvVar4 + 0x40),value_00,*(undefined8 *)((long)pvVar4 + 0x28));
  }
  if ((((UnityEngine_UI_Navigation_o *)&(pIVar16->_1).byval_arg.bits)->fields).m_Mode == 4) {
    __this_01 = (pIVar16->_1).byval_arg.data;
    if (__this_01 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
      Settings_TypedSetting_object___set_Value(__this_01,(Il2CppObject *)value_00,MethodInfo_Void_set_Value);
      pIVar14 = (pIVar16->_1).castClass;
      if (pIVar14 == (Il2CppClass *)0x0) {
        return (System_Collections_Generic_HashSet_SettingType__o *)0x0;
      }
      goto label_0439357d;
    }
label_04393590:
    il2cpp_runtime_helper_022b2fd0();
label_04393595:
    pSVar13 = (System_Collections_Generic_HashSet_SettingType__o *)il2cpp_runtime_helper_022b2c90();
    if (*(char *)&__this_01[3].fields.DefaultValue != '\0') {
      (*(__this_01->klass->vtable)._6_unknown.methodPtr)();
      pIVar12 = __this_01[2].fields.DefaultValue;
      pSVar13 = (System_Collections_Generic_HashSet_SettingType__o *)0x0;
      if (pIVar12 != (Il2CppObject *)0x0) {
        pSVar13 = (System_Collections_Generic_HashSet_SettingType__o *)
                  (*pIVar12[1].monitor)(pIVar12[4].klass,pIVar12[2].monitor,extraout_RDX,pIVar12[1].monitor);
        return pSVar13;
      }
    }
    return pSVar13;
  }
  bVar6 = System_String__op_Inequality
                    ((System_String_o *)value_00,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    iVar2 = (((UnityEngine_UI_Navigation_o *)&(pIVar16->_1).byval_arg.bits)->fields).m_Mode;
    if (iVar2 == 2) {
      bVar6 = System_Int32__TryParse((System_String_o *)value_00,(int32_t *)&uStackY_1a8,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        __this_01 = (pIVar16->_1).byval_arg.data;
        if (__this_01 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto label_04393590;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this_01,(int32_t)uStackY_1a8,MethodInfo_Void_set_Value);
      }
    }
    else if ((iVar2 == 3) &&
            (bVar6 = System_Single__TryParse
                               ((System_String_o *)value_00,(float *)((long)&uStackY_1a8 + 4),
                                (MethodInfo *)0x0), (char)bVar6 != '\0')) {
      __this_01 = (pIVar16->_1).byval_arg.data;
      if (__this_01 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
      bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_FloatSetting)) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)__this_01,uStackY_1a8._4_4_,MethodInfo_Void_set_Value);
        pIVar14 = (pIVar16->_1).castClass;
        if (pIVar14 == (Il2CppClass *)0x0) {
          return (System_Collections_Generic_HashSet_SettingType__o *)0x0;
        }
        goto label_0439357d;
      }
      goto label_04393590;
    }
  }
  pIVar14 = (pIVar16->_1).castClass;
  if (pIVar14 == (Il2CppClass *)0x0) {
    return (System_Collections_Generic_HashSet_SettingType__o *)0x0;
  }
label_0439357d:
  uVar5._0_4_ = (pIVar14->_1).byval_arg.bits;
  uVar5._4_4_ = *(undefined4 *)&(pIVar14->_1).byval_arg.field_0xc;
  pSVar13 = (System_Collections_Generic_HashSet_SettingType__o *)
            (*(code *)(pIVar14->_1).namespaze)((pIVar14->_1).element_class,uVar5);
  return pSVar13;
}


// UI.InputSettingElement$$Setup
// il2cpp: void UI_InputSettingElement__Setup (UI_InputSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_o* tooltip, float elementWidth, float elementHeight, bool multiLine, UnityEngine_Events_UnityAction_o* onValueChanged, UnityEngine_Events_UnityAction_o* onEndEdit, System_Func_string__bool__o* onValidate, System_Func_string__string__o* onCleanup, const MethodInfo* method);
// 0x4392a90

void UI_InputSettingElement__Setup
               (UI_InputSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_o *tooltip,float elementWidth,float elementHeight,
               bool_conflict multiLine,UnityEngine_Events_UnityAction_o *onValueChanged,
               UnityEngine_Events_UnityAction_o *onEndEdit,System_Func_string__bool__o *onValidate,
               System_Func_string__string__o *onCleanup,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_UI_Selectable_c *pUVar3;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_00;
  UnityEngine_UI_InputField_SubmitEvent_o *__this_01;
  Il2CppClass *pIVar4;
  void *pvVar5;
  undefined8 uVar6;
  UnityEngine_UI_ColorBlock_o value;
  char cVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_UI_InputField_o *pUVar12;
  Il2CppClass *pIVar13;
  Il2CppObject *pIVar14;
  UnityEngine_UI_Text_o *__this_02;
  Il2CppClass *pIVar15;
  UnityEngine_Events_UnityAction_T0__o *call;
  undefined8 extraout_RDX;
  uint value_00;
  Settings_TypedSetting_T__o *__this_03;
  System_Func_string__string__o *unaff_R14;
  UnityEngine_Color_o UVar16;
  undefined8 local_190;
  Il2CppClass *pIStackY_188;
  System_Func_string__string__o *pSStackY_180;
  UnityEngine_UI_ColorBlock_o local_88;
  
  pIVar13 = (Il2CppClass *)setting;
  if (g_data_057ae2b7 == '\0') {
    pSStackY_180 = (System_Func_string__string__o *)0x4392adf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    pSStackY_180 = (System_Func_string__string__o *)0x4392aeb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSStackY_180 = (System_Func_string__string__o *)0x4392af7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pSStackY_180 = (System_Func_string__string__o *)0x4392b03;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputFieldPasteable_AddComponent_InputFieldPasteable);
    pSStackY_180 = (System_Func_string__string__o *)0x4392b0f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    pSStackY_180 = (System_Func_string__string__o *)0x4392b1b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    pSStackY_180 = (System_Func_string__string__o *)0x4392b27;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_1);
    pSStackY_180 = (System_Func_string__string__o *)0x4392b33;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStackY_180 = (System_Func_string__string__o *)0x4392b3f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    pSStackY_180 = (System_Func_string__string__o *)0x4392b4b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStackY_180 = (System_Func_string__string__o *)0x4392b57;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    pSStackY_180 = (System_Func_string__string__o *)0x4392b63;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    pSStackY_180 = (System_Func_string__string__o *)0x4392b6f;
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    pSStackY_180 = (System_Func_string__string__o *)0x4392b7b;
    il2cpp_runtime_helper_023445d0(&"Text");
    pSStackY_180 = (System_Func_string__string__o *)0x4392b87;
    il2cpp_runtime_helper_023445d0(&"Input");
    pSStackY_180 = (System_Func_string__string__o *)0x4392b93;
    il2cpp_runtime_helper_023445d0(&"InputField");
    pSStackY_180 = (System_Func_string__string__o *)0x4392b9f;
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    pSStackY_180 = (System_Func_string__string__o *)0x4392bab;
    il2cpp_runtime_helper_023445d0(&"InputTextColor");
    pSStackY_180 = (System_Func_string__string__o *)0x4392bb7;
    il2cpp_runtime_helper_023445d0(&"InputSelectionColor");
    g_data_057ae2b7 = '\x01';
  }
  pIVar15 = (Il2CppClass *)setting;
  if (style == (UI_ElementStyle_o *)0x0) {
label_04393341:
    pSStackY_180 = (System_Func_string__string__o *)0x4393346;
    il2cpp_runtime_helper_022b2c90();
    setting = (Settings_BaseSetting_o *)pIVar15;
  }
  else {
    if ((style->fields).FontSize < 0x13) {
      (__this->fields)._inputFontSizeOffset = -2;
    }
    (__this->fields)._onValueChanged = onValueChanged;
    pSStackY_180 = (System_Func_string__string__o *)0x4392c12;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._onValueChanged);
    (__this->fields)._onEndEdit = onEndEdit;
    pSStackY_180 = (System_Func_string__string__o *)0x4392c24;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._onEndEdit,onEndEdit);
    (__this->fields)._onValidate = onValidate;
    pSStackY_180 = (System_Func_string__string__o *)0x4392c36;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._onValidate,onValidate);
    (__this->fields)._onCleanup = onCleanup;
    pSStackY_180 = (System_Func_string__string__o *)0x4392c48;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._onCleanup);
    pIVar13 = (Il2CppClass *)0x0;
    pSStackY_180 = (System_Func_string__string__o *)0x4392c52;
    pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)onValidate;
    unaff_R14 = onCleanup;
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x4392c70;
    pIVar13 = "InputField";
    pUVar10 = UnityEngine_Transform__Find(pUVar10,(System_String_o *)"InputField",(MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)onValidate;
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pIVar13 = (Il2CppClass *)0x0;
    pSStackY_180 = (System_Func_string__string__o *)0x4392c83;
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)onValidate;
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x4392c9e;
    pUVar12 = (UnityEngine_UI_InputField_o *)
              UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_InputField_GetComponent_InputField);
    unaff_R14 = (System_Func_string__string__o *)&(__this->fields)._inputField;
    (__this->fields)._inputField = pUVar12;
    pSStackY_180 = (System_Func_string__string__o *)0x4392cb3;
    il2cpp_runtime_helper_022b4080(unaff_R14);
    pIVar15 = (Il2CppClass *)(__this->fields)._inputField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pSStackY_180 = (System_Func_string__string__o *)0x4392cd0;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar13 = (Il2CppClass *)0x0;
    pSStackY_180 = (System_Func_string__string__o *)0x4392cdc;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pIVar13 = (Il2CppClass *)0x0;
      pSStackY_180 = (System_Func_string__string__o *)0x4392cee;
      pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        pSStackY_180 = (System_Func_string__string__o *)0x4392d05;
        pIVar13 = "InputField";
        pUVar10 = UnityEngine_Transform__Find(pUVar10,(System_String_o *)"InputField",(MethodInfo *)0x0);
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          pIVar13 = (Il2CppClass *)0x0;
          pSStackY_180 = (System_Func_string__string__o *)0x4392d18;
          pUVar11 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
            pSStackY_180 = (System_Func_string__string__o *)0x4392d33;
            pIVar13 = (Il2CppClass *)UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_InputFieldPasteable_AddComponent_InputFieldPasteable);
            *(Il2CppClass **)unaff_R14 = pIVar13;
            pSStackY_180 = (System_Func_string__string__o *)0x4392d41;
            il2cpp_runtime_helper_022b4080(unaff_R14);
            pUVar12 = *(UnityEngine_UI_InputField_o **)unaff_R14;
            if (pUVar12 != (UnityEngine_UI_InputField_o *)0x0) {
              pIVar13 = (Il2CppClass *)0x0;
              pSStackY_180 = (System_Func_string__string__o *)0x4392d57;
              pUVar10 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                pSStackY_180 = (System_Func_string__string__o *)0x4392d74;
                pIVar13 = "Text";
                pUVar10 = UnityEngine_Transform__Find
                                    (pUVar10,(System_String_o *)"Text",(MethodInfo *)0x0);
                if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                  pSStackY_180 = (System_Func_string__string__o *)0x4392d8f;
                  pIVar13 = (Il2CppClass *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar10,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
                  pSStackY_180 = (System_Func_string__string__o *)0x4392d9c;
                  UnityEngine_UI_InputField__set_textComponent
                            (pUVar12,(UnityEngine_UI_Text_o *)pIVar13,(MethodInfo *)0x0);
                  if (*(UnityEngine_UI_InputField_o **)unaff_R14 != (UnityEngine_UI_InputField_o *)0x0) {
                    pIVar13 = (Il2CppClass *)0x1;
                    pSStackY_180 = (System_Func_string__string__o *)0x4392db4;
                    UnityEngine_UI_Selectable__set_transition
                              ((UnityEngine_UI_Selectable_o *)*(UnityEngine_UI_InputField_o **)unaff_R14,1,
                               (MethodInfo *)0x0);
                    pIVar15 = *(Il2CppClass **)unaff_R14;
                    if (pIVar15 != (Il2CppClass *)0x0) {
                      pSStackY_180 = (System_Func_string__string__o *)0x4392dd2;
                      pIVar13 = (Il2CppClass *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pIVar15,MethodInfo_Image_GetComponent_Image);
                      pSStackY_180 = (System_Func_string__string__o *)0x4392ddf;
                      UnityEngine_UI_Selectable__set_targetGraphic
                                ((UnityEngine_UI_Selectable_o *)pIVar15,(UnityEngine_UI_Graphic_o *)pIVar13,
                                 (MethodInfo *)0x0);
                      goto label_04392ddf;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_04393341;
    }
label_04392ddf:
    if (*(UnityEngine_UI_InputField_o **)unaff_R14 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x4392e12;
    UnityEngine_UI_InputField__set_text
              (*(UnityEngine_UI_InputField_o **)unaff_R14,
               (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    pUVar12 = *(UnityEngine_UI_InputField_o **)unaff_R14;
    pIVar15 = (Il2CppClass *)(style->fields).ThemePanel;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      pSStackY_180 = (System_Func_string__string__o *)0x4392e36;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStackY_180 = (System_Func_string__string__o *)0x4392e68;
    pIVar13 = pIVar15;
    UI_UIManager__GetThemeColorBlock
              (&local_88,(System_String_o *)pIVar15,(System_String_o *)"DefaultSetting","Input","DefaultPanel",
               (MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pIVar13 = (Il2CppClass *)0x0;
    pSStackY_180 = (System_Func_string__string__o *)0x4392f28;
    value.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
    value.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
    value.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
    value.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
    value.fields.m_HighlightedColor.fields.r = local_88.fields.m_HighlightedColor.fields.r;
    value.fields.m_HighlightedColor.fields.g = local_88.fields.m_HighlightedColor.fields.g;
    value.fields.m_HighlightedColor.fields.b = local_88.fields.m_HighlightedColor.fields.b;
    value.fields.m_HighlightedColor.fields.a = local_88.fields.m_HighlightedColor.fields.a;
    value.fields.m_PressedColor.fields.r = local_88.fields.m_PressedColor.fields.r;
    value.fields.m_PressedColor.fields.g = local_88.fields.m_PressedColor.fields.g;
    value.fields.m_PressedColor.fields.b = local_88.fields.m_PressedColor.fields.b;
    value.fields.m_PressedColor.fields.a = local_88.fields.m_PressedColor.fields.a;
    value.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r;
    value.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g;
    value.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b;
    value.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a;
    value.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r;
    value.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g;
    value.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b;
    value.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a;
    value.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
    value.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
    UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pUVar12,value,(MethodInfo *)0x0);
    if (*(UnityEngine_UI_InputField_o **)unaff_R14 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pIVar13 = (Il2CppClass *)0x0;
    pSStackY_180 = (System_Func_string__string__o *)0x4392f3b;
    pUVar10 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)*(UnityEngine_UI_InputField_o **)unaff_R14,
                         (MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x4392f5b;
    pIVar13 = "Text";
    pUVar10 = UnityEngine_Transform__Find(pUVar10,(System_String_o *)"Text",(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x4392f76;
    pIVar14 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar10,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
    pSStackY_180 = (System_Func_string__string__o *)0x4392fa1;
    pIVar13 = "DefaultSetting";
    UVar16 = UI_UIManager__GetThemeColor
                       ((style->fields).ThemePanel,(System_String_o *)"DefaultSetting","InputTextColor","DefaultPanel",
                        (MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)&"DefaultPanel";
    if (pIVar14 == (Il2CppObject *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x4392fbe;
    (*pIVar14->klass->vtable[0x17].methodPtr)
              (UVar16.fields.r,UVar16.fields.b,pIVar14,pIVar14->klass->vtable[0x17].method);
    pUVar12 = *(UnityEngine_UI_InputField_o **)unaff_R14;
    pSStackY_180 = (System_Func_string__string__o *)0x4392fdd;
    pIVar13 = "DefaultSetting";
    UVar16 = UI_UIManager__GetThemeColor
                       ((style->fields).ThemePanel,(System_String_o *)"DefaultSetting","InputSelectionColor","DefaultPanel",
                        (MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)&"DefaultPanel";
    if (pUVar12 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pIVar13 = (Il2CppClass *)0x0;
    pSStackY_180 = (System_Func_string__string__o *)0x4392ff3;
    UnityEngine_UI_InputField__set_selectionColor(pUVar12,UVar16,(MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)&"Text";
    if (*(UnityEngine_UI_InputField_o **)unaff_R14 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pIVar13 = (Il2CppClass *)0x0;
    pSStackY_180 = (System_Func_string__string__o *)0x4393014;
    pUVar10 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)*(UnityEngine_UI_InputField_o **)unaff_R14,
                         (MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)&"Text";
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x439302f;
    pIVar13 = "Text";
    pUVar10 = UnityEngine_Transform__Find(pUVar10,(System_String_o *)"Text",(MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)&"Text";
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x4393043;
    pIVar13 = MethodInfo_Text_GetComponent_Text;
    __this_02 = (UnityEngine_UI_Text_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar10,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
    pIVar15 = (Il2CppClass *)&"Text";
    if (__this_02 == (UnityEngine_UI_Text_o *)0x0) goto label_04393341;
    value_00 = (style->fields).FontSize + (__this->fields)._inputFontSizeOffset;
    pIVar13 = (Il2CppClass *)(ulong)value_00;
    pSStackY_180 = (System_Func_string__string__o *)0x439305e;
    UnityEngine_UI_Text__set_fontSize(__this_02,value_00,(MethodInfo *)0x0);
    pUVar12 = (__this->fields)._inputField;
    pIVar15 = (Il2CppClass *)&"Text";
    if (pUVar12 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pIVar13 = (Il2CppClass *)0x0;
    pSStackY_180 = (System_Func_string__string__o *)0x4393073;
    pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)&"Text";
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x4393089;
    pIVar13 = "Text";
    pUVar10 = UnityEngine_Transform__Find(pUVar10,(System_String_o *)"Text",(MethodInfo *)0x0);
    pIVar15 = (Il2CppClass *)&"Text";
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x439309d;
    pIVar15 = (Il2CppClass *)
              UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar10,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
    pSStackY_180 = (System_Func_string__string__o *)0x43930c4;
    pIVar13 = "DefaultSetting";
    UVar16 = UI_UIManager__GetThemeColor
                       ((style->fields).ThemePanel,(System_String_o *)"DefaultSetting","InputTextColor","DefaultPanel",
                        (MethodInfo *)0x0);
    if (pIVar15 == (Il2CppClass *)0x0) goto label_04393341;
    pUVar3 = (pIVar15->_1).image;
    pIVar13 = (Il2CppClass *)(pUVar3->vtable)._23_unknown.method;
    pSStackY_180 = (System_Func_string__string__o *)0x43930e0;
    (*(pUVar3->vtable)._23_unknown.methodPtr)(UVar16.fields.r,UVar16.fields.b,pIVar15);
    if (*(UnityEngine_UI_InputField_o **)unaff_R14 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x43930fb;
    pIVar13 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
    pIVar14 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)*(UnityEngine_UI_InputField_o **)unaff_R14,
                         (MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pIVar15 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
    if (pIVar14 == (Il2CppObject *)0x0) goto label_04393341;
    pIVar13 = (Il2CppClass *)pIVar14->klass->vtable[0x24].method;
    pSStackY_180 = (System_Func_string__string__o *)0x439311d;
    (*pIVar14->klass->vtable[0x24].methodPtr)(elementWidth,pIVar14);
    pIVar15 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
    if (*(UnityEngine_UI_InputField_o **)unaff_R14 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x4393131;
    pIVar13 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
    pIVar14 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)*(UnityEngine_UI_InputField_o **)unaff_R14,
                         (MethodInfo_24E7B40 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pIVar15 = (Il2CppClass *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
    if (pIVar14 == (Il2CppObject *)0x0) goto label_04393341;
    pIVar13 = (Il2CppClass *)pIVar14->klass->vtable[0x26].method;
    pSStackY_180 = (System_Func_string__string__o *)0x4393153;
    (*pIVar14->klass->vtable[0x26].methodPtr)(elementHeight,pIVar14);
    pIVar15 = (Il2CppClass *)setting;
    if (*(UnityEngine_UI_InputField_o **)unaff_R14 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pSStackY_180 = (System_Func_string__string__o *)0x4393172;
    UnityEngine_UI_InputField__set_lineType
              (*(UnityEngine_UI_InputField_o **)unaff_R14,(multiLine & 0xffU) * 2,(MethodInfo *)0x0);
    pSStackY_180 = (System_Func_string__string__o *)0x439317f;
    pIVar13 = (Il2CppClass *)setting;
    iVar9 = UI_BaseSettingElement__GetSettingType((UI_BaseSettingElement_o *)__this,setting,(MethodInfo *)0x0)
    ;
    (__this->fields)._settingType = iVar9;
    if (iVar9 == 2) {
      if (*(UnityEngine_UI_InputField_o **)unaff_R14 != (UnityEngine_UI_InputField_o *)0x0) {
        pIVar13 = (Il2CppClass *)0x2;
        pSStackY_180 = (System_Func_string__string__o *)0x439324c;
        UnityEngine_UI_InputField__set_contentType
                  (*(UnityEngine_UI_InputField_o **)unaff_R14,2,(MethodInfo *)0x0);
        pUVar12 = *(UnityEngine_UI_InputField_o **)unaff_R14;
        if (pUVar12 != (UnityEngine_UI_InputField_o *)0x0) {
          pIVar13 = (Il2CppClass *)0xa;
label_0439325d:
          pSStackY_180 = (System_Func_string__string__o *)0x4393264;
          UnityEngine_UI_InputField__set_characterLimit(pUVar12,(int32_t)pIVar13,(MethodInfo *)0x0);
          goto label_04393264;
        }
      }
      goto label_04393341;
    }
    if (iVar9 != 4) {
      if (iVar9 == 3) {
        if (*(UnityEngine_UI_InputField_o **)unaff_R14 != (UnityEngine_UI_InputField_o *)0x0) {
          pIVar13 = (Il2CppClass *)0x3;
          pSStackY_180 = (System_Func_string__string__o *)0x43931b3;
          UnityEngine_UI_InputField__set_contentType
                    (*(UnityEngine_UI_InputField_o **)unaff_R14,3,(MethodInfo *)0x0);
          pUVar12 = *(UnityEngine_UI_InputField_o **)unaff_R14;
          if (pUVar12 != (UnityEngine_UI_InputField_o *)0x0) {
            pIVar13 = (Il2CppClass *)&g_data_00000014;
            goto label_0439325d;
          }
        }
      }
      else {
label_04393264:
        if (*(UnityEngine_UI_InputField_o **)unaff_R14 != (UnityEngine_UI_InputField_o *)0x0) {
          __this_00 = ((*(UnityEngine_UI_InputField_o **)unaff_R14)->fields).m_OnDidEndEdit;
          pSStackY_180 = (System_Func_string__string__o *)0x4393286;
          pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
          pSStackY_180 = (System_Func_string__string__o *)0x43932a0;
          pIVar13 = (Il2CppClass *)__this;
          UnityEngine_Events_UnityAction_object____ctor();
          if (__this_00 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
            pSStackY_180 = (System_Func_string__string__o *)0x43932bf;
            pIVar13 = pIVar15;
            UnityEngine_Events_UnityEvent_object___AddListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
                       (UnityEngine_Events_UnityAction_T0__o *)pIVar15,MethodInfo_Void_AddListener);
            if (*(UnityEngine_UI_InputField_o **)unaff_R14 != (UnityEngine_UI_InputField_o *)0x0) {
              __this_01 = ((*(UnityEngine_UI_InputField_o **)unaff_R14)->fields).m_OnSubmit;
              pSStackY_180 = (System_Func_string__string__o *)0x43932d6;
              call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
              pSStackY_180 = (System_Func_string__string__o *)0x43932f0;
              pIVar13 = (Il2CppClass *)__this;
              UnityEngine_Events_UnityAction_object____ctor();
              pIVar15 = (Il2CppClass *)0x0;
              if (__this_01 != (UnityEngine_UI_InputField_SubmitEvent_o *)0x0) {
                pSStackY_180 = (System_Func_string__string__o *)0x4393304;
                UnityEngine_Events_UnityEvent_object___AddListener
                          ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call,MethodInfo_Void_AddListener);
                *(undefined1 *)&(__this->fields)._finishedSetup = 1;
                pSStackY_180 = (System_Func_string__string__o *)0x439332f;
                UI_BaseSettingElement__Setup
                          ((UI_BaseSettingElement_o *)__this,setting,style,title,tooltip,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto label_04393341;
    }
    if (*(UnityEngine_UI_InputField_o **)unaff_R14 == (UnityEngine_UI_InputField_o *)0x0) goto label_04393341;
    pIVar13 = (Il2CppClass *)0x0;
    pSStackY_180 = (System_Func_string__string__o *)0x43931de;
    UnityEngine_UI_InputField__set_contentType(*(UnityEngine_UI_InputField_o **)unaff_R14,0,(MethodInfo *)0x0)
    ;
    if (setting == (Settings_BaseSetting_o *)0x0) goto label_04393341;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    pIVar13 = TypeInfo_StringSetting;
    if ((bVar1 <= (setting->klass->_2).naturalAligment) &&
       ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
      pUVar12 = *(UnityEngine_UI_InputField_o **)unaff_R14;
      if (pUVar12 != (UnityEngine_UI_InputField_o *)0x0) {
        pIVar13 = (Il2CppClass *)(ulong)*(uint *)&setting[2].klass;
        if (*(uint *)&setting[2].klass == 0x7fffffff) {
          pIVar13 = (Il2CppClass *)0x0;
        }
        goto label_0439325d;
      }
      goto label_04393341;
    }
  }
  pSStackY_180 = (System_Func_string__string__o *)0x439334e;
  pIVar15 = (Il2CppClass *)setting;
  local_190 = il2cpp_runtime_helper_022b2fd0();
  pIStackY_188 = (Il2CppClass *)setting;
  pSStackY_180 = unaff_R14;
  if (g_data_057ae2b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2b8 = '\x01';
  }
  local_190 = 0;
  if (*(char *)&(pIVar15->_1).interopData == '\0') {
    return;
  }
  pIVar4 = (pIVar15->_1).parent;
  if ((pIVar4 != (Il2CppClass *)0x0) &&
     (cVar7 = (*(code *)(pIVar4->_1).namespaze)
                        ((pIVar4->_1).element_class,pIVar13,*(undefined8 *)&(pIVar4->_1).byval_arg.bits),
     cVar7 == '\0')) {
    return;
  }
  pvVar5 = (pIVar15->_1).generic_class;
  if (pvVar5 != (void *)0x0) {
    pIVar13 = (Il2CppClass *)
              (**(code **)((long)pvVar5 + 0x18))
                        (*(undefined8 *)((long)pvVar5 + 0x40),pIVar13,*(undefined8 *)((long)pvVar5 + 0x28));
  }
  if ((((UnityEngine_UI_Navigation_o *)&(pIVar15->_1).byval_arg.bits)->fields).m_Mode == 4) {
    __this_03 = (pIVar15->_1).byval_arg.data;
    if (__this_03 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar1 <= (__this_03->klass->_2).naturalAligment) &&
       ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
      Settings_TypedSetting_object___set_Value(__this_03,(Il2CppObject *)pIVar13,MethodInfo_Void_set_Value);
      pIVar13 = (pIVar15->_1).castClass;
      goto joined_r0x0439357b;
    }
label_04393590:
    il2cpp_runtime_helper_022b2fd0();
label_04393595:
    il2cpp_runtime_helper_022b2c90();
    if (*(char *)&__this_03[3].fields.DefaultValue != '\0') {
      (*(__this_03->klass->vtable)._6_unknown.methodPtr)();
      pIVar14 = __this_03[2].fields.DefaultValue;
      if (pIVar14 != (Il2CppObject *)0x0) {
        (*pIVar14[1].monitor)(pIVar14[4].klass,pIVar14[2].monitor,extraout_RDX,pIVar14[1].monitor);
        return;
      }
    }
    return;
  }
  bVar8 = System_String__op_Inequality
                    ((System_String_o *)pIVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    iVar2 = (((UnityEngine_UI_Navigation_o *)&(pIVar15->_1).byval_arg.bits)->fields).m_Mode;
    if (iVar2 == 2) {
      bVar8 = System_Int32__TryParse((System_String_o *)pIVar13,(int32_t *)&local_190,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        __this_03 = (pIVar15->_1).byval_arg.data;
        if (__this_03 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((__this_03->klass->_2).naturalAligment < bVar1) ||
           ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto label_04393590;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this_03,(int32_t)local_190,MethodInfo_Void_set_Value);
      }
    }
    else if ((iVar2 == 3) &&
            (bVar8 = System_Single__TryParse
                               ((System_String_o *)pIVar13,(float *)((long)&local_190 + 4),(MethodInfo *)0x0),
            (char)bVar8 != '\0')) {
      __this_03 = (pIVar15->_1).byval_arg.data;
      if (__this_03 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
      bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if ((bVar1 <= (__this_03->klass->_2).naturalAligment) &&
         ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_FloatSetting)) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)__this_03,local_190._4_4_,MethodInfo_Void_set_Value);
        pIVar13 = (pIVar15->_1).castClass;
        goto joined_r0x0439357b;
      }
      goto label_04393590;
    }
  }
  pIVar13 = (pIVar15->_1).castClass;
joined_r0x0439357b:
  if (pIVar13 != (Il2CppClass *)0x0) {
    uVar6._0_4_ = (pIVar13->_1).byval_arg.bits;
    uVar6._4_4_ = *(undefined4 *)&(pIVar13->_1).byval_arg.field_0xc;
    (*(code *)(pIVar13->_1).namespaze)((pIVar13->_1).element_class,uVar6);
  }
  return;
}


// UI.InputSettingElement$$OnValueChanged
// il2cpp: void UI_InputSettingElement__OnValueChanged (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4393350

void UI_InputSettingElement__OnValueChanged
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Func_string__bool__o *pSVar3;
  System_Func_string__string__o *pSVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  Il2CppObject *pIVar6;
  char cVar7;
  bool_conflict bVar8;
  undefined8 extraout_RDX;
  Settings_TypedSetting_T__o *__this_00;
  undefined8 uStack_18;
  
  if (g_data_057ae2b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2b8 = '\x01';
  }
  uStack_18 = 0;
  if ((char)(__this->fields)._finishedSetup == '\0') {
    return;
  }
  pSVar3 = (__this->fields)._onValidate;
  if ((pSVar3 != (System_Func_string__bool__o *)0x0) &&
     (cVar7 = (*(code *)(pSVar3->fields).invoke_impl)
                        ((pSVar3->fields).method_code,value,(pSVar3->fields).method), cVar7 == '\0')) {
    return;
  }
  pSVar4 = (__this->fields)._onCleanup;
  if (pSVar4 != (System_Func_string__string__o *)0x0) {
    value = (System_String_o *)
            (*(code *)(pSVar4->fields).invoke_impl)
                      ((pSVar4->fields).method_code,value,(pSVar4->fields).method);
  }
  if ((__this->fields)._settingType == 4) {
    __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
      Settings_TypedSetting_object___set_Value(__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
      pUVar5 = (__this->fields)._onValueChanged;
      goto joined_r0x0439357b;
    }
label_04393590:
    il2cpp_runtime_helper_022b2fd0();
label_04393595:
    il2cpp_runtime_helper_022b2c90();
    if (*(char *)&__this_00[3].fields.DefaultValue != '\0') {
      (*(__this_00->klass->vtable)._6_unknown.methodPtr)();
      pIVar6 = __this_00[2].fields.DefaultValue;
      if (pIVar6 != (Il2CppObject *)0x0) {
        (*pIVar6[1].monitor)(pIVar6[4].klass,pIVar6[2].monitor,extraout_RDX,pIVar6[1].monitor);
        return;
      }
    }
    return;
  }
  bVar8 = System_String__op_Inequality
                    (value,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    iVar2 = (__this->fields)._settingType;
    if (iVar2 == 2) {
      bVar8 = System_Int32__TryParse(value,(int32_t *)&uStack_18,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
        if (__this_00 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto label_04393590;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this_00,(int32_t)uStack_18,MethodInfo_Void_set_Value);
      }
    }
    else if ((iVar2 == 3) &&
            (bVar8 = System_Single__TryParse(value,(float *)((long)&uStack_18 + 4),(MethodInfo *)0x0),
            (char)bVar8 != '\0')) {
      __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
      if (__this_00 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
      bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_FloatSetting)) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)__this_00,uStack_18._4_4_,MethodInfo_Void_set_Value);
        pUVar5 = (__this->fields)._onValueChanged;
        goto joined_r0x0439357b;
      }
      goto label_04393590;
    }
  }
  pUVar5 = (__this->fields)._onValueChanged;
joined_r0x0439357b:
  if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
  }
  return;
}


// UI.InputSettingElement$$OnInputFinishEditing
// il2cpp: void UI_InputSettingElement__OnInputFinishEditing (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x43935a0

void UI_InputSettingElement__OnInputFinishEditing
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  code *vtableDispatch;
  undefined8 extraout_RDX;
  
  if ((char)(__this->fields)._finishedSetup != '\0') {
    (*(__this->klass->vtable)._6_SyncElement.methodPtr)(__this,(__this->klass->vtable)._6_SyncElement.method);
    pUVar1 = (__this->fields)._onEndEdit;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      vtableDispatch = (code *)(pUVar1->fields).invoke_impl;
      (*vtableDispatch)
                ((pUVar1->fields).method_code,(pUVar1->fields).method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


// UI.InputSettingElement$$SyncElement
// il2cpp: void UI_InputSettingElement__SyncElement (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x43935e0

void UI_InputSettingElement__SyncElement(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool_conflict bVar3;
  System_Threading_CancellationTokenSource_o *pSVar4;
  UnityEngine_MonoBehaviour_o *format;
  UnityEngine_UI_InputField_o *pUVar5;
  UnityEngine_MonoBehaviour_o *__this_00;
  float in_XMM0_Da;
  undefined1 local_10 [8];
  
  if (g_data_057ae2b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    in_XMM0_Da = (float)il2cpp_runtime_helper_023445d0(&"0.##################");
    g_data_057ae2b9 = '\x01';
  }
  local_10._4_4_ = 0;
  local_10._0_4_ = 0;
  if ((char)(__this->fields)._finishedSetup == '\0') {
    return;
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    format = (UnityEngine_MonoBehaviour_o *)(__this->fields)._setting;
    if (format == (UnityEngine_MonoBehaviour_o *)0x0) goto label_043937a2;
    bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
    if ((bVar1 <= (((System_String_c *)format->klass)->_2).naturalAligment) &&
       ((((System_String_c *)format->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
      pUVar5 = (__this->fields)._inputField;
      local_10._0_4_ = *(undefined4 *)((long)&(format->fields).m_CachedPtr + 4);
      format = (UnityEngine_MonoBehaviour_o *)local_10;
      pSVar4 = (System_Threading_CancellationTokenSource_o *)
               System_Int32__ToString((int32_t)format,(MethodInfo *)0x0);
joined_r0x04393788:
      if (pUVar5 != (UnityEngine_UI_InputField_o *)0x0) {
label_04393790:
        UnityEngine_UI_InputField__set_text(pUVar5,(System_String_o *)pSVar4,(MethodInfo *)0x0);
        return;
      }
      goto label_043937a2;
    }
  }
  else if (iVar2 == 4) {
    format = (UnityEngine_MonoBehaviour_o *)(__this->fields)._setting;
    if (format == (UnityEngine_MonoBehaviour_o *)0x0) goto label_043937a2;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar1 <= (((System_String_c *)format->klass)->_2).naturalAligment) &&
       ((((System_String_c *)format->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
      pUVar5 = (__this->fields)._inputField;
      if (pUVar5 == (UnityEngine_UI_InputField_o *)0x0) goto label_043937a2;
      pSVar4 = (format->fields).m_CancellationTokenSource;
      goto label_04393790;
    }
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    format = (UnityEngine_MonoBehaviour_o *)(__this->fields)._setting;
    if (format == (UnityEngine_MonoBehaviour_o *)0x0) goto label_043937a2;
    bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
    if ((bVar1 <= (((System_String_c *)format->klass)->_2).naturalAligment) &&
       ((((System_String_c *)format->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_FloatSetting)) {
      pUVar5 = (__this->fields)._inputField;
      local_10._4_4_ = *(undefined4 *)((long)&(format->fields).m_CachedPtr + 4);
      format = (UnityEngine_MonoBehaviour_o *)(local_10 + 4);
      pSVar4 = (System_Threading_CancellationTokenSource_o *)
               System_Single__ToString_3cccfe0(in_XMM0_Da,(System_String_o *)format,"0.##################");
      goto joined_r0x04393788;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_043937a2:
  il2cpp_runtime_helper_022b2c90();
  __this_00 = format;
  if (g_data_057ae2ba == '\0') {
    __this_00 = (UnityEngine_MonoBehaviour_o *)&"-";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae2ba = '\x01';
  }
  pSVar4 = format[1].fields.m_CancellationTokenSource;
  if (pSVar4 != (System_Threading_CancellationTokenSource_o *)0x0) {
    if (((*(char *)&pSVar4[7].fields._kernelEvent == '\0') ||
        (((ulong)pSVar4[4].fields._registeredCallbacksLists & 0xfffffffe) != 2)) ||
       ((bVar3 = UnityEngine_Input__GetKeyDown(0x2d,(MethodInfo *)0x0), (char)bVar3 == '\0' &&
        (bVar3 = UnityEngine_Input__GetKeyDown(0x10d,(MethodInfo *)0x0), (char)bVar3 == '\0')))) {
      return;
    }
    pUVar5 = (UnityEngine_UI_InputField_o *)format[1].fields.m_CancellationTokenSource;
    __this_00 = (UnityEngine_MonoBehaviour_o *)0x0;
    if (pUVar5 != (UnityEngine_UI_InputField_o *)0x0) {
      UnityEngine_UI_InputField__set_text(pUVar5,"-",(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_00[2].klass = 0xfffffffc;
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.InputSettingElement$$Update
// il2cpp: void UI_InputSettingElement__Update (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x43937b0

void UI_InputSettingElement__Update(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  bool_conflict bVar2;
  UI_InputSettingElement_o *__this_00;
  
  __this_00 = __this;
  if (g_data_057ae2ba == '\0') {
    __this_00 = (UI_InputSettingElement_o *)&"-";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae2ba = '\x01';
  }
  pUVar1 = (__this->fields)._inputField;
  if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
    if ((*(char *)&(pUVar1->fields).m_Mesh == '\0') ||
       (((ulong)(pUVar1->fields).m_Placeholder & 0xfffffffe) != 2)) {
      return;
    }
    bVar2 = UnityEngine_Input__GetKeyDown(0x2d,(MethodInfo *)0x0);
    if (((char)bVar2 == '\0') &&
       (bVar2 = UnityEngine_Input__GetKeyDown(0x10d,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
      return;
    }
    pUVar1 = (__this->fields)._inputField;
    __this_00 = (UI_InputSettingElement_o *)0x0;
    if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
      UnityEngine_UI_InputField__set_text(pUVar1,"-",(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (__this_00->fields)._inputFontSizeOffset = -4;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.InputSettingElement$$.ctor
// il2cpp: void UI_InputSettingElement___ctor (UI_InputSettingElement_o* __this, const MethodInfo* method);
// 0x4393840

void UI_InputSettingElement___ctor(UI_InputSettingElement_o *__this,MethodInfo *method)

{
  (__this->fields)._inputFontSizeOffset = -4;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.InputSettingElement$$<Setup>b__11_0
// il2cpp: void UI_InputSettingElement___Setup_b__11_0 (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4393850

void UI_InputSettingElement___Setup_b__11_0
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Func_string__bool__o *pSVar3;
  System_Func_string__string__o *pSVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  Il2CppObject *pIVar6;
  char cVar7;
  bool_conflict bVar8;
  undefined8 extraout_RDX;
  Settings_TypedSetting_T__o *__this_00;
  undefined8 uStack_18;
  
  if (g_data_057ae2b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae2b8 = '\x01';
  }
  uStack_18 = 0;
  if ((char)(__this->fields)._finishedSetup == '\0') {
    return;
  }
  pSVar3 = (__this->fields)._onValidate;
  if ((pSVar3 != (System_Func_string__bool__o *)0x0) &&
     (cVar7 = (*(code *)(pSVar3->fields).invoke_impl)
                        ((pSVar3->fields).method_code,value,(pSVar3->fields).method), cVar7 == '\0')) {
    return;
  }
  pSVar4 = (__this->fields)._onCleanup;
  if (pSVar4 != (System_Func_string__string__o *)0x0) {
    value = (System_String_o *)
            (*(code *)(pSVar4->fields).invoke_impl)
                      ((pSVar4->fields).method_code,value,(pSVar4->fields).method);
  }
  if ((__this->fields)._settingType == 4) {
    __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
      Settings_TypedSetting_object___set_Value(__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
      pUVar5 = (__this->fields)._onValueChanged;
      goto joined_r0x0439357b;
    }
label_04393590:
    il2cpp_runtime_helper_022b2fd0();
label_04393595:
    il2cpp_runtime_helper_022b2c90();
    if (*(char *)&__this_00[3].fields.DefaultValue != '\0') {
      (*(__this_00->klass->vtable)._6_unknown.methodPtr)();
      pIVar6 = __this_00[2].fields.DefaultValue;
      if (pIVar6 != (Il2CppObject *)0x0) {
        (*pIVar6[1].monitor)(pIVar6[4].klass,pIVar6[2].monitor,extraout_RDX,pIVar6[1].monitor);
        return;
      }
    }
    return;
  }
  bVar8 = System_String__op_Inequality
                    (value,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    iVar2 = (__this->fields)._settingType;
    if (iVar2 == 2) {
      bVar8 = System_Int32__TryParse(value,(int32_t *)&uStack_18,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
        if (__this_00 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto label_04393590;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this_00,(int32_t)uStack_18,MethodInfo_Void_set_Value);
      }
    }
    else if ((iVar2 == 3) &&
            (bVar8 = System_Single__TryParse(value,(float *)((long)&uStack_18 + 4),(MethodInfo *)0x0),
            (char)bVar8 != '\0')) {
      __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
      if (__this_00 == (Settings_TypedSetting_T__o *)0x0) goto label_04393595;
      bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_FloatSetting)) {
        Settings_TypedSetting_float___set_Value
                  ((Settings_TypedSetting_float__o *)__this_00,uStack_18._4_4_,MethodInfo_Void_set_Value);
        pUVar5 = (__this->fields)._onValueChanged;
        goto joined_r0x0439357b;
      }
      goto label_04393590;
    }
  }
  pUVar5 = (__this->fields)._onValueChanged;
joined_r0x0439357b:
  if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (*(code *)(pUVar5->fields).invoke_impl)((pUVar5->fields).method_code,(pUVar5->fields).method);
  }
  return;
}


// UI.InputSettingElement$$<Setup>b__11_1
// il2cpp: void UI_InputSettingElement___Setup_b__11_1 (UI_InputSettingElement_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4393860

void UI_InputSettingElement___Setup_b__11_1
               (UI_InputSettingElement_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  code *vtableDispatch;
  undefined8 extraout_RDX;
  
  if ((char)(__this->fields)._finishedSetup != '\0') {
    (*(__this->klass->vtable)._6_SyncElement.methodPtr)(__this,(__this->klass->vtable)._6_SyncElement.method);
    pUVar1 = (__this->fields)._onEndEdit;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      vtableDispatch = (code *)(pUVar1->fields).invoke_impl;
      (*vtableDispatch)
                ((pUVar1->fields).method_code,(pUVar1->fields).method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  return;
}


