// Type: GameManagers.CharacterEditorGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/CharacterEditorGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/CharacterEditorGameManager.cs
// --------------------------------

// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9___ctor (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4543720

void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9___ctor
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$System.IDisposable.Dispose
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_IDisposable_Dispose (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x4543a60

void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_IDisposable_Dispose
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  undefined1 in_stack_00000008 [24];
  
  uVar1 = (__this->fields).__1__state + 3;
  if ((uVar1 < 0x12) && ((0x30001U >> (uVar1 & 0x1f) & 1) != 0)) {
    if (g_data_057aef4d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      g_data_057aef4d = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
               (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap3);
    return;
  }
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$MoveNext
// il2cpp: bool GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__MoveNext (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x4543ac0

bool_conflict
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__MoveNext
          (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  GameManagers_CharacterEditorGameManager_o *pGVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Characters_DummyHuman_o *pCVar5;
  Characters_HumanSetup_o *pCVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  Il2CppClass *pIVar7;
  bool_conflict bVar8;
  uint uVar9;
  bool_conflict extraout_EAX;
  Settings_HumanCustomSet_o *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  undefined8 *puVar12;
  System_String_o *pSVar13;
  UnityEngine_WaitForSeconds_o *__this_04;
  System_Collections_Generic_List_object__o *__this_05;
  Il2CppObject *pIVar14;
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *pGVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  int iVar19;
  int iVar20;
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *pGVar21;
  long lVar22;
  GameManagers_CharacterEditorGameManager_o *pGVar23;
  UnityEngine_Quaternion_o value;
  undefined1 auVar24 [12];
  undefined4 in_stack_ffffffffffffffb0;
  undefined4 in_stack_ffffffffffffffb4;
  int32_t in_stack_ffffffffffffffb8;
  int32_t in_stack_ffffffffffffffbc;
  Il2CppObject *in_stack_ffffffffffffffc0;
  
  pGVar21 = __this;
  pGVar15 = __this;
  if (g_data_057aef4c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForEndOfFrame);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    il2cpp_runtime_helper_023445d0(&"BackNone");
    il2cpp_runtime_helper_023445d0(&"CostumeM");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"CostumeF");
    il2cpp_runtime_helper_023445d0(&"PresetNone");
    il2cpp_runtime_helper_023445d0(&"HatNone");
    il2cpp_runtime_helper_023445d0(&"Face");
    il2cpp_runtime_helper_023445d0(&"HairM8");
    il2cpp_runtime_helper_023445d0(&"Head");
    il2cpp_runtime_helper_023445d0(&"Glass");
    il2cpp_runtime_helper_023445d0(&"HairF");
    il2cpp_runtime_helper_023445d0(&"HeadNone");
    il2cpp_runtime_helper_023445d0(&"HairF7");
    il2cpp_runtime_helper_023445d0(&"GlassNone");
    il2cpp_runtime_helper_023445d0(&"Eye");
    il2cpp_runtime_helper_023445d0(&"FaceNone");
    il2cpp_runtime_helper_023445d0(&"Preset");
    il2cpp_runtime_helper_023445d0(&"HairM10");
    il2cpp_runtime_helper_023445d0(&"Hat");
    pGVar21 = (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *)&"HairM";
    il2cpp_runtime_helper_023445d0();
    g_data_057aef4c = '\x01';
    in_RDX = extraout_RDX;
  }
  uVar9 = (__this->fields).__1__state;
  if (0xe < uVar9) {
    return 0;
  }
  pGVar2 = (__this->fields).__4__this;
  iVar19 = (int)__this;
  switch(uVar9) {
  case 0:
    (__this->fields).__1__state = -1;
    pSVar10 = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanCustomSet);
    Settings_HumanCustomSet___ctor(pSVar10,(MethodInfo *)0x0);
    (pGVar15->fields)._set_5__2 = pSVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar15->fields)._set_5__2,pSVar10);
    pSVar10 = (pGVar15->fields)._set_5__2;
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) {
label_045454be:
      il2cpp_runtime_helper_022b2c90();
label_045454c3:
      il2cpp_runtime_helper_022b2c90();
label_045454c8:
      il2cpp_runtime_helper_022b2c90();
label_045454cd:
      il2cpp_runtime_helper_022b2c90();
label_045454d2:
      il2cpp_runtime_helper_022b2c90();
label_045454d7:
      il2cpp_runtime_helper_022b2c90();
label_045454dc:
      il2cpp_runtime_helper_022b2c90();
label_045454e1:
      il2cpp_runtime_helper_022b2c90();
label_045454e6:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar3 = (pSVar10->fields).Hair;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_045454c3;
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar3,"HairM8",MethodInfo_Void_set_Value)
      ;
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_045454e6;
      pSVar4 = (pSVar10->fields).Costume;
      if (pSVar4 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar4,1,MethodInfo_Void_set_Value);
        (pGVar15->fields)._i_5__3 = 0;
        iVar20 = 0;
        iVar19 = 0;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) != 0) goto label_04544b0c;
        goto label_04543d55;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_045454f0:
    il2cpp_runtime_helper_022b2c90();
label_045454f5:
    il2cpp_runtime_helper_022b2c90();
label_045454fa:
    il2cpp_runtime_helper_022b2c90();
label_045454ff:
    il2cpp_runtime_helper_022b2c90();
label_04545504:
    il2cpp_runtime_helper_022b2c90();
label_04545509:
    il2cpp_runtime_helper_022b2c90();
label_0454550e:
    il2cpp_runtime_helper_022b2c90();
label_04545513:
    il2cpp_runtime_helper_022b2c90();
label_04545518:
    il2cpp_runtime_helper_022b2c90();
label_0454551d:
    il2cpp_runtime_helper_022b2c90();
label_04545522:
    il2cpp_runtime_helper_022b2c90();
label_04545527:
    il2cpp_runtime_helper_022b2c90();
label_0454552c:
    il2cpp_runtime_helper_022b2c90();
label_04545531:
    il2cpp_runtime_helper_022b2c90();
label_04545536:
    il2cpp_runtime_helper_022b2c90();
label_0454553b:
    il2cpp_runtime_helper_022b2c90();
label_04545540:
    il2cpp_runtime_helper_022b2c90();
label_04545545:
    il2cpp_runtime_helper_022b2c90();
label_0454554a:
    il2cpp_runtime_helper_022b2c90();
label_0454554f:
    il2cpp_runtime_helper_022b2c90();
    goto label_04545554;
  case 1:
    (__this->fields).__1__state = -1;
    pSVar13 = System_Int32__ToString(iVar19 + 0x30,(MethodInfo *)0x0);
    pGVar23 = "Eye";
    pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)"Eye",pSVar13,(MethodInfo *)0x0);
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
label_0454549b:
      il2cpp_runtime_helper_022b2c90();
label_045454a0:
      il2cpp_runtime_helper_022b2c90();
label_045454a5:
      il2cpp_runtime_helper_022b2c90();
label_045454aa:
      il2cpp_runtime_helper_022b2c90();
label_045454af:
      il2cpp_runtime_helper_022b2c90();
label_045454b4:
      il2cpp_runtime_helper_022b2c90();
label_045454b9:
      il2cpp_runtime_helper_022b2c90();
      goto label_045454be;
    }
    GameManagers_CharacterEditorGameManager__Screenshot(pGVar23,870.0,500.0,172.0,172.0,pSVar13,method_03);
    iVar20 = (pGVar15->fields)._i_5__3 + 1;
    (pGVar15->fields)._i_5__3 = iVar20;
    iVar19 = iVar20;
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
label_04543d55:
      il2cpp_runtime_helper_02337ed0();
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (iVar20 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x18)) goto label_04544b20;
label_04543d75:
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_045454ff;
      pSVar4 = (pSVar10->fields).Eye;
      if (pSVar4 != (Settings_IntSetting_o *)0x0) {
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar4,0,MethodInfo_Void_set_Value);
        (pGVar15->fields)._i_5__3 = -1;
        iVar19 = -1;
        iVar20 = -1;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) != 0) goto label_04544862;
        goto label_04543dc3;
      }
      goto label_04545504;
    }
label_04544b0c:
    pSVar10 = (pGVar15->fields)._set_5__2;
    if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x18) <= iVar19) goto label_04543d75;
label_04544b20:
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545509;
    pSVar4 = (pSVar10->fields).Eye;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_0454550e;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar4,(pGVar15->fields)._i_5__3,MethodInfo_Void_set_Value);
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_04545559;
    pCVar5 = (pGVar2->fields).Human;
    if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_0454555e;
    pCVar6 = (pCVar5->fields).Setup;
    if (pCVar6 != (Characters_HumanSetup_o *)0x0) {
      Characters_HumanSetup__Load(pCVar6,(pGVar15->fields)._set_5__2,0,0,(MethodInfo *)0x0);
      pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
      (pGVar15->fields).__2__current = pIVar14;
      il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
      (pGVar15->fields).__1__state = 1;
      break;
    }
    goto label_04545563;
  case 2:
    (__this->fields).__1__state = -1;
    pSVar10 = (__this->fields)._set_5__2;
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) {
label_04545441:
      il2cpp_runtime_helper_022b2c90();
label_04545446:
      il2cpp_runtime_helper_022b2c90();
label_0454544b:
      il2cpp_runtime_helper_022b2c90();
label_04545450:
      il2cpp_runtime_helper_022b2c90();
label_04545455:
      il2cpp_runtime_helper_022b2c90();
label_0454545a:
      il2cpp_runtime_helper_022b2c90();
label_0454545f:
      il2cpp_runtime_helper_022b2c90();
label_04545464:
      il2cpp_runtime_helper_022b2c90();
label_04545469:
      il2cpp_runtime_helper_022b2c90();
label_0454546e:
      il2cpp_runtime_helper_022b2c90();
label_04545473:
      il2cpp_runtime_helper_022b2c90();
label_04545478:
      il2cpp_runtime_helper_022b2c90();
label_0454547d:
      il2cpp_runtime_helper_022b2c90();
label_04545482:
      il2cpp_runtime_helper_022b2c90();
label_04545487:
      il2cpp_runtime_helper_022b2c90();
label_0454548c:
      il2cpp_runtime_helper_022b2c90();
label_04545491:
      il2cpp_runtime_helper_022b2c90();
label_04545496:
      il2cpp_runtime_helper_022b2c90();
      goto label_0454549b;
    }
    pSVar3 = (pSVar10->fields).Face;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_04545446;
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_0454544b;
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar21,870.0,470.0,172.0,172.0,
               (pSVar3->fields)._value,in_RDX);
    iVar20 = (pGVar15->fields)._i_5__3 + 1;
    (pGVar15->fields)._i_5__3 = iVar20;
    iVar19 = iVar20;
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
label_04543dc3:
      il2cpp_runtime_helper_02337ed0(TypeInfo_HumanSetup);
      if (iVar20 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x1c)) goto label_04544872;
label_04543de2:
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_045454d2;
      pSVar3 = (pSVar10->fields).Face;
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,"FaceNone",MethodInfo_Void_set_Value);
        (pGVar15->fields)._i_5__3 = -1;
        iVar20 = -1;
        iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
        goto joined_r0x0454493b;
      }
      goto label_045454d7;
    }
label_04544862:
    if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x1c) <= iVar19) goto label_04543de2;
label_04544872:
    pSVar10 = (pGVar15->fields)._set_5__2;
    if ((pGVar15->fields)._i_5__3 != -1) {
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545617;
      pSVar3 = (pSVar10->fields).Face;
      pSVar13 = System_Int32__ToString((int)pGVar15 + 0x30,(MethodInfo *)0x0);
      pSVar13 = System_String__Concat_3ae5ba0("Face",pSVar13,(MethodInfo *)0x0);
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar13,MethodInfo_Void_set_Value);
        goto label_0454503e;
      }
      goto label_04545630;
    }
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545653;
    pSVar3 = (pSVar10->fields).Face;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar3,"FaceNone",MethodInfo_Void_set_Value)
      ;
label_0454503e:
      if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_0454559f;
      pCVar5 = (pGVar2->fields).Human;
      if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_045455a4;
      pCVar6 = (pCVar5->fields).Setup;
      if (pCVar6 != (Characters_HumanSetup_o *)0x0) {
        Characters_HumanSetup__Load(pCVar6,(pGVar15->fields)._set_5__2,0,0,(MethodInfo *)0x0);
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
        (pGVar15->fields).__2__current = pIVar14;
        il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
        (pGVar15->fields).__1__state = 2;
        break;
      }
      goto label_045455a9;
    }
    goto label_04545658;
  case 3:
    (__this->fields).__1__state = -1;
    pSVar10 = (__this->fields)._set_5__2;
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545450;
    pSVar3 = (pSVar10->fields).Glass;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_04545455;
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_0454545a;
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar21,870.0,500.0,172.0,172.0,
               (pSVar3->fields)._value,in_RDX);
    iVar20 = (pGVar15->fields)._i_5__3 + 1;
    (pGVar15->fields)._i_5__3 = iVar20;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x0454493b:
    if (iVar19 == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_HumanSetup);
      if (iVar20 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x20)) goto label_04544951;
