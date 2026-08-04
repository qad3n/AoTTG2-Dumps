// Type: UI.ScoreboardProfilePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ScoreboardProfilePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardProfilePopup.cs
// --------------------------------

// UI.ScoreboardProfilePopup.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_ScoreboardProfilePopup___c__DisplayClass18_0___ctor (UI_ScoreboardProfilePopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x43e7120

void UI_ScoreboardProfilePopup___c__DisplayClass18_0___ctor
               (UI_ScoreboardProfilePopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardProfilePopup.<>c__DisplayClass18_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_ScoreboardProfilePopup___c__DisplayClass18_0___SetupBottomButtons_b__0 (UI_ScoreboardProfilePopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x43e7130

void UI_ScoreboardProfilePopup___c__DisplayClass18_0___SetupBottomButtons_b__0
               (UI_ScoreboardProfilePopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardProfilePopup_o *pUVar1;
  System_String_o *a;
  bool_conflict bVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_ScoreboardProfilePopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  a = (__this->fields).buttonName;
  if (g_data_057ae4d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae4d7 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.ScoreboardProfilePopup$$get_Title
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__get_Title (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x43e5960

System_String_o * UI_ScoreboardProfilePopup__get_Title(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae4d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Profile");
    g_data_057ae4d0 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Profile",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ScoreboardProfilePopup$$get_Width
// il2cpp: float UI_ScoreboardProfilePopup__get_Width (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x43e59c0

float UI_ScoreboardProfilePopup__get_Width(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  return 520.0;
}


// UI.ScoreboardProfilePopup$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardProfilePopup__get_VerticalPadding (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x43e59d0

int32_t UI_ScoreboardProfilePopup__get_VerticalPadding(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  return 5;
}


// UI.ScoreboardProfilePopup$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardProfilePopup__get_VerticalSpacing (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x43e59e0

float UI_ScoreboardProfilePopup__get_VerticalSpacing(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  return 25.0;
}


// UI.ScoreboardProfilePopup$$get_Height
// il2cpp: float UI_ScoreboardProfilePopup__get_Height (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x43e59f0

float UI_ScoreboardProfilePopup__get_Height(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  return 640.0;
}


// UI.ScoreboardProfilePopup$$Setup
// il2cpp: void UI_ScoreboardProfilePopup__Setup (UI_ScoreboardProfilePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43e5a00

void UI_ScoreboardProfilePopup__Setup
               (UI_ScoreboardProfilePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_ProfileSettings_o **ppSVar2;
  byte bVar3;
  int length;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  UnityEngine_GameObject_array *pUVar5;
  Settings_ProfileSettings_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_NameSetting_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  Settings_ColorSetting_o *pSVar10;
  Utility_Color255_o *pUVar11;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined8 obj;
  uint uVar12;
  bool_conflict bVar13;
  UI_ScoreboardProfilePopup_o *__this_05;
  long lVar14;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *pIVar15;
  System_String_o *pSVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  System_String_o *pSVar19;
  System_String_o *pSVar20;
  long *plVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o **tierLabel;
  System_String_o *unaff_RBP;
  UI_ScoreboardProfilePopup_o *__this_06;
  long unaff_R12;
  ulong unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 uVar22;
  undefined4 uVar23;
  UnityEngine_Color_o UVar24;
  UnityEngine_Color_o UVar25;
  UnityEngine_Color_o colorA;
  UnityEngine_Color_o colorA_00;
  undefined1 auVar26 [12];
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorC;
  UnityEngine_Color_o colorC_00;
  System_String_o *in_stack_fffffffffffffed0;
  System_String_o *pSVar27;
  MethodInfo *in_stack_fffffffffffffed8;
  UI_ElementStyle_o *in_stack_fffffffffffffee0;
  UI_ScoreboardProfilePopup_o *local_118;
  undefined1 local_100 [48];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  UnityEngine_Object_o *local_80;
  UI_ScoreboardProfilePopup_o *pUStack_78;
  long lStack_70;
  UI_ScoreboardProfilePopup_o *pUStack_68;
  UnityEngine_Events_UnityAction_o *pUStack_60;
  ulong uStack_58;
  System_String_o *pSStack_50;
  UI_ScoreboardProfilePopup_o *local_40;
  UI_ElementStyle_o *local_38;
  
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  if (g_data_057ae4d6 == '\0') {
    pSStack_50 = (System_String_o *)0x43e5a46;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pSStack_50 = (System_String_o *)0x43e5a52;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_50 = (System_String_o *)0x43e5a5e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    pSStack_50 = (System_String_o *)0x43e5a6a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    pSStack_50 = (System_String_o *)0x43e5a76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_50 = (System_String_o *)0x43e5a82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStack_50 = (System_String_o *)0x43e5a8e;
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae4d6 = '\x01';
  }
  pSStack_50 = (System_String_o *)0x43e5aa9;
  uVar12 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                     (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  onClick = (UnityEngine_Events_UnityAction_o *)(ulong)uVar12;
  pSStack_50 = (System_String_o *)0x43e5ac0;
  __this_05 = (UI_ScoreboardProfilePopup_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pSStack_50 = (System_String_o *)0x43e5ad2;
  local_38 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSStack_50 = (System_String_o *)0x43e5af7;
  UI_ElementStyle___ctor(local_38,uVar12,120.0,20.0,(System_String_o *)__this_05,(MethodInfo *)0x0);
  local_118 = (UI_ScoreboardProfilePopup_o *)0x1;
  pSStack_50 = (System_String_o *)0x43e5b0b;
  __this_06 = TypeInfo_string;
  lVar14 = il2cpp_runtime_helper_022b2a40();
  if (lVar14 == 0) {
label_043e5c4a:
    lVar14 = unaff_R12;
    pSStack_50 = (System_String_o *)0x43e5c4f;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    *(undefined8 *)(lVar14 + 0x20) = "Back";
    pSStack_50 = (System_String_o *)0x43e5b3c;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x20);
    if (0 < *(int *)(lVar14 + 0x18)) {
      unaff_R15 = 0;
      local_40 = __this;
      do {
        __this = local_40;
        pSStack_50 = (System_String_o *)0x43e5bd1;
        __this_05 = (UI_ScoreboardProfilePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
        local_118 = (UI_ScoreboardProfilePopup_o *)0x0;
        pSStack_50 = (System_String_o *)0x43e5bde;
        __this_06 = __this_05;
        UI_ScoreboardProfilePopup___c__DisplayClass18_0___ctor
                  ((UI_ScoreboardProfilePopup___c__DisplayClass18_0_o *)__this_05,(MethodInfo *)0x0);
        unaff_R12 = lVar14;
        if (__this_05 == (UI_ScoreboardProfilePopup_o *)0x0) goto label_043e5c4a;
        __this_06 = (UI_ScoreboardProfilePopup_o *)&(__this_05->fields).m_CancellationTokenSource;
        (__this_05->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
        pSStack_50 = (System_String_o *)0x43e5bf3;
        local_118 = __this;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar14 + 0x18) <= unaff_R15) goto label_043e5c4f;
        (__this_05->fields).m_CachedPtr = *(intptr_t *)(lVar14 + 0x20 + unaff_R15 * 8);
        pSStack_50 = (System_String_o *)0x43e5c12;
        il2cpp_runtime_helper_022b4080(&__this_05->fields);
        pUVar18 = (__this->fields).BottomBar;
        pSVar16 = (System_String_o *)(__this_05->fields).m_CachedPtr;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          pSStack_50 = (System_String_o *)0x43e5c36;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = (System_String_o *)0x43e5b6a;
        unaff_RBP = UI_UIManager__GetLocaleCommon(pSVar16,(MethodInfo *)0x0);
        pSStack_50 = (System_String_o *)0x43e5b7c;
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pSStack_50 = (System_String_o *)0x43e5b96;
        UnityEngine_Events_UnityAction___ctor();
        pSStack_50 = (System_String_o *)0x43e5baf;
        UI_ElementFactory__CreateTextButton(pUVar18,local_38,unaff_RBP,0.0,onClick,(MethodInfo *)0x0);
        unaff_R15 = unaff_R15 + 1;
      } while ((long)unaff_R15 < (long)*(int *)(lVar14 + 0x18));
    }
    return;
  }
label_043e5c4f:
  pSStack_50 = (System_String_o *)0x43e5c54;
  il2cpp_runtime_helper_022b2ca0();
  pUStack_78 = __this_05;
  lStack_70 = lVar14;
  pUStack_68 = __this;
  pUStack_60 = onClick;
  uStack_58 = unaff_R15;
  pSStack_50 = unaff_RBP;
  if (g_data_057ae4d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Guild");
    il2cpp_runtime_helper_023445d0(&"<b>");
    il2cpp_runtime_helper_023445d0(&"<b>Display Name: </b>");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"<b>Patreon Tier: </b>");
    il2cpp_runtime_helper_023445d0(&"Thank you, ");
    il2cpp_runtime_helper_023445d0(&"Social");
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/");
    il2cpp_runtime_helper_023445d0(&": </b>");
    il2cpp_runtime_helper_023445d0(&" for being a supporter.");
    il2cpp_runtime_helper_023445d0(&"<b>User ID: </b>");
    il2cpp_runtime_helper_023445d0(&"About");
    il2cpp_runtime_helper_023445d0(&"<b>Patreon Supporter: </b>");
    il2cpp_runtime_helper_023445d0(&"No");
    g_data_057ae4d1 = '\x01';
  }
  local_100._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_100._8_8_ = (Il2CppMethodPointer)0x0;
  local_100._16_8_ = (UnityEngine_Object_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this_06,(MethodInfo *)0x0);
  pSVar4 = (__this_06->fields)._items;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043e6a1f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
             (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  local_100._16_8_ = local_80;
  local_100._0_8_ = local_90._0_8_;
  local_100._8_8_ = local_90._8_8_;
  while (__this_01.fields._8_8_ = in_stack_fffffffffffffed8,
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0,
        __this_01.fields._current = (Il2CppObject *)in_stack_fffffffffffffee0,
        bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_01,(MethodInfo_321A1D0 *)local_100), obj = local_100._16_8_,
        (char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
  }
  __this_02.fields._8_8_ = in_stack_fffffffffffffed8;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
  __this_02.fields._current = (Il2CppObject *)in_stack_fffffffffffffee0;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)local_100);
  do {
    pSVar4 = (__this_06->fields)._items;
    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (((local_118 != (UI_ScoreboardProfilePopup_o *)0x0) &&
          (__this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                        (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
          __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
         (pIVar15 = System_Collections_Generic_Dictionary_int__object___get_Item
                              (__this_00,*(int32_t *)&(local_118->fields).m_CancellationTokenSource,
                               MethodInfo_PlayerInfo_get_Item), pIVar15 != (Il2CppObject *)0x0)) {
        ppSVar2 = &(__this_06->fields)._profile;
        (__this_06->fields)._profile = (Settings_ProfileSettings_o *)pIVar15[2].klass;
        il2cpp_runtime_helper_022b4080(ppSVar2);
        pSVar16 = (System_String_o *)
                  (*(__this_06->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (__this_06,(__this_06->klass->vtable)._4_get_ThemePanel.method);
        in_stack_fffffffffffffee0 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(in_stack_fffffffffffffee0,0x16,120.0,20.0,pSVar16,(MethodInfo *)0x0);
        pUVar17 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this_06->fields).SinglePanel,25.0,4,(MethodInfo *)0x0);
        if ((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar18 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
           pUVar18 != (UnityEngine_Transform_o *)0x0)) {
          pSVar4 = (__this_06->fields)._items;
          pUVar17 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
          lVar14 = MethodInfo_Void_Add;
          if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (pSVar4->fields)._items;
            if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
              uVar12 = (pSVar4->fields)._size;
              if (uVar12 < (uint)pUVar5->max_length) {
                (pSVar4->fields)._size = uVar12 + 1;
                pUVar5->m_Items[(int)uVar12] = pUVar17;
                il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12);
                pSVar6 = *ppSVar2;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar17,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                pSVar6 = *ppSVar2;
              }
              if ((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                 (pSVar7 = (pSVar6->fields).ProfileIcon, pSVar7 != (Settings_StringSetting_o *)0x0)) {
                pSVar16 = (pSVar7->fields)._value;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar16 = UI_UIManager__GetProfileIcon(pSVar16,(MethodInfo *)0x0);
                pSVar16 = System_String__Concat_3ae5ba0("Icons/Profile/",pSVar16,(MethodInfo *)0x0);
                uVar22 = 0;
                uVar23 = 0;
                UI_ElementFactory__CreateRawImage
                          (pUVar18,in_stack_fffffffffffffee0,pSVar16,256.0,256.0,(MethodInfo *)0x0);
                pSVar6 = *ppSVar2;
                if (((((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                      (pSVar8 = (pSVar6->fields).Name, pSVar8 != (Settings_NameSetting_o *)0x0)) &&
                     (pSVar9 = (pSVar6->fields).NameEffectEnabled, pSVar9 != (Settings_BoolSetting_o *)0x0))
                    && ((pSVar7 = (pSVar6->fields).NameEffect, pSVar7 != (Settings_StringSetting_o *)0x0 &&
                        (pSVar10 = (pSVar6->fields).NameEffectColorA,
                        pSVar10 != (Settings_ColorSetting_o *)0x0)))) &&
                   (pUVar11 = (pSVar10->fields)._value, pUVar11 != (Utility_Color255_o *)0x0)) {
                  pSVar16 = (pSVar8->fields)._value;
                  bVar3 = *(byte *)((long)&(pSVar9->fields).DefaultValue + 1);
                  pSVar19 = (pSVar7->fields)._value;
                  UVar24 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                  if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                     (pSVar10 = ((*ppSVar2)->fields).NameEffectColorB,
                     pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                    local_a0._8_4_ = uVar22;
                    local_a0._0_8_ = UVar24.fields._8_8_;
                    local_a0._12_4_ = uVar23;
                    pUVar11 = (pSVar10->fields)._value;
                    if (pUVar11 != (Utility_Color255_o *)0x0) {
                      UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                      if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                         (pSVar10 = ((*ppSVar2)->fields).NameEffectColorC,
                         pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                        local_c0._8_4_ = uVar22;
                        local_c0._0_8_ = UVar25.fields._8_8_;
                        local_c0._12_4_ = uVar23;
                        local_b0._8_4_ = extraout_XMM0_Dc;
                        local_b0._0_8_ = UVar25.fields._0_8_;
                        local_b0._12_4_ = extraout_XMM0_Dd;
                        pUVar11 = (pSVar10->fields)._value;
                        if (pUVar11 != (Utility_Color255_o *)0x0) {
                          UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                          if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                             (pSVar10 = ((*ppSVar2)->fields).NameEffectColorD,
                             pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                            local_100._40_4_ = uVar22;
                            local_100._32_8_ = UVar25.fields._8_8_;
                            local_100._44_4_ = uVar23;
                            local_d0._8_4_ = extraout_XMM0_Dc_00;
                            local_d0._0_8_ = UVar25.fields._0_8_;
                            local_d0._12_4_ = extraout_XMM0_Dd_00;
                            pUVar11 = (pSVar10->fields)._value;
                            if (pUVar11 != (Utility_Color255_o *)0x0) {
                              UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                              uVar22 = local_a0._8_4_;
                              uVar23 = local_a0._12_4_;
                              colorA.fields.b = (float)(int)local_a0._0_8_;
                              colorA.fields.a = (float)(int)((ulong)local_a0._0_8_ >> 0x20);
                              colorA.fields.r = (float)(int)UVar24.fields._0_8_;
                              colorA.fields.g = (float)(int)((ulong)UVar24.fields._0_8_ >> 0x20);
                              UVar24.fields.b = (float)(int)local_c0._0_8_;
                              UVar24.fields.a = (float)(int)((ulong)local_c0._0_8_ >> 0x20);
                              UVar24.fields.r = (float)(int)local_b0._0_8_;
                              UVar24.fields.g = (float)(int)((ulong)local_b0._0_8_ >> 0x20);
                              colorC.fields.b = (float)(int)local_100._32_8_;
                              colorC.fields.a = (float)(int)((ulong)local_100._32_8_ >> 0x20);
                              colorC.fields.r = (float)(int)local_d0._0_8_;
                              colorC.fields.g = (float)(int)((ulong)local_d0._0_8_ >> 0x20);
                              UI_ScoreboardProfilePopup__AddEffectRow
                                        (__this_06,in_stack_fffffffffffffee0,
                                         (Photon_Realtime_Player_o *)local_118,"Name",pSVar16,
                                         (uint)bVar3,pSVar19,colorA,UVar24,colorC,UVar25,
                                         in_stack_fffffffffffffed8);
                              pSVar6 = (__this_06->fields)._profile;
                              in_stack_fffffffffffffed0 = pSVar19;
                              if ((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                                 (pSVar8 = (pSVar6->fields).Guild, pSVar8 != (Settings_NameSetting_o *)0x0)) {
                                pSVar16 = (pSVar8->fields)._value;
                                if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar16 = Anticheat_ChatFilter__FilterBadWords(pSVar16,(MethodInfo *)0x0);
                                if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar16 = MiscExtensions__HexColor(pSVar16,(MethodInfo *)0x0);
                                in_stack_fffffffffffffed0 = pSVar19;
                                if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                   (pSVar7 = ((*ppSVar2)->fields).GuildRoleSprite,
                                   pSVar7 != (Settings_StringSetting_o *)0x0)) {
                                  pSVar27 = (pSVar7->fields)._value;
                                  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  pSVar16 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                                                      ((Photon_Realtime_Player_o *)local_118,pSVar16,pSVar27,
                                                       (MethodInfo *)0x0);
                                  pSVar6 = *ppSVar2;
                                  in_stack_fffffffffffffed0 = pSVar19;
                                  if ((((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                                       (pSVar9 = (pSVar6->fields).GuildEffectEnabled,
                                       pSVar9 != (Settings_BoolSetting_o *)0x0)) &&
                                      (pSVar7 = (pSVar6->fields).GuildEffect,
                                      pSVar7 != (Settings_StringSetting_o *)0x0)) &&
                                     ((pSVar10 = (pSVar6->fields).GuildEffectColorA,
                                      pSVar10 != (Settings_ColorSetting_o *)0x0 &&
                                      (pUVar11 = (pSVar10->fields)._value,
                                      pUVar11 != (Utility_Color255_o *)0x0)))) {
                                    bVar3 = *(byte *)((long)&(pSVar9->fields).DefaultValue + 1);
                                    pSVar27 = (pSVar7->fields)._value;
                                    UVar24 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                    in_stack_fffffffffffffed0 = pSVar19;
                                    if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                       (pSVar10 = ((*ppSVar2)->fields).GuildEffectColorB,
                                       pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                                      local_a0._8_4_ = uVar22;
                                      local_a0._0_8_ = UVar24.fields._8_8_;
                                      local_a0._12_4_ = uVar23;
                                      pUVar11 = (pSVar10->fields)._value;
                                      if (pUVar11 != (Utility_Color255_o *)0x0) {
                                        UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                        in_stack_fffffffffffffed0 = pSVar19;
                                        if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                           (pSVar10 = ((*ppSVar2)->fields).GuildEffectColorC,
                                           pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                                          local_c0._8_4_ = uVar22;
                                          local_c0._0_8_ = UVar25.fields._8_8_;
                                          local_c0._12_4_ = uVar23;
                                          local_b0._8_4_ = extraout_XMM0_Dc_01;
                                          local_b0._0_8_ = UVar25.fields._0_8_;
                                          local_b0._12_4_ = extraout_XMM0_Dd_01;
                                          pUVar11 = (pSVar10->fields)._value;
                                          if (pUVar11 != (Utility_Color255_o *)0x0) {
                                            UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                            in_stack_fffffffffffffed0 = pSVar19;
                                            if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                               (pSVar10 = ((*ppSVar2)->fields).GuildEffectColorD,
                                               pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                                              local_100._40_4_ = uVar22;
                                              local_100._32_8_ = UVar25.fields._8_8_;
                                              local_100._44_4_ = uVar23;
                                              local_d0._8_4_ = extraout_XMM0_Dc_02;
                                              local_d0._0_8_ = UVar25.fields._0_8_;
                                              local_d0._12_4_ = extraout_XMM0_Dd_02;
                                              pUVar11 = (pSVar10->fields)._value;
                                              if (pUVar11 != (Utility_Color255_o *)0x0) {
                                                UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                                colorA_00.fields.b = (float)(int)local_a0._0_8_;
                                                colorA_00.fields.a =
                                                     (float)(int)((ulong)local_a0._0_8_ >> 0x20);
                                                colorA_00.fields.r = (float)(int)UVar24.fields._0_8_;
                                                colorA_00.fields.g =
                                                     (float)(int)((ulong)UVar24.fields._0_8_ >> 0x20);
                                                colorB.fields.b = (float)(int)local_c0._0_8_;
                                                colorB.fields.a = (float)(int)((ulong)local_c0._0_8_ >> 0x20);
                                                colorB.fields.r = (float)(int)local_b0._0_8_;
                                                colorB.fields.g = (float)(int)((ulong)local_b0._0_8_ >> 0x20);
                                                colorC_00.fields.b = (float)(int)local_100._32_8_;
                                                colorC_00.fields.a =
                                                     (float)(int)((ulong)local_100._32_8_ >> 0x20);
                                                colorC_00.fields.r = (float)(int)local_d0._0_8_;
                                                colorC_00.fields.g =
                                                     (float)(int)((ulong)local_d0._0_8_ >> 0x20);
                                                UI_ScoreboardProfilePopup__AddEffectRow
                                                          (__this_06,in_stack_fffffffffffffee0,
                                                           (Photon_Realtime_Player_o *)local_118,"Guild",
                                                           pSVar16,(uint)bVar3,pSVar27,colorA_00,colorB,
                                                           colorC_00,UVar25,in_stack_fffffffffffffed8);
                                                pUVar18 = (__this_06->fields).SinglePanel;
                                                pSVar4 = (__this_06->fields)._items;
                                                pSVar16 = UI_UIManager__GetLocaleCommon
                                                                    ("Social",(MethodInfo *)0x0);
                                                pSVar6 = (__this_06->fields)._profile;
                                                in_stack_fffffffffffffed0 = pSVar27;
                                                if ((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                                                   (pSVar7 = (pSVar6->fields).Social,
                                                   pSVar7 != (Settings_StringSetting_o *)0x0)) {
                                                  pSVar19 = Anticheat_ChatFilter__FilterBadWords
                                                                      ((pSVar7->fields)._value,
                                                                       (MethodInfo *)0x0);
                                                  pSVar19 = MiscExtensions__HexColor
                                                                      (pSVar19,(MethodInfo *)0x0);
                                                  pSVar16 = System_String__Concat_3af7470
                                                                      ("<b>",pSVar16,": </b>",
                                                                       pSVar19,(MethodInfo *)0x0);
                                                  pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                      (pUVar18,in_stack_fffffffffffffee0,
                                                                       pSVar16,0,3,(MethodInfo *)0x0);
                                                  lVar14 = MethodInfo_Void_Add;
                                                  in_stack_fffffffffffffed0 = pSVar27;
                                                  if (pSVar4 != (System_Collections_Generic_List_GameObject__o
                                                                 *)0x0) {
                                                    piVar1 = &(pSVar4->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar5 = (pSVar4->fields)._items;
                                                    if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                      uVar12 = (pSVar4->fields)._size;
                                                      if (uVar12 < (uint)pUVar5->max_length) {
                                                        (pSVar4->fields)._size = uVar12 + 1;
                                                        pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                        il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12);
                                                        in_stack_fffffffffffffed0 = pSVar27;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)pSVar4,(Il2CppObject *)pUVar17,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0
                                                                              ) + 0x70));
                                                        in_stack_fffffffffffffed0 = pSVar27;
                                                      }
                                                      pUVar18 = (__this_06->fields).SinglePanel;
                                                      pSVar4 = (__this_06->fields)._items;
                                                      pSVar16 = UI_UIManager__GetLocaleCommon
                                                                          ("About",(MethodInfo *)0x0);
                                                      pSVar6 = (__this_06->fields)._profile;
                                                      if ((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                                                         (pSVar7 = (pSVar6->fields).About,
                                                         pSVar7 != (Settings_StringSetting_o *)0x0)) {
                                                        pSVar19 = Anticheat_ChatFilter__FilterBadWords
                                                                            ((pSVar7->fields)._value,
                                                                             (MethodInfo *)0x0);
                                                        pSVar19 = MiscExtensions__HexColor
                                                                            (pSVar19,(MethodInfo *)0x0);
                                                        pSVar16 = System_String__Concat_3af7470
                                                                            ("<b>",pSVar16,": </b>"
                                                                             ,pSVar19,(MethodInfo *)0x0);
                                                        pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                            (pUVar18,in_stack_fffffffffffffee0
                                                                             ,pSVar16,0,3,(MethodInfo *)0x0);
                                                        lVar14 = MethodInfo_Void_Add;
                                                        if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar12 = (pSVar4->fields)._size;
                                                           if (uVar12 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar12 + 1;
                                                             pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12,
                                                                                pUVar17);
                                                             method_00 = extraout_RDX;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       method_00 = extraout_RDX_00;
                                                       }
                                                       pSVar16 = 
                                                       UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName
                                                                 (__this_06,
                                                                  (Photon_Realtime_Player_o *)local_118,
                                                                  method_00);
                                                       pSVar19 = UI_ScoreboardProfilePopup__GetDisplayUserId
                                                                           (__this_06,
                                                                            (Photon_Realtime_Player_o *)
                                                                            local_118,method_01);
                                                       tierLabel = (System_String_o **)local_90;
                                                       if (g_data_057ae4d4 == '\0') {
                                                         il2cpp_runtime_helper_023445d0(&"None");
                                                         g_data_057ae4d4 = '\x01';
                                                       }
                                                       local_90._0_8_ =
                                                            (System_Collections_Generic_List_T__o *)0x0;
                                                       bVar13 = 
                                                       PatreonEffects_PatreonHelper__TryGetRemoteTierLabel
                                                                 ((Photon_Realtime_Player_o *)local_118,
                                                                  tierLabel,(MethodInfo *)0x0);
                                                       if ((char)bVar13 == '\0') {
                                                         if (*(char *)((long)&(local_118->fields).
                                                                              m_CancellationTokenSource + 4)
                                                             != '\0') {
                                                           tierLabel = (System_String_o **)local_90;
                                                           bVar13 = 
                                                       PatreonEffects_PatreonHelper__TryGetLocalTierLabel
                                                                 (tierLabel,(MethodInfo *)0x0);
                                                       if ((char)bVar13 != '\0') goto label_043e66c9;
                                                       }
                                                       tierLabel = &"None";
                                                       }
label_043e66c9:
                                                       pSVar27 = *tierLabel;
                                                       bVar13 = System_String__op_Inequality
                                                                          (pSVar27,"None",
                                                                           (MethodInfo *)0x0);
                                                       pSVar20 = Anticheat_ChatFilter__FilterBadWords
                                                                           (pSVar16,(MethodInfo *)0x0);
                                                       pSVar20 = MiscExtensions__HexColor
                                                                           (pSVar20,(MethodInfo *)0x0);
                                                       if ((char)bVar13 == '\0') {
                                                         if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                                           il2cpp_runtime_helper_02337ed0();
                                                         }
                                                         local_118 = (UI_ScoreboardProfilePopup_o *)
                                                                     MiscExtensions__HexColor
                                                                               ("No",(MethodInfo *)0x0
                                                                               );
                                                       }
                                                       else {
                                                         local_118 = (UI_ScoreboardProfilePopup_o *)
                                                                     System_String__Concat_3af7150
                                                                               ("Thank you, ",pSVar20,
                                                                                " for being a supporter.",(MethodInfo *)0x0
                                                                               );
                                                       }
                                                       pUVar18 = (__this_06->fields).SinglePanel;
                                                       pSVar4 = (__this_06->fields)._items;
                                                       if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       pSVar16 = Anticheat_ChatFilter__FilterBadWords
                                                                           (pSVar16,(MethodInfo *)0x0);
                                                       if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       pSVar16 = MiscExtensions__HexColor
                                                                           (pSVar16,(MethodInfo *)0x0);
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>Display Name: </b>",pSVar16,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_fffffffffffffee0,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar14 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar12 = (pSVar4->fields)._size;
                                                           if (uVar12 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar12 + 1;
                                                             pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12)
                                                             ;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this_06->fields).SinglePanel;
                                                       pSVar4 = (__this_06->fields)._items;
                                                       pSVar16 = MiscExtensions__HexColor
                                                                           (pSVar19,(MethodInfo *)0x0);
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>User ID: </b>",pSVar16,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_fffffffffffffee0,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar14 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar12 = (pSVar4->fields)._size;
                                                           if (uVar12 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar12 + 1;
                                                             pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12)
                                                             ;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this_06->fields).SinglePanel;
                                                       pSVar4 = (__this_06->fields)._items;
                                                       pSVar16 = MiscExtensions__HexColor
                                                                           (pSVar27,(MethodInfo *)0x0);
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>Patreon Tier: </b>",pSVar16,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_fffffffffffffee0,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar14 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar12 = (pSVar4->fields)._size;
                                                           if (uVar12 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar12 + 1;
                                                             pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12,
                                                                                pUVar17);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this_06->fields).SinglePanel;
                                                       pSVar4 = (__this_06->fields)._items;
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>Patreon Supporter: </b>",
                                                                            (System_String_o *)local_118,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_fffffffffffffee0,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar14 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar12 = (pSVar4->fields)._size;
                                                           if (uVar12 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar12 + 1;
                                                             pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12,
                                                                                pUVar17);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                                   + 0x70));
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
label_043e6a1f:
    auVar26 = il2cpp_runtime_helper_022b2c90();
    if (auVar26._8_4_ != 1) goto label_043e6a6b;
    plVar21 = (long *)__cxa_begin_catch(auVar26._0_8_);
    lVar14 = *plVar21;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_fffffffffffffed8;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
    __this_03.fields._current = (Il2CppObject *)in_stack_fffffffffffffee0;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)local_100);
  } while (lVar14 == 0);
  il2cpp_runtime_helper_022fefe0(lVar14);
label_043e6a6b:
  __this_04.fields._8_8_ = in_stack_fffffffffffffed8;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
  __this_04.fields._current = (Il2CppObject *)in_stack_fffffffffffffee0;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)local_100);
  _Unwind_Resume(auVar26._0_8_);
}


// UI.ScoreboardProfilePopup$$Show
// il2cpp: void UI_ScoreboardProfilePopup__Show (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43e5c60

void UI_ScoreboardProfilePopup__Show
               (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_ProfileSettings_o **ppSVar2;
  byte bVar3;
  int length;
  uint uVar4;
  System_Collections_Generic_List_GameObject__o *pSVar5;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  UnityEngine_GameObject_array *pUVar6;
  Settings_ProfileSettings_o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  Settings_NameSetting_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  Settings_ColorSetting_o *pSVar11;
  Utility_Color255_o *pUVar12;
  long lVar13;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined8 obj;
  bool_conflict bVar14;
  Il2CppObject *pIVar15;
  System_String_o *pSVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  System_String_o *pSVar19;
  System_String_o *pSVar20;
  long *plVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o **tierLabel;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 uVar22;
  undefined4 uVar23;
  UnityEngine_Color_o UVar24;
  UnityEngine_Color_o UVar25;
  UnityEngine_Color_o colorA;
  UnityEngine_Color_o colorA_00;
  undefined1 auVar26 [12];
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorC;
  UnityEngine_Color_o colorC_00;
  System_String_o *in_stack_ffffffffffffff18;
  System_String_o *pSVar27;
  MethodInfo *in_stack_ffffffffffffff20;
  UI_ElementStyle_o *in_stack_ffffffffffffff28;
  Photon_Realtime_Player_o *pPStack_d0;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  UnityEngine_Object_o *pUStack_38;
  
  if (g_data_057ae4d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Guild");
    il2cpp_runtime_helper_023445d0(&"<b>");
    il2cpp_runtime_helper_023445d0(&"<b>Display Name: </b>");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"<b>Patreon Tier: </b>");
    il2cpp_runtime_helper_023445d0(&"Thank you, ");
    il2cpp_runtime_helper_023445d0(&"Social");
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/");
    il2cpp_runtime_helper_023445d0(&": </b>");
    il2cpp_runtime_helper_023445d0(&" for being a supporter.");
    il2cpp_runtime_helper_023445d0(&"<b>User ID: </b>");
    il2cpp_runtime_helper_023445d0(&"About");
    il2cpp_runtime_helper_023445d0(&"<b>Patreon Supporter: </b>");
    il2cpp_runtime_helper_023445d0(&"No");
    g_data_057ae4d1 = '\x01';
  }
  auStack_b8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_b8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_b8._16_8_ = (UnityEngine_Object_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pSVar5 = (__this->fields)._items;
  pPStack_d0 = player;
  if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043e6a1f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  auStack_b8._16_8_ = pUStack_38;
  auStack_b8._0_8_ = auStack_48._0_8_;
  auStack_b8._8_8_ = auStack_48._8_8_;
  while (__this_01.fields._8_8_ = in_stack_ffffffffffffff20,
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18,
        __this_01.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28,
        bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_01,(MethodInfo_321A1D0 *)auStack_b8), obj = auStack_b8._16_8_,
        (char)bVar14 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
  }
  __this_02.fields._8_8_ = in_stack_ffffffffffffff20;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
  __this_02.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)auStack_b8);
  do {
    pSVar5 = (__this->fields)._items;
    if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar5->fields)._size;
      (pSVar5->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (((pPStack_d0 != (Photon_Realtime_Player_o *)0x0) &&
          (__this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                        (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
          __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
         (pIVar15 = System_Collections_Generic_Dictionary_int__object___get_Item
                              (__this_00,(pPStack_d0->fields).actorNumber,MethodInfo_PlayerInfo_get_Item),
         pIVar15 != (Il2CppObject *)0x0)) {
        ppSVar2 = &(__this->fields)._profile;
        (__this->fields)._profile = (Settings_ProfileSettings_o *)pIVar15[2].klass;
        il2cpp_runtime_helper_022b4080(ppSVar2);
        pSVar16 = (System_String_o *)
                  (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        in_stack_ffffffffffffff28 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(in_stack_ffffffffffffff28,0x16,120.0,20.0,pSVar16,(MethodInfo *)0x0);
        pUVar17 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,25.0,4,(MethodInfo *)0x0);
        if ((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar18 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
           pUVar18 != (UnityEngine_Transform_o *)0x0)) {
          pSVar5 = (__this->fields)._items;
          pUVar17 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
          lVar13 = MethodInfo_Void_Add;
          if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar6 = (pSVar5->fields)._items;
            if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
              uVar4 = (pSVar5->fields)._size;
              if (uVar4 < (uint)pUVar6->max_length) {
                (pSVar5->fields)._size = uVar4 + 1;
                pUVar6->m_Items[(int)uVar4] = pUVar17;
                il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar4);
                pSVar7 = *ppSVar2;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pUVar17,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                pSVar7 = *ppSVar2;
              }
              if ((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                 (pSVar8 = (pSVar7->fields).ProfileIcon, pSVar8 != (Settings_StringSetting_o *)0x0)) {
                pSVar16 = (pSVar8->fields)._value;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar16 = UI_UIManager__GetProfileIcon(pSVar16,(MethodInfo *)0x0);
                pSVar16 = System_String__Concat_3ae5ba0("Icons/Profile/",pSVar16,(MethodInfo *)0x0);
                uVar22 = 0;
                uVar23 = 0;
                UI_ElementFactory__CreateRawImage
                          (pUVar18,in_stack_ffffffffffffff28,pSVar16,256.0,256.0,(MethodInfo *)0x0);
                pSVar7 = *ppSVar2;
                if (((((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                      (pSVar9 = (pSVar7->fields).Name, pSVar9 != (Settings_NameSetting_o *)0x0)) &&
                     (pSVar10 = (pSVar7->fields).NameEffectEnabled, pSVar10 != (Settings_BoolSetting_o *)0x0))
                    && ((pSVar8 = (pSVar7->fields).NameEffect, pSVar8 != (Settings_StringSetting_o *)0x0 &&
                        (pSVar11 = (pSVar7->fields).NameEffectColorA,
                        pSVar11 != (Settings_ColorSetting_o *)0x0)))) &&
                   (pUVar12 = (pSVar11->fields)._value, pUVar12 != (Utility_Color255_o *)0x0)) {
                  pSVar16 = (pSVar9->fields)._value;
                  bVar3 = *(byte *)((long)&(pSVar10->fields).DefaultValue + 1);
                  pSVar19 = (pSVar8->fields)._value;
                  UVar24 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                  if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                     (pSVar11 = ((*ppSVar2)->fields).NameEffectColorB,
                     pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                    auStack_58._8_4_ = uVar22;
                    auStack_58._0_8_ = UVar24.fields._8_8_;
                    auStack_58._12_4_ = uVar23;
                    pUVar12 = (pSVar11->fields)._value;
                    if (pUVar12 != (Utility_Color255_o *)0x0) {
                      UVar25 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                      if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                         (pSVar11 = ((*ppSVar2)->fields).NameEffectColorC,
                         pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                        auStack_78._8_4_ = uVar22;
                        auStack_78._0_8_ = UVar25.fields._8_8_;
                        auStack_78._12_4_ = uVar23;
                        auStack_68._8_4_ = extraout_XMM0_Dc;
                        auStack_68._0_8_ = UVar25.fields._0_8_;
                        auStack_68._12_4_ = extraout_XMM0_Dd;
                        pUVar12 = (pSVar11->fields)._value;
                        if (pUVar12 != (Utility_Color255_o *)0x0) {
                          UVar25 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                          if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                             (pSVar11 = ((*ppSVar2)->fields).NameEffectColorD,
                             pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                            auStack_b8._40_4_ = uVar22;
                            auStack_b8._32_8_ = UVar25.fields._8_8_;
                            auStack_b8._44_4_ = uVar23;
                            auStack_88._8_4_ = extraout_XMM0_Dc_00;
                            auStack_88._0_8_ = UVar25.fields._0_8_;
                            auStack_88._12_4_ = extraout_XMM0_Dd_00;
                            pUVar12 = (pSVar11->fields)._value;
                            if (pUVar12 != (Utility_Color255_o *)0x0) {
                              UVar25 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                              uVar22 = auStack_58._8_4_;
                              uVar23 = auStack_58._12_4_;
                              colorA.fields.b = (float)(int)auStack_58._0_8_;
                              colorA.fields.a = (float)(int)((ulong)auStack_58._0_8_ >> 0x20);
                              colorA.fields.r = (float)(int)UVar24.fields._0_8_;
                              colorA.fields.g = (float)(int)((ulong)UVar24.fields._0_8_ >> 0x20);
                              UVar24.fields.b = (float)(int)auStack_78._0_8_;
                              UVar24.fields.a = (float)(int)((ulong)auStack_78._0_8_ >> 0x20);
                              UVar24.fields.r = (float)(int)auStack_68._0_8_;
                              UVar24.fields.g = (float)(int)((ulong)auStack_68._0_8_ >> 0x20);
                              colorC.fields.b = (float)(int)auStack_b8._32_8_;
                              colorC.fields.a = (float)(int)((ulong)auStack_b8._32_8_ >> 0x20);
                              colorC.fields.r = (float)(int)auStack_88._0_8_;
                              colorC.fields.g = (float)(int)((ulong)auStack_88._0_8_ >> 0x20);
                              UI_ScoreboardProfilePopup__AddEffectRow
                                        (__this,in_stack_ffffffffffffff28,pPStack_d0,"Name",pSVar16,
                                         (uint)bVar3,pSVar19,colorA,UVar24,colorC,UVar25,
                                         in_stack_ffffffffffffff20);
                              pSVar7 = (__this->fields)._profile;
                              in_stack_ffffffffffffff18 = pSVar19;
                              if ((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                                 (pSVar9 = (pSVar7->fields).Guild, pSVar9 != (Settings_NameSetting_o *)0x0)) {
                                pSVar16 = (pSVar9->fields)._value;
                                if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar16 = Anticheat_ChatFilter__FilterBadWords(pSVar16,(MethodInfo *)0x0);
                                if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar16 = MiscExtensions__HexColor(pSVar16,(MethodInfo *)0x0);
                                in_stack_ffffffffffffff18 = pSVar19;
                                if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                   (pSVar8 = ((*ppSVar2)->fields).GuildRoleSprite,
                                   pSVar8 != (Settings_StringSetting_o *)0x0)) {
                                  pSVar27 = (pSVar8->fields)._value;
                                  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  pSVar16 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                                                      (pPStack_d0,pSVar16,pSVar27,(MethodInfo *)0x0);
                                  pSVar7 = *ppSVar2;
                                  in_stack_ffffffffffffff18 = pSVar19;
                                  if ((((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                                       (pSVar10 = (pSVar7->fields).GuildEffectEnabled,
                                       pSVar10 != (Settings_BoolSetting_o *)0x0)) &&
                                      (pSVar8 = (pSVar7->fields).GuildEffect,
                                      pSVar8 != (Settings_StringSetting_o *)0x0)) &&
                                     ((pSVar11 = (pSVar7->fields).GuildEffectColorA,
                                      pSVar11 != (Settings_ColorSetting_o *)0x0 &&
                                      (pUVar12 = (pSVar11->fields)._value,
                                      pUVar12 != (Utility_Color255_o *)0x0)))) {
                                    bVar3 = *(byte *)((long)&(pSVar10->fields).DefaultValue + 1);
                                    pSVar27 = (pSVar8->fields)._value;
                                    UVar24 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                                    in_stack_ffffffffffffff18 = pSVar19;
                                    if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                       (pSVar11 = ((*ppSVar2)->fields).GuildEffectColorB,
                                       pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                                      auStack_58._8_4_ = uVar22;
                                      auStack_58._0_8_ = UVar24.fields._8_8_;
                                      auStack_58._12_4_ = uVar23;
                                      pUVar12 = (pSVar11->fields)._value;
                                      if (pUVar12 != (Utility_Color255_o *)0x0) {
                                        UVar25 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                                        in_stack_ffffffffffffff18 = pSVar19;
                                        if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                           (pSVar11 = ((*ppSVar2)->fields).GuildEffectColorC,
                                           pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                                          auStack_78._8_4_ = uVar22;
                                          auStack_78._0_8_ = UVar25.fields._8_8_;
                                          auStack_78._12_4_ = uVar23;
                                          auStack_68._8_4_ = extraout_XMM0_Dc_01;
                                          auStack_68._0_8_ = UVar25.fields._0_8_;
                                          auStack_68._12_4_ = extraout_XMM0_Dd_01;
                                          pUVar12 = (pSVar11->fields)._value;
                                          if (pUVar12 != (Utility_Color255_o *)0x0) {
                                            UVar25 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                                            in_stack_ffffffffffffff18 = pSVar19;
                                            if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                               (pSVar11 = ((*ppSVar2)->fields).GuildEffectColorD,
                                               pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                                              auStack_b8._40_4_ = uVar22;
                                              auStack_b8._32_8_ = UVar25.fields._8_8_;
                                              auStack_b8._44_4_ = uVar23;
                                              auStack_88._8_4_ = extraout_XMM0_Dc_02;
                                              auStack_88._0_8_ = UVar25.fields._0_8_;
                                              auStack_88._12_4_ = extraout_XMM0_Dd_02;
                                              pUVar12 = (pSVar11->fields)._value;
                                              if (pUVar12 != (Utility_Color255_o *)0x0) {
                                                UVar25 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                                                colorA_00.fields.b = (float)(int)auStack_58._0_8_;
                                                colorA_00.fields.a =
                                                     (float)(int)((ulong)auStack_58._0_8_ >> 0x20);
                                                colorA_00.fields.r = (float)(int)UVar24.fields._0_8_;
                                                colorA_00.fields.g =
                                                     (float)(int)((ulong)UVar24.fields._0_8_ >> 0x20);
                                                colorB.fields.b = (float)(int)auStack_78._0_8_;
                                                colorB.fields.a =
                                                     (float)(int)((ulong)auStack_78._0_8_ >> 0x20);
                                                colorB.fields.r = (float)(int)auStack_68._0_8_;
                                                colorB.fields.g =
                                                     (float)(int)((ulong)auStack_68._0_8_ >> 0x20);
                                                colorC_00.fields.b = (float)(int)auStack_b8._32_8_;
                                                colorC_00.fields.a =
                                                     (float)(int)((ulong)auStack_b8._32_8_ >> 0x20);
                                                colorC_00.fields.r = (float)(int)auStack_88._0_8_;
                                                colorC_00.fields.g =
                                                     (float)(int)((ulong)auStack_88._0_8_ >> 0x20);
                                                UI_ScoreboardProfilePopup__AddEffectRow
                                                          (__this,in_stack_ffffffffffffff28,pPStack_d0,
                                                           "Guild",pSVar16,(uint)bVar3,pSVar27,colorA_00,
                                                           colorB,colorC_00,UVar25,in_stack_ffffffffffffff20);
                                                pUVar18 = (__this->fields).SinglePanel;
                                                pSVar5 = (__this->fields)._items;
                                                pSVar16 = UI_UIManager__GetLocaleCommon
                                                                    ("Social",(MethodInfo *)0x0);
                                                pSVar7 = (__this->fields)._profile;
                                                in_stack_ffffffffffffff18 = pSVar27;
                                                if ((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                                                   (pSVar8 = (pSVar7->fields).Social,
                                                   pSVar8 != (Settings_StringSetting_o *)0x0)) {
                                                  pSVar19 = Anticheat_ChatFilter__FilterBadWords
                                                                      ((pSVar8->fields)._value,
                                                                       (MethodInfo *)0x0);
                                                  pSVar19 = MiscExtensions__HexColor
                                                                      (pSVar19,(MethodInfo *)0x0);
                                                  pSVar16 = System_String__Concat_3af7470
                                                                      ("<b>",pSVar16,": </b>",
                                                                       pSVar19,(MethodInfo *)0x0);
                                                  pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                      (pUVar18,in_stack_ffffffffffffff28,
                                                                       pSVar16,0,3,(MethodInfo *)0x0);
                                                  lVar13 = MethodInfo_Void_Add;
                                                  in_stack_ffffffffffffff18 = pSVar27;
                                                  if (pSVar5 != (System_Collections_Generic_List_GameObject__o
                                                                 *)0x0) {
                                                    piVar1 = &(pSVar5->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar6 = (pSVar5->fields)._items;
                                                    if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                      uVar4 = (pSVar5->fields)._size;
                                                      if (uVar4 < (uint)pUVar6->max_length) {
                                                        (pSVar5->fields)._size = uVar4 + 1;
                                                        pUVar6->m_Items[(int)uVar4] = pUVar17;
                                                        il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar4);
                                                        in_stack_ffffffffffffff18 = pSVar27;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)pSVar5,(Il2CppObject *)pUVar17,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0
                                                                              ) + 0x70));
                                                        in_stack_ffffffffffffff18 = pSVar27;
                                                      }
                                                      pUVar18 = (__this->fields).SinglePanel;
                                                      pSVar5 = (__this->fields)._items;
                                                      pSVar16 = UI_UIManager__GetLocaleCommon
                                                                          ("About",(MethodInfo *)0x0);
                                                      pSVar7 = (__this->fields)._profile;
                                                      if ((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                                                         (pSVar8 = (pSVar7->fields).About,
                                                         pSVar8 != (Settings_StringSetting_o *)0x0)) {
                                                        pSVar19 = Anticheat_ChatFilter__FilterBadWords
                                                                            ((pSVar8->fields)._value,
                                                                             (MethodInfo *)0x0);
                                                        pSVar19 = MiscExtensions__HexColor
                                                                            (pSVar19,(MethodInfo *)0x0);
                                                        pSVar16 = System_String__Concat_3af7470
                                                                            ("<b>",pSVar16,": </b>"
                                                                             ,pSVar19,(MethodInfo *)0x0);
                                                        pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                            (pUVar18,in_stack_ffffffffffffff28
                                                                             ,pSVar16,0,3,(MethodInfo *)0x0);
                                                        lVar13 = MethodInfo_Void_Add;
                                                        if (pSVar5 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar5->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar6 = (pSVar5->fields)._items;
                                                         if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar4 = (pSVar5->fields)._size;
                                                           if (uVar4 < (uint)pUVar6->max_length) {
                                                             (pSVar5->fields)._size = uVar4 + 1;
                                                             pUVar6->m_Items[(int)uVar4] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar4,
                                                                                pUVar17);
                                                             method_00 = extraout_RDX;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       method_00 = extraout_RDX_00;
                                                       }
                                                       pSVar16 = 
                                                       UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName
                                                                 (__this,pPStack_d0,method_00);
                                                       pSVar19 = UI_ScoreboardProfilePopup__GetDisplayUserId
                                                                           (__this,pPStack_d0,method_01);
                                                       tierLabel = (System_String_o **)auStack_48;
                                                       if (g_data_057ae4d4 == '\0') {
                                                         il2cpp_runtime_helper_023445d0(&"None");
                                                         g_data_057ae4d4 = '\x01';
                                                       }
                                                       auStack_48._0_8_ =
                                                            (System_Collections_Generic_List_T__o *)0x0;
                                                       bVar14 = 
                                                       PatreonEffects_PatreonHelper__TryGetRemoteTierLabel
                                                                 (pPStack_d0,tierLabel,(MethodInfo *)0x0);
                                                       if ((char)bVar14 == '\0') {
                                                         if ((char)(pPStack_d0->fields).IsLocal != '\0') {
                                                           tierLabel = (System_String_o **)auStack_48;
                                                           bVar14 = 
                                                       PatreonEffects_PatreonHelper__TryGetLocalTierLabel
                                                                 (tierLabel,(MethodInfo *)0x0);
                                                       if ((char)bVar14 != '\0') goto label_043e66c9;
                                                       }
                                                       tierLabel = &"None";
                                                       }
label_043e66c9:
                                                       pSVar27 = *tierLabel;
                                                       bVar14 = System_String__op_Inequality
                                                                          (pSVar27,"None",
                                                                           (MethodInfo *)0x0);
                                                       pSVar20 = Anticheat_ChatFilter__FilterBadWords
                                                                           (pSVar16,(MethodInfo *)0x0);
                                                       pSVar20 = MiscExtensions__HexColor
                                                                           (pSVar20,(MethodInfo *)0x0);
                                                       if ((char)bVar14 == '\0') {
                                                         if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                                           il2cpp_runtime_helper_02337ed0();
                                                         }
                                                         pPStack_d0 = (Photon_Realtime_Player_o *)
                                                                      MiscExtensions__HexColor
                                                                                ("No",
                                                                                 (MethodInfo *)0x0);
                                                       }
                                                       else {
                                                         pPStack_d0 = (Photon_Realtime_Player_o *)
                                                                      System_String__Concat_3af7150
                                                                                ("Thank you, ",pSVar20,
                                                                                 " for being a supporter.",
                                                                                 (MethodInfo *)0x0);
                                                       }
                                                       pUVar18 = (__this->fields).SinglePanel;
                                                       pSVar5 = (__this->fields)._items;
                                                       if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       pSVar16 = Anticheat_ChatFilter__FilterBadWords
                                                                           (pSVar16,(MethodInfo *)0x0);
                                                       if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       pSVar16 = MiscExtensions__HexColor
                                                                           (pSVar16,(MethodInfo *)0x0);
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>Display Name: </b>",pSVar16,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_ffffffffffffff28,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar13 = MethodInfo_Void_Add;
                                                       if (pSVar5 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar5->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar6 = (pSVar5->fields)._items;
                                                         if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar4 = (pSVar5->fields)._size;
                                                           if (uVar4 < (uint)pUVar6->max_length) {
                                                             (pSVar5->fields)._size = uVar4 + 1;
                                                             pUVar6->m_Items[(int)uVar4] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar4);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this->fields).SinglePanel;
                                                       pSVar5 = (__this->fields)._items;
                                                       pSVar16 = MiscExtensions__HexColor
                                                                           (pSVar19,(MethodInfo *)0x0);
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>User ID: </b>",pSVar16,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_ffffffffffffff28,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar13 = MethodInfo_Void_Add;
                                                       if (pSVar5 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar5->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar6 = (pSVar5->fields)._items;
                                                         if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar4 = (pSVar5->fields)._size;
                                                           if (uVar4 < (uint)pUVar6->max_length) {
                                                             (pSVar5->fields)._size = uVar4 + 1;
                                                             pUVar6->m_Items[(int)uVar4] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar4);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this->fields).SinglePanel;
                                                       pSVar5 = (__this->fields)._items;
                                                       pSVar16 = MiscExtensions__HexColor
                                                                           (pSVar27,(MethodInfo *)0x0);
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>Patreon Tier: </b>",pSVar16,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_ffffffffffffff28,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar13 = MethodInfo_Void_Add;
                                                       if (pSVar5 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar5->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar6 = (pSVar5->fields)._items;
                                                         if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar4 = (pSVar5->fields)._size;
                                                           if (uVar4 < (uint)pUVar6->max_length) {
                                                             (pSVar5->fields)._size = uVar4 + 1;
                                                             pUVar6->m_Items[(int)uVar4] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar4,
                                                                                pUVar17);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this->fields).SinglePanel;
                                                       pSVar5 = (__this->fields)._items;
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>Patreon Supporter: </b>",
                                                                            (System_String_o *)pPStack_d0,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_ffffffffffffff28,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar13 = MethodInfo_Void_Add;
                                                       if (pSVar5 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar5->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar6 = (pSVar5->fields)._items;
                                                         if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar4 = (pSVar5->fields)._size;
                                                           if (uVar4 < (uint)pUVar6->max_length) {
                                                             (pSVar5->fields)._size = uVar4 + 1;
                                                             pUVar6->m_Items[(int)uVar4] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar4,
                                                                                pUVar17);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0)
                                                                   + 0x70));
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
label_043e6a1f:
    auVar26 = il2cpp_runtime_helper_022b2c90();
    if (auVar26._8_4_ != 1) goto label_043e6a6b;
    plVar21 = (long *)__cxa_begin_catch(auVar26._0_8_);
    lVar13 = *plVar21;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_ffffffffffffff20;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
    __this_03.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)auStack_b8);
  } while (lVar13 == 0);
  il2cpp_runtime_helper_022fefe0(lVar13);
label_043e6a6b:
  __this_04.fields._8_8_ = in_stack_ffffffffffffff20;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
  __this_04.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)auStack_b8);
  _Unwind_Resume(auVar26._0_8_);
}


// UI.ScoreboardProfilePopup$$GetAuthoritativeDisplayName
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43e6d90

System_String_o *
UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_NameSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  Photon_Realtime_Player_o *player_00;
  Photon_Realtime_Player_o *player_01;
  UI_ScoreboardProfilePopup_o *value;
  System_String_o **ppSVar6;
  System_String_o *pSStack_58;
  Photon_Realtime_Player_o *pPStack_50;
  UI_ScoreboardProfilePopup_o *pUStack_48;
  System_String_o *pSStack_38;
  Photon_Realtime_Player_o *pPStack_30;
  UI_ScoreboardProfilePopup_o *pUStack_28;
  System_String_o *local_18;
  
  player_00 = player;
  value = __this;
  if (g_data_057ae4d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    value = (UI_ScoreboardProfilePopup_o *)&"N/A";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4d2 = '\x01';
  }
  local_18 = (System_String_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar4 = PatreonEffects_PatreonHelper__TryGetRemoteDisplayName(player,&local_18,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return local_18;
    }
    value = *(UI_ScoreboardProfilePopup_o **)&(player->fields)._HasRejoined_k__BackingField;
    player_00 = (Photon_Realtime_Player_o *)0x0;
    bVar4 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return *(System_String_o **)&(player->fields)._HasRejoined_k__BackingField;
    }
  }
  pSVar1 = (__this->fields)._profile;
  if (pSVar1 == (Settings_ProfileSettings_o *)0x0) {
label_043e6e33:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
    bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
      return pSVar5;
    }
    return "N/A";
  }
  pSVar2 = (pSVar1->fields).Name;
  if (pSVar2 != (Settings_NameSetting_o *)0x0) {
    value = (UI_ScoreboardProfilePopup_o *)(pSVar2->fields)._value;
    player_00 = (Photon_Realtime_Player_o *)0x0;
    bVar4 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') goto label_043e6e33;
    pSVar1 = (__this->fields)._profile;
    if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).Name, pSVar2 != (Settings_NameSetting_o *)0x0)) {
      return (pSVar2->fields)._value;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_28 = __this;
  pPStack_30 = player;
  if (g_data_057ae4d3 == '\0') {
    pUStack_48 = (UI_ScoreboardProfilePopup_o *)0x43e6ef4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStack_48 = (UI_ScoreboardProfilePopup_o *)0x43e6f00;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae4d3 = '\x01';
  }
  pSStack_38 = (System_String_o *)0x0;
  if (player_00 != (Photon_Realtime_Player_o *)0x0) {
    pUStack_48 = (UI_ScoreboardProfilePopup_o *)0x43e6f20;
    bVar4 = System_String__IsNullOrEmpty((player_00->fields).nickName,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      ppSVar6 = &(player_00->fields).nickName;
      goto label_043e6f87;
    }
    ppSVar6 = &pSStack_38;
    pUStack_48 = (UI_ScoreboardProfilePopup_o *)0x43e6f36;
    bVar4 = PatreonEffects_PatreonHelper__TryGetRemoteAccountId(player_00,ppSVar6,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') goto label_043e6f87;
  }
  pSVar1 = (value->fields)._profile;
  ppSVar6 = &"N/A";
  if ((pSVar1 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar3 = (pSVar1->fields).ID, pSVar3 == (Settings_StringSetting_o *)0x0)) {
label_043e6f87:
    return *ppSVar6;
  }
  player_01 = (Photon_Realtime_Player_o *)0x0;
  pUStack_48 = (UI_ScoreboardProfilePopup_o *)0x43e6f61;
  bVar4 = System_String__IsNullOrEmpty((pSVar3->fields)._value,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') goto label_043e6f87;
  pSVar1 = (value->fields)._profile;
  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar3 = (pSVar1->fields).ID, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    ppSVar6 = &(pSVar3->fields)._value;
    goto label_043e6f87;
  }
  pUStack_48 = (UI_ScoreboardProfilePopup_o *)0x43e6f99;
  pSStack_58 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pPStack_50 = player_00;
  pUStack_48 = value;
  if (g_data_057ae4d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae4d4 = '\x01';
  }
  pSStack_58 = (System_String_o *)0x0;
  if (player_01 == (Photon_Realtime_Player_o *)0x0) {
label_043e6fee:
    bVar4 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&pSStack_58,(MethodInfo *)0x0);
    ppSVar6 = &pSStack_58;
    if ((char)bVar4 != '\0') goto label_043e7003;
  }
  else {
    bVar4 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(player_01,&pSStack_58,(MethodInfo *)0x0);
    ppSVar6 = &pSStack_58;
    if ((char)bVar4 != '\0') goto label_043e7003;
    if ((char)(player_01->fields).IsLocal != '\0') goto label_043e6fee;
  }
  ppSVar6 = (System_String_o **)&"None";
label_043e7003:
  return *ppSVar6;
}


// UI.ScoreboardProfilePopup$$GetDisplayUserId
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetDisplayUserId (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43e6ed0

System_String_o *
UI_ScoreboardProfilePopup__GetDisplayUserId
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool_conflict bVar3;
  Photon_Realtime_Player_o *player_00;
  System_String_o **ppSVar4;
  System_String_o *local_40;
  Photon_Realtime_Player_o *pPStack_38;
  UI_ScoreboardProfilePopup_o *pUStack_30;
  System_String_o *local_20;
  
  if (g_data_057ae4d3 == '\0') {
    pUStack_30 = (UI_ScoreboardProfilePopup_o *)0x43e6ef4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pUStack_30 = (UI_ScoreboardProfilePopup_o *)0x43e6f00;
    il2cpp_runtime_helper_023445d0(&"N/A");
    g_data_057ae4d3 = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pUStack_30 = (UI_ScoreboardProfilePopup_o *)0x43e6f20;
    bVar3 = System_String__IsNullOrEmpty((player->fields).nickName,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      ppSVar4 = &(player->fields).nickName;
      goto label_043e6f87;
    }
    ppSVar4 = &local_20;
    pUStack_30 = (UI_ScoreboardProfilePopup_o *)0x43e6f36;
    bVar3 = PatreonEffects_PatreonHelper__TryGetRemoteAccountId(player,ppSVar4,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto label_043e6f87;
  }
  pSVar1 = (__this->fields)._profile;
  ppSVar4 = (System_String_o **)&"N/A";
  if ((pSVar1 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ID, pSVar2 == (Settings_StringSetting_o *)0x0)) {
label_043e6f87:
    return *ppSVar4;
  }
  player_00 = (Photon_Realtime_Player_o *)0x0;
  pUStack_30 = (UI_ScoreboardProfilePopup_o *)0x43e6f61;
  bVar3 = System_String__IsNullOrEmpty((pSVar2->fields)._value,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') goto label_043e6f87;
  pSVar1 = (__this->fields)._profile;
  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ID, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    ppSVar4 = &(pSVar2->fields)._value;
    goto label_043e6f87;
  }
  pUStack_30 = (UI_ScoreboardProfilePopup_o *)0x43e6f99;
  local_40 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  pPStack_38 = player;
  pUStack_30 = __this;
  if (g_data_057ae4d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae4d4 = '\x01';
  }
  local_40 = (System_String_o *)0x0;
  if (player_00 == (Photon_Realtime_Player_o *)0x0) {
label_043e6fee:
    bVar3 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&local_40,(MethodInfo *)0x0);
    ppSVar4 = &local_40;
    if ((char)bVar3 != '\0') goto label_043e7003;
  }
  else {
    bVar3 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(player_00,&local_40,(MethodInfo *)0x0);
    ppSVar4 = &local_40;
    if ((char)bVar3 != '\0') goto label_043e7003;
    if ((char)(player_00->fields).IsLocal != '\0') goto label_043e6fee;
  }
  ppSVar4 = (System_String_o **)&"None";
label_043e7003:
  return *ppSVar4;
}


// UI.ScoreboardProfilePopup$$GetPatreonTierLabel
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetPatreonTierLabel (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43e6fa0

System_String_o *
UI_ScoreboardProfilePopup__GetPatreonTierLabel
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o **ppSVar2;
  System_String_o *pSStack_18;
  
  if (g_data_057ae4d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae4d4 = '\x01';
  }
  pSStack_18 = (System_String_o *)0x0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
label_043e6fee:
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&pSStack_18,(MethodInfo *)0x0);
    ppSVar2 = &pSStack_18;
    if ((char)bVar1 != '\0') goto label_043e7003;
  }
  else {
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(player,&pSStack_18,(MethodInfo *)0x0);
    ppSVar2 = &pSStack_18;
    if ((char)bVar1 != '\0') goto label_043e7003;
    if ((char)(player->fields).IsLocal != '\0') goto label_043e6fee;
  }
  ppSVar2 = (System_String_o **)&"None";
label_043e7003:
  return *ppSVar2;
}


// UI.ScoreboardProfilePopup$$AddEffectRow
// il2cpp: void UI_ScoreboardProfilePopup__AddEffectRow (UI_ScoreboardProfilePopup_o* __this, UI_ElementStyle_o* style, Photon_Realtime_Player_o* player, System_String_o* labelKey, System_String_o* value, bool enabled, System_String_o* effectName, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, const MethodInfo* method);
// 0x43e6ab0

void UI_ScoreboardProfilePopup__AddEffectRow
               (UI_ScoreboardProfilePopup_o *__this,UI_ElementStyle_o *style,Photon_Realtime_Player_o *player,
               System_String_o *labelKey,System_String_o *value,bool_conflict enabled,
               System_String_o *effectName,UnityEngine_Color_o colorA,UnityEngine_Color_o colorB,
               UnityEngine_Color_o colorC,UnityEngine_Color_o colorD,MethodInfo *method)

{
  int *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  int32_t effect;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool_conflict bVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  System_String_o *pSVar18;
  PatreonEffects_EffectText_o *pPVar19;
  UnityEngine_GameObject_o *item;
  PatreonEffects_EffectText_o *__this_00;
  Photon_Realtime_Player_o *pPVar20;
  Photon_Realtime_Player_o *player_00;
  PatreonEffects_EffectText_o *pPVar21;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  undefined4 in_XMM4_Dc;
  undefined4 in_XMM4_Dd;
  undefined4 in_XMM5_Dc;
  undefined4 in_XMM5_Dd;
  undefined4 in_XMM6_Dc;
  undefined4 in_XMM6_Dd;
  undefined4 in_XMM7_Dc;
  undefined4 in_XMM7_Dd;
  UnityEngine_Color_o colorA_00;
  UnityEngine_Color_o colorB_00;
  UnityEngine_Color_o colorD_00;
  UnityEngine_Color_o colorC_00;
  System_String_o *pSStack_130;
  Photon_Realtime_Player_o *pPStack_128;
  PatreonEffects_EffectText_o *pPStack_120;
  System_String_o *pSStack_110;
  Photon_Realtime_Player_o *pPStack_108;
  PatreonEffects_EffectText_o *pPStack_100;
  System_String_o *pSStack_f8;
  System_String_o *pSStack_f0;
  PatreonEffects_EffectText_o *pPStack_e8;
  System_String_o *pSStack_e0;
  int32_t local_cc;
  Photon_Realtime_Player_o *local_c8;
  Photon_Realtime_Player_o *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_48._8_4_ = in_XMM7_Dc;
  local_48._0_8_ = colorD.fields._8_8_;
  local_48._12_4_ = in_XMM7_Dd;
  local_58._8_4_ = in_XMM6_Dc;
  local_58._0_8_ = colorD.fields._0_8_;
  local_58._12_4_ = in_XMM6_Dd;
  local_68._8_4_ = in_XMM5_Dc;
  local_68._0_8_ = colorC.fields._8_8_;
  local_68._12_4_ = in_XMM5_Dd;
  local_78._8_4_ = in_XMM4_Dc;
  local_78._0_8_ = colorC.fields._0_8_;
  local_78._12_4_ = in_XMM4_Dd;
  local_88._8_4_ = in_XMM3_Dc;
  local_88._0_8_ = colorB.fields._8_8_;
  local_88._12_4_ = in_XMM3_Dd;
  local_98._8_4_ = in_XMM2_Dc;
  local_98._0_8_ = colorB.fields._0_8_;
  local_98._12_4_ = in_XMM2_Dd;
  local_a8._8_4_ = in_XMM1_Dc;
  local_a8._0_8_ = colorA.fields._8_8_;
  local_a8._12_4_ = in_XMM1_Dd;
  local_b8._8_4_ = in_XMM0_Dc;
  local_b8._0_8_ = colorA.fields._0_8_;
  local_b8._12_4_ = in_XMM0_Dd;
  local_c8 = (Photon_Realtime_Player_o *)style;
  local_c0 = player;
  if (g_data_057ae4d5 == '\0') {
    pSStack_e0 = (System_String_o *)0x43e6b1a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    pSStack_e0 = (System_String_o *)0x43e6b26;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    pSStack_e0 = (System_String_o *)0x43e6b32;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_e0 = (System_String_o *)0x43e6b3e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    pSStack_e0 = (System_String_o *)0x43e6b4a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_e0 = (System_String_o *)0x43e6b56;
    il2cpp_runtime_helper_023445d0(&"<b>");
    pSStack_e0 = (System_String_o *)0x43e6b62;
    il2cpp_runtime_helper_023445d0(&": </b>");
    g_data_057ae4d5 = '\x01';
  }
  local_cc = 0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    pSStack_e0 = (System_String_o *)0x43e6b89;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_e0 = (System_String_o *)0x43e6b93;
  pSVar16 = UI_UIManager__GetLocaleCommon(labelKey,(MethodInfo *)0x0);
  pSStack_e0 = (System_String_o *)0x43e6bb1;
  pSVar16 = System_String__Concat_3af7150("<b>",pSVar16,": </b>",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    pSStack_e0 = (System_String_o *)0x43e6bcc;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_e0 = (System_String_o *)0x43e6bd6;
  pSVar17 = Anticheat_ChatFilter__FilterBadWords(value,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    pSStack_e0 = (System_String_o *)0x43e6bf1;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_e0 = (System_String_o *)0x43e6bfb;
  pSVar17 = MiscExtensions__HexColor(pSVar17,(MethodInfo *)0x0);
  local_cc = 0;
  if ((char)enabled == '\0') {
label_043e6ce7:
    pPVar19 = (PatreonEffects_EffectText_o *)(__this->fields).SinglePanel;
    __this_00 = (PatreonEffects_EffectText_o *)(__this->fields)._items;
    pSStack_e0 = (System_String_o *)0x43e6d01;
    pSVar18 = System_String__Concat_3ae5ba0(pSVar16,pSVar17,(MethodInfo *)0x0);
    pSStack_e0 = (System_String_o *)0x43e6d1c;
    pPVar20 = local_c8;
    item = UI_ElementFactory__CreateDefaultLabel
                     ((UnityEngine_Transform_o *)pPVar19,(UI_ElementStyle_o *)local_c8,pSVar18,0,3,
                      (MethodInfo *)0x0);
    pPVar21 = pPVar19;
    if (__this_00 != (PatreonEffects_EffectText_o *)0x0) {
label_043e6d21:
      lVar6 = MethodInfo_Void_Add;
      piVar1 = (int *)((long)&(__this_00->fields).m_CancellationTokenSource + 4);
      *piVar1 = *piVar1 + 1;
      lVar5 = (__this_00->fields).m_CachedPtr;
      pPVar21 = pPVar19;
      if (lVar5 != 0) {
        uVar2 = *(uint *)&(__this_00->fields).m_CancellationTokenSource;
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)&(__this_00->fields).m_CancellationTokenSource = uVar2 + 1;
          *(UnityEngine_GameObject_o **)(lVar5 + 0x20 + (long)(int)uVar2 * 8) = item;
          pSStack_e0 = (System_String_o *)0x43e6d5c;
          il2cpp_runtime_helper_022b4080(lVar5 + (long)(int)uVar2 * 8 + 0x20,item);
        }
        else {
          pSStack_e0 = (System_String_o *)0x43e6d78;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        return;
      }
    }
  }
  else {
    pSStack_e0 = (System_String_o *)0x43e6c1b;
    bVar15 = PatreonEffects_PatreonHelper__HasNameEffectAccess(local_c0,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') goto label_043e6ce7;
    pSStack_e0 = (System_String_o *)0x43e6c37;
    bVar15 = PatreonEffects_NameEffectPresets__TryResolve(effectName,&local_cc,(MethodInfo *)0x0);
    effect = local_cc;
    if ((char)bVar15 == '\0') goto label_043e6ce7;
    if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
      pSStack_e0 = (System_String_o *)0x43e6c5b;
      il2cpp_runtime_helper_02337ed0();
    }
    auVar14 = local_48;
    auVar13 = local_58;
    auVar12 = local_68;
    auVar11 = local_78;
    auVar10 = local_88;
    auVar9 = local_98;
    auVar8 = local_a8;
    auVar7 = local_b8;
    pSStack_e0 = (System_String_o *)0x43e6c95;
    colorA_00.fields.b = (float)local_a8._0_4_;
    colorA_00.fields.a = (float)local_a8._4_4_;
    colorA_00.fields.r = (float)local_b8._0_4_;
    colorA_00.fields.g = (float)local_b8._4_4_;
    colorB_00.fields.b = (float)local_88._0_4_;
    colorB_00.fields.a = (float)local_88._4_4_;
    colorB_00.fields.r = (float)local_98._0_4_;
    colorB_00.fields.g = (float)local_98._4_4_;
    colorD_00.fields.b = (float)local_48._0_4_;
    colorD_00.fields.a = (float)local_48._4_4_;
    colorD_00.fields.r = (float)local_58._0_4_;
    colorD_00.fields.g = (float)local_58._4_4_;
    colorC_00.fields.b = (float)local_68._0_4_;
    colorC_00.fields.a = (float)local_68._4_4_;
    colorC_00.fields.r = (float)local_78._0_4_;
    colorC_00.fields.g = (float)local_78._4_4_;
    local_b8 = auVar7;
    local_a8 = auVar8;
    local_98 = auVar9;
    local_88 = auVar10;
    local_78 = auVar11;
    local_68 = auVar12;
    local_58 = auVar13;
    local_48 = auVar14;
    pSVar18 = PatreonEffects_EffectText__Compose
                        (pSVar17,effect,colorA_00,colorB_00,colorC_00,colorD_00,(MethodInfo *)0x0);
    __this_00 = (PatreonEffects_EffectText_o *)(__this->fields).SinglePanel;
    pSStack_e0 = (System_String_o *)0x43e6ca7;
    pSVar18 = System_String__Concat_3ae5ba0(pSVar16,pSVar18,(MethodInfo *)0x0);
    pSStack_e0 = (System_String_o *)0x43e6cc2;
    pPVar20 = local_c8;
    pPVar21 = __this_00;
    pPVar19 = UI_ElementFactory__CreateEffectText
                        ((UnityEngine_Transform_o *)__this_00,(UI_ElementStyle_o *)local_c8,pSVar18,0,3,
                         (MethodInfo *)0x0);
    if (pPVar19 != (PatreonEffects_EffectText_o *)0x0) {
      __this_00 = (PatreonEffects_EffectText_o *)(__this->fields)._items;
      pPVar20 = (Photon_Realtime_Player_o *)0x0;
      pSStack_e0 = (System_String_o *)0x43e6cdd;
      item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar19,(MethodInfo *)0x0);
      pPVar21 = pPVar19;
      if (__this_00 == (PatreonEffects_EffectText_o *)0x0) goto label_043e6d8a;
      goto label_043e6d21;
    }
  }
label_043e6d8a:
  pSStack_e0 = (System_String_o *)0x43e6d8f;
  pSStack_f0 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  player_00 = pPVar20;
  pPVar19 = pPVar21;
  pPStack_e8 = __this_00;
  pSStack_e0 = pSVar16;
  if (g_data_057ae4d2 == '\0') {
    pSStack_f8 = (System_String_o *)0x43e6daf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    pSStack_f8 = (System_String_o *)0x43e6dbb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pPVar19 = (PatreonEffects_EffectText_o *)&"N/A";
    pSStack_f8 = (System_String_o *)0x43e6dc7;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4d2 = '\x01';
  }
  pSStack_f0 = (System_String_o *)0x0;
  if (pPVar20 != (Photon_Realtime_Player_o *)0x0) {
    pSStack_f8 = (System_String_o *)0x43e6de8;
    bVar15 = PatreonEffects_PatreonHelper__TryGetRemoteDisplayName(pPVar20,&pSStack_f0,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      return;
    }
    pPVar19 = *(PatreonEffects_EffectText_o **)&(pPVar20->fields)._HasRejoined_k__BackingField;
    player_00 = (Photon_Realtime_Player_o *)0x0;
    pSStack_f8 = (System_String_o *)0x43e6e03;
    bVar15 = System_String__IsNullOrEmpty((System_String_o *)pPVar19,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      return;
    }
  }
  pSVar3 = pPVar21[1].fields._segments;
  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    pvVar4 = pSVar3[1].monitor;
    if (pvVar4 != (void *)0x0) {
      pPVar19 = *(PatreonEffects_EffectText_o **)((long)pvVar4 + 0x18);
      player_00 = (Photon_Realtime_Player_o *)0x0;
      pSStack_f8 = (System_String_o *)0x43e6e2f;
      bVar15 = System_String__IsNullOrEmpty((System_String_o *)pPVar19,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') goto label_043e6e33;
      pSVar3 = pPVar21[1].fields._segments;
      if ((pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
         (pSVar3[1].monitor != (void *)0x0)) {
        return;
      }
    }
    pSStack_f8 = (System_String_o *)0x43e6ec4;
    il2cpp_runtime_helper_022b2c90();
    pPStack_108 = pPVar20;
    pPStack_100 = pPVar21;
    pSStack_f8 = pSVar17;
    if (g_data_057ae4d3 == '\0') {
      pPStack_120 = (PatreonEffects_EffectText_o *)0x43e6ef4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      pPStack_120 = (PatreonEffects_EffectText_o *)0x43e6f00;
      il2cpp_runtime_helper_023445d0(&"N/A");
      g_data_057ae4d3 = '\x01';
    }
    pSStack_110 = (System_String_o *)0x0;
    if (player_00 != (Photon_Realtime_Player_o *)0x0) {
      pPStack_120 = (PatreonEffects_EffectText_o *)0x43e6f20;
      bVar15 = System_String__IsNullOrEmpty((player_00->fields).nickName,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        return;
      }
      pPStack_120 = (PatreonEffects_EffectText_o *)0x43e6f36;
      bVar15 = PatreonEffects_PatreonHelper__TryGetRemoteAccountId(player_00,&pSStack_110,(MethodInfo *)0x0);
      if ((char)bVar15 != '\0') {
        return;
      }
    }
    pSVar3 = pPVar19[1].fields._segments;
    if ((pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
       (lVar5 = *(long *)&pSVar3[2].fields._size, lVar5 != 0)) {
      pPVar20 = (Photon_Realtime_Player_o *)0x0;
      pPStack_120 = (PatreonEffects_EffectText_o *)0x43e6f61;
      bVar15 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar5 + 0x18),(MethodInfo *)0x0);
      if (((char)bVar15 == '\0') &&
         ((pSVar3 = pPVar19[1].fields._segments,
          pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0 ||
          (lVar5._0_4_ = pSVar3[2].fields._size, lVar5._4_4_ = pSVar3[2].fields._version, lVar5 == 0)))) {
        pPStack_120 = (PatreonEffects_EffectText_o *)0x43e6f99;
        pSStack_130 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
        pPStack_128 = player_00;
        pPStack_120 = pPVar19;
        if (g_data_057ae4d4 == '\0') {
          il2cpp_runtime_helper_023445d0(&"None");
          g_data_057ae4d4 = '\x01';
        }
        pSStack_130 = (System_String_o *)0x0;
        if ((pPVar20 == (Photon_Realtime_Player_o *)0x0) ||
           ((bVar15 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel
                                (pPVar20,&pSStack_130,(MethodInfo *)0x0), (char)bVar15 == '\0' &&
            ((char)(pPVar20->fields).IsLocal != '\0')))) {
          PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&pSStack_130,(MethodInfo *)0x0);
        }
        return;
      }
    }
    return;
  }
label_043e6e33:
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pSStack_f8 = (System_String_o *)0x43e6e4b;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_f8 = (System_String_o *)0x43e6e52;
  pSVar16 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  pSStack_f8 = (System_String_o *)0x43e6e5c;
  bVar15 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    pSStack_f8 = (System_String_o *)0x43e6e83;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_f8 = (System_String_o *)0x43e6e8a;
  ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  return;
}


// UI.ScoreboardProfilePopup$$SetupBottomButtons
// il2cpp: void UI_ScoreboardProfilePopup__SetupBottomButtons (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x43e5a20

void UI_ScoreboardProfilePopup__SetupBottomButtons(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_ProfileSettings_o **ppSVar2;
  byte bVar3;
  int length;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  UnityEngine_GameObject_array *pUVar5;
  Settings_ProfileSettings_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_NameSetting_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  Settings_ColorSetting_o *pSVar10;
  Utility_Color255_o *pUVar11;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  undefined8 obj;
  uint uVar12;
  bool_conflict bVar13;
  UI_ScoreboardProfilePopup_o *__this_05;
  long lVar14;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *pIVar15;
  System_String_o *pSVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  System_String_o *pSVar19;
  System_String_o *pSVar20;
  long *plVar21;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o **tierLabel;
  System_String_o *unaff_RBP;
  UI_ScoreboardProfilePopup_o *__this_06;
  long unaff_R12;
  ulong unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 uVar22;
  undefined4 uVar23;
  UnityEngine_Color_o UVar24;
  UnityEngine_Color_o UVar25;
  UnityEngine_Color_o colorA;
  UnityEngine_Color_o colorA_00;
  undefined1 auVar26 [12];
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorC;
  UnityEngine_Color_o colorC_00;
  System_String_o *in_stack_fffffffffffffed0;
  System_String_o *pSVar27;
  MethodInfo *in_stack_fffffffffffffed8;
  UI_ElementStyle_o *in_stack_fffffffffffffee0;
  UI_ScoreboardProfilePopup_o *pUStack_118;
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  UnityEngine_Object_o *pUStack_80;
  UI_ScoreboardProfilePopup_o *pUStack_78;
  long lStack_70;
  UI_ScoreboardProfilePopup_o *pUStack_68;
  UnityEngine_Events_UnityAction_o *pUStack_60;
  ulong uStack_58;
  System_String_o *pSStack_50;
  UI_ScoreboardProfilePopup_o *pUStack_40;
  UI_ElementStyle_o *pUStack_38;
  
  if (g_data_057ae4d6 == '\0') {
    pSStack_50 = (System_String_o *)0x43e5a46;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    pSStack_50 = (System_String_o *)0x43e5a52;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_50 = (System_String_o *)0x43e5a5e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    pSStack_50 = (System_String_o *)0x43e5a6a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    pSStack_50 = (System_String_o *)0x43e5a76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_50 = (System_String_o *)0x43e5a82;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStack_50 = (System_String_o *)0x43e5a8e;
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae4d6 = '\x01';
  }
  pSStack_50 = (System_String_o *)0x43e5aa9;
  uVar12 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                     (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  onClick = (UnityEngine_Events_UnityAction_o *)(ulong)uVar12;
  pSStack_50 = (System_String_o *)0x43e5ac0;
  __this_05 = (UI_ScoreboardProfilePopup_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pSStack_50 = (System_String_o *)0x43e5ad2;
  pUStack_38 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  pSStack_50 = (System_String_o *)0x43e5af7;
  UI_ElementStyle___ctor(pUStack_38,uVar12,120.0,20.0,(System_String_o *)__this_05,(MethodInfo *)0x0);
  pUStack_118 = (UI_ScoreboardProfilePopup_o *)0x1;
  pSStack_50 = (System_String_o *)0x43e5b0b;
  __this_06 = TypeInfo_string;
  lVar14 = il2cpp_runtime_helper_022b2a40();
  if (lVar14 == 0) {
label_043e5c4a:
    lVar14 = unaff_R12;
    pSStack_50 = (System_String_o *)0x43e5c4f;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar14 + 0x18) != 0) {
    *(undefined8 *)(lVar14 + 0x20) = "Back";
    pSStack_50 = (System_String_o *)0x43e5b3c;
    il2cpp_runtime_helper_022b4080(lVar14 + 0x20);
    if (0 < *(int *)(lVar14 + 0x18)) {
      unaff_R15 = 0;
      pUStack_40 = __this;
      do {
        __this = pUStack_40;
        pSStack_50 = (System_String_o *)0x43e5bd1;
        __this_05 = (UI_ScoreboardProfilePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
        pUStack_118 = (UI_ScoreboardProfilePopup_o *)0x0;
        pSStack_50 = (System_String_o *)0x43e5bde;
        __this_06 = __this_05;
        UI_ScoreboardProfilePopup___c__DisplayClass18_0___ctor
                  ((UI_ScoreboardProfilePopup___c__DisplayClass18_0_o *)__this_05,(MethodInfo *)0x0);
        unaff_R12 = lVar14;
        if (__this_05 == (UI_ScoreboardProfilePopup_o *)0x0) goto label_043e5c4a;
        __this_06 = (UI_ScoreboardProfilePopup_o *)&(__this_05->fields).m_CancellationTokenSource;
        (__this_05->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
        pSStack_50 = (System_String_o *)0x43e5bf3;
        pUStack_118 = __this;
        il2cpp_runtime_helper_022b4080();
        if (*(uint *)(lVar14 + 0x18) <= unaff_R15) goto label_043e5c4f;
        (__this_05->fields).m_CachedPtr = *(intptr_t *)(lVar14 + 0x20 + unaff_R15 * 8);
        pSStack_50 = (System_String_o *)0x43e5c12;
        il2cpp_runtime_helper_022b4080(&__this_05->fields);
        pUVar18 = (__this->fields).BottomBar;
        pSVar16 = (System_String_o *)(__this_05->fields).m_CachedPtr;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          pSStack_50 = (System_String_o *)0x43e5c36;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = (System_String_o *)0x43e5b6a;
        unaff_RBP = UI_UIManager__GetLocaleCommon(pSVar16,(MethodInfo *)0x0);
        pSStack_50 = (System_String_o *)0x43e5b7c;
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pSStack_50 = (System_String_o *)0x43e5b96;
        UnityEngine_Events_UnityAction___ctor();
        pSStack_50 = (System_String_o *)0x43e5baf;
        UI_ElementFactory__CreateTextButton(pUVar18,pUStack_38,unaff_RBP,0.0,onClick,(MethodInfo *)0x0);
        unaff_R15 = unaff_R15 + 1;
      } while ((long)unaff_R15 < (long)*(int *)(lVar14 + 0x18));
    }
    return;
  }
label_043e5c4f:
  pSStack_50 = (System_String_o *)0x43e5c54;
  il2cpp_runtime_helper_022b2ca0();
  pUStack_78 = __this_05;
  lStack_70 = lVar14;
  pUStack_68 = __this;
  pUStack_60 = onClick;
  uStack_58 = unaff_R15;
  pSStack_50 = unaff_RBP;
  if (g_data_057ae4d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Guild");
    il2cpp_runtime_helper_023445d0(&"<b>");
    il2cpp_runtime_helper_023445d0(&"<b>Display Name: </b>");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"<b>Patreon Tier: </b>");
    il2cpp_runtime_helper_023445d0(&"Thank you, ");
    il2cpp_runtime_helper_023445d0(&"Social");
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/");
    il2cpp_runtime_helper_023445d0(&": </b>");
    il2cpp_runtime_helper_023445d0(&" for being a supporter.");
    il2cpp_runtime_helper_023445d0(&"<b>User ID: </b>");
    il2cpp_runtime_helper_023445d0(&"About");
    il2cpp_runtime_helper_023445d0(&"<b>Patreon Supporter: </b>");
    il2cpp_runtime_helper_023445d0(&"No");
    g_data_057ae4d1 = '\x01';
  }
  auStack_100._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_100._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_100._16_8_ = (UnityEngine_Object_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this_06,(MethodInfo *)0x0);
  pSVar4 = (__this_06->fields)._items;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043e6a1f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,
             (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  auStack_100._16_8_ = pUStack_80;
  auStack_100._0_8_ = auStack_90._0_8_;
  auStack_100._8_8_ = auStack_90._8_8_;
  while (__this_01.fields._8_8_ = in_stack_fffffffffffffed8,
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0,
        __this_01.fields._current = (Il2CppObject *)in_stack_fffffffffffffee0,
        bVar13 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_01,(MethodInfo_321A1D0 *)auStack_100), obj = auStack_100._16_8_,
        (char)bVar13 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
  }
  __this_02.fields._8_8_ = in_stack_fffffffffffffed8;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
  __this_02.fields._current = (Il2CppObject *)in_stack_fffffffffffffee0;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_02,(MethodInfo_321A1C0 *)auStack_100);
  do {
    pSVar4 = (__this_06->fields)._items;
    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (((pUStack_118 != (UI_ScoreboardProfilePopup_o *)0x0) &&
          (__this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                        (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
          __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
         (pIVar15 = System_Collections_Generic_Dictionary_int__object___get_Item
                              (__this_00,*(int32_t *)&(pUStack_118->fields).m_CancellationTokenSource,
                               MethodInfo_PlayerInfo_get_Item), pIVar15 != (Il2CppObject *)0x0)) {
        ppSVar2 = &(__this_06->fields)._profile;
        (__this_06->fields)._profile = (Settings_ProfileSettings_o *)pIVar15[2].klass;
        il2cpp_runtime_helper_022b4080(ppSVar2);
        pSVar16 = (System_String_o *)
                  (*(__this_06->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (__this_06,(__this_06->klass->vtable)._4_get_ThemePanel.method);
        in_stack_fffffffffffffee0 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(in_stack_fffffffffffffee0,0x16,120.0,20.0,pSVar16,(MethodInfo *)0x0);
        pUVar17 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this_06->fields).SinglePanel,25.0,4,(MethodInfo *)0x0);
        if ((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar18 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
           pUVar18 != (UnityEngine_Transform_o *)0x0)) {
          pSVar4 = (__this_06->fields)._items;
          pUVar17 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
          lVar14 = MethodInfo_Void_Add;
          if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar5 = (pSVar4->fields)._items;
            if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
              uVar12 = (pSVar4->fields)._size;
              if (uVar12 < (uint)pUVar5->max_length) {
                (pSVar4->fields)._size = uVar12 + 1;
                pUVar5->m_Items[(int)uVar12] = pUVar17;
                il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12);
                pSVar6 = *ppSVar2;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar17,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                pSVar6 = *ppSVar2;
              }
              if ((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                 (pSVar7 = (pSVar6->fields).ProfileIcon, pSVar7 != (Settings_StringSetting_o *)0x0)) {
                pSVar16 = (pSVar7->fields)._value;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar16 = UI_UIManager__GetProfileIcon(pSVar16,(MethodInfo *)0x0);
                pSVar16 = System_String__Concat_3ae5ba0("Icons/Profile/",pSVar16,(MethodInfo *)0x0);
                uVar22 = 0;
                uVar23 = 0;
                UI_ElementFactory__CreateRawImage
                          (pUVar18,in_stack_fffffffffffffee0,pSVar16,256.0,256.0,(MethodInfo *)0x0);
                pSVar6 = *ppSVar2;
                if (((((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                      (pSVar8 = (pSVar6->fields).Name, pSVar8 != (Settings_NameSetting_o *)0x0)) &&
                     (pSVar9 = (pSVar6->fields).NameEffectEnabled, pSVar9 != (Settings_BoolSetting_o *)0x0))
                    && ((pSVar7 = (pSVar6->fields).NameEffect, pSVar7 != (Settings_StringSetting_o *)0x0 &&
                        (pSVar10 = (pSVar6->fields).NameEffectColorA,
                        pSVar10 != (Settings_ColorSetting_o *)0x0)))) &&
                   (pUVar11 = (pSVar10->fields)._value, pUVar11 != (Utility_Color255_o *)0x0)) {
                  pSVar16 = (pSVar8->fields)._value;
                  bVar3 = *(byte *)((long)&(pSVar9->fields).DefaultValue + 1);
                  pSVar19 = (pSVar7->fields)._value;
                  UVar24 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                  if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                     (pSVar10 = ((*ppSVar2)->fields).NameEffectColorB,
                     pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                    auStack_a0._8_4_ = uVar22;
                    auStack_a0._0_8_ = UVar24.fields._8_8_;
                    auStack_a0._12_4_ = uVar23;
                    pUVar11 = (pSVar10->fields)._value;
                    if (pUVar11 != (Utility_Color255_o *)0x0) {
                      UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                      if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                         (pSVar10 = ((*ppSVar2)->fields).NameEffectColorC,
                         pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                        auStack_c0._8_4_ = uVar22;
                        auStack_c0._0_8_ = UVar25.fields._8_8_;
                        auStack_c0._12_4_ = uVar23;
                        auStack_b0._8_4_ = extraout_XMM0_Dc;
                        auStack_b0._0_8_ = UVar25.fields._0_8_;
                        auStack_b0._12_4_ = extraout_XMM0_Dd;
                        pUVar11 = (pSVar10->fields)._value;
                        if (pUVar11 != (Utility_Color255_o *)0x0) {
                          UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                          if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                             (pSVar10 = ((*ppSVar2)->fields).NameEffectColorD,
                             pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                            auStack_100._40_4_ = uVar22;
                            auStack_100._32_8_ = UVar25.fields._8_8_;
                            auStack_100._44_4_ = uVar23;
                            auStack_d0._8_4_ = extraout_XMM0_Dc_00;
                            auStack_d0._0_8_ = UVar25.fields._0_8_;
                            auStack_d0._12_4_ = extraout_XMM0_Dd_00;
                            pUVar11 = (pSVar10->fields)._value;
                            if (pUVar11 != (Utility_Color255_o *)0x0) {
                              UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                              uVar22 = auStack_a0._8_4_;
                              uVar23 = auStack_a0._12_4_;
                              colorA.fields.b = (float)(int)auStack_a0._0_8_;
                              colorA.fields.a = (float)(int)((ulong)auStack_a0._0_8_ >> 0x20);
                              colorA.fields.r = (float)(int)UVar24.fields._0_8_;
                              colorA.fields.g = (float)(int)((ulong)UVar24.fields._0_8_ >> 0x20);
                              UVar24.fields.b = (float)(int)auStack_c0._0_8_;
                              UVar24.fields.a = (float)(int)((ulong)auStack_c0._0_8_ >> 0x20);
                              UVar24.fields.r = (float)(int)auStack_b0._0_8_;
                              UVar24.fields.g = (float)(int)((ulong)auStack_b0._0_8_ >> 0x20);
                              colorC.fields.b = (float)(int)auStack_100._32_8_;
                              colorC.fields.a = (float)(int)((ulong)auStack_100._32_8_ >> 0x20);
                              colorC.fields.r = (float)(int)auStack_d0._0_8_;
                              colorC.fields.g = (float)(int)((ulong)auStack_d0._0_8_ >> 0x20);
                              UI_ScoreboardProfilePopup__AddEffectRow
                                        (__this_06,in_stack_fffffffffffffee0,
                                         (Photon_Realtime_Player_o *)pUStack_118,"Name",pSVar16,
                                         (uint)bVar3,pSVar19,colorA,UVar24,colorC,UVar25,
                                         in_stack_fffffffffffffed8);
                              pSVar6 = (__this_06->fields)._profile;
                              in_stack_fffffffffffffed0 = pSVar19;
                              if ((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                                 (pSVar8 = (pSVar6->fields).Guild, pSVar8 != (Settings_NameSetting_o *)0x0)) {
                                pSVar16 = (pSVar8->fields)._value;
                                if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar16 = Anticheat_ChatFilter__FilterBadWords(pSVar16,(MethodInfo *)0x0);
                                if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar16 = MiscExtensions__HexColor(pSVar16,(MethodInfo *)0x0);
                                in_stack_fffffffffffffed0 = pSVar19;
                                if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                   (pSVar7 = ((*ppSVar2)->fields).GuildRoleSprite,
                                   pSVar7 != (Settings_StringSetting_o *)0x0)) {
                                  pSVar27 = (pSVar7->fields)._value;
                                  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  pSVar16 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                                                      ((Photon_Realtime_Player_o *)pUStack_118,pSVar16,pSVar27
                                                       ,(MethodInfo *)0x0);
                                  pSVar6 = *ppSVar2;
                                  in_stack_fffffffffffffed0 = pSVar19;
                                  if ((((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                                       (pSVar9 = (pSVar6->fields).GuildEffectEnabled,
                                       pSVar9 != (Settings_BoolSetting_o *)0x0)) &&
                                      (pSVar7 = (pSVar6->fields).GuildEffect,
                                      pSVar7 != (Settings_StringSetting_o *)0x0)) &&
                                     ((pSVar10 = (pSVar6->fields).GuildEffectColorA,
                                      pSVar10 != (Settings_ColorSetting_o *)0x0 &&
                                      (pUVar11 = (pSVar10->fields)._value,
                                      pUVar11 != (Utility_Color255_o *)0x0)))) {
                                    bVar3 = *(byte *)((long)&(pSVar9->fields).DefaultValue + 1);
                                    pSVar27 = (pSVar7->fields)._value;
                                    UVar24 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                    in_stack_fffffffffffffed0 = pSVar19;
                                    if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                       (pSVar10 = ((*ppSVar2)->fields).GuildEffectColorB,
                                       pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                                      auStack_a0._8_4_ = uVar22;
                                      auStack_a0._0_8_ = UVar24.fields._8_8_;
                                      auStack_a0._12_4_ = uVar23;
                                      pUVar11 = (pSVar10->fields)._value;
                                      if (pUVar11 != (Utility_Color255_o *)0x0) {
                                        UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                        in_stack_fffffffffffffed0 = pSVar19;
                                        if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                           (pSVar10 = ((*ppSVar2)->fields).GuildEffectColorC,
                                           pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                                          auStack_c0._8_4_ = uVar22;
                                          auStack_c0._0_8_ = UVar25.fields._8_8_;
                                          auStack_c0._12_4_ = uVar23;
                                          auStack_b0._8_4_ = extraout_XMM0_Dc_01;
                                          auStack_b0._0_8_ = UVar25.fields._0_8_;
                                          auStack_b0._12_4_ = extraout_XMM0_Dd_01;
                                          pUVar11 = (pSVar10->fields)._value;
                                          if (pUVar11 != (Utility_Color255_o *)0x0) {
                                            UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                            in_stack_fffffffffffffed0 = pSVar19;
                                            if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                               (pSVar10 = ((*ppSVar2)->fields).GuildEffectColorD,
                                               pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                                              auStack_100._40_4_ = uVar22;
                                              auStack_100._32_8_ = UVar25.fields._8_8_;
                                              auStack_100._44_4_ = uVar23;
                                              auStack_d0._8_4_ = extraout_XMM0_Dc_02;
                                              auStack_d0._0_8_ = UVar25.fields._0_8_;
                                              auStack_d0._12_4_ = extraout_XMM0_Dd_02;
                                              pUVar11 = (pSVar10->fields)._value;
                                              if (pUVar11 != (Utility_Color255_o *)0x0) {
                                                UVar25 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                                colorA_00.fields.b = (float)(int)auStack_a0._0_8_;
                                                colorA_00.fields.a =
                                                     (float)(int)((ulong)auStack_a0._0_8_ >> 0x20);
                                                colorA_00.fields.r = (float)(int)UVar24.fields._0_8_;
                                                colorA_00.fields.g =
                                                     (float)(int)((ulong)UVar24.fields._0_8_ >> 0x20);
                                                colorB.fields.b = (float)(int)auStack_c0._0_8_;
                                                colorB.fields.a =
                                                     (float)(int)((ulong)auStack_c0._0_8_ >> 0x20);
                                                colorB.fields.r = (float)(int)auStack_b0._0_8_;
                                                colorB.fields.g =
                                                     (float)(int)((ulong)auStack_b0._0_8_ >> 0x20);
                                                colorC_00.fields.b = (float)(int)auStack_100._32_8_;
                                                colorC_00.fields.a =
                                                     (float)(int)((ulong)auStack_100._32_8_ >> 0x20);
                                                colorC_00.fields.r = (float)(int)auStack_d0._0_8_;
                                                colorC_00.fields.g =
                                                     (float)(int)((ulong)auStack_d0._0_8_ >> 0x20);
                                                UI_ScoreboardProfilePopup__AddEffectRow
                                                          (__this_06,in_stack_fffffffffffffee0,
                                                           (Photon_Realtime_Player_o *)pUStack_118,
                                                           "Guild",pSVar16,(uint)bVar3,pSVar27,colorA_00,
                                                           colorB,colorC_00,UVar25,in_stack_fffffffffffffed8);
                                                pUVar18 = (__this_06->fields).SinglePanel;
                                                pSVar4 = (__this_06->fields)._items;
                                                pSVar16 = UI_UIManager__GetLocaleCommon
                                                                    ("Social",(MethodInfo *)0x0);
                                                pSVar6 = (__this_06->fields)._profile;
                                                in_stack_fffffffffffffed0 = pSVar27;
                                                if ((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                                                   (pSVar7 = (pSVar6->fields).Social,
                                                   pSVar7 != (Settings_StringSetting_o *)0x0)) {
                                                  pSVar19 = Anticheat_ChatFilter__FilterBadWords
                                                                      ((pSVar7->fields)._value,
                                                                       (MethodInfo *)0x0);
                                                  pSVar19 = MiscExtensions__HexColor
                                                                      (pSVar19,(MethodInfo *)0x0);
                                                  pSVar16 = System_String__Concat_3af7470
                                                                      ("<b>",pSVar16,": </b>",
                                                                       pSVar19,(MethodInfo *)0x0);
                                                  pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                      (pUVar18,in_stack_fffffffffffffee0,
                                                                       pSVar16,0,3,(MethodInfo *)0x0);
                                                  lVar14 = MethodInfo_Void_Add;
                                                  in_stack_fffffffffffffed0 = pSVar27;
                                                  if (pSVar4 != (System_Collections_Generic_List_GameObject__o
                                                                 *)0x0) {
                                                    piVar1 = &(pSVar4->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar5 = (pSVar4->fields)._items;
                                                    if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                      uVar12 = (pSVar4->fields)._size;
                                                      if (uVar12 < (uint)pUVar5->max_length) {
                                                        (pSVar4->fields)._size = uVar12 + 1;
                                                        pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                        il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12);
                                                        in_stack_fffffffffffffed0 = pSVar27;
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)pSVar4,(Il2CppObject *)pUVar17,
                                                                   *(MethodInfo_362C220 **)
                                                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0
                                                                              ) + 0x70));
                                                        in_stack_fffffffffffffed0 = pSVar27;
                                                      }
                                                      pUVar18 = (__this_06->fields).SinglePanel;
                                                      pSVar4 = (__this_06->fields)._items;
                                                      pSVar16 = UI_UIManager__GetLocaleCommon
                                                                          ("About",(MethodInfo *)0x0);
                                                      pSVar6 = (__this_06->fields)._profile;
                                                      if ((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                                                         (pSVar7 = (pSVar6->fields).About,
                                                         pSVar7 != (Settings_StringSetting_o *)0x0)) {
                                                        pSVar19 = Anticheat_ChatFilter__FilterBadWords
                                                                            ((pSVar7->fields)._value,
                                                                             (MethodInfo *)0x0);
                                                        pSVar19 = MiscExtensions__HexColor
                                                                            (pSVar19,(MethodInfo *)0x0);
                                                        pSVar16 = System_String__Concat_3af7470
                                                                            ("<b>",pSVar16,": </b>"
                                                                             ,pSVar19,(MethodInfo *)0x0);
                                                        pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                            (pUVar18,in_stack_fffffffffffffee0
                                                                             ,pSVar16,0,3,(MethodInfo *)0x0);
                                                        lVar14 = MethodInfo_Void_Add;
                                                        if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar12 = (pSVar4->fields)._size;
                                                           if (uVar12 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar12 + 1;
                                                             pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12,
                                                                                pUVar17);
                                                             method_00 = extraout_RDX;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       method_00 = extraout_RDX_00;
                                                       }
                                                       pSVar16 = 
                                                       UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName
                                                                 (__this_06,
                                                                  (Photon_Realtime_Player_o *)pUStack_118,
                                                                  method_00);
                                                       pSVar19 = UI_ScoreboardProfilePopup__GetDisplayUserId
                                                                           (__this_06,
                                                                            (Photon_Realtime_Player_o *)
                                                                            pUStack_118,method_01);
                                                       tierLabel = (System_String_o **)auStack_90;
                                                       if (g_data_057ae4d4 == '\0') {
                                                         il2cpp_runtime_helper_023445d0(&"None");
                                                         g_data_057ae4d4 = '\x01';
                                                       }
                                                       auStack_90._0_8_ =
                                                            (System_Collections_Generic_List_T__o *)0x0;
                                                       bVar13 = 
                                                       PatreonEffects_PatreonHelper__TryGetRemoteTierLabel
                                                                 ((Photon_Realtime_Player_o *)pUStack_118,
                                                                  tierLabel,(MethodInfo *)0x0);
                                                       if ((char)bVar13 == '\0') {
                                                         if (*(char *)((long)&(pUStack_118->fields).
                                                                              m_CancellationTokenSource + 4)
                                                             != '\0') {
                                                           tierLabel = (System_String_o **)auStack_90;
                                                           bVar13 = 
                                                       PatreonEffects_PatreonHelper__TryGetLocalTierLabel
                                                                 (tierLabel,(MethodInfo *)0x0);
                                                       if ((char)bVar13 != '\0') goto label_043e66c9;
                                                       }
                                                       tierLabel = &"None";
                                                       }
label_043e66c9:
                                                       pSVar27 = *tierLabel;
                                                       bVar13 = System_String__op_Inequality
                                                                          (pSVar27,"None",
                                                                           (MethodInfo *)0x0);
                                                       pSVar20 = Anticheat_ChatFilter__FilterBadWords
                                                                           (pSVar16,(MethodInfo *)0x0);
                                                       pSVar20 = MiscExtensions__HexColor
                                                                           (pSVar20,(MethodInfo *)0x0);
                                                       if ((char)bVar13 == '\0') {
                                                         if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                                           il2cpp_runtime_helper_02337ed0();
                                                         }
                                                         pUStack_118 = (UI_ScoreboardProfilePopup_o *)
                                                                       MiscExtensions__HexColor
                                                                                 ("No",
                                                                                  (MethodInfo *)0x0);
                                                       }
                                                       else {
                                                         pUStack_118 = (UI_ScoreboardProfilePopup_o *)
                                                                       System_String__Concat_3af7150
                                                                                 ("Thank you, ",pSVar20,
                                                                                  " for being a supporter.",
                                                                                  (MethodInfo *)0x0);
                                                       }
                                                       pUVar18 = (__this_06->fields).SinglePanel;
                                                       pSVar4 = (__this_06->fields)._items;
                                                       if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       pSVar16 = Anticheat_ChatFilter__FilterBadWords
                                                                           (pSVar16,(MethodInfo *)0x0);
                                                       if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       pSVar16 = MiscExtensions__HexColor
                                                                           (pSVar16,(MethodInfo *)0x0);
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>Display Name: </b>",pSVar16,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_fffffffffffffee0,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar14 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar12 = (pSVar4->fields)._size;
                                                           if (uVar12 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar12 + 1;
                                                             pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12)
                                                             ;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this_06->fields).SinglePanel;
                                                       pSVar4 = (__this_06->fields)._items;
                                                       pSVar16 = MiscExtensions__HexColor
                                                                           (pSVar19,(MethodInfo *)0x0);
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>User ID: </b>",pSVar16,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_fffffffffffffee0,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar14 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar12 = (pSVar4->fields)._size;
                                                           if (uVar12 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar12 + 1;
                                                             pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12)
                                                             ;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this_06->fields).SinglePanel;
                                                       pSVar4 = (__this_06->fields)._items;
                                                       pSVar16 = MiscExtensions__HexColor
                                                                           (pSVar27,(MethodInfo *)0x0);
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>Patreon Tier: </b>",pSVar16,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_fffffffffffffee0,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar14 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar12 = (pSVar4->fields)._size;
                                                           if (uVar12 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar12 + 1;
                                                             pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12,
                                                                                pUVar17);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this_06->fields).SinglePanel;
                                                       pSVar4 = (__this_06->fields)._items;
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>Patreon Supporter: </b>",
                                                                            (System_String_o *)pUStack_118,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_fffffffffffffee0,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar14 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar12 = (pSVar4->fields)._size;
                                                           if (uVar12 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar12 + 1;
                                                             pUVar5->m_Items[(int)uVar12] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar12,
                                                                                pUVar17);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                                   + 0x70));
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
label_043e6a1f:
    auVar26 = il2cpp_runtime_helper_022b2c90();
    if (auVar26._8_4_ != 1) goto label_043e6a6b;
    plVar21 = (long *)__cxa_begin_catch(auVar26._0_8_);
    lVar14 = *plVar21;
    __cxa_end_catch();
    __this_03.fields._8_8_ = in_stack_fffffffffffffed8;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
    __this_03.fields._current = (Il2CppObject *)in_stack_fffffffffffffee0;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)auStack_100);
  } while (lVar14 == 0);
  il2cpp_runtime_helper_022fefe0(lVar14);
label_043e6a6b:
  __this_04.fields._8_8_ = in_stack_fffffffffffffed8;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
  __this_04.fields._current = (Il2CppObject *)in_stack_fffffffffffffee0;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)auStack_100);
  _Unwind_Resume(auVar26._0_8_);
}


// UI.ScoreboardProfilePopup$$OnBottomBarButtonClick
// il2cpp: void UI_ScoreboardProfilePopup__OnBottomBarButtonClick (UI_ScoreboardProfilePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43e7010

void UI_ScoreboardProfilePopup__OnBottomBarButtonClick
               (UI_ScoreboardProfilePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae4d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae4d7 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.ScoreboardProfilePopup$$.ctor
// il2cpp: void UI_ScoreboardProfilePopup___ctor (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x43e7080

void UI_ScoreboardProfilePopup___ctor(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (g_data_057ae4d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae4d8 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


