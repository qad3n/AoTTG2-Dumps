// Type: UI.CharacterInfoHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterInfoHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterInfoHandler.cs
// --------------------------------

// UI.CharacterInfoHandler.<>c$$.cctor
// il2cpp: void UI_CharacterInfoHandler___c___cctor (const MethodInfo* method);
// 0x43a0e80

void UI_CharacterInfoHandler___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae311 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae311 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.CharacterInfoHandler.<>c$$.ctor
// il2cpp: void UI_CharacterInfoHandler___c___ctor (UI_CharacterInfoHandler___c_o* __this, const MethodInfo* method);
// 0x43a0ef0

void UI_CharacterInfoHandler___c___ctor(UI_CharacterInfoHandler___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterInfoHandler.<>c$$<RefreshDict>b__14_0
// il2cpp: bool UI_CharacterInfoHandler___c___RefreshDict_b__14_0 (UI_CharacterInfoHandler___c_o* __this, Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o* e, const MethodInfo* method);
// 0x43a0f00

bool_conflict
UI_CharacterInfoHandler___c___RefreshDict_b__14_0
          (UI_CharacterInfoHandler___c_o *__this,
          Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *e,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  UI_CharacterInfoPopup_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Object_o *obj;
  undefined8 extraout_RAX;
  
  if (g_data_057ae312 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterInfoPopup_get_Value);
    g_data_057ae312 = '\x01';
  }
  if (e != (Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *)0x0) {
    pCVar1 = (e->fields)._Key_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (e->fields)._Key_k__BackingField;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_043a0fb8;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        return 0;
      }
    }
    __this_00 = (e->fields)._Value_k__BackingField;
    if (__this_00 != (UI_CharacterInfoPopup_o *)0x0) {
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
    }
  }
label_043a0fb8:
  bVar2 = il2cpp_runtime_helper_022b2c90();
  return bVar2;
}


// UI.CharacterInfoHandler$$Awake
// il2cpp: void UI_CharacterInfoHandler__Awake (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x439eb90

void UI_CharacterInfoHandler__Awake(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  Photon_Pun_PhotonView_o *__this_00;
  Characters_BaseCharacter_c *pCVar10;
  System_Collections_Generic_HashSet_BaseShifter__o *pSVar11;
  void *pvVar12;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Camera_o *pUVar14;
  System_Collections_Generic_HashSet_object__o *pSVar15;
  System_Collections_Generic_IEnumerable_BaseCharacter__c *pSVar16;
  Il2CppRuntimeInterfaceOffsetPair *pIVar17;
  Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *pAVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  double dVar21;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  undefined1 auVar22 [16];
  Il2CppRGCTXData *pIVar23;
  bool bVar24;
  bool bVar25;
  Cameras_InGameCamera_Fields *pCVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  char cVar30;
  bool_conflict bVar31;
  int32_t layerMask;
  Il2CppClass *pIVar32;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Transform_o *pUVar33;
  UI_CharacterInfoHandler_o *__this_06;
  System_Predicate_T__o *match;
  System_Collections_Generic_IEnumerable_BaseCharacter__o *pSVar34;
  Il2CppMethodPointer *ppIVar35;
  Characters_BaseCharacter_o *character;
  UI_CharacterInfoPopup_o *pUVar36;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this_07;
  long *plVar37;
  undefined8 *puVar38;
  undefined8 uVar39;
  _union_332950 method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar40;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_01;
  Il2CppClass *pIVar41;
  GameManagers_InGameManager_o *pGVar42;
  Cameras_InGameCamera_o *__this_08;
  long lVar43;
  long lVar44;
  long *plVar45;
  bool bVar46;
  float fVar47;
  float fVar48;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined1 auVar49 [16];
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 extraout_XMM1_Qb_07;
  undefined8 extraout_XMM1_Qb_08;
  float fVar50;
  UnityEngine_Color_o color;
  undefined1 auVar51 [12];
  UnityEngine_Vector3_o UVar52;
  UnityEngine_Vector3_o UVar53;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  long lStackY_188;
  UI_CharacterInfoPopup_o *in_stack_fffffffffffffeb0;
  Cameras_InGameCamera_o *pCVar54;
  undefined4 in_stack_fffffffffffffec0;
  uint in_stack_fffffffffffffec4;
  float local_130;
  float fStack_12c;
  undefined1 local_120 [8];
  float fStack_118;
  float fStack_114;
  float local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_f0;
  float fStack_ec;
  float local_d8;
  float local_d0;
  float fStack_cc;
  undefined1 local_c0 [32];
  undefined1 local_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  _union_332950 local_90;
  Il2CppRGCTXData *local_88;
  _union_332950 local_80;
  Il2CppRGCTXData *local_78;
  float local_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  UI_CharacterInfoHandler_o *pUStack_38;
  
  if (g_data_057ae30c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae30c = '\x01';
  }
  pIVar41 = TypeInfo_InGameManager;
  pGVar42 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar42 == (GameManagers_InGameManager_o *)0x0) {
    (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._inGameManager);
    return;
  }
  bVar29 = (TypeInfo_InGameManager->_2).naturalAligment;
  if ((bVar29 <= (pGVar42->klass->_2).naturalAligment) &&
     ((pGVar42->klass->_2).typeHierarchy[(ulong)bVar29 - 1] == TypeInfo_InGameManager)) {
    (__this->fields)._inGameManager = pGVar42;
    if ((bVar29 <= (pGVar42->klass->_2).naturalAligment) &&
       ((pGVar42->klass->_2).typeHierarchy[(ulong)bVar29 - 1] == pIVar41)) {
      il2cpp_runtime_helper_022b4080(&(__this->fields)._inGameManager);
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  auVar49._8_8_ = extraout_XMM1_Qb;
  auVar49._0_8_ = extraout_XMM1_Qa;
  pUStack_38 = __this;
  if (g_data_057ae30d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Assets_Scripts_Utility_SetItem_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterInfoPopup_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    auVar49._8_8_ = extraout_XMM1_Qb_00;
    auVar49._0_8_ = extraout_XMM1_Qa_00;
    g_data_057ae30d = '\x01';
  }
  local_c0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_c0._8_8_ = (Il2CppMethodPointer)0x0;
  local_c0._16_8_ = (Il2CppObject *)0x0;
  UI_CharacterInfoHandler__RefreshDict((UI_CharacterInfoHandler_o *)pGVar42,(MethodInfo *)pIVar41);
  __this_08 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  pCVar54 = __this_08;
  if (__this_08 == (Cameras_InGameCamera_o *)0x0) {
label_0439eda5:
    bVar31 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    in_stack_fffffffffffffec4 = 1;
    __this_08 = pCVar54;
    if ((char)bVar31 == '\0') {
      __this_08 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (__this_08 != (Cameras_InGameCamera_o *)0x0) {
        bVar29 = (TypeInfo_InGameManager->_2).naturalAligment;
        if (((__this_08->klass->_2).naturalAligment < bVar29) ||
           ((__this_08->klass->_2).typeHierarchy[(ulong)bVar29 - 1] != TypeInfo_InGameManager)) goto label_0439fa79;
        pCVar26 = &__this_08->fields;
        __this_08 = pCVar54;
        if (pCVar26->CurrentCameraMode == 0) goto label_0439ee4e;
        if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          auVar49._8_8_ = extraout_XMM1_Qb_06;
          auVar49._0_8_ = extraout_XMM1_Qa_06;
          if (g_data_057ae378 != '\0') goto label_0439ee2f;
label_0439f9ae:
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUIBuiltin);
          auVar49._8_8_ = extraout_XMM1_Qb_07;
          auVar49._0_8_ = extraout_XMM1_Qa_07;
          g_data_057ae378 = '\x01';
          iVar6 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
          __this_08 = pCVar54;
        }
        else {
          if (g_data_057ae378 == '\0') goto label_0439f9ae;
label_0439ee2f:
          iVar6 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
          __this_08 = pCVar54;
        }
        if (iVar6 == 0) {
          il2cpp_runtime_helper_02337ed0();
          auVar49._8_8_ = extraout_XMM1_Qb_08;
          auVar49._0_8_ = extraout_XMM1_Qa_08;
        }
        in_stack_fffffffffffffec4 = (uint)*(byte *)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 0x10);
        goto label_0439ee4e;
      }
    }
    else {
label_0439ee4e:
      lVar43 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      pCVar54 = __this_08;
      if ((((lVar43 != 0) && (*(long *)(lVar43 + 0xe0) != 0)) && (*(long *)(lVar43 + 0xe8) != 0)) &&
         ((*(long *)(lVar43 + 0xf8) != 0 &&
          (__this_00 = (pGVar42->fields).pvCache, __this_00 != (Photon_Pun_PhotonView_o *)0x0)))) {
        iVar6 = *(int *)(*(long *)(lVar43 + 0xe0) + 0x14);
        iVar7 = *(int *)(*(long *)(lVar43 + 0xe8) + 0x14);
        iVar8 = *(int *)(*(long *)(lVar43 + 0xf8) + 0x14);
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_50,
                   (System_Collections_Generic_HashSet_object__o *)__this_00,MethodInfo_HashSet_1_T_Enumerator_Assets_Scripts_Utility_SetItem_2);
        local_c0._16_8_ = local_40;
        local_c0._0_8_ = local_50._0_8_;
        local_c0._8_8_ = local_50._8_8_;
        local_78 = (Il2CppRGCTXData *)&(pGVar42->fields)._inGameMenu;
        local_80.genericMethod = &(pGVar42->fields).Humans;
        local_88 = (Il2CppRGCTXData *)&(pGVar42->fields)._skyboxCustomSkinLoader;
        local_90.genericMethod = &(pGVar42->fields)._generalInputSettings;
label_0439ef40:
        do {
          __this_01.fields._8_8_ = __this_08;
          __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb0;
          __this_01.fields._current._0_4_ = in_stack_fffffffffffffec0;
          __this_01.fields._current._4_4_ = in_stack_fffffffffffffec4;
          bVar31 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             (__this_01,(MethodInfo_3219C40 *)local_c0);
          if ((char)bVar31 == '\0') {
            __this_02.fields._8_8_ = __this_08;
            __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb0;
            __this_02.fields._current._0_4_ = in_stack_fffffffffffffec0;
            __this_02.fields._current._4_4_ = in_stack_fffffffffffffec4;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_3219C30 *)local_c0);
            return;
          }
          if ((Il2CppObject *)local_c0._16_8_ == (Il2CppObject *)0x0) {
            il2cpp_runtime_helper_022b2c90();
label_0439f9e3:
            il2cpp_runtime_helper_022b2c90();
label_0439f9e8:
            il2cpp_runtime_helper_022b2c90();
label_0439f9ed:
            il2cpp_runtime_helper_022b2c90();
label_0439f9f2:
            il2cpp_runtime_helper_022b2c90();
label_0439f9f7:
            il2cpp_runtime_helper_022b2c90();
label_0439f9fc:
            il2cpp_runtime_helper_022b2c90();
label_0439fa01:
            il2cpp_runtime_helper_022b2c90();
label_0439fa06:
            il2cpp_runtime_helper_022b2c90();
label_0439fa0b:
            il2cpp_runtime_helper_022b2c90();
label_0439fa10:
            il2cpp_runtime_helper_022b2c90();
label_0439fa15:
            il2cpp_runtime_helper_022b2c90();
label_0439fa1a:
            il2cpp_runtime_helper_022b2c90();
label_0439fa1f:
            il2cpp_runtime_helper_022b2c90();
label_0439fa24:
            il2cpp_runtime_helper_022b2c90();
label_0439fa29:
            il2cpp_runtime_helper_022b2c90();
label_0439fa2e:
            il2cpp_runtime_helper_022b2c90();
label_0439fa33:
            il2cpp_runtime_helper_022b2c90();
label_0439fa38:
            il2cpp_runtime_helper_022b2c90();
label_0439fa3d:
            il2cpp_runtime_helper_022b2c90();
            pUVar36 = in_stack_fffffffffffffeb0;
label_0439fa42:
            il2cpp_runtime_helper_022b2c90();
label_0439fa47:
            il2cpp_runtime_helper_022b2c90();
            in_stack_fffffffffffffeb0 = pUVar36;
            pCVar54 = __this_08;
            break;
          }
          pIVar41 = ((Il2CppObject *)(local_c0._16_8_ + 0x10))->klass;
          in_stack_fffffffffffffeb0 = ((Il2CppObject *)(local_c0._16_8_ + 0x10))->monitor;
          bVar29 = 1;
          bVar27 = 1;
          if (iVar6 == 0) goto joined_r0x0439efc2;
          if (iVar6 == 1) {
            if (pIVar41 != (Il2CppClass *)0x0) {
              bVar31 = Characters_BaseCharacter__IsMainCharacter
                                 ((Characters_BaseCharacter_o *)pIVar41,(MethodInfo *)0x0);
              bVar27 = 1;
              if ((char)bVar31 == '\0') goto label_0439f01d;
              goto joined_r0x0439efc2;
            }
            goto label_0439fa29;
          }
          if (iVar6 == 2) {
            if (pIVar41 != (Il2CppClass *)0x0) {
              bVar31 = Characters_BaseCharacter__IsMainCharacter
                                 ((Characters_BaseCharacter_o *)pIVar41,(MethodInfo *)0x0);
              bVar27 = (byte)bVar31 ^ 1;
              goto joined_r0x0439efc2;
            }
            goto label_0439fa2e;
          }
label_0439f01d:
          bVar27 = 0;
joined_r0x0439efc2:
          if (iVar7 != 0) {
            if (iVar7 != 2) {
              if (iVar7 != 1) {
label_0439eff2:
                bVar29 = 0;
                if (pIVar41 != (Il2CppClass *)0x0) goto label_0439f030;
                goto label_0439f9e8;
              }
              if (pIVar41 != (Il2CppClass *)0x0) {
                bVar31 = Characters_BaseCharacter__IsMainCharacter
                                   ((Characters_BaseCharacter_o *)pIVar41,(MethodInfo *)0x0);
                bVar29 = 1;
                if ((char)bVar31 != '\0') goto label_0439f030;
                goto label_0439eff2;
              }
              goto label_0439fa1f;
            }
            if (pIVar41 != (Il2CppClass *)0x0) {
              bVar31 = Characters_BaseCharacter__IsMainCharacter
                                 ((Characters_BaseCharacter_o *)pIVar41,(MethodInfo *)0x0);
              bVar29 = (byte)bVar31 ^ 1;
              cVar30 = *(char *)&(pIVar41->_1).klass;
              goto joined_r0x0439f07d;
            }
            goto label_0439fa24;
          }
          if (pIVar41 == (Il2CppClass *)0x0) goto label_0439f9e8;
label_0439f030:
          cVar30 = *(char *)&(pIVar41->_1).klass;
joined_r0x0439f07d:
          if (cVar30 == '\0') {
            bVar28 = 0;
label_0439f082:
            pCVar10 = (pIVar41->_1).image;
            bVar4 = (TypeInfo_BasicTitan->_2).naturalAligment;
            if ((pCVar10->_2).naturalAligment < bVar4) {
              pIVar32 = (Il2CppClass *)0x0;
            }
            else {
              pIVar32 = (Il2CppClass *)0x0;
              if ((pCVar10->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BasicTitan) {
                pIVar32 = pIVar41;
              }
            }
            bVar46 = pIVar32 == (Il2CppClass *)0x0;
          }
          else {
            bVar46 = false;
            if (*(char *)&(pIVar41->_1).castClass == '\0') {
              bVar28 = 0;
            }
            else {
              bVar31 = System_String__IsNullOrWhiteSpace
                                 ((System_String_o *)(pIVar41->_1).element_class,(MethodInfo *)0x0);
              bVar28 = (byte)bVar31 ^ 1;
              if (*(char *)&(pIVar41->_1).klass == '\0') goto label_0439f082;
            }
          }
          if ((bVar29 == 0) || (iVar9 = *(int *)((long)&(pIVar41->_1).klass + 4), iVar9 < 2)) {
            bVar19 = false;
            if (iVar8 != 0) goto label_0439f106;
label_0439f1e0:
            bVar29 = 1;
            pSVar11 = (pGVar42->fields).Shifters;
          }
          else {
            bVar19 = *(int *)&(pIVar41->_1).fields < iVar9;
            if (iVar8 == 0) goto label_0439f1e0;
label_0439f106:
            if (iVar8 == 2) {
              bVar31 = Characters_BaseCharacter__IsMine
                                 ((Characters_BaseCharacter_o *)pIVar41,(MethodInfo *)0x0);
              bVar29 = (byte)bVar31 ^ 1;
              pSVar11 = (pGVar42->fields).Shifters;
            }
            else {
              if ((iVar8 == 1) &&
                 (bVar31 = Characters_BaseCharacter__IsMine
                                     ((Characters_BaseCharacter_o *)pIVar41,(MethodInfo *)0x0),
                 (char)bVar31 != '\0')) goto label_0439f1e0;
              bVar29 = 0;
              pSVar11 = (pGVar42->fields).Shifters;
            }
          }
          if (pSVar11 == (System_Collections_Generic_HashSet_BaseShifter__o *)0x0) goto label_0439f9e3;
          if (*(char *)((long)&pSVar11[1].fields._comparer + 3) != '\0') {
label_0439f185:
            bVar24 = false;
            goto label_0439f187;
          }
          lVar43 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
          if (lVar43 == 0) goto label_0439f9f2;
          lVar43 = *(long *)(lVar43 + 0x58);
          if (lVar43 == 0) goto label_0439f9f7;
          lVar43 = *(long *)(lVar43 + 200);
          if (lVar43 == 0) goto label_0439f9fc;
          if (*(char *)(lVar43 + 0x11) != '\0') goto label_0439f185;
          bVar31 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)pIVar41,(MethodInfo *)0x0);
          bVar24 = bVar19;
          if ((char)bVar31 == '\0') {
            if (bVar28 == 0 && !bVar46 || bVar27 == 0) goto label_0439f187;
            bVar46 = true;
            if (in_stack_fffffffffffffec4 != 0) goto label_0439f19d;
label_0439f2a0:
            pvVar12 = (pIVar41->_1).interopData;
            if (pvVar12 == (void *)0x0) goto label_0439fa01;
            pUVar33 = *(UnityEngine_Transform_o **)((long)pvVar12 + 0x10);
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa10;
            UVar52 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
            if (in_stack_fffffffffffffeb0 == (UI_CharacterInfoPopup_o *)0x0) goto label_0439fa15;
            if (__this_08 == (Cameras_InGameCamera_o *)0x0) goto label_0439fa06;
            pUVar13 = (__this_08->fields).Cache;
            if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_0439fa0b;
            pUVar33 = (pUVar13->fields).Transform;
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa1a;
            uVar2 = (in_stack_fffffffffffffeb0->fields).Offset.fields.x;
            uVar3 = (in_stack_fffffffffffffeb0->fields).Offset.fields.y;
            uStack_10c = auVar49._4_4_;
            uStack_108 = auVar49._8_4_;
            uStack_104 = auVar49._12_4_;
            local_110 = UVar52.fields.z + (in_stack_fffffffffffffeb0->fields).Offset.fields.z;
            UVar53 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
              pUVar36 = in_stack_fffffffffffffeb0;
            }
            else {
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
              pUVar36 = in_stack_fffffffffffffeb0;
            }
            if (iVar9 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            local_f0 = UVar52.fields.x;
            fStack_ec = UVar52.fields.y;
            local_f0 = local_f0 + (float)uVar2;
            fStack_ec = fStack_ec + (float)uVar3;
            UVar52.fields.y = fStack_ec;
            UVar52.fields.x = local_f0;
            local_130 = UVar53.fields.x;
            fStack_12c = UVar53.fields.y;
            fVar50 = UVar53.fields.z - local_110;
            local_d8 = (local_130 - local_f0) * (local_130 - local_f0) +
                       (fStack_12c - fStack_ec) * (fStack_12c - fStack_ec) + fVar50 * fVar50;
            if (local_d8 < 0.0) {
              local_d8 = sqrtf(local_d8);
              pfVar1 = &(pUVar36->fields).Range;
              if (local_d8 < *pfVar1 || local_d8 == *pfVar1) goto label_0439f3f2;
label_0439f46b:
              in_stack_fffffffffffffeb0 = pUVar36;
              (*(pUVar36->klass->vtable)._22_Hide.methodPtr)(pUVar36);
              auVar49._8_8_ = extraout_XMM1_Qb_03;
              auVar49._0_8_ = extraout_XMM1_Qa_03;
              __this_05 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar36,(MethodInfo *)0x0);
              if (__this_05 == (UnityEngine_GameObject_o *)0x0) goto label_0439fa3d;
              bVar31 = UnityEngine_GameObject__get_activeSelf(__this_05,(MethodInfo *)0x0);
              if ((char)bVar31 != '\0') {
                pUVar33 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)in_stack_fffffffffffffeb0,(MethodInfo *)0x0);
                pUVar14 = (__this_08->fields).Camera;
                if (pUVar14 == (UnityEngine_Camera_o *)0x0) goto label_0439fa60;
                UVar53.fields.z = local_110;
                UVar53.fields.x = local_f0;
                UVar53.fields.y = fStack_ec;
                auVar51 = local_110._4_12_;
                UVar52 = UnityEngine_Camera__WorldToScreenPoint_4db3370(pUVar14,UVar53,(MethodInfo *)0x0);
                if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa65;
                auVar22._12_4_ = 0;
                auVar22._0_12_ = auVar51;
                auVar49 = auVar22 << 0x20;
                UnityEngine_Transform__set_position(pUVar33,UVar52,(MethodInfo *)0x0);
              }
              goto label_0439ef40;
            }
            local_d8 = SQRT(local_d8);
            pfVar1 = &(pUVar36->fields).Range;
            if (*pfVar1 <= local_d8 && local_d8 != *pfVar1) goto label_0439f46b;
