// Type: UI.CharacterInfoHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterInfoHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/CharacterInfoHandler.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterInfoHandler.<>c$$.cctor
// il2cpp: void UI_CharacterInfoHandler___c___cctor (const MethodInfo* method);
// 0x4092e80

void UI_CharacterInfoHandler_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704596 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704596 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.CharacterInfoHandler.<>c$$.ctor
// il2cpp: void UI_CharacterInfoHandler___c___ctor (UI_CharacterInfoHandler___c_o* __this, const MethodInfo* method);
// 0x4092ef0

void UI_CharacterInfoHandler_<>c___ctor(UI_CharacterInfoHandler___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterInfoHandler.<>c$$<RefreshDict>b__14_0
// il2cpp: bool UI_CharacterInfoHandler___c___RefreshDict_b__14_0 (UI_CharacterInfoHandler___c_o* __this, Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o* e, const MethodInfo* method);
// 0x4092f00

bool_conflict
UI_CharacterInfoHandler_<>c__<RefreshDict>b__14_0
          (UI_CharacterInfoHandler___c_o *__this,
          Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *e,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  UI_CharacterInfoPopup_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Object_o *obj;
  undefined8 extraout_RAX;
  
  if (DAT_05704597 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_CharacterInfoPopup_get_Value);
    DAT_05704597 = '\x01';
  }
  if (e != (Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *)0x0) {
    pCVar1 = (e->fields)._Key_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pCVar1,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pCVar1 = (e->fields)._Key_k__BackingField;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_04092fb8;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        return 0;
      }
    }
    __this_00 = (e->fields)._Value_k__BackingField;
    if (__this_00 != (UI_CharacterInfoPopup_o *)0x0) {
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
    }
  }
LAB_04092fb8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoHandler$$Awake
// il2cpp: void UI_CharacterInfoHandler__Awake (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x4090c20

void UI_CharacterInfoHandler__Awake(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  Il2CppClass *pIVar3;
  
  if (DAT_05704591 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05704591 = '\x01';
  }
  pIVar3 = TypeInfo_InGameManager;
  pGVar2 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar2 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      (__this->fields)._inGameManager = pGVar2;
      if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
         ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3)) {
        il2cpp_runtime_glue(&(__this->fields)._inGameManager);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pGVar2,pIVar3);
  }
  (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields)._inGameManager);
  return;
}


// UI.CharacterInfoHandler$$LateUpdate
// il2cpp: void UI_CharacterInfoHandler__LateUpdate (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x4090ce0

/* WARNING: Type propagation algorithm not settling */

void UI_CharacterInfoHandler__LateUpdate(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppClass *__this_01;
  Characters_BaseCharacter_c *pCVar10;
  GameManagers_InGameManager_o *pGVar11;
  void *pvVar12;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Camera_o *pUVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  double dVar17;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  undefined1 auVar18 [16];
  bool bVar19;
  bool bVar20;
  Il2CppRGCTXData *pIVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  bool_conflict bVar25;
  int32_t layerMask;
  Il2CppClass *pIVar26;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *pUVar27;
  _union_329995 method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar28;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  Cameras_InGameCamera_o *pCVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
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
  undefined1 auVar33 [12];
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 extraout_XMM1_Qb_07;
  float fVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o origin;
  UnityEngine_Color_o color;
  UnityEngine_Vector3_o direction;
  UI_CharacterInfoPopup_o *in_stack_fffffffffffffeb8;
  UI_CharacterInfoPopup_o *__this_05;
  Cameras_InGameCamera_o *__this_06;
  undefined4 in_stack_fffffffffffffec8;
  uint uVar37;
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
  _union_329995 _Stack_88;
  Il2CppRGCTXData *pIStack_80;
  _union_329995 _Stack_78;
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
  
  if (DAT_05704592 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterI);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Assets_Scripts_Utility_S);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_CharacterInfoPopup_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    in_XMM1._8_8_ = extraout_XMM1_Qb;
    in_XMM1._0_8_ = extraout_XMM1_Qa;
    DAT_05704592 = '\x01';
  }
  auStack_b8._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_b8._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_b8._16_8_ = (InvokerMethod)0x0;
  UI_CharacterInfoHandler__RefreshDict(__this,method);
  pCVar29 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (pCVar29 != (Cameras_InGameCamera_o *)0x0) {
    bVar22 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if (((pCVar29->klass->_2).naturalAligment < bVar22) ||
       ((pCVar29->klass->_2).typeHierarchy[(ulong)bVar22 - 1] != TypeInfo_InGameCamera)) goto LAB_04091b09;
  }
  __this_06 = pCVar29;
  bVar25 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  uVar37 = 1;
  if ((char)bVar25 == '\0') {
    pCVar29 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pCVar29 == (Cameras_InGameCamera_o *)0x0) goto LAB_04091adc;
    bVar22 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((pCVar29->klass->_2).naturalAligment < bVar22) ||
       ((pCVar29->klass->_2).typeHierarchy[(ulong)bVar22 - 1] != TypeInfo_InGameManager)) {
LAB_04091b09:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pCVar29);
    }
    if ((pCVar29->fields).CurrentCameraMode == 0) goto LAB_04090ede;
    if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
      il2cpp_init_class();
      in_XMM1._8_8_ = extraout_XMM1_Qb_05;
      in_XMM1._0_8_ = extraout_XMM1_Qa_05;
      if (DAT_057045fa == '\0') goto LAB_04091a3e;