label_04543e5b:
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_045454c8;
      pSVar3 = (pSVar10->fields).Glass;
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,"GlassNone",MethodInfo_Void_set_Value);
        (pGVar15->fields)._i_5__3 = 0;
        iVar20 = 0;
        iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
        goto joined_r0x04544509;
      }
      goto label_045454cd;
    }
    if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x20) <= iVar20) goto label_04543e5b;
label_04544951:
    pSVar10 = (pGVar15->fields)._set_5__2;
    if ((pGVar15->fields)._i_5__3 != -1) {
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545612;
      pSVar3 = (pSVar10->fields).Glass;
      pSVar13 = System_Int32__ToString((int)pGVar15 + 0x30,(MethodInfo *)0x0);
      pSVar13 = System_String__Concat_3ae5ba0("Glass",pSVar13,(MethodInfo *)0x0);
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar13,MethodInfo_Void_set_Value);
        goto label_04544f98;
      }
      goto label_0454562b;
    }
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545649;
    pSVar3 = (pSVar10->fields).Glass;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar3,"GlassNone",MethodInfo_Void_set_Value)
      ;
label_04544f98:
      if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_04545568;
      pCVar5 = (pGVar2->fields).Human;
      if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_0454556d;
      pCVar6 = (pCVar5->fields).Setup;
      if (pCVar6 != (Characters_HumanSetup_o *)0x0) {
        Characters_HumanSetup__Load(pCVar6,(pGVar15->fields)._set_5__2,0,0,(MethodInfo *)0x0);
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
        (pGVar15->fields).__2__current = pIVar14;
        il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
        (pGVar15->fields).__1__state = 3;
        break;
      }
      goto label_04545572;
    }
    goto label_0454564e;
  case 4:
    (__this->fields).__1__state = -1;
    pSVar10 = (__this->fields)._set_5__2;
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) {
label_04545423:
      il2cpp_runtime_helper_022b2c90();
label_04545428:
      il2cpp_runtime_helper_022b2c90();
label_0454542d:
      il2cpp_runtime_helper_022b2c90();
label_04545432:
      il2cpp_runtime_helper_022b2c90();
label_04545437:
      il2cpp_runtime_helper_022b2c90();
label_0454543c:
      il2cpp_runtime_helper_022b2c90();
      goto label_04545441;
    }
    pSVar3 = (pSVar10->fields).Hair;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_04545428;
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_0454542d;
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar21,816.0,510.0,280.0,280.0,
               (pSVar3->fields)._value,in_RDX);
    iVar20 = (pGVar15->fields)._i_5__3 + 1;
    (pGVar15->fields)._i_5__3 = iVar20;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x04544509:
    if (iVar19 == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_HumanSetup);
      iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x2c);
      lVar18 = TypeInfo_HumanSetup;
    }
    else {
      iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x2c);
      lVar18 = TypeInfo_HumanSetup;
    }
    TypeInfo_HumanSetup = lVar18;
    if (iVar19 <= iVar20) {
      (pGVar15->fields)._i_5__3 = 0;
      iVar19 = 0;
      iVar20 = 0;
      if (*(int *)(lVar18 + 0xe4) != 0) goto label_04544cbf;
label_04543ee7:
      il2cpp_runtime_helper_02337ed0(lVar18);
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (iVar20 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x30)) goto label_04544cd3;
label_04543f11:
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_045454a0;
      pSVar3 = (pSVar10->fields).Hair;
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,"HairM10",MethodInfo_Void_set_Value);
        (pGVar15->fields)._i_5__3 = -1;
        iVar20 = -1;
        iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
        goto joined_r0x04544a1d;
      }
      goto label_045454a5;
    }
    pSVar10 = (pGVar15->fields)._set_5__2;
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_045454b9;
    pSVar3 = (pSVar10->fields).Hair;
    pSVar13 = System_Int32__ToString((int)pGVar15 + 0x30,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat_3ae5ba0("HairM",pSVar13,(MethodInfo *)0x0);
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_0454552c;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar13,MethodInfo_Void_set_Value);
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_045455ae;
    pCVar5 = (pGVar2->fields).Human;
    if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_045455b3;
    pCVar6 = (pCVar5->fields).Setup;
    if (pCVar6 != (Characters_HumanSetup_o *)0x0) {
      Characters_HumanSetup__Load(pCVar6,(pGVar15->fields)._set_5__2,0,0,(MethodInfo *)0x0);
      pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
      (pGVar15->fields).__2__current = pIVar14;
      il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
      (pGVar15->fields).__1__state = 4;
      break;
    }
    goto label_045455b8;
  case 5:
    (__this->fields).__1__state = -1;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
    (pGVar15->fields).__2__current = pIVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
    (pGVar15->fields).__1__state = 6;
    break;
  case 6:
    (__this->fields).__1__state = -1;
    pSVar10 = (__this->fields)._set_5__2;
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_0454546e;
    pSVar3 = (pSVar10->fields).Hair;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_04545473;
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_04545478;
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar21,816.0,510.0,280.0,280.0,
               (pSVar3->fields)._value,in_RDX);
    iVar20 = (pGVar15->fields)._i_5__3 + 1;
    (pGVar15->fields)._i_5__3 = iVar20;
    lVar18 = TypeInfo_HumanSetup;
    iVar19 = iVar20;
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) goto label_04543ee7;
label_04544cbf:
    pSVar10 = (pGVar15->fields)._set_5__2;
    if (*(int *)(*(long *)(lVar18 + 0xb8) + 0x30) <= iVar19) goto label_04543f11;
label_04544cd3:
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_045454aa;
    pSVar3 = (pSVar10->fields).Hair;
    pSVar13 = System_Int32__ToString((int)pGVar15 + 0x30,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat_3ae5ba0("HairF",pSVar13,(MethodInfo *)0x0);
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_045454fa;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar13,MethodInfo_Void_set_Value);
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_0454554a;
    pCVar5 = (pGVar2->fields).Human;
    if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_0454554f;
    pCVar6 = (pCVar5->fields).Setup;
    if (pCVar6 != (Characters_HumanSetup_o *)0x0) {
      Characters_HumanSetup__Load(pCVar6,(pGVar15->fields)._set_5__2,0,0,(MethodInfo *)0x0);
      pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
      (pGVar15->fields).__2__current = pIVar14;
      il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
      (pGVar15->fields).__1__state = 5;
      break;
    }
label_04545554:
    il2cpp_runtime_helper_022b2c90();
label_04545559:
    il2cpp_runtime_helper_022b2c90();
label_0454555e:
    il2cpp_runtime_helper_022b2c90();
label_04545563:
    il2cpp_runtime_helper_022b2c90();
label_04545568:
    il2cpp_runtime_helper_022b2c90();
label_0454556d:
    il2cpp_runtime_helper_022b2c90();
label_04545572:
    il2cpp_runtime_helper_022b2c90();
label_04545577:
    il2cpp_runtime_helper_022b2c90();
label_0454557c:
    il2cpp_runtime_helper_022b2c90();
label_04545581:
    il2cpp_runtime_helper_022b2c90();
label_04545586:
    il2cpp_runtime_helper_022b2c90();
label_0454558b:
    il2cpp_runtime_helper_022b2c90();
label_04545590:
    il2cpp_runtime_helper_022b2c90();
label_04545595:
    il2cpp_runtime_helper_022b2c90();
label_0454559a:
    il2cpp_runtime_helper_022b2c90();
label_0454559f:
    il2cpp_runtime_helper_022b2c90();
label_045455a4:
    il2cpp_runtime_helper_022b2c90();
label_045455a9:
    il2cpp_runtime_helper_022b2c90();
label_045455ae:
    il2cpp_runtime_helper_022b2c90();
label_045455b3:
    il2cpp_runtime_helper_022b2c90();
label_045455b8:
    il2cpp_runtime_helper_022b2c90();
label_045455bd:
    il2cpp_runtime_helper_022b2c90();
label_045455c2:
    il2cpp_runtime_helper_022b2c90();
label_045455c7:
    il2cpp_runtime_helper_022b2c90();
label_045455cc:
    il2cpp_runtime_helper_022b2c90();
label_045455d1:
    il2cpp_runtime_helper_022b2c90();
label_045455d6:
    il2cpp_runtime_helper_022b2c90();
label_045455db:
    il2cpp_runtime_helper_022b2c90();
label_045455e0:
    il2cpp_runtime_helper_022b2c90();
label_045455e5:
    il2cpp_runtime_helper_022b2c90();
label_045455ea:
    il2cpp_runtime_helper_022b2c90();
label_045455ef:
    il2cpp_runtime_helper_022b2c90();
label_045455f4:
    il2cpp_runtime_helper_022b2c90();
label_045455f9:
    il2cpp_runtime_helper_022b2c90();
label_045455fe:
    il2cpp_runtime_helper_022b2c90();
    pGVar21 = pGVar15;
label_04545603:
    il2cpp_runtime_helper_022b2c90();
label_04545608:
    il2cpp_runtime_helper_022b2c90();
    pGVar15 = pGVar21;
label_0454560d:
    il2cpp_runtime_helper_022b2c90();
label_04545612:
    il2cpp_runtime_helper_022b2c90();
label_04545617:
    il2cpp_runtime_helper_022b2c90();
label_0454561c:
    il2cpp_runtime_helper_022b2c90();
label_04545621:
    il2cpp_runtime_helper_022b2c90();
label_04545626:
    il2cpp_runtime_helper_022b2c90();
label_0454562b:
    il2cpp_runtime_helper_022b2c90();
label_04545630:
    il2cpp_runtime_helper_022b2c90();
label_04545635:
    il2cpp_runtime_helper_022b2c90();
label_0454563a:
    il2cpp_runtime_helper_022b2c90();
label_0454563f:
    il2cpp_runtime_helper_022b2c90();
label_04545644:
    il2cpp_runtime_helper_022b2c90();
label_04545649:
    il2cpp_runtime_helper_022b2c90();
label_0454564e:
    il2cpp_runtime_helper_022b2c90();
label_04545653:
    il2cpp_runtime_helper_022b2c90();
label_04545658:
    il2cpp_runtime_helper_022b2c90();
label_0454565d:
    il2cpp_runtime_helper_022b2c90();
label_04545662:
    il2cpp_runtime_helper_022b2c90();
label_04545667:
    il2cpp_runtime_helper_022b2c90();
label_0454566c:
    auVar24 = il2cpp_runtime_helper_022b2c90();
    uVar17 = auVar24._0_8_;
    if (auVar24._8_4_ == 1) {
      plVar16 = (long *)__cxa_begin_catch(uVar17);
      lVar18 = *plVar16;
      __cxa_end_catch();
      if (lVar18 == 0) {
        return 0;
      }
      il2cpp_runtime_helper_02237470(pGVar15);
      uVar17 = il2cpp_runtime_helper_022fefe0(lVar18);
      if (lVar18 != 0) {
        uVar9 = (pGVar15->fields).__1__state + 3;
        if ((uVar9 < 0x12) && ((0x30001U >> (uVar9 & 0x1f) & 1) != 0)) {
          pGVar21 = pGVar15;
          if (g_data_057aef4d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
            g_data_057aef4d = '\x01';
          }
          (pGVar15->fields).__1__state = -1;
          __this_02.fields._index = in_stack_ffffffffffffffb0;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pGVar21;
          __this_02.fields._version = in_stack_ffffffffffffffb4;
          __this_02.fields._current._0_4_ = in_stack_ffffffffffffffb8;
          __this_02.fields._current._4_4_ = in_stack_ffffffffffffffbc;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&(pGVar15->fields).__7__wrap3);
        }
        lVar18 = il2cpp_runtime_helper_022fefe0(lVar18);
        il2cpp_runtime_helper_01f66400();
        if (g_data_057aef4d == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          g_data_057aef4d = '\x01';
        }
        *(undefined4 *)(lVar18 + 0x10) = 0xffffffff;
        __this_03.fields._list._4_4_ = in_stack_ffffffffffffffb4;
        __this_03.fields._list._0_4_ = in_stack_ffffffffffffffb0;
        __this_03.fields._index = in_stack_ffffffffffffffb8;
        __this_03.fields._version = in_stack_ffffffffffffffbc;
        __this_03.fields._current = in_stack_ffffffffffffffc0;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)(lVar18 + 0x38));
        return extraout_EAX;
      }
    }
    _Unwind_Resume(uVar17);
  case 7:
    (__this->fields).__1__state = -1;
    pSVar10 = (__this->fields)._set_5__2;
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_0454545f;
    pSVar3 = (pSVar10->fields).Hat;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_04545464;
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_04545469;
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar21,796.0,570.0,320.0,320.0,
               (pSVar3->fields)._value,in_RDX);
    iVar20 = (pGVar15->fields)._i_5__3 + 1;
    (pGVar15->fields)._i_5__3 = iVar20;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x04544a1d:
    if (iVar19 == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_HumanSetup);
      if (iVar20 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x3c)) goto label_04544a33;