label_0439f3f2:
            pUVar13 = (__this_08->fields).Cache;
            if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_0439fa42;
            pUVar33 = (pUVar13->fields).Transform;
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa47;
            UVar53 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
            if (g_data_057a6845 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            else {
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            if (iVar9 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            local_130 = UVar53.fields.x;
            fStack_12c = UVar53.fields.y;
            local_120._0_4_ = local_f0 - local_130;
            local_120._4_4_ = fStack_ec - fStack_12c;
            fVar50 = local_110 - UVar53.fields.z;
            fStack_118 = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
            fStack_114 = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
            fVar47 = fVar50 * fVar50 +
                     (float)local_120._4_4_ * (float)local_120._4_4_ +
                     (float)local_120._0_4_ * (float)local_120._0_4_;
            if (0.0 <= fVar47) {
              fVar47 = SQRT(fVar47);
              if (1e-05 < fVar47) goto label_0439f5c7;
label_0439f566:
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a65d5 = '\x01';
              }
              _fStack_118 = 0;
              local_120 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
              fVar50 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
              pUVar13 = (__this_08->fields).Cache;
              in_stack_fffffffffffffeb0 = pUVar36;
            }
            else {
              fVar47 = sqrtf(fVar47);
              uStack_108 = extraout_XMM0_Dc_01;
              uStack_104 = extraout_XMM0_Dd_01;
              if (fVar47 <= 1e-05) goto label_0439f566;
label_0439f5c7:
              fVar50 = fVar50 / fVar47;
              auVar20._4_4_ = fVar47;
              auVar20._0_4_ = fVar47;
              auVar20._8_4_ = uStack_108;
              auVar20._12_4_ = uStack_104;
              _local_120 = divps(_local_120,auVar20);
              pUVar13 = (__this_08->fields).Cache;
              in_stack_fffffffffffffeb0 = pUVar36;
            }
            if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_0439fa33;
            pUVar33 = (pUVar13->fields).Transform;
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa38;
            UVar53 = UnityEngine_Transform__get_forward(pUVar33,(MethodInfo *)0x0);
            fVar47 = UVar53.fields.z;
            uStack_98 = extraout_XMM0_Dc_02;
            local_a0 = UVar53.fields._0_8_;
            uStack_94 = extraout_XMM0_Dd_02;
            if (g_data_057ac31a == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057ac31a = '\x01';
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            else {
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            if (iVar9 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            local_60 = (float)local_a0._4_4_;
            fStack_5c = (float)local_a0._4_4_;
            uStack_58 = uStack_98;
            uStack_54 = uStack_94;
            local_70 = (float)local_120._4_4_;
            fStack_6c = (float)local_120._4_4_;
            uStack_68 = fStack_118;
            uStack_64 = fStack_114;
            fVar48 = (fVar50 * fVar50 +
                     (float)local_120._4_4_ * (float)local_120._4_4_ +
                     (float)local_120._0_4_ * (float)local_120._0_4_) *
                     (fVar47 * fVar47 +
                     (float)local_a0._4_4_ * (float)local_a0._4_4_ +
                     (float)local_a0._0_4_ * (float)local_a0._0_4_);
            if (fVar48 < 0.0) {
              fVar48 = sqrtf(fVar48);
              pMVar40 = TypeInfo_Math;
            }
            else {
              fVar48 = SQRT(fVar48);
              pMVar40 = TypeInfo_Math;
            }
            TypeInfo_Math = pMVar40;
            if (1e-15 <= fVar48) {
              if (*(int *)((long)&pMVar40[2].parameters + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar48 = (fVar47 * fVar50 + local_70 * local_60 + (float)local_120._0_4_ * (float)local_a0._0_4_
                       ) / fVar48;
              fVar47 = 1.0;
              if (fVar48 <= 1.0) {
                fVar47 = fVar48;
              }
              dVar21 = acos((double)(float)(~-(uint)(-1.0 <= fVar48) & 0xbf800000 |
                                           (uint)fVar47 & -(uint)(-1.0 <= fVar48)),pMVar40);
              if (90.0 < (float)dVar21 * 57.29578) {
                (*(in_stack_fffffffffffffeb0->klass->vtable)._55_HideImmediate.methodPtr)
                          (in_stack_fffffffffffffeb0,
                           (in_stack_fffffffffffffeb0->klass->vtable)._55_HideImmediate.method);
                auVar49._8_8_ = extraout_XMM1_Qb_01;
                auVar49._0_8_ = extraout_XMM1_Qa_01;
                goto label_0439ef40;
              }
            }
            bVar31 = Characters_BaseCharacter__IsMainCharacter
                               ((Characters_BaseCharacter_o *)pIVar41,(MethodInfo *)0x0);
            pMVar40 = extraout_RDX;
            if ((char)bVar31 == '\0') {
              pUVar13 = (__this_08->fields).Cache;
              if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_0439fa6a;
              pUVar33 = (pUVar13->fields).Transform;
              if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa6f;
              UVar53 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
              local_a0._0_4_ = UVar53.fields.z;
              layerMask = UnityEngine_LayerMask__op_Implicit
                                    ((UnityEngine_LayerMask_Fields)
                                     *(UnityEngine_LayerMask_Fields *)&(pGVar42->fields).Titans,
                                     (MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              direction.fields._0_8_ = local_120;
              origin.fields.z = (float)local_a0._0_4_;
              origin.fields.x = (float)(int)UVar53.fields._0_8_;
              origin.fields.y = (float)(int)((ulong)UVar53.fields._0_8_ >> 0x20);
              direction.fields.z = fVar50;
              bVar31 = UnityEngine_Physics__Raycast_4e76f20
                                 (origin,direction,local_d8,layerMask,(MethodInfo *)0x0);
              pMVar40 = extraout_RDX_00;
              if ((char)bVar31 != '\0') {
                (*(in_stack_fffffffffffffeb0->klass->vtable)._55_HideImmediate.methodPtr)
                          (in_stack_fffffffffffffeb0,
                           (in_stack_fffffffffffffeb0->klass->vtable)._55_HideImmediate.method);
                auVar49._8_8_ = extraout_XMM1_Qb_04;
                auVar49._0_8_ = extraout_XMM1_Qa_04;
                goto label_0439ef40;
              }
            }
            if (bVar19) {
              UI_CharacterInfoPopup__ToggleHealthbar(in_stack_fffffffffffffeb0,1,pMVar40);
              bVar31 = Characters_BaseCharacter__IsMainCharacter
                                 ((Characters_BaseCharacter_o *)pIVar41,(MethodInfo *)0x0);
              method_00 = local_90;
              pIVar23 = local_88;
              if ((char)bVar31 != '\0') {
                method_00 = local_80;
                pIVar23 = local_78;
              }
              color.fields._8_8_ = *(undefined8 *)method_00.genericMethod;
              color.fields._0_8_ = pIVar23->rgctxDataDummy;
              UI_CharacterInfoPopup__SetHealthbar
                        (in_stack_fffffffffffffeb0,*(int32_t *)&(pIVar41->_1).fields,
                         *(int32_t *)((long)&(pIVar41->_1).klass + 4),color,method_00.genericMethod);
              pMVar40 = extraout_RDX_02;
            }
            else {
              UI_CharacterInfoPopup__ToggleHealthbar(in_stack_fffffffffffffeb0,0,pMVar40);
              pMVar40 = extraout_RDX_01;
            }
            if (bVar46) {
              UI_CharacterInfoPopup__ToggleName(in_stack_fffffffffffffeb0,1,pMVar40);
            }
            else {
              UI_CharacterInfoPopup__ToggleName(in_stack_fffffffffffffeb0,0,pMVar40);
            }
            pUVar14 = (__this_08->fields).Camera;
            if (pUVar14 == (UnityEngine_Camera_o *)0x0) goto label_0439fa51;
            UVar52.fields.z = local_110;
            UVar52 = UnityEngine_Camera__WorldToScreenPoint_4db3370(pUVar14,UVar52,(MethodInfo *)0x0);
            pUVar33 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)in_stack_fffffffffffffeb0,(MethodInfo *)0x0);
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa56;
            auVar49 = ZEXT416(0);
            UnityEngine_Transform__set_position(pUVar33,UVar52,(MethodInfo *)0x0);
            if (bVar29 == 0) {
              (*(in_stack_fffffffffffffeb0->klass->vtable)._21_Show.methodPtr)
                        (in_stack_fffffffffffffeb0,(in_stack_fffffffffffffeb0->klass->vtable)._21_Show.method)
              ;
              auVar49._8_8_ = extraout_XMM1_Qb_05;
              auVar49._0_8_ = extraout_XMM1_Qa_05;
            }
            else {
              UI_BasePopup__ShowImmediate((UI_BasePopup_o *)in_stack_fffffffffffffeb0,(MethodInfo *)0x0);
            }
            goto label_0439ef40;
          }
          if (__this_08 == (Cameras_InGameCamera_o *)0x0) goto label_0439fa5b;
          fVar50 = Cameras_InGameCamera__GetCameraDistance(__this_08,(MethodInfo *)0x0);
          auVar49 = ZEXT816(0);
          bVar25 = false;
          if (fVar50 <= 0.0) {
            bVar24 = false;
          }
          if ((bVar27 == 0) || (bVar28 == 0 && !bVar46)) {
label_0439f187:
            bVar25 = (bool)(bVar24 ^ 1);
            bVar46 = false;
            bVar19 = bVar24;
          }
          else {
            bVar46 = true;
            auVar49 = ZEXT816(0);
            if (fVar50 <= 0.0) goto label_0439f187;
          }
          if (!bVar25 && in_stack_fffffffffffffec4 == 0) goto label_0439f2a0;
label_0439f19d:
          if (in_stack_fffffffffffffeb0 == (UI_CharacterInfoPopup_o *)0x0) goto label_0439f9ed;
          (*(in_stack_fffffffffffffeb0->klass->vtable)._55_HideImmediate.methodPtr)
                    (in_stack_fffffffffffffeb0,
                     (in_stack_fffffffffffffeb0->klass->vtable)._55_HideImmediate.method);
          auVar49._8_8_ = extraout_XMM1_Qb_02;
          auVar49._0_8_ = extraout_XMM1_Qa_02;
        } while( true );
      }
    }
    __this_08 = pCVar54;
    il2cpp_runtime_helper_022b2c90();
label_0439fa51:
    il2cpp_runtime_helper_022b2c90();
label_0439fa56:
    il2cpp_runtime_helper_022b2c90();
label_0439fa5b:
    il2cpp_runtime_helper_022b2c90();
label_0439fa60:
    il2cpp_runtime_helper_022b2c90();
label_0439fa65:
    il2cpp_runtime_helper_022b2c90();
label_0439fa6a:
    il2cpp_runtime_helper_022b2c90();
label_0439fa6f:
    il2cpp_runtime_helper_022b2c90();
    pCVar54 = __this_08;
  }
  else {
    bVar29 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar29 <= (__this_08->klass->_2).naturalAligment) &&
       ((__this_08->klass->_2).typeHierarchy[(ulong)bVar29 - 1] == TypeInfo_InGameCamera)) goto label_0439eda5;
  }
label_0439fa79:
  auVar51 = il2cpp_runtime_helper_022b2fd0(__this_08);
  uVar39 = auVar51._0_8_;
  if (auVar51._8_4_ == 1) {
    plVar45 = (long *)__cxa_begin_catch(uVar39);
    lVar43 = *plVar45;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pCVar54;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb0;
    __this_03.fields._current._0_4_ = in_stack_fffffffffffffec0;
    __this_03.fields._current._4_4_ = in_stack_fffffffffffffec4;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_03,(MethodInfo_3219C30 *)local_c0);
    if (lVar43 == 0) {
      return;
    }
    uVar39 = il2cpp_runtime_helper_022fefe0(lVar43);
  }
  else {
    lVar43 = 0;
  }
  __this_04.fields._8_8_ = pCVar54;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb0;
  __this_04.fields._current._0_4_ = in_stack_fffffffffffffec0;
  __this_04.fields._current._4_4_ = in_stack_fffffffffffffec4;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_04,(MethodInfo_3219C30 *)local_c0);
  if (lVar43 == 0) {
    _Unwind_Resume(uVar39);
  }
  __this_06 = (UI_CharacterInfoHandler_o *)il2cpp_runtime_helper_022fefe0(lVar43);
  il2cpp_runtime_helper_01f66400();
  if (g_data_057ae30f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_SetItem_BaseCharacter_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Key);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetItem_BaseCharacter_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RefreshDict_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae30f = '\x01';
  }
  pSVar15 = (System_Collections_Generic_HashSet_object__o *)(__this_06->fields)._characterInfoPopups;
  plVar45 = &TypeInfo_c;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_SetItem_BaseCharacter_CharacterInfoPopup);
    System_Predicate_object____ctor();
    lVar43 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Predicate_T__o **)(lVar43 + 8) = match;
    il2cpp_runtime_helper_022b4080(lVar43 + 8,match);
  }
  if (pSVar15 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere(pSVar15,match,MethodInfo_Int32_RemoveWhere);
    pGVar42 = (__this_06->fields)._inGameManager;
    if ((pGVar42 != (GameManagers_InGameManager_o *)0x0) &&
       (pSVar34 = GameManagers_InGameManager__GetAllCharactersEnumerable(pGVar42,(MethodInfo *)0x0),
       pSVar34 != (System_Collections_Generic_IEnumerable_BaseCharacter__o *)0x0)) {
      pSVar16 = pSVar34->klass;
      uVar5._0_1_ = (pSVar16->_2).rank;
      uVar5._1_1_ = (pSVar16->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar17 = (pSVar16->_1).interfaceOffsets;
        lVar43 = 0;
        do {
          if (*(long *)((long)&pIVar17->interfaceType + lVar43) == TypeInfo_IEnumerable_BaseCharacter) {
            ppIVar35 = &pSVar16->vtable[*(int *)((long)&pIVar17->offset + lVar43)].methodPtr;
            goto label_043a0151;
          }
          lVar43 = lVar43 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar43);
      }
      ppIVar35 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar34,TypeInfo_IEnumerable_BaseCharacter,0);
label_043a0151:
      plVar45 = (long *)(**ppIVar35)(pSVar34,(MethodInfo *)ppIVar35[1]);
      if (plVar45 == (long *)0x0) goto label_043a036a;
      lStackY_188 = 0;
label_043a0190:
      lVar43 = *plVar45;
      if ((ulong)*(ushort *)(lVar43 + 0x12e) != 0) {
        lVar44 = 0;
        do {
          if (*(long *)(*(long *)(lVar43 + 0xb0) + lVar44) == TypeInfo_IEnumerator) {
            puVar38 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar43 + 0xb0) + 8 + lVar44) * 0x10 + lVar43 + 0x138);
            goto label_043a01e3;
          }
          lVar44 = lVar44 + 0x10;
        } while ((ulong)*(ushort *)(lVar43 + 0x12e) << 4 != lVar44);
      }
      puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar45,TypeInfo_IEnumerator,0);
label_043a01e3:
      cVar30 = (*(code *)*puVar38)(plVar45,puVar38[1]);
      if (cVar30 == '\0') goto label_043a0448;
      lVar43 = *plVar45;
      if ((ulong)*(ushort *)(lVar43 + 0x12e) != 0) {
        lVar44 = 0;
        do {
          if (*(long *)(*(long *)(lVar43 + 0xb0) + lVar44) == TypeInfo_IEnumerator_BaseCharacter) {
            puVar38 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar43 + 0xb0) + 8 + lVar44) * 0x10 + lVar43 + 0x138);
            goto label_043a0253;
          }
          lVar44 = lVar44 + 0x10;
        } while ((ulong)*(ushort *)(lVar43 + 0x12e) << 4 != lVar44);
      }
      puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar45,TypeInfo_IEnumerator_BaseCharacter,0);
