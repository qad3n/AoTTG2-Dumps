// Type: UI.ScoreboardProfilePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ScoreboardProfilePopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/ScoreboardProfilePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.ScoreboardProfilePopup.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_ScoreboardProfilePopup___c__DisplayClass18_0___ctor (UI_ScoreboardProfilePopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x40d47a0

void UI_ScoreboardProfilePopup_<>c__DisplayClass18_0___ctor
               (UI_ScoreboardProfilePopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardProfilePopup.<>c__DisplayClass18_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_ScoreboardProfilePopup___c__DisplayClass18_0___SetupBottomButtons_b__0 (UI_ScoreboardProfilePopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x40d48a0

void UI_ScoreboardProfilePopup_<>c__DisplayClass18_0__<SetupBottomButtons>b__0
               (UI_ScoreboardProfilePopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  UI_ScoreboardProfilePopup_o *pUVar1;
  System_String_o *a;
  bool_conflict bVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_ScoreboardProfilePopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  a = (__this->fields).buttonName;
  if (DAT_05704746 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704746 = '\x01';
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
// 0x40d30f0

System_String_o *
UI_ScoreboardProfilePopup__get_Title(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570473f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Profile");
    DAT_0570473f = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Profile",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ScoreboardProfilePopup$$get_Width
// il2cpp: float UI_ScoreboardProfilePopup__get_Width (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x40d3150

float UI_ScoreboardProfilePopup__get_Width(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  return 520.0;
}


// UI.ScoreboardProfilePopup$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardProfilePopup__get_VerticalPadding (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x40d3160

int32_t UI_ScoreboardProfilePopup__get_VerticalPadding
                  (UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  return 5;
}


// UI.ScoreboardProfilePopup$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardProfilePopup__get_VerticalSpacing (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x40d3170

float UI_ScoreboardProfilePopup__get_VerticalSpacing
                (UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  return 25.0;
}


// UI.ScoreboardProfilePopup$$get_Height
// il2cpp: float UI_ScoreboardProfilePopup__get_Height (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x40d3180

float UI_ScoreboardProfilePopup__get_Height(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  return 640.0;
}


// UI.ScoreboardProfilePopup$$Setup
// il2cpp: void UI_ScoreboardProfilePopup__Setup (UI_ScoreboardProfilePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40d3190

void UI_ScoreboardProfilePopup__Setup
               (UI_ScoreboardProfilePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  Il2CppClass *item;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  long lVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *__this_01;
  ulong uVar3;
  
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  if (DAT_05704745 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass18_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_05704745 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_040d33df:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined8 *)(lVar2 + 0x20) = "Back";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar3 = 0;
      do {
        __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass18_0);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Il2CppObject *)0x0) goto LAB_040d33da;
        __this_01[1].monitor = __this;
        il2cpp_runtime_glue(&__this_01[1].monitor,__this);
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_040d33df;
        __this_01[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar3 * 8);
        il2cpp_runtime_glue(__this_01 + 1);
        parent_00 = (__this->fields).BottomBar;
        item = __this_01[1].klass;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon((System_String_o *)item,(MethodInfo *)0x0);
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton
                  (parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
    }
    return;
  }
LAB_040d33da:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardProfilePopup$$Show
// il2cpp: void UI_ScoreboardProfilePopup__Show (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40d33f0

void UI_ScoreboardProfilePopup__Show
               (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

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
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar13;
  undefined8 obj;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  bool_conflict bVar19;
  Il2CppObject *pIVar20;
  System_String_o *pSVar21;
  UI_ElementStyle_o *__this_03;
  UnityEngine_GameObject_o *pUVar22;
  UnityEngine_Transform_o *pUVar23;
  System_String_o *pSVar24;
  System_String_o *pSVar25;
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
  undefined4 uVar26;
  undefined4 uVar27;
  UnityEngine_Color_o UVar28;
  UnityEngine_Color_o UVar29;
  UnityEngine_Color_o colorA;
  UnityEngine_Color_o colorA_00;
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorC;
  UnityEngine_Color_o colorC_00;
  undefined8 in_stack_ffffffffffffff18;
  MethodInfo *in_stack_ffffffffffffff20;
  Il2CppObject *in_stack_ffffffffffffff28;
  undefined1 local_b8 [48];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (DAT_05704740 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&MethodInfo_PlayerInfo_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Guild");
    il2cpp_init_method_metadata(&"<b>");
    il2cpp_init_method_metadata(&"<b>Display Name: </b>");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"<b>Patreon Tier: </b>");
    il2cpp_init_method_metadata(&"Thank you, ");
    il2cpp_init_method_metadata(&"Social");
    il2cpp_init_method_metadata(&"Icons/Profile/");
    il2cpp_init_method_metadata(&": </b>");
    il2cpp_init_method_metadata(&" for being a supporter.");
    il2cpp_init_method_metadata(&"<b>User ID: </b>");
    il2cpp_init_method_metadata(&"About");
    il2cpp_init_method_metadata(&"<b>Patreon Supporter: </b>");
    il2cpp_init_method_metadata(&"No");
    DAT_05704740 = '\x01';
  }
  local_b8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_b8._8_8_ = (Il2CppMethodPointer)0x0;
  local_b8._16_8_ = (UnityEngine_Object_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  pSVar5 = (__this->fields)._items;
  if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_040d41af;
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
  local_b8._16_8_ = local_38;
  local_b8._0_8_ = local_48._0_8_;
  local_b8._8_8_ = local_48._8_8_;
  while (__this_01.fields._8_8_ = in_stack_ffffffffffffff20,
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18,
        __this_01.fields._current = in_stack_ffffffffffffff28,
        bVar19 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (__this_01,(MethodInfo_3185E20 *)local_b8), obj = local_b8._16_8_,
        (char)bVar19 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
  }
  __this_02.fields._8_8_ = in_stack_ffffffffffffff20;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
  __this_02.fields._current = in_stack_ffffffffffffff28;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)local_b8);
  pSVar5 = (__this->fields)._items;
  if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_040d41af;
  piVar1 = &(pSVar5->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar5->fields)._size;
  (pSVar5->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (((player == (Photon_Realtime_Player_o *)0x0) ||
      (__this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                    (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
      __this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) ||
     (pIVar20 = System_Collections_Generic_Dictionary<int__object>__get_Item
                          (__this_00,(player->fields).actorNumber,MethodInfo_PlayerInfo_get_Item),
     pIVar20 == (Il2CppObject *)0x0)) goto LAB_040d41af;
  ppSVar2 = &(__this->fields)._profile;
  (__this->fields)._profile = (Settings_ProfileSettings_o *)pIVar20[2].klass;
  il2cpp_runtime_glue(ppSVar2);
  pSVar21 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_03,0x16,120.0,20.0,pSVar21,(MethodInfo *)0x0);
  pUVar22 = UI_ElementFactory__CreateHorizontalGroup
                      ((__this->fields).SinglePanel,25.0,4,(MethodInfo *)0x0);
  if ((pUVar22 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar23 = UnityEngine_GameObject__get_transform(pUVar22,(MethodInfo *)0x0),
     pUVar23 == (UnityEngine_Transform_o *)0x0)) goto LAB_040d41af;
  pSVar5 = (__this->fields)._items;
  pUVar22 = UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
  lVar13 = MethodInfo_Void_Add;
  if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_040d41af;
  piVar1 = &(pSVar5->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar6 = (pSVar5->fields)._items;
  if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto LAB_040d41af;
  uVar4 = (pSVar5->fields)._size;
  if (uVar4 < (uint)pUVar6->max_length) {
    (pSVar5->fields)._size = uVar4 + 1;
    pUVar6->m_Items[(int)uVar4] = pUVar22;
    il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar4);
    pSVar7 = *ppSVar2;
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pUVar22,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    pSVar7 = *ppSVar2;
  }
  if ((pSVar7 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar8 = (pSVar7->fields).ProfileIcon, pSVar8 == (Settings_StringSetting_o *)0x0))
  goto LAB_040d41af;
  pSVar21 = (pSVar8->fields)._value;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar21 = UI_UIManager__GetProfileIcon(pSVar21,(MethodInfo *)0x0);
  pSVar21 = System_String__Concat("Icons/Profile/",pSVar21,(MethodInfo *)0x0);
  uVar26 = 0;
  uVar27 = 0;
  UI_ElementFactory__CreateRawImage(pUVar23,__this_03,pSVar21,256.0,256.0,(MethodInfo *)0x0);
  pSVar7 = *ppSVar2;
  if (((((pSVar7 == (Settings_ProfileSettings_o *)0x0) ||
        (pSVar9 = (pSVar7->fields).Name, pSVar9 == (Settings_NameSetting_o *)0x0)) ||
       (pSVar10 = (pSVar7->fields).NameEffectEnabled, pSVar10 == (Settings_BoolSetting_o *)0x0)) ||
      ((pSVar8 = (pSVar7->fields).NameEffect, pSVar8 == (Settings_StringSetting_o *)0x0 ||
       (pSVar11 = (pSVar7->fields).NameEffectColorA, pSVar11 == (Settings_ColorSetting_o *)0x0))))
     || (pUVar12 = (pSVar11->fields)._value, pUVar12 == (Utility_Color255_o *)0x0))
  goto LAB_040d41af;
  pSVar21 = (pSVar9->fields)._value;
  bVar3 = *(byte *)((long)&(pSVar10->fields).DefaultValue + 1);
  pSVar24 = (pSVar8->fields)._value;
  UVar28 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
  if ((*ppSVar2 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar11 = ((*ppSVar2)->fields).NameEffectColorB, pSVar11 == (Settings_ColorSetting_o *)0x0))
  goto LAB_040d41af;
  local_58._8_4_ = uVar26;
  local_58._0_8_ = UVar28.fields._8_8_;
  local_58._12_4_ = uVar27;
  pUVar12 = (pSVar11->fields)._value;
  if (pUVar12 == (Utility_Color255_o *)0x0) goto LAB_040d41af;
  UVar29 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
  if ((*ppSVar2 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar11 = ((*ppSVar2)->fields).NameEffectColorC, pSVar11 == (Settings_ColorSetting_o *)0x0))
  goto LAB_040d41af;
  local_78._8_4_ = uVar26;
  local_78._0_8_ = UVar29.fields._8_8_;
  local_78._12_4_ = uVar27;
  local_68._8_4_ = extraout_XMM0_Dc;
  local_68._0_8_ = UVar29.fields._0_8_;
  local_68._12_4_ = extraout_XMM0_Dd;
  pUVar12 = (pSVar11->fields)._value;
  if (pUVar12 == (Utility_Color255_o *)0x0) goto LAB_040d41af;
  UVar29 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
  if ((*ppSVar2 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar11 = ((*ppSVar2)->fields).NameEffectColorD, pSVar11 == (Settings_ColorSetting_o *)0x0))
  goto LAB_040d41af;
  local_b8._40_4_ = uVar26;
  local_b8._32_8_ = UVar29.fields._8_8_;
  local_b8._44_4_ = uVar27;
  local_88._8_4_ = extraout_XMM0_Dc_00;
  local_88._0_8_ = UVar29.fields._0_8_;
  local_88._12_4_ = extraout_XMM0_Dd_00;
  pUVar12 = (pSVar11->fields)._value;
  if (pUVar12 == (Utility_Color255_o *)0x0) goto LAB_040d41af;
  UVar29 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
  auVar17 = local_68;
  auVar16 = local_78;
  auVar15 = local_88;
  auVar14 = local_b8._32_16_;
  uVar26 = local_58._8_4_;
  uVar27 = local_58._12_4_;
  colorA.fields.b = (float)(int)local_58._0_8_;
  colorA.fields.a = (float)(int)((ulong)local_58._0_8_ >> 0x20);
  colorA.fields.r = (float)(int)UVar28.fields._0_8_;
  colorA.fields.g = (float)(int)((ulong)UVar28.fields._0_8_ >> 0x20);
  UVar28.fields.b = (float)local_78._0_4_;
  UVar28.fields.a = (float)local_78._4_4_;
  UVar28.fields.r = (float)local_68._0_4_;
  UVar28.fields.g = (float)local_68._4_4_;
  colorC.fields.b = (float)local_b8._32_4_;
  colorC.fields.a = (float)local_b8._36_4_;
  colorC.fields.r = (float)local_88._0_4_;
  colorC.fields.g = (float)local_88._4_4_;
  local_b8._32_16_ = auVar14;
  local_88 = auVar15;
  local_78 = auVar16;
  local_68 = auVar17;
  UI_ScoreboardProfilePopup__AddEffectRow
            (__this,__this_03,player,"Name",pSVar21,(uint)bVar3,pSVar24,colorA,UVar28,colorC,
             UVar29,in_stack_ffffffffffffff20);
  pSVar7 = (__this->fields)._profile;
  if ((pSVar7 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar9 = (pSVar7->fields).Guild, pSVar9 == (Settings_NameSetting_o *)0x0)) goto LAB_040d41af;
  pSVar21 = (pSVar9->fields)._value;
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar21 = Anticheat_ChatFilter__FilterBadWords(pSVar21,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar21 = MiscExtensions__HexColor(pSVar21,(MethodInfo *)0x0);
  if ((*ppSVar2 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar8 = ((*ppSVar2)->fields).GuildRoleSprite, pSVar8 == (Settings_StringSetting_o *)0x0))
  goto LAB_040d41af;
  pSVar24 = (pSVar8->fields)._value;
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar21 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                      (player,pSVar21,pSVar24,(MethodInfo *)0x0);
  pSVar7 = *ppSVar2;
  if ((((pSVar7 == (Settings_ProfileSettings_o *)0x0) ||
       (pSVar10 = (pSVar7->fields).GuildEffectEnabled, pSVar10 == (Settings_BoolSetting_o *)0x0)) ||
      (pSVar8 = (pSVar7->fields).GuildEffect, pSVar8 == (Settings_StringSetting_o *)0x0)) ||
     ((pSVar11 = (pSVar7->fields).GuildEffectColorA, pSVar11 == (Settings_ColorSetting_o *)0x0 ||
      (pUVar12 = (pSVar11->fields)._value, pUVar12 == (Utility_Color255_o *)0x0))))
  goto LAB_040d41af;
  bVar3 = *(byte *)((long)&(pSVar10->fields).DefaultValue + 1);
  pSVar24 = (pSVar8->fields)._value;
  UVar28 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
  if ((*ppSVar2 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar11 = ((*ppSVar2)->fields).GuildEffectColorB, pSVar11 == (Settings_ColorSetting_o *)0x0))
  goto LAB_040d41af;
  local_58._8_4_ = uVar26;
  local_58._0_8_ = UVar28.fields._8_8_;
  local_58._12_4_ = uVar27;
  pUVar12 = (pSVar11->fields)._value;
  if (pUVar12 == (Utility_Color255_o *)0x0) goto LAB_040d41af;
  UVar29 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
  if ((*ppSVar2 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar11 = ((*ppSVar2)->fields).GuildEffectColorC, pSVar11 == (Settings_ColorSetting_o *)0x0))
  goto LAB_040d41af;
  local_78._8_4_ = uVar26;
  local_78._0_8_ = UVar29.fields._8_8_;
  local_78._12_4_ = uVar27;
  local_68._8_4_ = extraout_XMM0_Dc_01;
  local_68._0_8_ = UVar29.fields._0_8_;
  local_68._12_4_ = extraout_XMM0_Dd_01;
  pUVar12 = (pSVar11->fields)._value;
  if (pUVar12 == (Utility_Color255_o *)0x0) goto LAB_040d41af;
  UVar29 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
  if ((*ppSVar2 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar11 = ((*ppSVar2)->fields).GuildEffectColorD, pSVar11 == (Settings_ColorSetting_o *)0x0))
  goto LAB_040d41af;
  local_b8._40_4_ = uVar26;
  local_b8._32_8_ = UVar29.fields._8_8_;
  local_b8._44_4_ = uVar27;
  local_88._8_4_ = extraout_XMM0_Dc_02;
  local_88._0_8_ = UVar29.fields._0_8_;
  local_88._12_4_ = extraout_XMM0_Dd_02;
  pUVar12 = (pSVar11->fields)._value;
  if (pUVar12 == (Utility_Color255_o *)0x0) goto LAB_040d41af;
  UVar29 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
  auVar18 = local_58;
  auVar17 = local_68;
  auVar16 = local_78;
  auVar15 = local_88;
  auVar14 = local_b8._32_16_;
  colorA_00.fields.b = (float)local_58._0_4_;
  colorA_00.fields.a = (float)local_58._4_4_;
  colorA_00.fields.r = (float)(int)UVar28.fields._0_8_;
  colorA_00.fields.g = (float)(int)((ulong)UVar28.fields._0_8_ >> 0x20);
  colorB.fields.b = (float)local_78._0_4_;
  colorB.fields.a = (float)local_78._4_4_;
  colorB.fields.r = (float)local_68._0_4_;
  colorB.fields.g = (float)local_68._4_4_;
  colorC_00.fields.b = (float)local_b8._32_4_;
  colorC_00.fields.a = (float)local_b8._36_4_;
  colorC_00.fields.r = (float)local_88._0_4_;
  colorC_00.fields.g = (float)local_88._4_4_;
  local_b8._32_16_ = auVar14;
  local_88 = auVar15;
  local_78 = auVar16;
  local_68 = auVar17;
  local_58 = auVar18;
  UI_ScoreboardProfilePopup__AddEffectRow
            (__this,__this_03,player,"Guild",pSVar21,(uint)bVar3,pSVar24,colorA_00,colorB,
             colorC_00,UVar29,in_stack_ffffffffffffff20);
  pUVar23 = (__this->fields).SinglePanel;
  pSVar5 = (__this->fields)._items;
  pSVar21 = UI_UIManager__GetLocaleCommon("Social",(MethodInfo *)0x0);
  pSVar7 = (__this->fields)._profile;
  if ((pSVar7 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar8 = (pSVar7->fields).Social, pSVar8 == (Settings_StringSetting_o *)0x0))
  goto LAB_040d41af;
  pSVar24 = Anticheat_ChatFilter__FilterBadWords((pSVar8->fields)._value,(MethodInfo *)0x0);
  pSVar24 = MiscExtensions__HexColor(pSVar24,(MethodInfo *)0x0);
  pSVar21 = System_String__Concat("<b>",pSVar21,": </b>",pSVar24,(MethodInfo *)0x0);
  pUVar22 = UI_ElementFactory__CreateDefaultLabel(pUVar23,__this_03,pSVar21,0,3,(MethodInfo *)0x0);
  lVar13 = MethodInfo_Void_Add;
  if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_040d41af;
  piVar1 = &(pSVar5->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar6 = (pSVar5->fields)._items;
  if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto LAB_040d41af;
  uVar4 = (pSVar5->fields)._size;
  if (uVar4 < (uint)pUVar6->max_length) {
    (pSVar5->fields)._size = uVar4 + 1;
    pUVar6->m_Items[(int)uVar4] = pUVar22;
    il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar4);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pUVar22,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
  }
  pUVar23 = (__this->fields).SinglePanel;
  pSVar5 = (__this->fields)._items;
  pSVar21 = UI_UIManager__GetLocaleCommon("About",(MethodInfo *)0x0);
  pSVar7 = (__this->fields)._profile;
  if ((pSVar7 == (Settings_ProfileSettings_o *)0x0) ||
     (pSVar8 = (pSVar7->fields).About, pSVar8 == (Settings_StringSetting_o *)0x0))
  goto LAB_040d41af;
  pSVar24 = Anticheat_ChatFilter__FilterBadWords((pSVar8->fields)._value,(MethodInfo *)0x0);
  pSVar24 = MiscExtensions__HexColor(pSVar24,(MethodInfo *)0x0);
  pSVar21 = System_String__Concat("<b>",pSVar21,": </b>",pSVar24,(MethodInfo *)0x0);
  pUVar22 = UI_ElementFactory__CreateDefaultLabel(pUVar23,__this_03,pSVar21,0,3,(MethodInfo *)0x0);
  lVar13 = MethodInfo_Void_Add;
  if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_040d41af;
  piVar1 = &(pSVar5->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar6 = (pSVar5->fields)._items;
  if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto LAB_040d41af;
  uVar4 = (pSVar5->fields)._size;
  if (uVar4 < (uint)pUVar6->max_length) {
    (pSVar5->fields)._size = uVar4 + 1;
    pUVar6->m_Items[(int)uVar4] = pUVar22;
    il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar4,pUVar22);
    method_00 = extraout_RDX;
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pUVar22,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    method_00 = extraout_RDX_00;
  }
  pSVar21 = UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName(__this,player,method_00);
  pSVar24 = UI_ScoreboardProfilePopup__GetDisplayUserId(__this,player,method_01);
  tierLabel = (System_String_o **)local_48;
  if (DAT_05704743 == '\0') {
    il2cpp_init_method_metadata(&"None");
    DAT_05704743 = '\x01';
  }
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  bVar19 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel(player,tierLabel,(MethodInfo *)0x0);
  if ((char)bVar19 == '\0') {
    if ((char)(player->fields).IsLocal != '\0') {
      tierLabel = (System_String_o **)local_48;
      bVar19 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(tierLabel,(MethodInfo *)0x0);
      if ((char)bVar19 != '\0') goto LAB_040d3e59;
    }
    tierLabel = &"None";
  }
LAB_040d3e59:
  a = *tierLabel;
  bVar19 = System_String__op_Inequality(a,"None",(MethodInfo *)0x0);
  pSVar25 = Anticheat_ChatFilter__FilterBadWords(pSVar21,(MethodInfo *)0x0);
  pSVar25 = MiscExtensions__HexColor(pSVar25,(MethodInfo *)0x0);
  if ((char)bVar19 == '\0') {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar25 = MiscExtensions__HexColor("No",(MethodInfo *)0x0);
  }
  else {
    pSVar25 = System_String__Concat("Thank you, ",pSVar25," for being a supporter.",(MethodInfo *)0x0);
  }
  pUVar23 = (__this->fields).SinglePanel;
  pSVar5 = (__this->fields)._items;
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar21 = Anticheat_ChatFilter__FilterBadWords(pSVar21,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar21 = MiscExtensions__HexColor(pSVar21,(MethodInfo *)0x0);
  pSVar21 = System_String__Concat("<b>Display Name: </b>",pSVar21,(MethodInfo *)0x0);
  pUVar22 = UI_ElementFactory__CreateDefaultLabel(pUVar23,__this_03,pSVar21,0,3,(MethodInfo *)0x0);
  lVar13 = MethodInfo_Void_Add;
  if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar6 = (pSVar5->fields)._items;
    if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
      uVar4 = (pSVar5->fields)._size;
      if (uVar4 < (uint)pUVar6->max_length) {
        (pSVar5->fields)._size = uVar4 + 1;
        pUVar6->m_Items[(int)uVar4] = pUVar22;
        il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar4);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pUVar22,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      pUVar23 = (__this->fields).SinglePanel;
      pSVar5 = (__this->fields)._items;
      pSVar21 = MiscExtensions__HexColor(pSVar24,(MethodInfo *)0x0);
      pSVar21 = System_String__Concat("<b>User ID: </b>",pSVar21,(MethodInfo *)0x0);
      pUVar22 = UI_ElementFactory__CreateDefaultLabel
                          (pUVar23,__this_03,pSVar21,0,3,(MethodInfo *)0x0);
      lVar13 = MethodInfo_Void_Add;
      if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar6 = (pSVar5->fields)._items;
        if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
          uVar4 = (pSVar5->fields)._size;
          if (uVar4 < (uint)pUVar6->max_length) {
            (pSVar5->fields)._size = uVar4 + 1;
            pUVar6->m_Items[(int)uVar4] = pUVar22;
            il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pUVar22,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          pUVar23 = (__this->fields).SinglePanel;
          pSVar5 = (__this->fields)._items;
          pSVar21 = MiscExtensions__HexColor(a,(MethodInfo *)0x0);
          pSVar21 = System_String__Concat("<b>Patreon Tier: </b>",pSVar21,(MethodInfo *)0x0);
          pUVar22 = UI_ElementFactory__CreateDefaultLabel
                              (pUVar23,__this_03,pSVar21,0,3,(MethodInfo *)0x0);
          lVar13 = MethodInfo_Void_Add;
          if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar6 = (pSVar5->fields)._items;
            if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
              uVar4 = (pSVar5->fields)._size;
              if (uVar4 < (uint)pUVar6->max_length) {
                (pSVar5->fields)._size = uVar4 + 1;
                pUVar6->m_Items[(int)uVar4] = pUVar22;
                il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar4,pUVar22);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,
                           (Il2CppObject *)pUVar22,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
              pUVar23 = (__this->fields).SinglePanel;
              pSVar5 = (__this->fields)._items;
              pSVar21 = System_String__Concat("<b>Patreon Supporter: </b>",pSVar25,(MethodInfo *)0x0);
              pUVar22 = UI_ElementFactory__CreateDefaultLabel
                                  (pUVar23,__this_03,pSVar21,0,3,(MethodInfo *)0x0);
              lVar13 = MethodInfo_Void_Add;
              if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar6 = (pSVar5->fields)._items;
                if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                  uVar4 = (pSVar5->fields)._size;
                  if (uVar4 < (uint)pUVar6->max_length) {
                    (pSVar5->fields)._size = uVar4 + 1;
                    pUVar6->m_Items[(int)uVar4] = pUVar22;
                    il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar4,pUVar22);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar5,
                               (Il2CppObject *)pUVar22,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
LAB_040d41af:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardProfilePopup$$GetAuthoritativeDisplayName
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40d4520

System_String_o *
UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_NameSetting_o *pSVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *local_18;
  
  if (DAT_05704741 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"N/A");
    DAT_05704741 = '\x01';
  }
  local_18 = (System_String_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = PatreonEffects_PatreonHelper__TryGetRemoteDisplayName
                      (player,&local_18,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return local_18;
    }
    bVar3 = System_String__IsNullOrEmpty
                      (*(System_String_o **)&(player->fields)._HasRejoined_k__BackingField,
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return *(System_String_o **)&(player->fields)._HasRejoined_k__BackingField;
    }
  }
  pSVar1 = (__this->fields)._profile;
  if (pSVar1 != (Settings_ProfileSettings_o *)0x0) {
    pSVar2 = (pSVar1->fields).Name;
    if (pSVar2 != (Settings_NameSetting_o *)0x0) {
      bVar3 = System_String__IsNullOrEmpty((pSVar2->fields)._value,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') goto LAB_040d45c3;
      pSVar1 = (__this->fields)._profile;
      if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).Name, pSVar2 != (Settings_NameSetting_o *)0x0)) {
        return (pSVar2->fields)._value;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040d45c3:
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return "N/A";
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = ApplicationManagers_AccountManager__get_Username((MethodInfo *)0x0);
  return pSVar4;
}


// UI.ScoreboardProfilePopup$$GetDisplayUserId
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetDisplayUserId (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40d4660

System_String_o *
UI_ScoreboardProfilePopup__GetDisplayUserId
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool_conflict bVar3;
  System_String_o **accountId;
  System_String_o *local_20;
  
  if (DAT_05704742 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"N/A");
    DAT_05704742 = '\x01';
  }
  local_20 = (System_String_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    accountId = &local_20;
    bVar3 = PatreonEffects_PatreonHelper__TryGetRemoteAccountId(player,accountId,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto LAB_040d471e;
  }
  pSVar1 = (__this->fields)._profile;
  if ((pSVar1 != (Settings_ProfileSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ID, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    bVar3 = System_String__IsNullOrEmpty((pSVar2->fields)._value,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pSVar1 = (__this->fields)._profile;
      if ((pSVar1 == (Settings_ProfileSettings_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).ID, pSVar2 == (Settings_StringSetting_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      accountId = &(pSVar2->fields)._value;
      goto LAB_040d471e;
    }
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((player->fields).nickName,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      accountId = &(player->fields).nickName;
      goto LAB_040d471e;
    }
  }
  accountId = (System_String_o **)&"N/A";
LAB_040d471e:
  return *accountId;
}


// UI.ScoreboardProfilePopup$$GetPatreonTierLabel
// il2cpp: System_String_o* UI_ScoreboardProfilePopup__GetPatreonTierLabel (UI_ScoreboardProfilePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40d4730

System_String_o *
UI_ScoreboardProfilePopup__GetPatreonTierLabel
          (UI_ScoreboardProfilePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o **ppSVar2;
  System_String_o *pSStack_18;
  
  if (DAT_05704743 == '\0') {
    il2cpp_init_method_metadata(&"None");
    DAT_05704743 = '\x01';
  }
  pSStack_18 = (System_String_o *)0x0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
LAB_040d477e:
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalTierLabel(&pSStack_18,(MethodInfo *)0x0);
    ppSVar2 = &pSStack_18;
    if ((char)bVar1 != '\0') goto LAB_040d4793;
  }
  else {
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierLabel
                      (player,&pSStack_18,(MethodInfo *)0x0);
    ppSVar2 = &pSStack_18;
    if ((char)bVar1 != '\0') goto LAB_040d4793;
    if ((char)(player->fields).IsLocal != '\0') goto LAB_040d477e;
  }
  ppSVar2 = (System_String_o **)&"None";
LAB_040d4793:
  return *ppSVar2;
}


// UI.ScoreboardProfilePopup$$AddEffectRow
// il2cpp: void UI_ScoreboardProfilePopup__AddEffectRow (UI_ScoreboardProfilePopup_o* __this, UI_ElementStyle_o* style, Photon_Realtime_Player_o* player, System_String_o* labelKey, System_String_o* value, bool enabled, System_String_o* effectName, UnityEngine_Color_o colorA, UnityEngine_Color_o colorB, UnityEngine_Color_o colorC, UnityEngine_Color_o colorD, const MethodInfo* method);
// 0x40d4240

void UI_ScoreboardProfilePopup__AddEffectRow
               (UI_ScoreboardProfilePopup_o *__this,UI_ElementStyle_o *style,
               Photon_Realtime_Player_o *player,System_String_o *labelKey,System_String_o *value,
               bool_conflict enabled,System_String_o *effectName,UnityEngine_Color_o colorA,
               UnityEngine_Color_o colorB,UnityEngine_Color_o colorC,UnityEngine_Color_o colorD,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Transform_o *pUVar3;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  long lVar5;
  int32_t effect;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool_conflict bVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  PatreonEffects_EffectText_o *__this_01;
  UnityEngine_GameObject_o *item;
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
  int32_t local_cc;
  UI_ElementStyle_o *local_c8;
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
  local_c8 = style;
  local_c0 = player;
  if (DAT_05704744 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&TypeInfo_EffectText);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"<b>");
    il2cpp_init_method_metadata(&": </b>");
    DAT_05704744 = '\x01';
  }
  local_cc = 0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar15 = UI_UIManager__GetLocaleCommon(labelKey,(MethodInfo *)0x0);
  pSVar15 = System_String__Concat("<b>",pSVar15,": </b>",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar16 = Anticheat_ChatFilter__FilterBadWords(value,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar16 = MiscExtensions__HexColor(pSVar16,(MethodInfo *)0x0);
  local_cc = 0;
  if ((((char)enabled == '\0') ||
      (bVar14 = PatreonEffects_PatreonHelper__HasNameEffectAccess(local_c0,(MethodInfo *)0x0),
      (char)bVar14 == '\0')) ||
     (bVar14 = PatreonEffects_NameEffectPresets__TryResolve(effectName,&local_cc,(MethodInfo *)0x0),
     effect = local_cc, (char)bVar14 == '\0')) {
    pUVar3 = (__this->fields).SinglePanel;
    __this_00 = (__this->fields)._items;
    pSVar15 = System_String__Concat(pSVar15,pSVar16,(MethodInfo *)0x0);
    item = UI_ElementFactory__CreateDefaultLabel(pUVar3,local_c8,pSVar15,0,3,(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
  }
  else {
    if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
      il2cpp_init_class();
    }
    auVar13 = local_48;
    auVar12 = local_58;
    auVar11 = local_68;
    auVar10 = local_78;
    auVar9 = local_88;
    auVar8 = local_98;
    auVar7 = local_a8;
    auVar6 = local_b8;
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
    local_b8 = auVar6;
    local_a8 = auVar7;
    local_98 = auVar8;
    local_88 = auVar9;
    local_78 = auVar10;
    local_68 = auVar11;
    local_58 = auVar12;
    local_48 = auVar13;
    pSVar16 = PatreonEffects_EffectText__Compose
                        (pSVar16,effect,colorA_00,colorB_00,colorC_00,colorD_00,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).SinglePanel;
    pSVar15 = System_String__Concat(pSVar15,pSVar16,(MethodInfo *)0x0);
    __this_01 = UI_ElementFactory__CreateEffectText(pUVar3,local_c8,pSVar15,0,3,(MethodInfo *)0x0);
    if (__this_01 == (PatreonEffects_EffectText_o *)0x0) goto LAB_040d451a;
    __this_00 = (__this->fields)._items;
    item = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
  }
  MethodInfo_Void_Add = lVar5;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (__this_00->fields)._items;
    if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar4->m_Items[(int)uVar2] = item;
        il2cpp_runtime_glue(pUVar4->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
LAB_040d451a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardProfilePopup$$SetupBottomButtons
// il2cpp: void UI_ScoreboardProfilePopup__SetupBottomButtons (UI_ScoreboardProfilePopup_o* __this, const MethodInfo* method);
// 0x40d31b0

void UI_ScoreboardProfilePopup__SetupBottomButtons
               (UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  Il2CppClass *item;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  long lVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *__this_01;
  ulong uVar3;
  
  if (DAT_05704745 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass18_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_05704745 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_040d33df:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined8 *)(lVar2 + 0x20) = "Back";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar3 = 0;
      do {
        __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass18_0);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Il2CppObject *)0x0) goto LAB_040d33da;
        __this_01[1].monitor = __this;
        il2cpp_runtime_glue(&__this_01[1].monitor,__this);
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_040d33df;
        __this_01[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar3 * 8);
        il2cpp_runtime_glue(__this_01 + 1);
        parent = (__this->fields).BottomBar;
        item = __this_01[1].klass;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon((System_String_o *)item,(MethodInfo *)0x0);
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
    }
    return;
  }
LAB_040d33da:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ScoreboardProfilePopup$$OnBottomBarButtonClick
// il2cpp: void UI_ScoreboardProfilePopup__OnBottomBarButtonClick (UI_ScoreboardProfilePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40d47b0

void UI_ScoreboardProfilePopup__OnBottomBarButtonClick
               (UI_ScoreboardProfilePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704746 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704746 = '\x01';
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
// 0x40d4820

void UI_ScoreboardProfilePopup___ctor(UI_ScoreboardProfilePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (DAT_05704747 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_05704747 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._items);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