label_04543f86:
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_045454af;
      pSVar3 = (pSVar10->fields).Hat;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_045454b4;
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar3,"HatNone",MethodInfo_Void_set_Value)
      ;
      if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_045454dc;
      pCVar5 = (pGVar2->fields).Human;
      if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_045454e1;
      pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0);
      value = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Vector3_o)ZEXT812(0xc0490fdb00000000),(MethodInfo *)0x0);
      if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(pUVar11,value,(MethodInfo *)0x0);
        (pGVar15->fields)._i_5__3 = -1;
        iVar20 = -1;
        iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
        goto joined_r0x0454477a;
      }
      goto label_04545590;
    }
    if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x3c) <= iVar20) goto label_04543f86;
label_04544a33:
    pSVar10 = (pGVar15->fields)._set_5__2;
    if ((pGVar15->fields)._i_5__3 != -1) {
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_0454560d;
      pSVar3 = (pSVar10->fields).Hat;
      pSVar13 = System_Int32__ToString((int)pGVar15 + 0x30,(MethodInfo *)0x0);
      pSVar13 = System_String__Concat_3ae5ba0("Hat",pSVar13,(MethodInfo *)0x0);
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar13,MethodInfo_Void_set_Value);
        goto label_04544ef2;
      }
      goto label_04545621;
    }
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_0454563f;
    pSVar3 = (pSVar10->fields).Hat;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar3,"HatNone",MethodInfo_Void_set_Value)
      ;
label_04544ef2:
      if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_0454551d;
      pCVar5 = (pGVar2->fields).Human;
      if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_04545522;
      pCVar6 = (pCVar5->fields).Setup;
      if (pCVar6 != (Characters_HumanSetup_o *)0x0) {
        Characters_HumanSetup__Load(pCVar6,(pGVar15->fields)._set_5__2,0,0,(MethodInfo *)0x0);
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
        (pGVar15->fields).__2__current = pIVar14;
        il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
        (pGVar15->fields).__1__state = 7;
        break;
      }
      goto label_04545527;
    }
    goto label_04545644;
  case 8:
    (__this->fields).__1__state = -1;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
    (pGVar15->fields).__2__current = pIVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
    (pGVar15->fields).__1__state = 9;
    break;
  case 9:
    (__this->fields).__1__state = -1;
    pSVar10 = (__this->fields)._set_5__2;
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545432;
    pSVar3 = (pSVar10->fields).Back;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_04545437;
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_0454543c;
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar21,776.0,300.0,360.0,360.0,
               (pSVar3->fields)._value,in_RDX);
    iVar20 = (pGVar15->fields)._i_5__3 + 1;
    (pGVar15->fields)._i_5__3 = iVar20;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x0454477a:
    if (iVar19 == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_HumanSetup);
      if (iVar20 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x34)) goto label_04544790;
label_04544046:
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_045454f0;
      pSVar3 = (pSVar10->fields).Back;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_045454f5;
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar3,"BackNone",MethodInfo_Void_set_Value)
      ;
      pCVar5 = (pGVar2->fields).Human;
      if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_04545531;
      pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0);
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation
                  (pUVar11,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8)
                   ,(MethodInfo *)0x0);
        (pGVar15->fields)._i_5__3 = -1;
        iVar20 = -1;
        iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
        goto joined_r0x04544e03;
      }
      goto label_045455e5;
    }
    if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x34) <= iVar20) goto label_04544046;
label_04544790:
    pSVar10 = (pGVar15->fields)._set_5__2;
    if ((pGVar15->fields)._i_5__3 != -1) {
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_0454561c;
      pSVar3 = (pSVar10->fields).Back;
      pSVar13 = System_Int32__ToString((int)pGVar15 + 0x30,(MethodInfo *)0x0);
      pSVar13 = System_String__Concat_3ae5ba0("Back",pSVar13,(MethodInfo *)0x0);
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar13,MethodInfo_Void_set_Value);
        goto label_045450e7;
      }
      goto label_04545635;
    }
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_0454565d;
    pSVar3 = (pSVar10->fields).Back;
    if (pSVar3 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar3,"BackNone",MethodInfo_Void_set_Value)
      ;
label_045450e7:
      pCVar5 = (pGVar2->fields).Human;
      if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_045455d1;
      pCVar6 = (pCVar5->fields).Setup;
      if (pCVar6 != (Characters_HumanSetup_o *)0x0) {
        Characters_HumanSetup__Load(pCVar6,(pGVar15->fields)._set_5__2,0,0,(MethodInfo *)0x0);
        __this_04 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(__this_04,1.0,(MethodInfo *)0x0);
        (pGVar15->fields).__2__current = (Il2CppObject *)__this_04;
        il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,__this_04);
        (pGVar15->fields).__1__state = 8;
        break;
      }
      goto label_045455d6;
    }
    goto label_04545662;
  case 10:
    (__this->fields).__1__state = -1;
    pSVar10 = (__this->fields)._set_5__2;
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_0454547d;
    pSVar3 = (pSVar10->fields).Head;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_04545482;
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_04545487;
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar21,801.0,470.0,310.0,310.0,
               (pSVar3->fields)._value,in_RDX);
    iVar20 = (pGVar15->fields)._i_5__3 + 1;
    (pGVar15->fields)._i_5__3 = iVar20;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x04544e03:
    if (iVar19 == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_HumanSetup);
      if (iVar20 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x38)) goto label_04544e19;
label_04544122:
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545513;
      pSVar3 = (pSVar10->fields).Head;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_04545518;
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar3,"HeadNone",MethodInfo_Void_set_Value)
      ;
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545595;
      pSVar3 = (pSVar10->fields).Hair;
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,"HairM8",MethodInfo_Void_set_Value);
        (pGVar15->fields)._i_5__3 = 0;
        iVar20 = 0;
        iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
        goto joined_r0x045443ed;
      }
      goto label_0454559a;
    }
    if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x38) <= iVar20) goto label_04544122;
label_04544e19:
    pSVar10 = (pGVar15->fields)._set_5__2;
    if ((pGVar15->fields)._i_5__3 != -1) {
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545626;
      pSVar3 = (pSVar10->fields).Head;
      pSVar13 = System_Int32__ToString((int)pGVar15 + 0x30,(MethodInfo *)0x0);
      pSVar13 = System_String__Concat_3ae5ba0("Head",pSVar13,(MethodInfo *)0x0);
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar13,MethodInfo_Void_set_Value);
        goto label_0454518f;
      }
      goto label_0454563a;
    }
    if (pSVar10 != (Settings_HumanCustomSet_o *)0x0) {
      pSVar3 = (pSVar10->fields).Head;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_0454566c;
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)pSVar3,"HeadNone",MethodInfo_Void_set_Value)
      ;
label_0454518f:
      pCVar5 = (pGVar2->fields).Human;
      if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_045455ea;
      pCVar6 = (pCVar5->fields).Setup;
      if (pCVar6 != (Characters_HumanSetup_o *)0x0) {
        Characters_HumanSetup__Load(pCVar6,(pGVar15->fields)._set_5__2,0,0,(MethodInfo *)0x0);
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
        (pGVar15->fields).__2__current = pIVar14;
        il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
        (pGVar15->fields).__1__state = 10;
        break;
      }
      goto label_045455ef;
    }
    goto label_04545667;
  case 0xb:
    (__this->fields).__1__state = -1;
    pSVar13 = System_Int32__ToString(iVar19 + 0x30,(MethodInfo *)0x0);
    pGVar23 = "CostumeM";
    pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeM",pSVar13,(MethodInfo *)0x0);
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_04545491;
    GameManagers_CharacterEditorGameManager__Screenshot(pGVar23,826.0,250.0,260.0,260.0,pSVar13,method_01);
    iVar20 = (pGVar15->fields)._i_5__3 + 1;
    (pGVar15->fields)._i_5__3 = iVar20;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x045443ed:
    if (iVar19 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (iVar20 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x24)) goto label_04544407;
label_045441cc:
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545536;
      pSVar4 = (pSVar10->fields).Sex;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_0454553b;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar4,1,MethodInfo_Void_set_Value);
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_045455bd;
      pSVar3 = (pSVar10->fields).Hair;
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,"HairF7",MethodInfo_Void_set_Value);
        (pGVar15->fields)._i_5__3 = 0;
        iVar20 = 0;
        iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
        goto joined_r0x04544657;
      }
      goto label_045455c2;
    }
    pSVar10 = (pGVar15->fields)._set_5__2;
    if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x24) <= iVar20) goto label_045441cc;
label_04544407:
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545540;
    pSVar4 = (pSVar10->fields).Costume;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_04545545;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar4,(pGVar15->fields)._i_5__3,MethodInfo_Void_set_Value);
    pCVar5 = (pGVar2->fields).Human;
    if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_045455c7;
    pCVar6 = (pCVar5->fields).Setup;
    if (pCVar6 != (Characters_HumanSetup_o *)0x0) {
      Characters_HumanSetup__Load(pCVar6,(pGVar15->fields)._set_5__2,0,0,(MethodInfo *)0x0);
      pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
      (pGVar15->fields).__2__current = pIVar14;
      il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
      (pGVar15->fields).__1__state = 0xb;
      break;
    }
    goto label_045455cc;
  case 0xc:
    (__this->fields).__1__state = -1;
    pSVar13 = System_Int32__ToString(iVar19 + 0x30,(MethodInfo *)0x0);
    pGVar23 = "CostumeF";
    pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)"CostumeF",pSVar13,(MethodInfo *)0x0);
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_04545496;
    GameManagers_CharacterEditorGameManager__Screenshot(pGVar23,826.0,250.0,260.0,260.0,pSVar13,method_02);
    iVar20 = (pGVar15->fields)._i_5__3 + 1;
    (pGVar15->fields)._i_5__3 = iVar20;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x04544657:
    if (iVar19 != 0) {
      if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x28) <= iVar20) goto label_04544269;
label_0454466d:
      pSVar10 = (pGVar15->fields)._set_5__2;
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) goto label_04545586;
      pSVar4 = (pSVar10->fields).Costume;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_0454558b;
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar4,(pGVar15->fields)._i_5__3,MethodInfo_Void_set_Value);
      pCVar5 = (pGVar2->fields).Human;
      if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_045455db;
      pCVar6 = (pCVar5->fields).Setup;
      if (pCVar6 != (Characters_HumanSetup_o *)0x0) {
        Characters_HumanSetup__Load(pCVar6,(pGVar15->fields)._set_5__2,0,0,(MethodInfo *)0x0);
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
        (pGVar15->fields).__2__current = pIVar14;
        il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
        (pGVar15->fields).__1__state = 0xc;
        break;
      }
      goto label_045455e0;
    }
    il2cpp_runtime_helper_02337ed0();
    if (iVar20 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x28)) goto label_0454466d;
label_04544269:
    lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if (lVar18 == 0) goto label_04545577;
    lVar18 = *(long *)(lVar18 + 0x28);
    if (lVar18 == 0) goto label_0454557c;
    plVar16 = *(long **)(lVar18 + 0x28);
    if (plVar16 == (long *)0x0) goto label_04545581;
    lVar18 = *plVar16;
    if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
      lVar22 = 0;
      do {
        if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar22) == TypeInfo_IListSetting) {
          puVar12 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar22) + 2) * 0x10 + lVar18 + 0x138);
          goto label_04545215;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar22);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IListSetting,2);