label_043a0253:
      character = (Characters_BaseCharacter_o *)(*(code *)*puVar38)(plVar45,puVar38[1]);
      pAVar18 = (__this_06->fields).mockEntry;
      if (pAVar18 != (Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *)0x0) {
        (pAVar18->fields)._Key_k__BackingField = character;
        il2cpp_runtime_helper_022b4080(&pAVar18->fields,character);
        pSVar15 = (System_Collections_Generic_HashSet_object__o *)(__this_06->fields)._characterInfoPopups;
        if (pSVar15 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043a0356;
        bVar31 = System_Collections_Generic_HashSet_object___Contains
                           (pSVar15,(Il2CppObject *)(__this_06->fields).mockEntry,MethodInfo_Boolean_Contains);
        if ((char)bVar31 == '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar31 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)character,(MethodInfo *)0x0);
          if ((char)bVar31 != '\0') {
            if (character == (Characters_BaseCharacter_o *)0x0) goto label_043a035b;
            if (*(char *)&(character->fields).FeedVictimName == '\0') {
              pUVar36 = UI_CharacterInfoHandler__CreateInfoPopup(__this_06,character,method_01);
              pSVar15 = (System_Collections_Generic_HashSet_object__o *)
                        (__this_06->fields)._characterInfoPopups;
              __this_07 = (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SetItem_BaseCharacter_CharacterInfoPopup);
              Assets_Scripts_Utility_SetItem_object__object____ctor
                        (__this_07,(Il2CppObject *)character,(Il2CppObject *)pUVar36,MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
              if (pSVar15 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043a0360;
              System_Collections_Generic_HashSet_object___Add(pSVar15,(Il2CppObject *)__this_07,MethodInfo_Boolean_Add);
            }
          }
        }
        goto label_043a0190;
      }
      il2cpp_runtime_helper_022b2c90();
label_043a0356:
      il2cpp_runtime_helper_022b2c90();
label_043a035b:
      il2cpp_runtime_helper_022b2c90();
label_043a0360:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043a036a:
  auVar51 = il2cpp_runtime_helper_022b2c90();
  uVar39 = auVar51._0_8_;
  if (auVar51._8_4_ != 1) {
    lStackY_188 = 0;
    if (plVar45 == (long *)0x0) goto label_043a0546;
    goto label_043a04dd;
  }
  plVar37 = (long *)__cxa_begin_catch();
  lStackY_188 = *plVar37;
  __cxa_end_catch();
label_043a0448:
  if (plVar45 != (long *)0x0) {
    lVar43 = *plVar45;
    if ((ulong)*(ushort *)(lVar43 + 0x12e) != 0) {
      lVar44 = 0;
      do {
        if (*(long *)(*(long *)(lVar43 + 0xb0) + lVar44) == TypeInfo_IDisposable) {
          puVar38 = (undefined8 *)
                    (lVar43 + (long)*(int *)(*(long *)(lVar43 + 0xb0) + 8 + lVar44) * 0x10 + 0x138);
          goto label_043a04ad;
        }
        lVar44 = lVar44 + 0x10;
      } while ((ulong)*(ushort *)(lVar43 + 0x12e) << 4 != lVar44);
    }
    puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar45,TypeInfo_IDisposable,0);
label_043a04ad:
    (*(code *)*puVar38)(plVar45,puVar38[1]);
  }
  if (lStackY_188 == 0) {
    return;
  }
  do {
    uVar39 = il2cpp_runtime_helper_022fefe0();
    if (plVar45 != (long *)0x0) {
label_043a04dd:
      lVar43 = *plVar45;
      if ((ulong)*(ushort *)(lVar43 + 0x12e) != 0) {
        lVar44 = 0;
        do {
          if (*(long *)(*(long *)(lVar43 + 0xb0) + lVar44) == TypeInfo_IDisposable) {
            puVar38 = (undefined8 *)
                      (lVar43 + (long)*(int *)(*(long *)(lVar43 + 0xb0) + 8 + lVar44) * 0x10 + 0x138);
            goto label_043a053d;
          }
          lVar44 = lVar44 + 0x10;
        } while ((ulong)*(ushort *)(lVar43 + 0x12e) << 4 != lVar44);
      }
      puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar45,TypeInfo_IDisposable,0);
label_043a053d:
      (*(code *)*puVar38)(plVar45,puVar38[1]);
    }
label_043a0546:
    if (lStackY_188 == 0) {
      _Unwind_Resume(uVar39);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// UI.CharacterInfoHandler$$LateUpdate
// il2cpp: void UI_CharacterInfoHandler__LateUpdate (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x439ec50

void UI_CharacterInfoHandler__LateUpdate(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  System_Collections_Generic_HashSet_object__o *pSVar10;
  Il2CppClass *__this_00;
  Characters_BaseCharacter_c *pCVar11;
  void *pvVar12;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Camera_o *pUVar14;
  GameManagers_InGameManager_o *pGVar15;
  System_Collections_Generic_IEnumerable_BaseCharacter__c *pSVar16;
  Il2CppRuntimeInterfaceOffsetPair *pIVar17;
  Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *pAVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  double dVar21;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  undefined1 auVar22 [16];
  Il2CppRGCTXData *pIVar23;
  bool bVar24;
  bool bVar25;
  Cameras_InGameCamera_Fields *pCVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  char cVar30;
  bool_conflict bVar31;
  int32_t layerMask;
  Il2CppClass *pIVar32;
  UnityEngine_GameObject_o *__this_05;
  UnityEngine_Transform_o *pUVar33;
  UI_CharacterInfoHandler_o *__this_06;
  System_Predicate_T__o *match;
  System_Collections_Generic_IEnumerable_BaseCharacter__o *pSVar34;
  Il2CppMethodPointer *ppIVar35;
  Characters_BaseCharacter_o *character;
  UI_CharacterInfoPopup_o *pUVar36;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this_07;
  long *plVar37;
  undefined8 *puVar38;
  undefined8 uVar39;
  _union_332950 method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar40;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_01;
  Cameras_InGameCamera_o *__this_08;
  long lVar41;
  long lVar42;
  long *plVar43;
  bool bVar44;
  float fVar45;
  float fVar46;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  undefined8 extraout_XMM1_Qa_07;
  undefined1 in_XMM1 [16];
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 extraout_XMM1_Qb_07;
  float fVar47;
  UnityEngine_Color_o color;
  undefined1 auVar48 [12];
  UnityEngine_Vector3_o UVar49;
  UnityEngine_Vector3_o UVar50;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  long lStackY_180;
  UI_CharacterInfoPopup_o *in_stack_fffffffffffffeb8;
  Cameras_InGameCamera_o *pCVar51;
  undefined4 in_stack_fffffffffffffec8;
  uint in_stack_fffffffffffffecc;
  float fStack_128;
  float fStack_124;
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float fStack_e8;
  float fStack_e4;
  float fStack_d0;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  _union_332950 _Stack_88;
  Il2CppRGCTXData *pIStack_80;
  _union_332950 _Stack_78;
  Il2CppRGCTXData *pIStack_70;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ae30d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Assets_Scripts_Utility_SetItem_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterInfoPopup_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    in_XMM1._8_8_ = extraout_XMM1_Qb;
    in_XMM1._0_8_ = extraout_XMM1_Qa;
    g_data_057ae30d = '\x01';
  }
  auStack_b8._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  auStack_b8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_b8._16_8_ = (Il2CppObject *)0x0;
  UI_CharacterInfoHandler__RefreshDict(__this,method);
  __this_08 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  pCVar51 = __this_08;
  if (__this_08 == (Cameras_InGameCamera_o *)0x0) {
label_0439eda5:
    bVar31 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    in_stack_fffffffffffffecc = 1;
    __this_08 = pCVar51;
    if ((char)bVar31 == '\0') {
      __this_08 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (__this_08 != (Cameras_InGameCamera_o *)0x0) {
        bVar29 = (TypeInfo_InGameManager->_2).naturalAligment;
        if (((__this_08->klass->_2).naturalAligment < bVar29) ||
           ((__this_08->klass->_2).typeHierarchy[(ulong)bVar29 - 1] != TypeInfo_InGameManager)) goto label_0439fa79;
        pCVar26 = &__this_08->fields;
        __this_08 = pCVar51;
        if (pCVar26->CurrentCameraMode == 0) goto label_0439ee4e;
        if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_XMM1._8_8_ = extraout_XMM1_Qb_05;
          in_XMM1._0_8_ = extraout_XMM1_Qa_05;
          if (g_data_057ae378 != '\0') goto label_0439ee2f;
label_0439f9ae:
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUIBuiltin);
          in_XMM1._8_8_ = extraout_XMM1_Qb_06;
          in_XMM1._0_8_ = extraout_XMM1_Qa_06;
          g_data_057ae378 = '\x01';
          iVar6 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
          __this_08 = pCVar51;
        }
        else {
          if (g_data_057ae378 == '\0') goto label_0439f9ae;
label_0439ee2f:
          iVar6 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
          __this_08 = pCVar51;
        }
        if (iVar6 == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_XMM1._8_8_ = extraout_XMM1_Qb_07;
          in_XMM1._0_8_ = extraout_XMM1_Qa_07;
        }
        in_stack_fffffffffffffecc = (uint)*(byte *)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 0x10);
        goto label_0439ee4e;
      }
    }
    else {
label_0439ee4e:
      lVar41 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      pCVar51 = __this_08;
      if ((((lVar41 != 0) && (*(long *)(lVar41 + 0xe0) != 0)) && (*(long *)(lVar41 + 0xe8) != 0)) &&
         ((*(long *)(lVar41 + 0xf8) != 0 &&
          (pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups,
          pSVar10 != (System_Collections_Generic_HashSet_object__o *)0x0)))) {
        iVar6 = *(int *)(*(long *)(lVar41 + 0xe0) + 0x14);
        iVar7 = *(int *)(*(long *)(lVar41 + 0xe8) + 0x14);
        iVar8 = *(int *)(*(long *)(lVar41 + 0xf8) + 0x14);
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_48,pSVar10,MethodInfo_HashSet_1_T_Enumerator_Assets_Scripts_Utility_SetItem_2);
        auStack_b8._16_8_ = pIStack_38;
        auStack_b8._0_8_ = auStack_48._0_8_;
        auStack_b8._8_8_ = auStack_48._8_8_;
        pIStack_70 = (Il2CppRGCTXData *)&(__this->fields).GreenColor;
        _Stack_78.genericMethod = &(__this->fields).GreenColor.fields.b;
        pIStack_80 = (Il2CppRGCTXData *)&(__this->fields).RedColor;
        _Stack_88.genericMethod = &(__this->fields).RedColor.fields.b;
label_0439ef40:
        do {
          __this_01.fields._8_8_ = __this_08;
          __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8;
          __this_01.fields._current._0_4_ = in_stack_fffffffffffffec8;
          __this_01.fields._current._4_4_ = in_stack_fffffffffffffecc;
          bVar31 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             (__this_01,(MethodInfo_3219C40 *)auStack_b8);
          if ((char)bVar31 == '\0') {
            __this_02.fields._8_8_ = __this_08;
            __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8;
            __this_02.fields._current._0_4_ = in_stack_fffffffffffffec8;
            __this_02.fields._current._4_4_ = in_stack_fffffffffffffecc;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_3219C30 *)auStack_b8);
            return;
          }
          if ((Il2CppObject *)auStack_b8._16_8_ == (Il2CppObject *)0x0) {
            il2cpp_runtime_helper_022b2c90();
label_0439f9e3:
            il2cpp_runtime_helper_022b2c90();
label_0439f9e8:
            il2cpp_runtime_helper_022b2c90();
label_0439f9ed:
            il2cpp_runtime_helper_022b2c90();
label_0439f9f2:
            il2cpp_runtime_helper_022b2c90();
label_0439f9f7:
            il2cpp_runtime_helper_022b2c90();
label_0439f9fc:
            il2cpp_runtime_helper_022b2c90();
label_0439fa01:
            il2cpp_runtime_helper_022b2c90();
label_0439fa06:
            il2cpp_runtime_helper_022b2c90();
label_0439fa0b:
            il2cpp_runtime_helper_022b2c90();
label_0439fa10:
            il2cpp_runtime_helper_022b2c90();
label_0439fa15:
            il2cpp_runtime_helper_022b2c90();
label_0439fa1a:
            il2cpp_runtime_helper_022b2c90();
label_0439fa1f:
            il2cpp_runtime_helper_022b2c90();
label_0439fa24:
            il2cpp_runtime_helper_022b2c90();
label_0439fa29:
            il2cpp_runtime_helper_022b2c90();
label_0439fa2e:
            il2cpp_runtime_helper_022b2c90();
label_0439fa33:
            il2cpp_runtime_helper_022b2c90();
label_0439fa38:
            il2cpp_runtime_helper_022b2c90();
label_0439fa3d:
            il2cpp_runtime_helper_022b2c90();
            pUVar36 = in_stack_fffffffffffffeb8;
label_0439fa42:
            il2cpp_runtime_helper_022b2c90();
label_0439fa47:
            il2cpp_runtime_helper_022b2c90();
            in_stack_fffffffffffffeb8 = pUVar36;
            pCVar51 = __this_08;
            break;
          }
          __this_00 = ((Il2CppObject *)(auStack_b8._16_8_ + 0x10))->klass;
          in_stack_fffffffffffffeb8 = ((Il2CppObject *)(auStack_b8._16_8_ + 0x10))->monitor;
          bVar29 = 1;
          bVar27 = 1;
          if (iVar6 == 0) goto joined_r0x0439efc2;
          if (iVar6 == 1) {
            if (__this_00 != (Il2CppClass *)0x0) {
              bVar31 = Characters_BaseCharacter__IsMainCharacter
                                 ((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
              bVar27 = 1;
              if ((char)bVar31 == '\0') goto label_0439f01d;
              goto joined_r0x0439efc2;
            }
            goto label_0439fa29;
          }
          if (iVar6 == 2) {
            if (__this_00 != (Il2CppClass *)0x0) {
              bVar31 = Characters_BaseCharacter__IsMainCharacter
                                 ((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
              bVar27 = (byte)bVar31 ^ 1;
              goto joined_r0x0439efc2;
            }
            goto label_0439fa2e;
          }
label_0439f01d:
          bVar27 = 0;
joined_r0x0439efc2:
          if (iVar7 != 0) {
            if (iVar7 != 2) {
              if (iVar7 != 1) {
label_0439eff2:
                bVar29 = 0;
                if (__this_00 != (Il2CppClass *)0x0) goto label_0439f030;
                goto label_0439f9e8;
              }
              if (__this_00 != (Il2CppClass *)0x0) {
                bVar31 = Characters_BaseCharacter__IsMainCharacter
                                   ((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
                bVar29 = 1;
                if ((char)bVar31 != '\0') goto label_0439f030;
                goto label_0439eff2;
              }
              goto label_0439fa1f;
            }
            if (__this_00 != (Il2CppClass *)0x0) {
              bVar31 = Characters_BaseCharacter__IsMainCharacter
                                 ((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
              bVar29 = (byte)bVar31 ^ 1;
              cVar30 = *(char *)&(__this_00->_1).klass;
              goto joined_r0x0439f07d;
            }
            goto label_0439fa24;
          }
          if (__this_00 == (Il2CppClass *)0x0) goto label_0439f9e8;
label_0439f030:
          cVar30 = *(char *)&(__this_00->_1).klass;
joined_r0x0439f07d:
          if (cVar30 == '\0') {
            bVar28 = 0;
label_0439f082:
            pCVar11 = (__this_00->_1).image;
            bVar4 = (TypeInfo_BasicTitan->_2).naturalAligment;
            if ((pCVar11->_2).naturalAligment < bVar4) {
              pIVar32 = (Il2CppClass *)0x0;
            }
            else {
              pIVar32 = (Il2CppClass *)0x0;
              if ((pCVar11->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BasicTitan) {
                pIVar32 = __this_00;
              }
            }
            bVar44 = pIVar32 == (Il2CppClass *)0x0;
          }
          else {
            bVar44 = false;
            if (*(char *)&(__this_00->_1).castClass == '\0') {
              bVar28 = 0;
            }
            else {
              bVar31 = System_String__IsNullOrWhiteSpace
                                 ((System_String_o *)(__this_00->_1).element_class,(MethodInfo *)0x0);
              bVar28 = (byte)bVar31 ^ 1;
              if (*(char *)&(__this_00->_1).klass == '\0') goto label_0439f082;
            }
          }
          if ((bVar29 == 0) || (iVar9 = *(int *)((long)&(__this_00->_1).klass + 4), iVar9 < 2)) {
            bVar19 = false;
            if (iVar8 != 0) goto label_0439f106;
label_0439f1e0:
            bVar29 = 1;
            pGVar15 = (__this->fields)._inGameManager;
          }
          else {
            bVar19 = *(int *)&(__this_00->_1).fields < iVar9;
            if (iVar8 == 0) goto label_0439f1e0;
label_0439f106:
            if (iVar8 == 2) {
              bVar31 = Characters_BaseCharacter__IsMine
                                 ((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
              bVar29 = (byte)bVar31 ^ 1;
              pGVar15 = (__this->fields)._inGameManager;
            }
            else {
              if ((iVar8 == 1) &&
                 (bVar31 = Characters_BaseCharacter__IsMine
                                     ((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0),
                 (char)bVar31 != '\0')) goto label_0439f1e0;
              bVar29 = 0;
              pGVar15 = (__this->fields)._inGameManager;
            }
          }
          if (pGVar15 == (GameManagers_InGameManager_o *)0x0) goto label_0439f9e3;
          if (*(char *)((long)&(pGVar15->fields)._gameSettingsLoaded + 3) != '\0') {
label_0439f185:
            bVar24 = false;
            goto label_0439f187;
          }
          lVar41 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
          if (lVar41 == 0) goto label_0439f9f2;
          lVar41 = *(long *)(lVar41 + 0x58);
          if (lVar41 == 0) goto label_0439f9f7;
          lVar41 = *(long *)(lVar41 + 200);
          if (lVar41 == 0) goto label_0439f9fc;
          if (*(char *)(lVar41 + 0x11) != '\0') goto label_0439f185;
          bVar31 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
          bVar24 = bVar19;
          if ((char)bVar31 == '\0') {
            if (bVar28 == 0 && !bVar44 || bVar27 == 0) goto label_0439f187;
            bVar44 = true;
            if (in_stack_fffffffffffffecc != 0) goto label_0439f19d;
label_0439f2a0:
            pvVar12 = (__this_00->_1).interopData;
            if (pvVar12 == (void *)0x0) goto label_0439fa01;
            pUVar33 = *(UnityEngine_Transform_o **)((long)pvVar12 + 0x10);
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa10;
            UVar49 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
            if (in_stack_fffffffffffffeb8 == (UI_CharacterInfoPopup_o *)0x0) goto label_0439fa15;
            if (__this_08 == (Cameras_InGameCamera_o *)0x0) goto label_0439fa06;
            pUVar13 = (__this_08->fields).Cache;
            if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_0439fa0b;
            pUVar33 = (pUVar13->fields).Transform;
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa1a;
            uVar2 = (in_stack_fffffffffffffeb8->fields).Offset.fields.x;
            uVar3 = (in_stack_fffffffffffffeb8->fields).Offset.fields.y;
            uStack_104 = in_XMM1._4_4_;
            uStack_100 = in_XMM1._8_4_;
            uStack_fc = in_XMM1._12_4_;
            fStack_108 = UVar49.fields.z + (in_stack_fffffffffffffeb8->fields).Offset.fields.z;
            UVar50 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
              pUVar36 = in_stack_fffffffffffffeb8;
            }
            else {
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
              pUVar36 = in_stack_fffffffffffffeb8;
            }
            if (iVar9 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fStack_e8 = UVar49.fields.x;
            fStack_e4 = UVar49.fields.y;
            fStack_e8 = fStack_e8 + (float)uVar2;
            fStack_e4 = fStack_e4 + (float)uVar3;
            UVar49.fields.y = fStack_e4;
            UVar49.fields.x = fStack_e8;
            fStack_128 = UVar50.fields.x;
            fStack_124 = UVar50.fields.y;
            fVar47 = UVar50.fields.z - fStack_108;
            fStack_d0 = (fStack_128 - fStack_e8) * (fStack_128 - fStack_e8) +
                        (fStack_124 - fStack_e4) * (fStack_124 - fStack_e4) + fVar47 * fVar47;
            if (fStack_d0 < 0.0) {
              fStack_d0 = sqrtf(fStack_d0);
              pfVar1 = &(pUVar36->fields).Range;
              if (fStack_d0 < *pfVar1 || fStack_d0 == *pfVar1) goto label_0439f3f2;
label_0439f46b:
              in_stack_fffffffffffffeb8 = pUVar36;
              (*(pUVar36->klass->vtable)._22_Hide.methodPtr)(pUVar36);
              in_XMM1._8_8_ = extraout_XMM1_Qb_02;
              in_XMM1._0_8_ = extraout_XMM1_Qa_02;
              __this_05 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar36,(MethodInfo *)0x0);
              if (__this_05 == (UnityEngine_GameObject_o *)0x0) goto label_0439fa3d;
              bVar31 = UnityEngine_GameObject__get_activeSelf(__this_05,(MethodInfo *)0x0);
              if ((char)bVar31 != '\0') {
                pUVar33 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)in_stack_fffffffffffffeb8,(MethodInfo *)0x0);
                pUVar14 = (__this_08->fields).Camera;
                if (pUVar14 == (UnityEngine_Camera_o *)0x0) goto label_0439fa60;
                UVar50.fields.z = fStack_108;
                UVar50.fields.x = fStack_e8;
                UVar50.fields.y = fStack_e4;
                auVar48 = fStack_108._4_12_;
                UVar49 = UnityEngine_Camera__WorldToScreenPoint_4db3370(pUVar14,UVar50,(MethodInfo *)0x0);
                if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa65;
                auVar22._12_4_ = 0;
                auVar22._0_12_ = auVar48;
                in_XMM1 = auVar22 << 0x20;
                UnityEngine_Transform__set_position(pUVar33,UVar49,(MethodInfo *)0x0);
              }
              goto label_0439ef40;
            }
            fStack_d0 = SQRT(fStack_d0);
            pfVar1 = &(pUVar36->fields).Range;
            if (*pfVar1 <= fStack_d0 && fStack_d0 != *pfVar1) goto label_0439f46b;
label_0439f3f2:
            pUVar13 = (__this_08->fields).Cache;
            if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_0439fa42;
            pUVar33 = (pUVar13->fields).Transform;
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa47;
            UVar50 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
            if (g_data_057a6845 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            else {
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            if (iVar9 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fStack_128 = UVar50.fields.x;
            fStack_124 = UVar50.fields.y;
            auStack_118._0_4_ = fStack_e8 - fStack_128;
            auStack_118._4_4_ = fStack_e4 - fStack_124;
            fVar47 = fStack_108 - UVar50.fields.z;
            fStack_110 = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
            fStack_10c = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
            fVar45 = fVar47 * fVar47 +
                     (float)auStack_118._4_4_ * (float)auStack_118._4_4_ +
                     (float)auStack_118._0_4_ * (float)auStack_118._0_4_;
            if (0.0 <= fVar45) {
              fVar45 = SQRT(fVar45);
              if (1e-05 < fVar45) goto label_0439f5c7;
label_0439f566:
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a65d5 = '\x01';
              }
              _fStack_110 = 0;
              auStack_118 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
              fVar47 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
              pUVar13 = (__this_08->fields).Cache;
              in_stack_fffffffffffffeb8 = pUVar36;
            }
            else {
              fVar45 = sqrtf(fVar45);
              uStack_100 = extraout_XMM0_Dc_01;
              uStack_fc = extraout_XMM0_Dd_01;
              if (fVar45 <= 1e-05) goto label_0439f566;
label_0439f5c7:
              fVar47 = fVar47 / fVar45;
              auVar20._4_4_ = fVar45;
              auVar20._0_4_ = fVar45;
              auVar20._8_4_ = uStack_100;
              auVar20._12_4_ = uStack_fc;
              _auStack_118 = divps(_auStack_118,auVar20);
              pUVar13 = (__this_08->fields).Cache;
              in_stack_fffffffffffffeb8 = pUVar36;
            }
            if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_0439fa33;
            pUVar33 = (pUVar13->fields).Transform;
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa38;
            UVar50 = UnityEngine_Transform__get_forward(pUVar33,(MethodInfo *)0x0);
            fVar45 = UVar50.fields.z;
            uStack_90 = extraout_XMM0_Dc_02;
            auStack_98 = UVar50.fields._0_8_;
            uStack_8c = extraout_XMM0_Dd_02;
            if (g_data_057ac31a == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057ac31a = '\x01';
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            else {
              iVar9 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
            }
            if (iVar9 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fStack_58 = (float)auStack_98._4_4_;
            fStack_54 = (float)auStack_98._4_4_;
            uStack_50 = uStack_90;
            uStack_4c = uStack_8c;
            fStack_68 = (float)auStack_118._4_4_;
            fStack_64 = (float)auStack_118._4_4_;
            uStack_60 = fStack_110;
            uStack_5c = fStack_10c;
            fVar46 = (fVar47 * fVar47 +
                     (float)auStack_118._4_4_ * (float)auStack_118._4_4_ +
                     (float)auStack_118._0_4_ * (float)auStack_118._0_4_) *
                     (fVar45 * fVar45 +
                     (float)auStack_98._4_4_ * (float)auStack_98._4_4_ +
                     (float)auStack_98._0_4_ * (float)auStack_98._0_4_);
            if (fVar46 < 0.0) {
              fVar46 = sqrtf(fVar46);
              pMVar40 = TypeInfo_Math;
            }
            else {
              fVar46 = SQRT(fVar46);
              pMVar40 = TypeInfo_Math;
            }
            TypeInfo_Math = pMVar40;
            if (1e-15 <= fVar46) {
              if (*(int *)((long)&pMVar40[2].parameters + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              fVar46 = (fVar45 * fVar47 +
                       fStack_68 * fStack_58 + (float)auStack_118._0_4_ * (float)auStack_98._0_4_) / fVar46;
              fVar45 = 1.0;
              if (fVar46 <= 1.0) {
                fVar45 = fVar46;
              }
              dVar21 = acos((double)(float)(~-(uint)(-1.0 <= fVar46) & 0xbf800000 |
                                           (uint)fVar45 & -(uint)(-1.0 <= fVar46)),pMVar40);
              if (90.0 < (float)dVar21 * 57.29578) {
                (*(in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.methodPtr)
                          (in_stack_fffffffffffffeb8,
                           (in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.method);
                in_XMM1._8_8_ = extraout_XMM1_Qb_00;
                in_XMM1._0_8_ = extraout_XMM1_Qa_00;
                goto label_0439ef40;
              }
            }
            bVar31 = Characters_BaseCharacter__IsMainCharacter
                               ((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
            pMVar40 = extraout_RDX;
            if ((char)bVar31 == '\0') {
              pUVar13 = (__this_08->fields).Cache;
              if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_0439fa6a;
              pUVar33 = (pUVar13->fields).Transform;
              if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa6f;
              UVar50 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
              auStack_98._0_4_ = UVar50.fields.z;
              layerMask = UnityEngine_LayerMask__op_Implicit
                                    ((UnityEngine_LayerMask_o)(__this->fields).CullMask.fields.m_Mask,
                                     (MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              direction.fields._0_8_ = auStack_118;
              origin.fields.z = (float)auStack_98._0_4_;
              origin.fields.x = (float)(int)UVar50.fields._0_8_;
              origin.fields.y = (float)(int)((ulong)UVar50.fields._0_8_ >> 0x20);
              direction.fields.z = fVar47;
              bVar31 = UnityEngine_Physics__Raycast_4e76f20
                                 (origin,direction,fStack_d0,layerMask,(MethodInfo *)0x0);
              pMVar40 = extraout_RDX_00;
              if ((char)bVar31 != '\0') {
                (*(in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.methodPtr)
                          (in_stack_fffffffffffffeb8,
                           (in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.method);
                in_XMM1._8_8_ = extraout_XMM1_Qb_03;
                in_XMM1._0_8_ = extraout_XMM1_Qa_03;
                goto label_0439ef40;
              }
            }
            if (bVar19) {
              UI_CharacterInfoPopup__ToggleHealthbar(in_stack_fffffffffffffeb8,1,pMVar40);
              bVar31 = Characters_BaseCharacter__IsMainCharacter
                                 ((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
              method_00 = _Stack_88;
              pIVar23 = pIStack_80;
              if ((char)bVar31 != '\0') {
                method_00 = _Stack_78;
                pIVar23 = pIStack_70;
              }
              color.fields._8_8_ = *(undefined8 *)method_00.genericMethod;
              color.fields._0_8_ = pIVar23->rgctxDataDummy;
              UI_CharacterInfoPopup__SetHealthbar
                        (in_stack_fffffffffffffeb8,*(int32_t *)&(__this_00->_1).fields,
                         *(int32_t *)((long)&(__this_00->_1).klass + 4),color,method_00.genericMethod);
              pMVar40 = extraout_RDX_02;
            }
            else {
              UI_CharacterInfoPopup__ToggleHealthbar(in_stack_fffffffffffffeb8,0,pMVar40);
              pMVar40 = extraout_RDX_01;
            }
            if (bVar44) {
              UI_CharacterInfoPopup__ToggleName(in_stack_fffffffffffffeb8,1,pMVar40);
            }
            else {
              UI_CharacterInfoPopup__ToggleName(in_stack_fffffffffffffeb8,0,pMVar40);
            }
            pUVar14 = (__this_08->fields).Camera;
            if (pUVar14 == (UnityEngine_Camera_o *)0x0) goto label_0439fa51;
            UVar49.fields.z = fStack_108;
            UVar49 = UnityEngine_Camera__WorldToScreenPoint_4db3370(pUVar14,UVar49,(MethodInfo *)0x0);
            pUVar33 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)in_stack_fffffffffffffeb8,(MethodInfo *)0x0);
            if (pUVar33 == (UnityEngine_Transform_o *)0x0) goto label_0439fa56;
            in_XMM1 = ZEXT416(0);
            UnityEngine_Transform__set_position(pUVar33,UVar49,(MethodInfo *)0x0);
            if (bVar29 == 0) {
              (*(in_stack_fffffffffffffeb8->klass->vtable)._21_Show.methodPtr)
                        (in_stack_fffffffffffffeb8,(in_stack_fffffffffffffeb8->klass->vtable)._21_Show.method)
              ;
              in_XMM1._8_8_ = extraout_XMM1_Qb_04;
              in_XMM1._0_8_ = extraout_XMM1_Qa_04;
            }
            else {
              UI_BasePopup__ShowImmediate((UI_BasePopup_o *)in_stack_fffffffffffffeb8,(MethodInfo *)0x0);
            }
            goto label_0439ef40;
          }
          if (__this_08 == (Cameras_InGameCamera_o *)0x0) goto label_0439fa5b;
          fVar47 = Cameras_InGameCamera__GetCameraDistance(__this_08,(MethodInfo *)0x0);
          in_XMM1 = ZEXT816(0);
          bVar25 = false;
          if (fVar47 <= 0.0) {
            bVar24 = false;
          }
          if ((bVar27 == 0) || (bVar28 == 0 && !bVar44)) {
label_0439f187:
            bVar25 = (bool)(bVar24 ^ 1);
            bVar44 = false;
            bVar19 = bVar24;
          }
          else {
            bVar44 = true;
            in_XMM1 = ZEXT816(0);
            if (fVar47 <= 0.0) goto label_0439f187;
          }
          if (!bVar25 && in_stack_fffffffffffffecc == 0) goto label_0439f2a0;
label_0439f19d:
          if (in_stack_fffffffffffffeb8 == (UI_CharacterInfoPopup_o *)0x0) goto label_0439f9ed;
          (*(in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.methodPtr)
                    (in_stack_fffffffffffffeb8,
                     (in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.method);
          in_XMM1._8_8_ = extraout_XMM1_Qb_01;
          in_XMM1._0_8_ = extraout_XMM1_Qa_01;
        } while( true );
      }
    }
    __this_08 = pCVar51;
    il2cpp_runtime_helper_022b2c90();
label_0439fa51:
    il2cpp_runtime_helper_022b2c90();
label_0439fa56:
    il2cpp_runtime_helper_022b2c90();
label_0439fa5b:
    il2cpp_runtime_helper_022b2c90();
label_0439fa60:
    il2cpp_runtime_helper_022b2c90();
label_0439fa65:
    il2cpp_runtime_helper_022b2c90();
label_0439fa6a:
    il2cpp_runtime_helper_022b2c90();
label_0439fa6f:
    il2cpp_runtime_helper_022b2c90();
    pCVar51 = __this_08;
  }
  else {
    bVar29 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar29 <= (__this_08->klass->_2).naturalAligment) &&
       ((__this_08->klass->_2).typeHierarchy[(ulong)bVar29 - 1] == TypeInfo_InGameCamera)) goto label_0439eda5;
  }
label_0439fa79:
  auVar48 = il2cpp_runtime_helper_022b2fd0(__this_08);
  uVar39 = auVar48._0_8_;
  if (auVar48._8_4_ == 1) {
    plVar43 = (long *)__cxa_begin_catch(uVar39);
    lVar41 = *plVar43;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pCVar51;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8;
    __this_03.fields._current._0_4_ = in_stack_fffffffffffffec8;
    __this_03.fields._current._4_4_ = in_stack_fffffffffffffecc;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_03,(MethodInfo_3219C30 *)auStack_b8)
    ;
    if (lVar41 == 0) {
      return;
    }
    uVar39 = il2cpp_runtime_helper_022fefe0(lVar41);
  }
  else {
    lVar41 = 0;
  }
  __this_04.fields._8_8_ = pCVar51;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8;
  __this_04.fields._current._0_4_ = in_stack_fffffffffffffec8;
  __this_04.fields._current._4_4_ = in_stack_fffffffffffffecc;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_04,(MethodInfo_3219C30 *)auStack_b8);
  if (lVar41 == 0) {
    _Unwind_Resume(uVar39);
  }
  __this_06 = (UI_CharacterInfoHandler_o *)il2cpp_runtime_helper_022fefe0(lVar41);
  il2cpp_runtime_helper_01f66400();
  if (g_data_057ae30f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_SetItem_BaseCharacter_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Key);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetItem_BaseCharacter_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RefreshDict_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae30f = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this_06->fields)._characterInfoPopups;
  plVar43 = &TypeInfo_c;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_SetItem_BaseCharacter_CharacterInfoPopup);
    System_Predicate_object____ctor();
    lVar41 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Predicate_T__o **)(lVar41 + 8) = match;
    il2cpp_runtime_helper_022b4080(lVar41 + 8,match);
  }
  if (pSVar10 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere(pSVar10,match,MethodInfo_Int32_RemoveWhere);
    pGVar15 = (__this_06->fields)._inGameManager;
    if ((pGVar15 != (GameManagers_InGameManager_o *)0x0) &&
       (pSVar34 = GameManagers_InGameManager__GetAllCharactersEnumerable(pGVar15,(MethodInfo *)0x0),
       pSVar34 != (System_Collections_Generic_IEnumerable_BaseCharacter__o *)0x0)) {
      pSVar16 = pSVar34->klass;
      uVar5._0_1_ = (pSVar16->_2).rank;
      uVar5._1_1_ = (pSVar16->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar17 = (pSVar16->_1).interfaceOffsets;
        lVar41 = 0;
        do {
          if (*(long *)((long)&pIVar17->interfaceType + lVar41) == TypeInfo_IEnumerable_BaseCharacter) {
            ppIVar35 = &pSVar16->vtable[*(int *)((long)&pIVar17->offset + lVar41)].methodPtr;
            goto label_043a0151;
          }
          lVar41 = lVar41 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar41);
      }
      ppIVar35 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar34,TypeInfo_IEnumerable_BaseCharacter,0);
label_043a0151:
      plVar43 = (long *)(**ppIVar35)(pSVar34,(MethodInfo *)ppIVar35[1]);
      if (plVar43 == (long *)0x0) goto label_043a036a;
      lStackY_180 = 0;
label_043a0190:
      lVar41 = *plVar43;
      if ((ulong)*(ushort *)(lVar41 + 0x12e) != 0) {
        lVar42 = 0;
        do {
          if (*(long *)(*(long *)(lVar41 + 0xb0) + lVar42) == TypeInfo_IEnumerator) {
            puVar38 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar41 + 0xb0) + 8 + lVar42) * 0x10 + lVar41 + 0x138);
            goto label_043a01e3;
          }
          lVar42 = lVar42 + 0x10;
        } while ((ulong)*(ushort *)(lVar41 + 0x12e) << 4 != lVar42);
      }
      puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar43,TypeInfo_IEnumerator,0);
label_043a01e3:
      cVar30 = (*(code *)*puVar38)(plVar43,puVar38[1]);
      if (cVar30 == '\0') goto label_043a0448;
      lVar41 = *plVar43;
      if ((ulong)*(ushort *)(lVar41 + 0x12e) != 0) {
        lVar42 = 0;
        do {
          if (*(long *)(*(long *)(lVar41 + 0xb0) + lVar42) == TypeInfo_IEnumerator_BaseCharacter) {
            puVar38 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar41 + 0xb0) + 8 + lVar42) * 0x10 + lVar41 + 0x138);
            goto label_043a0253;
          }
          lVar42 = lVar42 + 0x10;
        } while ((ulong)*(ushort *)(lVar41 + 0x12e) << 4 != lVar42);
      }
      puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar43,TypeInfo_IEnumerator_BaseCharacter,0);
label_043a0253:
      character = (Characters_BaseCharacter_o *)(*(code *)*puVar38)(plVar43,puVar38[1]);
      pAVar18 = (__this_06->fields).mockEntry;
      if (pAVar18 != (Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *)0x0) {
        (pAVar18->fields)._Key_k__BackingField = character;
        il2cpp_runtime_helper_022b4080(&pAVar18->fields,character);
        pSVar10 = (System_Collections_Generic_HashSet_object__o *)(__this_06->fields)._characterInfoPopups;
        if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043a0356;
        bVar31 = System_Collections_Generic_HashSet_object___Contains
                           (pSVar10,(Il2CppObject *)(__this_06->fields).mockEntry,MethodInfo_Boolean_Contains);
        if ((char)bVar31 == '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar31 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)character,(MethodInfo *)0x0);
          if ((char)bVar31 != '\0') {
            if (character == (Characters_BaseCharacter_o *)0x0) goto label_043a035b;
            if (*(char *)&(character->fields).FeedVictimName == '\0') {
              pUVar36 = UI_CharacterInfoHandler__CreateInfoPopup(__this_06,character,method_01);
              pSVar10 = (System_Collections_Generic_HashSet_object__o *)
                        (__this_06->fields)._characterInfoPopups;
              __this_07 = (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SetItem_BaseCharacter_CharacterInfoPopup);
              Assets_Scripts_Utility_SetItem_object__object____ctor
                        (__this_07,(Il2CppObject *)character,(Il2CppObject *)pUVar36,MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
              if (pSVar10 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043a0360;
              System_Collections_Generic_HashSet_object___Add(pSVar10,(Il2CppObject *)__this_07,MethodInfo_Boolean_Add);
            }
          }
        }
        goto label_043a0190;
      }
      il2cpp_runtime_helper_022b2c90();
label_043a0356:
      il2cpp_runtime_helper_022b2c90();
label_043a035b:
      il2cpp_runtime_helper_022b2c90();
label_043a0360:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043a036a:
  auVar48 = il2cpp_runtime_helper_022b2c90();
  uVar39 = auVar48._0_8_;
  if (auVar48._8_4_ != 1) {
    lStackY_180 = 0;
    if (plVar43 == (long *)0x0) goto label_043a0546;
    goto label_043a04dd;
  }
  plVar37 = (long *)__cxa_begin_catch();
  lStackY_180 = *plVar37;
  __cxa_end_catch();
label_043a0448:
  if (plVar43 != (long *)0x0) {
    lVar41 = *plVar43;
    if ((ulong)*(ushort *)(lVar41 + 0x12e) != 0) {
      lVar42 = 0;
      do {
        if (*(long *)(*(long *)(lVar41 + 0xb0) + lVar42) == TypeInfo_IDisposable) {
          puVar38 = (undefined8 *)
                    (lVar41 + (long)*(int *)(*(long *)(lVar41 + 0xb0) + 8 + lVar42) * 0x10 + 0x138);
          goto label_043a04ad;
        }
        lVar42 = lVar42 + 0x10;
      } while ((ulong)*(ushort *)(lVar41 + 0x12e) << 4 != lVar42);
    }
    puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar43,TypeInfo_IDisposable,0);
label_043a04ad:
    (*(code *)*puVar38)(plVar43,puVar38[1]);
  }
  if (lStackY_180 == 0) {
    return;
  }
  do {
    uVar39 = il2cpp_runtime_helper_022fefe0();
    if (plVar43 != (long *)0x0) {
label_043a04dd:
      lVar41 = *plVar43;
      if ((ulong)*(ushort *)(lVar41 + 0x12e) != 0) {
        lVar42 = 0;
        do {
          if (*(long *)(*(long *)(lVar41 + 0xb0) + lVar42) == TypeInfo_IDisposable) {
            puVar38 = (undefined8 *)
                      (lVar41 + (long)*(int *)(*(long *)(lVar41 + 0xb0) + 8 + lVar42) * 0x10 + 0x138);
            goto label_043a053d;
          }
          lVar42 = lVar42 + 0x10;
        } while ((ulong)*(ushort *)(lVar41 + 0x12e) << 4 != lVar42);
      }
      puVar38 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar43,TypeInfo_IDisposable,0);
label_043a053d:
      (*(code *)*puVar38)(plVar43,puVar38[1]);
    }
label_043a0546:
    if (lStackY_180 == 0) {
      _Unwind_Resume(uVar39);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// UI.CharacterInfoHandler$$CreateInfoPopup
// il2cpp: UI_CharacterInfoPopup_o* UI_CharacterInfoHandler__CreateInfoPopup (UI_CharacterInfoHandler_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x43a07d0

UI_CharacterInfoPopup_o *
UI_CharacterInfoHandler__CreateInfoPopup
          (UI_CharacterInfoHandler_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  UnityEngine_Material_array *pUVar2;
  UnityEngine_Material_o *pUVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int32_t length;
  TMPro_TMP_FontAsset_c *__this_00;
  long lVar7;
  UnityEngine_UI_RectMask2D_o *__this_01;
  UnityEngine_UI_RectMask2D_c *pUVar8;
  code *pcVar9;
  UnityEngine_Material_c *pUVar10;
  TMPro_TMP_Text_o *pTVar11;
  UnityEngine_Font_o *pUVar12;
  Characters_BaseMovementSync_o *x;
  UnityEngine_Object_o *x_00;
  GameManagers_InGameManager_o *x_01;
  TMPro_TMP_FontAsset_o *pTVar13;
  byte bVar14;
  bool_conflict bVar15;
  UnityEngine_LayerMask_o UVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_02;
  UI_CharacterInfoPopup_o *pUVar20;
  System_Action_Hashtable__o *value;
  undefined8 uVar21;
  UnityEngine_Color32_Fields UVar22;
  undefined8 extraout_RAX;
  System_Collections_Generic_HashSet_object__o *__this_03;
  System_Int32_array *layers;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this_04;
  UI_CharacterInfoPopup_o *extraout_RAX_00;
  undefined4 extraout_var;
  long lVar23;
  UnityEngine_Color32_Fields values;
  UI_CharacterInfoPopup_o *extraout_RAX_01;
  UnityEngine_Color32_Fields UVar24;
  undefined4 extraout_var_00;
  Il2CppObject *pIVar25;
  UnityEngine_Color32_Fields UVar26;
  System_String_o *pSVar27;
  undefined4 extraout_var_01;
  UnityEngine_Color32_Fields a;
  undefined4 extraout_var_02;
  Characters_BaseCharacter_c *pCVar28;
  int count;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppClass **unaff_RBX;
  undefined7 uVar29;
  UnityEngine_Color32_Fields __this_05;
  UnityEngine_Color32_Fields __this_06;
  undefined1 *puVar30;
  UnityEngine_Color32_Fields unaff_RBP;
  Photon_Realtime_Player_o *pPVar31;
  Il2CppClass *pIVar32;
  TMPro_TMP_FontAsset_o *__this_07;
  TMPro_TMP_FontAsset_o *pTVar33;
  UnityEngine_Color32_Fields __this_08;
  UnityEngine_Color32_Fields unaff_R13;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  UnityEngine_Color_Fields UVar39;
  UnityEngine_Color_o UVar40;
  UnityEngine_Vector3_o offset;
  undefined1 auStack_48 [8];
  float local_40;
  float local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (g_data_057ae30e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAndSetupPanel_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterInfoPopup_GetComponent_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/CharacterInfoPopup");
    g_data_057ae30e = '\x01';
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  puVar19 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  uVar21 = *puVar19;
  fVar38 = (float)uVar21;
  fVar35 = *(float *)(puVar19 + 1);
  fVar36 = fVar35;
  if (character == (Characters_BaseCharacter_o *)0x0) {
    local_3c = 250.0;
label_043a0aac:
    local_38 = uVar21;
    local_40 = fVar36;
    uStack_30 = 0;
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pIVar32 = "Prefabs/InGame/CharacterInfoPopup";
    __this_02 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          (parent,(System_String_o *)"Prefabs/InGame/CharacterInfoPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_CharacterInfoPopup);
    if ((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
       (pIVar32 = MethodInfo_CharacterInfoPopup_GetComponent_CharacterInfoPopup,
       pUVar20 = (UI_CharacterInfoPopup_o *)
                 UnityEngine_GameObject__GetComponent_object_(__this_02,(MethodInfo_255A0F0 *)MethodInfo_CharacterInfoPopup_GetComponent_CharacterInfoPopup),
       pUVar20 != (UI_CharacterInfoPopup_o *)0x0)) {
      offset.fields.z = local_40;
      offset.fields.x = (float)(undefined4)local_38;
      offset.fields.y = (float)local_38._4_4_;
      UI_CharacterInfoPopup__Load(pUVar20,character,offset,local_3c,method_00);
      return pUVar20;
    }
label_043a0b20:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar28 = character->klass;
    bVar14 = (pCVar28->_2).naturalAligment;
    bVar4 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar4 <= bVar14) &&
       (unaff_RBX = (pCVar28->_2).typeHierarchy, unaff_RBX[(ulong)bVar4 - 1] == TypeInfo_Human)) {
      pIVar32 = TypeInfo_Human;
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
        puVar19 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0xf0), lVar7 != 0)) {
        fVar35 = (float)puVar19[3];
        fVar37 = (float)((ulong)puVar19[3] >> 0x20);
        fVar35 = fVar35 + fVar35;
        local_3c = (float)*(int *)(lVar7 + 0x14);
        fVar36 = *(float *)(puVar19 + 4) + *(float *)(puVar19 + 4);
        uVar21 = CONCAT44(fVar37 + fVar37,fVar35);
        goto label_043a0aac;
      }
      goto label_043a0b20;
    }
    bVar4 = (TypeInfo_BasicTitan->_2).naturalAligment;
    local_3c = 250.0;
    if ((bVar4 <= bVar14) &&
       (unaff_RBX = (pCVar28->_2).typeHierarchy, unaff_RBX[(ulong)bVar4 - 1] == TypeInfo_BasicTitan)) {
      cVar5 = (char)character[2].fields.CustomDamage;
      unaff_RBX = (Il2CppClass **)CONCAT71((int7)((ulong)unaff_RBX >> 8),cVar5);
      if (g_data_057a6844 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a6844 = '\x01';
        puVar19 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      fVar35 = (float)puVar19[3];
      fVar36 = (float)((ulong)puVar19[3] >> 0x20);
      if (cVar5 == '\0') {
        fVar35 = fVar35 * 20.0;
        fVar36 = fVar36 * 20.0;
        fVar38 = *(float *)(puVar19 + 4) * 20.0;
      }
      else {
        fVar35 = fVar35 * 5.0;
        fVar36 = fVar36 * 5.0;
        fVar38 = *(float *)(puVar19 + 4) * 5.0;
      }
label_043a0a8c:
      fVar37 = *(float *)((long)&character[1].fields.m_CachedPtr + 4);
      fVar38 = fVar38 * fVar37;
      fVar35 = fVar37 * fVar35;
      local_38 = CONCAT44(fVar37 * fVar36,fVar35);
      fVar36 = fVar38;
      uVar21 = local_38;
      goto label_043a0aac;
    }
    unaff_R13 = (UnityEngine_Color32_Fields)&TypeInfo_BaseShifter;
    bVar4 = (TypeInfo_BaseShifter->_2).naturalAligment;
    uVar29 = (undefined7)((ulong)unaff_RBX >> 8);
    unaff_RBX = (Il2CppClass **)CONCAT71(uVar29,bVar4);
    if ((bVar14 < bVar4) || ((pCVar28->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseShifter))
    goto label_043a0aac;
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
      puVar19 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      pCVar28 = character->klass;
      bVar14 = (pCVar28->_2).naturalAligment;
      unaff_RBX = (Il2CppClass **)CONCAT71(uVar29,(TypeInfo_BaseShifter->_2).naturalAligment);
    }
    pIVar32 = TypeInfo_BaseShifter;
    if (((byte)unaff_RBX <= bVar14) &&
       ((pCVar28->_2).typeHierarchy[((ulong)unaff_RBX & 0xff) - 1] == TypeInfo_BaseShifter)) {
      fVar35 = (float)puVar19[3] * 57.0;
      fVar36 = (float)((ulong)puVar19[3] >> 0x20) * 57.0;
      fVar38 = *(float *)(puVar19 + 4) * 57.0;
      goto label_043a0a8c;
    }
  }
  UVar26 = (UnityEngine_Color32_Fields)character;
  pTVar13 = (TMPro_TMP_FontAsset_o *)il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae318 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_Hashtable);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Character_OnPlayerPropertiesChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae318 = '\x01';
  }
  __this_07 = *(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar33 = (TMPro_TMP_FontAsset_o *)((long)UVar26 + 0x108);
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_07,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    __this_00 = pTVar33->klass;
    if (__this_00 == (TMPro_TMP_FontAsset_c *)0x0) goto label_043a0d0b;
    if (*(char *)&(__this_00->_1).klass == '\0') {
      value = (System_Action_Hashtable__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Hashtable);
      System_Action_object____ctor();
      Characters_BaseCharacter__remove_OnPlayerPropertiesChanged
                ((Characters_BaseCharacter_o *)__this_00,value,(MethodInfo *)0x0);
    }
  }
  *(Il2CppClass **)((long)UVar26 + 0x108) = pIVar32;
  il2cpp_runtime_helper_022b4080(pTVar33,pIVar32);
  *(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x110) = pTVar13;
  *(float *)((long)UVar26 + 0x118) = fVar35;
  *(float *)((long)UVar26 + 0x11c) = fVar38;
  __this_07 = pTVar33;
  if (pIVar32 != (Il2CppClass *)0x0) {
    *(UnityEngine_Material_array **)((long)UVar26 + 0x148) =
         *(UnityEngine_Material_array **)&(pIVar32->_1).this_arg.bits;
    il2cpp_runtime_helper_022b4080((UnityEngine_Material_array **)((long)UVar26 + 0x148));
    *(UnityEngine_Material_o **)((long)UVar26 + 0x168) = (UnityEngine_Material_o *)0x0;
    il2cpp_runtime_helper_022b4080((UnityEngine_Material_o **)((long)UVar26 + 0x168));
    *(UnityEngine_Material_o **)((long)UVar26 + 0x160) = (UnityEngine_Material_o *)0x0;
    il2cpp_runtime_helper_022b4080((UnityEngine_Material_o **)((long)UVar26 + 0x160));
    __this_07 = (TMPro_TMP_FontAsset_o *)((long)UVar26 + 0x158);
    *(UnityEngine_Material_o **)((long)UVar26 + 0x158) = (UnityEngine_Material_o *)0x0;
    UVar22.rgba = 0;
    UVar22.r = '\0';
    UVar22.g = '\0';
    UVar22.b = '\0';
    UVar22.a = '\0';
    uVar21 = il2cpp_runtime_helper_022b4080();
    pTVar13 = *(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108);
    if (pTVar13 != (TMPro_TMP_FontAsset_o *)0x0) {
      if (*(char *)&(pTVar13->fields).m_FaceInfo.fields.m_AscentLine == '\0') {
        UVar22 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_Hashtable);
        System_Action_object____ctor();
        Characters_BaseCharacter__add_OnPlayerPropertiesChanged
                  ((Characters_BaseCharacter_o *)pTVar13,(System_Action_Hashtable__o *)UVar22,
                   (MethodInfo *)0x0);
        uVar21 = extraout_RAX;
      }
      a = (UnityEngine_Color32_Fields)&TypeInfo_Vector3;
      puVar30 = auStack_48;
      do {
        *(UnityEngine_Color32_Fields *)(puVar30 + -8) = unaff_RBP;
        *(UnityEngine_Color32_Fields *)(puVar30 + -0x10) = a;
        *(UI_CharacterInfoHandler_o **)(puVar30 + -0x18) = __this;
        *(UnityEngine_Color32_Fields *)(puVar30 + -0x20) = unaff_R13;
        *(Characters_BaseCharacter_o **)(puVar30 + -0x28) = character;
        *(Il2CppClass ***)(puVar30 + -0x30) = unaff_RBX;
        *(undefined8 *)(puVar30 + -0x38) = uVar21;
        if (g_data_057ae316 == '\0') {
          *(undefined8 *)(puVar30 + -0x40) = 0x43a1cc3;
          il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
          *(undefined8 *)(puVar30 + -0x40) = 0x43a1ccf;
          il2cpp_runtime_helper_023445d0(&TypeInfo_string);
          *(undefined8 *)(puVar30 + -0x40) = 0x43a1cdb;
          il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
          *(undefined8 *)(puVar30 + -0x40) = 0x43a1ce7;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
          *(undefined8 *)(puVar30 + -0x40) = 0x43a1cf3;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
          *(undefined8 *)(puVar30 + -0x40) = 0x43a1cff;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
          *(undefined8 *)(puVar30 + -0x40) = 0x43a1d0b;
          il2cpp_runtime_helper_023445d0(&"</color>");
          *(undefined8 *)(puVar30 + -0x40) = 0x43a1d17;
          il2cpp_runtime_helper_023445d0(&">");
          *(undefined8 *)(puVar30 + -0x40) = 0x43a1d23;
          il2cpp_runtime_helper_023445d0(&"<color=");
          g_data_057ae316 = '\x01';
        }
        *(undefined8 *)(puVar30 + -0x40) = 0x43a1d32;
        __this_08 = UVar26;
        bVar15 = UI_CharacterInfoPopup__CanApplySettings
                           ((UI_CharacterInfoPopup_o *)UVar26,(MethodInfo *)UVar22);
        if ((char)bVar15 == '\0') {
          return (UI_CharacterInfoPopup_o *)CONCAT44(extraout_var,bVar15);
        }
        __this_05 = (UnityEngine_Color32_Fields)&TypeInfo_SettingsManager;
        lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0xf8), lVar7 == 0)) {
label_043a2789:
          *(undefined8 *)(puVar30 + -0x40) = 0x43a278e;
          il2cpp_runtime_helper_022b2c90();
          __this_06 = UVar22;
        }
        else {
          iVar6 = *(int *)(lVar7 + 0x14);
          unaff_RBP = UVar26;
          if (iVar6 != 0) {
            if (iVar6 == 2) {
              __this_08 = *(UnityEngine_Color32_Fields *)((long)UVar26 + 0x108);
              if (__this_08 != (UnityEngine_Color32_Fields)0x0) {
                UVar22.rgba = 0;
                UVar22.r = '\0';
                UVar22.g = '\0';
                UVar22.b = '\0';
                UVar22.a = '\0';
                *(undefined8 *)(puVar30 + -0x40) = 0x43a1dd3;
                bVar15 = Characters_BaseCharacter__IsMainCharacter
                                   ((Characters_BaseCharacter_o *)__this_08,(MethodInfo *)0x0);
                bVar14 = (byte)bVar15 ^ 1;
                goto joined_r0x043a1ddb;
              }
            }
            else if (iVar6 == 1) {
              __this_08 = *(UnityEngine_Color32_Fields *)((long)UVar26 + 0x108);
              if (__this_08 != (UnityEngine_Color32_Fields)0x0) {
                UVar22.rgba = 0;
                UVar22.r = '\0';
                UVar22.g = '\0';
                UVar22.b = '\0';
                UVar22.a = '\0';
                *(undefined8 *)(puVar30 + -0x40) = 0x43a1d93;
                bVar15 = Characters_BaseCharacter__IsMainCharacter
                                   ((Characters_BaseCharacter_o *)__this_08,(MethodInfo *)0x0);
                bVar14 = (byte)bVar15;
                goto joined_r0x043a1db4;
              }
            }
            else {
              bVar14 = 0;
joined_r0x043a1ddb:
              if (UVar26 != (UnityEngine_Color32_Fields)0x0) goto label_043a1df0;
            }
            goto label_043a2789;
          }
          bVar14 = 1;
joined_r0x043a1db4:
          if (UVar26 == (UnityEngine_Color32_Fields)0x0) goto label_043a2789;
label_043a1df0:
          *(byte *)((long)UVar26 + 0x146) = bVar14;
          lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar7 == 0) || (*(long *)(lVar7 + 0x100) == 0)) goto label_043a2789;
          *(undefined4 *)((long)UVar26 + 0x140) = *(undefined4 *)(*(long *)(lVar7 + 0x100) + 0x14);
          if ((*(long *)(lVar7 + 0x110) == 0) ||
             (__this_08 = *(UnityEngine_Color32_Fields *)(*(long *)(lVar7 + 0x110) + 0x18),
             __this_08 == (UnityEngine_Color32_Fields)0x0)) goto label_043a2789;
          UVar22.rgba = 0;
          UVar22.r = '\0';
          UVar22.g = '\0';
          UVar22.b = '\0';
          UVar22.a = '\0';
          *(undefined8 *)(puVar30 + -0x40) = 0x43a1e4c;
          UVar39 = (UnityEngine_Color_Fields)
                   Utility_Color255__ToColor((Utility_Color255_o *)__this_08,(MethodInfo *)0x0);
          *(UnityEngine_Color_Fields *)((long)UVar26 + 0x130) = UVar39;
          lVar23 = TypeInfo_SettingsManager;
          lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x108), lVar7 == 0)) ||
             (*(long *)(lVar7 + 0x10) == 0)) goto label_043a2789;
          cVar5 = *(char *)(*(long *)(lVar7 + 0x10) + 0x11);
          *(char *)((long)UVar26 + 0x144) = cVar5;
          if (cVar5 == '\0') {
            *(undefined1 *)((long)UVar26 + 0x145) = 0;
            fVar35 = 1.0;
            fVar36 = 1.0;
            fVar38 = fVar35;
            fVar37 = fVar36;
          }
          else {
            *(undefined1 *)((long)UVar26 + 0x145) = *(undefined1 *)((long)UVar26 + 0x146);
            if ((*(long *)(lVar7 + 0x18) == 0) ||
               (__this_08 = *(UnityEngine_Color32_Fields *)(*(long *)(lVar7 + 0x18) + 0x18),
               __this_08 == (UnityEngine_Color32_Fields)0x0)) goto label_043a2789;
            UVar22.rgba = 0;
            UVar22.r = '\0';
            UVar22.g = '\0';
            UVar22.b = '\0';
            UVar22.a = '\0';
            *(undefined8 *)(puVar30 + -0x40) = 0x43a1ecc;
            UVar40 = Utility_Color255__ToColor((Utility_Color255_o *)__this_08,(MethodInfo *)0x0);
            fVar35 = UVar40.fields.r;
            fVar36 = UVar40.fields.g;
            lVar23 = TypeInfo_SettingsManager;
            fVar38 = UVar40.fields.b;
            fVar37 = UVar40.fields.a;
          }
          *(float *)((long)UVar26 + 0x120) = fVar35;
          *(float *)((long)UVar26 + 0x124) = fVar36;
          *(float *)((long)UVar26 + 0x128) = fVar38;
          *(float *)((long)UVar26 + 300) = fVar37;
          lVar7 = *(long *)(lVar23 + 0xb8);
          lVar23 = *(long *)(lVar7 + 0x50);
          if (((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x58), lVar23 == 0)) ||
             (lVar23 = *(long *)(lVar23 + 0x20), lVar23 == 0)) goto label_043a2789;
          *(bool *)((long)UVar26 + 0x147) = *(int *)(lVar23 + 0x14) == 2;
          lVar7 = *(long *)(lVar7 + 0x28);
          if ((lVar7 == 0) || (*(long *)(lVar7 + 0x118) == 0)) goto label_043a2789;
          *(bool_conflict *)((long)UVar26 + 0x150) = *(bool_conflict *)(*(long *)(lVar7 + 0x118) + 0x14);
          if (*(long *)(lVar7 + 0x120) == 0) goto label_043a2789;
          (((UnityEngine_Color32_o *)((long)UVar26 + 0x154))->fields).rgba =
               *(int32_t *)(*(long *)(lVar7 + 0x120) + 0x14);
          if (*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108) == (TMPro_TMP_FontAsset_o *)0x0)
          goto label_043a2789;
          UVar22 = (UnityEngine_Color32_Fields)
                   ((*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108))->fields).m_SourceFontFileGUID;
          __this = (UI_CharacterInfoHandler_o *)((long)UVar26 + 0x148);
          *(UnityEngine_Color32_Fields *)((long)UVar26 + 0x148) = UVar22;
          *(undefined8 *)(puVar30 + -0x40) = 0x43a1f9b;
          il2cpp_runtime_helper_022b4080(__this);
          if (*(char *)((long)UVar26 + 0x145) != '\0') {
            __this_01 = *(UnityEngine_UI_RectMask2D_o **)((long)UVar26 + 0xb8);
            __this_08.rgba = 0;
            __this_08.r = '\0';
            __this_08.g = '\0';
            __this_08.b = '\0';
            __this_08.a = '\0';
            if (__this_01 != (UnityEngine_UI_RectMask2D_o *)0x0) {
              bVar34 = *(int *)((long)UVar26 + 0x140) == 2;
              UVar22._1_7_ = 0;
              UVar22.rgba._0_1_ = bVar34;
              *(undefined8 *)(puVar30 + -0x40) = 0x43a1fd1;
              UnityEngine_Behaviour__set_enabled
                        ((UnityEngine_Behaviour_o *)__this_01,(uint)bVar34,(MethodInfo *)0x0);
              if (*(int *)((long)UVar26 + 0x140) == 2) {
                __this_08.rgba = 0;
                __this_08.r = '\0';
                __this_08.g = '\0';
                __this_08.b = '\0';
                __this_08.a = '\0';
                if (*(UnityEngine_UI_RectMask2D_o **)((long)UVar26 + 0xb8) ==
                    (UnityEngine_UI_RectMask2D_o *)0x0) goto label_043a2789;
                pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x130);
                pUVar2 = *(UnityEngine_Material_array **)((long)UVar26 + 0x138);
                pUVar8 = (*(UnityEngine_UI_RectMask2D_o **)((long)UVar26 + 0xb8))->klass;
                UVar22 = (UnityEngine_Color32_Fields)pUVar8[1]._1.namespaze;
                pcVar9 = (code *)pUVar8[1]._1.name;
                *(undefined8 *)(puVar30 + -0x40) = 0x43a2011;
                (*pcVar9)((int)pUVar1,(int)pUVar2);
              }
              __this_08.rgba = 0;
              __this_08.r = '\0';
              __this_08.g = '\0';
              __this_08.b = '\0';
              __this_08.a = '\0';
              if (*(UnityEngine_Material_o **)((long)UVar26 + 0xb0) != (UnityEngine_Material_o *)0x0) {
                pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x120);
                pUVar3 = *(UnityEngine_Material_o **)((long)UVar26 + 0x128);
                pUVar10 = (*(UnityEngine_Material_o **)((long)UVar26 + 0xb0))->klass;
                UVar22 = (UnityEngine_Color32_Fields)pUVar10[1].vtable._0_Equals.methodPtr;
                pcVar9 = *(code **)&pUVar10[1]._2.naturalAligment;
                *(undefined8 *)(puVar30 + -0x40) = 0x43a2046;
                (*pcVar9)((int)pUVar1,(int)pUVar3);
                __this_08.rgba = 0;
                __this_08.r = '\0';
                __this_08.g = '\0';
                __this_08.b = '\0';
                __this_08.a = '\0';
                if (*(UnityEngine_Material_o **)((long)UVar26 + 0xa8) != (UnityEngine_Material_o *)0x0) {
                  pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x120);
                  pUVar3 = *(UnityEngine_Material_o **)((long)UVar26 + 0x128);
                  pUVar10 = (*(UnityEngine_Material_o **)((long)UVar26 + 0xa8))->klass;
                  UVar22 = (UnityEngine_Color32_Fields)pUVar10[1].vtable._0_Equals.methodPtr;
                  pcVar9 = *(code **)&pUVar10[1]._2.naturalAligment;
                  *(undefined8 *)(puVar30 + -0x40) = 0x43a207b;
                  (*pcVar9)((int)pUVar1,(int)pUVar3);
                  uVar18 = *(uint *)((long)UVar26 + 0x140);
                  unaff_RBP.r = '\0';
                  unaff_RBP.g = '\0';
                  unaff_RBP.b = '\0';
                  unaff_RBP.a = '\0';
                  unaff_RBP.rgba = uVar18;
                  pTVar11 = *(TMPro_TMP_Text_o **)((long)UVar26 + 0xb0);
                  pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x130);
                  pUVar2 = *(UnityEngine_Material_array **)((long)UVar26 + 0x138);
                  __this_08.rgba = 0;
                  __this_08.r = '\0';
                  __this_08.g = '\0';
                  __this_08.b = '\0';
                  __this_08.a = '\0';
                  *(undefined8 *)(puVar30 + -0x40) = 0x43a20a6;
                  uVar17 = il2cpp_runtime_helper_03b428b0((int)pUVar1,(int)pUVar2);
                  __this_05.rgba = 0;
                  __this_05.r = '\0';
                  __this_05.g = '\0';
                  __this_05.b = '\0';
                  __this_05.a = '\0';
                  if (pTVar11 != (TMPro_TMP_Text_o *)0x0) {
                    UVar22.r = '\0';
                    UVar22.g = '\0';
                    UVar22.b = '\0';
                    UVar22.a = '\0';
                    UVar22.rgba = uVar17;
                    *(undefined8 *)(puVar30 + -0x40) = 0x43a20bb;
                    TMPro_TMP_Text__set_outlineColor(pTVar11,(UnityEngine_Color32_o)UVar22,(MethodInfo *)0x0);
                    __this_05 = *(UnityEngine_Color32_Fields *)((long)UVar26 + 0xa8);
                    pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x130);
                    pUVar2 = *(UnityEngine_Material_array **)((long)UVar26 + 0x138);
                    __this_08.rgba = 0;
                    __this_08.r = '\0';
                    __this_08.g = '\0';
                    __this_08.b = '\0';
                    __this_08.a = '\0';
                    *(undefined8 *)(puVar30 + -0x40) = 0x43a20de;
                    uVar17 = il2cpp_runtime_helper_03b428b0((int)pUVar1,(int)pUVar2);
                    if (__this_05 != (UnityEngine_Color32_Fields)0x0) {
                      UVar22.r = '\0';
                      UVar22.g = '\0';
                      UVar22.b = '\0';
                      UVar22.a = '\0';
                      UVar22.rgba = uVar17;
                      *(undefined8 *)(puVar30 + -0x40) = 0x43a20f3;
                      TMPro_TMP_Text__set_outlineColor
                                ((TMPro_TMP_Text_o *)__this_05,(UnityEngine_Color32_o)UVar22,(MethodInfo *)0x0
                                );
                      pTVar11 = *(TMPro_TMP_Text_o **)((long)UVar26 + 0xb0);
                      if (uVar18 == 1) {
                        fVar35 = 0.2;
                      }
                      else {
                        fVar35 = 0.0;
                      }
                      __this_08.rgba = 0;
                      __this_08.r = '\0';
                      __this_08.g = '\0';
                      __this_08.b = '\0';
                      __this_08.a = '\0';
                      if (pTVar11 != (TMPro_TMP_Text_o *)0x0) {
                        *(float *)(puVar30 + -0x34) = fVar35;
                        UVar22.rgba = 0;
                        UVar22.r = '\0';
                        UVar22.g = '\0';
                        UVar22.b = '\0';
                        UVar22.a = '\0';
                        *(undefined8 *)(puVar30 + -0x40) = 0x43a22a2;
                        TMPro_TMP_Text__set_outlineWidth(pTVar11,fVar35,(MethodInfo *)0x0);
                        __this_08 = *(UnityEngine_Color32_Fields *)((long)UVar26 + 0xa8);
                        if (__this_08 != (UnityEngine_Color32_Fields)0x0) {
                          UVar22.rgba = 0;
                          UVar22.r = '\0';
                          UVar22.g = '\0';
                          UVar22.b = '\0';
                          UVar22.a = '\0';
                          *(undefined8 *)(puVar30 + -0x40) = 0x43a22c0;
                          TMPro_TMP_Text__set_outlineWidth
                                    ((TMPro_TMP_Text_o *)__this_08,*(float *)(puVar30 + -0x34),
                                     (MethodInfo *)0x0);
                          if ((*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108) !=
                               (TMPro_TMP_FontAsset_o *)0x0) &&
                             (__this_08 = (UnityEngine_Color32_Fields)
                                          ((*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108))->fields).
                                          m_SourceFontFile, __this_08 != (UnityEngine_Color32_Fields)0x0)) {
                            UVar22.rgba = 0;
                            UVar22.r = '\0';
                            UVar22.g = '\0';
                            UVar22.b = '\0';
                            UVar22.a = '\0';
                            *(undefined8 *)(puVar30 + -0x40) = 0x43a22e5;
                            a = (UnityEngine_Color32_Fields)
                                System_String__Trim((System_String_o *)__this_08,(MethodInfo *)0x0);
                            if (*(char *)((long)UVar26 + 0x147) == '\0') goto label_043a23fb;
                            if (*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108) !=
                                (TMPro_TMP_FontAsset_o *)0x0) {
                              __this_05 = *(UnityEngine_Color32_Fields *)
                                           &((*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108))->fields).
                                            m_FaceInfo.fields.m_DescentLine;
                              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                                *(undefined8 *)(puVar30 + -0x40) = 0x43a2327;
                                il2cpp_runtime_helper_02337ed0();
                              }
                              *(undefined8 *)(puVar30 + -0x40) = 0x43a2331;
                              unaff_R13 = (UnityEngine_Color32_Fields)
                                          GameManagers_TeamInfo__GetTeamColor
                                                    ((System_String_o *)__this_05,(MethodInfo *)0x0);
