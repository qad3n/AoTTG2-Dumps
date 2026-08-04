// Type: UI.ScoreboardScorePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ScoreboardScorePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardScorePanel.cs
// --------------------------------

// UI.ScoreboardScorePanel.<>c__DisplayClass14_0$$.ctor
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass14_0___ctor (UI_ScoreboardScorePanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x43e9600

void UI_ScoreboardScorePanel___c__DisplayClass14_0___ctor
               (UI_ScoreboardScorePanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel.<>c__DisplayClass14_0$$<CreateRow>b__0
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass14_0___CreateRow_b__0 (UI_ScoreboardScorePanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x43e99a0

void UI_ScoreboardScorePanel___c__DisplayClass14_0___CreateRow_b__0
               (UI_ScoreboardScorePanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_ProfileSettings_o **ppSVar2;
  int length;
  uint uVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  UnityEngine_UI_RectMask2D_o *__this_00;
  System_Collections_Generic_List_GameObject__o *pSVar5;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  UnityEngine_GameObject_array *pUVar6;
  Settings_ProfileSettings_o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  Settings_NameSetting_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  Settings_ColorSetting_o *pSVar11;
  Utility_Color255_o *pUVar12;
  Photon_Realtime_Player_array *pPVar13;
  UI_ScoreboardProfilePopup_o *__this_02;
  UI_ConfirmPopup_o *__this_03;
  UnityEngine_UI_RawImage_o *__this_04;
  Photon_Realtime_Player_o *pPVar14;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  undefined8 obj;
  uint uVar15;
  bool_conflict bVar16;
  Il2CppObject *pIVar17;
  System_String_o *pSVar18;
  UnityEngine_GameObject_o *pUVar19;
  UnityEngine_Transform_o *pUVar20;
  System_String_o *pSVar21;
  System_String_o *pSVar22;
  long *plVar23;
  UnityEngine_Events_UnityAction_o *pUVar24;
  UI_CategoryPanel_c *__this_09;
  byte bVar25;
  long lVar26;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *__this_10;
  System_String_o **tierLabel;
  UI_ScoreboardScorePanel_o *unaff_RBX;
  undefined1 *puVar27;
  MethodInfo_33D4DF0 **unaff_RBP;
  Photon_Realtime_Player_o *player;
  Il2CppClass *pIVar28;
  Il2CppClass **ppIVar29;
  UnityEngine_Events_UnityAction_o *__this_11;
  UI_ScoreboardScorePanel_o *pUVar30;
  UI_CategoryPanel_o *pUVar31;
  byte in_R8B;
  undefined8 unaff_R14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 uVar32;
  undefined4 uVar33;
  UnityEngine_Color_o UVar34;
  UnityEngine_Color_o UVar35;
  UnityEngine_Color_o colorA;
  UnityEngine_Color_o colorA_00;
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorC;
  UnityEngine_Color_o colorC_00;
  System_String_o *pSVar38;
  System_String_o *in_stack_ffffffffffffff18;
  MethodInfo *in_stack_ffffffffffffff20;
  UI_ElementStyle_o *in_stack_ffffffffffffff28;
  Photon_Realtime_Player_o *pPStack_d0;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  UnityEngine_Object_o *pUStack_38;
  
  pUVar30 = (__this->fields).__4__this;
  if (pUVar30 == (UI_ScoreboardScorePanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    puVar27 = &stack0xfffffffffffffff0;
    pUVar31 = (UI_CategoryPanel_o *)(pUVar30->fields).m_CachedPtr;
    if (pUVar31 != (UI_CategoryPanel_o *)0x0) {
      uVar15 = *(uint *)&(pUVar30->fields).m_CancellationTokenSource;
      ppIVar29 = (Il2CppClass **)pUVar31;
      if (g_data_057ae4e5 == '\0') {
        ppIVar29 = &TypeInfo_ScoreboardPopup;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae4e5 = '\x01';
      }
      uStack_40 = (Il2CppMethodPointer)pUVar31[1].fields.m_CachedPtr;
      if (uStack_40 == (Il2CppMethodPointer)0x0) goto label_043e9906;
      if (*(uint *)((long)uStack_40 + 0x18) <= uVar15) goto label_043e9910;
      ppIVar29 = (Il2CppClass **)(pUVar31->fields).Parent;
      if ((UI_CategoryPanel_o *)ppIVar29 == (UI_CategoryPanel_o *)0x0) {
label_043e9906:
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar25 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
        if ((bVar25 <= (((Il2CppClass *)((UI_CategoryPanel_o *)ppIVar29)->klass)->_2).naturalAligment) &&
           ((((Il2CppClass *)((UI_CategoryPanel_o *)ppIVar29)->klass)->_2).typeHierarchy[(ulong)bVar25 - 1] ==
            TypeInfo_ScoreboardPopup)) {
          __this_04 = (((UI_CategoryPanel_o *)((long)ppIVar29 + 0x68))->fields).MaskBackground;
          ppIVar29 = (Il2CppClass **)0x0;
          if (__this_04 != (UnityEngine_UI_RawImage_o *)0x0) {
            lVar26 = (long)(int)uVar15;
            pPVar14 = *(Photon_Realtime_Player_o **)((long)uStack_40 + 0x20 + lVar26 * 8);
            if (g_data_057ae4c0 == '\0') {
              auStack_48 = (undefined1  [8])0x43e4436;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains,pPVar14,0);
              uVar15 = (uint)lVar26;
              auStack_48 = (undefined1  [8])0x43e4442;
              il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
              auStack_48 = (undefined1  [8])0x43e444e;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
              g_data_057ae4c0 = '\x01';
            }
            bVar25 = (byte)uVar15;
            auStack_48 = (undefined1  [8])0x43e445f;
            UI_BasePopup__Show((UI_BasePopup_o *)__this_04,(MethodInfo *)0x0);
            *(Photon_Realtime_Player_o **)&(__this_04->fields).m_IncludeForMasking = pPVar14;
            auStack_48 = (undefined1  [8])0x43e4477;
            player = pPVar14;
            il2cpp_runtime_helper_022b4080(&(__this_04->fields).m_IncludeForMasking);
            plVar23 = *(long **)&(__this_04->fields)._useLegacyMeshGeneration_k__BackingField;
            __this_10 = &TypeInfo_InGameManager;
            if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
              auStack_48 = (undefined1  [8])0x43e4497;
              il2cpp_runtime_helper_02337ed0();
            }
            if ((pPVar14 != (Photon_Realtime_Player_o *)0x0) &&
               (pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                          (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20),
               pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
              uVar15 = (pPVar14->fields).actorNumber;
              player = (Photon_Realtime_Player_o *)(ulong)uVar15;
              unaff_RBP = &MethodInfo_Boolean_Contains;
              auStack_48 = (undefined1  [8])0x43e44cb;
              uVar15 = System_Collections_Generic_HashSet_int___Contains(pSVar4,uVar15,MethodInfo_Boolean_Contains);
              if ((Settings_TypedSetting_bool__o *)plVar23 != (Settings_TypedSetting_bool__o *)0x0) {
                player = (Photon_Realtime_Player_o *)(ulong)(uVar15 & 0xff);
                auStack_48 = (undefined1  [8])0x43e44ea;
                Settings_TypedSetting_bool___set_Value
                          ((Settings_TypedSetting_bool__o *)plVar23,uVar15 & 0xff,MethodInfo_Void_set_Value);
                pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                          (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28);
                if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                  plVar23 = &TypeInfo_InGameManager;
                  __this_10 = (long *)(__this_04->fields).m_MaskMaterial;
                  uVar15 = (pPVar14->fields).actorNumber;
                  player = (Photon_Realtime_Player_o *)(ulong)uVar15;
                  auStack_48 = (undefined1  [8])0x43e4519;
                  uVar15 = System_Collections_Generic_HashSet_int___Contains(pSVar4,uVar15,MethodInfo_Boolean_Contains);
                  if ((Settings_TypedSetting_bool__o *)__this_10 != (Settings_TypedSetting_bool__o *)0x0) {
                    player = (Photon_Realtime_Player_o *)(ulong)(uVar15 & 0xff);
                    auStack_48 = (undefined1  [8])0x43e452d;
                    Settings_TypedSetting_bool___set_Value
                              ((Settings_TypedSetting_bool__o *)__this_10,uVar15 & 0xff,MethodInfo_Void_set_Value);
                    pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                              (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
                    if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                      __this_00 = (__this_04->fields).m_ParentMask;
                      uVar15 = (pPVar14->fields).actorNumber;
                      player = (Photon_Realtime_Player_o *)(ulong)uVar15;
                      auStack_48 = (undefined1  [8])0x43e4555;
                      uVar15 = System_Collections_Generic_HashSet_int___Contains(pSVar4,uVar15,MethodInfo_Boolean_Contains);
                      __this_10 = (long *)0x0;
                      if (__this_00 != (UnityEngine_UI_RectMask2D_o *)0x0) {
                        auStack_48 = (undefined1  [8])0x43e4569;
                        Settings_TypedSetting_bool___set_Value
                                  ((Settings_TypedSetting_bool__o *)__this_00,uVar15 & 0xff,MethodInfo_Void_set_Value);
                        (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                                  (__this_04,(__this_04->klass->vtable)._23_set_color.method);
                        return;
                      }
                    }
                  }
                }
              }
            }
            auStack_48 = (undefined1  [8])0x43e4593;
            auVar37 = il2cpp_runtime_helper_022b2c90();
            auStack_58._8_8_ = plVar23;
            auStack_58._0_8_ = pPVar14;
            auStack_68._8_8_ = __this_10;
            auStack_68._0_8_ = auVar37._0_8_;
            auStack_48 = (undefined1  [8])unaff_RBP;
            if (g_data_057ae4c1 == '\0') {
              auStack_78._8_8_ = 0x43e45c7;
              il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
              g_data_057ae4c1 = '\x01';
            }
            if (((bVar25 ^ 1) == 0) && (in_R8B == 0)) {
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                auStack_78._8_8_ = 0x43e45f0;
                il2cpp_runtime_helper_02337ed0();
              }
              GameManagers_ChatManager__MutePlayer(player,auVar37._8_8_,(MethodInfo *)0x0);
              return;
            }
            if (((bVar25 ^ 1) & in_R8B) != 1) {
              return;
            }
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              auStack_78._8_8_ = 0x43e4628;
              il2cpp_runtime_helper_02337ed0();
            }
            GameManagers_ChatManager__UnmutePlayer(player,auVar37._8_8_,(MethodInfo *)0x0);
            return;
          }
          goto label_043e9906;
        }
      }
      il2cpp_runtime_helper_022b2fd0();
label_043e9910:
      pUStack_38 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2ca0();
      if (g_data_057ae4e6 == '\0') {
        uStack_40._0_4_ = 0x43e993c;
        uStack_40._4_4_ = 0;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
        uStack_40._0_4_ = 0x43e9948;
        uStack_40._4_4_ = 0;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
        g_data_057ae4e6 = '\x01';
      }
      uStack_40._0_4_ = 0x43e995e;
      uStack_40._4_4_ = 0;
      __this_09 = (UI_CategoryPanel_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
      uStack_40._0_4_ = 0x43e9973;
      uStack_40._4_4_ = 0;
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_09,MethodInfo_List_1_UnityEngine_Transform);
      ((UI_CategoryPanel_o *)((long)ppIVar29 + 0x68))->klass = __this_09;
      uStack_40._0_4_ = 0x43e9983;
      uStack_40._4_4_ = 0;
      il2cpp_runtime_helper_022b4080((UI_CategoryPanel_o *)((long)ppIVar29 + 0x68));
      *(undefined4 *)&(((UI_CategoryPanel_o *)((long)ppIVar29 + 0x68))->fields).m_CancellationTokenSource =
           0x3f800000;
      UI_CategoryPanel___ctor((UI_CategoryPanel_o *)ppIVar29,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    ppIVar29 = (Il2CppClass **)(pUVar31->fields).m_CachedPtr;
    if ((UI_ScoreboardScorePanel_o *)ppIVar29 == (UI_ScoreboardScorePanel_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if ((((UI_ScoreboardScorePanel_o *)ppIVar29)->fields).m_CachedPtr == 0) {
        il2cpp_runtime_helper_022b2c90();
        return;
      }
      pPVar14 = (Photon_Realtime_Player_o *)
                (((UI_ScoreboardScorePanel_o *)ppIVar29)->fields).m_CancellationTokenSource;
      if (g_data_057ae4e4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&".");
        g_data_057ae4e4 = '\x01';
      }
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_ChatManager__KickPlayer(pPVar14,1,0,".",(MethodInfo *)0x0);
      return;
    }
    uVar15 = *(uint *)&(pUVar31->fields).m_CancellationTokenSource;
  }
  else {
    uVar3 = (__this->fields).index;
    unaff_RBP = (MethodInfo_33D4DF0 **)(ulong)uVar3;
    puVar27 = &stack0xffffffffffffffe8;
    pIVar28 = (Il2CppClass *)unaff_RBP;
    ppIVar29 = (Il2CppClass **)pUVar30;
    if (g_data_057ae4e2 == '\0') {
      ppIVar29 = &TypeInfo_ScoreboardPopup;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae4e2 = '\x01';
    }
    uVar15 = (uint)pIVar28;
    pPVar13 = (pUVar30->fields)._lastPlayers;
    if (pPVar13 == (Photon_Realtime_Player_array *)0x0) goto label_043e9696;
    if (uVar3 < (uint)pPVar13->max_length) {
      ppIVar29 = (Il2CppClass **)(pUVar30->fields).Parent;
      if ((UI_ScoreboardScorePanel_o *)ppIVar29 == (UI_ScoreboardScorePanel_o *)0x0) {
label_043e9696:
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar25 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
        pIVar28 = TypeInfo_ScoreboardPopup;
        if ((bVar25 <= (((UI_ScoreboardScorePanel_o *)ppIVar29)->klass->_2).naturalAligment) &&
           ((((UI_ScoreboardScorePanel_o *)ppIVar29)->klass->_2).typeHierarchy[(ulong)bVar25 - 1] ==
            TypeInfo_ScoreboardPopup)) {
          __this_02 = (UI_ScoreboardProfilePopup_o *)
                      (((UI_ScoreboardScorePanel_o *)((long)ppIVar29 + 0x88))->fields).DoublePanelLeft;
          ppIVar29 = (Il2CppClass **)0x0;
          if (__this_02 != (UI_ScoreboardProfilePopup_o *)0x0) {
            pPStack_d0 = pPVar13->m_Items[(int)uVar3];
            if (g_data_057ae4d1 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter,pPStack_d0,0);
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
            UI_BasePopup__Show((UI_BasePopup_o *)__this_02,(MethodInfo *)0x0);
            pSVar5 = (__this_02->fields)._items;
            if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043e6a1f;
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                       (System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
            auStack_b8._16_8_ = pUStack_38;
            auStack_b8._0_8_ = auStack_48;
            auStack_b8._8_8_ = uStack_40;
            while (__this_05.fields._8_8_ = in_stack_ffffffffffffff20,
                  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18,
                  __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28,
                  bVar16 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     (__this_05,(MethodInfo_321A1D0 *)auStack_b8), obj = auStack_b8._16_8_,
                  (char)bVar16 != '\0') {
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
            }
            __this_06.fields._8_8_ = in_stack_ffffffffffffff20;
            __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
            __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_06,(MethodInfo_321A1C0 *)auStack_b8);
            do {
              pSVar5 = (__this_02->fields)._items;
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
                    (__this_01 = *(System_Collections_Generic_Dictionary_int__object__o **)
                                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
                    __this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
                   (pIVar17 = System_Collections_Generic_Dictionary_int__object___get_Item
                                        (__this_01,(pPStack_d0->fields).actorNumber,MethodInfo_PlayerInfo_get_Item),
                   pIVar17 != (Il2CppObject *)0x0)) {
                  ppSVar2 = &(__this_02->fields)._profile;
                  (__this_02->fields)._profile = (Settings_ProfileSettings_o *)pIVar17[2].klass;
                  il2cpp_runtime_helper_022b4080(ppSVar2);
                  pSVar18 = (System_String_o *)
                            (*(__this_02->klass->vtable)._4_get_ThemePanel.methodPtr)
                                      (__this_02,(__this_02->klass->vtable)._4_get_ThemePanel.method);
                  in_stack_ffffffffffffff28 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                  UI_ElementStyle___ctor(in_stack_ffffffffffffff28,0x16,120.0,20.0,pSVar18,(MethodInfo *)0x0);
                  pUVar19 = UI_ElementFactory__CreateHorizontalGroup
                                      ((__this_02->fields).SinglePanel,25.0,4,(MethodInfo *)0x0);
                  if ((pUVar19 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar20 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0),
                     pUVar20 != (UnityEngine_Transform_o *)0x0)) {
                    pSVar5 = (__this_02->fields)._items;
                    pUVar19 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar20,(MethodInfo *)0x0);
                    lVar26 = MethodInfo_Void_Add;
                    if (pSVar5 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                      piVar1 = &(pSVar5->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pUVar6 = (pSVar5->fields)._items;
                      if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                        uVar15 = (pSVar5->fields)._size;
                        if (uVar15 < (uint)pUVar6->max_length) {
                          (pSVar5->fields)._size = uVar15 + 1;
                          pUVar6->m_Items[(int)uVar15] = pUVar19;
                          il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar15);
                          pSVar7 = *ppSVar2;
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar5,
                                     (Il2CppObject *)pUVar19,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                          pSVar7 = *ppSVar2;
                        }
                        if ((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                           (pSVar8 = (pSVar7->fields).ProfileIcon, pSVar8 != (Settings_StringSetting_o *)0x0))
                        {
                          pSVar18 = (pSVar8->fields)._value;
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pSVar18 = UI_UIManager__GetProfileIcon(pSVar18,(MethodInfo *)0x0);
                          pSVar18 = System_String__Concat_3ae5ba0("Icons/Profile/",pSVar18,(MethodInfo *)0x0);
                          uVar32 = 0;
                          uVar33 = 0;
                          UI_ElementFactory__CreateRawImage
                                    (pUVar20,in_stack_ffffffffffffff28,pSVar18,256.0,256.0,(MethodInfo *)0x0);
                          pSVar7 = *ppSVar2;
                          if (((((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                                (pSVar9 = (pSVar7->fields).Name, pSVar9 != (Settings_NameSetting_o *)0x0)) &&
                               (pSVar10 = (pSVar7->fields).NameEffectEnabled,
                               pSVar10 != (Settings_BoolSetting_o *)0x0)) &&
                              ((pSVar8 = (pSVar7->fields).NameEffect,
                               pSVar8 != (Settings_StringSetting_o *)0x0 &&
                               (pSVar11 = (pSVar7->fields).NameEffectColorA,
                               pSVar11 != (Settings_ColorSetting_o *)0x0)))) &&
                             (pUVar12 = (pSVar11->fields)._value, pUVar12 != (Utility_Color255_o *)0x0)) {
                            pSVar18 = (pSVar9->fields)._value;
                            bVar25 = *(byte *)((long)&(pSVar10->fields).DefaultValue + 1);
                            pSVar21 = (pSVar8->fields)._value;
                            UVar34 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                            if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                               (pSVar11 = ((*ppSVar2)->fields).NameEffectColorB,
                               pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                              auStack_58._8_4_ = uVar32;
                              auStack_58._0_8_ = UVar34.fields._8_8_;
                              auStack_58._12_4_ = uVar33;
                              pUVar12 = (pSVar11->fields)._value;
                              if (pUVar12 != (Utility_Color255_o *)0x0) {
                                UVar35 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                                if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                   (pSVar11 = ((*ppSVar2)->fields).NameEffectColorC,
                                   pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                                  auStack_78._8_4_ = uVar32;
                                  auStack_78._0_8_ = UVar35.fields._8_8_;
                                  auStack_78._12_4_ = uVar33;
                                  auStack_68._8_4_ = extraout_XMM0_Dc;
                                  auStack_68._0_8_ = UVar35.fields._0_8_;
                                  auStack_68._12_4_ = extraout_XMM0_Dd;
                                  pUVar12 = (pSVar11->fields)._value;
                                  if (pUVar12 != (Utility_Color255_o *)0x0) {
                                    UVar35 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                                    if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                       (pSVar11 = ((*ppSVar2)->fields).NameEffectColorD,
                                       pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                                      auStack_b8._40_4_ = uVar32;
                                      auStack_b8._32_8_ = UVar35.fields._8_8_;
                                      auStack_b8._44_4_ = uVar33;
                                      auStack_88._8_4_ = extraout_XMM0_Dc_00;
                                      auStack_88._0_8_ = UVar35.fields._0_8_;
                                      auStack_88._12_4_ = extraout_XMM0_Dd_00;
                                      pUVar12 = (pSVar11->fields)._value;
                                      if (pUVar12 != (Utility_Color255_o *)0x0) {
                                        UVar35 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                                        uVar32 = auStack_58._8_4_;
                                        uVar33 = auStack_58._12_4_;
                                        colorA.fields.b = (float)(int)auStack_58._0_8_;
                                        colorA.fields.a = (float)(int)((ulong)auStack_58._0_8_ >> 0x20);
                                        colorA.fields.r = (float)(int)UVar34.fields._0_8_;
                                        colorA.fields.g = (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20);
                                        UVar34.fields.b = (float)(int)auStack_78._0_8_;
                                        UVar34.fields.a = (float)(int)((ulong)auStack_78._0_8_ >> 0x20);
                                        UVar34.fields.r = (float)(int)auStack_68._0_8_;
                                        UVar34.fields.g = (float)(int)((ulong)auStack_68._0_8_ >> 0x20);
                                        colorC.fields.b = (float)(int)auStack_b8._32_8_;
                                        colorC.fields.a = (float)(int)((ulong)auStack_b8._32_8_ >> 0x20);
                                        colorC.fields.r = (float)(int)auStack_88._0_8_;
                                        colorC.fields.g = (float)(int)((ulong)auStack_88._0_8_ >> 0x20);
                                        UI_ScoreboardProfilePopup__AddEffectRow
                                                  (__this_02,in_stack_ffffffffffffff28,pPStack_d0,"Name"
                                                   ,pSVar18,(uint)bVar25,pSVar21,colorA,UVar34,colorC,UVar35,
                                                   in_stack_ffffffffffffff20);
                                        pSVar7 = (__this_02->fields)._profile;
                                        in_stack_ffffffffffffff18 = pSVar21;
                                        if ((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                                           (pSVar9 = (pSVar7->fields).Guild,
                                           pSVar9 != (Settings_NameSetting_o *)0x0)) {
                                          pSVar18 = (pSVar9->fields)._value;
                                          if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pSVar18 = Anticheat_ChatFilter__FilterBadWords
                                                              (pSVar18,(MethodInfo *)0x0);
                                          if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pSVar18 = MiscExtensions__HexColor(pSVar18,(MethodInfo *)0x0);
                                          in_stack_ffffffffffffff18 = pSVar21;
                                          if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                             (pSVar8 = ((*ppSVar2)->fields).GuildRoleSprite,
                                             pSVar8 != (Settings_StringSetting_o *)0x0)) {
                                            pSVar38 = (pSVar8->fields)._value;
                                            if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                              il2cpp_runtime_helper_02337ed0();
                                            }
                                            pSVar18 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                                                                (pPStack_d0,pSVar18,pSVar38,(MethodInfo *)0x0)
                                            ;
                                            pSVar7 = *ppSVar2;
                                            in_stack_ffffffffffffff18 = pSVar21;
                                            if ((((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                                                 (pSVar10 = (pSVar7->fields).GuildEffectEnabled,
                                                 pSVar10 != (Settings_BoolSetting_o *)0x0)) &&
                                                (pSVar8 = (pSVar7->fields).GuildEffect,
                                                pSVar8 != (Settings_StringSetting_o *)0x0)) &&
                                               ((pSVar11 = (pSVar7->fields).GuildEffectColorA,
                                                pSVar11 != (Settings_ColorSetting_o *)0x0 &&
                                                (pUVar12 = (pSVar11->fields)._value,
                                                pUVar12 != (Utility_Color255_o *)0x0)))) {
                                              bVar25 = *(byte *)((long)&(pSVar10->fields).DefaultValue + 1);
                                              pSVar38 = (pSVar8->fields)._value;
                                              UVar34 = Utility_Color255__ToColor(pUVar12,(MethodInfo *)0x0);
                                              in_stack_ffffffffffffff18 = pSVar21;
                                              if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                                 (pSVar11 = ((*ppSVar2)->fields).GuildEffectColorB,
                                                 pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                                                auStack_58._8_4_ = uVar32;
                                                auStack_58._0_8_ = UVar34.fields._8_8_;
                                                auStack_58._12_4_ = uVar33;
                                                pUVar12 = (pSVar11->fields)._value;
                                                if (pUVar12 != (Utility_Color255_o *)0x0) {
                                                  UVar35 = Utility_Color255__ToColor
                                                                     (pUVar12,(MethodInfo *)0x0);
                                                  in_stack_ffffffffffffff18 = pSVar21;
                                                  if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                                     (pSVar11 = ((*ppSVar2)->fields).GuildEffectColorC,
                                                     pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                                                    auStack_78._8_4_ = uVar32;
                                                    auStack_78._0_8_ = UVar35.fields._8_8_;
                                                    auStack_78._12_4_ = uVar33;
                                                    auStack_68._8_4_ = extraout_XMM0_Dc_01;
                                                    auStack_68._0_8_ = UVar35.fields._0_8_;
                                                    auStack_68._12_4_ = extraout_XMM0_Dd_01;
                                                    pUVar12 = (pSVar11->fields)._value;
                                                    if (pUVar12 != (Utility_Color255_o *)0x0) {
                                                      UVar35 = Utility_Color255__ToColor
                                                                         (pUVar12,(MethodInfo *)0x0);
                                                      in_stack_ffffffffffffff18 = pSVar21;
                                                      if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                                         (pSVar11 = ((*ppSVar2)->fields).GuildEffectColorD,
                                                         pSVar11 != (Settings_ColorSetting_o *)0x0)) {
                                                        auStack_b8._40_4_ = uVar32;
                                                        auStack_b8._32_8_ = UVar35.fields._8_8_;
                                                        auStack_b8._44_4_ = uVar33;
                                                        auStack_88._8_4_ = extraout_XMM0_Dc_02;
                                                        auStack_88._0_8_ = UVar35.fields._0_8_;
                                                        auStack_88._12_4_ = extraout_XMM0_Dd_02;
                                                        pUVar12 = (pSVar11->fields)._value;
                                                        if (pUVar12 != (Utility_Color255_o *)0x0) {
                                                          UVar35 = Utility_Color255__ToColor
                                                                             (pUVar12,(MethodInfo *)0x0);
                                                          colorA_00.fields.b = (float)(int)auStack_58._0_8_;
                                                          colorA_00.fields.a =
                                                               (float)(int)((ulong)auStack_58._0_8_ >> 0x20);
                                                          colorA_00.fields.r = (float)(int)UVar34.fields._0_8_
                                                          ;
                                                          colorA_00.fields.g =
                                                               (float)(int)((ulong)UVar34.fields._0_8_ >> 0x20
                                                                           );
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
                                                                    (__this_02,in_stack_ffffffffffffff28,
                                                                     pPStack_d0,"Guild",pSVar18,
                                                                     (uint)bVar25,pSVar38,colorA_00,colorB,
                                                                     colorC_00,UVar35,
                                                                     in_stack_ffffffffffffff20);
                                                          pUVar20 = (__this_02->fields).SinglePanel;
                                                          pSVar5 = (__this_02->fields)._items;
                                                          pSVar18 = UI_UIManager__GetLocaleCommon
                                                                              ("Social",(MethodInfo *)0x0)
                                                          ;
                                                          pSVar7 = (__this_02->fields)._profile;
                                                          in_stack_ffffffffffffff18 = pSVar38;
                                                          if ((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                                                             (pSVar8 = (pSVar7->fields).Social,
                                                             pSVar8 != (Settings_StringSetting_o *)0x0)) {
                                                            pSVar21 = Anticheat_ChatFilter__FilterBadWords
                                                                                ((pSVar8->fields)._value,
                                                                                 (MethodInfo *)0x0);
                                                            pSVar21 = MiscExtensions__HexColor
                                                                                (pSVar21,(MethodInfo *)0x0);
                                                            pSVar18 = System_String__Concat_3af7470
                                                                                ("<b>",pSVar18,
                                                                                 ": </b>",pSVar21,
                                                                                 (MethodInfo *)0x0);
                                                            pUVar19 = UI_ElementFactory__CreateDefaultLabel
                                                                                (pUVar20,
                                                       in_stack_ffffffffffffff28,pSVar18,0,3,(MethodInfo *)0x0
                                                       );
                                                       lVar26 = MethodInfo_Void_Add;
                                                       in_stack_ffffffffffffff18 = pSVar38;
                                                       if (pSVar5 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar5->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar6 = (pSVar5->fields)._items;
                                                         if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar15 = (pSVar5->fields)._size;
                                                           if (uVar15 < (uint)pUVar6->max_length) {
                                                             (pSVar5->fields)._size = uVar15 + 1;
                                                             pUVar6->m_Items[(int)uVar15] = pUVar19;
                                                             il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar15)
                                                             ;
                                                             in_stack_ffffffffffffff18 = pSVar38;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       in_stack_ffffffffffffff18 = pSVar38;
                                                       }
                                                       pUVar20 = (__this_02->fields).SinglePanel;
                                                       pSVar5 = (__this_02->fields)._items;
                                                       pSVar18 = UI_UIManager__GetLocaleCommon
                                                                           ("About",(MethodInfo *)0x0);
                                                       pSVar7 = (__this_02->fields)._profile;
                                                       if ((pSVar7 != (Settings_ProfileSettings_o *)0x0) &&
                                                          (pSVar8 = (pSVar7->fields).About,
                                                          pSVar8 != (Settings_StringSetting_o *)0x0)) {
                                                         pSVar21 = Anticheat_ChatFilter__FilterBadWords
                                                                             ((pSVar8->fields)._value,
                                                                              (MethodInfo *)0x0);
                                                         pSVar21 = MiscExtensions__HexColor
                                                                             (pSVar21,(MethodInfo *)0x0);
                                                         pSVar18 = System_String__Concat_3af7470
                                                                             ("<b>",pSVar18,
                                                                              ": </b>",pSVar21,
                                                                              (MethodInfo *)0x0);
                                                         pUVar19 = UI_ElementFactory__CreateDefaultLabel
                                                                             (pUVar20,
                                                       in_stack_ffffffffffffff28,pSVar18,0,3,(MethodInfo *)0x0
                                                       );
                                                       lVar26 = MethodInfo_Void_Add;
                                                       if (pSVar5 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar5->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar6 = (pSVar5->fields)._items;
                                                         if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar15 = (pSVar5->fields)._size;
                                                           if (uVar15 < (uint)pUVar6->max_length) {
                                                             (pSVar5->fields)._size = uVar15 + 1;
                                                             pUVar6->m_Items[(int)uVar15] = pUVar19;
                                                             il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar15,
                                                                                pUVar19);
                                                             method_00 = extraout_RDX;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       method_00 = extraout_RDX_00;
                                                       }
                                                       pSVar18 = 
                                                       UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName
                                                                 (__this_02,pPStack_d0,method_00);
                                                       pSVar21 = UI_ScoreboardProfilePopup__GetDisplayUserId
                                                                           (__this_02,pPStack_d0,method_01);
                                                       tierLabel = (System_String_o **)auStack_48;
                                                       if (g_data_057ae4d4 == '\0') {
                                                         il2cpp_runtime_helper_023445d0(&"None");
                                                         g_data_057ae4d4 = '\x01';
                                                       }
                                                       auStack_48 = (undefined1  [8])0x0;
                                                       bVar16 = 
                                                       PatreonEffects_PatreonHelper__TryGetRemoteTierLabel
                                                                 (pPStack_d0,tierLabel,(MethodInfo *)0x0);
                                                       if ((char)bVar16 == '\0') {
                                                         if ((char)(pPStack_d0->fields).IsLocal != '\0') {
                                                           tierLabel = (System_String_o **)auStack_48;
                                                           bVar16 = 
                                                       PatreonEffects_PatreonHelper__TryGetLocalTierLabel
                                                                 (tierLabel,(MethodInfo *)0x0);
                                                       if ((char)bVar16 != '\0') goto label_043e66c9;
                                                       }
                                                       tierLabel = &"None";
                                                       }
label_043e66c9:
                                                       pSVar38 = *tierLabel;
                                                       bVar16 = System_String__op_Inequality
                                                                          (pSVar38,"None",
                                                                           (MethodInfo *)0x0);
                                                       pSVar22 = Anticheat_ChatFilter__FilterBadWords
                                                                           (pSVar18,(MethodInfo *)0x0);
                                                       pSVar22 = MiscExtensions__HexColor
                                                                           (pSVar22,(MethodInfo *)0x0);
                                                       if ((char)bVar16 == '\0') {
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
                                                                                ("Thank you, ",pSVar22,
                                                                                 " for being a supporter.",
                                                                                 (MethodInfo *)0x0);
                                                       }
                                                       pUVar20 = (__this_02->fields).SinglePanel;
                                                       pSVar5 = (__this_02->fields)._items;
                                                       if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       pSVar18 = Anticheat_ChatFilter__FilterBadWords
                                                                           (pSVar18,(MethodInfo *)0x0);
                                                       if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       pSVar18 = MiscExtensions__HexColor
                                                                           (pSVar18,(MethodInfo *)0x0);
                                                       pSVar18 = System_String__Concat_3ae5ba0
                                                                           ("<b>Display Name: </b>",pSVar18,
                                                                            (MethodInfo *)0x0);
                                                       pUVar19 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar20,in_stack_ffffffffffffff28,
                                                                            pSVar18,0,3,(MethodInfo *)0x0);
                                                       lVar26 = MethodInfo_Void_Add;
                                                       if (pSVar5 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar5->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar6 = (pSVar5->fields)._items;
                                                         if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar15 = (pSVar5->fields)._size;
                                                           if (uVar15 < (uint)pUVar6->max_length) {
                                                             (pSVar5->fields)._size = uVar15 + 1;
                                                             pUVar6->m_Items[(int)uVar15] = pUVar19;
                                                             il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar15)
                                                             ;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar20 = (__this_02->fields).SinglePanel;
                                                       pSVar5 = (__this_02->fields)._items;
                                                       pSVar18 = MiscExtensions__HexColor
                                                                           (pSVar21,(MethodInfo *)0x0);
                                                       pSVar18 = System_String__Concat_3ae5ba0
                                                                           ("<b>User ID: </b>",pSVar18,
                                                                            (MethodInfo *)0x0);
                                                       pUVar19 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar20,in_stack_ffffffffffffff28,
                                                                            pSVar18,0,3,(MethodInfo *)0x0);
                                                       lVar26 = MethodInfo_Void_Add;
                                                       if (pSVar5 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar5->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar6 = (pSVar5->fields)._items;
                                                         if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar15 = (pSVar5->fields)._size;
                                                           if (uVar15 < (uint)pUVar6->max_length) {
                                                             (pSVar5->fields)._size = uVar15 + 1;
                                                             pUVar6->m_Items[(int)uVar15] = pUVar19;
                                                             il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar15)
                                                             ;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar20 = (__this_02->fields).SinglePanel;
                                                       pSVar5 = (__this_02->fields)._items;
                                                       pSVar18 = MiscExtensions__HexColor
                                                                           (pSVar38,(MethodInfo *)0x0);
                                                       pSVar18 = System_String__Concat_3ae5ba0
                                                                           ("<b>Patreon Tier: </b>",pSVar18,
                                                                            (MethodInfo *)0x0);
                                                       pUVar19 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar20,in_stack_ffffffffffffff28,
                                                                            pSVar18,0,3,(MethodInfo *)0x0);
                                                       lVar26 = MethodInfo_Void_Add;
                                                       if (pSVar5 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar5->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar6 = (pSVar5->fields)._items;
                                                         if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar15 = (pSVar5->fields)._size;
                                                           if (uVar15 < (uint)pUVar6->max_length) {
                                                             (pSVar5->fields)._size = uVar15 + 1;
                                                             pUVar6->m_Items[(int)uVar15] = pUVar19;
                                                             il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar15,
                                                                                pUVar19);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar20 = (__this_02->fields).SinglePanel;
                                                       pSVar5 = (__this_02->fields)._items;
                                                       pSVar18 = System_String__Concat_3ae5ba0
                                                                           ("<b>Patreon Supporter: </b>",
                                                                            (System_String_o *)pPStack_d0,
                                                                            (MethodInfo *)0x0);
                                                       pUVar19 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar20,in_stack_ffffffffffffff28,
                                                                            pSVar18,0,3,(MethodInfo *)0x0);
                                                       lVar26 = MethodInfo_Void_Add;
                                                       if (pSVar5 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar5->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar6 = (pSVar5->fields)._items;
                                                         if (pUVar6 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar15 = (pSVar5->fields)._size;
                                                           if (uVar15 < (uint)pUVar6->max_length) {
                                                             (pSVar5->fields)._size = uVar15 + 1;
                                                             pUVar6->m_Items[(int)uVar15] = pUVar19;
                                                             il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar15,
                                                                                pUVar19);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,(Il2CppObject *)pUVar19,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0)
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
              auVar36 = il2cpp_runtime_helper_022b2c90();
              if (auVar36._8_4_ != 1) goto label_043e6a6b;
              plVar23 = (long *)__cxa_begin_catch(auVar36._0_8_);
              lVar26 = *plVar23;
              __cxa_end_catch();
              __this_07.fields._8_8_ = in_stack_ffffffffffffff20;
              __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
              __this_07.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_07,(MethodInfo_321A1C0 *)auStack_b8);
            } while (lVar26 == 0);
            il2cpp_runtime_helper_022fefe0(lVar26);
label_043e6a6b:
            __this_08.fields._8_8_ = in_stack_ffffffffffffff20;
            __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
            __this_08.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_08,(MethodInfo_321A1C0 *)auStack_b8);
            _Unwind_Resume(auVar36._0_8_);
          }
          goto label_043e9696;
        }
      }
      uVar15 = (uint)pIVar28;
      il2cpp_runtime_helper_022b2fd0();
    }
    il2cpp_runtime_helper_022b2ca0();
    unaff_RBX = pUVar30;
  }
  *(MethodInfo_33D4DF0 ***)(puVar27 + -8) = unaff_RBP;
  *(undefined8 *)(puVar27 + -0x10) = unaff_R14;
  *(UI_ScoreboardScorePanel_o **)(puVar27 + -0x18) = unaff_RBX;
  if (g_data_057ae4e3 == '\0') {
    *(undefined8 *)(puVar27 + -0x20) = 0x43e96ce;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ScoreboardPopup);
    *(undefined8 *)(puVar27 + -0x20) = 0x43e96da;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnClickKick_b__0);
    *(undefined8 *)(puVar27 + -0x20) = 0x43e96e6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    *(undefined8 *)(puVar27 + -0x20) = 0x43e96f2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    *(undefined8 *)(puVar27 + -0x20) = 0x43e96fe;
    il2cpp_runtime_helper_023445d0(&"Kick this player?");
    g_data_057ae4e3 = '\x01';
  }
  *(undefined8 *)(puVar27 + -0x20) = 0x43e9714;
  pUVar24 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  *(undefined8 *)(puVar27 + -0x20) = 0x43e9721;
  __this_11 = pUVar24;
  System_Object___ctor((Il2CppObject *)pUVar24,(MethodInfo *)0x0);
  if (pUVar24 == (UnityEngine_Events_UnityAction_o *)0x0) {
label_043e97ee:
    *(undefined8 *)(puVar27 + -0x20) = 0x43e97f3;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_11 = (UnityEngine_Events_UnityAction_o *)&pUVar24->fields;
    (pUVar24->fields).method_ptr = (intptr_t)ppIVar29;
    *(undefined8 *)(puVar27 + -0x20) = 0x43e973a;
    il2cpp_runtime_helper_022b4080();
    pPVar13 = (((UI_ScoreboardScorePanel_o *)ppIVar29)->fields)._lastPlayers;
    if (pPVar13 == (Photon_Realtime_Player_array *)0x0) goto label_043e97ee;
    if ((uint)pPVar13->max_length <= uVar15) goto label_043e97f8;
    (pUVar24->fields).invoke_impl = (intptr_t)pPVar13->m_Items[(int)uVar15];
    *(undefined8 *)(puVar27 + -0x20) = 0x43e9768;
    il2cpp_runtime_helper_022b4080(&(pUVar24->fields).invoke_impl);
    __this_11 = (UnityEngine_Events_UnityAction_o *)(((UI_ScoreboardScorePanel_o *)ppIVar29)->fields).Parent;
    if (__this_11 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043e97ee;
    bVar25 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
    if ((bVar25 <= (((Il2CppClass *)__this_11->klass)->_2).naturalAligment) &&
       ((((Il2CppClass *)__this_11->klass)->_2).typeHierarchy[(ulong)bVar25 - 1] == TypeInfo_ScoreboardPopup)) {
      __this_03 = (UI_ConfirmPopup_o *)__this_11[1].fields.extra_arg;
      *(undefined8 *)(puVar27 + -0x20) = 0x43e97b1;
      pUVar24 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      *(undefined8 *)(puVar27 + -0x20) = 0x43e97cb;
      __this_11 = pUVar24;
      UnityEngine_Events_UnityAction___ctor();
      if (__this_03 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_03,"Kick this player?",pUVar24,(System_String_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      goto label_043e97ee;
    }
  }
  *(undefined8 *)(puVar27 + -0x20) = 0x43e97f8;
  il2cpp_runtime_helper_022b2fd0();
label_043e97f8:
  *(undefined8 *)(puVar27 + -0x20) = 0x43e97fd;
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this_11,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel.<>c__DisplayClass14_0$$<CreateRow>b__1
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass14_0___CreateRow_b__1 (UI_ScoreboardScorePanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x43e99c0

void UI_ScoreboardScorePanel___c__DisplayClass14_0___CreateRow_b__1
               (UI_ScoreboardScorePanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  UI_BasePopup_c *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar1;
  Settings_TypedSetting_bool__o *pSVar2;
  long lVar3;
  UI_ConfirmPopup_o *__this_01;
  Photon_Realtime_Player_array *pPVar4;
  UI_BasePopup_o *__this_02;
  Photon_Realtime_Player_o *pPVar5;
  uint uVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  System_Collections_Generic_List_Transform__o *__this_03;
  byte bVar8;
  long lVar9;
  System_String_o *muteType;
  Photon_Realtime_Player_o *player;
  UnityEngine_Events_UnityAction_o *__this_04;
  Il2CppClass **__this_05;
  UI_ScoreboardScorePanel_o *pUVar10;
  byte in_R8B;
  
  pUVar10 = (__this->fields).__4__this;
  if (pUVar10 != (UI_ScoreboardScorePanel_o *)0x0) {
    uVar6 = (__this->fields).index;
    __this_05 = (Il2CppClass **)pUVar10;
    if (g_data_057ae4e5 == '\0') {
      __this_05 = &TypeInfo_ScoreboardPopup;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae4e5 = '\x01';
    }
    pPVar4 = (pUVar10->fields)._lastPlayers;
    if (pPVar4 == (Photon_Realtime_Player_array *)0x0) goto label_043e9906;
    if ((uint)pPVar4->max_length <= uVar6) goto label_043e9910;
    __this_05 = (Il2CppClass **)(pUVar10->fields).Parent;
    if ((UI_ScoreboardScorePanel_o *)__this_05 == (UI_ScoreboardScorePanel_o *)0x0) {
label_043e9906:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar8 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
      if ((bVar8 <= (((UI_ScoreboardScorePanel_o *)__this_05)->klass->_2).naturalAligment) &&
         ((((UI_ScoreboardScorePanel_o *)__this_05)->klass->_2).typeHierarchy[(ulong)bVar8 - 1] ==
          TypeInfo_ScoreboardPopup)) {
        __this_02 = (UI_BasePopup_o *)
                    (((UI_ScoreboardScorePanel_o *)((long)__this_05 + 0x88))->fields)._popups;
        __this_05 = (Il2CppClass **)0x0;
        if (__this_02 != (UI_BasePopup_o *)0x0) {
          lVar9 = (long)(int)uVar6;
          pPVar5 = pPVar4->m_Items[lVar9];
          if (g_data_057ae4c0 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains,pPVar5,0);
            uVar6 = (uint)lVar9;
            il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
            g_data_057ae4c0 = '\x01';
          }
          bVar8 = (byte)uVar6;
          UI_BasePopup__Show(__this_02,(MethodInfo *)0x0);
          __this_02[1].fields.SinglePanel = (UnityEngine_Transform_o *)pPVar5;
          player = pPVar5;
          il2cpp_runtime_helper_022b4080(&__this_02[1].fields.SinglePanel);
          __this_00 = __this_02[1].klass;
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if ((pPVar5 != (Photon_Realtime_Player_o *)0x0) &&
             (pSVar1 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20),
             pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
            uVar6 = (pPVar5->fields).actorNumber;
            player = (Photon_Realtime_Player_o *)(ulong)uVar6;
            uVar6 = System_Collections_Generic_HashSet_int___Contains(pSVar1,uVar6,MethodInfo_Boolean_Contains);
            if (__this_00 != (UI_BasePopup_c *)0x0) {
              player = (Photon_Realtime_Player_o *)(ulong)(uVar6 & 0xff);
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)__this_00,uVar6 & 0xff,MethodInfo_Void_set_Value);
              pSVar1 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28);
              if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                pSVar2 = __this_02[1].monitor;
                uVar6 = (pPVar5->fields).actorNumber;
                player = (Photon_Realtime_Player_o *)(ulong)uVar6;
                uVar6 = System_Collections_Generic_HashSet_int___Contains(pSVar1,uVar6,MethodInfo_Boolean_Contains);
                if (pSVar2 != (Settings_TypedSetting_bool__o *)0x0) {
                  player = (Photon_Realtime_Player_o *)(ulong)(uVar6 & 0xff);
                  Settings_TypedSetting_bool___set_Value(pSVar2,uVar6 & 0xff,MethodInfo_Void_set_Value);
                  pSVar1 = *(System_Collections_Generic_HashSet_int__o **)
                            (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
                  if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                    pSVar2 = (Settings_TypedSetting_bool__o *)__this_02[1].fields.m_CachedPtr;
                    uVar6 = (pPVar5->fields).actorNumber;
                    player = (Photon_Realtime_Player_o *)(ulong)uVar6;
                    uVar6 = System_Collections_Generic_HashSet_int___Contains(pSVar1,uVar6,MethodInfo_Boolean_Contains);
                    if (pSVar2 != (Settings_TypedSetting_bool__o *)0x0) {
                      Settings_TypedSetting_bool___set_Value(pSVar2,uVar6 & 0xff,MethodInfo_Void_set_Value);
                      (*(__this_02->klass->vtable)._23_SyncSettingElements.methodPtr)
                                (__this_02,(__this_02->klass->vtable)._23_SyncSettingElements.method);
                      return;
                    }
                  }
                }
              }
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057ae4c1 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
            g_data_057ae4c1 = '\x01';
          }
          if (((bVar8 ^ 1) == 0) && (in_R8B == 0)) {
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            GameManagers_ChatManager__MutePlayer(player,muteType,(MethodInfo *)0x0);
            return;
          }
          if (((bVar8 ^ 1) & in_R8B) == 1) {
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            GameManagers_ChatManager__UnmutePlayer(player,muteType,(MethodInfo *)0x0);
            return;
          }
          return;
        }
        goto label_043e9906;
      }
    }
    il2cpp_runtime_helper_022b2fd0();
label_043e9910:
    il2cpp_runtime_helper_022b2ca0();
    if (g_data_057ae4e6 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
      g_data_057ae4e6 = '\x01';
    }
    __this_03 = (System_Collections_Generic_List_Transform__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_Transform);
    (((UI_ScoreboardScorePanel_o *)__this_05)->fields)._rows = __this_03;
    il2cpp_runtime_helper_022b4080(&(((UI_ScoreboardScorePanel_o *)__this_05)->fields)._rows);
    (((UI_ScoreboardScorePanel_o *)__this_05)->fields)._currentSyncDelay = 1.0;
    UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_05,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  lVar9 = (pUVar10->fields).m_CachedPtr;
  if (lVar9 == 0) {
    il2cpp_runtime_helper_022b2c90();
    if (*(long *)(lVar9 + 0x10) != 0) {
      pPVar5 = *(Photon_Realtime_Player_o **)(lVar9 + 0x18);
      if (g_data_057ae4e4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&".");
        g_data_057ae4e4 = '\x01';
      }
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_ChatManager__KickPlayer(pPVar5,1,0,".",(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  uVar6 = *(uint *)&(pUVar10->fields).m_CancellationTokenSource;
  if (g_data_057ae4e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnClickKick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Kick this player?");
    g_data_057ae4e3 = '\x01';
  }
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  __this_04 = pUVar7;
  System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_Events_UnityAction_o *)0x0) {
label_043e97ee:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_04 = (UnityEngine_Events_UnityAction_o *)&pUVar7->fields;
    (pUVar7->fields).method_ptr = lVar9;
    il2cpp_runtime_helper_022b4080();
    lVar3 = *(long *)(lVar9 + 0x78);
    if (lVar3 == 0) goto label_043e97ee;
    if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_043e97f8;
    (pUVar7->fields).invoke_impl = *(intptr_t *)(lVar3 + 0x20 + (long)(int)uVar6 * 8);
    il2cpp_runtime_helper_022b4080(&(pUVar7->fields).invoke_impl);
    __this_04 = *(UnityEngine_Events_UnityAction_o **)(lVar9 + 0x60);
    if (__this_04 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043e97ee;
    bVar8 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
    if ((bVar8 <= (((Il2CppClass *)__this_04->klass)->_2).naturalAligment) &&
       ((((Il2CppClass *)__this_04->klass)->_2).typeHierarchy[(ulong)bVar8 - 1] == TypeInfo_ScoreboardPopup)) {
      __this_01 = (UI_ConfirmPopup_o *)__this_04[1].fields.extra_arg;
      pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      __this_04 = pUVar7;
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_01,"Kick this player?",pUVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      goto label_043e97ee;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_043e97f8:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel.<>c__DisplayClass14_0$$<CreateRow>b__2
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass14_0___CreateRow_b__2 (UI_ScoreboardScorePanel___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x43e99e0

void UI_ScoreboardScorePanel___c__DisplayClass14_0___CreateRow_b__2
               (UI_ScoreboardScorePanel___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Photon_Realtime_Player_array *pPVar3;
  UI_ConfirmPopup_o *__this_00;
  Photon_Realtime_Player_o *player;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_Events_UnityAction_o *__this_01;
  UI_ScoreboardScorePanel_o *pUVar5;
  
  pUVar5 = (__this->fields).__4__this;
  if (pUVar5 == (UI_ScoreboardScorePanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((pUVar5->fields).m_CachedPtr != 0) {
      player = (Photon_Realtime_Player_o *)(pUVar5->fields).m_CancellationTokenSource;
      if (g_data_057ae4e4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&".");
        g_data_057ae4e4 = '\x01';
      }
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_ChatManager__KickPlayer(player,1,0,".",(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  uVar2 = (__this->fields).index;
  if (g_data_057ae4e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnClickKick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Kick this player?");
    g_data_057ae4e3 = '\x01';
  }
  pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  __this_01 = pUVar4;
  System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Events_UnityAction_o *)0x0) {
label_043e97ee:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_01 = (UnityEngine_Events_UnityAction_o *)&pUVar4->fields;
    (pUVar4->fields).method_ptr = (intptr_t)pUVar5;
    il2cpp_runtime_helper_022b4080();
    pPVar3 = (pUVar5->fields)._lastPlayers;
    if (pPVar3 == (Photon_Realtime_Player_array *)0x0) goto label_043e97ee;
    if ((uint)pPVar3->max_length <= uVar2) goto label_043e97f8;
    (pUVar4->fields).invoke_impl = (intptr_t)pPVar3->m_Items[(int)uVar2];
    il2cpp_runtime_helper_022b4080(&(pUVar4->fields).invoke_impl);
    __this_01 = (UnityEngine_Events_UnityAction_o *)(pUVar5->fields).Parent;
    if (__this_01 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043e97ee;
    bVar1 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
    if ((bVar1 <= (((Il2CppClass *)__this_01->klass)->_2).naturalAligment) &&
       ((((Il2CppClass *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ScoreboardPopup)) {
      __this_00 = (UI_ConfirmPopup_o *)__this_01[1].fields.extra_arg;
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      __this_01 = pUVar4;
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_00,"Kick this player?",pUVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      goto label_043e97ee;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_043e97f8:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass17_0___ctor (UI_ScoreboardScorePanel___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x43e9800

void UI_ScoreboardScorePanel___c__DisplayClass17_0___ctor
               (UI_ScoreboardScorePanel___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel.<>c__DisplayClass17_0$$<OnClickKick>b__0
// il2cpp: void UI_ScoreboardScorePanel___c__DisplayClass17_0___OnClickKick_b__0 (UI_ScoreboardScorePanel___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x43e9a00

void UI_ScoreboardScorePanel___c__DisplayClass17_0___OnClickKick_b__0
               (UI_ScoreboardScorePanel___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  
  if ((__this->fields).__4__this != (UI_ScoreboardScorePanel_o *)0x0) {
    player = (__this->fields).player;
    if (g_data_057ae4e4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      il2cpp_runtime_helper_023445d0(&".");
      g_data_057ae4e4 = '\x01';
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__KickPlayer(player,1,0,".",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.ScoreboardScorePanel$$get_VerticalSpacing
// il2cpp: float UI_ScoreboardScorePanel__get_VerticalSpacing (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x43e7150

float UI_ScoreboardScorePanel__get_VerticalSpacing(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.ScoreboardScorePanel$$get_VerticalPadding
// il2cpp: int32_t UI_ScoreboardScorePanel__get_VerticalPadding (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x43e7160

int32_t UI_ScoreboardScorePanel__get_VerticalPadding(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  return 0xf;
}


// UI.ScoreboardScorePanel$$Setup
// il2cpp: void UI_ScoreboardScorePanel__Setup (UI_ScoreboardScorePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43e7170

void UI_ScoreboardScorePanel__Setup
               (UI_ScoreboardScorePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_ScoreboardScorePanel__Sync(__this,(MethodInfo *)parent);
  return;
}


// UI.ScoreboardScorePanel$$Update
// il2cpp: void UI_ScoreboardScorePanel__Update (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x43e7330

void UI_ScoreboardScorePanel__Update(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._currentSyncDelay;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._currentSyncDelay = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  UI_ScoreboardScorePanel__Sync(__this,method);
  return;
}


// UI.ScoreboardScorePanel$$Sync
// il2cpp: void UI_ScoreboardScorePanel__Sync (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x43e7190

void UI_ScoreboardScorePanel__Sync(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_array *pPVar1;
  long lVar2;
  UI_ElementStyle_o *__this_00;
  Photon_Realtime_Room_o *pPVar3;
  MethodInfo *method_00;
  Photon_Realtime_Player_array *unaff_RBX;
  MethodInfo *in_R8;
  MethodInfo *unaff_R15;
  float fVar4;
  float fVar5;
  
  if (g_data_057ae4dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Player);
    g_data_057ae4dd = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_043e7206;
label_043e71b7:
    pPVar1 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_043e71b7;
label_043e7206:
    il2cpp_runtime_helper_02337ed0();
    pPVar1 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  }
  if (pPVar1 != (Photon_Realtime_Player_array *)0x0) {
    unaff_RBX = (Photon_Realtime_Player_array *)
                System_Array__Clone((System_Array_o *)pPVar1,(MethodInfo *)0x0);
    unaff_R15 = TypeInfo_Player;
    if (unaff_RBX == (Photon_Realtime_Player_array *)0x0) {
      (__this->fields)._lastPlayers = (Photon_Realtime_Player_array *)0x0;
      lVar2 = 0;
    }
    else {
      pPVar1 = (Photon_Realtime_Player_array *)il2cpp_runtime_helper_023051f0(unaff_RBX,TypeInfo_Player);
      if (pPVar1 == (Photon_Realtime_Player_array *)0x0) goto label_043e731b;
      (__this->fields)._lastPlayers = pPVar1;
      unaff_R15 = TypeInfo_Player;
      lVar2 = il2cpp_runtime_helper_023051f0(unaff_RBX,TypeInfo_Player);
      if (lVar2 == 0) goto label_043e731b;
    }
    il2cpp_runtime_helper_022b4080(&(__this->fields)._lastPlayers,lVar2);
    unaff_R15 = (MethodInfo *)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x20,120.0,20.0,(System_String_o *)unaff_R15,(MethodInfo *)0x0);
    unaff_RBX = (__this->fields)._lastPlayers;
    if ((unaff_RBX != (Photon_Realtime_Player_array *)0x0) &&
       (pPVar3 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0),
       pPVar3 != (Photon_Realtime_Room_o *)0x0)) {
      UI_ScoreboardScorePanel__SetHeader
                (__this,__this_00,(int32_t)unaff_RBX->max_length,(pPVar3->fields).maxPlayers,in_R8);
      UI_ScoreboardScorePanel__SetRows(__this,__this_00,method_00);
      (__this->fields)._currentSyncDelay = 1.0;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043e731b:
  il2cpp_runtime_helper_022b2fd0();
  fVar5 = *(float *)(unaff_RBX->m_Items + 0xc);
  fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar5 = fVar5 - fVar4;
  *(float *)(unaff_RBX->m_Items + 0xc) = fVar5;
  if (0.0 < fVar5) {
    return;
  }
  UI_ScoreboardScorePanel__Sync((UI_ScoreboardScorePanel_o *)unaff_RBX,unaff_R15);
  return;
}


// UI.ScoreboardScorePanel$$SetRows
// il2cpp: void UI_ScoreboardScorePanel__SetRows (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x43e7a10

void UI_ScoreboardScorePanel__SetRows
               (UI_ScoreboardScorePanel_o *__this,UI_ElementStyle_o *style,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Transform__o *pSVar3;
  Photon_Realtime_Player_array *pPVar4;
  System_Object_array *pSVar5;
  long lVar6;
  undefined4 effect;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  int32_t iVar10;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *obj;
  UnityEngine_Transform_o *pUVar11;
  MethodInfo_24E7B40 **__this_01;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Events_UnityAction_o *parent;
  UnityEngine_Events_UnityAction_o *pUVar13;
  Il2CppObject *pIVar14;
  System_String_o *pSVar15;
  System_Collections_Generic_List_object__o *__this_02;
  long lVar16;
  System_String_array *value;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_UI_RawImage_o *__this_03;
  UnityEngine_Texture_o *value_00;
  System_String_o *pSVar18;
  undefined8 *puVar19;
  System_String_o **ppSVar20;
  PatreonEffects_EffectText_o *__this_04;
  TMPro_TMP_FontAsset_o *value_01;
  Photon_Realtime_Player_o *pPVar21;
  Photon_Realtime_Player_array *pPVar22;
  Photon_Realtime_Player_o *player;
  ulong uVar23;
  UnityEngine_Events_UnityAction_o *__this_05;
  long lVar24;
  int iVar25;
  UI_ElementStyle_o *pUVar26;
  UI_ElementStyle_o *__this_06;
  UnityEngine_Events_UnityAction_o *parent_00;
  long *__this_07;
  long *unaff_R13;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  UnityEngine_Color_o UVar43;
  undefined1 auVar44 [16];
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorD;
  UnityEngine_Color_o colorC;
  uint uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  UnityEngine_Color_Fields UStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  System_String_o *pSStack_128;
  System_String_o *pSStack_120;
  undefined1 auStack_118 [8];
  System_String_o *pSStack_110;
  UI_ElementStyle_o *pUStack_108;
  System_String_o *pSStack_100;
  UnityEngine_Events_UnityAction_o *pUStack_f8;
  undefined1 auStack_f0 [8];
  System_String_o *pSStack_e8;
  UnityEngine_Color_Fields UStack_e0;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  UnityEngine_Color_Fields UStack_b8;
  UnityEngine_Events_UnityAction_o *pUStack_a0;
  UnityEngine_Events_UnityAction_o *pUStack_98;
  UnityEngine_Transform_o *pUStack_90;
  UnityEngine_Events_UnityAction_o *pUStack_88;
  UI_ElementStyle_o *pUStack_80;
  UnityEngine_Events_UnityAction_o *pUStack_78;
  UnityEngine_Events_UnityAction_o *pUStack_70;
  ulong uStack_68;
  UnityEngine_Events_UnityAction_o *pUStack_60;
  UnityEngine_Transform_o *pUStack_58;
  UI_ElementStyle_o *pUStack_50;
  UI_ScoreboardScorePanel_o *pUStack_48;
  MethodInfo_362BED0 **ppMStack_40;
  
  if (g_data_057ae4de == '\0') {
    ppMStack_40 = (MethodInfo_362BED0 **)0x43e7a36;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppMStack_40 = (MethodInfo_362BED0 **)0x43e7a42;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    ppMStack_40 = (MethodInfo_362BED0 **)0x43e7a4e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    ppMStack_40 = (MethodInfo_362BED0 **)0x43e7a5a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    ppMStack_40 = (MethodInfo_362BED0 **)0x43e7a66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae4de = '\x01';
  }
  pSVar3 = (__this->fields)._rows;
  if ((pSVar3 != (System_Collections_Generic_List_Transform__o *)0x0) &&
     (pPVar22 = (__this->fields)._lastPlayers, pPVar22 != (Photon_Realtime_Player_array *)0x0)) {
    uVar9 = (pSVar3->fields)._size;
    parent = (UnityEngine_Events_UnityAction_o *)(ulong)uVar9;
    iVar25 = (int)pPVar22->max_length;
    if (iVar25 < (int)uVar9) {
      if (0 < (int)(uVar9 - iVar25)) {
        iVar25 = 0;
        unaff_R13 = &TypeInfo_Object;
        do {
          pSVar3 = (__this->fields)._rows;
          if (pSVar3 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_043e7c72;
          ppMStack_40 = (MethodInfo_362BED0 **)0x43e7ae2;
          __this_00 = (UnityEngine_Component_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,
                                 (pSVar3->fields)._size + -1,MethodInfo_Transform_get_Item);
          if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_043e7c72;
          ppMStack_40 = (MethodInfo_362BED0 **)0x43e7af5;
          obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            ppMStack_40 = (MethodInfo_362BED0 **)0x43e7b0a;
            il2cpp_runtime_helper_02337ed0();
          }
          ppMStack_40 = (MethodInfo_362BED0 **)0x43e7b14;
          UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
          pSVar3 = (__this->fields)._rows;
          if (pSVar3 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_043e7c72;
          ppMStack_40 = (MethodInfo_362BED0 **)0x43e7b2f;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar3,(pSVar3->fields)._size + -1,
                     MethodInfo_Void_RemoveAt);
          pPVar22 = (__this->fields)._lastPlayers;
          if (pPVar22 == (Photon_Realtime_Player_array *)0x0) goto label_043e7c72;
          iVar25 = iVar25 + 1;
          style = (UI_ElementStyle_o *)&MethodInfo_Void_RemoveAt;
        } while (iVar25 < (int)(uVar9 - (int)pPVar22->max_length));
      }
    }
    else if (((int)uVar9 < iVar25) && (0 < (int)(iVar25 - uVar9))) {
      iVar25 = 0;
      unaff_R13 = &MethodInfo_Void_Add;
      do {
        pSVar3 = (__this->fields)._rows;
        if (pSVar3 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_043e7c72;
        ppMStack_40 = (MethodInfo_362BED0 **)0x43e7b8b;
        pPVar21 = (Photon_Realtime_Player_o *)
                  UI_ScoreboardScorePanel__CreateRow
                            (__this,style,(pSVar3->fields)._size,(MethodInfo *)pPVar22);
        lVar16 = MethodInfo_Void_Add;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pPVar22 = (Photon_Realtime_Player_array *)(pSVar3->fields)._items;
        if (pPVar22 == (Photon_Realtime_Player_array *)0x0) goto label_043e7c72;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pPVar22->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pPVar22->m_Items[(int)uVar2] = pPVar21;
          ppMStack_40 = (MethodInfo_362BED0 **)0x43e7bc4;
          il2cpp_runtime_helper_022b4080(pPVar22->m_Items + (int)uVar2,pPVar21);
          pPVar4 = (__this->fields)._lastPlayers;
        }
        else {
          pPVar22 = *(Photon_Realtime_Player_array **)(*(long *)(lVar16 + 0x20) + 0xc0);
          ppMStack_40 = (MethodInfo_362BED0 **)0x43e7bfa;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pPVar21,
                     (MethodInfo_362C220 *)pPVar22->m_Items[10]);
          pPVar4 = (__this->fields)._lastPlayers;
        }
        if (pPVar4 == (Photon_Realtime_Player_array *)0x0) goto label_043e7c72;
        iVar25 = iVar25 + 1;
      } while (iVar25 < (int)((int)pPVar4->max_length - uVar9));
    }
    __this_05 = (UnityEngine_Events_UnityAction_o *)(__this->fields)._rows;
    if (__this_05 != (UnityEngine_Events_UnityAction_o *)0x0) {
      uVar23 = 0;
      do {
        if ((long)(int)(__this_05->fields).invoke_impl <= (long)uVar23) {
          return;
        }
        pUVar26 = (UI_ElementStyle_o *)(uVar23 & 0xffffffff);
        ppMStack_40 = (MethodInfo_362BED0 **)0x43e7c44;
        pUVar11 = (UnityEngine_Transform_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_05,(int32_t)uVar23,
                             MethodInfo_Transform_get_Item);
        pPVar22 = (__this->fields)._lastPlayers;
        if (pPVar22 == (Photon_Realtime_Player_array *)0x0) break;
        if (*(uint *)&pPVar22->max_length <= uVar23) {
          ppMStack_40 = (MethodInfo_362BED0 **)0x43e7c8b;
          auVar44 = il2cpp_runtime_helper_022b2ca0();
          pUStack_70 = auVar44._0_8_;
          ppMStack_40 = &MethodInfo_Transform_get_Item;
          pUVar13 = (UnityEngine_Events_UnityAction_o *)(auVar44._8_8_ & 0xffffffff);
          uStack_68 = uVar23;
          pUStack_60 = parent;
          pUStack_58 = (UnityEngine_Transform_o *)unaff_R13;
          pUStack_50 = style;
          pUStack_48 = __this;
          if (g_data_057ae4e0 == '\0') {
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7cbc;
            il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7cc8;
            il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7cd4;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__0);
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7ce0;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__1);
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7cec;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__2);
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7cf8;
            il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7d04;
            il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7d10;
            il2cpp_runtime_helper_023445d0(&"Icons/Intro/UserIcon");
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7d1c;
            il2cpp_runtime_helper_023445d0(&"Icons/Game/VolumeOffIcon");
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7d28;
            il2cpp_runtime_helper_023445d0(&"Icons/Game/BladeIcon");
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7d34;
            il2cpp_runtime_helper_023445d0(&"Icons/Quests/Skull1Icon");
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7d40;
            il2cpp_runtime_helper_023445d0(&"0");
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7d4c;
            il2cpp_runtime_helper_023445d0(&"Icons/Navigation/CloseIcon");
            g_data_057ae4e0 = '\x01';
          }
          pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7d62;
          __this_01 = (MethodInfo_24E7B40 **)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
          __this_06 = (UI_ElementStyle_o *)0x0;
          pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7d6f;
          parent_00 = (UnityEngine_Events_UnityAction_o *)__this_01;
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          if ((UnityEngine_Events_UnityAction_o *)__this_01 != (UnityEngine_Events_UnityAction_o *)0x0) {
            (((UnityEngine_Events_UnityAction_o *)__this_01)->fields).method_ptr = (intptr_t)__this_05;
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7d8b;
            il2cpp_runtime_helper_022b4080(&((UnityEngine_Events_UnityAction_o *)__this_01)->fields,__this_05);
            *(int *)&(((UnityEngine_Events_UnityAction_o *)__this_01)->fields).invoke_impl = auVar44._8_4_;
            parent_00 = (UnityEngine_Events_UnityAction_o *)(__this_05->fields).m_target;
            __this_06 = (UI_ElementStyle_o *)&g_data_00000004;
            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7da2;
            pUVar12 = UI_ElementFactory__CreateHorizontalGroup
                                ((UnityEngine_Transform_o *)parent_00,0.0,4,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
              pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7db5;
              parent = (UnityEngine_Events_UnityAction_o *)
                       UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
              __this_06 = (UI_ElementStyle_o *)&g_data_00000004;
              pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7dcf;
              parent_00 = parent;
              pUVar12 = UI_ElementFactory__CreateHorizontalGroup
                                  ((UnityEngine_Transform_o *)parent,30.0,4,(MethodInfo *)0x0);
              if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7de6;
                pUStack_70 = __this_05;
                pUVar13 = (UnityEngine_Events_UnityAction_o *)
                          UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7e0b;
                UI_ElementFactory__CreateRawImage
                          ((UnityEngine_Transform_o *)pUVar13,pUVar26,"Icons/Quests/Skull1Icon",32.0,32.0,(MethodInfo *)0x0
                          );
                pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7e2d;
                UI_ElementFactory__CreateRawImage
                          ((UnityEngine_Transform_o *)pUVar13,pUVar26,"Icons/Game/BladeIcon",32.0,32.0,(MethodInfo *)0x0
                          );
                __this_05 = (UnityEngine_Events_UnityAction_o *)&g_data_057b9b70;
                pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7e5b;
                UI_ElementFactory__CreateEffectText
                          ((UnityEngine_Transform_o *)pUVar13,pUVar26,
                           (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
                pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7e82;
                UI_ElementFactory__CreateDefaultLabel
                          ((UnityEngine_Transform_o *)parent,pUVar26,
                           (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
                __this_06 = (UI_ElementStyle_o *)&g_data_00000004;
                pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7e99;
                parent_00 = parent;
                pUVar12 = UI_ElementFactory__CreateHorizontalGroup
                                    ((UnityEngine_Transform_o *)parent,10.0,4,(MethodInfo *)0x0);
                if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                  pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7eac;
                  unaff_R13 = (long *)UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
                  __this_05 = (UnityEngine_Events_UnityAction_o *)&TypeInfo_UnityAction;
                  pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7ebe;
                  pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7ed8;
                  UnityEngine_Events_UnityAction___ctor();
                  pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7efe;
                  UI_ElementFactory__CreateIconButton
                            ((UnityEngine_Transform_o *)unaff_R13,pUVar26,"Icons/Intro/UserIcon",26.0,26.0,pUVar13,
                             (MethodInfo *)0x0);
                  pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7f06;
                  pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7f20;
                  UnityEngine_Events_UnityAction___ctor();
                  pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7f46;
                  UI_ElementFactory__CreateIconButton
                            ((UnityEngine_Transform_o *)unaff_R13,pUVar26,"Icons/Game/VolumeOffIcon",30.0,30.0,pUVar13,
                             (MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                    pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e8168;
                    il2cpp_runtime_helper_02337ed0();
                    pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e816f;
                    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                    cVar7 = (char)bVar8;
                  }
                  else {
                    pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7f64;
                    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                    cVar7 = (char)bVar8;
                  }
                  if (cVar7 != '\0') {
                    pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7f70;
                    pUVar13 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7f8a;
                    UnityEngine_Events_UnityAction___ctor();
                    pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7fb0;
                    UI_ElementFactory__CreateIconButton
                              ((UnityEngine_Transform_o *)unaff_R13,pUVar26,"Icons/Navigation/CloseIcon",24.0,24.0,pUVar13,
                               (MethodInfo *)0x0);
                  }
                  pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7fd0;
                  __this_06 = pUVar26;
                  parent_00 = parent;
                  UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)parent,pUVar26,"0",0,4,(MethodInfo *)0x0);
                  if (parent != (UnityEngine_Events_UnityAction_o *)0x0) {
                    __this_06 = (UI_ElementStyle_o *)0x0;
                    pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e7fe5;
                    parent_00 = parent;
                    pUVar11 = UnityEngine_Transform__GetChild
                                        ((UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
                    pUVar13 = pUStack_70;
                    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                      __this_01 = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
                      pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e8004;
                      __this_05 = (UnityEngine_Events_UnityAction_o *)
                                  UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar11,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                      __this_06 = *(UI_ElementStyle_o **)&pUVar13->klass[1]._2.token;
                      pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e801b;
                      parent_00 = pUVar13;
                      fVar27 = (float)(**(code **)&pUVar13->klass[1]._2.thread_static_fields_offset)();
                      if (__this_05 != (UnityEngine_Events_UnityAction_o *)0x0) {
                        pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e803f;
                        (*(code *)__this_05->klass[1].vtable._3_ToString.method)
                                  (fVar27 / 3.0,__this_05,__this_05->klass[1].vtable._4_unknown.methodPtr);
                        __this_06 = (UI_ElementStyle_o *)0x1;
                        pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e804e;
                        parent_00 = parent;
                        pUVar11 = UnityEngine_Transform__GetChild
                                            ((UnityEngine_Transform_o *)parent,1,(MethodInfo *)0x0);
                        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                          pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e8062;
                          __this_05 = (UnityEngine_Events_UnityAction_o *)
                                      UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pUVar11,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                          __this_06 = *(UI_ElementStyle_o **)&pUVar13->klass[1]._2.token;
                          pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e8079;
                          parent_00 = pUVar13;
                          fVar27 = (float)(**(code **)&pUVar13->klass[1]._2.thread_static_fields_offset)();
                          if (__this_05 != (UnityEngine_Events_UnityAction_o *)0x0) {
                            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e809d;
                            (*(code *)__this_05->klass[1].vtable._3_ToString.method)
                                      (fVar27 / 3.0,__this_05,__this_05->klass[1].vtable._4_unknown.methodPtr)
                            ;
                            __this_06 = (UI_ElementStyle_o *)0x2;
                            pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e80ac;
                            parent_00 = parent;
                            pUVar11 = UnityEngine_Transform__GetChild
                                                ((UnityEngine_Transform_o *)parent,2,(MethodInfo *)0x0);
                            if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                              pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e80c0;
                              __this_05 = (UnityEngine_Events_UnityAction_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar11,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                              __this_06 = *(UI_ElementStyle_o **)&pUVar13->klass[1]._2.token;
                              pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e80d7;
                              parent_00 = pUVar13;
                              fVar27 = (float)(**(code **)&pUVar13->klass[1]._2.thread_static_fields_offset)()
                              ;
                              if (__this_05 != (UnityEngine_Events_UnityAction_o *)0x0) {
                                pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e80fb;
                                (*(code *)__this_05->klass[1].vtable._3_ToString.method)
                                          (fVar27 / 6.0,__this_05,
                                           __this_05->klass[1].vtable._4_unknown.methodPtr);
                                __this_06 = (UI_ElementStyle_o *)0x3;
                                pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e810a;
                                parent_00 = parent;
                                pUVar11 = UnityEngine_Transform__GetChild
                                                    ((UnityEngine_Transform_o *)parent,3,(MethodInfo *)0x0);
                                if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                                  pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e811a;
                                  pIVar14 = UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar11,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                  __this_06 = *(UI_ElementStyle_o **)&pUVar13->klass[1]._2.token;
                                  pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e8131;
                                  parent_00 = pUVar13;
                                  fVar27 = (float)(**(code **)&pUVar13->klass[1]._2.
                                                               thread_static_fields_offset)();
                                  __this_05 = (UnityEngine_Events_UnityAction_o *)0x0;
                                  if (pIVar14 != (Il2CppObject *)0x0) {
                                    pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e8151;
                                    (*pIVar14->klass->vtable[0x24].methodPtr)
                                              (fVar27 / 6.0,pIVar14,pIVar14->klass->vtable[0x24].method);
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
          pUStack_78 = (UnityEngine_Events_UnityAction_o *)0x43e8181;
          il2cpp_runtime_helper_022b2c90();
          uStack_168 = parent_00;
          pUStack_a0 = __this_05;
          pUStack_98 = parent;
          pUStack_90 = (UnityEngine_Transform_o *)unaff_R13;
          pUStack_88 = (UnityEngine_Events_UnityAction_o *)__this_01;
          pUStack_80 = pUVar26;
          pUStack_78 = pUVar13;
          if (g_data_057ae4e1 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
            il2cpp_runtime_helper_023445d0(&MethodInfo_EffectText_GetComponent_EffectText);
            il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
            il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
            il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
            il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
            il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
            il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
            il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
            il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
            il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
            il2cpp_runtime_helper_023445d0(&TypeInfo_string);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
            il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
            il2cpp_runtime_helper_023445d0(&"DefaultPanel");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/ThunderspearIcon");
            il2cpp_runtime_helper_023445d0(&"DeadColor");
            il2cpp_runtime_helper_023445d0(&"Kills");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/ShifterIcon");
            il2cpp_runtime_helper_023445d0(&"Deaths");
            il2cpp_runtime_helper_023445d0(&"LoadoutTitan");
            il2cpp_runtime_helper_023445d0(&"LoadoutShifter");
            il2cpp_runtime_helper_023445d0(&" / ");
            il2cpp_runtime_helper_023445d0(&"TotalDamage");
            il2cpp_runtime_helper_023445d0(&"Icon");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/APGIcon");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/BladeIcon");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/SpectateIcon");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/AHSSIcon");
            il2cpp_runtime_helper_023445d0(&"");
            il2cpp_runtime_helper_023445d0(&"Icons/Quests/Skull1Icon");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/TitanIcon");
            il2cpp_runtime_helper_023445d0(&"SpectateColor");
            il2cpp_runtime_helper_023445d0(&"LoadoutHuman");
            il2cpp_runtime_helper_023445d0(&"HighestDamage");
            g_data_057ae4e1 = '\x01';
          }
          pSStack_e8 = (System_String_o *)0x0;
          UStack_e0.r = 0.0;
          UStack_e0.g = 0.0;
          pUStack_f8 = (UnityEngine_Events_UnityAction_o *)0x0;
          auStack_f0._0_4_ = 0.0;
          auStack_f0._4_4_ = 0.0;
          pUStack_108 = (UI_ElementStyle_o *)0x0;
          pSStack_100 = (System_String_o *)0x0;
          auStack_118._0_4_ = 0;
          auStack_118._4_4_ = 0;
          pSStack_110 = (System_String_o *)0x0;
          UStack_e0.b = 0.0;
          UStack_e0.a = 0.0;
          uStack_18c = 0;
          __this_07 = &TypeInfo_PlayerProperty;
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar15 = PhotonExtensions__GetStringProperty
                              (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                               (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_128 = MiscExtensions__TruncateRichText(pSVar15,0xf,(MethodInfo *)0x0);
          uStack_148 = PhotonExtensions__GetStringProperty
                                 (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),
                                  "",(MethodInfo *)0x0);
          uStack_138 = PhotonExtensions__GetStringProperty
                                 (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),
                                  "",(MethodInfo *)0x0);
          uStack_158 = PhotonExtensions__GetStringProperty
                                 (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),
                                  "",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar16 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          uStack_188 = __this_06;
          if (lVar16 != 0) {
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              lVar16 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
              if (lVar16 == 0) goto label_043e95da;
            }
            bVar8 = System_String__op_Inequality
                              (*(System_String_o **)(lVar16 + 0x78),
                               (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar8 != '\0') {
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              lVar16 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
              if (lVar16 == 0) goto label_043e95da;
              pIVar14 = PhotonExtensions__GetCustomProperty
                                  (player,*(System_String_o **)(lVar16 + 0x78),(MethodInfo *)0x0);
              if (pIVar14 == (Il2CppObject *)0x0) {
                pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
              }
              else {
                pSVar15 = (System_String_o *)(*pIVar14->klass->vtable[3].methodPtr)(pIVar14);
              }
              goto joined_r0x043e8b0c;
            }
          }
          __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
          System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_System_String);
          lVar16 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
          if (lVar16 == 0) goto label_043e95da;
          if (*(int *)(lVar16 + 0x18) == 0) goto label_043e95ba;
          __this_07 = (long *)(lVar16 + 0x20);
          *(undefined8 *)(lVar16 + 0x20) = "Kills";
          il2cpp_runtime_helper_022b4080(__this_07);
          if (*(uint *)(lVar16 + 0x18) < 2) goto label_043e95ba;
          *(undefined8 *)(lVar16 + 0x28) = "Deaths";
          il2cpp_runtime_helper_022b4080(lVar16 + 0x28);
          if (*(uint *)(lVar16 + 0x18) < 3) goto label_043e95ba;
          *(undefined8 *)(lVar16 + 0x30) = "HighestDamage";
          il2cpp_runtime_helper_022b4080(lVar16 + 0x30);
          if (*(uint *)(lVar16 + 0x18) < 4) goto label_043e95ba;
          *(undefined8 *)(lVar16 + 0x38) = "TotalDamage";
          il2cpp_runtime_helper_022b4080(lVar16 + 0x38);
          uStack_18c = 0;
          iVar25 = (int)*(undefined8 *)(lVar16 + 0x18);
          if (iVar25 < 1) {
            if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) goto label_043e878a;
            goto label_043e95da;
          }
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_043e95c7;
          lVar24 = 0;
          __this_07 = &g_data_057b9b70;
          if (iVar25 == 0) goto label_043e95ba;
          goto label_043e8703;
        }
        ppMStack_40 = (MethodInfo_362BED0 **)0x43e7c65;
        UI_ScoreboardScorePanel__SetRow
                  (__this,pUVar11,(Photon_Realtime_Player_o *)pPVar22->m_Items[uVar23],(MethodInfo *)pPVar22);
        uVar23 = uVar23 + 1;
        __this_05 = (UnityEngine_Events_UnityAction_o *)(__this->fields)._rows;
      } while (__this_05 != (UnityEngine_Events_UnityAction_o *)0x0);
    }
  }
label_043e7c72:
  ppMStack_40 = (MethodInfo_362BED0 **)0x43e7c77;
  il2cpp_runtime_helper_022b2c90();
  return;
  while( true ) {
    uVar9 = (__this_02->fields)._size;
    if (uVar9 < (uint)pSVar5->max_length) {
      (__this_02->fields)._size = uVar9 + 1;
      pSVar5->m_Items[(int)uVar9] = pIVar14;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar9);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_02,pIVar14,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar24 = lVar24 + 1;
    uStack_18c = (uint)lVar24;
    uVar9 = (uint)*(undefined8 *)(lVar16 + 0x18);
    if ((int)uVar9 <= (int)uStack_18c) goto label_043e878a;
    if (uVar9 <= uStack_18c) break;
label_043e8703:
    pIVar14 = PhotonExtensions__GetCustomProperty
                        (player,*(System_String_o **)(lVar16 + 0x20 + lVar24 * 8),(MethodInfo *)0x0);
    if (pIVar14 == (Il2CppObject *)0x0) {
      pIVar14 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pIVar14 = (Il2CppObject *)
                (*pIVar14->klass->vtable[3].methodPtr)(pIVar14,pIVar14->klass->vtable[3].method);
    }
    lVar6 = MethodInfo_Void_Add;
    piVar1 = &(__this_02->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_02->fields)._items;
    if (pSVar5 == (System_Object_array *)0x0) goto label_043e95da;
  }
label_043e95ba:
  value_00 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2ca0();
  goto label_043e95bf;
label_043e878a:
  value = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_02,MethodInfo_String_ToArray);
  pSVar15 = System_String__Join(" / ",value,(MethodInfo *)0x0);
  __this_06 = uStack_188;
joined_r0x043e8b0c:
  if (((__this_06 == (UI_ElementStyle_o *)0x0) ||
      (pUVar11 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)__this_06,0,(MethodInfo *)0x0),
      pUVar11 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar17 = UnityEngine_Transform__GetChild(pUVar11,0,(MethodInfo *)0x0),
     pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_043e95da;
  __this_03 = (UnityEngine_UI_RawImage_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar17,MethodInfo_RawImage_GetComponent_RawImage);
  __this_07 = &TypeInfo_CustomLogicManager;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar16 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (lVar16 != 0) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar16 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar16 == 0) goto label_043e95da;
    }
    if (*(char *)(lVar16 + 0x84) == '\0') goto label_043e8b1a;
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = System_String__op_Equality
                      (uStack_148,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                       (MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = System_String__op_Equality
                        (uStack_148,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),
                         (MethodInfo *)0x0);
      if ((char)bVar8 == '\0') goto label_043e8b1a;
      if ((__this_03 != (UnityEngine_UI_RawImage_o *)0x0) &&
         (pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
         pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar18 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value_00 = (UnityEngine_Texture_o *)
                   ApplicationManagers_ResourceManager__LoadAsset(pSVar18,"Icons/Quests/Skull1Icon",1,(MethodInfo *)0x0);
        if ((value_00 == (UnityEngine_Texture_o *)0x0) || (value_00->klass == TypeInfo_Texture2D)) {
          UnityEngine_UI_RawImage__set_texture(__this_03,value_00,(MethodInfo *)0x0);
          pSVar18 = (System_String_o *)
                    (*(uStack_168->klass->vtable)._4_unknown.methodPtr)
                              (uStack_168,(uStack_168->klass->vtable)._4_unknown.method);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          puVar19 = &"DeadColor";
          goto label_043e8ab4;
        }
        goto label_043e95bf;
      }
      goto label_043e95da;
    }
    if ((__this_03 == (UnityEngine_UI_RawImage_o *)0x0) ||
       (pUVar12 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
    UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = (UnityEngine_Texture_o *)
               ApplicationManagers_ResourceManager__LoadAsset(pSVar18,"Icons/Game/SpectateIcon",1,(MethodInfo *)0x0);
    if ((value_00 == (UnityEngine_Texture_o *)0x0) || (value_00->klass == TypeInfo_Texture2D)) {
      UnityEngine_UI_RawImage__set_texture(__this_03,value_00,(MethodInfo *)0x0);
      pSVar18 = (System_String_o *)
                (*(uStack_168->klass->vtable)._4_unknown.methodPtr)
                          (uStack_168,(uStack_168->klass->vtable)._4_unknown.method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      puVar19 = &"SpectateColor";
label_043e8ab4:
      UVar43 = UI_UIManager__GetThemeColor
                         (pSVar18,"Icon",(System_String_o *)*puVar19,"DefaultPanel",(MethodInfo *)0x0);
      (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                (UVar43.fields.r,UVar43.fields.b,__this_03,(__this_03->klass->vtable)._23_set_color.method);
      iVar25 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      goto joined_r0x043e8af1;
    }
    goto label_043e95bf;
  }
label_043e8b1a:
  if ((__this_03 != (UnityEngine_UI_RawImage_o *)0x0) &&
     (pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
     pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
    iVar25 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
joined_r0x043e8af1:
    if (iVar25 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar16 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar16 == 0) goto label_043e8bb6;
label_043e8b68:
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar16 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar16 == 0) goto label_043e95da;
      }
      fVar27 = (float)(uint)*(byte *)(lVar16 + 0x83);
    }
    else {
      lVar16 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar16 != 0) goto label_043e8b68;
label_043e8bb6:
      fVar27 = 0.0;
    }
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      UStack_178.r = fVar27;
      pUVar17 = UnityEngine_Transform__GetChild(pUVar11,1,(MethodInfo *)0x0);
      if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
        __this_07 = (long *)UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar17,MethodInfo_RawImage_GetComponent_RawImage);
        pSStack_120 = pSVar15;
        if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = System_String__op_Equality
                          (uStack_138,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),
                           (MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar8 = System_String__op_Equality
                            (uStack_138,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                             (MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar8 = System_String__op_Equality
                              (uStack_138,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),
                               (MethodInfo *)0x0);
            pUVar26 = uStack_188;
            if ((char)bVar8 != '\0') {
              pSVar15 = (System_String_o *)
                        (*(uStack_168->klass->vtable)._4_unknown.methodPtr)
                                  (uStack_168,(uStack_168->klass->vtable)._4_unknown.method);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UVar43 = UI_UIManager__GetThemeColor
                                 (pSVar15,"Icon","LoadoutShifter","DefaultPanel",(MethodInfo *)0x0);
              if ((UnityEngine_UI_RawImage_o *)__this_07 == (UnityEngine_UI_RawImage_o *)0x0)
              goto label_043e95da;
              (*(((UnityEngine_UI_RawImage_o *)__this_07)->klass->vtable)._23_set_color.methodPtr)
                        (UVar43.fields.r,UVar43.fields.b,__this_07,
                         (((UnityEngine_UI_RawImage_o *)__this_07)->klass->vtable)._23_set_color.method);
              if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              value_00 = (UnityEngine_Texture_o *)
                         ApplicationManagers_ResourceManager__LoadAsset
                                   (pSVar15,"Icons/Game/ShifterIcon",1,(MethodInfo *)0x0);
              if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
              goto label_043e95bf;
              UnityEngine_UI_RawImage__set_texture
                        ((UnityEngine_UI_RawImage_o *)__this_07,value_00,(MethodInfo *)0x0);
              pUVar26 = uStack_188;
            }
            goto label_043e91a0;
          }
          pSVar15 = (System_String_o *)
                    (*(uStack_168->klass->vtable)._4_unknown.methodPtr)
                              (uStack_168,(uStack_168->klass->vtable)._4_unknown.method);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar43 = UI_UIManager__GetThemeColor
                             (pSVar15,"Icon","LoadoutTitan","DefaultPanel",(MethodInfo *)0x0);
          pUVar26 = uStack_188;
          if ((UnityEngine_UI_RawImage_o *)__this_07 != (UnityEngine_UI_RawImage_o *)0x0) {
            (*(((UnityEngine_UI_RawImage_o *)__this_07)->klass->vtable)._23_set_color.methodPtr)
                      (UVar43.fields.r,UVar43.fields.b,__this_07,
                       (((UnityEngine_UI_RawImage_o *)__this_07)->klass->vtable)._23_set_color.method);
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            ppSVar20 = (System_String_o **)&"Icons/Game/TitanIcon";
            goto label_043e8e34;
          }
        }
        else {
          pSVar15 = (System_String_o *)
                    (*(uStack_168->klass->vtable)._4_unknown.methodPtr)
                              (uStack_168,(uStack_168->klass->vtable)._4_unknown.method);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar43 = UI_UIManager__GetThemeColor
                             (pSVar15,"Icon","LoadoutHuman","DefaultPanel",(MethodInfo *)0x0);
          if ((UnityEngine_UI_RawImage_o *)__this_07 != (UnityEngine_UI_RawImage_o *)0x0) {
            (*(((UnityEngine_UI_RawImage_o *)__this_07)->klass->vtable)._23_set_color.methodPtr)
                      (UVar43.fields.r,UVar43.fields.b,__this_07,
                       (((UnityEngine_UI_RawImage_o *)__this_07)->klass->vtable)._23_set_color.method);
            if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar8 = System_String__op_Equality
                              (uStack_158,(System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),
                               (MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar8 = System_String__op_Equality
                                (uStack_158,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8),
                                 (MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar8 = System_String__op_Equality
                                  (uStack_158,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),
                                   (MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar26 = uStack_188;
                  bVar8 = System_String__op_Equality
                                    (uStack_158,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),
                                     (MethodInfo *)0x0);
                  if ((char)bVar8 != '\0') {
                    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppSVar20 = (System_String_o **)&"Icons/Game/ThunderspearIcon";
                    goto label_043e8e34;
                  }
                }
                else {
                  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar26 = uStack_188;
                  pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  value_00 = (UnityEngine_Texture_o *)
                             ApplicationManagers_ResourceManager__LoadAsset
                                       (pSVar15,"Icons/Game/APGIcon",1,(MethodInfo *)0x0);
                  if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
                  goto label_043e95bf;
                  UnityEngine_UI_RawImage__set_texture
                            ((UnityEngine_UI_RawImage_o *)__this_07,value_00,(MethodInfo *)0x0);
                }
              }
              else {
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar26 = uStack_188;
                pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                value_00 = (UnityEngine_Texture_o *)
                           ApplicationManagers_ResourceManager__LoadAsset
                                     (pSVar15,"Icons/Game/AHSSIcon",1,(MethodInfo *)0x0);
                if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
                goto label_043e95bf;
                UnityEngine_UI_RawImage__set_texture
                          ((UnityEngine_UI_RawImage_o *)__this_07,value_00,(MethodInfo *)0x0);
              }
            }
            else {
              if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pUVar26 = uStack_188;
              pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              ppSVar20 = &"Icons/Game/BladeIcon";
label_043e8e34:
              value_00 = (UnityEngine_Texture_o *)
                         ApplicationManagers_ResourceManager__LoadAsset(pSVar15,*ppSVar20,1,(MethodInfo *)0x0)
              ;
              if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D)) {
label_043e95bf:
                il2cpp_runtime_helper_022b2fd0(value_00);
label_043e95c7:
                pIVar14 = PhotonExtensions__GetCustomProperty
                                    (player,(System_String_o *)((UnityEngine_UI_RawImage_o *)__this_07)->klass
                                     ,(MethodInfo *)0x0);
                if (pIVar14 != (Il2CppObject *)0x0) goto label_043e95df;
                goto label_043e95da;
              }
              UnityEngine_UI_RawImage__set_texture
                        ((UnityEngine_UI_RawImage_o *)__this_07,value_00,(MethodInfo *)0x0);
            }
label_043e91a0:
            if (UStack_178.r == 0.0) {
label_043e91de:
              if (((UnityEngine_UI_RawImage_o *)__this_07 == (UnityEngine_UI_RawImage_o *)0x0) ||
                 (pUVar12 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0),
                 pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
              UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
            }
            else {
              if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar8 = System_String__op_Equality
                                (uStack_148,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                                 (MethodInfo *)0x0);
              if ((char)bVar8 != '\0') goto label_043e91de;
              if (((UnityEngine_UI_RawImage_o *)__this_07 == (UnityEngine_UI_RawImage_o *)0x0) ||
                 (pUVar12 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0),
                 pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
              UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
            }
            if (player != (Photon_Realtime_Player_o *)0x0) {
              iVar10 = (player->fields).actorNumber;
              uVar9 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
              bVar8 = (player->fields).IsLocal;
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar18 = GameManagers_ChatManager__GetIDString
                                  (iVar10,uVar9 & 0xff,(uint)(byte)bVar8,(MethodInfo *)0x0);
              bVar8 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                                (player,(PatreonEffects_ResolvedNameEffect_o *)auStack_118,(MethodInfo *)0x0);
              pSVar15 = pSStack_128;
              if ((char)bVar8 != '\0') {
                effect = auStack_118._4_4_;
                uVar28 = (int)pSStack_110;
                uVar29 = (int)((ulong)pSStack_110 >> 0x20);
                uVar30 = (int)pUStack_108;
                uVar31 = (int)((ulong)pUStack_108 >> 0x20);
                uVar32 = (int)pSStack_100;
                uVar33 = (int)((ulong)pSStack_100 >> 0x20);
                uVar34 = (int)pUStack_f8;
                uVar35 = (int)((ulong)pUStack_f8 >> 0x20);
                fVar27 = auStack_f0._0_4_;
                fVar36 = auStack_f0._4_4_;
                uVar37 = (int)pSStack_e8;
                uVar38 = (int)((ulong)pSStack_e8 >> 0x20);
                fVar39 = UStack_e0.r;
                fVar40 = UStack_e0.g;
                fVar41 = UStack_e0.b;
                fVar42 = UStack_e0.a;
                if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                  uStack_138 = pSStack_110;
                  uStack_130 = 0;
                  uStack_188 = pUStack_108;
                  uStack_180 = 0;
                  uStack_148 = pSStack_100;
                  uStack_140 = 0;
                  uStack_168 = pUStack_f8;
                  uStack_160 = 0;
                  UStack_178.r = (float)auStack_f0._0_4_;
                  UStack_178.g = (float)auStack_f0._4_4_;
                  UStack_178.b = 0.0;
                  UStack_178.a = 0.0;
                  uStack_158 = pSStack_e8;
                  uStack_150 = 0;
                  UStack_b8.r = UStack_e0.r;
                  UStack_b8.g = UStack_e0.g;
                  UStack_b8.b = 0.0;
                  UStack_b8.a = 0.0;
                  fStack_c8 = UStack_e0.b;
                  fStack_c4 = UStack_e0.a;
                  uStack_c0 = 0;
                  il2cpp_runtime_helper_02337ed0();
                  uVar28 = (undefined4)uStack_138;
                  uVar29 = uStack_138._4_4_;
                  uVar30 = (undefined4)uStack_188;
                  uVar31 = uStack_188._4_4_;
                  uVar32 = (undefined4)uStack_148;
                  uVar33 = uStack_148._4_4_;
                  uVar34 = (undefined4)uStack_168;
                  uVar35 = uStack_168._4_4_;
                  fVar27 = UStack_178.r;
                  fVar36 = UStack_178.g;
                  uVar37 = (undefined4)uStack_158;
                  uVar38 = uStack_158._4_4_;
                  fVar39 = UStack_b8.r;
                  fVar40 = UStack_b8.g;
                  fVar41 = fStack_c8;
                  fVar42 = fStack_c4;
                }
                UVar43.fields.g = (float)uVar29;
                UVar43.fields.r = (float)uVar28;
                UVar43.fields.a = (float)uVar31;
                UVar43.fields.b = (float)uVar30;
                colorB.fields.g = (float)uVar33;
                colorB.fields.r = (float)uVar32;
                colorB.fields.a = (float)uVar35;
                colorB.fields.b = (float)uVar34;
                colorD.fields.g = fVar40;
                colorD.fields.r = fVar39;
                colorD.fields.a = fVar42;
                colorD.fields.b = fVar41;
                colorC.fields.g = fVar36;
                colorC.fields.r = fVar27;
                colorC.fields.a = (float)uVar38;
                colorC.fields.b = (float)uVar37;
                pSVar15 = PatreonEffects_EffectText__Compose
                                    (pSVar15,effect,UVar43,colorB,colorC,colorD,(MethodInfo *)0x0);
              }
              if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
                 (pUVar11 = UnityEngine_Transform__GetChild(pUVar11,2,(MethodInfo *)0x0),
                 pUVar11 != (UnityEngine_Transform_o *)0x0)) {
                __this_04 = (PatreonEffects_EffectText_o *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar11,MethodInfo_EffectText_GetComponent_EffectText);
                if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                value_01 = PatreonEffects_NameFontCatalog__FontForPlayer(player,0,(MethodInfo *)0x0);
                if (__this_04 != (PatreonEffects_EffectText_o *)0x0) {
                  PatreonEffects_EffectText__set_font(__this_04,value_01,(MethodInfo *)0x0);
                  pSVar15 = System_String__Concat_3ae5ba0(pSVar18,pSVar15,(MethodInfo *)0x0);
                  PatreonEffects_EffectText__set_text(__this_04,pSVar15,(MethodInfo *)0x0);
                  pUVar11 = UnityEngine_Transform__GetChild
                                      ((UnityEngine_Transform_o *)pUVar26,1,(MethodInfo *)0x0);
                  if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
                     (pIVar14 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text),
                     pIVar14 != (Il2CppObject *)0x0)) {
                    (*pIVar14->klass->vtable[0x4b].methodPtr)
                              (pIVar14,pSStack_120,pIVar14->klass->vtable[0x4b].method);
                    pUVar11 = UnityEngine_Transform__GetChild
                                        ((UnityEngine_Transform_o *)pUVar26,2,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pPVar21 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
                    if (((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
                        (pUVar17 = UnityEngine_Transform__GetChild(pUVar11,1,(MethodInfo *)0x0),
                        pUVar17 != (UnityEngine_Transform_o *)0x0)) &&
                       (pUVar12 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0),
                       pUVar12 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar12,(uint)(pPVar21 != player),(MethodInfo *)0x0);
                      iVar10 = UnityEngine_Transform__get_childCount(pUVar11,(MethodInfo *)0x0);
                      if (2 < iVar10) {
                        pUVar11 = UnityEngine_Transform__GetChild(pUVar11,2,(MethodInfo *)0x0);
                        if ((pUVar11 == (UnityEngine_Transform_o *)0x0) ||
                           (pUVar12 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                           pUVar12 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
                        UnityEngine_GameObject__SetActive(pUVar12,(uint)(pPVar21 != player),(MethodInfo *)0x0)
                        ;
                      }
                      pUVar11 = UnityEngine_Transform__GetChild
                                          ((UnityEngine_Transform_o *)pUVar26,3,(MethodInfo *)0x0);
                      if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                        pIVar14 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text);
                        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        uStack_18c = PhotonExtensions__GetIntProperty
                                               (player,*(System_String_o **)
                                                        (*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,
                                                (MethodInfo *)0x0);
                        pSVar15 = System_Int32__ToString((int32_t)&uStack_18c,(MethodInfo *)0x0);
                        if (pIVar14 != (Il2CppObject *)0x0) {
                          (*pIVar14->klass->vtable[0x4b].methodPtr)
                                    (pIVar14,pSVar15,pIVar14->klass->vtable[0x4b].method);
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
label_043e95da:
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_043e95df:
  (*pIVar14->klass->vtable[3].methodPtr)();
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar14,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$SetHeader
// il2cpp: void UI_ScoreboardScorePanel__SetHeader (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, int32_t currentPlayers, int32_t maxPlayers, const MethodInfo* method);
// 0x43e7380

void UI_ScoreboardScorePanel__SetHeader
               (UI_ScoreboardScorePanel_o *__this,UI_ElementStyle_o *style,int32_t currentPlayers,
               int32_t maxPlayers,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  int32_t *piVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  System_Collections_Generic_List_Transform__o *pSVar5;
  Photon_Realtime_Player_array *pPVar6;
  System_Object_array *pSVar7;
  long lVar8;
  undefined4 effect;
  char cVar9;
  bool_conflict bVar10;
  uint uVar11;
  int32_t iVar12;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  System_String_o *pSVar15;
  System_String_array *pSVar16;
  System_String_array *values;
  MethodInfo *pMVar17;
  UI_ScoreboardScorePanel_o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Object_o *obj;
  MethodInfo_24E7B40 **__this_02;
  UnityEngine_Events_UnityAction_o *parent;
  UnityEngine_Events_UnityAction_o *pUVar18;
  Il2CppObject *pIVar19;
  System_Collections_Generic_List_object__o *__this_03;
  long lVar20;
  UnityEngine_Transform_o *pUVar21;
  UnityEngine_UI_RawImage_o *__this_04;
  UnityEngine_Texture_o *value;
  System_String_o *pSVar22;
  undefined8 *puVar23;
  void *pvVar24;
  System_String_o **ppSVar25;
  PatreonEffects_EffectText_o *__this_05;
  TMPro_TMP_FontAsset_o *value_00;
  Photon_Realtime_Player_o *pPVar26;
  Photon_Realtime_Player_array *pPVar27;
  Photon_Realtime_Player_o *player;
  ulong uVar28;
  UnityEngine_Events_UnityAction_o *__this_06;
  long lVar29;
  int iVar30;
  System_String_o **unaff_RBP;
  MethodInfo_362DEC0 **style_00;
  UI_ElementStyle_o *pUVar31;
  UI_ElementStyle_o *__this_07;
  UI_ScoreboardScorePanel_o *pUVar32;
  UnityEngine_Events_UnityAction_o *parent_00;
  MethodInfo **unaff_R12;
  long *plVar33;
  UI_ScoreboardScorePanel_o **__this_08;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  UnityEngine_Color_o UVar50;
  undefined1 auVar51 [16];
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorD;
  UnityEngine_Color_o colorC;
  uint uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  UnityEngine_Color_Fields UStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  System_String_o *pSStack_160;
  System_String_o *pSStack_158;
  undefined1 auStack_150 [8];
  System_String_o *pSStack_148;
  UI_ElementStyle_o *pUStack_140;
  System_String_o *pSStack_138;
  UnityEngine_Events_UnityAction_o *pUStack_130;
  undefined1 auStack_128 [8];
  System_String_o *pSStack_120;
  UnityEngine_Color_Fields UStack_118;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  UnityEngine_Color_Fields UStack_f0;
  UnityEngine_Events_UnityAction_o *pUStack_d8;
  UnityEngine_Events_UnityAction_o *pUStack_d0;
  UI_ScoreboardScorePanel_o *pUStack_c8;
  UnityEngine_Events_UnityAction_o *pUStack_c0;
  UI_ElementStyle_o *pUStack_b8;
  UnityEngine_Events_UnityAction_o *pUStack_b0;
  UnityEngine_Events_UnityAction_o *pUStack_a8;
  ulong uStack_a0;
  UnityEngine_Events_UnityAction_o *pUStack_98;
  UI_ScoreboardScorePanel_o *pUStack_90;
  MethodInfo *pMStack_88;
  UI_ScoreboardScorePanel_o *pUStack_80;
  MethodInfo_362BED0 **ppMStack_78;
  undefined8 uStack_70;
  System_String_array *pSStack_68;
  UnityEngine_Transform_o *pUStack_60;
  UI_ScoreboardScorePanel_o *pUStack_58;
  UnityEngine_Transform_o **ppUStack_50;
  MethodInfo *pMStack_48;
  UI_ScoreboardScorePanel_o **ppUStack_40;
  undefined1 local_38 [8];
  
  pUVar32 = (UI_ScoreboardScorePanel_o *)local_38;
  local_38._4_4_ = currentPlayers;
  local_38._0_4_ = maxPlayers;
  if (g_data_057ae4df == '\0') {
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e73b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e73bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e73c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e73d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e73e1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e73ed;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e73f9;
    il2cpp_runtime_helper_023445d0(&"/");
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7405;
    il2cpp_runtime_helper_023445d0(&"Ping");
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7411;
    il2cpp_runtime_helper_023445d0(&")");
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e741d;
    il2cpp_runtime_helper_023445d0(&"Player");
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7429;
    il2cpp_runtime_helper_023445d0(&" (");
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7435;
    il2cpp_runtime_helper_023445d0(&"");
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7441;
    il2cpp_runtime_helper_023445d0(&"Action");
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e744d;
    il2cpp_runtime_helper_023445d0(&"ScoreboardPopup");
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7459;
    il2cpp_runtime_helper_023445d0(&"Scoreboard");
    g_data_057ae4df = '\x01';
  }
  pSVar16 = (System_String_array *)(__this->fields)._header;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e747c;
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._header;
  ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e748c;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pSVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
label_043e77b2:
    style_00 = (MethodInfo_362DEC0 **)&g_data_00000005;
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e77c6;
    __this_00 = TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    if (values != (System_String_array *)0x0) {
      pSVar16 = values;
      if ((int)values->max_length == 0) goto label_043e79ff;
      values->m_Items[0] = " (";
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e77f3;
      il2cpp_runtime_helper_022b4080(values->m_Items);
      __this_00 = (UI_ScoreboardScorePanel_o *)(local_38 + 4);
      style_00 = (MethodInfo_362DEC0 **)0x0;
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e77ff;
      pMVar17 = (MethodInfo *)System_Int32__ToString((int32_t)__this_00,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) goto label_043e79ff;
      __this_00 = (UI_ScoreboardScorePanel_o *)(values->m_Items + 1);
      values->m_Items[1] = (System_String_o *)pMVar17;
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7819;
      il2cpp_runtime_helper_022b4080();
      style_00 = (MethodInfo_362DEC0 **)pMVar17;
      if ((uint)values->max_length < 3) goto label_043e79ff;
      values->m_Items[2] = "/";
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e783a;
      il2cpp_runtime_helper_022b4080(values->m_Items + 2);
      style_00 = (MethodInfo_362DEC0 **)0x0;
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7844;
      pMVar17 = (MethodInfo *)System_Int32__ToString((int32_t)local_38,(MethodInfo *)0x0);
      __this_00 = pUVar32;
      if ((uint)values->max_length < 4) goto label_043e79ff;
      __this_00 = (UI_ScoreboardScorePanel_o *)(values->m_Items + 3);
      values->m_Items[3] = (System_String_o *)pMVar17;
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e785e;
      il2cpp_runtime_helper_022b4080();
      style_00 = (MethodInfo_362DEC0 **)pMVar17;
      if ((uint)values->max_length < 5) goto label_043e79ff;
      values->m_Items[4] = ")";
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7882;
      il2cpp_runtime_helper_022b4080(values->m_Items + 4);
      style_00 = (MethodInfo_362DEC0 **)0x0;
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e788c;
      pMVar17 = (MethodInfo *)System_String__Concat_3af7570(values,(MethodInfo *)0x0);
      __this_00 = (UI_ScoreboardScorePanel_o *)*ppUVar1;
      if (__this_00 != (UI_ScoreboardScorePanel_o *)0x0) {
        style_00 = (MethodInfo_362DEC0 **)0x0;
        ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e78a4;
        pUVar14 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)__this_00,0,(MethodInfo *)0x0);
        style = (UI_ElementStyle_o *)pMVar17;
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          unaff_R12 = &MethodInfo_Text_GetComponent_Text;
          ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e78c0;
          pSVar16 = (System_String_array *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar14,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e78db;
            il2cpp_runtime_helper_02337ed0();
          }
          ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e790e;
          __this_00 = (UI_ScoreboardScorePanel_o *)
                      UI_UIManager__GetLocale
                                ("ScoreboardPopup","Scoreboard","Player","","",
                                 (MethodInfo *)0x0);
          ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e791b;
          style_00 = (MethodInfo_362DEC0 **)pMVar17;
          pMVar17 = (MethodInfo *)
                    System_String__Concat_3ae5ba0
                              ((System_String_o *)__this_00,(System_String_o *)pMVar17,(MethodInfo *)0x0);
          if (pSVar16 != (System_String_array *)0x0) {
            pIVar4 = (pSVar16->obj).klass;
            ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e793a;
            (**(code **)((UnityEngine_Transform_VTable *)pIVar4->vtable + 0xf))
                      (pSVar16,pMVar17,
                       *(undefined8 *)((long)((UnityEngine_Transform_VTable *)pIVar4->vtable + 0xf) + 8));
            if (*(int *)((long)&TypeInfo_CustomLogicManager[1].fields.MaskBackground + 4) == 0) {
              ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e79e2;
              il2cpp_runtime_helper_02337ed0();
              pvVar24 = (TypeInfo_CustomLogicManager[1].fields.DoublePanelRight)->monitor;
              style_00 = (MethodInfo_362DEC0 **)pMVar17;
            }
            else {
              pvVar24 = (TypeInfo_CustomLogicManager[1].fields.DoublePanelRight)->monitor;
              style_00 = (MethodInfo_362DEC0 **)pMVar17;
            }
            if (pvVar24 == (void *)0x0) {
              return;
            }
            __this_00 = (UI_ScoreboardScorePanel_o *)*ppUVar1;
            unaff_RBP = (System_String_o **)&TypeInfo_CustomLogicManager;
            if (__this_00 != (UI_ScoreboardScorePanel_o *)0x0) {
              style_00 = (MethodInfo_362DEC0 **)0x1;
              ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7978;
              pUVar14 = UnityEngine_Transform__GetChild
                                  ((UnityEngine_Transform_o *)__this_00,1,(MethodInfo *)0x0);
              if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7989;
                style_00 = (MethodInfo_362DEC0 **)MethodInfo_Text_GetComponent_Text;
                pSVar16 = (System_String_array *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar14,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
                if (*(int *)((long)&TypeInfo_CustomLogicManager[1].fields.MaskBackground + 4) == 0) {
                  ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e799e;
                  il2cpp_runtime_helper_02337ed0();
                }
                pvVar24 = (TypeInfo_CustomLogicManager[1].fields.DoublePanelRight)->monitor;
                __this_00 = TypeInfo_CustomLogicManager;
                if ((pvVar24 != (void *)0x0) && (pSVar16 != (System_String_array *)0x0)) {
                  pIVar4 = (pSVar16->obj).klass;
                  ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e79ce;
                  (**(code **)((UnityEngine_Transform_VTable *)pIVar4->vtable + 0xf))
                            (pSVar16,*(undefined8 *)((long)pvVar24 + 0x70),
                             *(undefined8 *)((long)((UnityEngine_Transform_VTable *)pIVar4->vtable + 0xf) + 8)
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    __this_00 = (UI_ScoreboardScorePanel_o *)(__this->fields).SinglePanel;
    style_00 = (MethodInfo_362DEC0 **)&g_data_00000004;
    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e74a7;
    pUVar13 = UI_ElementFactory__CreateHorizontalGroup
                        ((UnityEngine_Transform_o *)__this_00,0.0,4,(MethodInfo *)0x0);
    if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e74ba;
      pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
      *ppUVar1 = pUVar14;
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e74c8;
      il2cpp_runtime_helper_022b4080(ppUVar1,pUVar14);
      unaff_R12 = (MethodInfo **)*ppUVar1;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e74e3;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_RBP = &"";
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7517;
      pSVar15 = UI_UIManager__GetLocale
                          ("ScoreboardPopup","Scoreboard","Player","","",(MethodInfo *)0x0)
      ;
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7533;
      UI_ElementFactory__CreateDefaultLabel
                ((UnityEngine_Transform_o *)unaff_R12,style,pSVar15,1,4,(MethodInfo *)0x0);
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7564;
      UI_ElementFactory__CreateDefaultLabel
                (*ppUVar1,style,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),1,4,
                 (MethodInfo *)0x0);
      pUVar14 = *ppUVar1;
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7594;
      pSVar15 = UI_UIManager__GetLocale
                          ("ScoreboardPopup","Scoreboard","Action","","",(MethodInfo *)0x0)
      ;
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e75b0;
      UI_ElementFactory__CreateDefaultLabel(pUVar14,style,pSVar15,1,4,(MethodInfo *)0x0);
      pSVar16 = (System_String_array *)*ppUVar1;
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e75e0;
      pSVar15 = UI_UIManager__GetLocale
                          ("ScoreboardPopup","Scoreboard","Ping","","",(MethodInfo *)0x0)
      ;
      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e75fc;
      style_00 = (MethodInfo_362DEC0 **)style;
      UI_ElementFactory__CreateDefaultLabel
                ((UnityEngine_Transform_o *)pSVar16,style,pSVar15,1,4,(MethodInfo *)0x0);
      __this_00 = (UI_ScoreboardScorePanel_o *)*ppUVar1;
      if (__this_00 != (UI_ScoreboardScorePanel_o *)0x0) {
        style_00 = (MethodInfo_362DEC0 **)0x0;
        ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7611;
        pUVar14 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)__this_00,0,(MethodInfo *)0x0);
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e762c;
          pSVar16 = (System_String_array *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
          style_00 = (MethodInfo_362DEC0 **)(__this->klass->vtable)._30_GetPanelWidth.method;
          ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7643;
          __this_00 = __this;
          fVar34 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)();
          style = (UI_ElementStyle_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
          if (pSVar16 != (System_String_array *)0x0) {
            pIVar4 = (pSVar16->obj).klass;
            style_00 = *(MethodInfo_362DEC0 ***)
                        ((long)((UnityEngine_Transform_VTable *)pIVar4->vtable + 7) + 0x18);
            ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7667;
            (**(code **)((long)((UnityEngine_Transform_VTable *)pIVar4->vtable + 7) + 0x10))
                      (fVar34 / 3.0,pSVar16);
            __this_00 = (UI_ScoreboardScorePanel_o *)*ppUVar1;
            style = (UI_ElementStyle_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
            if (__this_00 != (UI_ScoreboardScorePanel_o *)0x0) {
              style_00 = (MethodInfo_362DEC0 **)0x1;
              ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e767f;
              pUVar14 = UnityEngine_Transform__GetChild
                                  ((UnityEngine_Transform_o *)__this_00,1,(MethodInfo *)0x0);
              style = (UI_ElementStyle_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
              if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7693;
                pSVar16 = (System_String_array *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                style_00 = (MethodInfo_362DEC0 **)(__this->klass->vtable)._30_GetPanelWidth.method;
                ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e76aa;
                __this_00 = __this;
                fVar34 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)();
                style = (UI_ElementStyle_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
                if (pSVar16 != (System_String_array *)0x0) {
                  pIVar4 = (pSVar16->obj).klass;
                  style_00 = *(MethodInfo_362DEC0 ***)
                              ((long)((UnityEngine_Transform_VTable *)pIVar4->vtable + 7) + 0x18);
                  ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e76ce;
                  (**(code **)((long)((UnityEngine_Transform_VTable *)pIVar4->vtable + 7) + 0x10))
                            (fVar34 / 3.0,pSVar16);
                  __this_00 = (UI_ScoreboardScorePanel_o *)*ppUVar1;
                  style = (UI_ElementStyle_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
                  if (__this_00 != (UI_ScoreboardScorePanel_o *)0x0) {
                    style_00 = (MethodInfo_362DEC0 **)0x2;
                    ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e76e6;
                    pUVar14 = UnityEngine_Transform__GetChild
                                        ((UnityEngine_Transform_o *)__this_00,2,(MethodInfo *)0x0);
                    style = (UI_ElementStyle_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
                    if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e76fa;
                      pSVar16 = (System_String_array *)
                                UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                      style_00 = (MethodInfo_362DEC0 **)(__this->klass->vtable)._30_GetPanelWidth.method;
                      ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7711;
                      __this_00 = __this;
                      fVar34 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)();
                      style = (UI_ElementStyle_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
                      if (pSVar16 != (System_String_array *)0x0) {
                        pIVar4 = (pSVar16->obj).klass;
                        style_00 = *(MethodInfo_362DEC0 ***)
                                    ((long)((UnityEngine_Transform_VTable *)pIVar4->vtable + 7) + 0x18);
                        ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7735;
                        (**(code **)((long)((UnityEngine_Transform_VTable *)pIVar4->vtable + 7) + 0x10))
                                  (fVar34 / 6.0,pSVar16);
                        __this_00 = (UI_ScoreboardScorePanel_o *)*ppUVar1;
                        style = (UI_ElementStyle_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
                        if (__this_00 != (UI_ScoreboardScorePanel_o *)0x0) {
                          style_00 = (MethodInfo_362DEC0 **)0x3;
                          ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e774d;
                          pUVar14 = UnityEngine_Transform__GetChild
                                              ((UnityEngine_Transform_o *)__this_00,3,(MethodInfo *)0x0);
                          style = (UI_ElementStyle_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
                          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                            ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7761;
                            pSVar16 = (System_String_array *)
                                      UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                            style_00 = (MethodInfo_362DEC0 **)(__this->klass->vtable)._30_GetPanelWidth.method
                            ;
                            ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7778;
                            __this_00 = __this;
                            fVar34 = (float)(*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)();
                            style = (UI_ElementStyle_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
                            if (pSVar16 != (System_String_array *)0x0) {
                              pIVar4 = (pSVar16->obj).klass;
                              ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e779c;
                              (**(code **)((long)((UnityEngine_Transform_VTable *)pIVar4->vtable + 7) + 0x10))
                                        (fVar34 / 6.0,pSVar16,
                                         *(undefined8 *)
                                          ((long)((UnityEngine_Transform_VTable *)pIVar4->vtable + 7) + 0x18))
                              ;
                              ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e77b2;
                              UI_BasePanel__CreateHorizontalDivider
                                        ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,
                                         (MethodInfo *)0x0);
                              style = (UI_ElementStyle_o *)&MethodInfo_LayoutElement_GetComponent_LayoutElement;
                              goto label_043e77b2;
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
  ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e79ff;
  il2cpp_runtime_helper_022b2c90();
label_043e79ff:
  ppUStack_40 = (UI_ScoreboardScorePanel_o **)0x43e7a04;
  uStack_70 = il2cpp_runtime_helper_022b2ca0();
  pSStack_68 = pSVar16;
  pUStack_60 = (UnityEngine_Transform_o *)unaff_R12;
  pUStack_58 = __this;
  ppUStack_50 = ppUVar1;
  pMStack_48 = (MethodInfo *)style;
  ppUStack_40 = (UI_ScoreboardScorePanel_o **)unaff_RBP;
  if (g_data_057ae4de == '\0') {
    ppMStack_78 = (MethodInfo_362BED0 **)0x43e7a36;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppMStack_78 = (MethodInfo_362BED0 **)0x43e7a42;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    ppMStack_78 = (MethodInfo_362BED0 **)0x43e7a4e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    ppMStack_78 = (MethodInfo_362BED0 **)0x43e7a5a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    ppMStack_78 = (MethodInfo_362BED0 **)0x43e7a66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae4de = '\x01';
  }
  pSVar5 = (__this_00->fields)._rows;
  if ((pSVar5 != (System_Collections_Generic_List_Transform__o *)0x0) &&
     (pPVar27 = (__this_00->fields)._lastPlayers, pPVar27 != (Photon_Realtime_Player_array *)0x0)) {
    uVar11 = (pSVar5->fields)._size;
    parent = (UnityEngine_Events_UnityAction_o *)(ulong)uVar11;
    iVar30 = (int)pPVar27->max_length;
    if (iVar30 < (int)uVar11) {
      if (0 < (int)(uVar11 - iVar30)) {
        iVar30 = 0;
        style_00 = &MethodInfo_Void_RemoveAt;
        do {
          pSVar5 = (__this_00->fields)._rows;
          if (pSVar5 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_043e7c72;
          ppMStack_78 = (MethodInfo_362BED0 **)0x43e7ae2;
          __this_01 = (UnityEngine_Component_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar5,
                                 (pSVar5->fields)._size + -1,MethodInfo_Transform_get_Item);
          if (__this_01 == (UnityEngine_Component_o *)0x0) goto label_043e7c72;
          ppMStack_78 = (MethodInfo_362BED0 **)0x43e7af5;
          obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            ppMStack_78 = (MethodInfo_362BED0 **)0x43e7b0a;
            il2cpp_runtime_helper_02337ed0();
          }
          ppMStack_78 = (MethodInfo_362BED0 **)0x43e7b14;
          UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
          pSVar5 = (__this_00->fields)._rows;
          if (pSVar5 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_043e7c72;
          ppMStack_78 = (MethodInfo_362BED0 **)0x43e7b2f;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)pSVar5,(pSVar5->fields)._size + -1,
                     MethodInfo_Void_RemoveAt);
          pPVar27 = (__this_00->fields)._lastPlayers;
          if (pPVar27 == (Photon_Realtime_Player_array *)0x0) goto label_043e7c72;
          iVar30 = iVar30 + 1;
          __this = (UI_ScoreboardScorePanel_o *)&TypeInfo_Object;
        } while (iVar30 < (int)(uVar11 - (int)pPVar27->max_length));
      }
    }
    else if (((int)uVar11 < iVar30) && (0 < (int)(iVar30 - uVar11))) {
      iVar30 = 0;
      do {
        pSVar5 = (__this_00->fields)._rows;
        if (pSVar5 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_043e7c72;
        ppMStack_78 = (MethodInfo_362BED0 **)0x43e7b8b;
        pPVar26 = (Photon_Realtime_Player_o *)
                  UI_ScoreboardScorePanel__CreateRow
                            (__this_00,(UI_ElementStyle_o *)style_00,(pSVar5->fields)._size,
                             (MethodInfo *)pPVar27);
        lVar20 = MethodInfo_Void_Add;
        piVar2 = &(pSVar5->fields)._version;
        *piVar2 = *piVar2 + 1;
        pPVar27 = (Photon_Realtime_Player_array *)(pSVar5->fields)._items;
        if (pPVar27 == (Photon_Realtime_Player_array *)0x0) goto label_043e7c72;
        uVar3 = (pSVar5->fields)._size;
        if (uVar3 < (uint)pPVar27->max_length) {
          (pSVar5->fields)._size = uVar3 + 1;
          pPVar27->m_Items[(int)uVar3] = pPVar26;
          ppMStack_78 = (MethodInfo_362BED0 **)0x43e7bc4;
          il2cpp_runtime_helper_022b4080(pPVar27->m_Items + (int)uVar3,pPVar26);
          pPVar6 = (__this_00->fields)._lastPlayers;
        }
        else {
          pPVar27 = *(Photon_Realtime_Player_array **)(*(long *)(lVar20 + 0x20) + 0xc0);
          ppMStack_78 = (MethodInfo_362BED0 **)0x43e7bfa;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pPVar26,
                     (MethodInfo_362C220 *)pPVar27->m_Items[10]);
          pPVar6 = (__this_00->fields)._lastPlayers;
        }
        if (pPVar6 == (Photon_Realtime_Player_array *)0x0) goto label_043e7c72;
        iVar30 = iVar30 + 1;
        __this = (UI_ScoreboardScorePanel_o *)&MethodInfo_Void_Add;
      } while (iVar30 < (int)((int)pPVar6->max_length - uVar11));
    }
    __this_06 = (UnityEngine_Events_UnityAction_o *)(__this_00->fields)._rows;
    if (__this_06 != (UnityEngine_Events_UnityAction_o *)0x0) {
      uVar28 = 0;
      do {
        if ((long)(int)(__this_06->fields).invoke_impl <= (long)uVar28) {
          return;
        }
        pUVar31 = (UI_ElementStyle_o *)(uVar28 & 0xffffffff);
        ppMStack_78 = (MethodInfo_362BED0 **)0x43e7c44;
        pUVar14 = (UnityEngine_Transform_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_06,(int32_t)uVar28,
                             MethodInfo_Transform_get_Item);
        pPVar27 = (__this_00->fields)._lastPlayers;
        if (pPVar27 == (Photon_Realtime_Player_array *)0x0) break;
        if (*(uint *)&pPVar27->max_length <= uVar28) {
          ppMStack_78 = (MethodInfo_362BED0 **)0x43e7c8b;
          auVar51 = il2cpp_runtime_helper_022b2ca0();
          pUStack_a8 = auVar51._0_8_;
          ppMStack_78 = &MethodInfo_Transform_get_Item;
          pUVar18 = (UnityEngine_Events_UnityAction_o *)(auVar51._8_8_ & 0xffffffff);
          uStack_a0 = uVar28;
          pUStack_98 = parent;
          pUStack_90 = __this;
          pMStack_88 = (MethodInfo *)style_00;
          pUStack_80 = __this_00;
          if (g_data_057ae4e0 == '\0') {
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7cbc;
            il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7cc8;
            il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7cd4;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__0);
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7ce0;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__1);
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7cec;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__2);
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7cf8;
            il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7d04;
            il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7d10;
            il2cpp_runtime_helper_023445d0(&"Icons/Intro/UserIcon");
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7d1c;
            il2cpp_runtime_helper_023445d0(&"Icons/Game/VolumeOffIcon");
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7d28;
            il2cpp_runtime_helper_023445d0(&"Icons/Game/BladeIcon");
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7d34;
            il2cpp_runtime_helper_023445d0(&"Icons/Quests/Skull1Icon");
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7d40;
            il2cpp_runtime_helper_023445d0(&"0");
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7d4c;
            il2cpp_runtime_helper_023445d0(&"Icons/Navigation/CloseIcon");
            g_data_057ae4e0 = '\x01';
          }
          pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7d62;
          __this_02 = (MethodInfo_24E7B40 **)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
          __this_07 = (UI_ElementStyle_o *)0x0;
          pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7d6f;
          parent_00 = (UnityEngine_Events_UnityAction_o *)__this_02;
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          if ((UnityEngine_Events_UnityAction_o *)__this_02 != (UnityEngine_Events_UnityAction_o *)0x0) {
            (((UnityEngine_Events_UnityAction_o *)__this_02)->fields).method_ptr = (intptr_t)__this_06;
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7d8b;
            il2cpp_runtime_helper_022b4080(&((UnityEngine_Events_UnityAction_o *)__this_02)->fields,__this_06);
            *(int *)&(((UnityEngine_Events_UnityAction_o *)__this_02)->fields).invoke_impl = auVar51._8_4_;
            parent_00 = (UnityEngine_Events_UnityAction_o *)(__this_06->fields).m_target;
            __this_07 = (UI_ElementStyle_o *)&g_data_00000004;
            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7da2;
            pUVar13 = UI_ElementFactory__CreateHorizontalGroup
                                ((UnityEngine_Transform_o *)parent_00,0.0,4,(MethodInfo *)0x0);
            if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
              pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7db5;
              parent = (UnityEngine_Events_UnityAction_o *)
                       UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
              __this_07 = (UI_ElementStyle_o *)&g_data_00000004;
              pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7dcf;
              parent_00 = parent;
              pUVar13 = UI_ElementFactory__CreateHorizontalGroup
                                  ((UnityEngine_Transform_o *)parent,30.0,4,(MethodInfo *)0x0);
              if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7de6;
                pUStack_a8 = __this_06;
                pUVar18 = (UnityEngine_Events_UnityAction_o *)
                          UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
                pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7e0b;
                UI_ElementFactory__CreateRawImage
                          ((UnityEngine_Transform_o *)pUVar18,pUVar31,"Icons/Quests/Skull1Icon",32.0,32.0,(MethodInfo *)0x0
                          );
                pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7e2d;
                UI_ElementFactory__CreateRawImage
                          ((UnityEngine_Transform_o *)pUVar18,pUVar31,"Icons/Game/BladeIcon",32.0,32.0,(MethodInfo *)0x0
                          );
                __this_06 = (UnityEngine_Events_UnityAction_o *)&g_data_057b9b70;
                pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7e5b;
                UI_ElementFactory__CreateEffectText
                          ((UnityEngine_Transform_o *)pUVar18,pUVar31,
                           (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
                pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7e82;
                UI_ElementFactory__CreateDefaultLabel
                          ((UnityEngine_Transform_o *)parent,pUVar31,
                           (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
                __this_07 = (UI_ElementStyle_o *)&g_data_00000004;
                pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7e99;
                parent_00 = parent;
                pUVar13 = UI_ElementFactory__CreateHorizontalGroup
                                    ((UnityEngine_Transform_o *)parent,10.0,4,(MethodInfo *)0x0);
                if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                  pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7eac;
                  __this = (UI_ScoreboardScorePanel_o *)
                           UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
                  __this_06 = (UnityEngine_Events_UnityAction_o *)&TypeInfo_UnityAction;
                  pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7ebe;
                  pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7ed8;
                  UnityEngine_Events_UnityAction___ctor();
                  pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7efe;
                  UI_ElementFactory__CreateIconButton
                            ((UnityEngine_Transform_o *)__this,pUVar31,"Icons/Intro/UserIcon",26.0,26.0,pUVar18,
                             (MethodInfo *)0x0);
                  pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7f06;
                  pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7f20;
                  UnityEngine_Events_UnityAction___ctor();
                  pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7f46;
                  UI_ElementFactory__CreateIconButton
                            ((UnityEngine_Transform_o *)__this,pUVar31,"Icons/Game/VolumeOffIcon",30.0,30.0,pUVar18,
                             (MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                    pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e8168;
                    il2cpp_runtime_helper_02337ed0();
                    pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e816f;
                    bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                    cVar9 = (char)bVar10;
                  }
                  else {
                    pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7f64;
                    bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                    cVar9 = (char)bVar10;
                  }
                  if (cVar9 != '\0') {
                    pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7f70;
                    pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7f8a;
                    UnityEngine_Events_UnityAction___ctor();
                    pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7fb0;
                    UI_ElementFactory__CreateIconButton
                              ((UnityEngine_Transform_o *)__this,pUVar31,"Icons/Navigation/CloseIcon",24.0,24.0,pUVar18,
                               (MethodInfo *)0x0);
                  }
                  pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7fd0;
                  __this_07 = pUVar31;
                  parent_00 = parent;
                  UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)parent,pUVar31,"0",0,4,(MethodInfo *)0x0);
                  if (parent != (UnityEngine_Events_UnityAction_o *)0x0) {
                    __this_07 = (UI_ElementStyle_o *)0x0;
                    pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e7fe5;
                    parent_00 = parent;
                    pUVar14 = UnityEngine_Transform__GetChild
                                        ((UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
                    pUVar18 = pUStack_a8;
                    if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                      __this_02 = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
                      pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e8004;
                      __this_06 = (UnityEngine_Events_UnityAction_o *)
                                  UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                      __this_07 = *(UI_ElementStyle_o **)&pUVar18->klass[1]._2.token;
                      pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e801b;
                      parent_00 = pUVar18;
                      fVar34 = (float)(**(code **)&pUVar18->klass[1]._2.thread_static_fields_offset)();
                      if (__this_06 != (UnityEngine_Events_UnityAction_o *)0x0) {
                        pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e803f;
                        (*(code *)__this_06->klass[1].vtable._3_ToString.method)
                                  (fVar34 / 3.0,__this_06,__this_06->klass[1].vtable._4_unknown.methodPtr);
                        __this_07 = (UI_ElementStyle_o *)0x1;
                        pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e804e;
                        parent_00 = parent;
                        pUVar14 = UnityEngine_Transform__GetChild
                                            ((UnityEngine_Transform_o *)parent,1,(MethodInfo *)0x0);
                        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                          pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e8062;
                          __this_06 = (UnityEngine_Events_UnityAction_o *)
                                      UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                          __this_07 = *(UI_ElementStyle_o **)&pUVar18->klass[1]._2.token;
                          pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e8079;
                          parent_00 = pUVar18;
                          fVar34 = (float)(**(code **)&pUVar18->klass[1]._2.thread_static_fields_offset)();
                          if (__this_06 != (UnityEngine_Events_UnityAction_o *)0x0) {
                            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e809d;
                            (*(code *)__this_06->klass[1].vtable._3_ToString.method)
                                      (fVar34 / 3.0,__this_06,__this_06->klass[1].vtable._4_unknown.methodPtr)
                            ;
                            __this_07 = (UI_ElementStyle_o *)0x2;
                            pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e80ac;
                            parent_00 = parent;
                            pUVar14 = UnityEngine_Transform__GetChild
                                                ((UnityEngine_Transform_o *)parent,2,(MethodInfo *)0x0);
                            if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                              pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e80c0;
                              __this_06 = (UnityEngine_Events_UnityAction_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                              __this_07 = *(UI_ElementStyle_o **)&pUVar18->klass[1]._2.token;
                              pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e80d7;
                              parent_00 = pUVar18;
                              fVar34 = (float)(**(code **)&pUVar18->klass[1]._2.thread_static_fields_offset)()
                              ;
                              if (__this_06 != (UnityEngine_Events_UnityAction_o *)0x0) {
                                pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e80fb;
                                (*(code *)__this_06->klass[1].vtable._3_ToString.method)
                                          (fVar34 / 6.0,__this_06,
                                           __this_06->klass[1].vtable._4_unknown.methodPtr);
                                __this_07 = (UI_ElementStyle_o *)0x3;
                                pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e810a;
                                parent_00 = parent;
                                pUVar14 = UnityEngine_Transform__GetChild
                                                    ((UnityEngine_Transform_o *)parent,3,(MethodInfo *)0x0);
                                if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                                  pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e811a;
                                  pIVar19 = UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar14,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                                  __this_07 = *(UI_ElementStyle_o **)&pUVar18->klass[1]._2.token;
                                  pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e8131;
                                  parent_00 = pUVar18;
                                  fVar34 = (float)(**(code **)&pUVar18->klass[1]._2.
                                                               thread_static_fields_offset)();
                                  __this_06 = (UnityEngine_Events_UnityAction_o *)0x0;
                                  if (pIVar19 != (Il2CppObject *)0x0) {
                                    pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e8151;
                                    (*pIVar19->klass->vtable[0x24].methodPtr)
                                              (fVar34 / 6.0,pIVar19,pIVar19->klass->vtable[0x24].method);
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
          pUStack_b0 = (UnityEngine_Events_UnityAction_o *)0x43e8181;
          il2cpp_runtime_helper_022b2c90();
          uStack_1a0 = parent_00;
          pUStack_d8 = __this_06;
          pUStack_d0 = parent;
          pUStack_c8 = __this;
          pUStack_c0 = (UnityEngine_Events_UnityAction_o *)__this_02;
          pUStack_b8 = pUVar31;
          pUStack_b0 = pUVar18;
          if (g_data_057ae4e1 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
            il2cpp_runtime_helper_023445d0(&MethodInfo_EffectText_GetComponent_EffectText);
            il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
            il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
            il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
            il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
            il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
            il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
            il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
            il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
            il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
            il2cpp_runtime_helper_023445d0(&TypeInfo_string);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
            il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
            il2cpp_runtime_helper_023445d0(&"DefaultPanel");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/ThunderspearIcon");
            il2cpp_runtime_helper_023445d0(&"DeadColor");
            il2cpp_runtime_helper_023445d0(&"Kills");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/ShifterIcon");
            il2cpp_runtime_helper_023445d0(&"Deaths");
            il2cpp_runtime_helper_023445d0(&"LoadoutTitan");
            il2cpp_runtime_helper_023445d0(&"LoadoutShifter");
            il2cpp_runtime_helper_023445d0(&" / ");
            il2cpp_runtime_helper_023445d0(&"TotalDamage");
            il2cpp_runtime_helper_023445d0(&"Icon");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/APGIcon");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/BladeIcon");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/SpectateIcon");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/AHSSIcon");
            il2cpp_runtime_helper_023445d0(&"");
            il2cpp_runtime_helper_023445d0(&"Icons/Quests/Skull1Icon");
            il2cpp_runtime_helper_023445d0(&"Icons/Game/TitanIcon");
            il2cpp_runtime_helper_023445d0(&"SpectateColor");
            il2cpp_runtime_helper_023445d0(&"LoadoutHuman");
            il2cpp_runtime_helper_023445d0(&"HighestDamage");
            g_data_057ae4e1 = '\x01';
          }
          pSStack_120 = (System_String_o *)0x0;
          UStack_118.r = 0.0;
          UStack_118.g = 0.0;
          pUStack_130 = (UnityEngine_Events_UnityAction_o *)0x0;
          auStack_128._0_4_ = 0.0;
          auStack_128._4_4_ = 0.0;
          pUStack_140 = (UI_ElementStyle_o *)0x0;
          pSStack_138 = (System_String_o *)0x0;
          auStack_150._0_4_ = 0;
          auStack_150._4_4_ = 0;
          pSStack_148 = (System_String_o *)0x0;
          UStack_118.b = 0.0;
          UStack_118.a = 0.0;
          uStack_1c4 = 0;
          plVar33 = &TypeInfo_PlayerProperty;
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar15 = PhotonExtensions__GetStringProperty
                              (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                               (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_160 = MiscExtensions__TruncateRichText(pSVar15,0xf,(MethodInfo *)0x0);
          uStack_180 = PhotonExtensions__GetStringProperty
                                 (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),
                                  "",(MethodInfo *)0x0);
          uStack_170 = PhotonExtensions__GetStringProperty
                                 (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),
                                  "",(MethodInfo *)0x0);
          uStack_190 = PhotonExtensions__GetStringProperty
                                 (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),
                                  "",(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_CustomLogicManager[1].fields.MaskBackground + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pvVar24 = (TypeInfo_CustomLogicManager[1].fields.DoublePanelRight)->monitor;
          uStack_1c0 = __this_07;
          if (pvVar24 != (void *)0x0) {
            if (*(int *)((long)&TypeInfo_CustomLogicManager[1].fields.MaskBackground + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pvVar24 = (TypeInfo_CustomLogicManager[1].fields.DoublePanelRight)->monitor;
              if (pvVar24 == (void *)0x0) goto label_043e95da;
            }
            bVar10 = System_String__op_Inequality
                               (*(System_String_o **)((long)pvVar24 + 0x78),
                                (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              if (*(int *)((long)&TypeInfo_CustomLogicManager[1].fields.MaskBackground + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pvVar24 = (TypeInfo_CustomLogicManager[1].fields.DoublePanelRight)->monitor;
              if (pvVar24 == (void *)0x0) goto label_043e95da;
              pIVar19 = PhotonExtensions__GetCustomProperty
                                  (player,*(System_String_o **)((long)pvVar24 + 0x78),(MethodInfo *)0x0);
              if (pIVar19 == (Il2CppObject *)0x0) {
                pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
              }
              else {
                pSVar15 = (System_String_o *)(*pIVar19->klass->vtable[3].methodPtr)(pIVar19);
              }
              goto joined_r0x043e8b0c;
            }
          }
          __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
          System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_System_String);
          lVar20 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
          if (lVar20 == 0) goto label_043e95da;
          if (*(int *)(lVar20 + 0x18) == 0) goto label_043e95ba;
          plVar33 = (long *)(lVar20 + 0x20);
          *(undefined8 *)(lVar20 + 0x20) = "Kills";
          il2cpp_runtime_helper_022b4080(plVar33);
          if (*(uint *)(lVar20 + 0x18) < 2) goto label_043e95ba;
          *(undefined8 *)(lVar20 + 0x28) = "Deaths";
          il2cpp_runtime_helper_022b4080(lVar20 + 0x28);
          if (*(uint *)(lVar20 + 0x18) < 3) goto label_043e95ba;
          *(undefined8 *)(lVar20 + 0x30) = "HighestDamage";
          il2cpp_runtime_helper_022b4080(lVar20 + 0x30);
          if (*(uint *)(lVar20 + 0x18) < 4) goto label_043e95ba;
          *(undefined8 *)(lVar20 + 0x38) = "TotalDamage";
          il2cpp_runtime_helper_022b4080(lVar20 + 0x38);
          uStack_1c4 = 0;
          iVar30 = (int)*(undefined8 *)(lVar20 + 0x18);
          if (iVar30 < 1) {
            if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) goto label_043e878a;
            goto label_043e95da;
          }
          __this_08 = (UI_ScoreboardScorePanel_o **)plVar33;
          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto label_043e95c7;
          lVar29 = 0;
          plVar33 = &g_data_057b9b70;
          if (iVar30 == 0) goto label_043e95ba;
          goto label_043e8703;
        }
        ppMStack_78 = (MethodInfo_362BED0 **)0x43e7c65;
        UI_ScoreboardScorePanel__SetRow
                  (__this_00,pUVar14,(Photon_Realtime_Player_o *)pPVar27->m_Items[uVar28],
                   (MethodInfo *)pPVar27);
        uVar28 = uVar28 + 1;
        __this_06 = (UnityEngine_Events_UnityAction_o *)(__this_00->fields)._rows;
      } while (__this_06 != (UnityEngine_Events_UnityAction_o *)0x0);
    }
  }
label_043e7c72:
  ppMStack_78 = (MethodInfo_362BED0 **)0x43e7c77;
  il2cpp_runtime_helper_022b2c90();
  return;
  while( true ) {
    uVar11 = (__this_03->fields)._size;
    if (uVar11 < (uint)pSVar7->max_length) {
      (__this_03->fields)._size = uVar11 + 1;
      pSVar7->m_Items[(int)uVar11] = pIVar19;
      il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar11);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_03,pIVar19,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar29 = lVar29 + 1;
    uStack_1c4 = (uint)lVar29;
    uVar11 = (uint)*(undefined8 *)(lVar20 + 0x18);
    if ((int)uVar11 <= (int)uStack_1c4) goto label_043e878a;
    if (uVar11 <= uStack_1c4) break;
label_043e8703:
    pIVar19 = PhotonExtensions__GetCustomProperty
                        (player,*(System_String_o **)(lVar20 + 0x20 + lVar29 * 8),(MethodInfo *)0x0);
    if (pIVar19 == (Il2CppObject *)0x0) {
      pIVar19 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pIVar19 = (Il2CppObject *)
                (*pIVar19->klass->vtable[3].methodPtr)(pIVar19,pIVar19->klass->vtable[3].method);
    }
    lVar8 = MethodInfo_Void_Add;
    piVar2 = &(__this_03->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar7 = (__this_03->fields)._items;
    if (pSVar7 == (System_Object_array *)0x0) goto label_043e95da;
  }
label_043e95ba:
  value = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2ca0();
  __this_08 = (UI_ScoreboardScorePanel_o **)plVar33;
  goto label_043e95bf;
label_043e878a:
  pSVar16 = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_03,MethodInfo_String_ToArray);
  pSVar15 = System_String__Join(" / ",pSVar16,(MethodInfo *)0x0);
  __this_07 = uStack_1c0;
joined_r0x043e8b0c:
  if (((__this_07 == (UI_ElementStyle_o *)0x0) ||
      (pUVar14 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)__this_07,0,(MethodInfo *)0x0),
      pUVar14 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar21 = UnityEngine_Transform__GetChild(pUVar14,0,(MethodInfo *)0x0),
     pUVar21 == (UnityEngine_Transform_o *)0x0)) goto label_043e95da;
  __this_04 = (UnityEngine_UI_RawImage_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar21,MethodInfo_RawImage_GetComponent_RawImage);
  __this_08 = &TypeInfo_CustomLogicManager;
  if (*(int *)((long)&TypeInfo_CustomLogicManager[1].fields.MaskBackground + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar24 = (TypeInfo_CustomLogicManager[1].fields.DoublePanelRight)->monitor;
  if (pvVar24 != (void *)0x0) {
    if (*(int *)((long)&TypeInfo_CustomLogicManager[1].fields.MaskBackground + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pvVar24 = (TypeInfo_CustomLogicManager[1].fields.DoublePanelRight)->monitor;
      if (pvVar24 == (void *)0x0) goto label_043e95da;
    }
    if (*(char *)((long)pvVar24 + 0x84) == '\0') goto label_043e8b1a;
    if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = System_String__op_Equality
                       (uStack_180,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                        (MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar10 = System_String__op_Equality
                         (uStack_180,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),
                          (MethodInfo *)0x0);
      if ((char)bVar10 == '\0') goto label_043e8b1a;
      if ((__this_04 != (UnityEngine_UI_RawImage_o *)0x0) &&
         (pUVar13 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
         pUVar13 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar13,1,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar22 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset(pSVar22,"Icons/Quests/Skull1Icon",1,(MethodInfo *)0x0);
        if ((value == (UnityEngine_Texture_o *)0x0) || (value->klass == TypeInfo_Texture2D)) {
          UnityEngine_UI_RawImage__set_texture(__this_04,value,(MethodInfo *)0x0);
          pSVar22 = (System_String_o *)
                    (*(uStack_1a0->klass->vtable)._4_unknown.methodPtr)
                              (uStack_1a0,(uStack_1a0->klass->vtable)._4_unknown.method);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          puVar23 = &"DeadColor";
          goto label_043e8ab4;
        }
        goto label_043e95bf;
      }
      goto label_043e95da;
    }
    if ((__this_04 == (UnityEngine_UI_RawImage_o *)0x0) ||
       (pUVar13 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
       pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
    UnityEngine_GameObject__SetActive(pUVar13,1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar22 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar22,"Icons/Game/SpectateIcon",1,(MethodInfo *)0x0);
    if ((value == (UnityEngine_Texture_o *)0x0) || (value->klass == TypeInfo_Texture2D)) {
      UnityEngine_UI_RawImage__set_texture(__this_04,value,(MethodInfo *)0x0);
      pSVar22 = (System_String_o *)
                (*(uStack_1a0->klass->vtable)._4_unknown.methodPtr)
                          (uStack_1a0,(uStack_1a0->klass->vtable)._4_unknown.method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      puVar23 = &"SpectateColor";
label_043e8ab4:
      UVar50 = UI_UIManager__GetThemeColor
                         (pSVar22,"Icon",(System_String_o *)*puVar23,"DefaultPanel",(MethodInfo *)0x0);
      (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                (UVar50.fields.r,UVar50.fields.b,__this_04,(__this_04->klass->vtable)._23_set_color.method);
      iVar30 = *(int *)((long)&TypeInfo_CustomLogicManager[1].fields.MaskBackground + 4);
      goto joined_r0x043e8af1;
    }
    goto label_043e95bf;
  }
label_043e8b1a:
  if ((__this_04 != (UnityEngine_UI_RawImage_o *)0x0) &&
     (pUVar13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
     pUVar13 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar13,0,(MethodInfo *)0x0);
    iVar30 = *(int *)((long)&TypeInfo_CustomLogicManager[1].fields.MaskBackground + 4);
joined_r0x043e8af1:
    if (iVar30 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pvVar24 = (TypeInfo_CustomLogicManager[1].fields.DoublePanelRight)->monitor;
      if (pvVar24 == (void *)0x0) goto label_043e8bb6;
label_043e8b68:
      if (*(int *)((long)&TypeInfo_CustomLogicManager[1].fields.MaskBackground + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pvVar24 = (TypeInfo_CustomLogicManager[1].fields.DoublePanelRight)->monitor;
        if (pvVar24 == (void *)0x0) goto label_043e95da;
      }
      fVar34 = (float)(uint)*(byte *)((long)pvVar24 + 0x83);
    }
    else {
      pvVar24 = (TypeInfo_CustomLogicManager[1].fields.DoublePanelRight)->monitor;
      if (pvVar24 != (void *)0x0) goto label_043e8b68;
label_043e8bb6:
      fVar34 = 0.0;
    }
    if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
      UStack_1b0.r = fVar34;
      pUVar21 = UnityEngine_Transform__GetChild(pUVar14,1,(MethodInfo *)0x0);
      if (pUVar21 != (UnityEngine_Transform_o *)0x0) {
        __this_08 = (UI_ScoreboardScorePanel_o **)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar21,MethodInfo_RawImage_GetComponent_RawImage);
        pSStack_158 = pSVar15;
        if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = System_String__op_Equality
                           (uStack_170,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),
                            (MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar10 = System_String__op_Equality
                             (uStack_170,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                              (MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar10 = System_String__op_Equality
                               (uStack_170,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),
                                (MethodInfo *)0x0);
            pUVar31 = uStack_1c0;
            if ((char)bVar10 != '\0') {
              pSVar15 = (System_String_o *)
                        (*(uStack_1a0->klass->vtable)._4_unknown.methodPtr)
                                  (uStack_1a0,(uStack_1a0->klass->vtable)._4_unknown.method);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UVar50 = UI_UIManager__GetThemeColor
                                 (pSVar15,"Icon","LoadoutShifter","DefaultPanel",(MethodInfo *)0x0);
              if ((UnityEngine_UI_RawImage_o *)__this_08 == (UnityEngine_UI_RawImage_o *)0x0)
              goto label_043e95da;
              (*(((UnityEngine_UI_RawImage_o *)__this_08)->klass->vtable)._23_set_color.methodPtr)
                        (UVar50.fields.r,UVar50.fields.b,__this_08,
                         (((UnityEngine_UI_RawImage_o *)__this_08)->klass->vtable)._23_set_color.method);
              if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              value = (UnityEngine_Texture_o *)
                      ApplicationManagers_ResourceManager__LoadAsset(pSVar15,"Icons/Game/ShifterIcon",1,(MethodInfo *)0x0)
              ;
              if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D))
              goto label_043e95bf;
              UnityEngine_UI_RawImage__set_texture
                        ((UnityEngine_UI_RawImage_o *)__this_08,value,(MethodInfo *)0x0);
              pUVar31 = uStack_1c0;
            }
            goto label_043e91a0;
          }
          pSVar15 = (System_String_o *)
                    (*(uStack_1a0->klass->vtable)._4_unknown.methodPtr)
                              (uStack_1a0,(uStack_1a0->klass->vtable)._4_unknown.method);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar50 = UI_UIManager__GetThemeColor
                             (pSVar15,"Icon","LoadoutTitan","DefaultPanel",(MethodInfo *)0x0);
          pUVar31 = uStack_1c0;
          if ((UnityEngine_UI_RawImage_o *)__this_08 != (UnityEngine_UI_RawImage_o *)0x0) {
            (*(((UnityEngine_UI_RawImage_o *)__this_08)->klass->vtable)._23_set_color.methodPtr)
                      (UVar50.fields.r,UVar50.fields.b,__this_08,
                       (((UnityEngine_UI_RawImage_o *)__this_08)->klass->vtable)._23_set_color.method);
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            ppSVar25 = (System_String_o **)&"Icons/Game/TitanIcon";
            goto label_043e8e34;
          }
        }
        else {
          pSVar15 = (System_String_o *)
                    (*(uStack_1a0->klass->vtable)._4_unknown.methodPtr)
                              (uStack_1a0,(uStack_1a0->klass->vtable)._4_unknown.method);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar50 = UI_UIManager__GetThemeColor
                             (pSVar15,"Icon","LoadoutHuman","DefaultPanel",(MethodInfo *)0x0);
          if ((UnityEngine_UI_RawImage_o *)__this_08 != (UnityEngine_UI_RawImage_o *)0x0) {
            (*(((UnityEngine_UI_RawImage_o *)__this_08)->klass->vtable)._23_set_color.methodPtr)
                      (UVar50.fields.r,UVar50.fields.b,__this_08,
                       (((UnityEngine_UI_RawImage_o *)__this_08)->klass->vtable)._23_set_color.method);
            if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar10 = System_String__op_Equality
                               (uStack_190,(System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),
                                (MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar10 = System_String__op_Equality
                                 (uStack_190,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8),
                                  (MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar10 = System_String__op_Equality
                                   (uStack_190,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),
                                    (MethodInfo *)0x0);
                if ((char)bVar10 == '\0') {
                  if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar31 = uStack_1c0;
                  bVar10 = System_String__op_Equality
                                     (uStack_190,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),
                                      (MethodInfo *)0x0);
                  if ((char)bVar10 != '\0') {
                    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppSVar25 = (System_String_o **)&"Icons/Game/ThunderspearIcon";
                    goto label_043e8e34;
                  }
                }
                else {
                  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUVar31 = uStack_1c0;
                  pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  value = (UnityEngine_Texture_o *)
                          ApplicationManagers_ResourceManager__LoadAsset
                                    (pSVar15,"Icons/Game/APGIcon",1,(MethodInfo *)0x0);
                  if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D))
                  goto label_043e95bf;
                  UnityEngine_UI_RawImage__set_texture
                            ((UnityEngine_UI_RawImage_o *)__this_08,value,(MethodInfo *)0x0);
                }
              }
              else {
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar31 = uStack_1c0;
                pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                value = (UnityEngine_Texture_o *)
                        ApplicationManagers_ResourceManager__LoadAsset
                                  (pSVar15,"Icons/Game/AHSSIcon",1,(MethodInfo *)0x0);
                if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D))
                goto label_043e95bf;
                UnityEngine_UI_RawImage__set_texture
                          ((UnityEngine_UI_RawImage_o *)__this_08,value,(MethodInfo *)0x0);
              }
            }
            else {
              if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pUVar31 = uStack_1c0;
              pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              ppSVar25 = &"Icons/Game/BladeIcon";
label_043e8e34:
              value = (UnityEngine_Texture_o *)
                      ApplicationManagers_ResourceManager__LoadAsset(pSVar15,*ppSVar25,1,(MethodInfo *)0x0);
              if ((value != (UnityEngine_Texture_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
label_043e95bf:
                il2cpp_runtime_helper_022b2fd0(value);
label_043e95c7:
                pIVar19 = PhotonExtensions__GetCustomProperty
                                    (player,(System_String_o *)((UnityEngine_UI_RawImage_o *)__this_08)->klass
                                     ,(MethodInfo *)0x0);
                if (pIVar19 != (Il2CppObject *)0x0) goto label_043e95df;
                goto label_043e95da;
              }
              UnityEngine_UI_RawImage__set_texture
                        ((UnityEngine_UI_RawImage_o *)__this_08,value,(MethodInfo *)0x0);
            }
label_043e91a0:
            if (UStack_1b0.r == 0.0) {
label_043e91de:
              if (((UnityEngine_UI_RawImage_o *)__this_08 == (UnityEngine_UI_RawImage_o *)0x0) ||
                 (pUVar13 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0),
                 pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
              UnityEngine_GameObject__SetActive(pUVar13,0,(MethodInfo *)0x0);
            }
            else {
              if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar10 = System_String__op_Equality
                                 (uStack_180,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                                  (MethodInfo *)0x0);
              if ((char)bVar10 != '\0') goto label_043e91de;
              if (((UnityEngine_UI_RawImage_o *)__this_08 == (UnityEngine_UI_RawImage_o *)0x0) ||
                 (pUVar13 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0),
                 pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
              UnityEngine_GameObject__SetActive(pUVar13,1,(MethodInfo *)0x0);
            }
            if (player != (Photon_Realtime_Player_o *)0x0) {
              iVar12 = (player->fields).actorNumber;
              uVar11 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
              bVar10 = (player->fields).IsLocal;
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar22 = GameManagers_ChatManager__GetIDString
                                  (iVar12,uVar11 & 0xff,(uint)(byte)bVar10,(MethodInfo *)0x0);
              bVar10 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                                 (player,(PatreonEffects_ResolvedNameEffect_o *)auStack_150,(MethodInfo *)0x0)
              ;
              pSVar15 = pSStack_160;
              if ((char)bVar10 != '\0') {
                effect = auStack_150._4_4_;
                uVar35 = (int)pSStack_148;
                uVar36 = (int)((ulong)pSStack_148 >> 0x20);
                uVar37 = (int)pUStack_140;
                uVar38 = (int)((ulong)pUStack_140 >> 0x20);
                uVar39 = (int)pSStack_138;
                uVar40 = (int)((ulong)pSStack_138 >> 0x20);
                uVar41 = (int)pUStack_130;
                uVar42 = (int)((ulong)pUStack_130 >> 0x20);
                fVar34 = auStack_128._0_4_;
                fVar43 = auStack_128._4_4_;
                uVar44 = (int)pSStack_120;
                uVar45 = (int)((ulong)pSStack_120 >> 0x20);
                fVar46 = UStack_118.r;
                fVar47 = UStack_118.g;
                fVar48 = UStack_118.b;
                fVar49 = UStack_118.a;
                if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
                  uStack_170 = pSStack_148;
                  uStack_168 = 0;
                  uStack_1c0 = pUStack_140;
                  uStack_1b8 = 0;
                  uStack_180 = pSStack_138;
                  uStack_178 = 0;
                  uStack_1a0 = pUStack_130;
                  uStack_198 = 0;
                  UStack_1b0.r = (float)auStack_128._0_4_;
                  UStack_1b0.g = (float)auStack_128._4_4_;
                  UStack_1b0.b = 0.0;
                  UStack_1b0.a = 0.0;
                  uStack_190 = pSStack_120;
                  uStack_188 = 0;
                  UStack_f0.r = UStack_118.r;
                  UStack_f0.g = UStack_118.g;
                  UStack_f0.b = 0.0;
                  UStack_f0.a = 0.0;
                  fStack_100 = UStack_118.b;
                  fStack_fc = UStack_118.a;
                  uStack_f8 = 0;
                  il2cpp_runtime_helper_02337ed0();
                  uVar35 = (undefined4)uStack_170;
                  uVar36 = uStack_170._4_4_;
                  uVar37 = (undefined4)uStack_1c0;
                  uVar38 = uStack_1c0._4_4_;
                  uVar39 = (undefined4)uStack_180;
                  uVar40 = uStack_180._4_4_;
                  uVar41 = (undefined4)uStack_1a0;
                  uVar42 = uStack_1a0._4_4_;
                  fVar34 = UStack_1b0.r;
                  fVar43 = UStack_1b0.g;
                  uVar44 = (undefined4)uStack_190;
                  uVar45 = uStack_190._4_4_;
                  fVar46 = UStack_f0.r;
                  fVar47 = UStack_f0.g;
                  fVar48 = fStack_100;
                  fVar49 = fStack_fc;
                }
                UVar50.fields.g = (float)uVar36;
                UVar50.fields.r = (float)uVar35;
                UVar50.fields.a = (float)uVar38;
                UVar50.fields.b = (float)uVar37;
                colorB.fields.g = (float)uVar40;
                colorB.fields.r = (float)uVar39;
                colorB.fields.a = (float)uVar42;
                colorB.fields.b = (float)uVar41;
                colorD.fields.g = fVar47;
                colorD.fields.r = fVar46;
                colorD.fields.a = fVar49;
                colorD.fields.b = fVar48;
                colorC.fields.g = fVar43;
                colorC.fields.r = fVar34;
                colorC.fields.a = (float)uVar45;
                colorC.fields.b = (float)uVar44;
                pSVar15 = PatreonEffects_EffectText__Compose
                                    (pSVar15,effect,UVar50,colorB,colorC,colorD,(MethodInfo *)0x0);
              }
              if ((pUVar14 != (UnityEngine_Transform_o *)0x0) &&
                 (pUVar14 = UnityEngine_Transform__GetChild(pUVar14,2,(MethodInfo *)0x0),
                 pUVar14 != (UnityEngine_Transform_o *)0x0)) {
                __this_05 = (PatreonEffects_EffectText_o *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar14,MethodInfo_EffectText_GetComponent_EffectText);
                if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                value_00 = PatreonEffects_NameFontCatalog__FontForPlayer(player,0,(MethodInfo *)0x0);
                if (__this_05 != (PatreonEffects_EffectText_o *)0x0) {
                  PatreonEffects_EffectText__set_font(__this_05,value_00,(MethodInfo *)0x0);
                  pSVar15 = System_String__Concat_3ae5ba0(pSVar22,pSVar15,(MethodInfo *)0x0);
                  PatreonEffects_EffectText__set_text(__this_05,pSVar15,(MethodInfo *)0x0);
                  pUVar14 = UnityEngine_Transform__GetChild
                                      ((UnityEngine_Transform_o *)pUVar31,1,(MethodInfo *)0x0);
                  if ((pUVar14 != (UnityEngine_Transform_o *)0x0) &&
                     (pIVar19 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar14,
                                           (MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text), pIVar19 != (Il2CppObject *)0x0
                     )) {
                    (*pIVar19->klass->vtable[0x4b].methodPtr)
                              (pIVar19,pSStack_158,pIVar19->klass->vtable[0x4b].method);
                    pUVar14 = UnityEngine_Transform__GetChild
                                        ((UnityEngine_Transform_o *)pUVar31,2,(MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pPVar26 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
                    if (((pUVar14 != (UnityEngine_Transform_o *)0x0) &&
                        (pUVar21 = UnityEngine_Transform__GetChild(pUVar14,1,(MethodInfo *)0x0),
                        pUVar21 != (UnityEngine_Transform_o *)0x0)) &&
                       (pUVar13 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar21,(MethodInfo *)0x0),
                       pUVar13 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar13,(uint)(pPVar26 != player),(MethodInfo *)0x0);
                      iVar12 = UnityEngine_Transform__get_childCount(pUVar14,(MethodInfo *)0x0);
                      if (2 < iVar12) {
                        pUVar14 = UnityEngine_Transform__GetChild(pUVar14,2,(MethodInfo *)0x0);
                        if ((pUVar14 == (UnityEngine_Transform_o *)0x0) ||
                           (pUVar13 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
                           pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
                        UnityEngine_GameObject__SetActive(pUVar13,(uint)(pPVar26 != player),(MethodInfo *)0x0)
                        ;
                      }
                      pUVar14 = UnityEngine_Transform__GetChild
                                          ((UnityEngine_Transform_o *)pUVar31,3,(MethodInfo *)0x0);
                      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                        pIVar19 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar14,
                                             (MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
                        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        uStack_1c4 = PhotonExtensions__GetIntProperty
                                               (player,*(System_String_o **)
                                                        (*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,
                                                (MethodInfo *)0x0);
                        pSVar15 = System_Int32__ToString((int32_t)&uStack_1c4,(MethodInfo *)0x0);
                        if (pIVar19 != (Il2CppObject *)0x0) {
                          (*pIVar19->klass->vtable[0x4b].methodPtr)
                                    (pIVar19,pSVar15,pIVar19->klass->vtable[0x4b].method);
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
label_043e95da:
  pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_043e95df:
  (*pIVar19->klass->vtable[3].methodPtr)();
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar19,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$CreateRow
// il2cpp: UnityEngine_Transform_o* UI_ScoreboardScorePanel__CreateRow (UI_ScoreboardScorePanel_o* __this, UI_ElementStyle_o* style, int32_t index, const MethodInfo* method);
// 0x43e7c90

UnityEngine_Transform_o *
UI_ScoreboardScorePanel__CreateRow
          (UI_ScoreboardScorePanel_o *__this,UI_ElementStyle_o *style,int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  long lVar3;
  undefined4 effect;
  char cVar4;
  bool_conflict bVar5;
  int iVar6;
  uint uVar7;
  int32_t iVar8;
  UI_ScoreboardScorePanel_o *in_RAX;
  MethodInfo_24E7B40 **__this_00;
  UnityEngine_GameObject_o *pUVar9;
  UI_ScoreboardScorePanel_o *onClick;
  UnityEngine_Events_UnityAction_o *onClick_00;
  UnityEngine_Transform_o *pUVar10;
  Il2CppObject *pIVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_List_object__o *__this_01;
  long lVar13;
  System_String_array *value;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_UI_RawImage_o *__this_02;
  UnityEngine_Texture_o *value_00;
  System_String_o *pSVar15;
  undefined8 *puVar16;
  System_String_o **ppSVar17;
  PatreonEffects_EffectText_o *__this_03;
  TMPro_TMP_FontAsset_o *value_01;
  Photon_Realtime_Player_o *pPVar18;
  UnityEngine_Transform_o *extraout_RAX;
  Photon_Realtime_Player_o *player;
  long lVar19;
  MethodInfo *pMVar20;
  UI_ScoreboardScorePanel_o *parent;
  UI_ScoreboardScorePanel_o *unaff_R12;
  long *__this_04;
  UnityEngine_Transform_o *unaff_R13;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  UnityEngine_Color_o UVar37;
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorD;
  UnityEngine_Color_o colorC;
  uint uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  UnityEngine_Color_Fields UStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  System_String_o *pSStack_f0;
  System_String_o *pSStack_e8;
  undefined1 auStack_e0 [8];
  System_String_o *pSStack_d8;
  MethodInfo *pMStack_d0;
  System_String_o *pSStack_c8;
  UI_ScoreboardScorePanel_o *pUStack_c0;
  undefined1 auStack_b8 [8];
  System_String_o *pSStack_b0;
  UnityEngine_Color_Fields UStack_a8;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  UnityEngine_Color_Fields UStack_80;
  UI_ScoreboardScorePanel_o *pUStack_68;
  UI_ScoreboardScorePanel_o *pUStack_60;
  UnityEngine_Transform_o *pUStack_58;
  UI_ScoreboardScorePanel_o *pUStack_50;
  UI_ElementStyle_o *pUStack_48;
  UI_ScoreboardScorePanel_o *pUStack_40;
  UI_ScoreboardScorePanel_o *local_38;
  
  onClick = (UI_ScoreboardScorePanel_o *)(ulong)(uint)index;
  local_38 = in_RAX;
  if (g_data_057ae4e0 == '\0') {
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7cbc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7cc8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7cd4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__0);
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7ce0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__1);
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7cec;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateRow_b__2);
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7cf8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass14_0);
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7d04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7d10;
    il2cpp_runtime_helper_023445d0(&"Icons/Intro/UserIcon");
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7d1c;
    il2cpp_runtime_helper_023445d0(&"Icons/Game/VolumeOffIcon");
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7d28;
    il2cpp_runtime_helper_023445d0(&"Icons/Game/BladeIcon");
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7d34;
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/Skull1Icon");
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7d40;
    il2cpp_runtime_helper_023445d0(&"0");
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7d4c;
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/CloseIcon");
    g_data_057ae4e0 = '\x01';
  }
  pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7d62;
  __this_00 = (MethodInfo_24E7B40 **)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass14_0);
  pMVar20 = (MethodInfo *)0x0;
  pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7d6f;
  parent = (UI_ScoreboardScorePanel_o *)__this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if ((UI_ScoreboardScorePanel_o *)__this_00 != (UI_ScoreboardScorePanel_o *)0x0) {
    (((UI_ScoreboardScorePanel_o *)__this_00)->fields).m_CachedPtr = (intptr_t)__this;
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7d8b;
    il2cpp_runtime_helper_022b4080(&((UI_ScoreboardScorePanel_o *)__this_00)->fields,__this);
    *(int32_t *)&(((UI_ScoreboardScorePanel_o *)__this_00)->fields).m_CancellationTokenSource = index;
    parent = (UI_ScoreboardScorePanel_o *)(__this->fields).SinglePanel;
    pMVar20 = (MethodInfo *)&g_data_00000004;
    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7da2;
    pUVar9 = UI_ElementFactory__CreateHorizontalGroup
                       ((UnityEngine_Transform_o *)parent,0.0,4,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
      pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7db5;
      unaff_R12 = (UI_ScoreboardScorePanel_o *)UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0)
      ;
      pMVar20 = (MethodInfo *)&g_data_00000004;
      pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7dcf;
      parent = unaff_R12;
      pUVar9 = UI_ElementFactory__CreateHorizontalGroup
                         ((UnityEngine_Transform_o *)unaff_R12,30.0,4,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7de6;
        local_38 = __this;
        onClick = (UI_ScoreboardScorePanel_o *)UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0)
        ;
        pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7e0b;
        UI_ElementFactory__CreateRawImage
                  ((UnityEngine_Transform_o *)onClick,style,"Icons/Quests/Skull1Icon",32.0,32.0,(MethodInfo *)0x0);
        pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7e2d;
        UI_ElementFactory__CreateRawImage
                  ((UnityEngine_Transform_o *)onClick,style,"Icons/Game/BladeIcon",32.0,32.0,(MethodInfo *)0x0);
        __this = (UI_ScoreboardScorePanel_o *)&g_data_057b9b70;
        pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7e5b;
        UI_ElementFactory__CreateEffectText
                  ((UnityEngine_Transform_o *)onClick,style,
                   (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
        pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7e82;
        UI_ElementFactory__CreateDefaultLabel
                  ((UnityEngine_Transform_o *)unaff_R12,style,
                   (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,4,(MethodInfo *)0x0);
        pMVar20 = (MethodInfo *)&g_data_00000004;
        pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7e99;
        parent = unaff_R12;
        pUVar9 = UI_ElementFactory__CreateHorizontalGroup
                           ((UnityEngine_Transform_o *)unaff_R12,10.0,4,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7eac;
          unaff_R13 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
          __this = (UI_ScoreboardScorePanel_o *)&TypeInfo_UnityAction;
          pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7ebe;
          onClick_00 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7ed8;
          UnityEngine_Events_UnityAction___ctor();
          pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7efe;
          UI_ElementFactory__CreateIconButton
                    (unaff_R13,style,"Icons/Intro/UserIcon",26.0,26.0,onClick_00,(MethodInfo *)0x0);
          pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7f06;
          onClick = (UI_ScoreboardScorePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7f20;
          UnityEngine_Events_UnityAction___ctor();
          pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7f46;
          UI_ElementFactory__CreateIconButton
                    (unaff_R13,style,"Icons/Game/VolumeOffIcon",30.0,30.0,(UnityEngine_Events_UnityAction_o *)onClick,
                     (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e8168;
            il2cpp_runtime_helper_02337ed0();
            pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e816f;
            bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar4 = (char)bVar5;
          }
          else {
            pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7f64;
            bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar4 = (char)bVar5;
          }
          if (cVar4 != '\0') {
            pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7f70;
            onClick = (UI_ScoreboardScorePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7f8a;
            UnityEngine_Events_UnityAction___ctor();
            pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7fb0;
            UI_ElementFactory__CreateIconButton
                      (unaff_R13,style,"Icons/Navigation/CloseIcon",24.0,24.0,(UnityEngine_Events_UnityAction_o *)onClick,
                       (MethodInfo *)0x0);
          }
          pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7fd0;
          pMVar20 = (MethodInfo *)style;
          parent = unaff_R12;
          UI_ElementFactory__CreateDefaultLabel
                    ((UnityEngine_Transform_o *)unaff_R12,style,"0",0,4,(MethodInfo *)0x0);
          if (unaff_R12 != (UI_ScoreboardScorePanel_o *)0x0) {
            pMVar20 = (MethodInfo *)0x0;
            pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e7fe5;
            parent = unaff_R12;
            pUVar10 = UnityEngine_Transform__GetChild
                                ((UnityEngine_Transform_o *)unaff_R12,0,(MethodInfo *)0x0);
            onClick = local_38;
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              __this_00 = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
              pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e8004;
              __this = (UI_ScoreboardScorePanel_o *)
                       UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar10,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              pMVar20 = (onClick->klass->vtable)._30_GetPanelWidth.method;
              pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e801b;
              parent = onClick;
              fVar21 = (float)(*(onClick->klass->vtable)._30_GetPanelWidth.methodPtr)();
              if (__this != (UI_ScoreboardScorePanel_o *)0x0) {
                pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e803f;
                (*((Il2CppClass *)__this->klass)->vtable[0x24].methodPtr)
                          (fVar21 / 3.0,__this,((Il2CppClass *)__this->klass)->vtable[0x24].method);
                pMVar20 = (MethodInfo *)0x1;
                pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e804e;
                parent = unaff_R12;
                pUVar10 = UnityEngine_Transform__GetChild
                                    ((UnityEngine_Transform_o *)unaff_R12,1,(MethodInfo *)0x0);
                if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                  pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e8062;
                  __this = (UI_ScoreboardScorePanel_o *)
                           UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar10,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  pMVar20 = (onClick->klass->vtable)._30_GetPanelWidth.method;
                  pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e8079;
                  parent = onClick;
                  fVar21 = (float)(*(onClick->klass->vtable)._30_GetPanelWidth.methodPtr)();
                  if (__this != (UI_ScoreboardScorePanel_o *)0x0) {
                    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e809d;
                    (*((Il2CppClass *)__this->klass)->vtable[0x24].methodPtr)
                              (fVar21 / 3.0,__this,((Il2CppClass *)__this->klass)->vtable[0x24].method);
                    pMVar20 = (MethodInfo *)0x2;
                    pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e80ac;
                    parent = unaff_R12;
                    pUVar10 = UnityEngine_Transform__GetChild
                                        ((UnityEngine_Transform_o *)unaff_R12,2,(MethodInfo *)0x0);
                    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                      pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e80c0;
                      __this = (UI_ScoreboardScorePanel_o *)
                               UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar10,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                      pMVar20 = (onClick->klass->vtable)._30_GetPanelWidth.method;
                      pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e80d7;
                      parent = onClick;
                      fVar21 = (float)(*(onClick->klass->vtable)._30_GetPanelWidth.methodPtr)();
                      if (__this != (UI_ScoreboardScorePanel_o *)0x0) {
                        pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e80fb;
                        (*((Il2CppClass *)__this->klass)->vtable[0x24].methodPtr)
                                  (fVar21 / 6.0,__this,((Il2CppClass *)__this->klass)->vtable[0x24].method);
                        pMVar20 = (MethodInfo *)0x3;
                        pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e810a;
                        parent = unaff_R12;
                        pUVar10 = UnityEngine_Transform__GetChild
                                            ((UnityEngine_Transform_o *)unaff_R12,3,(MethodInfo *)0x0);
                        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                          pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e811a;
                          pIVar11 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar10,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                          pMVar20 = (onClick->klass->vtable)._30_GetPanelWidth.method;
                          pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e8131;
                          parent = onClick;
                          fVar21 = (float)(*(onClick->klass->vtable)._30_GetPanelWidth.methodPtr)();
                          __this = (UI_ScoreboardScorePanel_o *)0x0;
                          if (pIVar11 != (Il2CppObject *)0x0) {
                            pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e8151;
                            (*pIVar11->klass->vtable[0x24].methodPtr)
                                      (fVar21 / 6.0,pIVar11,pIVar11->klass->vtable[0x24].method);
                            return (UnityEngine_Transform_o *)unaff_R12;
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
  pUStack_40 = (UI_ScoreboardScorePanel_o *)0x43e8181;
  il2cpp_runtime_helper_022b2c90();
  uStack_130 = parent;
  pUStack_68 = __this;
  pUStack_60 = unaff_R12;
  pUStack_58 = unaff_R13;
  pUStack_50 = (UI_ScoreboardScorePanel_o *)__this_00;
  pUStack_48 = style;
  pUStack_40 = onClick;
  if (g_data_057ae4e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EffectText_GetComponent_EffectText);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/ThunderspearIcon");
    il2cpp_runtime_helper_023445d0(&"DeadColor");
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/ShifterIcon");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"LoadoutTitan");
    il2cpp_runtime_helper_023445d0(&"LoadoutShifter");
    il2cpp_runtime_helper_023445d0(&" / ");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/APGIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/BladeIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/SpectateIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/AHSSIcon");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/Skull1Icon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/TitanIcon");
    il2cpp_runtime_helper_023445d0(&"SpectateColor");
    il2cpp_runtime_helper_023445d0(&"LoadoutHuman");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057ae4e1 = '\x01';
  }
  pSStack_b0 = (System_String_o *)0x0;
  UStack_a8.r = 0.0;
  UStack_a8.g = 0.0;
  pUStack_c0 = (UI_ScoreboardScorePanel_o *)0x0;
  auStack_b8._0_4_ = 0.0;
  auStack_b8._4_4_ = 0.0;
  pMStack_d0 = (MethodInfo *)0x0;
  pSStack_c8 = (System_String_o *)0x0;
  auStack_e0._0_4_ = 0;
  auStack_e0._4_4_ = 0;
  pSStack_d8 = (System_String_o *)0x0;
  UStack_a8.b = 0.0;
  UStack_a8.a = 0.0;
  uStack_154 = 0;
  __this_04 = &TypeInfo_PlayerProperty;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = PhotonExtensions__GetStringProperty
                      (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                       (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_f0 = MiscExtensions__TruncateRichText(pSVar12,0xf,(MethodInfo *)0x0);
  uStack_110 = PhotonExtensions__GetStringProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                          (MethodInfo *)0x0);
  uStack_100 = PhotonExtensions__GetStringProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                          (MethodInfo *)0x0);
  uStack_120 = PhotonExtensions__GetStringProperty
                         (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                          (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar13 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  uStack_150 = pMVar20;
  if (lVar13 == 0) {
label_043e85bf:
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
    lVar13 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
    if (lVar13 == 0) goto label_043e95da;
    if (*(int *)(lVar13 + 0x18) == 0) {
label_043e95ba:
      value_00 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2ca0();
      goto label_043e95bf;
    }
    __this_04 = (long *)(lVar13 + 0x20);
    *(undefined8 *)(lVar13 + 0x20) = "Kills";
    il2cpp_runtime_helper_022b4080(__this_04);
    if (*(uint *)(lVar13 + 0x18) < 2) goto label_043e95ba;
    *(undefined8 *)(lVar13 + 0x28) = "Deaths";
    il2cpp_runtime_helper_022b4080(lVar13 + 0x28);
    if (*(uint *)(lVar13 + 0x18) < 3) goto label_043e95ba;
    *(undefined8 *)(lVar13 + 0x30) = "HighestDamage";
    il2cpp_runtime_helper_022b4080(lVar13 + 0x30);
    if (*(uint *)(lVar13 + 0x18) < 4) goto label_043e95ba;
    *(undefined8 *)(lVar13 + 0x38) = "TotalDamage";
    il2cpp_runtime_helper_022b4080(lVar13 + 0x38);
    uStack_154 = 0;
    iVar6 = (int)*(undefined8 *)(lVar13 + 0x18);
    if (iVar6 < 1) {
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
label_043e878a:
        value = (System_String_array *)
                System_Collections_Generic_List_object___ToArray(__this_01,MethodInfo_String_ToArray);
        pSVar12 = System_String__Join(" / ",value,(MethodInfo *)0x0);
        pMVar20 = uStack_150;
        goto joined_r0x043e87bb;
      }
      goto label_043e95da;
    }
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      lVar19 = 0;
      __this_04 = &g_data_057b9b70;
      if (iVar6 != 0) {
        do {
          pIVar11 = PhotonExtensions__GetCustomProperty
                              (player,*(System_String_o **)(lVar13 + 0x20 + lVar19 * 8),(MethodInfo *)0x0);
          if (pIVar11 == (Il2CppObject *)0x0) {
            pIVar11 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            pIVar11 = (Il2CppObject *)
                      (*pIVar11->klass->vtable[3].methodPtr)(pIVar11,pIVar11->klass->vtable[3].method);
          }
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar2 = (__this_01->fields)._items;
          if (pSVar2 == (System_Object_array *)0x0) goto label_043e95da;
          uVar7 = (__this_01->fields)._size;
          if (uVar7 < (uint)pSVar2->max_length) {
            (__this_01->fields)._size = uVar7 + 1;
            pSVar2->m_Items[(int)uVar7] = pIVar11;
            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar7);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_01,pIVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          lVar19 = lVar19 + 1;
          uStack_154 = (uint)lVar19;
          uVar7 = (uint)*(undefined8 *)(lVar13 + 0x18);
          if ((int)uVar7 <= (int)uStack_154) goto label_043e878a;
        } while (uStack_154 < uVar7);
      }
      goto label_043e95ba;
    }
label_043e95c7:
    pIVar11 = PhotonExtensions__GetCustomProperty
                        (player,(System_String_o *)((UnityEngine_UI_RawImage_o *)__this_04)->klass,
                         (MethodInfo *)0x0);
    if (pIVar11 != (Il2CppObject *)0x0) goto label_043e95df;
  }
  else if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar13 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar13 != 0) goto label_043e852c;
  }
  else {
label_043e852c:
    bVar5 = System_String__op_Inequality
                      (*(System_String_o **)(lVar13 + 0x78),
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_043e85bf;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar13 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar13 == 0) goto label_043e95da;
    pIVar11 = PhotonExtensions__GetCustomProperty
                        (player,*(System_String_o **)(lVar13 + 0x78),(MethodInfo *)0x0);
    if (pIVar11 == (Il2CppObject *)0x0) {
      pSVar12 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar12 = (System_String_o *)(*pIVar11->klass->vtable[3].methodPtr)(pIVar11);
    }
joined_r0x043e87bb:
    if (((pMVar20 != (MethodInfo *)0x0) &&
        (pUVar10 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)pMVar20,0,(MethodInfo *)0x0),
        pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
       (pUVar14 = UnityEngine_Transform__GetChild(pUVar10,0,(MethodInfo *)0x0),
       pUVar14 != (UnityEngine_Transform_o *)0x0)) {
      __this_02 = (UnityEngine_UI_RawImage_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar14,MethodInfo_RawImage_GetComponent_RawImage)
      ;
      __this_04 = &TypeInfo_CustomLogicManager;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar13 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar13 != 0) {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar13 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (lVar13 == 0) goto label_043e95da;
        }
        if (*(char *)(lVar13 + 0x84) == '\0') goto label_043e8b1a;
        if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = System_String__op_Equality
                          (uStack_110,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                           (MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = System_String__op_Equality
                            (uStack_110,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),
                             (MethodInfo *)0x0);
          if ((char)bVar5 == '\0') goto label_043e8b1a;
          if ((__this_02 != (UnityEngine_UI_RawImage_o *)0x0) &&
             (pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
             pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value_00 = (UnityEngine_Texture_o *)
                       ApplicationManagers_ResourceManager__LoadAsset
                                 (pSVar15,"Icons/Quests/Skull1Icon",1,(MethodInfo *)0x0);
            if ((value_00 == (UnityEngine_Texture_o *)0x0) || (value_00->klass == TypeInfo_Texture2D)) {
              UnityEngine_UI_RawImage__set_texture(__this_02,value_00,(MethodInfo *)0x0);
              pSVar15 = (System_String_o *)
                        (*(uStack_130->klass->vtable)._4_get_ThemePanel.methodPtr)
                                  (uStack_130,(uStack_130->klass->vtable)._4_get_ThemePanel.method);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              puVar16 = &"DeadColor";
              goto label_043e8ab4;
            }
            goto label_043e95bf;
          }
          goto label_043e95da;
        }
        if ((__this_02 == (UnityEngine_UI_RawImage_o *)0x0) ||
           (pUVar9 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
           pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
        UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value_00 = (UnityEngine_Texture_o *)
                   ApplicationManagers_ResourceManager__LoadAsset(pSVar15,"Icons/Game/SpectateIcon",1,(MethodInfo *)0x0);
        if ((value_00 == (UnityEngine_Texture_o *)0x0) || (value_00->klass == TypeInfo_Texture2D)) {
          UnityEngine_UI_RawImage__set_texture(__this_02,value_00,(MethodInfo *)0x0);
          pSVar15 = (System_String_o *)
                    (*(uStack_130->klass->vtable)._4_get_ThemePanel.methodPtr)
                              (uStack_130,(uStack_130->klass->vtable)._4_get_ThemePanel.method);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          puVar16 = &"SpectateColor";
label_043e8ab4:
          UVar37 = UI_UIManager__GetThemeColor
                             (pSVar15,"Icon",(System_String_o *)*puVar16,"DefaultPanel",(MethodInfo *)0x0)
          ;
          (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                    (UVar37.fields.r,UVar37.fields.b,__this_02,(__this_02->klass->vtable)._23_set_color.method
                    );
          iVar6 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
          goto joined_r0x043e8af1;
        }
        goto label_043e95bf;
      }
label_043e8b1a:
      if ((__this_02 == (UnityEngine_UI_RawImage_o *)0x0) ||
         (pUVar9 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
      UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
      iVar6 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
joined_r0x043e8af1:
      if (iVar6 == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar13 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar13 == 0) goto label_043e8bb6;
label_043e8b68:
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar13 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (lVar13 == 0) goto label_043e95da;
        }
        fVar21 = (float)(uint)*(byte *)(lVar13 + 0x83);
      }
      else {
        lVar13 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar13 != 0) goto label_043e8b68;
label_043e8bb6:
        fVar21 = 0.0;
      }
      if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_043e95da;
      UStack_140.r = fVar21;
      pUVar14 = UnityEngine_Transform__GetChild(pUVar10,1,(MethodInfo *)0x0);
      if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_043e95da;
      __this_04 = (long *)UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar14,MethodInfo_RawImage_GetComponent_RawImage);
      pSStack_e8 = pSVar12;
      if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = System_String__op_Equality
                        (uStack_100,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = System_String__op_Equality
                          (uStack_100,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                           (MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = System_String__op_Equality
                            (uStack_100,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),
                             (MethodInfo *)0x0);
          pMVar20 = uStack_150;
          if ((char)bVar5 != '\0') {
            pSVar12 = (System_String_o *)
                      (*(uStack_130->klass->vtable)._4_get_ThemePanel.methodPtr)
                                (uStack_130,(uStack_130->klass->vtable)._4_get_ThemePanel.method);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UVar37 = UI_UIManager__GetThemeColor
                               (pSVar12,"Icon","LoadoutShifter","DefaultPanel",(MethodInfo *)0x0);
            if ((UnityEngine_UI_RawImage_o *)__this_04 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043e95da;
            (*(((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.methodPtr)
                      (UVar37.fields.r,UVar37.fields.b,__this_04,
                       (((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.method);
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value_00 = (UnityEngine_Texture_o *)
                       ApplicationManagers_ResourceManager__LoadAsset
                                 (pSVar12,"Icons/Game/ShifterIcon",1,(MethodInfo *)0x0);
            if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
            goto label_043e95bf;
            UnityEngine_UI_RawImage__set_texture
                      ((UnityEngine_UI_RawImage_o *)__this_04,value_00,(MethodInfo *)0x0);
            pMVar20 = uStack_150;
          }
          goto label_043e91a0;
        }
        pSVar12 = (System_String_o *)
                  (*(uStack_130->klass->vtable)._4_get_ThemePanel.methodPtr)
                            (uStack_130,(uStack_130->klass->vtable)._4_get_ThemePanel.method);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UVar37 = UI_UIManager__GetThemeColor(pSVar12,"Icon","LoadoutTitan","DefaultPanel",(MethodInfo *)0x0)
        ;
        pMVar20 = uStack_150;
        if ((UnityEngine_UI_RawImage_o *)__this_04 != (UnityEngine_UI_RawImage_o *)0x0) {
          (*(((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.methodPtr)
                    (UVar37.fields.r,UVar37.fields.b,__this_04,
                     (((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.method);
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ppSVar17 = (System_String_o **)&"Icons/Game/TitanIcon";
          goto label_043e8e34;
        }
        goto label_043e95da;
      }
      pSVar12 = (System_String_o *)
                (*(uStack_130->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (uStack_130,(uStack_130->klass->vtable)._4_get_ThemePanel.method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar37 = UI_UIManager__GetThemeColor(pSVar12,"Icon","LoadoutHuman","DefaultPanel",(MethodInfo *)0x0);
      if ((UnityEngine_UI_RawImage_o *)__this_04 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043e95da;
      (*(((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.methodPtr)
                (UVar37.fields.r,UVar37.fields.b,__this_04,
                 (((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.method);
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = System_String__op_Equality
                        (uStack_120,(System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = System_String__op_Equality
                          (uStack_120,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8),
                           (MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = System_String__op_Equality
                            (uStack_120,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),
                             (MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar20 = uStack_150;
            bVar5 = System_String__op_Equality
                              (uStack_120,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),
                               (MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar12 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              ppSVar17 = (System_String_o **)&"Icons/Game/ThunderspearIcon";
              goto label_043e8e34;
            }
          }
          else {
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar20 = uStack_150;
            pSVar12 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value_00 = (UnityEngine_Texture_o *)
                       ApplicationManagers_ResourceManager__LoadAsset
                                 (pSVar12,"Icons/Game/APGIcon",1,(MethodInfo *)0x0);
            if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
            goto label_043e95bf;
            UnityEngine_UI_RawImage__set_texture
                      ((UnityEngine_UI_RawImage_o *)__this_04,value_00,(MethodInfo *)0x0);
          }
        }
        else {
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar20 = uStack_150;
          pSVar12 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          value_00 = (UnityEngine_Texture_o *)
                     ApplicationManagers_ResourceManager__LoadAsset(pSVar12,"Icons/Game/AHSSIcon",1,(MethodInfo *)0x0);
          if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
          goto label_043e95bf;
          UnityEngine_UI_RawImage__set_texture
                    ((UnityEngine_UI_RawImage_o *)__this_04,value_00,(MethodInfo *)0x0);
        }
label_043e91a0:
        if (UStack_140.r == 0.0) {
label_043e91de:
          if (((UnityEngine_UI_RawImage_o *)__this_04 == (UnityEngine_UI_RawImage_o *)0x0) ||
             (pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
             pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
          UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = System_String__op_Equality
                            (uStack_110,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') goto label_043e91de;
          if (((UnityEngine_UI_RawImage_o *)__this_04 == (UnityEngine_UI_RawImage_o *)0x0) ||
             (pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
             pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
          UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
        }
        if (player != (Photon_Realtime_Player_o *)0x0) {
          iVar8 = (player->fields).actorNumber;
          uVar7 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
          bVar5 = (player->fields).IsLocal;
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar15 = GameManagers_ChatManager__GetIDString
                              (iVar8,uVar7 & 0xff,(uint)(byte)bVar5,(MethodInfo *)0x0);
          bVar5 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                            (player,(PatreonEffects_ResolvedNameEffect_o *)auStack_e0,(MethodInfo *)0x0);
          pSVar12 = pSStack_f0;
          if ((char)bVar5 != '\0') {
            effect = auStack_e0._4_4_;
            uVar22 = (int)pSStack_d8;
            uVar23 = (int)((ulong)pSStack_d8 >> 0x20);
            uVar24 = (int)pMStack_d0;
            uVar25 = (int)((ulong)pMStack_d0 >> 0x20);
            uVar26 = (int)pSStack_c8;
            uVar27 = (int)((ulong)pSStack_c8 >> 0x20);
            uVar28 = (int)pUStack_c0;
            uVar29 = (int)((ulong)pUStack_c0 >> 0x20);
            fVar21 = auStack_b8._0_4_;
            fVar30 = auStack_b8._4_4_;
            uVar31 = (int)pSStack_b0;
            uVar32 = (int)((ulong)pSStack_b0 >> 0x20);
            fVar33 = UStack_a8.r;
            fVar34 = UStack_a8.g;
            fVar35 = UStack_a8.b;
            fVar36 = UStack_a8.a;
            if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
              uStack_100 = pSStack_d8;
              uStack_f8 = 0;
              uStack_150 = pMStack_d0;
              uStack_148 = 0;
              uStack_110 = pSStack_c8;
              uStack_108 = 0;
              uStack_130 = pUStack_c0;
              uStack_128 = 0;
              UStack_140.r = (float)auStack_b8._0_4_;
              UStack_140.g = (float)auStack_b8._4_4_;
              UStack_140.b = 0.0;
              UStack_140.a = 0.0;
              uStack_120 = pSStack_b0;
              uStack_118 = 0;
              UStack_80.r = UStack_a8.r;
              UStack_80.g = UStack_a8.g;
              UStack_80.b = 0.0;
              UStack_80.a = 0.0;
              fStack_90 = UStack_a8.b;
              fStack_8c = UStack_a8.a;
              uStack_88 = 0;
              il2cpp_runtime_helper_02337ed0();
              uVar22 = (undefined4)uStack_100;
              uVar23 = uStack_100._4_4_;
              uVar24 = (undefined4)uStack_150;
              uVar25 = uStack_150._4_4_;
              uVar26 = (undefined4)uStack_110;
              uVar27 = uStack_110._4_4_;
              uVar28 = (undefined4)uStack_130;
              uVar29 = uStack_130._4_4_;
              fVar21 = UStack_140.r;
              fVar30 = UStack_140.g;
              uVar31 = (undefined4)uStack_120;
              uVar32 = uStack_120._4_4_;
              fVar33 = UStack_80.r;
              fVar34 = UStack_80.g;
              fVar35 = fStack_90;
              fVar36 = fStack_8c;
            }
            UVar37.fields.g = (float)uVar23;
            UVar37.fields.r = (float)uVar22;
            UVar37.fields.a = (float)uVar25;
            UVar37.fields.b = (float)uVar24;
            colorB.fields.g = (float)uVar27;
            colorB.fields.r = (float)uVar26;
            colorB.fields.a = (float)uVar29;
            colorB.fields.b = (float)uVar28;
            colorD.fields.g = fVar34;
            colorD.fields.r = fVar33;
            colorD.fields.a = fVar36;
            colorD.fields.b = fVar35;
            colorC.fields.g = fVar30;
            colorC.fields.r = fVar21;
            colorC.fields.a = (float)uVar32;
            colorC.fields.b = (float)uVar31;
            pSVar12 = PatreonEffects_EffectText__Compose
                                (pSVar12,effect,UVar37,colorB,colorC,colorD,(MethodInfo *)0x0);
          }
          if ((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
             (pUVar10 = UnityEngine_Transform__GetChild(pUVar10,2,(MethodInfo *)0x0),
             pUVar10 != (UnityEngine_Transform_o *)0x0)) {
            __this_03 = (PatreonEffects_EffectText_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar10,MethodInfo_EffectText_GetComponent_EffectText);
            if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value_01 = PatreonEffects_NameFontCatalog__FontForPlayer(player,0,(MethodInfo *)0x0);
            if (__this_03 != (PatreonEffects_EffectText_o *)0x0) {
              PatreonEffects_EffectText__set_font(__this_03,value_01,(MethodInfo *)0x0);
              pSVar12 = System_String__Concat_3ae5ba0(pSVar15,pSVar12,(MethodInfo *)0x0);
              PatreonEffects_EffectText__set_text(__this_03,pSVar12,(MethodInfo *)0x0);
              pUVar10 = UnityEngine_Transform__GetChild
                                  ((UnityEngine_Transform_o *)pMVar20,1,(MethodInfo *)0x0);
              if ((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                 (pIVar11 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text),
                 pIVar11 != (Il2CppObject *)0x0)) {
                (*pIVar11->klass->vtable[0x4b].methodPtr)
                          (pIVar11,pSStack_e8,pIVar11->klass->vtable[0x4b].method);
                pUVar10 = UnityEngine_Transform__GetChild
                                    ((UnityEngine_Transform_o *)pMVar20,2,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pPVar18 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
                if (((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                    (pUVar14 = UnityEngine_Transform__GetChild(pUVar10,1,(MethodInfo *)0x0),
                    pUVar14 != (UnityEngine_Transform_o *)0x0)) &&
                   (pUVar9 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0),
                   pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar9,(uint)(pPVar18 != player),(MethodInfo *)0x0);
                  iVar8 = UnityEngine_Transform__get_childCount(pUVar10,(MethodInfo *)0x0);
                  if (2 < iVar8) {
                    pUVar10 = UnityEngine_Transform__GetChild(pUVar10,2,(MethodInfo *)0x0);
                    if ((pUVar10 == (UnityEngine_Transform_o *)0x0) ||
                       (pUVar9 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0),
                       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
                    UnityEngine_GameObject__SetActive(pUVar9,(uint)(pPVar18 != player),(MethodInfo *)0x0);
                  }
                  pUVar10 = UnityEngine_Transform__GetChild
                                      ((UnityEngine_Transform_o *)pMVar20,3,(MethodInfo *)0x0);
                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                    pIVar11 = UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
                    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    uStack_154 = PhotonExtensions__GetIntProperty
                                           (player,*(System_String_o **)
                                                    (*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80),0,
                                            (MethodInfo *)0x0);
                    pSVar12 = System_Int32__ToString((int32_t)&uStack_154,(MethodInfo *)0x0);
                    if (pIVar11 != (Il2CppObject *)0x0) {
                      pUVar10 = (UnityEngine_Transform_o *)
                                (*pIVar11->klass->vtable[0x4b].methodPtr)
                                          (pIVar11,pSVar12,pIVar11->klass->vtable[0x4b].method);
                      return pUVar10;
                    }
                  }
                }
              }
            }
          }
        }
        goto label_043e95da;
      }
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar20 = uStack_150;
      pSVar12 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppSVar17 = &"Icons/Game/BladeIcon";
label_043e8e34:
      value_00 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(pSVar12,*ppSVar17,1,(MethodInfo *)0x0);
      if ((value_00 == (UnityEngine_Texture_o *)0x0) || (value_00->klass == TypeInfo_Texture2D)) {
        UnityEngine_UI_RawImage__set_texture
                  ((UnityEngine_UI_RawImage_o *)__this_04,value_00,(MethodInfo *)0x0);
        goto label_043e91a0;
      }
label_043e95bf:
      il2cpp_runtime_helper_022b2fd0(value_00);
      goto label_043e95c7;
    }
  }
label_043e95da:
  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_043e95df:
  (*pIVar11->klass->vtable[3].methodPtr)();
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar11,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.ScoreboardScorePanel$$SetRow
// il2cpp: void UI_ScoreboardScorePanel__SetRow (UI_ScoreboardScorePanel_o* __this, UnityEngine_Transform_o* row, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43e8190

void UI_ScoreboardScorePanel__SetRow
               (UI_ScoreboardScorePanel_o *__this,UnityEngine_Transform_o *row,
               Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  long lVar3;
  undefined4 effect;
  bool_conflict bVar4;
  int iVar5;
  uint uVar6;
  int32_t iVar7;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar10;
  System_String_array *value;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_UI_RawImage_o *__this_01;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_Texture_o *value_00;
  System_String_o *pSVar14;
  undefined8 *puVar15;
  PatreonEffects_EffectText_o *__this_02;
  TMPro_TMP_FontAsset_o *value_01;
  Photon_Realtime_Player_o *pPVar16;
  UnityEngine_Transform_o *__this_03;
  long lVar17;
  long *__this_04;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  UnityEngine_Color_o UVar34;
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorD;
  UnityEngine_Color_o colorC;
  uint local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  UnityEngine_Color_Fields local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  System_String_o *local_b8;
  System_String_o *local_b0;
  undefined1 local_a8 [8];
  System_String_o *pSStack_a0;
  UnityEngine_Transform_o *local_98;
  System_String_o *pSStack_90;
  UI_ScoreboardScorePanel_o *local_88;
  undefined1 auStack_80 [8];
  System_String_o *local_78;
  UnityEngine_Color_Fields UStack_70;
  float local_58;
  float fStack_54;
  undefined8 uStack_50;
  UnityEngine_Color_Fields local_48;
  
  local_f8 = __this;
  if (g_data_057ae4e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_EffectText_GetComponent_EffectText);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectText);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanLoadout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NameFontCatalog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerStatus);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/ThunderspearIcon");
    il2cpp_runtime_helper_023445d0(&"DeadColor");
    il2cpp_runtime_helper_023445d0(&"Kills");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/ShifterIcon");
    il2cpp_runtime_helper_023445d0(&"Deaths");
    il2cpp_runtime_helper_023445d0(&"LoadoutTitan");
    il2cpp_runtime_helper_023445d0(&"LoadoutShifter");
    il2cpp_runtime_helper_023445d0(&" / ");
    il2cpp_runtime_helper_023445d0(&"TotalDamage");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/APGIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/BladeIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/SpectateIcon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/AHSSIcon");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Icons/Quests/Skull1Icon");
    il2cpp_runtime_helper_023445d0(&"Icons/Game/TitanIcon");
    il2cpp_runtime_helper_023445d0(&"SpectateColor");
    il2cpp_runtime_helper_023445d0(&"LoadoutHuman");
    il2cpp_runtime_helper_023445d0(&"HighestDamage");
    g_data_057ae4e1 = '\x01';
  }
  local_78 = (System_String_o *)0x0;
  UStack_70.r = 0.0;
  UStack_70.g = 0.0;
  local_88 = (UI_ScoreboardScorePanel_o *)0x0;
  auStack_80._0_4_ = 0.0;
  auStack_80._4_4_ = 0.0;
  local_98 = (UnityEngine_Transform_o *)0x0;
  pSStack_90 = (System_String_o *)0x0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  pSStack_a0 = (System_String_o *)0x0;
  UStack_70.b = 0.0;
  UStack_70.a = 0.0;
  local_11c = 0;
  __this_04 = &TypeInfo_PlayerProperty;
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = PhotonExtensions__GetStringProperty
                     (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_b8 = MiscExtensions__TruncateRichText(pSVar8,0xf,(MethodInfo *)0x0);
  local_d8 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),"",
                        (MethodInfo *)0x0);
  local_c8 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x20),"",
                        (MethodInfo *)0x0);
  local_e8 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x48),"",
                        (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  local_118 = row;
  if (lVar10 == 0) {
label_043e85bf:
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
    lVar10 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
    if (lVar10 == 0) goto label_043e95da;
    if (*(int *)(lVar10 + 0x18) == 0) {
label_043e95ba:
      value_00 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2ca0();
      goto label_043e95bf;
    }
    __this_04 = (long *)(lVar10 + 0x20);
    *(undefined8 *)(lVar10 + 0x20) = "Kills";
    il2cpp_runtime_helper_022b4080(__this_04);
    if (*(uint *)(lVar10 + 0x18) < 2) goto label_043e95ba;
    *(undefined8 *)(lVar10 + 0x28) = "Deaths";
    il2cpp_runtime_helper_022b4080(lVar10 + 0x28);
    if (*(uint *)(lVar10 + 0x18) < 3) goto label_043e95ba;
    *(undefined8 *)(lVar10 + 0x30) = "HighestDamage";
    il2cpp_runtime_helper_022b4080(lVar10 + 0x30);
    if (*(uint *)(lVar10 + 0x18) < 4) goto label_043e95ba;
    *(undefined8 *)(lVar10 + 0x38) = "TotalDamage";
    il2cpp_runtime_helper_022b4080(lVar10 + 0x38);
    local_11c = 0;
    iVar5 = (int)*(undefined8 *)(lVar10 + 0x18);
    if (iVar5 < 1) {
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
label_043e878a:
        value = (System_String_array *)
                System_Collections_Generic_List_object___ToArray(__this_00,MethodInfo_String_ToArray);
        pSVar8 = System_String__Join(" / ",value,(MethodInfo *)0x0);
        row = local_118;
        goto joined_r0x043e87bb;
      }
      goto label_043e95da;
    }
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      lVar17 = 0;
      __this_04 = &g_data_057b9b70;
      if (iVar5 != 0) {
        do {
          pIVar9 = PhotonExtensions__GetCustomProperty
                             (player,*(System_String_o **)(lVar10 + 0x20 + lVar17 * 8),(MethodInfo *)0x0);
          if (pIVar9 == (Il2CppObject *)0x0) {
            pIVar9 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            pIVar9 = (Il2CppObject *)
                     (*pIVar9->klass->vtable[3].methodPtr)(pIVar9,pIVar9->klass->vtable[3].method);
          }
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar2 = (__this_00->fields)._items;
          if (pSVar2 == (System_Object_array *)0x0) goto label_043e95da;
          uVar6 = (__this_00->fields)._size;
          if (uVar6 < (uint)pSVar2->max_length) {
            (__this_00->fields)._size = uVar6 + 1;
            pSVar2->m_Items[(int)uVar6] = pIVar9;
            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar6);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,pIVar9,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          lVar17 = lVar17 + 1;
          local_11c = (uint)lVar17;
          uVar6 = (uint)*(undefined8 *)(lVar10 + 0x18);
          if ((int)uVar6 <= (int)local_11c) goto label_043e878a;
        } while (local_11c < uVar6);
      }
      goto label_043e95ba;
    }
label_043e95c7:
    pIVar9 = PhotonExtensions__GetCustomProperty
                       (player,(System_String_o *)((UnityEngine_UI_RawImage_o *)__this_04)->klass,
                        (MethodInfo *)0x0);
    if (pIVar9 != (Il2CppObject *)0x0) goto label_043e95df;
  }
  else if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar10 != 0) goto label_043e852c;
  }
  else {
label_043e852c:
    bVar4 = System_String__op_Inequality
                      (*(System_String_o **)(lVar10 + 0x78),
                       (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto label_043e85bf;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar10 == 0) goto label_043e95da;
    pIVar9 = PhotonExtensions__GetCustomProperty
                       (player,*(System_String_o **)(lVar10 + 0x78),(MethodInfo *)0x0);
    if (pIVar9 == (Il2CppObject *)0x0) {
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar8 = (System_String_o *)(*pIVar9->klass->vtable[3].methodPtr)(pIVar9);
    }
joined_r0x043e87bb:
    if (((row != (UnityEngine_Transform_o *)0x0) &&
        (pUVar11 = UnityEngine_Transform__GetChild(row,0,(MethodInfo *)0x0),
        pUVar11 != (UnityEngine_Transform_o *)0x0)) &&
       (pUVar12 = UnityEngine_Transform__GetChild(pUVar11,0,(MethodInfo *)0x0),
       pUVar12 != (UnityEngine_Transform_o *)0x0)) {
      __this_01 = (UnityEngine_UI_RawImage_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar12,MethodInfo_RawImage_GetComponent_RawImage)
      ;
      __this_04 = &TypeInfo_CustomLogicManager;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar10 != 0) {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (lVar10 == 0) goto label_043e95da;
        }
        if (*(char *)(lVar10 + 0x84) == '\0') goto label_043e8b1a;
        if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = System_String__op_Equality
                          (local_d8,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                           (MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = System_String__op_Equality
                            (local_d8,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 8),
                             (MethodInfo *)0x0);
          if ((char)bVar4 == '\0') goto label_043e8b1a;
          if ((__this_01 != (UnityEngine_UI_RawImage_o *)0x0) &&
             (pUVar13 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
             pUVar13 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar13,1,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar14 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value_00 = (UnityEngine_Texture_o *)
                       ApplicationManagers_ResourceManager__LoadAsset
                                 (pSVar14,"Icons/Quests/Skull1Icon",1,(MethodInfo *)0x0);
            if ((value_00 == (UnityEngine_Texture_o *)0x0) || (value_00->klass == TypeInfo_Texture2D)) {
              UnityEngine_UI_RawImage__set_texture(__this_01,value_00,(MethodInfo *)0x0);
              pSVar14 = (System_String_o *)
                        (*(local_f8->klass->vtable)._4_get_ThemePanel.methodPtr)
                                  (local_f8,(local_f8->klass->vtable)._4_get_ThemePanel.method);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              puVar15 = &"DeadColor";
              goto label_043e8ab4;
            }
            goto label_043e95bf;
          }
          goto label_043e95da;
        }
        if ((__this_01 == (UnityEngine_UI_RawImage_o *)0x0) ||
           (pUVar13 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
        UnityEngine_GameObject__SetActive(pUVar13,1,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar14 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value_00 = (UnityEngine_Texture_o *)
                   ApplicationManagers_ResourceManager__LoadAsset(pSVar14,"Icons/Game/SpectateIcon",1,(MethodInfo *)0x0);
        if ((value_00 == (UnityEngine_Texture_o *)0x0) || (value_00->klass == TypeInfo_Texture2D)) {
          UnityEngine_UI_RawImage__set_texture(__this_01,value_00,(MethodInfo *)0x0);
          pSVar14 = (System_String_o *)
                    (*(local_f8->klass->vtable)._4_get_ThemePanel.methodPtr)
                              (local_f8,(local_f8->klass->vtable)._4_get_ThemePanel.method);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          puVar15 = &"SpectateColor";
label_043e8ab4:
          UVar34 = UI_UIManager__GetThemeColor
                             (pSVar14,"Icon",(System_String_o *)*puVar15,"DefaultPanel",(MethodInfo *)0x0)
          ;
          (*(__this_01->klass->vtable)._23_set_color.methodPtr)
                    (UVar34.fields.r,UVar34.fields.b,__this_01,(__this_01->klass->vtable)._23_set_color.method
                    );
          iVar5 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
          goto joined_r0x043e8af1;
        }
        goto label_043e95bf;
      }
label_043e8b1a:
      if ((__this_01 == (UnityEngine_UI_RawImage_o *)0x0) ||
         (pUVar13 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
      UnityEngine_GameObject__SetActive(pUVar13,0,(MethodInfo *)0x0);
      iVar5 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
joined_r0x043e8af1:
      if (iVar5 == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar10 == 0) goto label_043e8bb6;
label_043e8b68:
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (lVar10 == 0) goto label_043e95da;
        }
        fVar26 = (float)(uint)*(byte *)(lVar10 + 0x83);
      }
      else {
        lVar10 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar10 != 0) goto label_043e8b68;
label_043e8bb6:
        fVar26 = 0.0;
      }
      if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_043e95da;
      local_108.r = fVar26;
      pUVar12 = UnityEngine_Transform__GetChild(pUVar11,1,(MethodInfo *)0x0);
      if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_043e95da;
      __this_04 = (long *)UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar12,MethodInfo_RawImage_GetComponent_RawImage);
      local_b0 = pSVar8;
      if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = System_String__op_Equality
                        (local_c8,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerCharacter + 0xb8),(MethodInfo *)0x0)
      ;
      if ((char)bVar4 == '\0') {
        if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = System_String__op_Equality
                          (local_c8,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 8),
                           (MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          if (*(int *)(TypeInfo_PlayerCharacter + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = System_String__op_Equality
                            (local_c8,*(System_String_o **)(*(long *)(TypeInfo_PlayerCharacter + 0xb8) + 0x10),
                             (MethodInfo *)0x0);
          pUVar12 = local_118;
          if ((char)bVar4 != '\0') {
            pSVar8 = (System_String_o *)
                     (*(local_f8->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (local_f8,(local_f8->klass->vtable)._4_get_ThemePanel.method);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UVar34 = UI_UIManager__GetThemeColor
                               (pSVar8,"Icon","LoadoutShifter","DefaultPanel",(MethodInfo *)0x0);
            if ((UnityEngine_UI_RawImage_o *)__this_04 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043e95da;
            (*(((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.methodPtr)
                      (UVar34.fields.r,UVar34.fields.b,__this_04,
                       (((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.method);
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value_00 = (UnityEngine_Texture_o *)
                       ApplicationManagers_ResourceManager__LoadAsset(pSVar8,"Icons/Game/ShifterIcon",1,(MethodInfo *)0x0)
            ;
            if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
            goto label_043e95bf;
            UnityEngine_UI_RawImage__set_texture
                      ((UnityEngine_UI_RawImage_o *)__this_04,value_00,(MethodInfo *)0x0);
            pUVar12 = local_118;
          }
          goto label_043e91a0;
        }
        pSVar8 = (System_String_o *)
                 (*(local_f8->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (local_f8,(local_f8->klass->vtable)._4_get_ThemePanel.method);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UVar34 = UI_UIManager__GetThemeColor(pSVar8,"Icon","LoadoutTitan","DefaultPanel",(MethodInfo *)0x0);
        pUVar12 = local_118;
        if ((UnityEngine_UI_RawImage_o *)__this_04 != (UnityEngine_UI_RawImage_o *)0x0) {
          (*(((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.methodPtr)
                    (UVar34.fields.r,UVar34.fields.b,__this_04,
                     (((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.method);
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          puVar15 = &"Icons/Game/TitanIcon";
          goto label_043e8e34;
        }
        goto label_043e95da;
      }
      pSVar8 = (System_String_o *)
               (*(local_f8->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (local_f8,(local_f8->klass->vtable)._4_get_ThemePanel.method);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar34 = UI_UIManager__GetThemeColor(pSVar8,"Icon","LoadoutHuman","DefaultPanel",(MethodInfo *)0x0);
      if ((UnityEngine_UI_RawImage_o *)__this_04 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043e95da;
      (*(((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.methodPtr)
                (UVar34.fields.r,UVar34.fields.b,__this_04,
                 (((UnityEngine_UI_RawImage_o *)__this_04)->klass->vtable)._23_set_color.method);
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = System_String__op_Equality
                        (local_e8,(System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),(MethodInfo *)0x0)
      ;
      if ((char)bVar4 == '\0') {
        if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = System_String__op_Equality
                          (local_e8,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8),
                           (MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = System_String__op_Equality
                            (local_e8,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),
                             (MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar12 = local_118;
            bVar4 = System_String__op_Equality
                              (local_e8,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),
                               (MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
              if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              puVar15 = &"Icons/Game/ThunderspearIcon";
              goto label_043e8e34;
            }
          }
          else {
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar12 = local_118;
            pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value_00 = (UnityEngine_Texture_o *)
                       ApplicationManagers_ResourceManager__LoadAsset(pSVar8,"Icons/Game/APGIcon",1,(MethodInfo *)0x0)
            ;
            if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
            goto label_043e95bf;
            UnityEngine_UI_RawImage__set_texture
                      ((UnityEngine_UI_RawImage_o *)__this_04,value_00,(MethodInfo *)0x0);
          }
        }
        else {
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar12 = local_118;
          pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          value_00 = (UnityEngine_Texture_o *)
                     ApplicationManagers_ResourceManager__LoadAsset(pSVar8,"Icons/Game/AHSSIcon",1,(MethodInfo *)0x0);
          if ((value_00 != (UnityEngine_Texture_o *)0x0) && (value_00->klass != TypeInfo_Texture2D))
          goto label_043e95bf;
          UnityEngine_UI_RawImage__set_texture
                    ((UnityEngine_UI_RawImage_o *)__this_04,value_00,(MethodInfo *)0x0);
        }
label_043e91a0:
        if (local_108.r == 0.0) {
label_043e91de:
          if (((UnityEngine_UI_RawImage_o *)__this_04 == (UnityEngine_UI_RawImage_o *)0x0) ||
             (pUVar13 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
             pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
          UnityEngine_GameObject__SetActive(pUVar13,0,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)(TypeInfo_PlayerStatus + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = System_String__op_Equality
                            (local_d8,*(System_String_o **)(*(long *)(TypeInfo_PlayerStatus + 0xb8) + 0x10),
                             (MethodInfo *)0x0);
          if ((char)bVar4 != '\0') goto label_043e91de;
          if (((UnityEngine_UI_RawImage_o *)__this_04 == (UnityEngine_UI_RawImage_o *)0x0) ||
             (pUVar13 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
             pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
          UnityEngine_GameObject__SetActive(pUVar13,1,(MethodInfo *)0x0);
        }
        if (player != (Photon_Realtime_Player_o *)0x0) {
          iVar7 = (player->fields).actorNumber;
          uVar6 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
          bVar4 = (player->fields).IsLocal;
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = GameManagers_ChatManager__GetIDString
                              (iVar7,uVar6 & 0xff,(uint)(byte)bVar4,(MethodInfo *)0x0);
          bVar4 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                            (player,(PatreonEffects_ResolvedNameEffect_o *)local_a8,(MethodInfo *)0x0);
          pSVar8 = local_b8;
          if ((char)bVar4 != '\0') {
            effect = local_a8._4_4_;
            uVar18 = (int)pSStack_a0;
            uVar19 = (int)((ulong)pSStack_a0 >> 0x20);
            uVar20 = (int)local_98;
            uVar21 = (int)((ulong)local_98 >> 0x20);
            uVar22 = (int)pSStack_90;
            uVar23 = (int)((ulong)pSStack_90 >> 0x20);
            uVar24 = (int)local_88;
            uVar25 = (int)((ulong)local_88 >> 0x20);
            fVar26 = auStack_80._0_4_;
            fVar27 = auStack_80._4_4_;
            uVar28 = (int)local_78;
            uVar29 = (int)((ulong)local_78 >> 0x20);
            fVar30 = UStack_70.r;
            fVar31 = UStack_70.g;
            fVar32 = UStack_70.b;
            fVar33 = UStack_70.a;
            if (*(int *)(TypeInfo_EffectText + 0xe4) == 0) {
              local_c8 = pSStack_a0;
              uStack_c0 = 0;
              local_118 = local_98;
              uStack_110 = 0;
              local_d8 = pSStack_90;
              uStack_d0 = 0;
              local_f8 = local_88;
              uStack_f0 = 0;
              local_108.r = (float)auStack_80._0_4_;
              local_108.g = (float)auStack_80._4_4_;
              local_108.b = 0.0;
              local_108.a = 0.0;
              local_e8 = local_78;
              uStack_e0 = 0;
              local_48.r = UStack_70.r;
              local_48.g = UStack_70.g;
              local_48.b = 0.0;
              local_48.a = 0.0;
              local_58 = UStack_70.b;
              fStack_54 = UStack_70.a;
              uStack_50 = 0;
              il2cpp_runtime_helper_02337ed0();
              uVar18 = (undefined4)local_c8;
              uVar19 = local_c8._4_4_;
              uVar20 = (undefined4)local_118;
              uVar21 = local_118._4_4_;
              uVar22 = (undefined4)local_d8;
              uVar23 = local_d8._4_4_;
              uVar24 = (undefined4)local_f8;
              uVar25 = local_f8._4_4_;
              fVar26 = local_108.r;
              fVar27 = local_108.g;
              uVar28 = (undefined4)local_e8;
              uVar29 = local_e8._4_4_;
              fVar30 = local_48.r;
              fVar31 = local_48.g;
              fVar32 = local_58;
              fVar33 = fStack_54;
            }
            UVar34.fields.g = (float)uVar19;
            UVar34.fields.r = (float)uVar18;
            UVar34.fields.a = (float)uVar21;
            UVar34.fields.b = (float)uVar20;
            colorB.fields.g = (float)uVar23;
            colorB.fields.r = (float)uVar22;
            colorB.fields.a = (float)uVar25;
            colorB.fields.b = (float)uVar24;
            colorD.fields.g = fVar31;
            colorD.fields.r = fVar30;
            colorD.fields.a = fVar33;
            colorD.fields.b = fVar32;
            colorC.fields.g = fVar27;
            colorC.fields.r = fVar26;
            colorC.fields.a = (float)uVar29;
            colorC.fields.b = (float)uVar28;
            pSVar8 = PatreonEffects_EffectText__Compose
                               (pSVar8,effect,UVar34,colorB,colorC,colorD,(MethodInfo *)0x0);
          }
          if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
             (pUVar11 = UnityEngine_Transform__GetChild(pUVar11,2,(MethodInfo *)0x0),
             pUVar11 != (UnityEngine_Transform_o *)0x0)) {
            __this_02 = (PatreonEffects_EffectText_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar11,MethodInfo_EffectText_GetComponent_EffectText);
            if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value_01 = PatreonEffects_NameFontCatalog__FontForPlayer(player,0,(MethodInfo *)0x0);
            if (__this_02 != (PatreonEffects_EffectText_o *)0x0) {
              PatreonEffects_EffectText__set_font(__this_02,value_01,(MethodInfo *)0x0);
              pSVar8 = System_String__Concat_3ae5ba0(pSVar14,pSVar8,(MethodInfo *)0x0);
              PatreonEffects_EffectText__set_text(__this_02,pSVar8,(MethodInfo *)0x0);
              pUVar11 = UnityEngine_Transform__GetChild(pUVar12,1,(MethodInfo *)0x0);
              if ((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
                 (pIVar9 = UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text),
                 pIVar9 != (Il2CppObject *)0x0)) {
                (*pIVar9->klass->vtable[0x4b].methodPtr)(pIVar9,local_b0,pIVar9->klass->vtable[0x4b].method);
                pUVar11 = UnityEngine_Transform__GetChild(pUVar12,2,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pPVar16 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
                if (((pUVar11 != (UnityEngine_Transform_o *)0x0) &&
                    (__this_03 = UnityEngine_Transform__GetChild(pUVar11,1,(MethodInfo *)0x0),
                    __this_03 != (UnityEngine_Transform_o *)0x0)) &&
                   (pUVar13 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
                   pUVar13 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar13,(uint)(pPVar16 != player),(MethodInfo *)0x0);
                  iVar7 = UnityEngine_Transform__get_childCount(pUVar11,(MethodInfo *)0x0);
                  if (2 < iVar7) {
                    pUVar11 = UnityEngine_Transform__GetChild(pUVar11,2,(MethodInfo *)0x0);
                    if ((pUVar11 == (UnityEngine_Transform_o *)0x0) ||
                       (pUVar13 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                       pUVar13 == (UnityEngine_GameObject_o *)0x0)) goto label_043e95da;
                    UnityEngine_GameObject__SetActive(pUVar13,(uint)(pPVar16 != player),(MethodInfo *)0x0);
                  }
                  pUVar11 = UnityEngine_Transform__GetChild(pUVar12,3,(MethodInfo *)0x0);
                  if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
                    pIVar9 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar11,MethodInfo_Text_GetComponent_Text);
                    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    local_11c = PhotonExtensions__GetIntProperty
                                          (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x80)
                                           ,0,(MethodInfo *)0x0);
                    pSVar8 = System_Int32__ToString((int32_t)&local_11c,(MethodInfo *)0x0);
                    if (pIVar9 != (Il2CppObject *)0x0) {
                      (*pIVar9->klass->vtable[0x4b].methodPtr)
                                (pIVar9,pSVar8,pIVar9->klass->vtable[0x4b].method);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        goto label_043e95da;
      }
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar12 = local_118;
      pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      puVar15 = &"Icons/Game/BladeIcon";
label_043e8e34:
      value_00 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset
                           (pSVar8,(System_String_o *)*puVar15,1,(MethodInfo *)0x0);
      if ((value_00 == (UnityEngine_Texture_o *)0x0) || (value_00->klass == TypeInfo_Texture2D)) {
        UnityEngine_UI_RawImage__set_texture
                  ((UnityEngine_UI_RawImage_o *)__this_04,value_00,(MethodInfo *)0x0);
        goto label_043e91a0;
      }
label_043e95bf:
      il2cpp_runtime_helper_022b2fd0(value_00);
      goto label_043e95c7;
    }
  }
label_043e95da:
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_043e95df:
  (*pIVar9->klass->vtable[3].methodPtr)();
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar9,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$OnClickProfile
// il2cpp: void UI_ScoreboardScorePanel__OnClickProfile (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x43e9610

void UI_ScoreboardScorePanel__OnClickProfile
               (UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

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
  long lVar12;
  Photon_Realtime_Player_array *pPVar13;
  UI_ScoreboardProfilePopup_o *__this_01;
  UI_ConfirmPopup_o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  undefined8 obj;
  bool_conflict bVar14;
  Il2CppObject *pIVar15;
  System_String_o *pSVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  System_String_o *pSVar19;
  System_String_o *pSVar20;
  long *plVar21;
  UnityEngine_Events_UnityAction_o *pUVar22;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o **tierLabel;
  uint uVar23;
  Il2CppClass *pIVar24;
  Il2CppClass **ppIVar25;
  UnityEngine_Events_UnityAction_o *__this_07;
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
  undefined1 auVar30 [12];
  UnityEngine_Color_o colorB;
  UnityEngine_Color_o colorC;
  UnityEngine_Color_o colorC_00;
  System_String_o *pSVar31;
  System_String_o *in_stack_ffffffffffffff18;
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
  UI_ScoreboardScorePanel_o *pUStack_30;
  
  pIVar24 = (Il2CppClass *)(ulong)(uint)index;
  ppIVar25 = (Il2CppClass **)__this;
  if (g_data_057ae4e2 == '\0') {
    ppIVar25 = &TypeInfo_ScoreboardPopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4e2 = '\x01';
  }
  uVar23 = (uint)pIVar24;
  pPVar13 = (__this->fields)._lastPlayers;
  if (pPVar13 == (Photon_Realtime_Player_array *)0x0) goto label_043e9696;
  if ((uint)index < (uint)pPVar13->max_length) {
    ppIVar25 = (Il2CppClass **)(__this->fields).Parent;
    if ((UI_ScoreboardScorePanel_o *)ppIVar25 == (UI_ScoreboardScorePanel_o *)0x0) {
label_043e9696:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar3 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
      pIVar24 = TypeInfo_ScoreboardPopup;
      if ((bVar3 <= (((UI_ScoreboardScorePanel_o *)ppIVar25)->klass->_2).naturalAligment) &&
         ((((UI_ScoreboardScorePanel_o *)ppIVar25)->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_ScoreboardPopup
         )) {
        __this_01 = (UI_ScoreboardProfilePopup_o *)
                    (((UI_ScoreboardScorePanel_o *)((long)ppIVar25 + 0x88))->fields).DoublePanelLeft;
        ppIVar25 = (Il2CppClass **)0x0;
        if (__this_01 != (UI_ScoreboardProfilePopup_o *)0x0) {
          pPStack_d0 = pPVar13->m_Items[index];
          if (g_data_057ae4d1 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter,pPStack_d0,0);
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
          UI_BasePopup__Show((UI_BasePopup_o *)__this_01,(MethodInfo *)0x0);
          pSVar4 = (__this_01->fields)._items;
          if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043e6a1f;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                     (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
          auStack_b8._16_8_ = pUStack_38;
          auStack_b8._0_8_ = auStack_48._0_8_;
          auStack_b8._8_8_ = auStack_48._8_8_;
          while (__this_03.fields._8_8_ = in_stack_ffffffffffffff20,
                __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18,
                __this_03.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28,
                bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_03,(MethodInfo_321A1D0 *)auStack_b8), obj = auStack_b8._16_8_,
                (char)bVar14 != '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)obj,(MethodInfo *)0x0);
          }
          __this_04.fields._8_8_ = in_stack_ffffffffffffff20;
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
          __this_04.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)auStack_b8);
          do {
            pSVar4 = (__this_01->fields)._items;
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
              if (((pPStack_d0 != (Photon_Realtime_Player_o *)0x0) &&
                  (__this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
                  __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
                 (pIVar15 = System_Collections_Generic_Dictionary_int__object___get_Item
                                      (__this_00,(pPStack_d0->fields).actorNumber,MethodInfo_PlayerInfo_get_Item),
                 pIVar15 != (Il2CppObject *)0x0)) {
                ppSVar2 = &(__this_01->fields)._profile;
                (__this_01->fields)._profile = (Settings_ProfileSettings_o *)pIVar15[2].klass;
                il2cpp_runtime_helper_022b4080(ppSVar2);
                pSVar16 = (System_String_o *)
                          (*(__this_01->klass->vtable)._4_get_ThemePanel.methodPtr)
                                    (__this_01,(__this_01->klass->vtable)._4_get_ThemePanel.method);
                in_stack_ffffffffffffff28 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                UI_ElementStyle___ctor(in_stack_ffffffffffffff28,0x16,120.0,20.0,pSVar16,(MethodInfo *)0x0);
                pUVar17 = UI_ElementFactory__CreateHorizontalGroup
                                    ((__this_01->fields).SinglePanel,25.0,4,(MethodInfo *)0x0);
                if ((pUVar17 != (UnityEngine_GameObject_o *)0x0) &&
                   (pUVar18 = UnityEngine_GameObject__get_transform(pUVar17,(MethodInfo *)0x0),
                   pUVar18 != (UnityEngine_Transform_o *)0x0)) {
                  pSVar4 = (__this_01->fields)._items;
                  pUVar17 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                  lVar12 = MethodInfo_Void_Add;
                  if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                    piVar1 = &(pSVar4->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar5 = (pSVar4->fields)._items;
                    if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                      uVar23 = (pSVar4->fields)._size;
                      if (uVar23 < (uint)pUVar5->max_length) {
                        (pSVar4->fields)._size = uVar23 + 1;
                        pUVar5->m_Items[(int)uVar23] = pUVar17;
                        il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar23);
                        pSVar6 = *ppSVar2;
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pUVar17
                                   ,*(MethodInfo_362C220 **)
                                     (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
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
                        uVar26 = 0;
                        uVar27 = 0;
                        UI_ElementFactory__CreateRawImage
                                  (pUVar18,in_stack_ffffffffffffff28,pSVar16,256.0,256.0,(MethodInfo *)0x0);
                        pSVar6 = *ppSVar2;
                        if (((((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                              (pSVar8 = (pSVar6->fields).Name, pSVar8 != (Settings_NameSetting_o *)0x0)) &&
                             (pSVar9 = (pSVar6->fields).NameEffectEnabled,
                             pSVar9 != (Settings_BoolSetting_o *)0x0)) &&
                            ((pSVar7 = (pSVar6->fields).NameEffect, pSVar7 != (Settings_StringSetting_o *)0x0
                             && (pSVar10 = (pSVar6->fields).NameEffectColorA,
                                pSVar10 != (Settings_ColorSetting_o *)0x0)))) &&
                           (pUVar11 = (pSVar10->fields)._value, pUVar11 != (Utility_Color255_o *)0x0)) {
                          pSVar16 = (pSVar8->fields)._value;
                          bVar3 = *(byte *)((long)&(pSVar9->fields).DefaultValue + 1);
                          pSVar19 = (pSVar7->fields)._value;
                          UVar28 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                          if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                             (pSVar10 = ((*ppSVar2)->fields).NameEffectColorB,
                             pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                            auStack_58._8_4_ = uVar26;
                            auStack_58._0_8_ = UVar28.fields._8_8_;
                            auStack_58._12_4_ = uVar27;
                            pUVar11 = (pSVar10->fields)._value;
                            if (pUVar11 != (Utility_Color255_o *)0x0) {
                              UVar29 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                              if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                 (pSVar10 = ((*ppSVar2)->fields).NameEffectColorC,
                                 pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                                auStack_78._8_4_ = uVar26;
                                auStack_78._0_8_ = UVar29.fields._8_8_;
                                auStack_78._12_4_ = uVar27;
                                auStack_68._8_4_ = extraout_XMM0_Dc;
                                auStack_68._0_8_ = UVar29.fields._0_8_;
                                auStack_68._12_4_ = extraout_XMM0_Dd;
                                pUVar11 = (pSVar10->fields)._value;
                                if (pUVar11 != (Utility_Color255_o *)0x0) {
                                  UVar29 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                  if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                     (pSVar10 = ((*ppSVar2)->fields).NameEffectColorD,
                                     pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                                    auStack_b8._40_4_ = uVar26;
                                    auStack_b8._32_8_ = UVar29.fields._8_8_;
                                    auStack_b8._44_4_ = uVar27;
                                    auStack_88._8_4_ = extraout_XMM0_Dc_00;
                                    auStack_88._0_8_ = UVar29.fields._0_8_;
                                    auStack_88._12_4_ = extraout_XMM0_Dd_00;
                                    pUVar11 = (pSVar10->fields)._value;
                                    if (pUVar11 != (Utility_Color255_o *)0x0) {
                                      UVar29 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                      uVar26 = auStack_58._8_4_;
                                      uVar27 = auStack_58._12_4_;
                                      colorA.fields.b = (float)(int)auStack_58._0_8_;
                                      colorA.fields.a = (float)(int)((ulong)auStack_58._0_8_ >> 0x20);
                                      colorA.fields.r = (float)(int)UVar28.fields._0_8_;
                                      colorA.fields.g = (float)(int)((ulong)UVar28.fields._0_8_ >> 0x20);
                                      UVar28.fields.b = (float)(int)auStack_78._0_8_;
                                      UVar28.fields.a = (float)(int)((ulong)auStack_78._0_8_ >> 0x20);
                                      UVar28.fields.r = (float)(int)auStack_68._0_8_;
                                      UVar28.fields.g = (float)(int)((ulong)auStack_68._0_8_ >> 0x20);
                                      colorC.fields.b = (float)(int)auStack_b8._32_8_;
                                      colorC.fields.a = (float)(int)((ulong)auStack_b8._32_8_ >> 0x20);
                                      colorC.fields.r = (float)(int)auStack_88._0_8_;
                                      colorC.fields.g = (float)(int)((ulong)auStack_88._0_8_ >> 0x20);
                                      UI_ScoreboardProfilePopup__AddEffectRow
                                                (__this_01,in_stack_ffffffffffffff28,pPStack_d0,"Name",
                                                 pSVar16,(uint)bVar3,pSVar19,colorA,UVar28,colorC,UVar29,
                                                 in_stack_ffffffffffffff20);
                                      pSVar6 = (__this_01->fields)._profile;
                                      in_stack_ffffffffffffff18 = pSVar19;
                                      if ((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                                         (pSVar8 = (pSVar6->fields).Guild,
                                         pSVar8 != (Settings_NameSetting_o *)0x0)) {
                                        pSVar16 = (pSVar8->fields)._value;
                                        if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        pSVar16 = Anticheat_ChatFilter__FilterBadWords
                                                            (pSVar16,(MethodInfo *)0x0);
                                        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        pSVar16 = MiscExtensions__HexColor(pSVar16,(MethodInfo *)0x0);
                                        in_stack_ffffffffffffff18 = pSVar19;
                                        if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                           (pSVar7 = ((*ppSVar2)->fields).GuildRoleSprite,
                                           pSVar7 != (Settings_StringSetting_o *)0x0)) {
                                          pSVar31 = (pSVar7->fields)._value;
                                          if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pSVar16 = PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
                                                              (pPStack_d0,pSVar16,pSVar31,(MethodInfo *)0x0);
                                          pSVar6 = *ppSVar2;
                                          in_stack_ffffffffffffff18 = pSVar19;
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
                                            pSVar31 = (pSVar7->fields)._value;
                                            UVar28 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                            in_stack_ffffffffffffff18 = pSVar19;
                                            if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                               (pSVar10 = ((*ppSVar2)->fields).GuildEffectColorB,
                                               pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                                              auStack_58._8_4_ = uVar26;
                                              auStack_58._0_8_ = UVar28.fields._8_8_;
                                              auStack_58._12_4_ = uVar27;
                                              pUVar11 = (pSVar10->fields)._value;
                                              if (pUVar11 != (Utility_Color255_o *)0x0) {
                                                UVar29 = Utility_Color255__ToColor(pUVar11,(MethodInfo *)0x0);
                                                in_stack_ffffffffffffff18 = pSVar19;
                                                if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                                   (pSVar10 = ((*ppSVar2)->fields).GuildEffectColorC,
                                                   pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                                                  auStack_78._8_4_ = uVar26;
                                                  auStack_78._0_8_ = UVar29.fields._8_8_;
                                                  auStack_78._12_4_ = uVar27;
                                                  auStack_68._8_4_ = extraout_XMM0_Dc_01;
                                                  auStack_68._0_8_ = UVar29.fields._0_8_;
                                                  auStack_68._12_4_ = extraout_XMM0_Dd_01;
                                                  pUVar11 = (pSVar10->fields)._value;
                                                  if (pUVar11 != (Utility_Color255_o *)0x0) {
                                                    UVar29 = Utility_Color255__ToColor
                                                                       (pUVar11,(MethodInfo *)0x0);
                                                    in_stack_ffffffffffffff18 = pSVar19;
                                                    if ((*ppSVar2 != (Settings_ProfileSettings_o *)0x0) &&
                                                       (pSVar10 = ((*ppSVar2)->fields).GuildEffectColorD,
                                                       pSVar10 != (Settings_ColorSetting_o *)0x0)) {
                                                      auStack_b8._40_4_ = uVar26;
                                                      auStack_b8._32_8_ = UVar29.fields._8_8_;
                                                      auStack_b8._44_4_ = uVar27;
                                                      auStack_88._8_4_ = extraout_XMM0_Dc_02;
                                                      auStack_88._0_8_ = UVar29.fields._0_8_;
                                                      auStack_88._12_4_ = extraout_XMM0_Dd_02;
                                                      pUVar11 = (pSVar10->fields)._value;
                                                      if (pUVar11 != (Utility_Color255_o *)0x0) {
                                                        UVar29 = Utility_Color255__ToColor
                                                                           (pUVar11,(MethodInfo *)0x0);
                                                        colorA_00.fields.b = (float)(int)auStack_58._0_8_;
                                                        colorA_00.fields.a =
                                                             (float)(int)((ulong)auStack_58._0_8_ >> 0x20);
                                                        colorA_00.fields.r = (float)(int)UVar28.fields._0_8_;
                                                        colorA_00.fields.g =
                                                             (float)(int)((ulong)UVar28.fields._0_8_ >> 0x20);
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
                                                                  (__this_01,in_stack_ffffffffffffff28,
                                                                   pPStack_d0,"Guild",pSVar16,(uint)bVar3
                                                                   ,pSVar31,colorA_00,colorB,colorC_00,UVar29,
                                                                   in_stack_ffffffffffffff20);
                                                        pUVar18 = (__this_01->fields).SinglePanel;
                                                        pSVar4 = (__this_01->fields)._items;
                                                        pSVar16 = UI_UIManager__GetLocaleCommon
                                                                            ("Social",(MethodInfo *)0x0);
                                                        pSVar6 = (__this_01->fields)._profile;
                                                        in_stack_ffffffffffffff18 = pSVar31;
                                                        if ((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                                                           (pSVar7 = (pSVar6->fields).Social,
                                                           pSVar7 != (Settings_StringSetting_o *)0x0)) {
                                                          pSVar19 = Anticheat_ChatFilter__FilterBadWords
                                                                              ((pSVar7->fields)._value,
                                                                               (MethodInfo *)0x0);
                                                          pSVar19 = MiscExtensions__HexColor
                                                                              (pSVar19,(MethodInfo *)0x0);
                                                          pSVar16 = System_String__Concat_3af7470
                                                                              ("<b>",pSVar16,
                                                                               ": </b>",pSVar19,
                                                                               (MethodInfo *)0x0);
                                                          pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                              (pUVar18,
                                                       in_stack_ffffffffffffff28,pSVar16,0,3,(MethodInfo *)0x0
                                                       );
                                                       lVar12 = MethodInfo_Void_Add;
                                                       in_stack_ffffffffffffff18 = pSVar31;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar23 = (pSVar4->fields)._size;
                                                           if (uVar23 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar23 + 1;
                                                             pUVar5->m_Items[(int)uVar23] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar23)
                                                             ;
                                                             in_stack_ffffffffffffff18 = pSVar31;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       in_stack_ffffffffffffff18 = pSVar31;
                                                       }
                                                       pUVar18 = (__this_01->fields).SinglePanel;
                                                       pSVar4 = (__this_01->fields)._items;
                                                       pSVar16 = UI_UIManager__GetLocaleCommon
                                                                           ("About",(MethodInfo *)0x0);
                                                       pSVar6 = (__this_01->fields)._profile;
                                                       if ((pSVar6 != (Settings_ProfileSettings_o *)0x0) &&
                                                          (pSVar7 = (pSVar6->fields).About,
                                                          pSVar7 != (Settings_StringSetting_o *)0x0)) {
                                                         pSVar19 = Anticheat_ChatFilter__FilterBadWords
                                                                             ((pSVar7->fields)._value,
                                                                              (MethodInfo *)0x0);
                                                         pSVar19 = MiscExtensions__HexColor
                                                                             (pSVar19,(MethodInfo *)0x0);
                                                         pSVar16 = System_String__Concat_3af7470
                                                                             ("<b>",pSVar16,
                                                                              ": </b>",pSVar19,
                                                                              (MethodInfo *)0x0);
                                                         pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                             (pUVar18,
                                                       in_stack_ffffffffffffff28,pSVar16,0,3,(MethodInfo *)0x0
                                                       );
                                                       lVar12 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar23 = (pSVar4->fields)._size;
                                                           if (uVar23 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar23 + 1;
                                                             pUVar5->m_Items[(int)uVar23] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar23,
                                                                                pUVar17);
                                                             method_00 = extraout_RDX;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       method_00 = extraout_RDX_00;
                                                       }
                                                       pSVar16 = 
                                                       UI_ScoreboardProfilePopup__GetAuthoritativeDisplayName
                                                                 (__this_01,pPStack_d0,method_00);
                                                       pSVar19 = UI_ScoreboardProfilePopup__GetDisplayUserId
                                                                           (__this_01,pPStack_d0,method_01);
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
                                                       pSVar31 = *tierLabel;
                                                       bVar14 = System_String__op_Inequality
                                                                          (pSVar31,"None",
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
                                                       pUVar18 = (__this_01->fields).SinglePanel;
                                                       pSVar4 = (__this_01->fields)._items;
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
                                                       lVar12 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar23 = (pSVar4->fields)._size;
                                                           if (uVar23 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar23 + 1;
                                                             pUVar5->m_Items[(int)uVar23] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar23)
                                                             ;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this_01->fields).SinglePanel;
                                                       pSVar4 = (__this_01->fields)._items;
                                                       pSVar16 = MiscExtensions__HexColor
                                                                           (pSVar19,(MethodInfo *)0x0);
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>User ID: </b>",pSVar16,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_ffffffffffffff28,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar12 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar23 = (pSVar4->fields)._size;
                                                           if (uVar23 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar23 + 1;
                                                             pUVar5->m_Items[(int)uVar23] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar23)
                                                             ;
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this_01->fields).SinglePanel;
                                                       pSVar4 = (__this_01->fields)._items;
                                                       pSVar16 = MiscExtensions__HexColor
                                                                           (pSVar31,(MethodInfo *)0x0);
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>Patreon Tier: </b>",pSVar16,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_ffffffffffffff28,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar12 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar23 = (pSVar4->fields)._size;
                                                           if (uVar23 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar23 + 1;
                                                             pUVar5->m_Items[(int)uVar23] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar23,
                                                                                pUVar17);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
                                                                   + 0x70));
                                                       }
                                                       pUVar18 = (__this_01->fields).SinglePanel;
                                                       pSVar4 = (__this_01->fields)._items;
                                                       pSVar16 = System_String__Concat_3ae5ba0
                                                                           ("<b>Patreon Supporter: </b>",
                                                                            (System_String_o *)pPStack_d0,
                                                                            (MethodInfo *)0x0);
                                                       pUVar17 = UI_ElementFactory__CreateDefaultLabel
                                                                           (pUVar18,in_stack_ffffffffffffff28,
                                                                            pSVar16,0,3,(MethodInfo *)0x0);
                                                       lVar12 = MethodInfo_Void_Add;
                                                       if (pSVar4 != (
                                                       System_Collections_Generic_List_GameObject__o *)0x0) {
                                                         piVar1 = &(pSVar4->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar5 = (pSVar4->fields)._items;
                                                         if (pUVar5 != (UnityEngine_GameObject_array *)0x0) {
                                                           uVar23 = (pSVar4->fields)._size;
                                                           if (uVar23 < (uint)pUVar5->max_length) {
                                                             (pSVar4->fields)._size = uVar23 + 1;
                                                             pUVar5->m_Items[(int)uVar23] = pUVar17;
                                                             il2cpp_runtime_helper_022b4080(pUVar5->m_Items + (int)uVar23,
                                                                                pUVar17);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,(Il2CppObject *)pUVar17,
                                                                  *(MethodInfo_362C220 **)
                                                                   (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
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
            auVar30 = il2cpp_runtime_helper_022b2c90();
            if (auVar30._8_4_ != 1) goto label_043e6a6b;
            plVar21 = (long *)__cxa_begin_catch(auVar30._0_8_);
            lVar12 = *plVar21;
            __cxa_end_catch();
            __this_05.fields._8_8_ = in_stack_ffffffffffffff20;
            __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
            __this_05.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_05,(MethodInfo_321A1C0 *)auStack_b8);
          } while (lVar12 == 0);
          il2cpp_runtime_helper_022fefe0(lVar12);
label_043e6a6b:
          __this_06.fields._8_8_ = in_stack_ffffffffffffff20;
          __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
          __this_06.fields._current = (Il2CppObject *)in_stack_ffffffffffffff28;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_06,(MethodInfo_321A1C0 *)auStack_b8);
          _Unwind_Resume(auVar30._0_8_);
        }
        goto label_043e9696;
      }
    }
    uVar23 = (uint)pIVar24;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2ca0();
  pUStack_30 = __this;
  if (g_data_057ae4e3 == '\0') {
    pUStack_38 = (UnityEngine_Object_o *)0x43e96ce;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ScoreboardPopup);
    pUStack_38 = (UnityEngine_Object_o *)0x43e96da;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnClickKick_b__0);
    pUStack_38 = (UnityEngine_Object_o *)0x43e96e6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    pUStack_38 = (UnityEngine_Object_o *)0x43e96f2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pUStack_38 = (UnityEngine_Object_o *)0x43e96fe;
    il2cpp_runtime_helper_023445d0(&"Kick this player?");
    g_data_057ae4e3 = '\x01';
  }
  pUStack_38 = (UnityEngine_Object_o *)0x43e9714;
  pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  pUStack_38 = (UnityEngine_Object_o *)0x43e9721;
  __this_07 = pUVar22;
  System_Object___ctor((Il2CppObject *)pUVar22,(MethodInfo *)0x0);
  if (pUVar22 == (UnityEngine_Events_UnityAction_o *)0x0) {
label_043e97ee:
    pUStack_38 = (UnityEngine_Object_o *)0x43e97f3;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_07 = (UnityEngine_Events_UnityAction_o *)&pUVar22->fields;
    (pUVar22->fields).method_ptr = (intptr_t)ppIVar25;
    pUStack_38 = (UnityEngine_Object_o *)0x43e973a;
    il2cpp_runtime_helper_022b4080();
    pPVar13 = (((UI_ScoreboardScorePanel_o *)ppIVar25)->fields)._lastPlayers;
    if (pPVar13 == (Photon_Realtime_Player_array *)0x0) goto label_043e97ee;
    if ((uint)pPVar13->max_length <= uVar23) goto label_043e97f8;
    (pUVar22->fields).invoke_impl = (intptr_t)pPVar13->m_Items[(int)uVar23];
    pUStack_38 = (UnityEngine_Object_o *)0x43e9768;
    il2cpp_runtime_helper_022b4080(&(pUVar22->fields).invoke_impl);
    __this_07 = (UnityEngine_Events_UnityAction_o *)(((UI_ScoreboardScorePanel_o *)ppIVar25)->fields).Parent;
    if (__this_07 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043e97ee;
    bVar3 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
    if ((bVar3 <= (((Il2CppClass *)__this_07->klass)->_2).naturalAligment) &&
       ((((Il2CppClass *)__this_07->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_ScoreboardPopup)) {
      __this_02 = (UI_ConfirmPopup_o *)__this_07[1].fields.extra_arg;
      pUStack_38 = (UnityEngine_Object_o *)0x43e97b1;
      pUVar22 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      pUStack_38 = (UnityEngine_Object_o *)0x43e97cb;
      __this_07 = pUVar22;
      UnityEngine_Events_UnityAction___ctor();
      if (__this_02 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_02,"Kick this player?",pUVar22,(System_String_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      goto label_043e97ee;
    }
  }
  pUStack_38 = (UnityEngine_Object_o *)0x43e97f8;
  il2cpp_runtime_helper_022b2fd0();
label_043e97f8:
  pUStack_38 = (UnityEngine_Object_o *)0x43e97fd;
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$OnClickKick
// il2cpp: void UI_ScoreboardScorePanel__OnClickKick (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x43e96b0

void UI_ScoreboardScorePanel__OnClickKick(UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  Photon_Realtime_Player_array *pPVar2;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (g_data_057ae4e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ScoreboardPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnClickKick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Kick this player?");
    g_data_057ae4e3 = '\x01';
  }
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  __this_01 = pUVar3;
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_Events_UnityAction_o *)0x0) {
label_043e97ee:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    __this_01 = (UnityEngine_Events_UnityAction_o *)&pUVar3->fields;
    (pUVar3->fields).method_ptr = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080();
    pPVar2 = (__this->fields)._lastPlayers;
    if (pPVar2 == (Photon_Realtime_Player_array *)0x0) goto label_043e97ee;
    if ((uint)pPVar2->max_length <= (uint)index) goto label_043e97f8;
    (pUVar3->fields).invoke_impl = (intptr_t)pPVar2->m_Items[index];
    il2cpp_runtime_helper_022b4080(&(pUVar3->fields).invoke_impl);
    __this_01 = (UnityEngine_Events_UnityAction_o *)(__this->fields).Parent;
    if (__this_01 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_043e97ee;
    bVar1 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
    if ((bVar1 <= (((Il2CppClass *)__this_01->klass)->_2).naturalAligment) &&
       ((((Il2CppClass *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ScoreboardPopup)) {
      __this_00 = (UI_ConfirmPopup_o *)__this_01[1].fields.extra_arg;
      pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      __this_01 = pUVar3;
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_00,"Kick this player?",pUVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      goto label_043e97ee;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_043e97f8:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$FinishKickPlayer
// il2cpp: void UI_ScoreboardScorePanel__FinishKickPlayer (UI_ScoreboardScorePanel_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x43e9810

void UI_ScoreboardScorePanel__FinishKickPlayer
               (UI_ScoreboardScorePanel_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  if (g_data_057ae4e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057ae4e4 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  GameManagers_ChatManager__KickPlayer(player,1,0,".",(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$OnClickMute
// il2cpp: void UI_ScoreboardScorePanel__OnClickMute (UI_ScoreboardScorePanel_o* __this, int32_t index, const MethodInfo* method);
// 0x43e9880

void UI_ScoreboardScorePanel__OnClickMute(UI_ScoreboardScorePanel_o *__this,int32_t index,MethodInfo *method)

{
  UI_BasePopup_c *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar1;
  Settings_TypedSetting_bool__o *pSVar2;
  Photon_Realtime_Player_array *pPVar3;
  UI_BasePopup_o *__this_01;
  Photon_Realtime_Player_o *pPVar4;
  uint uVar5;
  System_Collections_Generic_List_Transform__o *__this_02;
  byte bVar6;
  long lVar7;
  System_String_o *muteType;
  Photon_Realtime_Player_o *player;
  Il2CppClass **__this_03;
  byte in_R8B;
  
  __this_03 = (Il2CppClass **)__this;
  if (g_data_057ae4e5 == '\0') {
    __this_03 = &TypeInfo_ScoreboardPopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4e5 = '\x01';
  }
  pPVar3 = (__this->fields)._lastPlayers;
  if (pPVar3 == (Photon_Realtime_Player_array *)0x0) goto label_043e9906;
  if ((uint)pPVar3->max_length <= (uint)index) goto label_043e9910;
  __this_03 = (Il2CppClass **)(__this->fields).Parent;
  if ((UI_ScoreboardScorePanel_o *)__this_03 == (UI_ScoreboardScorePanel_o *)0x0) {
label_043e9906:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar6 = (TypeInfo_ScoreboardPopup->_2).naturalAligment;
    if ((bVar6 <= (((UI_ScoreboardScorePanel_o *)__this_03)->klass->_2).naturalAligment) &&
       ((((UI_ScoreboardScorePanel_o *)__this_03)->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_ScoreboardPopup)
       ) {
      __this_01 = (UI_BasePopup_o *)(((UI_ScoreboardScorePanel_o *)((long)__this_03 + 0x88))->fields)._popups;
      __this_03 = (Il2CppClass **)0x0;
      if (__this_01 != (UI_BasePopup_o *)0x0) {
        lVar7 = (long)index;
        pPVar4 = pPVar3->m_Items[lVar7];
        if (g_data_057ae4c0 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains,pPVar4,0);
          index = (int32_t)lVar7;
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
          g_data_057ae4c0 = '\x01';
        }
        bVar6 = (byte)index;
        UI_BasePopup__Show(__this_01,(MethodInfo *)0x0);
        __this_01[1].fields.SinglePanel = (UnityEngine_Transform_o *)pPVar4;
        player = pPVar4;
        il2cpp_runtime_helper_022b4080(&__this_01[1].fields.SinglePanel);
        __this_00 = __this_01[1].klass;
        if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((pPVar4 != (Photon_Realtime_Player_o *)0x0) &&
           (pSVar1 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x20),
           pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
          uVar5 = (pPVar4->fields).actorNumber;
          player = (Photon_Realtime_Player_o *)(ulong)uVar5;
          uVar5 = System_Collections_Generic_HashSet_int___Contains(pSVar1,uVar5,MethodInfo_Boolean_Contains);
          if (__this_00 != (UI_BasePopup_c *)0x0) {
            player = (Photon_Realtime_Player_o *)(ulong)(uVar5 & 0xff);
            Settings_TypedSetting_bool___set_Value
                      ((Settings_TypedSetting_bool__o *)__this_00,uVar5 & 0xff,MethodInfo_Void_set_Value);
            pSVar1 = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x28);
            if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
              pSVar2 = __this_01[1].monitor;
              uVar5 = (pPVar4->fields).actorNumber;
              player = (Photon_Realtime_Player_o *)(ulong)uVar5;
              uVar5 = System_Collections_Generic_HashSet_int___Contains(pSVar1,uVar5,MethodInfo_Boolean_Contains);
              if (pSVar2 != (Settings_TypedSetting_bool__o *)0x0) {
                player = (Photon_Realtime_Player_o *)(ulong)(uVar5 & 0xff);
                Settings_TypedSetting_bool___set_Value(pSVar2,uVar5 & 0xff,MethodInfo_Void_set_Value);
                pSVar1 = *(System_Collections_Generic_HashSet_int__o **)
                          (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
                if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                  pSVar2 = (Settings_TypedSetting_bool__o *)__this_01[1].fields.m_CachedPtr;
                  uVar5 = (pPVar4->fields).actorNumber;
                  player = (Photon_Realtime_Player_o *)(ulong)uVar5;
                  uVar5 = System_Collections_Generic_HashSet_int___Contains(pSVar1,uVar5,MethodInfo_Boolean_Contains);
                  if (pSVar2 != (Settings_TypedSetting_bool__o *)0x0) {
                    Settings_TypedSetting_bool___set_Value(pSVar2,uVar5 & 0xff,MethodInfo_Void_set_Value);
                    (*(__this_01->klass->vtable)._23_SyncSettingElements.methodPtr)
                              (__this_01,(__this_01->klass->vtable)._23_SyncSettingElements.method);
                    return;
                  }
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae4c1 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
          g_data_057ae4c1 = '\x01';
        }
        if (((bVar6 ^ 1) == 0) && (in_R8B == 0)) {
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_ChatManager__MutePlayer(player,muteType,(MethodInfo *)0x0);
          return;
        }
        if (((bVar6 ^ 1) & in_R8B) == 1) {
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_ChatManager__UnmutePlayer(player,muteType,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      goto label_043e9906;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_043e9910:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae4e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    g_data_057ae4e6 = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_Transform__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_Transform);
  (((UI_ScoreboardScorePanel_o *)__this_03)->fields)._rows = __this_02;
  il2cpp_runtime_helper_022b4080(&(((UI_ScoreboardScorePanel_o *)__this_03)->fields)._rows);
  (((UI_ScoreboardScorePanel_o *)__this_03)->fields)._currentSyncDelay = 1.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_03,(MethodInfo *)0x0);
  return;
}


// UI.ScoreboardScorePanel$$.ctor
// il2cpp: void UI_ScoreboardScorePanel___ctor (UI_ScoreboardScorePanel_o* __this, const MethodInfo* method);
// 0x43e9920

void UI_ScoreboardScorePanel___ctor(UI_ScoreboardScorePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Transform__o *__this_00;
  
  if (g_data_057ae4e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    g_data_057ae4e6 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Transform__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_Transform);
  (__this->fields)._rows = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rows);
  (__this->fields)._currentSyncDelay = 1.0;
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