label_04545215:
    __this_05 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar12)(plVar16,puVar12[1]);
    if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,__this_05,
                 MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
      (pGVar15->fields).__7__wrap3.fields._current = (Settings_BaseSetting_o *)in_stack_ffffffffffffffc0;
      *(undefined4 *)&(pGVar15->fields).__7__wrap3.fields._list = in_stack_ffffffffffffffb0;
      *(undefined4 *)((long)&(pGVar15->fields).__7__wrap3.fields._list + 4) = in_stack_ffffffffffffffb4;
      (pGVar15->fields).__7__wrap3.fields._index = in_stack_ffffffffffffffb8;
      (pGVar15->fields).__7__wrap3.fields._version = in_stack_ffffffffffffffbc;
      il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__7__wrap3,0);
      (pGVar15->fields).__1__state = -3;
      goto label_04545274;
    }
    goto label_045455f4;
  case 0xd:
    (__this->fields).__1__state = -3;
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
    (pGVar15->fields).__2__current = pIVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
    (pGVar15->fields).__1__state = 0xe;
    break;
  case 0xe:
    (__this->fields).__1__state = -3;
    pSVar10 = (__this->fields)._preset_5__5;
    if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) {
label_04545419:
      il2cpp_runtime_helper_022b2c90();
label_0454541e:
      il2cpp_runtime_helper_022b2c90();
      goto label_04545423;
    }
    pSVar3 = (pSVar10->fields).UniqueId;
    if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_0454541e;
    pGVar23 = "Preset";
    pSVar13 = System_String__Concat_3ae5ba0
                        ((System_String_o *)"Preset",(pSVar3->fields)._value,(MethodInfo *)0x0);
    if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_0454548c;
    GameManagers_CharacterEditorGameManager__Screenshot(pGVar23,746.0,360.0,420.0,420.0,pSVar13,method_00);
    (pGVar15->fields)._preset_5__5 = (Settings_HumanCustomSet_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(pGVar15->fields)._preset_5__5,0);
label_04545274:
    __this_00.fields._index = in_stack_ffffffffffffffb0;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)pGVar15;
    __this_00.fields._version = in_stack_ffffffffffffffb4;
    __this_00.fields._current._0_4_ = in_stack_ffffffffffffffb8;
    __this_00.fields._current._4_4_ = in_stack_ffffffffffffffbc;
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&(pGVar15->fields).__7__wrap3);
    pIVar7 = TypeInfo_HumanCustomSet;
    pGVar21 = pGVar15;
    if ((char)bVar8 != '\0') {
      pSVar10 = (Settings_HumanCustomSet_o *)(pGVar15->fields).__7__wrap3.fields._current;
      if (pSVar10 == (Settings_HumanCustomSet_o *)0x0) {
        (pGVar15->fields)._preset_5__5 = (Settings_HumanCustomSet_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
        if (((pSVar10->klass->_2).naturalAligment < bVar1) ||
           ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
          il2cpp_runtime_helper_022b2fd0(pSVar10,TypeInfo_HumanCustomSet);
          goto label_04545419;
        }
        (pGVar15->fields)._preset_5__5 = pSVar10;
        if (((pSVar10->klass->_2).naturalAligment < bVar1) ||
           ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar7)) {
          il2cpp_runtime_helper_022b2fd0(pSVar10,pIVar7);
          goto label_045452fa;
        }
      }
      il2cpp_runtime_helper_022b4080(&(pGVar15->fields)._preset_5__5);
      if (pGVar2 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_045455f9;
      pCVar5 = (pGVar2->fields).Human;
      if (pCVar5 == (Characters_DummyHuman_o *)0x0) goto label_045455fe;
      pCVar6 = (pCVar5->fields).Setup;
      pGVar21 = pGVar15;
      if (pCVar6 != (Characters_HumanSetup_o *)0x0) {
        Characters_HumanSetup__Load(pCVar6,(pGVar15->fields)._preset_5__5,0,0,(MethodInfo *)0x0);
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar14,(MethodInfo *)0x0);
        (pGVar15->fields).__2__current = pIVar14;
        il2cpp_runtime_helper_022b4080(&(pGVar15->fields).__2__current,pIVar14);
        (pGVar15->fields).__1__state = 0xd;
        break;
      }
      goto label_04545603;
    }
label_045452fa:
    if (g_data_057aef4d == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      g_data_057aef4d = '\x01';
    }
    (pGVar15->fields).__1__state = -1;
    pGVar23 = (GameManagers_CharacterEditorGameManager_o *)&(pGVar15->fields).__7__wrap3;
    __this_01.fields._index = in_stack_ffffffffffffffb0;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pGVar21;
    __this_01.fields._version = in_stack_ffffffffffffffb4;
    __this_01.fields._current._0_4_ = in_stack_ffffffffffffffb8;
    __this_01.fields._current._4_4_ = in_stack_ffffffffffffffbc;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_01,(MethodInfo_321A1C0 *)pGVar23);
    (pGVar21->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (pGVar21->fields).__7__wrap3.fields._index = 0;
    (pGVar21->fields).__7__wrap3.fields._version = 0;
    (pGVar21->fields).__7__wrap3.fields._current = (Settings_BaseSetting_o *)0x0;
    if (pGVar2 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
      GameManagers_CharacterEditorGameManager__Screenshot
                (pGVar23,450.0,360.0,128.0,128.0,"PresetNone",method_04);
      return 0;
    }
    goto label_04545608;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)pGVar15 >> 8),1);
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$<>m__Finally1
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9____m__Finally1 (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x45461a0

void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9____m__Finally1
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057aef4d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057aef4d = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap3);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x45461e0

Il2CppObject *
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_Collections_IEnumerator_Reset (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x45461f0

void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_Collections_IEnumerator_Reset
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_Collections_IEnumerator_get_Current (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x4546230

Il2CppObject *
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_Collections_IEnumerator_get_Current
          (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10___ctor (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4543740

void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10___ctor
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$System.IDisposable.Dispose
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_IDisposable_Dispose (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4546240

void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_IDisposable_Dispose
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *__this,
               MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [24];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 3) && (iVar1 != -3)) {
    return;
  }
  if (g_data_057aef4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057aef4f = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap3);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$MoveNext
// il2cpp: bool GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__MoveNext (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4546290

bool_conflict
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__MoveNext
          (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  GameManagers_CharacterEditorGameManager_o *__this_00;
  Settings_SetSettingsContainer_T__o *__this_01;
  Settings_IntSetting_o *pSVar3;
  System_Collections_Generic_List_object__o *__this_02;
  Settings_StringSetting_o *__this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  Il2CppClass *pIVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  Settings_TitanCustomSet_o *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar12;
  int iVar13;
  MethodInfo *pMVar14;
  GameManagers_CharacterEditorGameManager_o **__this_08;
  GameManagers_CharacterEditorGameManager_o *pGVar15;
  undefined1 auVar16 [12];
  GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *pGVar17;
  GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *pGVar18;
  undefined4 in_stack_ffffffffffffffb0;
  undefined4 in_stack_ffffffffffffffb4;
  int32_t in_stack_ffffffffffffffb8;
  int32_t in_stack_ffffffffffffffbc;
  System_String_o *in_stack_ffffffffffffffc0;
  
  __this_08 = (GameManagers_CharacterEditorGameManager_o **)__this;
  pGVar17 = __this;
  if (g_data_057aef4e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForEndOfFrame);
    il2cpp_runtime_helper_023445d0(&"Body");
    il2cpp_runtime_helper_023445d0(&"Head");
    __this_08 = &"Eye";
    il2cpp_runtime_helper_023445d0();
    g_data_057aef4e = '\x01';
    in_RDX = extraout_RDX;
  }
  uVar2 = (__this->fields).__1__state;
  if (4 < uVar2) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  iVar12 = (int)__this;
  switch(uVar2) {
  case 0:
    (__this->fields).__1__state = -1;
    lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
    if (lVar11 == 0) {
label_04546a5f:
      il2cpp_runtime_helper_022b2c90();
label_04546a64:
      il2cpp_runtime_helper_022b2c90();
label_04546a69:
      il2cpp_runtime_helper_022b2c90();
      goto label_04546a6e;
    }
    __this_01 = *(Settings_SetSettingsContainer_T__o **)(lVar11 + 0x20);
    if (__this_01 == (Settings_SetSettingsContainer_T__o *)0x0) goto label_04546a64;
    pSVar6 = (Settings_TitanCustomSet_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet(__this_01,MethodInfo_BaseSetSetting_GetSelectedSet);
    pIVar4 = TypeInfo_TitanCustomSet;
    if (pSVar6 == (Settings_TitanCustomSet_o *)0x0) {
      (pGVar17->fields)._set_5__2 = (Settings_TitanCustomSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
      if (((((Settings_BaseSetSetting_c *)pSVar6->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet))
      {
        il2cpp_runtime_helper_022b2fd0(pSVar6);
        goto label_04546a5f;
      }
      (pGVar17->fields)._set_5__2 = pSVar6;
      if (((((Settings_BaseSetSetting_c *)pSVar6->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar4)) {
        il2cpp_runtime_helper_022b2fd0(pSVar6);
        goto switchD_0454636e_caseD_4;
      }
    }
    il2cpp_runtime_helper_022b4080(&(pGVar17->fields)._set_5__2,pSVar6);
    pSVar6 = (pGVar17->fields)._set_5__2;
    if (pSVar6 != (Settings_TitanCustomSet_o *)0x0) {
      (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
      (pGVar17->fields)._i_5__3 = 0;
      iVar13 = 0;
      iVar12 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
      pGVar18 = pGVar17;
      goto joined_r0x045466f6;
    }
label_04546a7d:
    il2cpp_runtime_helper_022b2c90();
    pGVar18 = pGVar17;
label_04546a82:
    il2cpp_runtime_helper_022b2c90();
label_04546a87:
    il2cpp_runtime_helper_022b2c90();
label_04546a8c:
    il2cpp_runtime_helper_022b2c90();
label_04546a91:
    il2cpp_runtime_helper_022b2c90();
label_04546a96:
    il2cpp_runtime_helper_022b2c90();
label_04546a9b:
    il2cpp_runtime_helper_022b2c90();
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pSVar7 = System_Int32__ToString(iVar12 + 0x30,(MethodInfo *)0x0);
    pGVar15 = "Eye";
    pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)"Eye",pSVar7,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_04546a78;
    GameManagers_CharacterEditorGameManager__Screenshot(pGVar15,876.0,570.0,172.0,172.0,pSVar7,method_02);
    iVar13 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar13;
    iVar12 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
    pGVar18 = pGVar17;
joined_r0x045466f6:
    if (iVar12 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar6 = (pGVar18->fields)._set_5__2;
      if (iVar13 < *(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x10)) goto label_04546710;
label_04546806:
      if (pSVar6 != (Settings_TitanCustomSet_o *)0x0) {
        (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)
                  (pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
        (pGVar18->fields)._i_5__3 = 0;
        iVar13 = 0;
        iVar12 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
        goto joined_r0x04546599;
      }
      goto label_04546a8c;
    }
    pSVar6 = (pGVar18->fields)._set_5__2;
    if (*(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x10) <= iVar13) goto label_04546806;
label_04546710:
    if (pSVar6 == (Settings_TitanCustomSet_o *)0x0) goto label_04546a82;
    pSVar3 = (pSVar6->fields).Eye;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_04546a87;
    uVar2 = (pGVar18->fields)._i_5__3;
    pMVar14 = (MethodInfo *)(ulong)uVar2;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar3,uVar2,MethodInfo_Void_set_Value);
    if (__this_00 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
      GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,pMVar14);
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar8,(MethodInfo *)0x0);
      (pGVar18->fields).__2__current = pIVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar18->fields).__2__current,pIVar8);
      (pGVar18->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)pGVar18 >> 8),1);
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    pSVar7 = System_Int32__ToString(iVar12 + 0x30,(MethodInfo *)0x0);
    pGVar15 = "Head";
    pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)"Head",pSVar7,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_04546a73;
    GameManagers_CharacterEditorGameManager__Screenshot(pGVar15,852.0,580.0,220.0,220.0,pSVar7,method_01);
    iVar13 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar13;
    iVar12 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
    pGVar18 = pGVar17;
joined_r0x04546599:
    if (iVar12 != 0) {
      pSVar6 = (pGVar18->fields)._set_5__2;
      if (*(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0xc) <= iVar13) goto label_04546863;
label_045465b3:
      if (pSVar6 == (Settings_TitanCustomSet_o *)0x0) goto label_04546a91;
      pSVar3 = (pSVar6->fields).Head;
      if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_04546a96;
      uVar2 = (pGVar18->fields)._i_5__3;
      pMVar14 = (MethodInfo *)(ulong)uVar2;
      Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar3,uVar2,MethodInfo_Void_set_Value);
      if (__this_00 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,pMVar14);
        pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar8,(MethodInfo *)0x0);
        (pGVar18->fields).__2__current = pIVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar18->fields).__2__current,pIVar8);
        (pGVar18->fields).__1__state = 2;
        return (bool_conflict)CONCAT71((int7)((ulong)pGVar18 >> 8),1);
      }
      goto label_04546aa5;
    }
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = (pGVar18->fields)._set_5__2;
    if (iVar13 < *(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0xc)) goto label_045465b3;