label_043a2334:
                              UVar22.rgba = 5;
                              UVar22.r = '\0';
                              UVar22.g = '\0';
                              UVar22.b = '\0';
                              UVar22.a = '\0';
                              *(undefined8 *)(puVar30 + -0x40) = 0x43a2348;
                              __this_08 = TypeInfo_string;
                              values = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_022b2a40();
                              UVar24 = "<color=";
                              if (values != (UnityEngine_Color32_Fields)0x0) {
                                __this_05 = values;
                                __this_06 = UVar22;
                                if (*(int *)((long)values + 0x18) != 0) {
                                  __this_08 = (UnityEngine_Color32_Fields)((long)values + 0x20);
                                  *(UnityEngine_Color32_Fields *)((long)values + 0x20) = "<color=";
                                  *(undefined8 *)(puVar30 + -0x40) = 0x43a2375;
                                  il2cpp_runtime_helper_022b4080();
                                  __this_06 = UVar24;
                                  if (1 < *(uint *)((long)values + 0x18)) {
                                    __this_08 = (UnityEngine_Color32_Fields)((long)values + 0x28);
                                    *(UnityEngine_Color32_Fields *)((long)values + 0x28) = unaff_R13;
                                    *(undefined8 *)(puVar30 + -0x40) = 0x43a238f;
                                    __this_06 = unaff_R13;
                                    il2cpp_runtime_helper_022b4080();
                                    UVar22 = ">";
                                    if (2 < *(uint *)((long)values + 0x18)) {
                                      __this_08 = (UnityEngine_Color32_Fields)((long)values + 0x30);
                                      *(UnityEngine_Color32_Fields *)((long)values + 0x30) = ">";
                                      *(undefined8 *)(puVar30 + -0x40) = 0x43a23b0;
                                      il2cpp_runtime_helper_022b4080();
                                      __this_06 = UVar22;
                                      if (3 < *(uint *)((long)values + 0x18)) {
                                        __this_08 = (UnityEngine_Color32_Fields)((long)values + 0x38);
                                        *(UnityEngine_Color32_Fields *)((long)values + 0x38) = a;
                                        *(undefined8 *)(puVar30 + -0x40) = 0x43a23ca;
                                        __this_06 = a;
                                        il2cpp_runtime_helper_022b4080();
                                        if (4 < *(uint *)((long)values + 0x18)) {
                                          *(System_String_o **)((long)values + 0x40) = "</color>";
                                          *(undefined8 *)(puVar30 + -0x40) = 0x43a23ee;
                                          il2cpp_runtime_helper_022b4080((System_String_o **)((long)values + 0x40));
                                          goto label_043a23f1;
                                        }
                                      }
                                    }
                                  }
                                }
                                goto label_043a278e;
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
            goto label_043a2789;
          }
          __this_08 = *(UnityEngine_Color32_Fields *)((long)UVar26 + 0xb8);
          if (*(char *)((long)UVar26 + 0x146) != '\0') {
            if (__this_08 != (UnityEngine_Color32_Fields)0x0) {
              bVar34 = *(int *)((long)UVar26 + 0x140) == 2;
              UVar22._1_7_ = 0;
              UVar22.rgba._0_1_ = bVar34;
              *(undefined8 *)(puVar30 + -0x40) = 0x43a214b;
              UnityEngine_Behaviour__set_enabled
                        ((UnityEngine_Behaviour_o *)__this_08,(uint)bVar34,(MethodInfo *)0x0);
              __this_08.rgba = 0;
              __this_08.r = '\0';
              __this_08.g = '\0';
              __this_08.b = '\0';
              __this_08.a = '\0';
              if (*(UnityEngine_UI_RectMask2D_o **)((long)UVar26 + 0xb8) != (UnityEngine_UI_RectMask2D_o *)0x0
                 ) {
                pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x130);
                pUVar2 = *(UnityEngine_Material_array **)((long)UVar26 + 0x138);
                pUVar8 = (*(UnityEngine_UI_RectMask2D_o **)((long)UVar26 + 0xb8))->klass;
                UVar22 = (UnityEngine_Color32_Fields)pUVar8[1]._1.namespaze;
                pcVar9 = (code *)pUVar8[1]._1.name;
                *(undefined8 *)(puVar30 + -0x40) = 0x43a2180;
                (*pcVar9)((int)pUVar1,(int)pUVar2);
                __this_08.rgba = 0;
                __this_08.r = '\0';
                __this_08.g = '\0';
                __this_08.b = '\0';
                __this_08.a = '\0';
                if (*(UnityEngine_Material_o **)((long)UVar26 + 0xb0) != (UnityEngine_Material_o *)0x0) {
                  pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x120);
                  pUVar3 = *(UnityEngine_Material_o **)((long)UVar26 + 0x128);
                  pUVar10 = (*(UnityEngine_Material_o **)((long)UVar26 + 0xb0))->klass;
                  UVar22 = (UnityEngine_Color32_Fields)pUVar10[1].vtable._0_Equals.methodPtr;
                  pcVar9 = *(code **)&pUVar10[1]._2.naturalAligment;
                  *(undefined8 *)(puVar30 + -0x40) = 0x43a21b5;
                  (*pcVar9)((int)pUVar1,(int)pUVar3);
                  __this_08.rgba = 0;
                  __this_08.r = '\0';
                  __this_08.g = '\0';
                  __this_08.b = '\0';
                  __this_08.a = '\0';
                  if (*(UnityEngine_Material_o **)((long)UVar26 + 0xa8) != (UnityEngine_Material_o *)0x0) {
                    pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x120);
                    pUVar3 = *(UnityEngine_Material_o **)((long)UVar26 + 0x128);
                    pUVar10 = (*(UnityEngine_Material_o **)((long)UVar26 + 0xa8))->klass;
                    UVar22 = (UnityEngine_Color32_Fields)pUVar10[1].vtable._0_Equals.methodPtr;
                    pcVar9 = *(code **)&pUVar10[1]._2.naturalAligment;
                    *(undefined8 *)(puVar30 + -0x40) = 0x43a21ea;
                    (*pcVar9)((int)pUVar1,(int)pUVar3);
                    uVar18 = *(uint *)((long)UVar26 + 0x140);
                    unaff_RBP.r = '\0';
                    unaff_RBP.g = '\0';
                    unaff_RBP.b = '\0';
                    unaff_RBP.a = '\0';
                    unaff_RBP.rgba = uVar18;
                    pTVar11 = *(TMPro_TMP_Text_o **)((long)UVar26 + 0xb0);
                    pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x130);
                    pUVar2 = *(UnityEngine_Material_array **)((long)UVar26 + 0x138);
                    __this_08.rgba = 0;
                    __this_08.r = '\0';
                    __this_08.g = '\0';
                    __this_08.b = '\0';
                    __this_08.a = '\0';
                    *(undefined8 *)(puVar30 + -0x40) = 0x43a2215;
                    uVar17 = il2cpp_runtime_helper_03b428b0((int)pUVar1,(int)pUVar2);
                    __this_05.rgba = 0;
                    __this_05.r = '\0';
                    __this_05.g = '\0';
                    __this_05.b = '\0';
                    __this_05.a = '\0';
                    if (pTVar11 != (TMPro_TMP_Text_o *)0x0) {
                      UVar22.r = '\0';
                      UVar22.g = '\0';
                      UVar22.b = '\0';
                      UVar22.a = '\0';
                      UVar22.rgba = uVar17;
                      *(undefined8 *)(puVar30 + -0x40) = 0x43a222a;
                      TMPro_TMP_Text__set_outlineColor
                                (pTVar11,(UnityEngine_Color32_o)UVar22,(MethodInfo *)0x0);
                      __this_05 = *(UnityEngine_Color32_Fields *)((long)UVar26 + 0xa8);
                      pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x130);
                      pUVar2 = *(UnityEngine_Material_array **)((long)UVar26 + 0x138);
                      __this_08.rgba = 0;
                      __this_08.r = '\0';
                      __this_08.g = '\0';
                      __this_08.b = '\0';
                      __this_08.a = '\0';
                      *(undefined8 *)(puVar30 + -0x40) = 0x43a224d;
                      uVar17 = il2cpp_runtime_helper_03b428b0((int)pUVar1,(int)pUVar2);
                      if (__this_05 != (UnityEngine_Color32_Fields)0x0) {
                        UVar22.r = '\0';
                        UVar22.g = '\0';
                        UVar22.b = '\0';
                        UVar22.a = '\0';
                        UVar22.rgba = uVar17;
                        *(undefined8 *)(puVar30 + -0x40) = 0x43a2262;
                        TMPro_TMP_Text__set_outlineColor
                                  ((TMPro_TMP_Text_o *)__this_05,(UnityEngine_Color32_o)UVar22,
                                   (MethodInfo *)0x0);
                        pTVar11 = *(TMPro_TMP_Text_o **)((long)UVar26 + 0xb0);
                        if (uVar18 == 1) {
                          fVar35 = 0.2;
                        }
                        else {
                          fVar35 = 0.0;
                        }
                        __this_08.rgba = 0;
                        __this_08.r = '\0';
                        __this_08.g = '\0';
                        __this_08.b = '\0';
                        __this_08.a = '\0';
                        if (pTVar11 != (TMPro_TMP_Text_o *)0x0) {
                          *(float *)(puVar30 + -0x34) = fVar35;
                          UVar22.rgba = 0;
                          UVar22.r = '\0';
                          UVar22.g = '\0';
                          UVar22.b = '\0';
                          UVar22.a = '\0';
                          *(undefined8 *)(puVar30 + -0x40) = 0x43a2636;
                          TMPro_TMP_Text__set_outlineWidth(pTVar11,fVar35,(MethodInfo *)0x0);
                          __this_08 = *(UnityEngine_Color32_Fields *)((long)UVar26 + 0xa8);
                          if (__this_08 != (UnityEngine_Color32_Fields)0x0) {
                            UVar22.rgba = 0;
                            UVar22.r = '\0';
                            UVar22.g = '\0';
                            UVar22.b = '\0';
                            UVar22.a = '\0';
                            *(undefined8 *)(puVar30 + -0x40) = 0x43a2654;
                            TMPro_TMP_Text__set_outlineWidth
                                      ((TMPro_TMP_Text_o *)__this_08,*(float *)(puVar30 + -0x34),
                                       (MethodInfo *)0x0);
                            if ((*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108) !=
                                 (TMPro_TMP_FontAsset_o *)0x0) &&
                               (__this_08 = (UnityEngine_Color32_Fields)
                                            ((*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108))->fields).
                                            m_SourceFontFile, __this_08 != (UnityEngine_Color32_Fields)0x0)) {
                              UVar22.rgba = 0;
                              UVar22.r = '\0';
                              UVar22.g = '\0';
                              UVar22.b = '\0';
                              UVar22.a = '\0';
                              *(undefined8 *)(puVar30 + -0x40) = 0x43a2679;
                              UVar24 = (UnityEngine_Color32_Fields)
                                       System_String__Trim((System_String_o *)__this_08,(MethodInfo *)0x0);
                              if (UVar24 != (UnityEngine_Color32_Fields)0x0) {
                                iVar6 = (int)((TMPro_TMP_Text_Fields *)((long)UVar24 + 0x10))->m_CachedPtr;
                                count = *(int *)((long)UVar26 + 0x150) - iVar6;
                                if (count == 0 || *(int *)((long)UVar26 + 0x150) < iVar6) {
                                  length = (((UnityEngine_Color32_o *)((long)UVar26 + 0x154))->fields).rgba;
                                  a = UVar24;
                                  if (length < iVar6) {
                                    UVar22.rgba = 0;
                                    UVar22.r = '\0';
                                    UVar22.g = '\0';
                                    UVar22.b = '\0';
                                    UVar22.a = '\0';
                                    *(undefined8 *)(puVar30 + -0x40) = 0x43a26c9;
                                    a = (UnityEngine_Color32_Fields)
                                        System_String__Substring_3af8da0
                                                  ((System_String_o *)UVar24,0,length,(MethodInfo *)0x0);
                                    __this_08 = UVar24;
                                  }
                                }
                                else {
                                  *(undefined8 *)(puVar30 + -0x40) = 0x43a26a2;
                                  UVar22 = (UnityEngine_Color32_Fields)
                                           System_String__CreateString_3afdbf0
                                                     ((System_String_o *)0x0,0x25a9,count,(MethodInfo *)0x0);
                                  *(undefined8 *)(puVar30 + -0x40) = 0x43a26af;
                                  a = (UnityEngine_Color32_Fields)
                                      System_String__Concat_3ae5ba0
                                                ((System_String_o *)UVar24,(System_String_o *)UVar22,
                                                 (MethodInfo *)0x0);
                                  __this_08 = UVar24;
                                }
                                pTVar13 = *(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108);
                                if (pTVar13 != (TMPro_TMP_FontAsset_o *)0x0) {
                                  pUVar12 = (pTVar13->fields).m_SourceFontFile;
                                  __this_08.rgba = 0;
                                  __this_08.r = '\0';
                                  __this_08.g = '\0';
                                  __this_08.b = '\0';
                                  __this_08.a = '\0';
                                  if (pUVar12 != (UnityEngine_Font_o *)0x0) {
                                    unaff_RBP = (UnityEngine_Color32_Fields)
                                                (pTVar13->fields).m_SourceFontFileGUID;
                                    *(undefined8 *)(puVar30 + -0x40) = 0x43a26f5;
                                    UVar22 = (UnityEngine_Color32_Fields)
                                             System_String__Trim((System_String_o *)pUVar12,(MethodInfo *)0x0)
                                    ;
                                    *(undefined8 *)(puVar30 + -0x40) = 0x43a2702;
                                    __this_08 = a;
                                    uVar18 = System_String__op_Equality
                                                       ((System_String_o *)a,(System_String_o *)UVar22,
                                                        (MethodInfo *)0x0);
                                    __this_05.r = '\0';
                                    __this_05.g = '\0';
                                    __this_05.b = '\0';
                                    __this_05.a = '\0';
                                    __this_05.rgba = uVar18;
                                    if (*(char *)((long)UVar26 + 0x147) == '\0') {
                                      if ((char)uVar18 != '\0') {
                                        a = unaff_RBP;
                                      }
                                      goto label_043a23fb;
                                    }
                                    if (*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108) !=
                                        (TMPro_TMP_FontAsset_o *)0x0) {
                                      __this_08 = *(UnityEngine_Color32_Fields *)
                                                   &((*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108))->
                                                    fields).m_FaceInfo.fields.m_DescentLine;
                                      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                                        *(undefined8 *)(puVar30 + -0x40) = 0x43a273b;
                                        il2cpp_runtime_helper_02337ed0();
                                      }
                                      UVar22.rgba = 0;
                                      UVar22.r = '\0';
                                      UVar22.g = '\0';
                                      UVar22.b = '\0';
                                      UVar22.a = '\0';
                                      *(undefined8 *)(puVar30 + -0x40) = 0x43a2745;
                                      unaff_R13 = (UnityEngine_Color32_Fields)
                                                  GameManagers_TeamInfo__GetTeamColor
                                                            ((System_String_o *)__this_08,(MethodInfo *)0x0);
                                      if ((char)uVar18 == '\0') goto label_043a2334;
                                      if (*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108) !=
                                          (TMPro_TMP_FontAsset_o *)0x0) {
                                        pUVar12 = ((*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108))->fields
                                                  ).m_SourceFontFile;
                                        __this_08.rgba = 0;
                                        __this_08.r = '\0';
                                        __this_08.g = '\0';
                                        __this_08.b = '\0';
                                        __this_08.a = '\0';
                                        if (pUVar12 != (UnityEngine_Font_o *)0x0) {
                                          *(undefined8 *)(puVar30 + -0x40) = 0x43a276d;
                                          a = (UnityEngine_Color32_Fields)
                                              System_String__Trim((System_String_o *)pUVar12,(MethodInfo *)0x0
                                                                 );
                                          goto label_043a2334;
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
            goto label_043a2789;
          }
          if (__this_08 == (UnityEngine_Color32_Fields)0x0) goto label_043a2789;
          UVar22.rgba = 0;
          UVar22.r = '\0';
          UVar22.g = '\0';
          UVar22.b = '\0';
          UVar22.a = '\0';
          *(undefined8 *)(puVar30 + -0x40) = 0x43a243e;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_08,0,(MethodInfo *)0x0);
          __this_08.rgba = 0;
          __this_08.r = '\0';
          __this_08.g = '\0';
          __this_08.b = '\0';
          __this_08.a = '\0';
          if (*(UnityEngine_Material_o **)((long)UVar26 + 0xb0) == (UnityEngine_Material_o *)0x0)
          goto label_043a2789;
          pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x120);
          pUVar3 = *(UnityEngine_Material_o **)((long)UVar26 + 0x128);
          pUVar10 = (*(UnityEngine_Material_o **)((long)UVar26 + 0xb0))->klass;
          UVar22 = (UnityEngine_Color32_Fields)pUVar10[1].vtable._0_Equals.methodPtr;
          pcVar9 = *(code **)&pUVar10[1]._2.naturalAligment;
          *(undefined8 *)(puVar30 + -0x40) = 0x43a2473;
          (*pcVar9)((int)pUVar1,(int)pUVar3);
          __this_08.rgba = 0;
          __this_08.r = '\0';
          __this_08.g = '\0';
          __this_08.b = '\0';
          __this_08.a = '\0';
          if (*(UnityEngine_Material_o **)((long)UVar26 + 0xa8) == (UnityEngine_Material_o *)0x0)
          goto label_043a2789;
          pUVar1 = *(UnityEngine_Material_o **)((long)UVar26 + 0x120);
          pUVar3 = *(UnityEngine_Material_o **)((long)UVar26 + 0x128);
          pUVar10 = (*(UnityEngine_Material_o **)((long)UVar26 + 0xa8))->klass;
          UVar22 = (UnityEngine_Color32_Fields)pUVar10[1].vtable._0_Equals.methodPtr;
          pcVar9 = *(code **)&pUVar10[1]._2.naturalAligment;
          *(undefined8 *)(puVar30 + -0x40) = 0x43a24a8;
          (*pcVar9)((int)pUVar1,(int)pUVar3);
          pTVar11 = *(TMPro_TMP_Text_o **)((long)UVar26 + 0xb0);
          __this_08.rgba = 0;
          __this_08.r = '\0';
          __this_08.g = '\0';
          __this_08.b = '\0';
          __this_08.a = '\0';
          if (pTVar11 == (TMPro_TMP_Text_o *)0x0) goto label_043a2789;
          UVar22.rgba = 0;
          UVar22.r = '\0';
          UVar22.g = '\0';
          UVar22.b = '\0';
          UVar22.a = '\0';
          *(undefined8 *)(puVar30 + -0x40) = 0x43a24c3;
          TMPro_TMP_Text__set_outlineWidth(pTVar11,0.0,(MethodInfo *)0x0);
          __this_08 = *(UnityEngine_Color32_Fields *)((long)UVar26 + 0xa8);
          if (__this_08 == (UnityEngine_Color32_Fields)0x0) goto label_043a2789;
          UVar22.rgba = 0;
          UVar22.r = '\0';
          UVar22.g = '\0';
          UVar22.b = '\0';
          UVar22.a = '\0';
          *(undefined8 *)(puVar30 + -0x40) = 0x43a24de;
          TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)__this_08,0.0,(MethodInfo *)0x0);
          pTVar13 = *(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108);
          if (pTVar13 == (TMPro_TMP_FontAsset_o *)0x0) goto label_043a2789;
          if (*(char *)((long)UVar26 + 0x147) == '\0') {
            a = (UnityEngine_Color32_Fields)(pTVar13->fields).m_SourceFontFileGUID;
            goto label_043a23fb;
          }
          __this_08 = *(UnityEngine_Color32_Fields *)&(pTVar13->fields).m_FaceInfo.fields.m_DescentLine;
          if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
            *(undefined8 *)(puVar30 + -0x40) = 0x43a251d;
            il2cpp_runtime_helper_02337ed0();
          }
          UVar22.rgba = 0;
          UVar22.r = '\0';
          UVar22.g = '\0';
          UVar22.b = '\0';
          UVar22.a = '\0';
          *(undefined8 *)(puVar30 + -0x40) = 0x43a2527;
          __this_05 = (UnityEngine_Color32_Fields)
                      GameManagers_TeamInfo__GetTeamColor((System_String_o *)__this_08,(MethodInfo *)0x0);
          if (*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108) == (TMPro_TMP_FontAsset_o *)0x0)
          goto label_043a2789;
          pUVar12 = ((*(TMPro_TMP_FontAsset_o **)((long)UVar26 + 0x108))->fields).m_SourceFontFile;
          __this_08.rgba = 0;
          __this_08.r = '\0';
          __this_08.g = '\0';
          __this_08.b = '\0';
          __this_08.a = '\0';
          if (pUVar12 == (UnityEngine_Font_o *)0x0) goto label_043a2789;
          *(undefined8 *)(puVar30 + -0x40) = 0x43a254f;
          unaff_R13 = (UnityEngine_Color32_Fields)
                      System_String__Trim((System_String_o *)pUVar12,(MethodInfo *)0x0);
          UVar22.rgba = 5;
          UVar22.r = '\0';
          UVar22.g = '\0';
          UVar22.b = '\0';
          UVar22.a = '\0';
          *(undefined8 *)(puVar30 + -0x40) = 0x43a2566;
          __this_08 = TypeInfo_string;
          values = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_022b2a40();
          UVar24 = "<color=";
          if (values == (UnityEngine_Color32_Fields)0x0) goto label_043a2789;
          __this_06 = UVar22;
          a = values;
          if (*(int *)((long)values + 0x18) != 0) {
            __this_08 = (UnityEngine_Color32_Fields)((long)values + 0x20);
            *(UnityEngine_Color32_Fields *)((long)values + 0x20) = "<color=";
            *(undefined8 *)(puVar30 + -0x40) = 0x43a2593;
            il2cpp_runtime_helper_022b4080();
            __this_06 = UVar24;
            if (1 < *(uint *)((long)values + 0x18)) {
              __this_08 = (UnityEngine_Color32_Fields)((long)values + 0x28);
              *(UnityEngine_Color32_Fields *)((long)values + 0x28) = __this_05;
              *(undefined8 *)(puVar30 + -0x40) = 0x43a25ae;
              __this_06 = __this_05;
              il2cpp_runtime_helper_022b4080();
              UVar22 = ">";
              if (2 < *(uint *)((long)values + 0x18)) {
                __this_08 = (UnityEngine_Color32_Fields)((long)values + 0x30);
                *(UnityEngine_Color32_Fields *)((long)values + 0x30) = ">";
                *(undefined8 *)(puVar30 + -0x40) = 0x43a25d0;
                il2cpp_runtime_helper_022b4080();
                __this_06 = UVar22;
                if (3 < *(uint *)((long)values + 0x18)) {
                  __this_08 = (UnityEngine_Color32_Fields)((long)values + 0x38);
                  *(UnityEngine_Color32_Fields *)((long)values + 0x38) = unaff_R13;
                  *(undefined8 *)(puVar30 + -0x40) = 0x43a25eb;
                  __this_06 = unaff_R13;
                  il2cpp_runtime_helper_022b4080();
                  if (4 < *(uint *)((long)values + 0x18)) {
                    *(System_String_o **)((long)values + 0x40) = "</color>";
                    *(undefined8 *)(puVar30 + -0x40) = 0x43a2610;
                    il2cpp_runtime_helper_022b4080((System_String_o **)((long)values + 0x40));
label_043a23f1:
                    *(undefined8 *)(puVar30 + -0x40) = 0x43a23f8;
                    a = (UnityEngine_Color32_Fields)
                        System_String__Concat_3af7570((System_String_array *)values,(MethodInfo *)0x0);
label_043a23fb:
                    *(UnityEngine_Color32_Fields *)((long)UVar26 + 0x148) = a;
                    *(undefined8 *)(puVar30 + -0x40) = 0x43a240e;
                    il2cpp_runtime_helper_022b4080(__this,a);
                    UI_CharacterInfoPopup__SetName
                              ((UI_CharacterInfoPopup_o *)UVar26,
                               (System_String_o *)*(UnityEngine_Material_array **)((long)UVar26 + 0x148),
                               method_01);
                    return extraout_RAX_01;
                  }
                }
              }
            }
          }
        }