LAB_04090ebf:
      iVar5 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
    }
    else {
      if (DAT_057045fa != '\0') goto LAB_04090ebf;
LAB_04091a3e:
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
      in_XMM1._8_8_ = extraout_XMM1_Qb_06;
      in_XMM1._0_8_ = extraout_XMM1_Qa_06;
      DAT_057045fa = '\x01';
      iVar5 = *(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_init_class();
      in_XMM1._8_8_ = extraout_XMM1_Qb_07;
      in_XMM1._0_8_ = extraout_XMM1_Qa_07;
    }
    uVar37 = (uint)*(byte *)(*(long *)(TypeInfo_CustomLogicUIBuiltin + 0xb8) + 0x10);
  }
LAB_04090ede:
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((((lVar9 != 0) && (*(long *)(lVar9 + 0xe0) != 0)) && (*(long *)(lVar9 + 0xe8) != 0)) &&
     ((*(long *)(lVar9 + 0xf8) != 0 &&
      (__this_00 = (System_Collections_Generic_HashSet_object__o *)
                   (__this->fields)._characterInfoPopups,
      __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)))) {
    iVar5 = *(int *)(*(long *)(lVar9 + 0xe0) + 0x14);
    iVar6 = *(int *)(*(long *)(lVar9 + 0xe8) + 0x14);
    iVar7 = *(int *)(*(long *)(lVar9 + 0xf8) + 0x14);
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_48,__this_00,
               MethodInfo_HashSet_1_T__Enumerator_Assets_Scripts_Utility_S);
    auStack_b8._16_8_ = pIStack_38;
    auStack_b8._0_8_ = auStack_48._0_8_;
    auStack_b8._8_8_ = auStack_48._8_8_;
    pIStack_70 = (Il2CppRGCTXData *)&(__this->fields).GreenColor;
    _Stack_78.genericMethod = &(__this->fields).GreenColor.fields.b;
    pIStack_80 = (Il2CppRGCTXData *)&(__this->fields).RedColor;
    _Stack_88.genericMethod = &(__this->fields).RedColor.fields.b;