label_04546863:
    if (pSVar6 == (Settings_TitanCustomSet_o *)0x0) goto label_04546a9b;
    (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x28);
    if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,__this_02,
                 MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      (pGVar18->fields).__7__wrap3.fields._current = in_stack_ffffffffffffffc0;
      *(undefined4 *)&(pGVar18->fields).__7__wrap3.fields._list = in_stack_ffffffffffffffb0;
      *(undefined4 *)((long)&(pGVar18->fields).__7__wrap3.fields._list + 4) = in_stack_ffffffffffffffb4;
      (pGVar18->fields).__7__wrap3.fields._index = in_stack_ffffffffffffffb8;
      (pGVar18->fields).__7__wrap3.fields._version = in_stack_ffffffffffffffbc;
      il2cpp_runtime_helper_022b4080(&(pGVar18->fields).__7__wrap3,0);
      (pGVar18->fields).__1__state = -3;
      goto label_045468ee;
    }
    goto label_04546aaa;
  case 3:
    (__this->fields).__1__state = -3;
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) goto label_04546a69;
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)__this_08,820.0,560.0,280.0,280.0,
               (__this->fields)._hair_5__5,in_RDX);
    (pGVar17->fields)._hair_5__5 = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(pGVar17->fields)._hair_5__5,0);
    pGVar18 = pGVar17;
label_045468ee:
    __this_04.fields._index = in_stack_ffffffffffffffb0;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pGVar18;
    __this_04.fields._version = in_stack_ffffffffffffffb4;
    __this_04.fields._current._0_4_ = in_stack_ffffffffffffffb8;
    __this_04.fields._current._4_4_ = in_stack_ffffffffffffffbc;
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_04,(MethodInfo_321A1D0 *)&(pGVar18->fields).__7__wrap3);
    if ((char)bVar5 != '\0') {
      (pGVar18->fields)._hair_5__5 = (pGVar18->fields).__7__wrap3.fields._current;
      il2cpp_runtime_helper_022b4080(&(pGVar18->fields)._hair_5__5);
      pSVar6 = (pGVar18->fields)._set_5__2;
      if (pSVar6 == (Settings_TitanCustomSet_o *)0x0) goto label_04546ab9;
      __this_03 = (pSVar6->fields).Hair;
      if (__this_03 != (Settings_StringSetting_o *)0x0) {
        pMVar14 = (MethodInfo *)(pGVar18->fields)._hair_5__5;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)pMVar14,MethodInfo_Void_set_Value);
        if (__this_00 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
          GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,pMVar14);
          pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar8,(MethodInfo *)0x0);
          (pGVar18->fields).__2__current = pIVar8;
          il2cpp_runtime_helper_022b4080(&(pGVar18->fields).__2__current,pIVar8);
          (pGVar18->fields).__1__state = 3;
          return (bool_conflict)CONCAT71((int7)((ulong)pGVar18 >> 8),1);
        }
        goto label_04546acd;
      }
      goto label_04546abe;
    }
    pGVar17 = pGVar18;
    if (g_data_057aef4f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      g_data_057aef4f = '\x01';
    }
    (pGVar18->fields).__1__state = -1;
    __this_05.fields._index = in_stack_ffffffffffffffb0;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pGVar17;
    __this_05.fields._version = in_stack_ffffffffffffffb4;
    __this_05.fields._current._0_4_ = in_stack_ffffffffffffffb8;
    __this_05.fields._current._4_4_ = in_stack_ffffffffffffffbc;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&(pGVar18->fields).__7__wrap3);
    (pGVar17->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (pGVar17->fields).__7__wrap3.fields._index = 0;
    (pGVar17->fields).__7__wrap3.fields._version = 0;
    (pGVar17->fields).__7__wrap3.fields._current = (System_String_o *)0x0;
    pSVar6 = (pGVar17->fields)._set_5__2;
    pGVar18 = pGVar17;
    if (pSVar6 != (Settings_TitanCustomSet_o *)0x0) {
      (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
      (pGVar17->fields)._i_5__3 = 0;
      iVar12 = 0;
      if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) goto label_04546a33;
      goto label_04546493;
    }
    goto label_04546ac8;
  case 4:
switchD_0454636e_caseD_4:
    (__this->fields).__1__state = -1;
    pSVar7 = System_Int32__ToString(iVar12 + 0x30,(MethodInfo *)0x0);
    pGVar15 = "Body";
    pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)"Body",pSVar7,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
label_04546a6e:
      il2cpp_runtime_helper_022b2c90();
label_04546a73:
      il2cpp_runtime_helper_022b2c90();
label_04546a78:
      il2cpp_runtime_helper_022b2c90();
      goto label_04546a7d;
    }
    GameManagers_CharacterEditorGameManager__Screenshot(pGVar15,766.0,220.0,380.0,380.0,pSVar7,method_00);
    iVar12 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar12;
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
label_04546a33:
      il2cpp_runtime_helper_02337ed0();
      pGVar18 = pGVar17;
      if (*(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 8) <= iVar12) {
        return 0;
      }
    }
    else {
label_04546493:
      pGVar18 = pGVar17;
      if (*(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 8) <= iVar12) {
        return 0;
      }
    }
    pSVar6 = (pGVar18->fields)._set_5__2;
    if (pSVar6 == (Settings_TitanCustomSet_o *)0x0) goto label_04546aaf;
    pSVar3 = (pSVar6->fields).Body;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_04546ab4;
    uVar2 = (pGVar18->fields)._i_5__3;
    pMVar14 = (MethodInfo *)(ulong)uVar2;
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pSVar3,uVar2,MethodInfo_Void_set_Value);
    if (__this_00 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
      GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,pMVar14);
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar8,(MethodInfo *)0x0);
      (pGVar18->fields).__2__current = pIVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar18->fields).__2__current,pIVar8);
      (pGVar18->fields).__1__state = 4;
      return (bool_conflict)CONCAT71((int7)((ulong)pGVar18 >> 8),1);
    }
    goto label_04546ac3;
  }
  il2cpp_runtime_helper_022b2c90();
label_04546aa5:
  il2cpp_runtime_helper_022b2c90();
label_04546aaa:
  il2cpp_runtime_helper_022b2c90();
label_04546aaf:
  il2cpp_runtime_helper_022b2c90();
label_04546ab4:
  il2cpp_runtime_helper_022b2c90();
label_04546ab9:
  il2cpp_runtime_helper_022b2c90();
label_04546abe:
  il2cpp_runtime_helper_022b2c90();
label_04546ac3:
  il2cpp_runtime_helper_022b2c90();
label_04546ac8:
  il2cpp_runtime_helper_022b2c90();
label_04546acd:
  auVar16 = il2cpp_runtime_helper_022b2c90();
  uVar10 = auVar16._0_8_;
  if (auVar16._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(uVar10);
    lVar11 = *plVar9;
    __cxa_end_catch();
    if (lVar11 == 0) {
      return 0;
    }
    il2cpp_runtime_helper_022374d0(pGVar18);
    uVar10 = il2cpp_runtime_helper_022fefe0(lVar11);
    if (lVar11 != 0) {
      iVar12 = (pGVar18->fields).__1__state;
      if ((iVar12 == 3) || (iVar12 == -3)) {
        pGVar17 = pGVar18;
        if (g_data_057aef4f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
          g_data_057aef4f = '\x01';
        }
        (pGVar18->fields).__1__state = -1;
        __this_06.fields._index = in_stack_ffffffffffffffb0;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)pGVar17;
        __this_06.fields._version = in_stack_ffffffffffffffb4;
        __this_06.fields._current._0_4_ = in_stack_ffffffffffffffb8;
        __this_06.fields._current._4_4_ = in_stack_ffffffffffffffbc;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&(pGVar18->fields).__7__wrap3);
      }
      lVar11 = il2cpp_runtime_helper_022fefe0(lVar11);
      il2cpp_runtime_helper_01f66400();
      if (g_data_057aef4f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057aef4f = '\x01';
      }
      *(undefined4 *)(lVar11 + 0x10) = 0xffffffff;
      __this_07.fields._list._4_4_ = in_stack_ffffffffffffffb4;
      __this_07.fields._list._0_4_ = in_stack_ffffffffffffffb0;
      __this_07.fields._index = in_stack_ffffffffffffffb8;
      __this_07.fields._version = in_stack_ffffffffffffffbc;
      __this_07.fields._current = (Il2CppObject *)in_stack_ffffffffffffffc0;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)(lVar11 + 0x38));
      return extraout_EAX;
    }
  }
  _Unwind_Resume(uVar10);
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$<>m__Finally1
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10____m__Finally1 (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4546d20

void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10____m__Finally1
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (g_data_057aef4f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057aef4f = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_321A1C0 *)&(__this->fields).__7__wrap3);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4546d60