label_043a278e:
        *(undefined8 *)(puVar30 + -0x40) = 0x43a2793;
        uVar21 = il2cpp_runtime_helper_022b2ca0();
        *(UnityEngine_Color32_Fields *)(puVar30 + -0x40) = unaff_RBP;
        *(UnityEngine_Color32_Fields *)(puVar30 + -0x48) = a;
        *(UI_CharacterInfoHandler_o **)(puVar30 + -0x50) = __this;
        *(UnityEngine_Color32_Fields *)(puVar30 + -0x58) = unaff_R13;
        *(UnityEngine_Color32_Fields *)(puVar30 + -0x60) = UVar26;
        *(UnityEngine_Color32_Fields *)(puVar30 + -0x68) = __this_05;
        *(undefined8 *)(puVar30 + -0x70) = uVar21;
        UVar22 = __this_06;
        if (g_data_057ae315 == '\0') {
          *(undefined8 *)(puVar30 + -0x78) = 0x43a27c6;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
          *(undefined8 *)(puVar30 + -0x78) = 0x43a27d2;
          il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
          *(undefined8 *)(puVar30 + -0x78) = 0x43a27de;
          il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
          *(undefined8 *)(puVar30 + -0x78) = 0x43a27ea;
          il2cpp_runtime_helper_023445d0(&TypeInfo_RoleSpriteHelpers);
          g_data_057ae315 = '\x01';
        }
        *(undefined8 *)(puVar30 + -0x78) = 0x43a27f9;
        bVar15 = UI_CharacterInfoPopup__CanApplySettings
                           ((UI_CharacterInfoPopup_o *)__this_08,(MethodInfo *)UVar22);
        if ((char)bVar15 == '\0') {
          return (UI_CharacterInfoPopup_o *)CONCAT44(extraout_var_00,bVar15);
        }
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          *(undefined8 *)(puVar30 + -0x78) = 0x43a281a;
          il2cpp_runtime_helper_02337ed0();
        }
        if (__this_06 == (UnityEngine_Color32_Fields)0x0) goto label_043a2b1c;
        pIVar25 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40);
        *(undefined8 *)(puVar30 + -0x78) = 0x43a2845;
        bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,pIVar25,
                            MethodInfo_Boolean_ContainsKey);
        if ((char)bVar15 != '\0') {
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            *(undefined8 *)(puVar30 + -0x78) = 0x43a285b;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar25 = *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40);
          *(undefined8 *)(puVar30 + -0x78) = 0x43a2874;
          pIVar25 = ExitGames_Client_Photon_Hashtable__get_Item
                              ((ExitGames_Client_Photon_Hashtable_o *)__this_06,pIVar25,(MethodInfo *)0x0);
          if ((pIVar25 != (Il2CppObject *)0x0) && (UVar22 = UVar26, pIVar25->klass != g_data_057b9c00))
          goto label_043a2b21;
          pTVar13 = *(TMPro_TMP_FontAsset_o **)((long)__this_08 + 0x108);
          if (pTVar13 == (TMPro_TMP_FontAsset_o *)0x0) goto label_043a2b1c;
          *(Il2CppObject **)&(pTVar13->fields).m_FaceInfo.fields.m_DescentLine = pIVar25;
          *(undefined8 *)(puVar30 + -0x78) = 0x43a28b6;
          il2cpp_runtime_helper_022b4080(&(pTVar13->fields).m_FaceInfo.fields.m_DescentLine,pIVar25);
        }
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          *(undefined8 *)(puVar30 + -0x78) = 0x43a28c8;
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar25 = (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
        *(undefined8 *)(puVar30 + -0x78) = 0x43a28e2;
        bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,pIVar25,
                            MethodInfo_Boolean_ContainsKey);
        if ((char)bVar15 != '\0') {
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            *(undefined8 *)(puVar30 + -0x78) = 0x43a28fc;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar25 = (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
          *(undefined8 *)(puVar30 + -0x78) = 0x43a2914;
          UVar22 = (UnityEngine_Color32_Fields)
                   ExitGames_Client_Photon_Hashtable__get_Item
                             ((ExitGames_Client_Photon_Hashtable_o *)__this_06,pIVar25,(MethodInfo *)0x0);
          if (UVar22 != (UnityEngine_Color32_Fields)0x0) {
            if (*(Il2CppClass **)UVar22 != g_data_057b9c00) goto label_043a2b29;
            pTVar13 = *(TMPro_TMP_FontAsset_o **)((long)__this_08 + 0x108);
            a.rgba = 0;
            a.r = '\0';
            a.g = '\0';
            a.b = '\0';
            a.a = '\0';
            UVar26 = UVar22;
            if (pTVar13 == (TMPro_TMP_FontAsset_o *)0x0) {
label_043a2b1c:
              *(undefined8 *)(puVar30 + -0x78) = 0x43a2b21;
              pIVar25 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
              UVar22 = UVar26;
label_043a2b21:
              *(undefined8 *)(puVar30 + -0x78) = 0x43a2b29;
              il2cpp_runtime_helper_022b2fd0(pIVar25);
label_043a2b29:
              *(undefined8 *)(puVar30 + -0x78) = 0x43a2b31;
              il2cpp_runtime_helper_022b2fd0(UVar22);
label_043a2b31:
              *(undefined8 *)(puVar30 + -0x78) = 0x43a2b39;
              UVar26 = a;
              il2cpp_runtime_helper_022b2fd0();
              *(UnityEngine_Color32_Fields *)(puVar30 + -0x78) = a;
              *(UnityEngine_Color32_Fields *)(puVar30 + -0x80) = __this_08;
              *(UnityEngine_Color32_Fields *)(puVar30 + -0x88) = __this_06;
              if (g_data_057ae319 == '\0') {
                *(undefined8 *)(puVar30 + -0x90) = 0x43a2b5d;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057ae319 = '\x01';
              }
              pCVar28 = ((Characters_BaseCharacter_o *)((long)UVar26 + 0x108))->klass;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)(puVar30 + -0x90) = 0x43a2b83;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)(puVar30 + -0x90) = 0x43a2b8f;
              bVar15 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pCVar28,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar15 != '\0') {
                x = *(Characters_BaseMovementSync_o **)((long)UVar26 + 0xb8);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)(puVar30 + -0x90) = 0x43a2bab;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)(puVar30 + -0x90) = 0x43a2bb7;
                bVar15 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar15 != '\0') {
                  x_00 = *(UnityEngine_Object_o **)((long)UVar26 + 0xb0);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    *(undefined8 *)(puVar30 + -0x90) = 0x43a2bd3;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  *(undefined8 *)(puVar30 + -0x90) = 0x43a2bdf;
                  bVar15 = UnityEngine_Object__op_Inequality
                                     (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar15 != '\0') {
                    x_01 = *(GameManagers_InGameManager_o **)((long)UVar26 + 0xa8);
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      *(undefined8 *)(puVar30 + -0x90) = 0x43a2bfb;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar15 = UnityEngine_Object__op_Inequality
                                       ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                    return (UI_CharacterInfoPopup_o *)CONCAT44(extraout_var_02,bVar15);
                  }
                }
              }
              return (UI_CharacterInfoPopup_o *)0x0;
            }
            lVar7 = *(long *)&(pTVar13->fields).m_FaceInfo.fields.m_UnitsPerEM;
            if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0)) {
              pPVar31 = (Photon_Realtime_Player_o *)0x0;
              iVar6 = *(int *)(TypeInfo_RoleSpriteHelpers + 0xe4);
            }
            else {
              pPVar31 = *(Photon_Realtime_Player_o **)(lVar7 + 0x80);
              iVar6 = *(int *)(TypeInfo_RoleSpriteHelpers + 0xe4);
            }
            if (iVar6 == 0) {
              *(undefined8 *)(puVar30 + -0x78) = 0x43a299f;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar30 + -0x78) = 0x43a29ac;
            UVar26 = (UnityEngine_Color32_Fields)
                     PatreonEffects_RoleSpriteHelpers__SanitizePlayerText
                               (pPVar31,(System_String_o *)UVar22,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
              *(undefined8 *)(puVar30 + -0x78) = 0x43a29c7;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar30 + -0x78) = 0x43a29d1;
            pSVar27 = MiscExtensions__StripIllegalRichText((System_String_o *)UVar26,(MethodInfo *)0x0);
            *(undefined8 *)(puVar30 + -0x78) = 0x43a29de;
            Characters_BaseCharacter__set_Name
                      ((Characters_BaseCharacter_o *)pTVar13,pSVar27,(MethodInfo *)0x0);
          }
        }
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          *(undefined8 *)(puVar30 + -0x78) = 0x43a29f7;
          il2cpp_runtime_helper_02337ed0();
        }
        UVar22 = *(UnityEngine_Color32_Fields *)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8);
        *(undefined8 *)(puVar30 + -0x78) = 0x43a2a12;
        bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                            (Il2CppObject *)UVar22,MethodInfo_Boolean_ContainsKey);
        uVar21 = CONCAT44(extraout_var_01,bVar15);
        if ((char)bVar15 != '\0') {
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            *(undefined8 *)(puVar30 + -0x78) = 0x43a2a2c;
            il2cpp_runtime_helper_02337ed0();
          }
          UVar22 = *(UnityEngine_Color32_Fields *)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8);
          *(undefined8 *)(puVar30 + -0x78) = 0x43a2a45;
          a = (UnityEngine_Color32_Fields)
              ExitGames_Client_Photon_Hashtable__get_Item
                        ((ExitGames_Client_Photon_Hashtable_o *)__this_06,(Il2CppObject *)UVar22,
                         (MethodInfo *)0x0);
          uVar21 = 0;
          if (a != (UnityEngine_Color32_Fields)0x0) {
            if (*(Il2CppClass **)a != g_data_057b9c00) goto label_043a2b31;
            pTVar13 = *(TMPro_TMP_FontAsset_o **)((long)__this_08 + 0x108);
            __this_06.rgba = 0;
            __this_06.r = '\0';
            __this_06.g = '\0';
            __this_06.b = '\0';
            __this_06.a = '\0';
            if (pTVar13 == (TMPro_TMP_FontAsset_o *)0x0) goto label_043a2b1c;
            lVar7 = *(long *)&(pTVar13->fields).m_FaceInfo.fields.m_UnitsPerEM;
            if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0)) {
              pPVar31 = (Photon_Realtime_Player_o *)0x0;
              iVar6 = *(int *)(TypeInfo_RoleSpriteHelpers + 0xe4);
            }
            else {
              pPVar31 = *(Photon_Realtime_Player_o **)(lVar7 + 0x80);
              iVar6 = *(int *)(TypeInfo_RoleSpriteHelpers + 0xe4);
            }
            if (iVar6 == 0) {
              *(undefined8 *)(puVar30 + -0x78) = 0x43a2ac1;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar30 + -0x78) = 0x43a2ace;
            pSVar27 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText
                                (pPVar31,(System_String_o *)a,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
              *(undefined8 *)(puVar30 + -0x78) = 0x43a2ae9;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(puVar30 + -0x78) = 0x43a2af3;
            UVar22 = (UnityEngine_Color32_Fields)
                     MiscExtensions__StripIllegalRichText(pSVar27,(MethodInfo *)0x0);
            (pTVar13->fields).m_FaceInfo.fields.m_FaceIndex = UVar22.rgba;
            (pTVar13->fields).m_FaceInfo.fields.field_0x4 = UVar22.r;
            (pTVar13->fields).m_FaceInfo.fields.field_0x5 = UVar22.g;
            (pTVar13->fields).m_FaceInfo.fields.field_0x6 = UVar22.b;
            (pTVar13->fields).m_FaceInfo.fields.field_0x7 = UVar22.a;
            *(undefined8 *)(puVar30 + -0x78) = 0x43a2b06;
            uVar21 = il2cpp_runtime_helper_022b4080(&(pTVar13->fields).m_FaceInfo);
          }
        }
        unaff_RBX = *(Il2CppClass ***)(puVar30 + -0x68);
        character = *(Characters_BaseCharacter_o **)(puVar30 + -0x60);
        unaff_R13 = *(UnityEngine_Color32_Fields *)(puVar30 + -0x58);
        __this = *(UI_CharacterInfoHandler_o **)(puVar30 + -0x50);
        a = *(UnityEngine_Color32_Fields *)(puVar30 + -0x48);
        unaff_RBP = *(UnityEngine_Color32_Fields *)(puVar30 + -0x40);
        puVar30 = puVar30 + -0x38;
        UVar26 = __this_08;
      } while( true );
    }
  }
