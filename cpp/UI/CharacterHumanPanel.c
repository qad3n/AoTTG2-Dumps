// Type: UI.CharacterHumanPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterHumanPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterHumanPanel.cs
// --------------------------------

// UI.CharacterHumanPanel$$Setup
// il2cpp: void UI_CharacterHumanPanel__Setup (UI_CharacterHumanPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x439c3d0

void UI_CharacterHumanPanel__Setup(UI_CharacterHumanPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  Settings_TypedSetting_T__o *__this_00;
  char *pcVar6;
  UI_IconPickPopup_o *popup;
  UnityEngine_Transform_o *parent_00;
  Settings_SetSettingsContainer_T__o *pSVar7;
  long *plVar8;
  System_String_o *path1;
  System_Object_array *pSVar9;
  Il2CppObject **ppIVar10;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  uint uVar11;
  bool_conflict bVar12;
  System_String_o *pSVar13;
  System_String_c *pSVar14;
  Il2CppObject *value;
  System_String_c *pSVar15;
  UnityEngine_Events_UnityAction_o *pUVar16;
  System_String_Fields tooltipPopup;
  System_String_o *pSVar17;
  System_String_array *pSVar18;
  System_String_array *pSVar19;
  System_String_array *pSVar20;
  System_String_array *options;
  System_String_array *pSVar21;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_List_object__o *__this_06;
  undefined8 *puVar22;
  System_Collections_Generic_List_object__o *__this_07;
  UnityEngine_Texture2D_o *x;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo_362C220 *method_03;
  long *plVar23;
  System_String_c *method_04;
  System_String_array *pSVar24;
  System_String_c *__this_08;
  System_String_c *__this_09;
  long lVar25;
  System_String_array **unaff_R12;
  System_String_c **unaff_R13;
  ulong uVar26;
  System_String_o *in_stack_fffffffffffffeb8;
  System_Collections_Generic_List_T__o *pSVar27;
  System_Collections_Generic_List_Enumerator_T__o SStack_108;
  System_String_array *pSStack_f0;
  System_String_array *pSStack_e8;
  System_String_array *pSStack_e0;
  System_String_array *pSStack_d8;
  long *plStack_d0;
  System_Nullable_float__Fields SStack_80;
  System_String_array *pSStack_78;
  System_String_o *pSStack_70;
  System_String_array *pSStack_68;
  System_String_array *pSStack_60;
  System_Nullable_float__Fields SStack_58;
  System_String_array *pSStack_50;
  System_String_o *pSStack_48;
  System_String_c *pSStack_40;
  long lStack_38;
  
  if (g_data_057ae302 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__2_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__2_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSpecials);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Team");
    il2cpp_runtime_helper_023445d0(&"Costume");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"Loadout");
    il2cpp_runtime_helper_023445d0(&"Costume3");
    il2cpp_runtime_helper_023445d0(&"Costume2");
    il2cpp_runtime_helper_023445d0(&"Costume1");
    il2cpp_runtime_helper_023445d0(&"Special");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae302 = '\x01';
  }
  __this_08 = (System_String_c *)__this;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  lVar5 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  if (*(long *)(lVar5 + 0x50) == 0) goto label_0439d282;
  if (*(long *)(lVar5 + 0x40) == 0) goto label_0439d282;
  unaff_R12 = *(System_String_array ***)(lVar5 + 0x70);
  if ((System_String_array *)unaff_R12 == (System_String_array *)0x0) goto label_0439d282;
  pSStack_60 = "General";
  lVar25 = *(long *)(*(long *)(lVar5 + 0x50) + 0x58);
  unaff_R13 = *(System_String_c ***)(*(long *)(lVar5 + 0x40) + 0x28);
  __this_00 = (Settings_TypedSetting_T__o *)((System_String_array *)unaff_R12)->m_Items[1];
  __this_08 = TypeInfo_PlayerCharacter;
  if (*(int *)&(TypeInfo_PlayerCharacter->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (__this_00 == (Settings_TypedSetting_T__o *)0x0) goto label_0439d282;
  Settings_TypedSetting_object___set_Value
            (__this_00,(Il2CppObject *)TypeInfo_PlayerCharacter->static_fields->Empty,MethodInfo_Void_set_Value);
  pSVar13 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pSStack_68 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pSStack_68,0x18,200.0,20.0,pSVar13,(MethodInfo *)0x0);
  pSVar14 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  __this_08 = pSVar14;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar14,MethodInfo_List_1_System_String);
  if (lVar25 == 0) goto label_0439d282;
  if (*(long *)(lVar25 + 0x58) == 0) goto label_0439d282;
  if (*(char *)(*(long *)(lVar25 + 0x58) + 0x11) == '\0') {
label_0439c76c:
    lVar5 = *(long *)(lVar25 + 0x60);
  }
  else {
    if (*(int *)&(TypeInfo_HumanLoadout->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar5 = MethodInfo_Void_Add;
    __this_08 = TypeInfo_HumanLoadout;
    if (pSVar14 == (System_String_c *)0x0) goto label_0439d282;
    pSVar13 = TypeInfo_HumanLoadout->static_fields->Empty;
    piVar1 = (int *)((long)&(pSVar14->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pcVar6 = (pSVar14->_1).name;
    if (pcVar6 == (char *)0x0) goto label_0439d282;
    uVar11 = *(uint *)&(pSVar14->_1).namespaze;
    if (*(uint *)(pcVar6 + 0x18) <= uVar11) {
      __this_08 = pSVar14;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pSVar13,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      goto label_0439c76c;
    }
    *(uint *)&(pSVar14->_1).namespaze = uVar11 + 1;
    __this_08 = (System_String_c *)(pcVar6 + (long)(int)uVar11 * 8 + 0x20);
    *(System_String_o **)(pcVar6 + (long)(int)uVar11 * 8 + 0x20) = pSVar13;
    il2cpp_runtime_helper_022b4080();
    lVar5 = *(long *)(lVar25 + 0x60);
  }
  if (lVar5 == 0) goto label_0439d282;
  if (*(char *)(lVar5 + 0x11) == '\0') {
label_0439c818:
    lVar5 = *(long *)(lVar25 + 0x68);
  }
  else {
    if (*(int *)&(TypeInfo_HumanLoadout->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar5 = MethodInfo_Void_Add;
    __this_08 = TypeInfo_HumanLoadout;
    if (pSVar14 == (System_String_c *)0x0) goto label_0439d282;
    pSVar13 = TypeInfo_HumanLoadout->static_fields[1].Empty;
    piVar1 = (int *)((long)&(pSVar14->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pcVar6 = (pSVar14->_1).name;
    if (pcVar6 == (char *)0x0) goto label_0439d282;
    uVar11 = *(uint *)&(pSVar14->_1).namespaze;
    if (*(uint *)(pcVar6 + 0x18) <= uVar11) {
      __this_08 = pSVar14;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pSVar13,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      goto label_0439c818;
    }
    *(uint *)&(pSVar14->_1).namespaze = uVar11 + 1;
    __this_08 = (System_String_c *)(pcVar6 + (long)(int)uVar11 * 8 + 0x20);
    *(System_String_o **)(pcVar6 + (long)(int)uVar11 * 8 + 0x20) = pSVar13;
    il2cpp_runtime_helper_022b4080();
    lVar5 = *(long *)(lVar25 + 0x68);
  }
  if (lVar5 == 0) goto label_0439d282;
  if (*(char *)(lVar5 + 0x11) == '\0') {
label_0439c8c4:
    lVar5 = *(long *)(lVar25 + 0x70);
  }
  else {
    if (*(int *)&(TypeInfo_HumanLoadout->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar5 = MethodInfo_Void_Add;
    __this_08 = TypeInfo_HumanLoadout;
    if (pSVar14 == (System_String_c *)0x0) goto label_0439d282;
    pSVar13 = TypeInfo_HumanLoadout->static_fields[3].Empty;
    piVar1 = (int *)((long)&(pSVar14->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pcVar6 = (pSVar14->_1).name;
    if (pcVar6 == (char *)0x0) goto label_0439d282;
    uVar11 = *(uint *)&(pSVar14->_1).namespaze;
    if (*(uint *)(pcVar6 + 0x18) <= uVar11) {
      __this_08 = pSVar14;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pSVar13,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      goto label_0439c8c4;
    }
    *(uint *)&(pSVar14->_1).namespaze = uVar11 + 1;
    __this_08 = (System_String_c *)(pcVar6 + (long)(int)uVar11 * 8 + 0x20);
    *(System_String_o **)(pcVar6 + (long)(int)uVar11 * 8 + 0x20) = pSVar13;
    il2cpp_runtime_helper_022b4080();
    lVar5 = *(long *)(lVar25 + 0x70);
  }
  if (lVar5 == 0) goto label_0439d282;
  if (*(char *)(lVar5 + 0x11) == '\0') {
    if (pSVar14 == (System_String_c *)0x0) goto label_0439d282;
    iVar4 = *(int *)&(pSVar14->_1).namespaze;
  }
  else {
    if (*(int *)&(TypeInfo_HumanLoadout->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar5 = MethodInfo_Void_Add;
    __this_08 = TypeInfo_HumanLoadout;
    if (pSVar14 == (System_String_c *)0x0) goto label_0439d282;
    pSVar13 = TypeInfo_HumanLoadout->static_fields[2].Empty;
    piVar1 = (int *)((long)&(pSVar14->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pcVar6 = (pSVar14->_1).name;
    if (pcVar6 == (char *)0x0) goto label_0439d282;
    uVar11 = *(uint *)&(pSVar14->_1).namespaze;
    if (uVar11 < *(uint *)(pcVar6 + 0x18)) {
      *(uint *)&(pSVar14->_1).namespaze = uVar11 + 1;
      __this_08 = (System_String_c *)(pcVar6 + (long)(int)uVar11 * 8 + 0x20);
      *(System_String_o **)(pcVar6 + (long)(int)uVar11 * 8 + 0x20) = pSVar13;
      il2cpp_runtime_helper_022b4080();
      iVar4 = *(int *)&(pSVar14->_1).namespaze;
    }
    else {
      __this_08 = pSVar14;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pSVar13,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      iVar4 = *(int *)&(pSVar14->_1).namespaze;
    }
  }
  if (iVar4 == 0) {
    uVar11 = 0;
    if (*(int *)&(TypeInfo_HumanLoadout->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar11 = *(uint *)&(pSVar14->_1).namespaze;
    }
    lVar5 = MethodInfo_Void_Add;
    __this_08 = TypeInfo_HumanLoadout;
    pSVar13 = TypeInfo_HumanLoadout->static_fields->Empty;
    piVar1 = (int *)((long)&(pSVar14->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pcVar6 = (pSVar14->_1).name;
    if (pcVar6 == (char *)0x0) goto label_0439d282;
    if (uVar11 < *(uint *)(pcVar6 + 0x18)) {
      *(uint *)&(pSVar14->_1).namespaze = uVar11 + 1;
      __this_08 = (System_String_c *)(pcVar6 + (long)(int)uVar11 * 8 + 0x20);
      *(System_String_o **)(pcVar6 + (long)(int)uVar11 * 8 + 0x20) = pSVar13;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      __this_08 = pSVar14;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar14,(Il2CppObject *)pSVar13,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  }
  if ((System_String_array *)unaff_R13 == (System_String_array *)0x0) goto label_0439d282;
  if (((System_String_array *)unaff_R13)->m_Items[1] == (System_String_o *)0x0) goto label_0439d282;
  __this_08 = ((System_String_array *)unaff_R13)->m_Items[1][1].klass;
  if (*(int *)&(TypeInfo_PlayerCharacter->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = System_String__op_Equality
                     ((System_String_o *)__this_08,TypeInfo_PlayerCharacter->static_fields->Empty,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if ((System_Collections_Generic_List_BasePopup__o *)((System_String_array *)unaff_R13)->m_Items[3] ==
        (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_0439d282;
    __this_08 = (System_String_c *)((System_String_array *)unaff_R12)->m_Items[3];
    if (__this_08 == (System_String_c *)0x0) goto label_0439d282;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_08,
               *(Il2CppObject **)
                &(((System_Collections_Generic_List_BasePopup__o *)
                  ((System_String_array *)unaff_R13)->m_Items[3])->fields)._size,MethodInfo_Void_set_Value);
    if ((Settings_StringSetting_o *)((System_String_array *)unaff_R13)->m_Items[5] ==
        (Settings_StringSetting_o *)0x0) goto label_0439d282;
    __this_08 = (System_String_c *)((System_String_array *)unaff_R12)->m_Items[5];
    if (__this_08 == (System_String_c *)0x0) goto label_0439d282;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_08,
               *(int32_t *)
                ((long)&(((Settings_StringSetting_o *)((System_String_array *)unaff_R13)->m_Items[5])->fields)
                        .DefaultValue + 4),MethodInfo_Void_set_Value);
    if (((System_String_array *)unaff_R13)->m_Items[4] == (System_String_o *)0x0) goto label_0439d282;
    __this_08 = (System_String_c *)((System_String_array *)unaff_R12)->m_Items[4];
    if (__this_08 == (System_String_c *)0x0) goto label_0439d282;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this_08,
               *(int32_t *)&(((System_String_array *)unaff_R13)->m_Items[4]->fields)._firstChar,MethodInfo_Void_set_Value);
    if (((System_String_array *)unaff_R13)->m_Items[2] == (System_String_o *)0x0) goto label_0439d282;
    __this_08 = (System_String_c *)((System_String_array *)unaff_R12)->m_Items[2];
    if (__this_08 == (System_String_c *)0x0) goto label_0439d282;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_08,
               (Il2CppObject *)((System_String_array *)unaff_R13)->m_Items[2][1].klass,MethodInfo_Void_set_Value);
  }
  if (((System_String_array *)unaff_R12)->m_Items[2] == (System_String_o *)0x0) goto label_0439d282;
  __this_08 = pSVar14;
  bVar12 = System_Collections_Generic_List_object___Contains
                     ((System_Collections_Generic_List_object__o *)pSVar14,
                      (Il2CppObject *)((System_String_array *)unaff_R12)->m_Items[2][1].klass,MethodInfo_Boolean_Contains);
  if ((char)bVar12 == '\0') {
    pSVar15 = (System_String_c *)((System_String_array *)unaff_R12)->m_Items[2];
    __this_08 = pSVar14;
    value = System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar14,0,MethodInfo_String_get_Item);
    if (pSVar15 == (System_String_c *)0x0) goto label_0439d282;
    Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar15,value,MethodInfo_Void_set_Value);
    __this_08 = pSVar15;
  }
  if (((System_String_array *)unaff_R12)->m_Items[2] == (System_String_o *)0x0) goto label_0439d282;
  lStack_38 = lVar25;
  if (*(long *)(lVar25 + 0x80) == 0) goto label_0439d282;
  __this_08 = ((System_String_array *)unaff_R12)->m_Items[2][1].klass;
  bVar3 = *(byte *)(*(long *)(lVar25 + 0x80) + 0x11);
  unaff_R13 = &TypeInfo_HumanSpecials;
  if (*(int *)&(TypeInfo_HumanSpecials->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = (System_String_c *)
            Characters_HumanSpecials__GetSpecialNames
                      ((System_String_o *)__this_08,(uint)bVar3,(MethodInfo *)0x0);
  if (((System_String_array *)unaff_R12)->m_Items[3] == (System_String_o *)0x0) goto label_0439d282;
  if (pSVar15 == (System_String_c *)0x0) goto label_0439d282;
  method_04 = ((System_String_array *)unaff_R12)->m_Items[3][1].klass;
  __this_08 = pSVar15;
  bVar12 = System_Collections_Generic_List_object___Contains
                     ((System_Collections_Generic_List_object__o *)pSVar15,(Il2CppObject *)method_04,
                      MethodInfo_Boolean_Contains);
  if ((char)bVar12 == '\0') {
    __this_09 = (System_String_c *)((System_String_array *)unaff_R12)->m_Items[3];
    __this_08 = TypeInfo_HumanSpecials;
    if (*(int *)&(TypeInfo_HumanSpecials->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_09 == (System_String_c *)0x0) goto label_0439d282;
    method_04 = (System_String_c *)TypeInfo_HumanSpecials->static_fields[4].Empty;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_09,(Il2CppObject *)method_04,MethodInfo_Void_set_Value);
    __this_08 = __this_09;
  }
  pSStack_40 = pSVar15;
  pSVar18 = UI_CharacterHumanPanel__GetCharOptions
                      ((UI_CharacterHumanPanel_o *)__this_08,(MethodInfo *)method_04);
  pSVar13 = ((System_String_array *)unaff_R12)->m_Items[4];
  if (pSVar13 == (System_String_o *)0x0) goto label_0439d282;
  if (pSVar18 == (System_String_array *)0x0) goto label_0439d282;
  if ((int)pSVar18->max_length <= ((Settings_TypedSetting_int__Fields *)&pSVar13->fields)->_value) {
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar13,0,MethodInfo_Void_set_Value);
    pSVar13 = ((System_String_array *)unaff_R12)->m_Items[4];
  }
  pSStack_70 = (System_String_o *)(__this->fields).DoublePanelLeft;
  __this_08 = (System_String_c *)(__this->fields).LocaleCategory;
  if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar19 = pSStack_60;
  pSStack_78 = (System_String_array *)unaff_R12;
  pSStack_48 = UI_UIManager__GetLocale
                         ((System_String_o *)__this_08,(System_String_o *)pSStack_60,"Character",""
                          ,"",(MethodInfo *)0x0);
  pSStack_50 = UI_CharacterHumanPanel__GetCharIcons((UI_CharacterHumanPanel_o *)__this_08,pSVar18,method_00);
  pSVar17 = TypeInfo_UIManager->static_fields[5].Empty;
  if (pSVar17 == (System_String_o *)0x0) goto label_0439d282;
  popup = pSVar17[3].monitor;
  pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  plStack_d0 = (long *)0x439ccc6;
  UI_ElementFactory__CreateIconPickSetting
            ((UnityEngine_Transform_o *)pSStack_70,(UI_ElementStyle_o *)pSStack_68,
             (Settings_BaseSetting_o *)pSVar13,pSStack_48,pSVar18,pSStack_50,popup,"",
             (System_String_array *)0x0,180.0,40.0,pUVar16,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
  pSVar18 = (System_String_array *)(__this->fields).DoublePanelLeft;
  unaff_R12 = (System_String_array **)pSStack_78->m_Items[5];
  pSVar13 = UI_UIManager__GetLocale
                      ((__this->fields).LocaleCategory,(System_String_o *)pSVar19,"Costume","",
                       "",(MethodInfo *)0x0);
  pSVar24 = (System_String_array *)0x3;
  __this_08 = TypeInfo_string;
  options = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pSVar20 = "Costume1";
  unaff_R13 = (System_String_c **)__this;
  if (options == (System_String_array *)0x0) goto label_0439d282;
  if ((int)options->max_length != 0) {
    options->m_Items[0] = (System_String_o *)"Costume1";
    il2cpp_runtime_helper_022b4080(options->m_Items);
    pSVar21 = "Costume2";
    pSVar24 = pSVar20;
    if (1 < (uint)options->max_length) {
      options->m_Items[1] = (System_String_o *)"Costume2";
      il2cpp_runtime_helper_022b4080(options->m_Items + 1);
      pSVar19 = (System_String_array *)unaff_R12;
      pSVar24 = pSVar21;
      if (2 < (uint)options->max_length) {
        options->m_Items[2] = "Costume3";
        il2cpp_runtime_helper_022b4080(options->m_Items + 2);
        SStack_80.hasValue = 0;
        SStack_80.value = 0.0;
        System_Nullable_float____ctor((System_Nullable_float__o)&SStack_80,180.0,MethodInfo_Nullable_1_Single);
        pSVar19 = pSStack_68;
        UI_ElementFactory__CreateDropdownSetting
                  ((UnityEngine_Transform_o *)pSVar18,(UI_ElementStyle_o *)pSStack_68,
                   (Settings_BaseSetting_o *)unaff_R12,pSVar13,options,"",180.0,40.0,300.0,
                   (System_Nullable_float__o)SStack_80,(UnityEngine_Events_UnityAction_o *)0x0,
                   (MethodInfo *)0x0);
        pSStack_70 = pSStack_78->m_Items[2];
        parent_00 = (__this->fields).DoublePanelLeft;
        pSVar13 = UI_UIManager__GetLocale
                            ((__this->fields).LocaleCategory,(System_String_o *)pSStack_60,"Loadout",
                             "","",(MethodInfo *)0x0);
        pSVar18 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pSVar14,MethodInfo_String_ToArray);
        SStack_58.hasValue = 0;
        SStack_58.value = 0.0;
        System_Nullable_float____ctor((System_Nullable_float__o)&SStack_58,180.0,MethodInfo_Nullable_1_Single);
        pUVar16 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDropdownSetting
                  (parent_00,(UI_ElementStyle_o *)pSVar19,(Settings_BaseSetting_o *)pSStack_70,pSVar13,pSVar18
                   ,"",180.0,40.0,300.0,(System_Nullable_float__o)SStack_58,pUVar16,
                   (MethodInfo *)0x0);
        unaff_R12 = (System_String_array **)
                    System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_object__o *)pSStack_40,MethodInfo_String_ToArray);
        unaff_R13 = &TypeInfo_UIManager;
        pSVar13 = TypeInfo_UIManager->static_fields[5].Empty;
        if (pSVar13 != (System_String_o *)0x0) {
          bVar3 = (TypeInfo_InGameMenu->_2).naturalAligment;
          if ((bVar3 <= (pSVar13->klass->_2).naturalAligment) &&
             (__this_08 = TypeInfo_UIManager, (pSVar13->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameMenu))
          goto label_0439d287;
        }
        tooltipPopup._stringLength = 0;
        tooltipPopup._firstChar = 0;
        tooltipPopup._6_2_ = 0;
        pSVar14 = TypeInfo_UIManager;
        do {
          pSVar15 = (System_String_c *)(__this->fields).DoublePanelLeft;
          __this_08 = (System_String_c *)(__this->fields).LocaleCategory;
          pSVar13 = pSStack_78->m_Items[3];
          if (*(int *)&(pSVar14->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = UI_UIManager__GetLocale
                              ((System_String_o *)__this_08,(System_String_o *)pSStack_60,"Special",
                               "","",(MethodInfo *)0x0);
          pSVar18 = UI_CharacterHumanPanel__GetSpecialIcons
                              ((UI_CharacterHumanPanel_o *)__this_08,(System_String_array *)unaff_R12,
                               method_01);
          lVar5 = *(long *)((long)((((System_String_array *)unaff_R13)->obj).klass)->static_fields + 0x28);
          if (lVar5 != 0) {
            unaff_R13 = *(System_String_c ***)(lVar5 + 0x50);
            pSVar19 = UI_CharacterHumanPanel__GetSpecialTooltips
                                (__this,(System_String_array *)unaff_R12,method_02);
            plStack_d0 = (long *)0x439d014;
            pSVar20 = pSStack_68;
            UI_ElementFactory__CreateIconPickSetting
                      ((UnityEngine_Transform_o *)pSVar15,(UI_ElementStyle_o *)pSStack_68,
                       (Settings_BaseSetting_o *)pSVar13,pSVar17,(System_String_array *)unaff_R12,pSVar18,
                       (UI_IconPickPopup_o *)unaff_R13,"",pSVar19,180.0,40.0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(UI_TooltipPopup_o *)tooltipPopup,
                       (MethodInfo *)0x0);
            __this_08 = pSVar15;
            if (*(long *)(lStack_38 + 0x20) != 0) {
              if (*(int *)(*(long *)(lStack_38 + 0x20) + 0x14) != 2) goto label_0439d1b1;
              pSVar18 = (System_String_array *)(__this->fields).DoublePanelRight;
              pSVar13 = (System_String_o *)
                        (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                  (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
              pSVar20 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
              UI_ElementStyle___ctor((UI_ElementStyle_o *)pSVar20,0x18,100.0,20.0,pSVar13,(MethodInfo *)0x0);
              pSVar13 = pSStack_78->m_Items[6];
              if (*(int *)&(TypeInfo_UIManager->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              options = (System_String_array *)UI_UIManager__GetLocaleCommon("Team",(MethodInfo *)0x0);
              pSVar24 = (System_String_array *)0x2;
              pSVar21 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
              if (*(int *)&(TypeInfo_TeamInfo->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_08 = TypeInfo_TeamInfo;
              unaff_R12 = (System_String_array **)pSVar20;
              unaff_R13 = (System_String_c **)options;
              if (pSVar21 != (System_String_array *)0x0) goto code_r0x0439d0f4;
            }
          }
label_0439d282:
          pSVar13 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
label_0439d287:
          tooltipPopup = pSVar13[0xd].fields;
          pSVar14 = __this_08;
        } while( true );
      }
    }
  }
  goto label_0439d293;
code_r0x0439d0f4:
  pSVar19 = (System_String_array *)&TypeInfo_TeamInfo;
  if ((int)pSVar21->max_length != 0) {
    pSVar24 = (System_String_array *)TypeInfo_TeamInfo->static_fields->Empty;
    pSVar21->m_Items[0] = (System_String_o *)pSVar24;
    il2cpp_runtime_helper_022b4080(pSVar21->m_Items);
    if (1 < (uint)pSVar21->max_length) {
      pSVar21->m_Items[1] = TypeInfo_TeamInfo->static_fields[1].Empty;
      il2cpp_runtime_helper_022b4080(pSVar21->m_Items + 1);
      SStack_80.hasValue = 0;
      SStack_80.value = 0.0;
      System_Nullable_float____ctor((System_Nullable_float__o)&SStack_80,180.0,MethodInfo_Nullable_1_Single);
      UI_ElementFactory__CreateDropdownSetting
                ((UnityEngine_Transform_o *)pSVar18,(UI_ElementStyle_o *)pSVar20,
                 (Settings_BaseSetting_o *)pSVar13,(System_String_o *)options,pSVar21,"",180.0,40.0,
                 300.0,(System_Nullable_float__o)SStack_80,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
label_0439d1b1:
      UI_CharacterHumanPanel__SyncStatBars(__this,(MethodInfo *)pSVar20);
      return;
    }
  }
label_0439d293:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae306 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae306 = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar5 != 0) &&
     (pSVar7 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x28),
     pSVar7 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    unaff_R12 = &MethodInfo_String_GetSetNames;
    pSVar18 = Settings_SetSettingsContainer_object___GetSetNames(pSVar7,(MethodInfo_39E1110 *)MethodInfo_String_GetSetNames);
    pSVar19 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    pSVar24 = pSVar18;
    System_Collections_Generic_List_object____ctor_362ba10
              ((System_Collections_Generic_List_object__o *)pSVar19,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar18,MethodInfo_List_1_System_String);
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if ((lVar5 != 0) &&
       ((pSVar7 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x20),
        pSVar7 != (Settings_SetSettingsContainer_T__o *)0x0 &&
        (pSVar24 = MethodInfo_String_GetSetNames,
        pSVar20 = Settings_SetSettingsContainer_object___GetSetNames
                            (pSVar7,(MethodInfo_39E1110 *)MethodInfo_String_GetSetNames), pSVar19 != (System_String_array *)0x0
        )))) {
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)pSVar19,
                 (System_Collections_Generic_IEnumerable_T__o *)pSVar20,MethodInfo_Void_AddRange);
      System_Collections_Generic_List_object___ToArray
                ((System_Collections_Generic_List_object__o *)pSVar19,MethodInfo_String_ToArray);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_d0 = &TypeInfo_SettingsManager;
  pSStack_f0 = pSVar19;
  pSStack_e8 = (System_String_array *)unaff_R12;
  pSStack_e0 = options;
  pSStack_d8 = pSVar18;
  if (g_data_057ae307 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"CharacterPreview_Human_");
    il2cpp_runtime_helper_023445d0(&"/Human/Previews/PresetNone");
    il2cpp_runtime_helper_023445d0(&"/Human/Previews/Preset");
    il2cpp_runtime_helper_023445d0(&".png");
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae307 = '\x01';
  }
  pSVar27 = (System_Collections_Generic_List_T__o *)0x0;
  plVar23 = &TypeInfo_List_string;
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_System_String);
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar5 != 0) &&
     (pSVar7 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x28),
     pSVar7 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar18 = Settings_SetSettingsContainer_object___GetSetNames(pSVar7,(MethodInfo_39E1110 *)MethodInfo_String_GetSetNames);
    __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor_362ba10
              (__this_06,(System_Collections_Generic_IEnumerable_T__o *)pSVar18,MethodInfo_List_1_System_String);
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if ((lVar5 != 0) &&
       ((lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0 &&
        (plVar8 = *(long **)(lVar5 + 0x28), plVar8 != (long *)0x0)))) {
      lVar5 = *plVar8;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        lVar25 = 0;
        do {
          if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar25) == TypeInfo_IListSetting) {
            puVar22 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar25) + 2) * 0x10 + lVar5 + 0x138);
            goto label_0439d669;
          }
          lVar25 = lVar25 + 0x10;
        } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar25);
      }
      puVar22 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IListSetting,2);
label_0439d669:
      __this_07 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar22)(plVar8,puVar22[1]);
      if (pSVar24 != (System_String_array *)0x0) {
        if (0 < (int)pSVar24->max_length) {
          plVar23 = &TypeInfo_ResourcePaths;
          uVar26 = 0;
          if ((pSVar24->max_length & 0xffffffff) != 0) {
            do {
              plVar23 = &TypeInfo_ResourcePaths;
              if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
              pSVar13 = pSVar24->m_Items[uVar26];
              bVar12 = System_Collections_Generic_List_object___Contains
                                 (__this_06,(Il2CppObject *)pSVar13,MethodInfo_Boolean_Contains);
              if ((char)bVar12 == '\0') {
                if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
                System_Collections_Generic_List_object___GetEnumerator(&SStack_108,__this_07,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
                plVar23 = (long *)SStack_108.fields._current;
                pSVar27 = SStack_108.fields._list;
                do {
                  __this_01.fields._8_8_ = pSVar24;
                  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
                  __this_01.fields._current = (Il2CppObject *)pSVar27;
                  bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_01,(MethodInfo_321A1D0 *)&stack0xfffffffffffffec8);
                  if ((char)bVar12 == '\0') {
                    __this_03.fields._8_8_ = pSVar24;
                    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8
                    ;
                    __this_03.fields._current = (Il2CppObject *)pSVar27;
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec8);
                    goto label_0439da19;
                  }
                  if (plVar23 == (long *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0439db85;
                  }
                  if ((*(byte *)(*plVar23 + 0x130) < *(byte *)(TypeInfo_HumanCustomSet + 0x130)) ||
                     (*(long *)(*(long *)(*plVar23 + 200) + -8 + (ulong)*(byte *)(TypeInfo_HumanCustomSet + 0x130) * 8)
                      != TypeInfo_HumanCustomSet)) {
                    il2cpp_runtime_helper_022b2fd0(plVar23);
                    goto label_0439db85;
                  }
                  if (*(long *)((long)plVar23 + 0x20) == 0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0439db85;
                  }
                  bVar12 = System_String__op_Equality
                                     (*(System_String_o **)(*(long *)((long)plVar23 + 0x20) + 0x18),pSVar13,
                                      (MethodInfo *)0x0);
                } while ((char)bVar12 == '\0');
                if (*(long *)((long)plVar23 + 0x30) == 0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_0439db8f;
                }
                pSVar13 = *(System_String_o **)(*(long *)((long)plVar23 + 0x30) + 0x18);
                __this_02.fields._8_8_ = pSVar24;
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
                __this_02.fields._current = (Il2CppObject *)pSVar27;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_02,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec8);
                if (pSVar13 == (System_String_o *)0x0) {
label_0439da19:
                  plVar23 = &TypeInfo_ResourcePaths;
                  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar17 = System_String__Concat_3ae5ba0
                                      (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/PresetNone",
                                       (MethodInfo *)0x0);
                  if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) goto label_0439da54;
                  goto label_0439db85;
                }
                pSVar17 = System_String__Concat_3ae5ba0("CharacterPreview_Human_",pSVar13,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                x = ApplicationManagers_ResourceManager__GetExternalTexture(pSVar17,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar12 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar12 != '\0') {
                  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  path1 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x80);
                  pSVar13 = System_String__Concat_3af7150("Preset",pSVar13,".png",(MethodInfo *)0x0)
                  ;
                  if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar13 = System_IO_Path__Combine_3c34b20(path1,"Human",pSVar13,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  x = ApplicationManagers_ResourceManager__LoadExternalTexture
                                (pSVar13,pSVar17,1,(MethodInfo *)0x0);
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar12 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                lVar5 = MethodInfo_Void_Add;
                in_stack_fffffffffffffeb8 = pSVar17;
                if ((char)bVar12 == '\0') goto label_0439da19;
                plVar23 = &TypeInfo_ResourcePaths;
                if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
                piVar2 = &(__this_05->fields)._version;
                *piVar2 = *piVar2 + 1;
                pSVar9 = (__this_05->fields)._items;
                if (pSVar9 == (System_Object_array *)0x0) goto label_0439db85;
                uVar11 = (__this_05->fields)._size;
                if ((uint)pSVar9->max_length <= uVar11) {
                  method_03 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70);
                  goto label_0439da95;
                }
                (__this_05->fields)._size = uVar11 + 1;
                ppIVar10 = pSVar9->m_Items + (long)(int)uVar11 + -4;
                pSVar9->m_Items[(int)uVar11] = (Il2CppObject *)pSVar17;
label_0439d6d8:
                il2cpp_runtime_helper_022b4080(ppIVar10 + 4,pSVar17);
              }
              else {
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar17 = System_String__Concat_3af7150
                                    (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/Preset",
                                     pSVar13,(MethodInfo *)0x0);
                if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
label_0439da54:
                lVar5 = MethodInfo_Void_Add;
                plVar23 = &TypeInfo_ResourcePaths;
                piVar2 = &(__this_05->fields)._version;
                *piVar2 = *piVar2 + 1;
                pSVar9 = (__this_05->fields)._items;
                if (pSVar9 == (System_Object_array *)0x0) goto label_0439db85;
                uVar11 = (__this_05->fields)._size;
                if (uVar11 < (uint)pSVar9->max_length) {
                  (__this_05->fields)._size = uVar11 + 1;
                  ppIVar10 = pSVar9->m_Items + (long)(int)uVar11 + -4;
                  pSVar9->m_Items[(int)uVar11] = (Il2CppObject *)pSVar17;
                  goto label_0439d6d8;
                }
                method_03 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70);
label_0439da95:
                System_Collections_Generic_List_object___AddWithResize
                          (__this_05,(Il2CppObject *)pSVar17,method_03);
              }
              plVar23 = &TypeInfo_ResourcePaths;
              uVar26 = uVar26 + 1;
              uVar11 = (uint)pSVar24->max_length;
              if ((long)(int)uVar11 <= (long)uVar26) goto label_0439db5f;
            } while (uVar26 < uVar11);
          }
          goto label_0439db8a;
        }
label_0439db5f:
        if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___ToArray(__this_05,MethodInfo_String_ToArray);
          return;
        }
      }
    }
  }
label_0439db85:
  il2cpp_runtime_helper_022b2c90();
label_0439db8a:
  il2cpp_runtime_helper_022b2ca0();
label_0439db8f:
  __this_04.fields._8_8_ = pSVar24;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
  __this_04.fields._current = (Il2CppObject *)pSVar27;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffec8);
  _Unwind_Resume(plVar23);
}


// UI.CharacterHumanPanel$$OnLoadoutClick
// il2cpp: void UI_CharacterHumanPanel__OnLoadoutClick (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x439e430

void UI_CharacterHumanPanel__OnLoadoutClick(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_GameObject__o *__this_01;
  UnityEngine_GameObject_array *pUVar4;
  float fVar5;
  UI_CategoryPanel_o *pUVar6;
  UI_CategoryPanel_o *__this_02;
  Il2CppObject *pIVar7;
  UnityEngine_Transform_o *pUVar8;
  System_String_o *pSVar9;
  UI_CategoryPanel_o *__this_03;
  UnityEngine_GameObject_o *item;
  UI_CategoryPanel_c *__this_04;
  int extraout_EDX;
  long unaff_RBX;
  MethodInfo_2A23FA0 **__this_05;
  MethodInfo_2A24090 **unaff_R12;
  MethodInfo_2A23FA0 **unaff_R13;
  long unaff_R15;
  float fVar10;
  UnityEngine_Color_o UVar11;
  long lStack_58;
  MethodInfo_2A24090 **ppMStack_50;
  MethodInfo_2A23FA0 **ppMStack_48;
  UI_CharacterHumanPanel_o *pUStack_40;
  long lStack_38;
  
  __this_05 = (MethodInfo_2A23FA0 **)__this;
  if (g_data_057ae303 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_05 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae303 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if ((((lVar3 != 0) && (unaff_R15 = *(long *)(lVar3 + 0x28), unaff_R15 != 0)) &&
      (unaff_RBX = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70), unaff_RBX != 0)) &&
     ((*(long *)(unaff_RBX + 0x38) != 0 &&
      (__this_05 = *(MethodInfo_2A23FA0 ***)(unaff_R15 + 0x38),
      (UI_CharacterHumanPanel_o *)__this_05 != (UI_CharacterHumanPanel_o *)0x0)))) {
    method = *(MethodInfo **)(*(long *)(unaff_RBX + 0x38) + 0x18);
    unaff_R12 = &MethodInfo_Void_set_Value;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_05,(Il2CppObject *)method,MethodInfo_Void_set_Value);
    if ((*(long *)(unaff_RBX + 0x48) != 0) &&
       (__this_05 = *(MethodInfo_2A23FA0 ***)(unaff_R15 + 0x48),
       (UI_CharacterHumanPanel_o *)__this_05 != (UI_CharacterHumanPanel_o *)0x0)) {
      uVar2 = *(uint *)(*(long *)(unaff_RBX + 0x48) + 0x14);
      method = (MethodInfo *)(ulong)uVar2;
      unaff_R13 = &MethodInfo_Void_set_Value;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_05,uVar2,MethodInfo_Void_set_Value);
      if ((*(long *)(unaff_RBX + 0x40) != 0) &&
         (__this_05 = *(MethodInfo_2A23FA0 ***)(unaff_R15 + 0x40),
         (UI_CharacterHumanPanel_o *)__this_05 != (UI_CharacterHumanPanel_o *)0x0)) {
        uVar2 = *(uint *)(*(long *)(unaff_RBX + 0x40) + 0x14);
        method = (MethodInfo *)(ulong)uVar2;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_05,uVar2,MethodInfo_Void_set_Value);
        if ((*(long *)(unaff_RBX + 0x30) != 0) &&
           (__this_05 = (MethodInfo_2A23FA0 **)0x0,
           *(Settings_TypedSetting_T__o **)(unaff_R15 + 0x30) != (Settings_TypedSetting_T__o *)0x0)) {
          method = *(MethodInfo **)(*(long *)(unaff_RBX + 0x30) + 0x18);
          Settings_TypedSetting_object___set_Value
                    (*(Settings_TypedSetting_T__o **)(unaff_R15 + 0x30),(Il2CppObject *)method,MethodInfo_Void_set_Value);
          __this_00 = (__this->fields).Parent;
          __this_05 = (MethodInfo_2A23FA0 **)0x0;
          if (__this_00 != (UI_BasePanel_o *)0x0) {
            UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  lStack_58 = unaff_RBX;
  ppMStack_50 = unaff_R12;
  ppMStack_48 = unaff_R13;
  pUStack_40 = __this;
  lStack_38 = unaff_R15;
  if (g_data_057ae305 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"ProgressBar/Background");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"QuestPopup");
    il2cpp_runtime_helper_023445d0(&"ProgressBarFillColor");
    il2cpp_runtime_helper_023445d0(&"ProgressBar");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"QuestItem");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"ProgressBar/Fill Area/Fill");
    il2cpp_runtime_helper_023445d0(&"ProgressBarBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/StatBar");
    g_data_057ae305 = '\x01';
  }
  __this_03 = (UI_CategoryPanel_o *)(((UI_CharacterHumanPanel_o *)__this_05)->fields).DoublePanelRight;
  pUVar6 = (UI_CategoryPanel_o *)
           UI_ElementFactory__InstantiateAndBind
                     ((UnityEngine_Transform_o *)__this_03,"Prefabs/Misc/StatBar",(MethodInfo *)0x0);
  if (pUVar6 != (UI_CategoryPanel_o *)0x0) {
    __this_02 = (UI_CategoryPanel_o *)
                UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    __this_03 = pUVar6;
    if (__this_02 != (UI_CategoryPanel_o *)0x0) {
      __this_03 = __this_02;
      pUVar6 = (UI_CategoryPanel_o *)
               UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)__this_02,"Label",(MethodInfo *)0x0);
      if (pUVar6 != (UI_CategoryPanel_o *)0x0) {
        pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_Text_GetComponent_Text);
        __this_03 = pUVar6;
        if (pIVar7 != (Il2CppObject *)0x0) {
          (*pIVar7->klass->vtable[0x4b].methodPtr)(pIVar7,method,pIVar7->klass->vtable[0x4b].method);
          __this_03 = __this_02;
          pUVar8 = UnityEngine_Transform__Find
                             ((UnityEngine_Transform_o *)__this_02,"Label",(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pIVar7 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_03 = "DefaultPanel";
            UVar11 = UI_UIManager__GetThemeColor
                               ((System_String_o *)"DefaultPanel","DefaultLabel","TextColor",
                                (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
            if (pIVar7 != (Il2CppObject *)0x0) {
              (*pIVar7->klass->vtable[0x17].methodPtr)
                        (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
              __this_03 = __this_02;
              pUVar6 = (UI_CategoryPanel_o *)
                       UnityEngine_Transform__Find
                                 ((UnityEngine_Transform_o *)__this_02,"ProgressBar",(MethodInfo *)0x0);
              if (pUVar6 != (UI_CategoryPanel_o *)0x0) {
                pIVar7 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar6,MethodInfo_Slider_GetComponent_Slider);
                __this_03 = pUVar6;
                if (pIVar7 != (Il2CppObject *)0x0) {
                  fVar10 = ((float)extraout_EDX + -50.0) / 50.0;
                  fVar5 = 1.0;
                  if (fVar10 <= 1.0) {
                    fVar5 = fVar10;
                  }
                  (*pIVar7->klass->vtable[0x2f].methodPtr)
                            ((ulong)(-(uint)(0.0 <= fVar10) & (uint)fVar5),pIVar7,
                             pIVar7->klass->vtable[0x2f].method);
                  __this_03 = __this_02;
                  pUVar8 = UnityEngine_Transform__Find
                                     ((UnityEngine_Transform_o *)__this_02,"ProgressBar/Background",(MethodInfo *)0x0);
                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                    pIVar7 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
                    __this_03 = "QuestPopup";
                    UVar11 = UI_UIManager__GetThemeColor
                                       ((System_String_o *)"QuestPopup","QuestItem","ProgressBarBackgroundColor",
                                        (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                    if (pIVar7 != (Il2CppObject *)0x0) {
                      (*pIVar7->klass->vtable[0x17].methodPtr)
                                (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar7,
                                 pIVar7->klass->vtable[0x17].method);
                      __this_03 = __this_02;
                      pUVar8 = UnityEngine_Transform__Find
                                         ((UnityEngine_Transform_o *)__this_02,"ProgressBar/Fill Area/Fill",(MethodInfo *)0x0)
                      ;
                      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                        pIVar7 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
                        __this_03 = "QuestPopup";
                        UVar11 = UI_UIManager__GetThemeColor
                                           ((System_String_o *)"QuestPopup","QuestItem","ProgressBarFillColor",
                                            (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                        if (pIVar7 != (Il2CppObject *)0x0) {
                          (*pIVar7->klass->vtable[0x17].methodPtr)
                                    (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar7,
                                     pIVar7->klass->vtable[0x17].method);
                          __this_03 = __this_02;
                          pUVar8 = UnityEngine_Transform__Find
                                             ((UnityEngine_Transform_o *)__this_02,"Value",
                                              (MethodInfo *)0x0);
                          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                            pIVar7 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
                            __this_03 = (UI_CategoryPanel_o *)&stack0xffffffffffffffa4;
                            pSVar9 = System_Int32__ToString((int32_t)__this_03,(MethodInfo *)0x0);
                            if (pIVar7 != (Il2CppObject *)0x0) {
                              (*pIVar7->klass->vtable[0x4b].methodPtr)
                                        (pIVar7,pSVar9,pIVar7->klass->vtable[0x4b].method);
                              __this_03 = __this_02;
                              pUVar8 = UnityEngine_Transform__Find
                                                 ((UnityEngine_Transform_o *)__this_02,"Value",
                                                  (MethodInfo *)0x0);
                              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                pIVar7 = UnityEngine_Component__GetComponent_object_
                                                   ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
                                __this_03 = (UI_CategoryPanel_o *)
                                            (*(((UI_CharacterHumanPanel_o *)__this_05)->klass->vtable).
                                              _4_get_ThemePanel.methodPtr)
                                                      (__this_05,
                                                       (((UI_CharacterHumanPanel_o *)__this_05)->klass->vtable
                                                       )._4_get_ThemePanel.method);
                                UVar11 = UI_UIManager__GetThemeColor
                                                   ((System_String_o *)__this_03,"DefaultLabel","TextColor",
                                                    (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                                if (pIVar7 != (Il2CppObject *)0x0) {
                                  (*pIVar7->klass->vtable[0x17].methodPtr)
                                            (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar7);
                                  __this_01 = (((UI_CharacterHumanPanel_o *)__this_05)->fields)._statBars;
                                  item = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                                  lVar3 = MethodInfo_Void_Add;
                                  __this_03 = __this_02;
                                  if (__this_01 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                                    piVar1 = &(__this_01->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar4 = (__this_01->fields)._items;
                                    if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
                                      uVar2 = (__this_01->fields)._size;
                                      if (uVar2 < (uint)pUVar4->max_length) {
                                        (__this_01->fields)._size = uVar2 + 1;
                                        pUVar4->m_Items[(int)uVar2] = item;
                                        il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar2,item);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)__this_01,
                                                   (Il2CppObject *)item,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                                      }
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae30a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&"CharacterPopup");
    g_data_057ae30a = '\x01';
  }
  __this_04 = (UI_CategoryPanel_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_UnityEngine_GameObject);
  __this_03[1].klass = __this_04;
  il2cpp_runtime_helper_022b4080(__this_03 + 1,__this_04);
  __this_03[1].monitor = "CharacterPopup";
  il2cpp_runtime_helper_022b4080(&__this_03[1].monitor);
  UI_CategoryPanel___ctor(__this_03,(MethodInfo *)0x0);
  return;
}


// UI.CharacterHumanPanel$$SyncStatBars
// il2cpp: void UI_CharacterHumanPanel__SyncStatBars (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x439dec0

void UI_CharacterHumanPanel__SyncStatBars(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  int iVar4;
  System_Collections_Generic_List_GameObject__o *pSVar5;
  long lVar6;
  Settings_ListSetting_T__o *pSVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_String_o *subCategory;
  bool_conflict bVar8;
  int32_t iVar9;
  long lVar10;
  Characters_HumanStats_o *pCVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  long *plVar14;
  MethodInfo *pMVar15;
  Settings_BaseSetting_o *pSVar16;
  undefined1 auVar17 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar18;
  Il2CppType *pIVar19;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar20;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (g_data_057ae304 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetCount);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Acceleration");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Stats");
    il2cpp_runtime_helper_023445d0(&"Speed");
    il2cpp_runtime_helper_023445d0(&"Ammunition");
    il2cpp_runtime_helper_023445d0(&"Gas");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae304 = '\x01';
  }
  pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar19 = (Il2CppType *)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSVar5 = (__this->fields)._statBars;
  if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_0439e3a0;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar19 = (Il2CppType *)local_48._8_8_;
  obj = local_38;
  while (__this_00.fields._8_8_ = pIVar19,
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar18,
        __this_00.fields._current = (Il2CppObject *)obj,
        bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar8 != '\0') {
    pUVar20 = obj;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    obj = pUVar20;
  }
  __this_01.fields._8_8_ = pIVar19;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
  __this_01.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  do {
    pSVar5 = (__this->fields)._statBars;
    if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar3 = (pSVar5->fields)._size;
      (pSVar5->fields)._size = 0;
      if (0 < iVar3) {
        System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar3,(MethodInfo *)0x0);
      }
      pSVar16 = (Settings_BaseSetting_o *)&TypeInfo_SettingsManager;
      lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if (((((lVar10 != 0) && (lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70), lVar6 != 0)) &&
           (*(long *)(lVar6 + 0x40) != 0)) &&
          ((*(long *)(lVar6 + 0x48) != 0 && (*(long *)(lVar10 + 0x28) != 0)))) &&
         (pSVar7 = *(Settings_ListSetting_T__o **)(*(long *)(lVar10 + 0x28) + 0x28),
         pSVar7 != (Settings_ListSetting_T__o *)0x0)) {
        lVar10 = *(long *)(lVar10 + 0x20);
        iVar3 = *(int32_t *)(*(long *)(lVar6 + 0x40) + 0x14);
        iVar4 = *(int *)(*(long *)(lVar6 + 0x48) + 0x14);
        iVar9 = Settings_ListSetting_object___GetCount(pSVar7,MethodInfo_Int32_GetCount);
        if (iVar3 < iVar9) {
          if (iVar4 == 2) goto label_0439e1cf;
          if (iVar4 == 1) {
            lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
            if (lVar10 != 0) {
              lVar10 = *(long *)(lVar10 + 0x30);
joined_r0x0439e212:
              if (lVar10 != 0) {
                while (*(Settings_ListSetting_T__o **)(lVar10 + 0x28) != (Settings_ListSetting_T__o *)0x0) {
                  pSVar16 = Settings_ListSetting_object___GetItemAt
                                      (*(Settings_ListSetting_T__o **)(lVar10 + 0x28),iVar3,MethodInfo_BaseSetting_GetItemAt);
                  if (pSVar16 == (Settings_BaseSetting_o *)0x0) goto label_0439e240;
label_0439e19a:
                  bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
                  if ((bVar2 <= (pSVar16->klass->_2).naturalAligment) &&
                     ((pSVar16->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_HumanCustomSet))
                  goto label_0439e243;
                  il2cpp_runtime_helper_022b2fd0(pSVar16);
label_0439e1cf:
                  lVar10 = *(long *)((long)pSVar16->klass->static_fields + 0x60);
                  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x38), lVar10 == 0)) break;
                }
              }
            }
          }
          else {
            lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
            if (lVar10 != 0) {
              lVar10 = *(long *)(lVar10 + 0x28);
              goto joined_r0x0439e212;
            }
          }
        }
        else if ((lVar10 != 0) &&
                (pSVar7 = *(Settings_ListSetting_T__o **)(lVar10 + 0x28),
                pSVar7 != (Settings_ListSetting_T__o *)0x0)) {
          pSVar16 = Settings_ListSetting_object___GetItemAt(pSVar7,iVar3 - iVar9,MethodInfo_BaseSetting_GetItemAt);
          if (pSVar16 != (Settings_BaseSetting_o *)0x0) goto label_0439e19a;
label_0439e240:
          pSVar16 = (Settings_BaseSetting_o *)0x0;
label_0439e243:
          pCVar11 = (Characters_HumanStats_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
          Characters_HumanStats___ctor(pCVar11,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
          if ((pSVar16 != (Settings_BaseSetting_o *)0x0) &&
             (pSVar16[0xf].klass != (Settings_BaseSetting_c *)0x0)) {
            pSVar13 = (System_String_o *)((pSVar16[0xf].klass)->_1).namespaze;
            if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pCVar11 = Characters_HumanStats__Deserialize(pCVar11,pSVar13,(MethodInfo *)0x0);
            subCategory = "Stats";
            pSVar13 = "CharacterEditor";
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar15 = "";
            pSVar12 = UI_UIManager__GetLocale
                                (pSVar13,subCategory,"Acceleration",(System_String_o *)"",
                                 (System_String_o *)"",(MethodInfo *)0x0);
            if (pCVar11 != (Characters_HumanStats_o *)0x0) {
              UI_CharacterHumanPanel__CreateStatBar(__this,pSVar12,(pCVar11->fields).Acceleration,pMVar15);
              pMVar15 = "";
              pSVar12 = UI_UIManager__GetLocale
                                  (pSVar13,subCategory,"Speed",(System_String_o *)"",
                                   (System_String_o *)"",(MethodInfo *)0x0);
              UI_CharacterHumanPanel__CreateStatBar(__this,pSVar12,(pCVar11->fields).Speed,pMVar15);
              pMVar15 = "";
              pSVar12 = UI_UIManager__GetLocale
                                  (pSVar13,subCategory,"Gas",(System_String_o *)"",
                                   (System_String_o *)"",(MethodInfo *)0x0);
              UI_CharacterHumanPanel__CreateStatBar(__this,pSVar12,(pCVar11->fields).Gas,pMVar15);
              pMVar15 = "";
              pSVar13 = UI_UIManager__GetLocale
                                  (pSVar13,subCategory,"Ammunition",(System_String_o *)"",
                                   (System_String_o *)"",(MethodInfo *)0x0);
              UI_CharacterHumanPanel__CreateStatBar(__this,pSVar13,(pCVar11->fields).Ammunition,pMVar15);
              return;
            }
          }
        }
      }
    }
label_0439e3a0:
    auVar17 = il2cpp_runtime_helper_022b2c90();
    if (auVar17._8_4_ != 1) goto label_0439e3ea;
    plVar14 = (long *)__cxa_begin_catch(auVar17._0_8_);
    lVar10 = *plVar14;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar19;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
    __this_02.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  } while (lVar10 == 0);
  il2cpp_runtime_helper_022fefe0(lVar10);
label_0439e3ea:
  __this_03.fields._8_8_ = pIVar19;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
  __this_03.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar17._0_8_);
}


// UI.CharacterHumanPanel$$CreateStatBar
// il2cpp: void UI_CharacterHumanPanel__CreateStatBar (UI_CharacterHumanPanel_o* __this, System_String_o* title, int32_t value, const MethodInfo* method);
// 0x439e570

void UI_CharacterHumanPanel__CreateStatBar
               (UI_CharacterHumanPanel_o *__this,System_String_o *title,int32_t value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  float fVar4;
  long lVar5;
  UI_CategoryPanel_o *pUVar6;
  UI_CategoryPanel_o *__this_01;
  Il2CppObject *pIVar7;
  UnityEngine_Transform_o *pUVar8;
  System_String_o *pSVar9;
  UI_CategoryPanel_o *__this_02;
  UnityEngine_GameObject_o *item;
  UI_CategoryPanel_c *__this_03;
  float fVar10;
  UnityEngine_Color_o UVar11;
  
  if (g_data_057ae305 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"ProgressBar/Background");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"QuestPopup");
    il2cpp_runtime_helper_023445d0(&"ProgressBarFillColor");
    il2cpp_runtime_helper_023445d0(&"ProgressBar");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"QuestItem");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"ProgressBar/Fill Area/Fill");
    il2cpp_runtime_helper_023445d0(&"ProgressBarBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/StatBar");
    g_data_057ae305 = '\x01';
  }
  __this_02 = (UI_CategoryPanel_o *)(__this->fields).DoublePanelRight;
  pUVar6 = (UI_CategoryPanel_o *)
           UI_ElementFactory__InstantiateAndBind
                     ((UnityEngine_Transform_o *)__this_02,"Prefabs/Misc/StatBar",(MethodInfo *)0x0);
  if (pUVar6 != (UI_CategoryPanel_o *)0x0) {
    __this_01 = (UI_CategoryPanel_o *)
                UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
    __this_02 = pUVar6;
    if (__this_01 != (UI_CategoryPanel_o *)0x0) {
      __this_02 = __this_01;
      pUVar6 = (UI_CategoryPanel_o *)
               UnityEngine_Transform__Find
                         ((UnityEngine_Transform_o *)__this_01,"Label",(MethodInfo *)0x0);
      if (pUVar6 != (UI_CategoryPanel_o *)0x0) {
        pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_Text_GetComponent_Text);
        __this_02 = pUVar6;
        if (pIVar7 != (Il2CppObject *)0x0) {
          (*pIVar7->klass->vtable[0x4b].methodPtr)(pIVar7,title,pIVar7->klass->vtable[0x4b].method);
          __this_02 = __this_01;
          pUVar8 = UnityEngine_Transform__Find
                             ((UnityEngine_Transform_o *)__this_01,"Label",(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pIVar7 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_02 = "DefaultPanel";
            UVar11 = UI_UIManager__GetThemeColor
                               ((System_String_o *)"DefaultPanel","DefaultLabel","TextColor",
                                (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
            if (pIVar7 != (Il2CppObject *)0x0) {
              (*pIVar7->klass->vtable[0x17].methodPtr)
                        (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar7,pIVar7->klass->vtable[0x17].method);
              __this_02 = __this_01;
              pUVar6 = (UI_CategoryPanel_o *)
                       UnityEngine_Transform__Find
                                 ((UnityEngine_Transform_o *)__this_01,"ProgressBar",(MethodInfo *)0x0);
              if (pUVar6 != (UI_CategoryPanel_o *)0x0) {
                pIVar7 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar6,MethodInfo_Slider_GetComponent_Slider);
                __this_02 = pUVar6;
                if (pIVar7 != (Il2CppObject *)0x0) {
                  fVar10 = ((float)value + -50.0) / 50.0;
                  fVar4 = 1.0;
                  if (fVar10 <= 1.0) {
                    fVar4 = fVar10;
                  }
                  (*pIVar7->klass->vtable[0x2f].methodPtr)
                            ((ulong)(-(uint)(0.0 <= fVar10) & (uint)fVar4),pIVar7,
                             pIVar7->klass->vtable[0x2f].method);
                  __this_02 = __this_01;
                  pUVar8 = UnityEngine_Transform__Find
                                     ((UnityEngine_Transform_o *)__this_01,"ProgressBar/Background",(MethodInfo *)0x0);
                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                    pIVar7 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
                    __this_02 = "QuestPopup";
                    UVar11 = UI_UIManager__GetThemeColor
                                       ((System_String_o *)"QuestPopup","QuestItem","ProgressBarBackgroundColor",
                                        (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                    if (pIVar7 != (Il2CppObject *)0x0) {
                      (*pIVar7->klass->vtable[0x17].methodPtr)
                                (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar7,
                                 pIVar7->klass->vtable[0x17].method);
                      __this_02 = __this_01;
                      pUVar8 = UnityEngine_Transform__Find
                                         ((UnityEngine_Transform_o *)__this_01,"ProgressBar/Fill Area/Fill",(MethodInfo *)0x0)
                      ;
                      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                        pIVar7 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
                        __this_02 = "QuestPopup";
                        UVar11 = UI_UIManager__GetThemeColor
                                           ((System_String_o *)"QuestPopup","QuestItem","ProgressBarFillColor",
                                            (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                        if (pIVar7 != (Il2CppObject *)0x0) {
                          (*pIVar7->klass->vtable[0x17].methodPtr)
                                    (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar7,
                                     pIVar7->klass->vtable[0x17].method);
                          __this_02 = __this_01;
                          pUVar8 = UnityEngine_Transform__Find
                                             ((UnityEngine_Transform_o *)__this_01,"Value",
                                              (MethodInfo *)0x0);
                          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                            pIVar7 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
                            __this_02 = (UI_CategoryPanel_o *)&stack0xffffffffffffffcc;
                            pSVar9 = System_Int32__ToString((int32_t)__this_02,(MethodInfo *)0x0);
                            if (pIVar7 != (Il2CppObject *)0x0) {
                              (*pIVar7->klass->vtable[0x4b].methodPtr)
                                        (pIVar7,pSVar9,pIVar7->klass->vtable[0x4b].method);
                              __this_02 = __this_01;
                              pUVar8 = UnityEngine_Transform__Find
                                                 ((UnityEngine_Transform_o *)__this_01,"Value",
                                                  (MethodInfo *)0x0);
                              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                pIVar7 = UnityEngine_Component__GetComponent_object_
                                                   ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
                                __this_02 = (UI_CategoryPanel_o *)
                                            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method
                                                      );
                                UVar11 = UI_UIManager__GetThemeColor
                                                   ((System_String_o *)__this_02,"DefaultLabel","TextColor",
                                                    (System_String_o *)"DefaultPanel",(MethodInfo *)0x0);
                                if (pIVar7 != (Il2CppObject *)0x0) {
                                  (*pIVar7->klass->vtable[0x17].methodPtr)
                                            (UVar11.fields._0_8_,UVar11.fields._8_8_,pIVar7);
                                  __this_00 = (__this->fields)._statBars;
                                  item = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                                  lVar5 = MethodInfo_Void_Add;
                                  __this_02 = __this_01;
                                  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                                    piVar1 = &(__this_00->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar3 = (__this_00->fields)._items;
                                    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
                                      uVar2 = (__this_00->fields)._size;
                                      if (uVar2 < (uint)pUVar3->max_length) {
                                        (__this_00->fields)._size = uVar2 + 1;
                                        pUVar3->m_Items[(int)uVar2] = item;
                                        il2cpp_runtime_helper_022b4080(pUVar3->m_Items + (int)uVar2,item);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)__this_00,
                                                   (Il2CppObject *)item,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                      }
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae30a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&"CharacterPopup");
    g_data_057ae30a = '\x01';
  }
  __this_03 = (UI_CategoryPanel_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_GameObject);
  __this_02[1].klass = __this_03;
  il2cpp_runtime_helper_022b4080(__this_02 + 1,__this_03);
  __this_02[1].monitor = "CharacterPopup";
  il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
  UI_CategoryPanel___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.CharacterHumanPanel$$GetCharOptions
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetCharOptions (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x439d2a0

System_String_array *
UI_CharacterHumanPanel__GetCharOptions(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *pSVar4;
  long *plVar5;
  Settings_SetSettingsContainer_T__c *b;
  System_String_o *path1;
  System_Object_array *pSVar6;
  Il2CppObject **ppIVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar8;
  System_String_array *pSVar9;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_List_object__o *__this_05;
  undefined8 *puVar10;
  System_Collections_Generic_List_object__o *__this_06;
  System_String_o *key;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar11;
  MethodInfo_362C220 *method_00;
  System_Collections_Generic_List_object__o *unaff_RBX;
  _union_249689 _Var12;
  long lVar13;
  undefined8 *unaff_R12;
  ulong uVar14;
  System_String_o *in_stack_ffffffffffffff50;
  System_Collections_Generic_List_T__o *pSVar15;
  System_Collections_Generic_List_Enumerator_T__o SStack_70;
  System_Collections_Generic_List_object__o *pSStack_58;
  undefined8 *puStack_50;
  
  if (g_data_057ae306 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae306 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar3 != 0) &&
     (pSVar4 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x28),
     pSVar4 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    unaff_R12 = &MethodInfo_String_GetSetNames;
    method = (MethodInfo *)
             Settings_SetSettingsContainer_object___GetSetNames(pSVar4,(MethodInfo_39E1110 *)MethodInfo_String_GetSetNames);
    unaff_RBX = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor_362ba10
              (unaff_RBX,(System_Collections_Generic_IEnumerable_T__o *)method,MethodInfo_List_1_System_String);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if ((lVar3 != 0) &&
       ((pSVar4 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
        pSVar4 != (Settings_SetSettingsContainer_T__o *)0x0 &&
        (method = (MethodInfo *)MethodInfo_String_GetSetNames,
        pSVar9 = Settings_SetSettingsContainer_object___GetSetNames(pSVar4,(MethodInfo_39E1110 *)MethodInfo_String_GetSetNames)
        , unaff_RBX != (System_Collections_Generic_List_object__o *)0x0)))) {
      System_Collections_Generic_List_object___AddRange
                (unaff_RBX,(System_Collections_Generic_IEnumerable_T__o *)pSVar9,MethodInfo_Void_AddRange);
      pSVar9 = (System_String_array *)System_Collections_Generic_List_object___ToArray(unaff_RBX,MethodInfo_String_ToArray)
      ;
      return pSVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_58 = unaff_RBX;
  puStack_50 = unaff_R12;
  if (g_data_057ae307 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"CharacterPreview_Human_");
    il2cpp_runtime_helper_023445d0(&"/Human/Previews/PresetNone");
    il2cpp_runtime_helper_023445d0(&"/Human/Previews/Preset");
    il2cpp_runtime_helper_023445d0(&".png");
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae307 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_T__o *)0x0;
  _Var12.genericMethod = &TypeInfo_List_string;
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_System_String);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar3 != 0) &&
     (pSVar4 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x28),
     pSVar4 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar9 = Settings_SetSettingsContainer_object___GetSetNames(pSVar4,(MethodInfo_39E1110 *)MethodInfo_String_GetSetNames);
    __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor_362ba10
              (__this_05,(System_Collections_Generic_IEnumerable_T__o *)pSVar9,MethodInfo_List_1_System_String);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if ((lVar3 != 0) &&
       ((lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0 &&
        (plVar5 = *(long **)(lVar3 + 0x28), plVar5 != (long *)0x0)))) {
      lVar3 = *plVar5;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar13) == TypeInfo_IListSetting) {
            puVar10 = (undefined8 *)
                      ((long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar13) + 2) * 0x10 + lVar3 + 0x138);
            goto label_0439d669;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar13);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar5,TypeInfo_IListSetting,2);
label_0439d669:
      __this_06 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar10)(plVar5,puVar10[1]);
      if ((System_String_array *)method != (System_String_array *)0x0) {
        if (0 < (int)(char *)((System_String_array *)method)->max_length) {
          _Var12.genericMethod = &TypeInfo_ResourcePaths;
          uVar14 = 0;
          if (((ulong)((System_String_array *)method)->max_length & 0xffffffff) != 0) {
            do {
              _Var12.genericMethod = &TypeInfo_ResourcePaths;
              if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
              b = (Settings_SetSettingsContainer_T__c *)((System_String_array *)method)->m_Items[uVar14];
              bVar8 = System_Collections_Generic_List_object___Contains
                                (__this_05,(Il2CppObject *)b,MethodInfo_Boolean_Contains);
              if ((char)bVar8 == '\0') {
                if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
                System_Collections_Generic_List_object___GetEnumerator(&SStack_70,__this_06,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
                _Var12 = (_union_249689)SStack_70.fields._current;
                pSVar15 = SStack_70.fields._list;
                do {
                  __this_00.fields._8_8_ = method;
                  __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
                  __this_00.fields._current = (Il2CppObject *)pSVar15;
                  bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
                  if ((char)bVar8 == '\0') {
                    __this_02.fields._8_8_ = method;
                    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50
                    ;
                    __this_02.fields._current = (Il2CppObject *)pSVar15;
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
                    goto label_0439da19;
                  }
                  if (_Var12.genericMethod == (long *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0439db85;
                  }
                  if ((*(byte *)(*(long *)_Var12.genericMethod + 0x130) < *(byte *)(TypeInfo_HumanCustomSet + 0x130)) ||
                     (*(long *)(*(long *)(*(long *)_Var12.genericMethod + 200) + -8 +
                               (ulong)*(byte *)(TypeInfo_HumanCustomSet + 0x130) * 8) != TypeInfo_HumanCustomSet)) {
                    il2cpp_runtime_helper_022b2fd0(_Var12.genericMethod);
                    goto label_0439db85;
                  }
                  if (*(long *)((long)_Var12.genericMethod + 0x20) == 0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0439db85;
                  }
                  bVar8 = System_String__op_Equality
                                    (*(System_String_o **)
                                      (*(long *)((long)_Var12.genericMethod + 0x20) + 0x18),
                                     (System_String_o *)b,(MethodInfo *)0x0);
                } while ((char)bVar8 == '\0');
                if (*(long *)((long)_Var12.genericMethod + 0x30) == 0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_0439db8f;
                }
                pSVar11 = *(System_String_o **)(*(long *)((long)_Var12.genericMethod + 0x30) + 0x18);
                __this_01.fields._8_8_ = method;
                __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
                __this_01.fields._current = (Il2CppObject *)pSVar15;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
                if (pSVar11 == (System_String_o *)0x0) {
label_0439da19:
                  _Var12.genericMethod = &TypeInfo_ResourcePaths;
                  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  key = System_String__Concat_3ae5ba0
                                  (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/PresetNone",
                                   (MethodInfo *)0x0);
                  if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) goto label_0439da54;
                  goto label_0439db85;
                }
                key = System_String__Concat_3ae5ba0("CharacterPreview_Human_",pSVar11,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                x = ApplicationManagers_ResourceManager__GetExternalTexture(key,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar8 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar8 != '\0') {
                  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  path1 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x80);
                  pSVar11 = System_String__Concat_3af7150("Preset",pSVar11,".png",(MethodInfo *)0x0)
                  ;
                  if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar11 = System_IO_Path__Combine_3c34b20(path1,"Human",pSVar11,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  x = ApplicationManagers_ResourceManager__LoadExternalTexture
                                (pSVar11,key,1,(MethodInfo *)0x0);
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar8 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                lVar3 = MethodInfo_Void_Add;
                in_stack_ffffffffffffff50 = key;
                if ((char)bVar8 == '\0') goto label_0439da19;
                _Var12.genericMethod = &TypeInfo_ResourcePaths;
                if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
                piVar1 = &(__this_04->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar6 = (__this_04->fields)._items;
                if (pSVar6 == (System_Object_array *)0x0) goto label_0439db85;
                uVar2 = (__this_04->fields)._size;
                if (uVar2 < (uint)pSVar6->max_length) {
                  (__this_04->fields)._size = uVar2 + 1;
                  ppIVar7 = pSVar6->m_Items + (long)(int)uVar2 + -4;
                  pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)key;
                  goto label_0439d6d8;
                }
                method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
label_0439da95:
                System_Collections_Generic_List_object___AddWithResize
                          (__this_04,(Il2CppObject *)key,method_00);
              }
              else {
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                key = System_String__Concat_3af7150
                                (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/Preset",
                                 (System_String_o *)b,(MethodInfo *)0x0);
                if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
label_0439da54:
                lVar3 = MethodInfo_Void_Add;
                _Var12.genericMethod = &TypeInfo_ResourcePaths;
                piVar1 = &(__this_04->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar6 = (__this_04->fields)._items;
                if (pSVar6 == (System_Object_array *)0x0) goto label_0439db85;
                uVar2 = (__this_04->fields)._size;
                if ((uint)pSVar6->max_length <= uVar2) {
                  method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
                  goto label_0439da95;
                }
                (__this_04->fields)._size = uVar2 + 1;
                ppIVar7 = pSVar6->m_Items + (long)(int)uVar2 + -4;
                pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)key;
label_0439d6d8:
                il2cpp_runtime_helper_022b4080(ppIVar7 + 4,key);
              }
              _Var12.genericMethod = &TypeInfo_ResourcePaths;
              uVar14 = uVar14 + 1;
              if ((long)(int)*(uint *)&((System_String_array *)method)->max_length <= (long)uVar14)
              goto label_0439db5f;
            } while (uVar14 < *(uint *)&((System_String_array *)method)->max_length);
          }
          goto label_0439db8a;
        }
label_0439db5f:
        if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
          pSVar9 = (System_String_array *)
                   System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_String_ToArray);
          return pSVar9;
        }
      }
    }
  }
label_0439db85:
  il2cpp_runtime_helper_022b2c90();
label_0439db8a:
  il2cpp_runtime_helper_022b2ca0();
label_0439db8f:
  __this_03.fields._8_8_ = method;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
  __this_03.fields._current = (Il2CppObject *)pSVar15;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  _Unwind_Resume(_Var12.genericMethod);
}


// UI.CharacterHumanPanel$$GetCharIcons
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetCharIcons (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x439d3d0

System_String_array *
UI_CharacterHumanPanel__GetCharIcons
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  long *plVar4;
  System_String_o *path1;
  System_Object_array *pSVar5;
  Il2CppObject **ppIVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *__this_05;
  System_String_array *pSVar8;
  System_Collections_Generic_List_object__o *__this_06;
  undefined8 *puVar9;
  System_Collections_Generic_List_object__o *__this_07;
  System_String_o *key;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar10;
  MethodInfo_362C220 *method_00;
  _union_249689 _Var11;
  long lVar12;
  ulong uVar13;
  System_String_o *in_stack_ffffffffffffff78;
  System_Collections_Generic_List_T__o *pSVar14;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (g_data_057ae307 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"CharacterPreview_Human_");
    il2cpp_runtime_helper_023445d0(&"/Human/Previews/PresetNone");
    il2cpp_runtime_helper_023445d0(&"/Human/Previews/Preset");
    il2cpp_runtime_helper_023445d0(&".png");
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae307 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
  _Var11.genericMethod = &TypeInfo_List_string;
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_System_String);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar3 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x28),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar8 = Settings_SetSettingsContainer_object___GetSetNames(__this_00,MethodInfo_String_GetSetNames);
    __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor_362ba10
              (__this_06,(System_Collections_Generic_IEnumerable_T__o *)pSVar8,MethodInfo_List_1_System_String);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if ((lVar3 != 0) &&
       ((lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0 &&
        (plVar4 = *(long **)(lVar3 + 0x28), plVar4 != (long *)0x0)))) {
      lVar3 = *plVar4;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar12) == TypeInfo_IListSetting) {
            puVar9 = (undefined8 *)
                     ((long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar12) + 2) * 0x10 + lVar3 + 0x138);
            goto label_0439d669;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar12);
      }
      puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IListSetting,2);
label_0439d669:
      __this_07 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar9)(plVar4,puVar9[1]);
      if (options != (System_String_array *)0x0) {
        if (0 < (int)options->max_length) {
          _Var11.genericMethod = &TypeInfo_ResourcePaths;
          uVar13 = 0;
          if ((options->max_length & 0xffffffff) != 0) {
            do {
              _Var11.genericMethod = &TypeInfo_ResourcePaths;
              if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
              pSVar10 = options->m_Items[uVar13];
              bVar7 = System_Collections_Generic_List_object___Contains
                                (__this_06,(Il2CppObject *)pSVar10,MethodInfo_Boolean_Contains);
              if ((char)bVar7 == '\0') {
                if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
                System_Collections_Generic_List_object___GetEnumerator(&local_48,__this_07,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
                _Var11 = (_union_249689)local_48.fields._current;
                pSVar14 = local_48.fields._list;
                do {
                  __this_01.fields._8_8_ = options;
                  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
                  __this_01.fields._current = (Il2CppObject *)pSVar14;
                  bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
                  if ((char)bVar7 == '\0') {
                    __this_03.fields._8_8_ = options;
                    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78
                    ;
                    __this_03.fields._current = (Il2CppObject *)pSVar14;
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
                    goto label_0439da19;
                  }
                  if (_Var11.genericMethod == (long *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0439db85;
                  }
                  if ((*(byte *)(*(long *)_Var11.genericMethod + 0x130) < *(byte *)(TypeInfo_HumanCustomSet + 0x130)) ||
                     (*(long *)(*(long *)(*(long *)_Var11.genericMethod + 200) + -8 +
                               (ulong)*(byte *)(TypeInfo_HumanCustomSet + 0x130) * 8) != TypeInfo_HumanCustomSet)) {
                    il2cpp_runtime_helper_022b2fd0(_Var11.genericMethod);
                    goto label_0439db85;
                  }
                  if (*(long *)((long)_Var11.genericMethod + 0x20) == 0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0439db85;
                  }
                  bVar7 = System_String__op_Equality
                                    (*(System_String_o **)
                                      (*(long *)((long)_Var11.genericMethod + 0x20) + 0x18),pSVar10,
                                     (MethodInfo *)0x0);
                } while ((char)bVar7 == '\0');
                if (*(long *)((long)_Var11.genericMethod + 0x30) == 0) {
                  il2cpp_runtime_helper_022b2c90();
                  goto label_0439db8f;
                }
                pSVar10 = *(System_String_o **)(*(long *)((long)_Var11.genericMethod + 0x30) + 0x18);
                __this_02.fields._8_8_ = options;
                __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
                __this_02.fields._current = (Il2CppObject *)pSVar14;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
                if (pSVar10 == (System_String_o *)0x0) {
label_0439da19:
                  _Var11.genericMethod = &TypeInfo_ResourcePaths;
                  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  key = System_String__Concat_3ae5ba0
                                  (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/PresetNone",
                                   (MethodInfo *)0x0);
                  if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) goto label_0439da54;
                  goto label_0439db85;
                }
                key = System_String__Concat_3ae5ba0("CharacterPreview_Human_",pSVar10,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                x = ApplicationManagers_ResourceManager__GetExternalTexture(key,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar7 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  path1 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x80);
                  pSVar10 = System_String__Concat_3af7150("Preset",pSVar10,".png",(MethodInfo *)0x0)
                  ;
                  if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar10 = System_IO_Path__Combine_3c34b20(path1,"Human",pSVar10,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  x = ApplicationManagers_ResourceManager__LoadExternalTexture
                                (pSVar10,key,1,(MethodInfo *)0x0);
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar7 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                lVar3 = MethodInfo_Void_Add;
                in_stack_ffffffffffffff78 = key;
                if ((char)bVar7 == '\0') goto label_0439da19;
                _Var11.genericMethod = &TypeInfo_ResourcePaths;
                if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
                piVar1 = &(__this_05->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (__this_05->fields)._items;
                if (pSVar5 == (System_Object_array *)0x0) goto label_0439db85;
                uVar2 = (__this_05->fields)._size;
                if (uVar2 < (uint)pSVar5->max_length) {
                  (__this_05->fields)._size = uVar2 + 1;
                  ppIVar6 = pSVar5->m_Items + (long)(int)uVar2 + -4;
                  pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)key;
                  goto label_0439d6d8;
                }
                method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
label_0439da95:
                System_Collections_Generic_List_object___AddWithResize
                          (__this_05,(Il2CppObject *)key,method_00);
              }
              else {
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                key = System_String__Concat_3af7150
                                (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/Preset",
                                 pSVar10,(MethodInfo *)0x0);
                if (__this_05 == (System_Collections_Generic_List_object__o *)0x0) goto label_0439db85;
label_0439da54:
                lVar3 = MethodInfo_Void_Add;
                _Var11.genericMethod = &TypeInfo_ResourcePaths;
                piVar1 = &(__this_05->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (__this_05->fields)._items;
                if (pSVar5 == (System_Object_array *)0x0) goto label_0439db85;
                uVar2 = (__this_05->fields)._size;
                if ((uint)pSVar5->max_length <= uVar2) {
                  method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
                  goto label_0439da95;
                }
                (__this_05->fields)._size = uVar2 + 1;
                ppIVar6 = pSVar5->m_Items + (long)(int)uVar2 + -4;
                pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)key;
label_0439d6d8:
                il2cpp_runtime_helper_022b4080(ppIVar6 + 4,key);
              }
              _Var11.genericMethod = &TypeInfo_ResourcePaths;
              uVar13 = uVar13 + 1;
              uVar2 = (uint)options->max_length;
              if ((long)(int)uVar2 <= (long)uVar13) goto label_0439db5f;
            } while (uVar13 < uVar2);
          }
          goto label_0439db8a;
        }
label_0439db5f:
        if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
          pSVar8 = (System_String_array *)
                   System_Collections_Generic_List_object___ToArray(__this_05,MethodInfo_String_ToArray);
          return pSVar8;
        }
      }
    }
  }
label_0439db85:
  il2cpp_runtime_helper_022b2c90();
label_0439db8a:
  il2cpp_runtime_helper_022b2ca0();
label_0439db8f:
  __this_04.fields._8_8_ = options;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff78;
  __this_04.fields._current = (Il2CppObject *)pSVar14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
  _Unwind_Resume(_Var11.genericMethod);
}


// UI.CharacterHumanPanel$$GetSpecialIcons
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetSpecialIcons (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x439dbd0

System_String_array *
UI_CharacterHumanPanel__GetSpecialIcons
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_String_o *pSVar4;
  long lVar5;
  int iVar6;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo_362B8B0 *item;
  System_String_o *pSVar7;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *pSVar8;
  ulong uVar9;
  MethodInfo_362B8B0 *source_00;
  
  if (g_data_057ae308 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSpecials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"/Icons/Specials/");
    g_data_057ae308 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  item = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  source_00 = item;
  if (options != (System_String_array *)0x0) {
    iVar6 = (int)options->max_length;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      if (iVar6 < 1) {
label_0439dd81:
        pSVar8 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray(__this_00,MethodInfo_String_ToArray);
        return pSVar8;
      }
      uVar9 = 0;
      if ((options->max_length & 0xffffffff) != 0) {
        do {
          pSVar7 = options->m_Items[uVar9];
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar4 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = Characters_HumanSpecials__GetSpecialIcon(pSVar7,(MethodInfo *)0x0);
          source_00 = "/Icons/Specials/";
          item = (MethodInfo_362B8B0 *)
                 System_String__Concat_3af7150
                           (pSVar4,(System_String_o *)"/Icons/Specials/",pSVar7,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto label_0439de0c;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = uVar9 + 1;
          uVar2 = (uint)options->max_length;
          if ((long)(int)uVar2 <= (long)uVar9) goto label_0439dd81;
        } while (uVar9 < uVar2);
      }
      iVar6 = il2cpp_runtime_helper_022b2ca0();
      source_00 = item;
    }
    if (0 < iVar6) {
      pSVar7 = options->m_Items[0];
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Characters_HumanSpecials__GetSpecialIcon(pSVar7,(MethodInfo *)0x0);
      source_00 = "/Icons/Specials/";
      System_String__Concat_3af7150(pSVar4,(System_String_o *)"/Icons/Specials/",pSVar7,(MethodInfo *)0x0);
    }
  }
label_0439de0c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae309 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSpecialTooltips_b__9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    g_data_057ae309 = '\x01';
  }
  selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
  System_Func_object__object____ctor();
  source = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
  pSVar8 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
  return pSVar8;
}


// UI.CharacterHumanPanel$$GetSpecialTooltips
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetSpecialTooltips (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x439de20

System_String_array *
UI_CharacterHumanPanel__GetSpecialTooltips
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *pSVar1;
  
  if (g_data_057ae309 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSpecialTooltips_b__9_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_String_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_string);
    g_data_057ae309 = '\x01';
  }
  selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_string);
  System_Func_object__object____ctor();
  source = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)options,selector,MethodInfo_IEnumerable_1_System_String_Select_String_String);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_String_ToArray_String);
  return pSVar1;
}


// UI.CharacterHumanPanel$$.ctor
// il2cpp: void UI_CharacterHumanPanel___ctor (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x439ea40

void UI_CharacterHumanPanel___ctor(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (g_data_057ae30a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&"CharacterPopup");
    g_data_057ae30a = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._statBars = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._statBars,__this_00);
  (__this->fields).LocaleCategory = "CharacterPopup";
  il2cpp_runtime_helper_022b4080(&(__this->fields).LocaleCategory);
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterHumanPanel$$<Setup>b__2_0
// il2cpp: void UI_CharacterHumanPanel___Setup_b__2_0 (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x439eae0

void UI_CharacterHumanPanel___Setup_b__2_0(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  UI_CharacterHumanPanel__SyncStatBars(__this,method);
  return;
}


// UI.CharacterHumanPanel$$<Setup>b__2_1
// il2cpp: void UI_CharacterHumanPanel___Setup_b__2_1 (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x439eaf0

void UI_CharacterHumanPanel___Setup_b__2_1(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  UI_CharacterHumanPanel__OnLoadoutClick(__this,method);
  return;
}


// UI.CharacterHumanPanel$$<GetSpecialTooltips>b__9_0
// il2cpp: System_String_o* UI_CharacterHumanPanel___GetSpecialTooltips_b__9_0 (UI_CharacterHumanPanel_o* __this, System_String_o* option, const MethodInfo* method);
// 0x439eb00

System_String_o *
UI_CharacterHumanPanel___GetSpecialTooltips_b__9_0
          (UI_CharacterHumanPanel_o *__this,System_String_o *option,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae30b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SpecialTooltip");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae30b = '\x01';
  }
  pSVar1 = (__this->fields).LocaleCategory;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale(pSVar1,"SpecialTooltip",option,"","",(MethodInfo *)0x0);
  return pSVar1;
}