Il2CppObject *
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_Collections_IEnumerator_Reset (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4546d70

void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_Collections_IEnumerator_Reset
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_Collections_IEnumerator_get_Current (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4546db0

Il2CppObject *
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_Collections_IEnumerator_get_Current
          (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager$$Awake
// il2cpp: void GameManagers_CharacterEditorGameManager__Awake (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x4542a50

void GameManagers_CharacterEditorGameManager__Awake
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  void **ppvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  Settings_TypedSetting_int__o *pSVar6;
  Settings_SetSettingsContainer_T__o *pSVar7;
  Characters_HumanSetup_o *__this_00;
  Settings_TitanCustomSet_c *pSVar8;
  Il2CppClass *pIVar9;
  Characters_BasicTitanSetup_o *__this_01;
  bool_conflict bVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *__this_02;
  System_String_o *pSVar12;
  UnityEngine_Object_o *pUVar13;
  UnityEngine_Renderer_o *__this_03;
  UnityEngine_Material_o *__this_04;
  UnityEngine_Object_o *pUVar14;
  Il2CppObject *pIVar15;
  UnityEngine_Behaviour_o *pUVar16;
  Settings_HumanCustomSet_o *customSet;
  System_String_o *str1;
  System_String_o *pSVar17;
  UnityEngine_Object_c *pUVar18;
  undefined8 *puVar19;
  Il2CppObject *pIVar20;
  Il2CppClass *pIVar21;
  MethodInfo *method_00;
  undefined8 *unaff_R13;
  UnityEngine_GameObject_o **ppUVar22;
  Il2CppClass *pIVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  UnityEngine_Color_o value;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Quaternion_o rotation_01;
  int32_t iStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  System_String_o *pSStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  GameManagers_CharacterEditorGameManager_o *pGStack_78;
  UnityEngine_GameObject_o **ppUStack_70;
  float local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (g_data_057aef45 == '\0') {
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542d57;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542d63;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542d6f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542d7b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542d87;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542d93;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542d9f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542dab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542db7;
    il2cpp_runtime_helper_023445d0(&"Geometry/Prefabs/Cuboid");
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542dc3;
    il2cpp_runtime_helper_023445d0(&"Materials/TransparentMaterial");
    g_data_057aef45 = '\x01';
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) != 0) goto label_04542a85;
label_04542de2:
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542de7;
    il2cpp_runtime_helper_02337ed0();
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
  }
  else {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) goto label_04542de2;
label_04542a85:
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
  }
  if (g_data_057ac31b == '\0') {
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542e0f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ac31b = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
  fVar34 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
  fVar24 = (float)uVar2;
  fVar27 = (float)((ulong)uVar2 >> 0x20);
  fVar30 = 0.0;
  fVar32 = 0.0;
  if (g_data_057a6843 == '\0') {
    uStack_50 = 0;
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542ad8;
    local_5c = fVar34;
    local_58 = uVar2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
    fVar24 = (float)local_58;
    fVar27 = local_58._4_4_;
    fVar30 = (float)uStack_50;
    fVar32 = uStack_50._4_4_;
    fVar34 = local_5c;
  }
  uVar2 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  uVar3 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  fVar25 = fVar24 * 0.05;
  fVar28 = fVar27 * 0.05;
  uVar26 = (int)uVar2;
  uVar29 = (int)((ulong)uVar2 >> 0x20);
  uVar31 = (int)uVar3;
  uVar33 = (int)((ulong)uVar3 >> 0x20);
  fVar35 = fVar34 * 0.05;
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    local_58 = CONCAT44(fVar27 * 0.05,fVar24 * 0.05);
    uStack_50 = CONCAT44(fVar32 * 0.0,fVar30 * 0.0);
    uStack_30 = 0;
    uStack_40 = 0;
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542b40;
    local_5c = fVar34 * 0.05;
    local_48 = uVar3;
    local_38 = uVar2;
    il2cpp_runtime_helper_02337ed0();
    fVar25 = (float)local_58;
    fVar28 = local_58._4_4_;
    uVar26 = (undefined4)local_38;
    uVar29 = local_38._4_4_;
    uVar31 = (undefined4)local_48;
    uVar33 = local_48._4_4_;
    fVar35 = local_5c;
  }
  ppUStack_70 = (UnityEngine_GameObject_o **)0x4542b73;
  position.fields.y = fVar28;
  position.fields.x = fVar25;
  position.fields.z = fVar35;
  rotation.fields.y = (float)uVar29;
  rotation.fields.x = (float)uVar26;
  rotation.fields.w = (float)uVar33;
  rotation.fields.z = (float)uVar31;
  pUVar11 = (UnityEngine_GameObject_o *)
            ApplicationManagers_ResourceManager__InstantiateAsset_object__25bc9b0
                      (pSVar12,"Geometry/Prefabs/Cuboid",position,rotation,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  ppUVar22 = &(__this->fields).platform;
  (__this->fields).platform = pUVar11;
  ppUStack_70 = (UnityEngine_GameObject_o **)0x4542b86;
  il2cpp_runtime_helper_022b4080(ppUVar22);
  pUVar11 = (__this->fields).platform;
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) {
label_04542e1b:
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542e20;
    pUVar13 = (UnityEngine_Object_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542b9a;
    __this_02 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_04542e1b;
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542bbc;
    value_00.fields.z = 2.0;
    value_00.fields.x = 2.0;
    value_00.fields.y = 0.1;
    UnityEngine_Transform__set_localScale(__this_02,value_00,(MethodInfo *)0x0);
    if (*ppUVar22 == (UnityEngine_GameObject_o *)0x0) goto label_04542e1b;
    unaff_R13 = &MethodInfo_Renderer_GetComponent_Renderer;
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542bd8;
    pSVar12 = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(*ppUVar22,MethodInfo_Renderer_GetComponent_Renderer);
    ppUStack_70 = (UnityEngine_GameObject_o **)0x4542bfd;
    pUVar13 = ApplicationManagers_ResourceManager__LoadAsset
                        (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38),"Materials/TransparentMaterial",0,
                         (MethodInfo *)0x0);
    if (pSVar12 == (System_String_o *)0x0) goto label_04542e1b;
    if (pUVar13 == (UnityEngine_Object_o *)0x0) {
label_04542c3d:
      ppUStack_70 = (UnityEngine_GameObject_o **)0x4542c4a;
      UnityEngine_Renderer__set_material
                ((UnityEngine_Renderer_o *)pSVar12,(UnityEngine_Material_o *)pUVar13,(MethodInfo *)0x0);
      if (*ppUVar22 != (UnityEngine_GameObject_o *)0x0) {
        ppUStack_70 = (UnityEngine_GameObject_o **)0x4542c5f;
        __this_03 = (UnityEngine_Renderer_o *)
                    UnityEngine_GameObject__GetComponent_object_(*ppUVar22,MethodInfo_Renderer_GetComponent_Renderer);
        if (__this_03 != (UnityEngine_Renderer_o *)0x0) {
          ppUStack_70 = (UnityEngine_GameObject_o **)0x4542c72;
          __this_04 = UnityEngine_Renderer__get_material(__this_03,(MethodInfo *)0x0);
          if (__this_04 != (UnityEngine_Material_o *)0x0) {
            ppUStack_70 = (UnityEngine_GameObject_o **)0x4542c93;
            value.fields.b = 1.0;
            value.fields.a = 0.2;
            value.fields.r = 1.0;
            value.fields.g = 1.0;
            UnityEngine_Material__set_color(__this_04,value,(MethodInfo *)0x0);
            ppUVar22 = (UnityEngine_GameObject_o **)&TypeInfo_SettingsManager;
            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
            if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
               (pSVar6 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x20),
               pSVar6 != (Settings_TypedSetting_int__o *)0x0)) {
              pSVar12 = (System_String_o *)&MethodInfo_Void_set_Value;
              ppUStack_70 = (UnityEngine_GameObject_o **)0x4542cdc;
              Settings_TypedSetting_int___set_Value(pSVar6,0,MethodInfo_Void_set_Value);
              lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
              if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
                 (pSVar6 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x20),
                 pSVar6 != (Settings_TypedSetting_int__o *)0x0)) {
                method_00 = (MethodInfo *)0x0;
                ppUStack_70 = (UnityEngine_GameObject_o **)0x4542d17;
                Settings_TypedSetting_int___set_Value(pSVar6,0,MethodInfo_Void_set_Value);
                if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
                  ppUStack_70 = (UnityEngine_GameObject_o **)0x4542d2f;
                  il2cpp_runtime_helper_02337ed0();
                }
                ppUStack_70 = (UnityEngine_GameObject_o **)0x4542d36;
                Utility_CharacterPreviewGenerator__InitializePreviewSystem((MethodInfo *)0x0);
                GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this,method_00);
                return;
              }
            }
          }
        }
      }
      goto label_04542e1b;
    }
    bVar4 = (TypeInfo_Material->_2).naturalAligment;
    if ((bVar4 <= (pUVar13->klass->_2).naturalAligment) &&
       ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Material)) goto label_04542c3d;
  }
  ppUStack_70 = (UnityEngine_GameObject_o **)0x4542e28;
  il2cpp_runtime_helper_022b2fd0();
  puStack_88 = &TypeInfo_ResourcePaths;
  pSStack_90 = pSVar12;
  puStack_80 = unaff_R13;
  pGStack_78 = __this;
  ppUStack_70 = ppUVar22;
  if (g_data_057aef46 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DummyHuman_AddComponent_DummyHuman);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DummyTitan_AddComponent_DummyTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitanMovementSync_GetComponent_BasicTitanMovementSy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanMovementSync_GetComponent_HumanMovementSync);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Human/Prefabs/HumanPlayer");
    g_data_057aef46 = '\x01';
  }
  iStack_c4 = 0;
  pUVar14 = pUVar13[2].monitor;
  pIVar23 = (Il2CppClass *)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppvVar1 = &pUVar13[2].monitor;
  bVar10 = UnityEngine_Object__op_Inequality(pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*ppvVar1 != (UnityEngine_Component_o *)0x0) {
      pUVar14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*ppvVar1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
      goto label_04542fa1;
    }
    goto label_045434d2;
  }
label_04542fa1:
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) != '\0') goto label_04542fc8;
label_04543203:
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
    if (((lVar5 == 0) ||
        (pSVar7 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x20),
        pSVar7 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
       (pIVar21 = (Il2CppClass *)Settings_SetSettingsContainer_object___GetSelectedSet(pSVar7,MethodInfo_BaseSetSetting_GetSelectedSet),
       pIVar21 == (Il2CppClass *)0x0)) {
label_045434d2:
      customSet = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_022b2c90();
      pIVar21 = pIVar23;
      goto label_045434d7;
    }
    pSVar8 = (pIVar21->_1).image;
    bVar4 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
    if ((bVar4 <= (pSVar8->_2).naturalAligment) &&
       ((pSVar8->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_TitanCustomSet)) {
      pIVar9 = (pIVar21->_1).element_class;
      pIVar23 = pIVar21;
      if (pIVar9 != (Il2CppClass *)0x0) {
        iStack_c4 = *(int32_t *)((long)&(pIVar9->_1).name + 4);
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
        if (*(int *)(TypeInfo_CharacterPrefabs + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_CharacterPrefabs + 0xb8) + 8);
        str1 = System_Int32__ToString((int32_t)&iStack_c4,(MethodInfo *)0x0);
        pSVar17 = System_String__Concat_3ae5ba0(pSVar17,str1,(MethodInfo *)0x0);
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar34 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        uVar26 = (int)uVar2;
        uVar29 = (int)((ulong)uVar2 >> 0x20);
        uVar31 = 0;
        uVar33 = 0;
        if (g_data_057a6843 == '\0') {
          uStack_b8 = 0;
          uStack_c0 = uVar2;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
          g_data_057a6843 = '\x01';
          uVar26 = (undefined4)uStack_c0;
          uVar29 = uStack_c0._4_4_;
          uVar31 = (undefined4)uStack_b8;
          uVar33 = uStack_b8._4_4_;
        }
        uVar2 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        uVar3 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        uVar36 = (int)uVar2;
        uVar37 = (int)((ulong)uVar2 >> 0x20);
        uVar38 = (int)uVar3;
        uVar39 = (int)((ulong)uVar3 >> 0x20);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          uStack_c0 = CONCAT44(uVar29,uVar26);
          uStack_b8 = CONCAT44(uVar33,uVar31);
          uStack_98 = 0;
          uStack_a8 = 0;
          uStack_b0 = uVar3;
          uStack_a0 = uVar2;
          il2cpp_runtime_helper_02337ed0();
          uVar26 = (undefined4)uStack_c0;
          uVar29 = uStack_c0._4_4_;
          uVar36 = (undefined4)uStack_a0;
          uVar37 = uStack_a0._4_4_;
          uVar38 = (undefined4)uStack_b0;
          uVar39 = uStack_b0._4_4_;
        }
        position_01.fields.y = (float)uVar29;
        position_01.fields.x = (float)uVar26;
        position_01.fields.z = fVar34;
        rotation_01.fields.y = (float)uVar37;
        rotation_01.fields.x = (float)uVar36;
        rotation_01.fields.w = (float)uVar39;
        rotation_01.fields.z = (float)uVar38;
        pUVar11 = (UnityEngine_GameObject_o *)
                  ApplicationManagers_ResourceManager__InstantiateAsset_object__25bc9b0
                            (pSVar12,pSVar17,position_01,rotation_01,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
          pUVar18 = (UnityEngine_Object_c *)UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_DummyTitan_AddComponent_DummyTitan)
          ;
          pUVar13[2].klass = pUVar18;
          pUVar13 = pUVar13 + 2;
          il2cpp_runtime_helper_022b4080(pUVar13,pUVar18);
          pUVar16 = (UnityEngine_Behaviour_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BasicTitan_GetComponent_BasicTitan);
          if (pUVar16 != (UnityEngine_Behaviour_o *)0x0) {
            UnityEngine_Behaviour__set_enabled(pUVar16,0,(MethodInfo *)0x0);
            pUVar16 = (UnityEngine_Behaviour_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_BasicTitanMovementSync_GetComponent_BasicTitanMovementSy);
            if (pUVar16 != (UnityEngine_Behaviour_o *)0x0) {
              UnityEngine_Behaviour__set_enabled(pUVar16,0,(MethodInfo *)0x0);
              if ((pUVar13->klass != (UnityEngine_Object_c *)0x0) &&
                 (__this_01 = (pUVar13->klass->_1).this_arg.data,
                 __this_01 != (Characters_BasicTitanSetup_o *)0x0)) {
                Characters_BasicTitanSetup__Load
                          (__this_01,(Settings_TitanCustomSet_o *)pIVar21,(MethodInfo *)0x0);
                pUVar18 = pUVar13->klass;
joined_r0x04543474:
                if (pUVar18 != (UnityEngine_Object_c *)0x0) {
                  Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pUVar18,(MethodInfo *)0x0);
                  *ppvVar1 = pUVar13->klass;
                  il2cpp_runtime_helper_022b4080(ppvVar1);
                  return;
                }
              }
            }
          }
        }
      }
      goto label_045434d2;
    }
  }
  else {
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') goto label_04543203;
label_04542fc8:
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    }
    else {
      pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    }
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar34 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    uVar26 = (int)uVar2;
    uVar29 = (int)((ulong)uVar2 >> 0x20);
    uVar31 = 0;
    uVar33 = 0;
    if (g_data_057a6843 == '\0') {
      uStack_b8 = 0;
      uStack_c0 = uVar2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
      uVar26 = (undefined4)uStack_c0;
      uVar29 = uStack_c0._4_4_;
      uVar31 = (undefined4)uStack_b8;
      uVar33 = uStack_b8._4_4_;
    }
    uVar2 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    uVar3 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    uVar36 = (int)uVar2;
    uVar37 = (int)((ulong)uVar2 >> 0x20);
    uVar38 = (int)uVar3;
    uVar39 = (int)((ulong)uVar3 >> 0x20);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      uStack_c0 = CONCAT44(uVar29,uVar26);
      uStack_b8 = CONCAT44(uVar33,uVar31);
      uStack_98 = 0;
      uStack_a8 = 0;
      uStack_b0 = uVar3;
      uStack_a0 = uVar2;
      il2cpp_runtime_helper_02337ed0();
      uVar26 = (undefined4)uStack_c0;
      uVar29 = uStack_c0._4_4_;
      uVar36 = (undefined4)uStack_a0;
      uVar37 = uStack_a0._4_4_;
      uVar38 = (undefined4)uStack_b0;
      uVar39 = uStack_b0._4_4_;
    }
    position_00.fields.y = (float)uVar29;
    position_00.fields.x = (float)uVar26;
    position_00.fields.z = fVar34;
    rotation_00.fields.y = (float)uVar37;
    rotation_00.fields.x = (float)uVar36;
    rotation_00.fields.w = (float)uVar39;
    rotation_00.fields.z = (float)uVar38;
    pUVar11 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object__25bc9b0
                        (pSVar12,"Human/Prefabs/HumanPlayer",position_00,rotation_00,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_045434d2;
    pIVar15 = UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_DummyHuman_AddComponent_DummyHuman);
    pUVar13[1].fields.m_CachedPtr = (intptr_t)pIVar15;
    pUVar13 = (UnityEngine_Object_o *)&pUVar13[1].fields;
    il2cpp_runtime_helper_022b4080(pUVar13,pIVar15);
    pUVar16 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Human_GetComponent_Human);
    if (pUVar16 == (UnityEngine_Behaviour_o *)0x0) goto label_045434d2;
    UnityEngine_Behaviour__set_enabled(pUVar16,0,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_HumanMovementSync_GetComponent_HumanMovementSync);
    if (pUVar16 == (UnityEngine_Behaviour_o *)0x0) goto label_045434d2;
    UnityEngine_Behaviour__set_enabled(pUVar16,0,(MethodInfo *)0x0);
    if (((((UnityEngine_Object_Fields *)pUVar13)->m_CachedPtr == 0) ||
        (lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60), lVar5 == 0)) ||
       (pSVar7 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x20),
       pSVar7 == (Settings_SetSettingsContainer_T__o *)0x0)) goto label_045434d2;
    __this_00 = *(Characters_HumanSetup_o **)(((UnityEngine_Object_Fields *)pUVar13)->m_CachedPtr + 0x38);
    customSet = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet(pSVar7,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (__this_00 == (Characters_HumanSetup_o *)0x0) goto label_045434d2;
    if (customSet == (Settings_HumanCustomSet_o *)0x0) {
label_045431c7:
      Characters_HumanSetup__Load(__this_00,customSet,0,0,(MethodInfo *)0x0);
      pUVar18 = (UnityEngine_Object_c *)((UnityEngine_Object_Fields *)pUVar13)->m_CachedPtr;
      goto joined_r0x04543474;
    }
    bVar4 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    pIVar21 = pIVar23;
    if ((bVar4 <= (customSet->klass->_2).naturalAligment) &&
       ((customSet->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_HumanCustomSet)) goto label_045431c7;
label_045434d7:
    il2cpp_runtime_helper_022b2fd0(customSet);
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057aef47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    g_data_057aef47 = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = System_IO_Directory__Exists
                     (*(System_String_o **)(*(long *)(TypeInfo_CharacterEditorGameManager + 0xb8) + 8),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_CharacterEditorGameManager + 0xb8) + 8),(MethodInfo *)0x0);
  }
  pIVar23 = (pIVar21->_1).element_class;
  pIVar15 = (Il2CppObject *)0x0;
  if (pIVar23 == (Il2CppClass *)0x0) goto label_04543639;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar23,0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) != '\0') goto label_04543598;