LAB_04090fd0:
    do {
      __this_02.fields._8_8_ = __this_06;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8;
      __this_02.fields._current._0_4_ = in_stack_fffffffffffffec8;
      __this_02.fields._current._4_4_ = uVar37;
      bVar25 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                         (__this_02,(MethodInfo_3185890 *)auStack_b8);
      if ((char)bVar25 == '\0') {
        __this_03.fields._8_8_ = __this_06;
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffeb8
        ;
        __this_03.fields._current._0_4_ = in_stack_fffffffffffffec8;
        __this_03.fields._current._4_4_ = uVar37;
        System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                  (__this_03,(MethodInfo_3185880 *)auStack_b8);
        return;
      }
      if ((Il2CppObject *)auStack_b8._16_8_ == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_01 = ((Il2CppObject *)(auStack_b8._16_8_ + 0x10))->klass;
      in_stack_fffffffffffffeb8 = ((Il2CppObject *)(auStack_b8._16_8_ + 0x10))->monitor;
      bVar24 = 1;
      bVar22 = 1;
      if (iVar5 == 0) {
LAB_040910b0:
        if (iVar6 == 0) goto joined_r0x040910ba;
LAB_04091054:
        if (iVar6 != 2) {
          if (iVar6 != 1) {
LAB_04091082:
            bVar24 = 0;
            goto joined_r0x040910ba;
          }
          if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar25 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0);
          bVar24 = 1;
          if ((char)bVar25 == '\0') goto LAB_04091082;
          goto LAB_040910c0;
        }
        if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar25 = Characters_BaseCharacter__IsMainCharacter
                           ((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0);
        bVar24 = (byte)bVar25 ^ 1;
        if (*(char *)&(__this_01->_1).klass == '\0') goto LAB_0409110f;
LAB_040910c7:
        bVar30 = false;
        if (*(char *)&(__this_01->_1).castClass == '\0') {
          bVar23 = 0;
        }
        else {
          bVar25 = System_String__IsNullOrWhiteSpace
                             ((System_String_o *)(__this_01->_1).element_class,(MethodInfo *)0x0);
          bVar23 = (byte)bVar25 ^ 1;
          if (*(char *)&(__this_01->_1).klass == '\0') goto LAB_04091112;
        }
      }
      else {
        if (iVar5 == 1) {
          if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar25 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0);
          bVar22 = 1;
          if ((char)bVar25 == '\0') goto LAB_040910ad;
          goto LAB_040910b0;
        }
        if (iVar5 != 2) {
LAB_040910ad:
          bVar22 = 0;
          goto LAB_040910b0;
        }
        if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar25 = Characters_BaseCharacter__IsMainCharacter
                           ((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0);
        bVar22 = (byte)bVar25 ^ 1;
        if (iVar6 != 0) goto LAB_04091054;
joined_r0x040910ba:
        if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_040910c0:
        if (*(char *)&(__this_01->_1).klass != '\0') goto LAB_040910c7;
LAB_0409110f:
        bVar23 = 0;
LAB_04091112:
        pCVar10 = (__this_01->_1).image;
        bVar4 = (TypeInfo_BasicTitan->_2).naturalAligment;
        if ((pCVar10->_2).naturalAligment < bVar4) {
          pIVar26 = (Il2CppClass *)0x0;
        }
        else {
          pIVar26 = (Il2CppClass *)0x0;
          if ((pCVar10->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BasicTitan) {
            pIVar26 = __this_01;
          }
        }
        bVar30 = pIVar26 == (Il2CppClass *)0x0;
      }
      if ((bVar24 == 0) || (iVar8 = *(int *)((long)&(__this_01->_1).klass + 4), iVar8 < 2)) {
        bVar15 = false;
        if (iVar7 != 0) goto LAB_04091196;
LAB_04091270:
        bVar24 = 1;
        pGVar11 = (__this->fields)._inGameManager;
      }
      else {
        bVar15 = *(int *)&(__this_01->_1).fields < iVar8;
        if (iVar7 == 0) goto LAB_04091270;
LAB_04091196:
        if (iVar7 == 2) {
          bVar25 = Characters_BaseCharacter__IsMine
                             ((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0);
          bVar24 = (byte)bVar25 ^ 1;
          pGVar11 = (__this->fields)._inGameManager;
        }
        else {
          if ((iVar7 == 1) &&
             (bVar25 = Characters_BaseCharacter__IsMine
                                 ((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0),
             (char)bVar25 != '\0')) goto LAB_04091270;
          bVar24 = 0;
          pGVar11 = (__this->fields)._inGameManager;
        }
      }
      if (pGVar11 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(char *)((long)&(pGVar11->fields)._gameSettingsLoaded + 3) == '\0') {
        lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 0x58);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar9 = *(long *)(lVar9 + 200);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (*(char *)(lVar9 + 0x11) != '\0') goto LAB_04091215;
        bVar25 = Characters_BaseCharacter__IsMainCharacter
                           ((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0);
        bVar20 = bVar15;
        if ((char)bVar25 != '\0') {
          if (__this_06 == (Cameras_InGameCamera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          fVar34 = Cameras_InGameCamera__GetCameraDistance(__this_06,(MethodInfo *)0x0);
          in_XMM1 = ZEXT816(0);
          bVar19 = false;
          if (fVar34 <= 0.0) {
            bVar20 = false;
          }
          if ((bVar22 == 0) || (bVar23 == 0 && !bVar30)) goto LAB_04091217;
          bVar30 = true;
          in_XMM1 = ZEXT816(0);
          if (fVar34 <= 0.0) goto LAB_04091217;
          goto LAB_04091223;
        }
        if (bVar23 == 0 && !bVar30 || bVar22 == 0) goto LAB_04091217;
        bVar30 = true;
        if (uVar37 == 0) goto LAB_04091330;
LAB_0409122d:
        if (in_stack_fffffffffffffeb8 == (UI_CharacterInfoPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*(in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.methodPtr)
                  (in_stack_fffffffffffffeb8,
                   (in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.method);
        in_XMM1._8_8_ = extraout_XMM1_Qb_01;
        in_XMM1._0_8_ = extraout_XMM1_Qa_01;
        goto LAB_04090fd0;
      }
LAB_04091215:
      bVar20 = false;
LAB_04091217:
      bVar19 = (bool)(bVar20 ^ 1);
      bVar30 = false;
      bVar15 = bVar20;
LAB_04091223:
      if (bVar19 || uVar37 != 0) goto LAB_0409122d;
LAB_04091330:
      pvVar12 = (__this_01->_1).interopData;
      if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar27 = *(UnityEngine_Transform_o **)((long)pvVar12 + 0x10);
      if (pUVar27 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar35 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0);
      if (in_stack_fffffffffffffeb8 == (UI_CharacterInfoPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (__this_06 == (Cameras_InGameCamera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar13 = (__this_06->fields).Cache;
      if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar27 = (pUVar13->fields).Transform;
      if (pUVar27 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (in_stack_fffffffffffffeb8->fields).Offset.fields.x;
      uVar3 = (in_stack_fffffffffffffeb8->fields).Offset.fields.y;
      uStack_104 = in_XMM1._4_4_;
      uStack_100 = in_XMM1._8_4_;
      uStack_fc = in_XMM1._12_4_;
      fStack_108 = UVar35.fields.z + (in_stack_fffffffffffffeb8->fields).Offset.fields.z;
      UVar36 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0);
      if (DAT_056fdea6 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fdea6 = '\x01';
        iVar8 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
        __this_05 = in_stack_fffffffffffffeb8;
      }
      else {
        iVar8 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
        __this_05 = in_stack_fffffffffffffeb8;
      }
      if (iVar8 == 0) {
        il2cpp_init_class();
      }
      fStack_e8 = UVar35.fields.x;
      fStack_e4 = UVar35.fields.y;
      fStack_e8 = fStack_e8 + (float)uVar2;
      fStack_e4 = fStack_e4 + (float)uVar3;
      UVar35.fields.y = fStack_e4;
      UVar35.fields.x = fStack_e8;
      fStack_128 = UVar36.fields.x;
      fStack_124 = UVar36.fields.y;
      fVar34 = UVar36.fields.z - fStack_108;
      fStack_d0 = (fStack_128 - fStack_e8) * (fStack_128 - fStack_e8) +
                  (fStack_124 - fStack_e4) * (fStack_124 - fStack_e4) + fVar34 * fVar34;
      if (fStack_d0 < 0.0) {
        fStack_d0 = sqrtf(fStack_d0);
        pfVar1 = &(__this_05->fields).Range;
        if (fStack_d0 < *pfVar1 || fStack_d0 == *pfVar1) goto LAB_04091482;
LAB_040914fb:
        in_stack_fffffffffffffeb8 = __this_05;
        (*(__this_05->klass->vtable)._22_Hide.methodPtr)(__this_05);
        in_XMM1._8_8_ = extraout_XMM1_Qb_02;
        in_XMM1._0_8_ = extraout_XMM1_Qa_02;
        __this_04 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
        if (__this_04 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar25 = UnityEngine_GameObject__get_activeSelf(__this_04,(MethodInfo *)0x0);
        if ((char)bVar25 != '\0') {
          pUVar27 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)in_stack_fffffffffffffeb8,
                               (MethodInfo *)0x0);
          pUVar14 = (__this_06->fields).Camera;
          if (pUVar14 == (UnityEngine_Camera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UVar36.fields.z = fStack_108;
          UVar36.fields.x = fStack_e8;
          UVar36.fields.y = fStack_e4;
          auVar33 = fStack_108._4_12_;
          UVar35 = UnityEngine_Camera__WorldToScreenPoint(pUVar14,UVar36,(MethodInfo *)0x0);
          if (pUVar27 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          auVar18._12_4_ = 0;
          auVar18._0_12_ = auVar33;
          in_XMM1 = auVar18 << 0x20;
          UnityEngine_Transform__set_position(pUVar27,UVar35,(MethodInfo *)0x0);
        }
        goto LAB_04090fd0;
      }
      fStack_d0 = SQRT(fStack_d0);
      pfVar1 = &(__this_05->fields).Range;
      if (*pfVar1 <= fStack_d0 && fStack_d0 != *pfVar1) goto LAB_040914fb;
LAB_04091482:
      pUVar13 = (__this_06->fields).Cache;
      if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar27 = (pUVar13->fields).Transform;
      if (pUVar27 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar36 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0);
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
        iVar8 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
      }
      else {
        iVar8 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
      }
      if (iVar8 == 0) {
        il2cpp_init_class();
      }
      fStack_128 = UVar36.fields.x;
      fStack_124 = UVar36.fields.y;
      auStack_118._0_4_ = fStack_e8 - fStack_128;
      auStack_118._4_4_ = fStack_e4 - fStack_124;
      fVar34 = fStack_108 - UVar36.fields.z;
      fStack_110 = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
      fStack_10c = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
      fVar31 = fVar34 * fVar34 +
               (float)auStack_118._4_4_ * (float)auStack_118._4_4_ +
               (float)auStack_118._0_4_ * (float)auStack_118._0_4_;
      if (fVar31 < 0.0) {
        fVar31 = sqrtf(fVar31);
        uStack_100 = extraout_XMM0_Dc_01;
        uStack_fc = extraout_XMM0_Dd_01;
        if (1e-05 < fVar31) goto LAB_04091657;
LAB_040915f6:
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        _fStack_110 = 0;
        auStack_118 = (undefined1  [8])**(ulong **)(TypeInfo_Vector3 + 0xb8);
        fVar34 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
        pUVar13 = (__this_06->fields).Cache;
      }
      else {
        fVar31 = SQRT(fVar31);
        if (fVar31 <= 1e-05) goto LAB_040915f6;
LAB_04091657:
        fVar34 = fVar34 / fVar31;
        auVar16._4_4_ = fVar31;
        auVar16._0_4_ = fVar31;
        auVar16._8_4_ = uStack_100;
        auVar16._12_4_ = uStack_fc;
        _auStack_118 = divps(_auStack_118,auVar16);
        pUVar13 = (__this_06->fields).Cache;
      }
      if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar27 = (pUVar13->fields).Transform;
      if (pUVar27 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar36 = UnityEngine_Transform__get_forward(pUVar27,(MethodInfo *)0x0);
      fVar31 = UVar36.fields.z;
      uStack_90 = extraout_XMM0_Dc_02;
      auStack_98 = UVar36.fields._0_8_;
      uStack_8c = extraout_XMM0_Dd_02;
      if (DAT_0570266a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_0570266a = '\x01';
        iVar8 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
      }
      else {
        iVar8 = *(int *)((long)&TypeInfo_Math[2].parameters + 4);
      }
      if (iVar8 == 0) {
        il2cpp_init_class();
      }
      fStack_58 = (float)auStack_98._4_4_;
      fStack_54 = (float)auStack_98._4_4_;
      uStack_50 = uStack_90;
      uStack_4c = uStack_8c;
      fStack_68 = (float)auStack_118._4_4_;
      fStack_64 = (float)auStack_118._4_4_;
      uStack_60 = fStack_110;
      uStack_5c = fStack_10c;
      fVar32 = (fVar34 * fVar34 +
               (float)auStack_118._4_4_ * (float)auStack_118._4_4_ +
               (float)auStack_118._0_4_ * (float)auStack_118._0_4_) *
               (fVar31 * fVar31 +
               (float)auStack_98._4_4_ * (float)auStack_98._4_4_ +
               (float)auStack_98._0_4_ * (float)auStack_98._0_4_);
      if (fVar32 < 0.0) {
        fVar32 = sqrtf(fVar32);
        pMVar28 = TypeInfo_Math;
        in_stack_fffffffffffffeb8 = __this_05;
      }
      else {
        fVar32 = SQRT(fVar32);
        pMVar28 = TypeInfo_Math;
        in_stack_fffffffffffffeb8 = __this_05;
      }
      TypeInfo_Math = pMVar28;
      if (fVar32 < 1e-15) {
LAB_04091834:
        bVar25 = Characters_BaseCharacter__IsMainCharacter
                           ((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0);
        pMVar28 = extraout_RDX;
        if ((char)bVar25 == '\0') {
          pUVar13 = (__this_06->fields).Cache;
          if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar27 = (pUVar13->fields).Transform;
          if (pUVar27 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UVar36 = UnityEngine_Transform__get_position(pUVar27,(MethodInfo *)0x0);
          auStack_98._0_4_ = UVar36.fields.z;
          layerMask = UnityEngine_LayerMask__op_Implicit
                                ((UnityEngine_LayerMask_o)(__this->fields).CullMask.fields.m_Mask,
                                 (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          direction.fields._0_8_ = auStack_118;
          origin.fields.z = (float)auStack_98._0_4_;
          origin.fields.x = (float)(int)UVar36.fields._0_8_;
          origin.fields.y = (float)(int)((ulong)UVar36.fields._0_8_ >> 0x20);
          direction.fields.z = fVar34;
          bVar25 = UnityEngine_Physics__Raycast
                             (origin,direction,fStack_d0,layerMask,(MethodInfo *)0x0);
          pMVar28 = extraout_RDX_00;
          if ((char)bVar25 != '\0') {
            (*(in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.methodPtr)
                      (in_stack_fffffffffffffeb8,
                       (in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.method);
            in_XMM1._8_8_ = extraout_XMM1_Qb_03;
            in_XMM1._0_8_ = extraout_XMM1_Qa_03;
            goto LAB_04090fd0;
          }
        }
        if (bVar15) {
          UI_CharacterInfoPopup__ToggleHealthbar(in_stack_fffffffffffffeb8,1,pMVar28);
          bVar25 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)__this_01,(MethodInfo *)0x0);
          method_00 = _Stack_88;
          pIVar21 = pIStack_80;
          if ((char)bVar25 != '\0') {
            method_00 = _Stack_78;
            pIVar21 = pIStack_70;
          }
          color.fields._8_8_ = *(undefined8 *)method_00.genericMethod;
          color.fields._0_8_ = pIVar21->rgctxDataDummy;
          UI_CharacterInfoPopup__SetHealthbar
                    (in_stack_fffffffffffffeb8,*(int32_t *)&(__this_01->_1).fields,
                     *(int32_t *)((long)&(__this_01->_1).klass + 4),color,method_00.genericMethod);
          pMVar28 = extraout_RDX_02;
        }
        else {
          UI_CharacterInfoPopup__ToggleHealthbar(in_stack_fffffffffffffeb8,0,pMVar28);
          pMVar28 = extraout_RDX_01;
        }
        if (bVar30) {
          UI_CharacterInfoPopup__ToggleName(in_stack_fffffffffffffeb8,1,pMVar28);
        }
        else {
          UI_CharacterInfoPopup__ToggleName(in_stack_fffffffffffffeb8,0,pMVar28);
        }
        pUVar14 = (__this_06->fields).Camera;
        if (pUVar14 == (UnityEngine_Camera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UVar35.fields.z = fStack_108;
        UVar35 = UnityEngine_Camera__WorldToScreenPoint(pUVar14,UVar35,(MethodInfo *)0x0);
        pUVar27 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)in_stack_fffffffffffffeb8,(MethodInfo *)0x0)
        ;
        if (pUVar27 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        in_XMM1 = ZEXT416(0);
        UnityEngine_Transform__set_position(pUVar27,UVar35,(MethodInfo *)0x0);
        if (bVar24 == 0) {
          (*(in_stack_fffffffffffffeb8->klass->vtable)._21_Show.methodPtr)
                    (in_stack_fffffffffffffeb8,
                     (in_stack_fffffffffffffeb8->klass->vtable)._21_Show.method);
          in_XMM1._8_8_ = extraout_XMM1_Qb_04;
          in_XMM1._0_8_ = extraout_XMM1_Qa_04;
        }
        else {
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)in_stack_fffffffffffffeb8,(MethodInfo *)0x0)
          ;
        }
        goto LAB_04090fd0;
      }
      if (*(int *)((long)&pMVar28[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      fVar32 = (fVar31 * fVar34 +
               fStack_68 * fStack_58 + (float)auStack_118._0_4_ * (float)auStack_98._0_4_) / fVar32;
      fVar31 = 1.0;
      if (fVar32 <= 1.0) {
        fVar31 = fVar32;
      }
      dVar17 = acos((double)(float)(~-(uint)(-1.0 <= fVar32) & 0xbf800000 |
                                   (uint)fVar31 & -(uint)(-1.0 <= fVar32)),pMVar28);
      if ((float)dVar17 * 57.29578 <= 90.0) goto LAB_04091834;
      (*(in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.methodPtr)
                (in_stack_fffffffffffffeb8,
                 (in_stack_fffffffffffffeb8->klass->vtable)._55_HideImmediate.method);
      in_XMM1._8_8_ = extraout_XMM1_Qb_00;
      in_XMM1._0_8_ = extraout_XMM1_Qa_00;
    } while( true );
  }
LAB_04091adc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoHandler$$CreateInfoPopup
// il2cpp: UI_CharacterInfoPopup_o* UI_CharacterInfoHandler__CreateInfoPopup (UI_CharacterInfoHandler_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x4092860

UI_CharacterInfoPopup_o *
UI_CharacterInfoHandler__CreateInfoPopup
          (UI_CharacterInfoHandler_o *__this,Characters_BaseCharacter_o *character,
          MethodInfo *method)

{
  float fVar1;
  long lVar2;
  int32_t iVar3;
  undefined8 *puVar4;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  UI_CharacterInfoPopup_o *__this_01;
  Characters_BaseCharacter_c *pCVar5;
  byte bVar6;
  MethodInfo *method_00;
  byte bVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o offset;
  float local_40;
  float local_3c;
  undefined8 local_38;
  
  if (DAT_05704593 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAndSetupPanel_CharacterInf);
    il2cpp_init_method_metadata(&MethodInfo_CharacterInfoPopup_GetComponent_CharacterInfoPop);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Prefabs/InGame/CharacterInfoPopup");
    DAT_05704593 = '\x01';
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  local_38 = *puVar4;
  local_40 = *(float *)(puVar4 + 1);
  if (character == (Characters_BaseCharacter_o *)0x0) {
    local_3c = 250.0;
  }
  else {
    pCVar5 = character->klass;
    bVar6 = (pCVar5->_2).naturalAligment;
    bVar7 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar6 < bVar7) || ((pCVar5->_2).typeHierarchy[(ulong)bVar7 - 1] != TypeInfo_Human)) {
      bVar7 = (TypeInfo_BasicTitan->_2).naturalAligment;
      local_3c = 250.0;
      if ((bVar6 < bVar7) || ((pCVar5->_2).typeHierarchy[(ulong)bVar7 - 1] != TypeInfo_BasicTitan)) {
        bVar7 = (TypeInfo_BaseShifter->_2).naturalAligment;
        if ((bVar6 < bVar7) || ((pCVar5->_2).typeHierarchy[(ulong)bVar7 - 1] != TypeInfo_BaseShifter))
        goto LAB_04092b3c;
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
          puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
          pCVar5 = character->klass;
          bVar6 = (pCVar5->_2).naturalAligment;
          bVar7 = (TypeInfo_BaseShifter->_2).naturalAligment;
        }
        if ((bVar6 < bVar7) || ((pCVar5->_2).typeHierarchy[(ulong)bVar7 - 1] != TypeInfo_BaseShifter)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(character);
        }
        fVar8 = (float)puVar4[3] * 57.0;
        fVar9 = (float)((ulong)puVar4[3] >> 0x20) * 57.0;
        local_40 = *(float *)(puVar4 + 4) * 57.0;
      }
      else {
        iVar3 = character[2].fields.CustomDamage;
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
          puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        }
        fVar8 = (float)puVar4[3];
        fVar9 = (float)((ulong)puVar4[3] >> 0x20);
        if ((char)iVar3 == '\0') {
          fVar8 = fVar8 * 20.0;
          fVar9 = fVar9 * 20.0;
          local_40 = *(float *)(puVar4 + 4) * 20.0;
        }
        else {
          fVar8 = fVar8 * 5.0;
          fVar9 = fVar9 * 5.0;
          local_40 = *(float *)(puVar4 + 4) * 5.0;
        }
      }
      fVar1 = *(float *)((long)&character[1].fields.m_CachedPtr + 4);
      local_40 = local_40 * fVar1;
      local_38 = CONCAT44(fVar1 * fVar9,fVar1 * fVar8);
    }
    else {
      if (DAT_056fde1f == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
        puVar4 = *(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0xf0), lVar2 == 0)) goto LAB_04092bb0;
      fVar8 = (float)puVar4[3];
      fVar9 = (float)((ulong)puVar4[3] >> 0x20);
      local_38 = CONCAT44(fVar9 + fVar9,fVar8 + fVar8);
      local_40 = *(float *)(puVar4 + 4) + *(float *)(puVar4 + 4);
      local_3c = (float)*(int *)(lVar2 + 0x14);
    }
  }
LAB_04092b3c:
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  __this_00 = UI_ElementFactory__InstantiateAndSetupPanel<object>
                        (parent,"Prefabs/InGame/CharacterInfoPopup",0,MethodInfo_GameObject_InstantiateAndSetupPanel_CharacterInf);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = (UI_CharacterInfoPopup_o *)
                  UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_CharacterInfoPopup_GetComponent_CharacterInfoPop),
     __this_01 != (UI_CharacterInfoPopup_o *)0x0)) {
    offset.fields.z = local_40;
    offset.fields.x = (float)(undefined4)local_38;
    offset.fields.y = (float)local_38._4_4_;
    UI_CharacterInfoPopup__Load(__this_01,character,offset,local_3c,method_00);
    return __this_01;
  }
LAB_04092bb0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoHandler$$RefreshDict
// il2cpp: void UI_CharacterInfoHandler__RefreshDict (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x4091fd0

/* WARNING: Removing unreachable block (ram,0x040925ec) */

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
  VirtualInvokeData *pVVar9;
  long *plVar10;
  undefined8 *puVar11;
  Characters_BaseCharacter_o *character;
  UI_CharacterInfoPopup_o *value;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this_01;
  MethodInfo *method_00;
  long lVar12;
  long lVar13;
  
  if (DAT_05704594 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveWhere);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_SetItem_BaseCharacter__CharacterInfoPo);
    il2cpp_init_method_metadata(&MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterI);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Key);
    il2cpp_init_method_metadata(&TypeInfo_SetItem_BaseCharacter__CharacterInfoPopup);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RefreshDict_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704594 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._characterInfoPopups;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_SetItem_BaseCharacter__CharacterInfoPo);
    System_Predicate<object>___ctor();
    lVar12 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Predicate_T__o **)(lVar12 + 8) = match;
    il2cpp_runtime_glue(lVar12 + 8,match);
  }
  if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__RemoveWhere(pSVar2,match,MethodInfo_Int32_RemoveWhere);
    __this_00 = (__this->fields)._inGameManager;
    if ((__this_00 != (GameManagers_InGameManager_o *)0x0) &&
       (pSVar8 = GameManagers_InGameManager__GetAllCharactersEnumerable(__this_00,(MethodInfo *)0x0)
       , pSVar8 != (System_Collections_Generic_IEnumerable_BaseCharacter__o *)0x0)) {
      pSVar3 = pSVar8->klass;
      uVar1._0_1_ = (pSVar3->_2).rank;
      uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IEnumerable_BaseCharacter) {
            pVVar9 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
            goto LAB_040921e1;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar12);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerable_BaseCharacter,0);
LAB_040921e1:
      plVar10 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar12 = *plVar10;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IEnumerator) {
              puVar11 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + lVar12 +
                        0x138);
              goto LAB_04092273;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IEnumerator,0);
LAB_04092273:
        cVar6 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if (cVar6 == '\0') {
          if (plVar10 == (long *)0x0) {
            return;
          }
          lVar12 = *plVar10;
          if ((ulong)*(ushort *)(lVar12 + 0x12e) == 0) goto LAB_0409251f;
          lVar13 = 0;
          goto LAB_04092510;
        }
        lVar12 = *plVar10;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IEnumerator_BaseCharacter) {
              puVar11 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + lVar12 +
                        0x138);
              goto LAB_040922e3;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IEnumerator_BaseCharacter,0);
LAB_040922e3:
        character = (Characters_BaseCharacter_o *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        pAVar5 = (__this->fields).mockEntry;
        if (pAVar5 == (Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (pAVar5->fields)._Key_k__BackingField = character;
        il2cpp_runtime_glue(&pAVar5->fields,character);
        pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                 (__this->fields)._characterInfoPopups;
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar7 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar2,(Il2CppObject *)(__this->fields).mockEntry,MethodInfo_Boolean_Contains);
        if ((char)bVar7 == '\0') {
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar7 = UnityEngine_Object__op_Implicit
                            ((UnityEngine_Object_o *)character,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            if (character == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (*(char *)&(character->fields).FeedVictimName == '\0') {
              value = UI_CharacterInfoHandler__CreateInfoPopup(__this,character,method_00);
              pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                       (__this->fields)._characterInfoPopups;
              __this_01 = (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)
                          il2cpp_runtime_glue(TypeInfo_SetItem_BaseCharacter__CharacterInfoPopup);
              Assets_Scripts_Utility_SetItem<object__object>___ctor
                        (__this_01,(Il2CppObject *)character,(Il2CppObject *)value,MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterI);
              if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_HashSet<object>__Add
                        (pSVar2,(Il2CppObject *)__this_01,MethodInfo_Boolean_Add);
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar13 = lVar13 + 0x10, (ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13) {
LAB_04092510:
    if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
      puVar11 = (undefined8 *)
                (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
      goto LAB_0409253d;
    }
  }
LAB_0409251f:
  puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IDisposable,0);
LAB_0409253d:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  return;
}


// UI.CharacterInfoHandler$$.ctor
// il2cpp: void UI_CharacterInfoHandler___ctor (UI_CharacterInfoHandler_o* __this, const MethodInfo* method);
// 0x4092d10

void UI_CharacterInfoHandler___ctor(UI_CharacterInfoHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Int32_array *layers;
  Assets_Scripts_Utility_SetItem_BaseCharacter__CharacterInfoPopup__o *__this_01;
  
  if (DAT_05704595 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Assets_Scripts_Utility_SetItem_2_Chara);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_SetItem_BaseCharacter__CharacterInfoPopu);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterI);
    il2cpp_init_method_metadata(&TypeInfo_SetItem_BaseCharacter__CharacterInfoPopup);
    DAT_05704595 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_SetItem_BaseCharacter__CharacterInfoPopu);
  System_Collections_Generic_HashSet<object>___ctor(__this_00,MethodInfo_HashSet_1_Assets_Scripts_Utility_SetItem_2_Chara);
  (__this->fields)._characterInfoPopups =
       (System_Collections_Generic_HashSet_SetItem_BaseCharacter__CharacterInfoPopup___o *)__this_00
  ;
  il2cpp_runtime_glue(&(__this->fields)._characterInfoPopups,__this_00);
  (__this->fields).RedColor.fields.r = 0.455;
  (__this->fields).RedColor.fields.g = 0.094;
  (__this->fields).RedColor.fields.b = 0.094;
  (__this->fields).RedColor.fields.a = 1.0;
  (__this->fields).GreenColor.fields.r = 0.106;
  (__this->fields).GreenColor.fields.g = 0.368;
  (__this->fields).GreenColor.fields.b = 0.086;
  (__this->fields).GreenColor.fields.a = 1.0;
  layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
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
                      il2cpp_runtime_glue(TypeInfo_SetItem_BaseCharacter__CharacterInfoPopup);
          Assets_Scripts_Utility_SetItem<object__object>___ctor
                    ((Assets_Scripts_Utility_SetItem_TKey__TValue__o *)__this_01,(Il2CppObject *)0x0
                     ,(Il2CppObject *)0x0,MethodInfo_SetItem_2_Characters_BaseCharacter_UI_CharacterI);
          (__this->fields).mockEntry = __this_01;
          il2cpp_runtime_glue(&(__this->fields).mockEntry);
          UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