label_043a0d0b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae310 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Assets_Scripts_Utility_SetItem_2_Characters_Ba);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SetItem_BaseCharacter_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetItem_BaseCharacter_CharacterInfoPopup);
    g_data_057ae310 = '\x01';
  }
  __this_03 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SetItem_BaseCharacter_CharacterInfoPopup);
  System_Collections_Generic_HashSet_object____ctor(__this_03,MethodInfo_HashSet_1_Assets_Scripts_Utility_SetItem_2_Characters_Ba);
  (__this_07->fields).material = (UnityEngine_Material_o *)__this_03;
  il2cpp_runtime_helper_022b4080(&(__this_07->fields).material,__this_03);
  *(undefined8 *)&(__this_07->fields).materialHashCode = 0x3dc083123ee8f5c3;
  (__this_07->fields).m_Version = (System_String_o *)0x3f8000003dc08312;
  *(undefined4 *)&(__this_07->fields).m_SourceFontFileGUID = 0x3dd91687;
  *(undefined4 *)((long)&(__this_07->fields).m_SourceFontFileGUID + 4) = 0x3ebc6a7f;
  *(undefined4 *)&(__this_07->fields).m_SourceFontFile = 0x3db020c5;
  *(undefined4 *)((long)&(__this_07->fields).m_SourceFontFile + 4) = 0x3f800000;
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar18 = (uint)layers->max_length;
    if (uVar18 != 0) {
      lVar7 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar7 + 0x3c);
      if ((uVar18 != 1) && (layers->m_Items[1] = *(int32_t *)(lVar7 + 0x38), 2 < uVar18)) {
        layers->m_Items[2] = *(int32_t *)(lVar7 + 0x10);
        UVar16 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        (__this_07->fields).m_AtlasPopulationMode = (int32_t)UVar16.fields.m_Mask;
        __this_04 = (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SetItem_BaseCharacter_CharacterInfoPopup);
        Assets_Scripts_Utility_SetItem_object__object____ctor
                  (__this_04,(Il2CppObject *)0x0,(Il2CppObject *)0x0,MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
        (__this_07->fields).m_FaceInfo.fields.m_FamilyName = (System_String_o *)__this_04;
        il2cpp_runtime_helper_022b4080(&(__this_07->fields).m_FaceInfo.fields.m_FamilyName);
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_07,(MethodInfo *)0x0);
        return extraout_RAX_00;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae311 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae311 = '\x01';
  }
  pIVar25 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(pIVar25,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = pIVar25;
  pUVar20 = (UI_CharacterInfoPopup_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),pIVar25);
  return pUVar20;
}