label_045435d1:
    if (g_data_057aef49 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
      g_data_057aef49 = '\x01';
    }
    puVar19 = &TypeInfo_GenerateTitanPreviewsCoroutine_d__10;
  }
  else {
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') goto label_045435d1;
label_04543598:
    if (g_data_057aef48 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
      g_data_057aef48 = '\x01';
    }
    puVar19 = &TypeInfo_GenerateHumanPreviewsCoroutine_d__9;
  }
  pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(*puVar19);
  pIVar15 = pIVar20;
  System_Object___ctor(pIVar20,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar20[1].klass = 0;
  if (pIVar20 != (Il2CppObject *)0x0) {
    pIVar20[2].klass = pIVar21;
    il2cpp_runtime_helper_022b4080(pIVar20 + 2,pIVar21);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)pIVar21,(System_Collections_IEnumerator_o *)pIVar20,
               (MethodInfo *)0x0);
    return;
  }
label_04543639:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
    g_data_057aef48 = '\x01';
  }
  pIVar21 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
  pIVar23 = pIVar21;
  System_Object___ctor((Il2CppObject *)pIVar21,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar21->_1).name = 0;
  if (pIVar21 == (Il2CppClass *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aef49 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
      g_data_057aef49 = '\x01';
    }
    pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
    uVar26 = 0;
    pIVar15 = pIVar20;
    System_Object___ctor(pIVar20,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar20[1].klass = 0;
    if (pIVar20 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar15,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar15[1].klass = uVar26;
      return;
    }
    pIVar20[2].klass = pIVar23;
    il2cpp_runtime_helper_022b4080(pIVar20 + 2,pIVar23);
    return;
  }
  (pIVar21->_1).byval_arg.data = pIVar15;
  il2cpp_runtime_helper_022b4080(&(pIVar21->_1).byval_arg,pIVar15);
  return;
}


// GameManagers.CharacterEditorGameManager$$ReinstantiateCharacter
// il2cpp: void GameManagers_CharacterEditorGameManager__ReinstantiateCharacter (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x4542e30

void GameManagers_CharacterEditorGameManager__ReinstantiateCharacter
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  Characters_DummyCharacter_o **ppCVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  Characters_DummyCharacter_o *x;
  System_String_o *pSVar6;
  long lVar7;
  Settings_SetSettingsContainer_T__o *pSVar8;
  Characters_HumanSetup_o *__this_00;
  Settings_TitanCustomSet_c *pSVar9;
  Il2CppClass *pIVar10;
  Characters_BasicTitanSetup_o *__this_01;
  bool_conflict bVar11;
  UnityEngine_Object_o *obj;
  UnityEngine_GameObject_o *pUVar12;
  Characters_DummyHuman_o *pCVar13;
  UnityEngine_Behaviour_o *pUVar14;
  Settings_HumanCustomSet_o *customSet;
  System_String_o *str1;
  System_String_o *pSVar15;
  Characters_DummyTitan_o *pCVar16;
  undefined8 *puVar17;
  Il2CppObject *pIVar18;
  Il2CppClass *pIVar19;
  Il2CppObject *pIVar20;
  Characters_DummyHuman_o **ppCVar21;
  Il2CppClass *pIVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Quaternion_o rotation_00;
  int32_t local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (g_data_057aef46 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DummyHuman_AddComponent_DummyHuman);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DummyTitan_AddComponent_DummyTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitanMovementSync_GetComponent_BasicTitanMovementSy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanMovementSync_GetComponent_HumanMovementSync);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Human/Prefabs/HumanPlayer");
    g_data_057aef46 = '\x01';
  }
  local_5c = 0;
  x = (__this->fields).Character;
  pIVar22 = (Il2CppClass *)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppCVar1 = &(__this->fields).Character;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    if (*ppCVar1 != (Characters_DummyCharacter_o *)0x0) {
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*ppCVar1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      goto label_04542fa1;
    }
    goto label_045434d2;
  }
label_04542fa1:
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) != '\0') goto label_04542fc8;
label_04543203:
    lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
    if (((lVar7 == 0) ||
        (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar7 + 0x20),
        pSVar8 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
       (pIVar19 = (Il2CppClass *)Settings_SetSettingsContainer_object___GetSelectedSet(pSVar8,MethodInfo_BaseSetSetting_GetSelectedSet),
       pIVar19 == (Il2CppClass *)0x0)) {
label_045434d2:
      customSet = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_022b2c90();
      pIVar19 = pIVar22;
      goto label_045434d7;
    }
    pSVar9 = (pIVar19->_1).image;
    bVar5 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
    if ((bVar5 <= (pSVar9->_2).naturalAligment) &&
       ((pSVar9->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_TitanCustomSet)) {
      pIVar10 = (pIVar19->_1).element_class;
      pIVar22 = pIVar19;
      if (pIVar10 != (Il2CppClass *)0x0) {
        local_5c = *(int32_t *)((long)&(pIVar10->_1).name + 4);
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
        if (*(int *)(TypeInfo_CharacterPrefabs + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar15 = *(System_String_o **)(*(long *)(TypeInfo_CharacterPrefabs + 0xb8) + 8);
        str1 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
        pSVar15 = System_String__Concat_3ae5ba0(pSVar15,str1,(MethodInfo *)0x0);
        if (g_data_057a65d5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a65d5 = '\x01';
        }
        uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar2 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        uVar23 = (int)uVar3;
        uVar24 = (int)((ulong)uVar3 >> 0x20);
        uVar25 = 0;
        uVar26 = 0;
        if (g_data_057a6843 == '\0') {
          uStack_50 = 0;
          local_58 = uVar3;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
          g_data_057a6843 = '\x01';
          uVar23 = (undefined4)local_58;
          uVar24 = local_58._4_4_;
          uVar25 = (undefined4)uStack_50;
          uVar26 = uStack_50._4_4_;
        }
        uVar3 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
        uVar4 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
        uVar27 = (int)uVar3;
        uVar28 = (int)((ulong)uVar3 >> 0x20);
        uVar29 = (int)uVar4;
        uVar30 = (int)((ulong)uVar4 >> 0x20);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          local_58 = CONCAT44(uVar24,uVar23);
          uStack_50 = CONCAT44(uVar26,uVar25);
          uStack_30 = 0;
          uStack_40 = 0;
          local_48 = uVar4;
          local_38 = uVar3;
          il2cpp_runtime_helper_02337ed0();
          uVar23 = (undefined4)local_58;
          uVar24 = local_58._4_4_;
          uVar27 = (undefined4)local_38;
          uVar28 = local_38._4_4_;
          uVar29 = (undefined4)local_48;
          uVar30 = local_48._4_4_;
        }
        position_00.fields.y = (float)uVar24;
        position_00.fields.x = (float)uVar23;
        position_00.fields.z = fVar2;
        rotation_00.fields.y = (float)uVar28;
        rotation_00.fields.x = (float)uVar27;
        rotation_00.fields.w = (float)uVar30;
        rotation_00.fields.z = (float)uVar29;
        pUVar12 = (UnityEngine_GameObject_o *)
                  ApplicationManagers_ResourceManager__InstantiateAsset_object__25bc9b0
                            (pSVar6,pSVar15,position_00,rotation_00,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
        if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
          pCVar16 = (Characters_DummyTitan_o *)
                    UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_DummyTitan_AddComponent_DummyTitan);
          (__this->fields).Titan = pCVar16;
          ppCVar21 = (Characters_DummyHuman_o **)&(__this->fields).Titan;
          il2cpp_runtime_helper_022b4080(ppCVar21,pCVar16);
          pUVar14 = (UnityEngine_Behaviour_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_BasicTitan_GetComponent_BasicTitan);
          if (pUVar14 != (UnityEngine_Behaviour_o *)0x0) {
            UnityEngine_Behaviour__set_enabled(pUVar14,0,(MethodInfo *)0x0);
            pUVar14 = (UnityEngine_Behaviour_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_BasicTitanMovementSync_GetComponent_BasicTitanMovementSy);
            if (pUVar14 != (UnityEngine_Behaviour_o *)0x0) {
              UnityEngine_Behaviour__set_enabled(pUVar14,0,(MethodInfo *)0x0);
              if (((Characters_DummyTitan_o *)*ppCVar21 != (Characters_DummyTitan_o *)0x0) &&
                 (__this_01 = (((Characters_DummyTitan_o *)*ppCVar21)->fields).Setup,
                 __this_01 != (Characters_BasicTitanSetup_o *)0x0)) {
                Characters_BasicTitanSetup__Load
                          (__this_01,(Settings_TitanCustomSet_o *)pIVar19,(MethodInfo *)0x0);
                pCVar13 = *ppCVar21;
joined_r0x04543474:
                if (pCVar13 != (Characters_DummyHuman_o *)0x0) {
                  Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar13,(MethodInfo *)0x0);
                  *ppCVar1 = (Characters_DummyCharacter_o *)*ppCVar21;
                  il2cpp_runtime_helper_022b4080(ppCVar1);
                  return;
                }
              }
            }
          }
        }
      }
      goto label_045434d2;
    }
  }
  else {
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') goto label_04543203;
label_04542fc8:
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    }
    else {
      pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    }
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar2 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    uVar23 = (int)uVar3;
    uVar24 = (int)((ulong)uVar3 >> 0x20);
    uVar25 = 0;
    uVar26 = 0;
    if (g_data_057a6843 == '\0') {
      uStack_50 = 0;
      local_58 = uVar3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
      uVar23 = (undefined4)local_58;
      uVar24 = local_58._4_4_;
      uVar25 = (undefined4)uStack_50;
      uVar26 = uStack_50._4_4_;
    }
    uVar3 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    uVar4 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    uVar27 = (int)uVar3;
    uVar28 = (int)((ulong)uVar3 >> 0x20);
    uVar29 = (int)uVar4;
    uVar30 = (int)((ulong)uVar4 >> 0x20);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      local_58 = CONCAT44(uVar24,uVar23);
      uStack_50 = CONCAT44(uVar26,uVar25);
      uStack_30 = 0;
      uStack_40 = 0;
      local_48 = uVar4;
      local_38 = uVar3;
      il2cpp_runtime_helper_02337ed0();
      uVar23 = (undefined4)local_58;
      uVar24 = local_58._4_4_;
      uVar27 = (undefined4)local_38;
      uVar28 = local_38._4_4_;
      uVar29 = (undefined4)local_48;
      uVar30 = local_48._4_4_;
    }
    position.fields.y = (float)uVar24;
    position.fields.x = (float)uVar23;
    position.fields.z = fVar2;
    rotation.fields.y = (float)uVar28;
    rotation.fields.x = (float)uVar27;
    rotation.fields.w = (float)uVar30;
    rotation.fields.z = (float)uVar29;
    pUVar12 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object__25bc9b0
                        (pSVar6,"Human/Prefabs/HumanPlayer",position,rotation,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_045434d2;
    pCVar13 = (Characters_DummyHuman_o *)UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_DummyHuman_AddComponent_DummyHuman);
    (__this->fields).Human = pCVar13;
    ppCVar21 = &(__this->fields).Human;
    il2cpp_runtime_helper_022b4080(ppCVar21,pCVar13);
    pUVar14 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_Human_GetComponent_Human);
    if (pUVar14 == (UnityEngine_Behaviour_o *)0x0) goto label_045434d2;
    UnityEngine_Behaviour__set_enabled(pUVar14,0,(MethodInfo *)0x0);
    pUVar14 = (UnityEngine_Behaviour_o *)UnityEngine_GameObject__GetComponent_object_(pUVar12,MethodInfo_HumanMovementSync_GetComponent_HumanMovementSync);
    if (pUVar14 == (UnityEngine_Behaviour_o *)0x0) goto label_045434d2;
    UnityEngine_Behaviour__set_enabled(pUVar14,0,(MethodInfo *)0x0);
    if (((*ppCVar21 == (Characters_DummyHuman_o *)0x0) ||
        (lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60), lVar7 == 0)) ||
       (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar7 + 0x20),
       pSVar8 == (Settings_SetSettingsContainer_T__o *)0x0)) goto label_045434d2;
    __this_00 = ((*ppCVar21)->fields).Setup;
    customSet = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet(pSVar8,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (__this_00 == (Characters_HumanSetup_o *)0x0) goto label_045434d2;
    if (customSet == (Settings_HumanCustomSet_o *)0x0) {
label_045431c7:
      Characters_HumanSetup__Load(__this_00,customSet,0,0,(MethodInfo *)0x0);
      pCVar13 = *ppCVar21;
      goto joined_r0x04543474;
    }
    bVar5 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    pIVar19 = pIVar22;
    if ((bVar5 <= (customSet->klass->_2).naturalAligment) &&
       ((customSet->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_HumanCustomSet)) goto label_045431c7;
label_045434d7:
    il2cpp_runtime_helper_022b2fd0(customSet);
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057aef47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    g_data_057aef47 = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = System_IO_Directory__Exists
                     (*(System_String_o **)(*(long *)(TypeInfo_CharacterEditorGameManager + 0xb8) + 8),(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_CharacterEditorGameManager + 0xb8) + 8),(MethodInfo *)0x0);
  }
  pIVar22 = (pIVar19->_1).element_class;
  pIVar20 = (Il2CppObject *)0x0;
  if (pIVar22 == (Il2CppClass *)0x0) goto label_04543639;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pIVar22,0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) != '\0') goto label_04543598;