// UI.CharacterInfoHandler$$RefreshDict
// il2cpp: void UI_CharacterInfoHandler__RefreshDict (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x439ff40

void UI_CharacterInfoHandler__RefreshDict(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  GameManagers_InGameManager_o *__this_00;
  System_Collections_Generic_IEnumerable_BaseCharacter__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *pAVar5;
  char cVar6;
  bool_conflict bVar7;
  System_Predicate_T__o *match;
  System_Collections_Generic_IEnumerable_BaseCharacter__o *pSVar8;
  Il2CppMethodPointer *ppIVar9;
  Characters_BaseCharacter_o *character;
  UI_CharacterInfoPopup_o *value;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this_01;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  MethodInfo *method_00;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined1 auVar16 [12];
  long local_38;
  
  if (g_data_057ae30f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_SetItem_BaseCharacter_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Key);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetItem_BaseCharacter_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RefreshDict_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae30f = '\x01';
  }
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups;
  plVar15 = &TypeInfo_c;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_SetItem_BaseCharacter_CharacterInfoPopup);
    System_Predicate_object____ctor();
    lVar13 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Predicate_T__o **)(lVar13 + 8) = match;
    il2cpp_runtime_helper_022b4080(lVar13 + 8,match);
  }
  if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere(pSVar2,match,MethodInfo_Int32_RemoveWhere);
    __this_00 = (__this->fields)._inGameManager;
    if ((__this_00 != (GameManagers_InGameManager_o *)0x0) &&
       (pSVar8 = GameManagers_InGameManager__GetAllCharactersEnumerable(__this_00,(MethodInfo *)0x0),
       pSVar8 != (System_Collections_Generic_IEnumerable_BaseCharacter__o *)0x0)) {
      pSVar3 = pSVar8->klass;
      uVar1._0_1_ = (pSVar3->_2).rank;
      uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_IEnumerable_BaseCharacter) {
            ppIVar9 = &pSVar3->vtable[*(int *)((long)&pIVar4->offset + lVar13)].methodPtr;
            goto label_043a0151;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar13);
      }
      ppIVar9 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar8,TypeInfo_IEnumerable_BaseCharacter,0);