label_045435d1:
    if (g_data_057aef49 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
      g_data_057aef49 = '\x01';
    }
    puVar17 = &TypeInfo_GenerateTitanPreviewsCoroutine_d__10;
  }
  else {
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') goto label_045435d1;
label_04543598:
    if (g_data_057aef48 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
      g_data_057aef48 = '\x01';
    }
    puVar17 = &TypeInfo_GenerateHumanPreviewsCoroutine_d__9;
  }
  pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(*puVar17);
  pIVar20 = pIVar18;
  System_Object___ctor(pIVar18,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar18[1].klass = 0;
  if (pIVar18 != (Il2CppObject *)0x0) {
    pIVar18[2].klass = pIVar19;
    il2cpp_runtime_helper_022b4080(pIVar18 + 2,pIVar19);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)pIVar19,(System_Collections_IEnumerator_o *)pIVar18,
               (MethodInfo *)0x0);
    return;
  }
label_04543639:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
    g_data_057aef48 = '\x01';
  }
  pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
  pIVar22 = pIVar19;
  System_Object___ctor((Il2CppObject *)pIVar19,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar19->_1).name = 0;
  if (pIVar19 == (Il2CppClass *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aef49 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
      g_data_057aef49 = '\x01';
    }
    pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
    uVar23 = 0;
    pIVar20 = pIVar18;
    System_Object___ctor(pIVar18,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar18[1].klass = 0;
    if (pIVar18 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar20,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar20[1].klass = uVar23;
      return;
    }
    pIVar18[2].klass = pIVar22;
    il2cpp_runtime_helper_022b4080(pIVar18 + 2,pIVar22);
    return;
  }
  (pIVar19->_1).byval_arg.data = pIVar20;
  il2cpp_runtime_helper_022b4080(&(pIVar19->_1).byval_arg,pIVar20);
  return;
}


// GameManagers.CharacterEditorGameManager$$GeneratePreviews
// il2cpp: void GameManagers_CharacterEditorGameManager__GeneratePreviews (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x45434f0

void GameManagers_CharacterEditorGameManager__GeneratePreviews
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  undefined8 *puVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *__this_01;
  undefined4 uVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  
  if (g_data_057aef47 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    g_data_057aef47 = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_CharacterEditorGameManager + 0xb8) + 8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_CharacterEditorGameManager + 0xb8) + 8),(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).platform;
  pIVar5 = (Il2CppObject *)0x0;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_04543639;
  UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') goto label_045435d1;
label_04543598:
    if (g_data_057aef48 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
      g_data_057aef48 = '\x01';
    }
    puVar2 = &TypeInfo_GenerateHumanPreviewsCoroutine_d__9;
  }
  else {
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) != '\0') goto label_04543598;
label_045435d1:
    if (g_data_057aef49 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
      g_data_057aef49 = '\x01';
    }
    puVar2 = &TypeInfo_GenerateTitanPreviewsCoroutine_d__10;
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(*puVar2);
  pIVar5 = pIVar3;
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar3[1].klass = 0;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(pIVar3 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar3,
               (MethodInfo *)0x0);
    return;
  }
label_04543639:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
    g_data_057aef48 = '\x01';
  }
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
  pIVar6 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_01->_1).name = 0;
  if (__this_01 != (Il2CppClass *)0x0) {
    (__this_01->_1).byval_arg.data = pIVar5;
    il2cpp_runtime_helper_022b4080(&(__this_01->_1).byval_arg,pIVar5);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
    g_data_057aef49 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
  uVar4 = 0;
  pIVar5 = pIVar3;
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar3[1].klass = 0;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[2].klass = pIVar6;
    il2cpp_runtime_helper_022b4080(pIVar3 + 2,pIVar6);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar5[1].klass = uVar4;
  return;
}


// GameManagers.CharacterEditorGameManager$$GenerateHumanPreviewsCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x4543640

System_Collections_IEnumerator_o *
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine
          (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this_02;
  
  if (g_data_057aef48 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
    g_data_057aef48 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
  pIVar2 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
    g_data_057aef49 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
  uVar1 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar2;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar2);
    return (System_Collections_IEnumerator_o *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar1;
  return extraout_RAX;
}


// GameManagers.CharacterEditorGameManager$$GenerateTitanPreviewsCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x45436b0

System_Collections_IEnumerator_o *
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine
          (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057aef49 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
    g_data_057aef49 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// GameManagers.CharacterEditorGameManager$$Screenshot
// il2cpp: void GameManagers_CharacterEditorGameManager__Screenshot (GameManagers_CharacterEditorGameManager_o* __this, float x, float y, float w, float h, System_String_o* file, const MethodInfo* method);
// 0x4543760

void GameManagers_CharacterEditorGameManager__Screenshot
               (GameManagers_CharacterEditorGameManager_o *__this,float x,float y,float w,float h,
               System_String_o *file,MethodInfo *method)

{
  char cVar1;
  UnityEngine_Texture2D_o *__this_00;
  System_String_o *path;
  System_Byte_array *bytes;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBX;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o source;
  UnityEngine_Color_o color_00;
  undefined1 auVar4 [12];
  
  if (g_data_057aef4a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&".png");
    g_data_057aef4a = '\x01';
  }
  __this_00 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
  UnityEngine_Texture2D___ctor_4dd9130(__this_00,(int)w,(int)h,3,0,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Texture2D_o *)0x0) {
    auVar4 = il2cpp_runtime_helper_022b2c90();
    if (auVar4._8_4_ != 1) {
      _Unwind_Resume(auVar4._0_8_);
    }
    unaff_RBX = (undefined8 *)__cxa_begin_catch(auVar4._0_8_);
    cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*unaff_RBX);
    if (cVar1 == '\0') goto label_0454395e;
    __cxa_end_catch();
    uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    __this_00 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(uVar2);
    UnityEngine_Texture2D___ctor_4dd91d0(__this_00,1,1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Texture2D_o *)0x0) {
      color_00.fields.b = 1.0;
      color_00.fields.a = 1.0;
      color_00.fields.r = 1.0;
      color_00.fields.g = 1.0;
      UnityEngine_Texture2D__SetPixel(__this_00,0,0,color_00,(MethodInfo *)0x0);
      goto joined_r0x04543953;
    }
  }
  else {
    color.fields.b = 1.0;
    color.fields.a = 1.0;
    color.fields.r = 1.0;
    color.fields.g = 1.0;
    UnityEngine_Texture2D__SetPixel(__this_00,0,0,color,(MethodInfo *)0x0);
    source.fields.m_YMin = y;
    source.fields.m_XMin = x;
    source.fields.m_Height = h;
    source.fields.m_Width = w;
    UnityEngine_Texture2D__ReadPixels_4dd9b70(__this_00,source,0,0,(MethodInfo *)0x0);
joined_r0x04543953:
    if (__this_00 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply_4dd97c0(__this_00,(MethodInfo *)0x0);
      TextureScaler__ScaleBlocking(__this_00,0x80,0x80,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      path = System_String__Concat_3af7470
                       (*(System_String_o **)(*(long *)(TypeInfo_CharacterEditorGameManager + 0xb8) + 8),"/",file,
                        ".png",(MethodInfo *)0x0);
      bytes = UnityEngine_ImageConversion__EncodeToPNG(__this_00,(MethodInfo *)0x0);
      System_IO_File__WriteAllBytes(path,bytes,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0454395e:
  puVar3 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar3 = *unaff_RBX;
  __cxa_throw(puVar3,&PTR_PTR_05215060,0);
}


// GameManagers.CharacterEditorGameManager$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager___ctor (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x45439a0

void GameManagers_CharacterEditorGameManager___ctor
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.CharacterEditorGameManager$$.cctor
// il2cpp: void GameManagers_CharacterEditorGameManager___cctor (const MethodInfo* method);
// 0x45439b0

void GameManagers_CharacterEditorGameManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  
  if (g_data_057aef4b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&"/CharacterPreviews");
    g_data_057aef4b = '\x01';
  }
  **(undefined1 **)(TypeInfo_CharacterEditorGameManager + 0xb8) = 1;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_String__Concat_3ae5ba0
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CharacterPreviews",(MethodInfo *)0x0
                     );
  lVar1 = *(long *)(TypeInfo_CharacterEditorGameManager + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  return;
}