label_043a0151:
      plVar15 = (long *)(**ppIVar9)(pSVar8,(MethodInfo *)ppIVar9[1]);
      if (plVar15 == (long *)0x0) goto label_043a036a;
      local_38 = 0;
label_043a0190:
      lVar13 = *plVar15;
      if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
            puVar11 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + lVar13 + 0x138);
            goto label_043a01e3;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IEnumerator,0);
label_043a01e3:
      cVar6 = (*(code *)*puVar11)(plVar15,puVar11[1]);
      if (cVar6 == '\0') goto label_043a0448;
      lVar13 = *plVar15;
      if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IEnumerator_BaseCharacter) {
            puVar11 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + lVar13 + 0x138);
            goto label_043a0253;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IEnumerator_BaseCharacter,0);
label_043a0253:
      character = (Characters_BaseCharacter_o *)(*(code *)*puVar11)(plVar15,puVar11[1]);
      pAVar5 = (__this->fields).mockEntry;
      if (pAVar5 != (Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *)0x0) {
        (pAVar5->fields)._Key_k__BackingField = character;
        il2cpp_runtime_helper_022b4080(&pAVar5->fields,character);
        pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups;
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043a0356;
        bVar7 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar2,(Il2CppObject *)(__this->fields).mockEntry,MethodInfo_Boolean_Contains);
        if ((char)bVar7 == '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)character,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            if (character == (Characters_BaseCharacter_o *)0x0) goto label_043a035b;
            if (*(char *)&(character->fields).FeedVictimName == '\0') {
              value = UI_CharacterInfoHandler__CreateInfoPopup(__this,character,method_00);
              pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups;
              __this_01 = (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SetItem_BaseCharacter_CharacterInfoPopup);
              Assets_Scripts_Utility_SetItem_object__object____ctor
                        (__this_01,(Il2CppObject *)character,(Il2CppObject *)value,MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
              if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043a0360;
              System_Collections_Generic_HashSet_object___Add(pSVar2,(Il2CppObject *)__this_01,MethodInfo_Boolean_Add);
            }
          }
        }
        goto label_043a0190;
      }
      il2cpp_runtime_helper_022b2c90();
label_043a0356:
      il2cpp_runtime_helper_022b2c90();
label_043a035b:
      il2cpp_runtime_helper_022b2c90();
label_043a0360:
      il2cpp_runtime_helper_022b2c90();
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043a036a:
  auVar16 = il2cpp_runtime_helper_022b2c90();
  uVar12 = auVar16._0_8_;
  if (auVar16._8_4_ != 1) {
    local_38 = 0;
    if (plVar15 == (long *)0x0) goto label_043a0546;
    goto label_043a04dd;
  }
  plVar10 = (long *)__cxa_begin_catch();
  local_38 = *plVar10;
  __cxa_end_catch();
label_043a0448:
  if (plVar15 != (long *)0x0) {
    lVar13 = *plVar15;
    if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
          puVar11 = (undefined8 *)
                    (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
          goto label_043a04ad;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_043a04ad:
    (*(code *)*puVar11)(plVar15,puVar11[1]);
  }
  if (local_38 == 0) {
    return;
  }
  do {
    uVar12 = il2cpp_runtime_helper_022fefe0();
    if (plVar15 != (long *)0x0) {
label_043a04dd:
      lVar13 = *plVar15;
      if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
            puVar11 = (undefined8 *)
                      (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
            goto label_043a053d;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar15,TypeInfo_IDisposable,0);
label_043a053d:
      (*(code *)*puVar11)(plVar15,puVar11[1]);
    }
label_043a0546:
    if (local_38 == 0) {
      _Unwind_Resume(uVar12);
    }
    il2cpp_runtime_helper_022fefe0();
  } while( true );
}


// UI.CharacterInfoHandler$$.ctor
// il2cpp: void UI_CharacterInfoHandler___ctor (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x43a0d10

void UI_CharacterInfoHandler___ctor(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Int32_array *layers;
  Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *__this_01;
  Il2CppObject *__this_02;
  
  if (g_data_057ae310 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Assets_Scripts_Utility_SetItem_2_Characters_Ba);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SetItem_BaseCharacter_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SetItem_BaseCharacter_CharacterInfoPopup);
    g_data_057ae310 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SetItem_BaseCharacter_CharacterInfoPopup);
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_Assets_Scripts_Utility_SetItem_2_Characters_Ba);
  (__this->fields)._characterInfoPopups =
       (System_Collections_Generic_HashSet_SetItem_BaseCharacter__CharacterInfoPopup___o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._characterInfoPopups,__this_00);
  (__this->fields).RedColor.fields.r = 0.455;
  (__this->fields).RedColor.fields.g = 0.094;
  (__this->fields).RedColor.fields.b = 0.094;
  (__this->fields).RedColor.fields.a = 1.0;
  (__this->fields).GreenColor.fields.r = 0.106;
  (__this->fields).GreenColor.fields.g = 0.368;
  (__this->fields).GreenColor.fields.b = 0.086;
  (__this->fields).GreenColor.fields.a = 1.0;
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x3c);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x38);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x10);
          UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          (__this->fields).CullMask.fields.m_Mask = (int32_t)UVar3.fields.m_Mask;
          __this_01 = (Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_SetItem_BaseCharacter_CharacterInfoPopup);
          Assets_Scripts_Utility_SetItem_object__object____ctor
                    ((Assets_Scripts_Utility_SetItem_TKey__TValue__o *)__this_01,(Il2CppObject *)0x0,
                     (Il2CppObject *)0x0,MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterInfoPopup);
          (__this->fields).mockEntry = __this_01;
          il2cpp_runtime_helper_022b4080(&(__this->fields).mockEntry);
          UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae311 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae311 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_02;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_02);
  return;
}


