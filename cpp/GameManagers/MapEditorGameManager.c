// Type: GameManagers.MapEditorGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/MapEditorGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/MapEditorGameManager.cs
// --------------------------------

// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__35___ctor (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x456c510

void GameManagers_MapEditorGameManager__WaitAndAutosave_d__35___ctor
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$System.IDisposable.Dispose
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_IDisposable_Dispose (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, const MethodInfo* method);
// 0x456e940

void GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_IDisposable_Dispose
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$MoveNext
// il2cpp: bool GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__MoveNext (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, const MethodInfo* method);
// 0x456e950

bool_conflict
GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__MoveNext
          (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorTopPanel_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar4;
  GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *pGVar5;
  
  pGVar5 = __this;
  if (g_data_057af04c == '\0') {
    pGVar5 = (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057af04c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pGVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
        (pUVar3 = (pGVar2->fields)._menu, pUVar3 == (UI_MapEditorMenu_o *)0x0)) ||
       (__this_00 = (pUVar3->fields)._topPanel,
       pGVar5 = (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *)0x0,
       __this_00 == (UI_MapEditorTopPanel_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(pGVar5->fields).__2__current;
    }
    UI_MapEditorTopPanel__Autosave(__this_00,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
  }
  __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_01,900.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_01;
  uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, const MethodInfo* method);
// 0x456ea10

Il2CppObject *
GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_Collections_IEnumerator_Reset (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, const MethodInfo* method);
// 0x456ea20

void GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_Collections_IEnumerator_Reset
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,MethodInfo *method)

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


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_Collections_IEnumerator_get_Current (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, const MethodInfo* method);
// 0x456ea60

Il2CppObject *
GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_Collections_IEnumerator_get_Current
          (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.MapEditorGameManager$$ShowAddObject
// il2cpp: void GameManagers_MapEditorGameManager__ShowAddObject (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4569660

void GameManagers_MapEditorGameManager__ShowAddObject
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar2;
  byte bVar3;
  int32_t length;
  UI_MapEditorInspectPanel_o *pUVar4;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar5;
  UI_MapEditorMenu_o *pUVar6;
  UI_MapEditorAddObjectPopup_o *pUVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar9;
  Map_MapScriptBaseObject_array *pMVar10;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  System_Object_array *pSVar12;
  undefined1 auVar13 [16];
  double dVar14;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_06;
  bool_conflict bVar15;
  UnityEngine_LayerMask_o mask;
  uint uVar16;
  UnityEngine_Object_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  System_Collections_Generic_Dictionary_string__string__o *pSVar19;
  UnityEngine_GameObject_o *pUVar20;
  Map_MapScriptObjects_o *__this_07;
  System_String_array *pSVar21;
  System_Int32_array *layers;
  System_String_Fields method_00;
  System_String_Fields item;
  System_Collections_Generic_List_object__o *__this_08;
  MethodInfo *pMVar22;
  char extraout_DL;
  MethodInfo *method_01;
  undefined8 in_RDX;
  UI_MapEditorInspectPanel_o *x;
  long lVar23;
  UI_BasePanel_o *pUVar24;
  long *plVar25;
  Map_MapScriptSceneObject_o *unaff_R12;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dd_03;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o UVar37;
  undefined1 auVar38 [12];
  System_Collections_Generic_List_T__o *pSVar39;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppObject *pIVar40;
  Il2CppObject *item_00;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined4 in_stack_ffffffffffffff18;
  float in_stack_ffffffffffffff24;
  float in_stack_ffffffffffffff28;
  float fStack_d0;
  float fStack_cc;
  double dStack_b8;
  undefined1 auStack_b0 [16];
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  undefined1 auStack_80 [16];
  Il2CppMethodPointer pIStack_70;
  Il2CppMethodPointer pIStack_68;
  InvokerMethod pIStack_60;
  uint32_t uStack_58;
  float fStack_54;
  float fStack_50;
  undefined8 uStack_4c;
  
  pUVar6 = (__this->fields)._menu;
  if (pUVar6 != (UI_MapEditorMenu_o *)0x0) {
    pUVar7 = (pUVar6->fields).AddObjectPopup;
    __this = (GameManagers_MapEditorGameManager_o *)0x0;
    if (pUVar7 != (UI_MapEditorAddObjectPopup_o *)0x0) {
      if ((char)(pUVar7->fields).IsActive != '\0') {
        UNRECOVERED_JUMPTABLE_00 = (pUVar7->klass->vtable)._22_Hide.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pUVar7,(pUVar7->klass->vtable)._22_Hide.method,in_RDX,UNRECOVERED_JUMPTABLE_00);
        return;
      }
      if ((char)(pUVar6->fields).IsMouseUI != '\0') {
        return;
      }
      UNRECOVERED_JUMPTABLE_00 = (pUVar7->klass->vtable)._21_Show.methodPtr;
      (*UNRECOVERED_JUMPTABLE_00)
                (pUVar7,(pUVar7->klass->vtable)._21_Show.method,in_RDX,UNRECOVERED_JUMPTABLE_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af034 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AddObjectCommand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"Custom/");
    g_data_057af034 = '\x01';
  }
  fStack_50 = 0.0;
  uStack_4c = 0;
  pIStack_60 = (InvokerMethod)0x0;
  uStack_58 = 0;
  fStack_54 = 0.0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  pIStack_68 = (Il2CppMethodPointer)0x0;
  __this_07 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
  method_00._stringLength = 0;
  method_00._firstChar = 0;
  method_00._6_2_ = 0;
  Map_MapScriptObjects___ctor(__this_07,(MethodInfo *)0x0);
  if ((System_String_Fields)method == (System_String_Fields)0x0) goto label_0456a135;
  method_00 = "Custom/";
  bVar15 = System_String__StartsWith
                     ((System_String_o *)method,(System_String_o *)"Custom/",(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0456a135;
    unaff_R12 = (Map_MapScriptSceneObject_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_01,(Il2CppObject *)method,MethodInfo_MapScriptBaseObject_get_Item);
    if (unaff_R12 == (Map_MapScriptSceneObject_o *)0x0) {
label_04569955:
      lVar23 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      method_00 = (System_String_Fields)method;
      if (((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x28), lVar23 == 0)) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar23 + 0x10), pUVar18 == (UnityEngine_Transform_o *)0x0))
      goto label_0456a135;
      method_00._stringLength = 0;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      UVar36 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
      fVar26 = UVar36.fields.z;
      lVar23 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x28), lVar23 == 0)) ||
         (pUVar18 = *(UnityEngine_Transform_o **)(lVar23 + 0x10), pUVar18 == (UnityEngine_Transform_o *)0x0))
      goto label_0456a135;
      method_00._stringLength = 0;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      UVar37 = UnityEngine_Transform__get_forward(pUVar18,(MethodInfo *)0x0);
      lVar23 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
      if (((lVar23 == 0) || (*(long *)(lVar23 + 0x68) == 0)) || (*(long *)(lVar23 + 0x70) == 0))
      goto label_0456a135;
      fVar35 = *(float *)(*(long *)(lVar23 + 0x68) + 0x14);
      fStack_d0 = UVar36.fields.x;
      fStack_cc = UVar36.fields.y;
      fStack_d0 = fStack_d0 + UVar37.fields.x * fVar35;
      fStack_cc = fStack_cc + UVar37.fields.y * fVar35;
      uVar32 = CONCAT44(fStack_cc,fStack_d0);
      fVar26 = fVar26 + UVar37.fields.z * fVar35;
      if (*(char *)(*(long *)(lVar23 + 0x70) + 0x11) != '\0') {
        lVar23 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0x28), lVar23 != 0)) &&
           (pUVar18 = *(UnityEngine_Transform_o **)(lVar23 + 0x10), pUVar18 != (UnityEngine_Transform_o *)0x0)
           ) {
          method_00._stringLength = 0;
          method_00._firstChar = 0;
          method_00._6_2_ = 0;
          UVar36 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
          lVar23 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if ((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0x28), lVar23 != 0)) {
            auStack_80._8_4_ = extraout_XMM0_Dc_01;
            auStack_80._0_8_ = UVar36.fields._0_8_;
            auStack_80._12_4_ = extraout_XMM0_Dd_01;
            pUVar18 = *(UnityEngine_Transform_o **)(lVar23 + 0x10);
            fStack_9c = UVar36.fields.z;
            if (pUVar18 != (UnityEngine_Transform_o *)0x0) {
              method_00._stringLength = 0;
              method_00._firstChar = 0;
              method_00._6_2_ = 0;
              UVar36 = UnityEngine_Transform__get_position(pUVar18,(MethodInfo *)0x0);
              fVar27 = UVar36.fields.x;
              fVar29 = UVar36.fields.y;
              fVar28 = extraout_XMM0_Dc_02;
              fVar35 = UVar36.fields.z;
              if (g_data_057a6845 == '\0') {
                auStack_b0._0_4_ = UVar36.fields.z;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6845 = '\x01';
                fVar35 = (float)auStack_b0._0_4_;
                in_stack_ffffffffffffff24 = fVar29;
                in_stack_ffffffffffffff28 = fVar28;
              }
              auVar33._0_4_ = fStack_d0 - fVar27;
              auVar33._4_4_ = fStack_cc - fVar29;
              auVar33._8_4_ = (extraout_XMM0_Dc + extraout_XMM0_Dc_00 * 0.0) - fVar28;
              auVar33._12_4_ = (extraout_XMM0_Dd + extraout_XMM0_Dd_00 * 0.0) - extraout_XMM0_Dd_02;
              fVar35 = fVar26 - fVar35;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                auStack_b0 = auVar33;
                il2cpp_runtime_helper_02337ed0();
                auVar33 = auStack_b0;
              }
              uVar30 = 0;
              uVar31 = 0;
              fVar28 = fVar35 * fVar35 + auVar33._4_4_ * auVar33._4_4_ + auVar33._0_4_ * auVar33._0_4_;
              if (fVar28 < 0.0) {
                auStack_b0 = auVar33;
                fVar28 = sqrtf(fVar28);
                uVar30 = extraout_XMM0_Dc_03;
                uVar31 = extraout_XMM0_Dd_03;
                auVar33 = auStack_b0;
                if (1e-05 < fVar28) goto label_04569bca;
label_04569b6e:
                if (g_data_057a65d5 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a65d5 = '\x01';
                }
                auVar34._8_8_ = 0;
                auVar34._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
                fVar35 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
              }
              else {
                fVar28 = SQRT(fVar28);
                if (fVar28 <= 1e-05) goto label_04569b6e;
label_04569bca:
                fVar35 = fVar35 / fVar28;
                auVar13._4_4_ = fVar28;
                auVar13._0_4_ = fVar28;
                auVar13._8_4_ = uVar30;
                auVar13._12_4_ = uVar31;
                auVar34 = divps(auVar33,auVar13);
              }
              lVar23 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
              if ((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0x68), auStack_b0 = auVar34, lVar23 != 0)) {
                fStack_a0 = *(float *)(lVar23 + 0x14);
                method_00._stringLength = 1;
                method_00._firstChar = 0;
                method_00._6_2_ = 0;
                layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
                if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                if (layers != (System_Int32_array *)0x0) {
                  if ((int)layers->max_length == 0) goto label_0456a13f;
                  layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
                  mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
                  uVar16 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  auVar33 = auStack_80;
                  uStack_98 = auStack_80._0_8_;
                  fStack_90 = fStack_9c;
                  uStack_8c = auStack_b0._0_4_;
                  uStack_88 = auStack_b0._4_4_;
                  uVar43 = CONCAT44(fVar35,uStack_88);
                  uVar42 = CONCAT44(uStack_8c,fStack_9c);
                  method_00._4_4_ = 0;
                  method_00._stringLength = uVar16;
                  ray.fields.m_Origin.fields.z = fStack_9c;
                  ray.fields.m_Direction.fields.x = (float)uStack_8c;
                  ray.fields.m_Origin.fields.x = (float)auStack_80._0_4_;
                  ray.fields.m_Origin.fields.y = (float)auStack_80._4_4_;
                  ray.fields.m_Direction.fields.y = (float)uStack_88;
                  ray.fields.m_Direction.fields.z = fVar35;
                  uVar41 = auStack_80._0_8_;
                  fStack_84 = fVar35;
                  auStack_80 = auVar33;
                  bVar15 = UnityEngine_Physics__Raycast_4e78080
                                     (ray,(UnityEngine_RaycastHit_o *)&pIStack_70,fStack_a0,uVar16,
                                      (MethodInfo *)0x0);
                  if ((char)bVar15 != '\0') {
                    method_00._stringLength = 0;
                    method_00._firstChar = 0;
                    method_00._6_2_ = 0;
                    __this_06.fields.m_Point.fields.z = (float)(int)uVar42;
                    __this_06.fields.m_Normal.fields.x = (float)(int)((ulong)uVar42 >> 0x20);
                    __this_06.fields.m_Point.fields.x = (float)(int)uVar41;
                    __this_06.fields.m_Point.fields.y = (float)(int)((ulong)uVar41 >> 0x20);
                    __this_06.fields.m_Normal.fields.y = (float)(int)uVar43;
                    __this_06.fields.m_Normal.fields.z = (float)(int)((ulong)uVar43 >> 0x20);
                    __this_06.fields.m_FaceID = in_stack_ffffffffffffff18;
                    __this_06.fields.m_Distance = fVar26;
                    __this_06.fields.m_UV.fields.x = fVar35;
                    __this_06.fields.m_UV.fields.y = in_stack_ffffffffffffff24;
                    __this_06.fields.m_Collider = (int32_t)in_stack_ffffffffffffff28;
                    UVar36 = UnityEngine_RaycastHit__get_point(__this_06,(MethodInfo *)&pIStack_70);
                    fVar26 = UVar36.fields.z;
                    uVar32 = UVar36.fields._0_8_;
                  }
                  goto label_04569d11;
                }
              }
            }
          }
        }
        goto label_0456a135;
      }
label_04569d11:
      plVar25 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (plVar25 == (long *)0x0) goto label_0456a135;
      method_00 = TypeInfo_MapEditorGameManager;
      if ((*(byte *)((long)TypeInfo_MapEditorGameManager + 0x130) <= *(byte *)(*plVar25 + 0x130)) &&
         (*(System_String_Fields *)
           (*(long *)(*plVar25 + 200) + -8 + (ulong)*(byte *)((long)TypeInfo_MapEditorGameManager + 0x130) * 8) == TypeInfo_MapEditorGameManager
         )) {
        if (*(char *)((long)plVar25 + 0x4c) != '\0') {
          lVar23 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
          if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x50), lVar23 == 0)) goto label_0456a135;
          fVar35 = *(float *)(lVar23 + 0x14);
          auStack_b0._0_4_ = fVar35;
          fVar35 = (float)uVar32 / fVar35;
          dVar14 = modf((double)fVar35,&dStack_b8,(MethodInfo *)TypeInfo_MapEditorGameManager);
          if (0.0 <= fVar35) {
            if ((dVar14 != 0.5) || (NAN(dVar14))) {
              fVar35 = floorf(fVar35 + 0.5);
            }
            else {
              fVar35 = (float)dStack_b8;
              if (((long)dStack_b8 & 1U) != 0) {
                fVar35 = fVar35 + 1.0;
              }
            }
          }
          else if ((dVar14 != -0.5) || (NAN(dVar14))) {
            fVar35 = ceilf(fVar35 + -0.5);
          }
          else {
            fVar35 = (float)dStack_b8;
            if (((long)dStack_b8 & 1U) != 0) {
              fVar35 = fVar35 + -1.0;
            }
          }
          fVar28 = (float)((ulong)uVar32 >> 0x20) / (float)auStack_b0._0_4_;
          dVar14 = modf((double)fVar28,&dStack_b8,(MethodInfo *)method_00);
          if (0.0 <= fVar28) {
            if ((dVar14 != 0.5) || (NAN(dVar14))) {
              fVar28 = floorf(fVar28 + 0.5);
            }
            else {
              fVar28 = (float)dStack_b8;
              if (((long)dStack_b8 & 1U) != 0) {
                fVar28 = fVar28 + 1.0;
              }
            }
          }
          else if ((dVar14 != -0.5) || (NAN(dVar14))) {
            fVar28 = ceilf(fVar28 + -0.5);
          }
          else {
            fVar28 = (float)dStack_b8;
            if (((long)dStack_b8 & 1U) != 0) {
              fVar28 = fVar28 + -1.0;
            }
          }
          fVar35 = fVar35 * (float)auStack_b0._0_4_;
          fVar28 = fVar28 * (float)auStack_b0._0_4_;
          fVar26 = fVar26 / (float)auStack_b0._0_4_;
          dVar14 = modf((double)fVar26,&dStack_b8,(MethodInfo *)method_00);
          if (0.0 <= fVar26) {
            if ((dVar14 != 0.5) || (NAN(dVar14))) {
              fVar26 = floorf(fVar26 + 0.5);
            }
            else {
              fVar26 = (float)dStack_b8;
              if (((long)dStack_b8 & 1U) != 0) {
                fVar26 = fVar26 + 1.0;
              }
            }
          }
          else if ((dVar14 != -0.5) || (NAN(dVar14))) {
            fVar26 = ceilf(fVar26 + -0.5);
          }
          else {
            fVar26 = (float)dStack_b8;
            if (((long)dStack_b8 & 1U) != 0) {
              fVar26 = fVar26 + -1.0;
            }
          }
          fVar26 = (float)auStack_b0._0_4_ * fVar26;
          uVar32 = CONCAT44(fVar28,fVar35);
        }
        if (unaff_R12 != (Map_MapScriptSceneObject_o *)0x0) {
          method_00._stringLength = 0;
          method_00._firstChar = 0;
          method_00._6_2_ = 0;
          UVar36.fields.z = fVar26;
          UVar36.fields.x = (float)(int)uVar32;
          UVar36.fields.y = (float)(int)((ulong)uVar32 >> 0x20);
          Map_MapScriptBaseObject__SetPosition
                    ((Map_MapScriptBaseObject_o *)unaff_R12,UVar36,(MethodInfo *)0x0);
          pMVar22 = MethodInfo_Void_Add;
          if ((__this_07 != (Map_MapScriptObjects_o *)0x0) &&
             (pSVar9 = (__this_07->fields).Objects,
             pSVar9 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
            piVar1 = &(pSVar9->fields)._version;
            *piVar1 = *piVar1 + 1;
            pMVar10 = (pSVar9->fields)._items;
            if (pMVar10 != (Map_MapScriptBaseObject_array *)0x0) {
              uVar16 = (pSVar9->fields)._size;
              if (uVar16 < (uint)pMVar10->max_length) {
                pMVar22 = (MethodInfo *)(ulong)(uVar16 + 1);
                (pSVar9->fields)._size = uVar16 + 1;
                pMVar10->m_Items[(int)uVar16] = (Map_MapScriptBaseObject_o *)unaff_R12;
                il2cpp_runtime_helper_022b4080(pMVar10->m_Items + (int)uVar16,unaff_R12);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)unaff_R12,
                           (MethodInfo_362C220 *)pMVar22->klass->rgctx_data[0xe].method);
              }
              pSVar9 = (__this_07->fields).Objects;
              method_00 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_AddObjectCommand);
              MapEditor_AddObjectCommand___ctor
                        ((MapEditor_AddObjectCommand_o *)method_00,pSVar9,(MethodInfo *)0x0);
              GameManagers_MapEditorGameManager__NewCommand
                        (__this,(MapEditor_BaseCommand_o *)method_00,1,pMVar22);
              GameManagers_MapEditorGameManager__DeselectAll(__this,(MethodInfo *)method_00);
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if ((System_Collections_Generic_Dictionary_int__object__o *)
                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
                  (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                uVar16 = (__this->fields)._currentObjectId;
                method_00._4_4_ = 0;
                method_00._stringLength = uVar16;
                item = (System_String_Fields)
                       System_Collections_Generic_Dictionary_int__object___get_Item
                                 ((System_Collections_Generic_Dictionary_int__object__o *)
                                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8),uVar16,MethodInfo_MapObject_get_Item);
                if (g_data_057af03d == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
                  g_data_057af03d = '\x01';
                }
                pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
                if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  System_Collections_Generic_HashSet_object___Add(pSVar11,(Il2CppObject *)item,MethodInfo_Boolean_Add);
                  pUVar6 = (__this->fields)._menu;
                  method_00 = item;
                  if (pUVar6 != (UI_MapEditorMenu_o *)0x0) {
                    pMVar22 = (MethodInfo *)0x0;
                    UI_MapEditorMenu__SyncHierarchyPanel(pUVar6,(MethodInfo *)0x0);
                    GameManagers_MapEditorGameManager__OnSelectionChange(__this,pMVar22);
                    return;
                  }
                }
              }
            }
          }
        }
        goto label_0456a135;
      }
      goto label_0456a13a;
    }
    method_00 = TypeInfo_MapScriptSceneObject;
    if ((*(byte *)((long)TypeInfo_MapScriptSceneObject + 0x130) <=
         (((System_Collections_Generic_List_object__c *)unaff_R12->klass)->_2).naturalAligment) &&
       (method = (MethodInfo *)TypeInfo_MapScriptSceneObject,
       *(System_String_Fields *)
        ((((System_Collections_Generic_List_object__c *)unaff_R12->klass)->_2).typeHierarchy +
        ((ulong)*(byte *)((long)TypeInfo_MapScriptSceneObject + 0x130) - 1)) == TypeInfo_MapScriptSceneObject)) goto label_04569955;
  }
  else {
    unaff_R12 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    Map_MapScriptSceneObject___ctor(unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 == (Map_MapScriptSceneObject_o *)0x0) {
label_0456a135:
      il2cpp_runtime_helper_022b2c90();
label_0456a13a:
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      (unaff_R12->fields).Asset = (System_String_o *)method;
      il2cpp_runtime_helper_022b4080(&(unaff_R12->fields).Asset,method);
      method_00._stringLength = 0x2f;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      pSVar21 = System_String__Split((System_String_o *)method,0x2f,0,(MethodInfo *)0x0);
      if (pSVar21 == (System_String_array *)0x0) goto label_0456a135;
      if (2 < (uint)pSVar21->max_length) {
        method_00 = *(System_String_Fields *)(pSVar21->m_Items + 2);
        *(System_String_Fields *)&(unaff_R12->fields).Visible = method_00;
        il2cpp_runtime_helper_022b4080(&(unaff_R12->fields).Visible);
        pSVar8 = (unaff_R12->fields).PhysicsMaterial;
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (pSVar8 != (System_String_o *)0x0) {
          method = *(MethodInfo **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8);
          pSVar8->fields = (System_String_Fields)method;
          il2cpp_runtime_helper_022b4080(&pSVar8->fields);
          goto label_04569955;
        }
        goto label_0456a135;
      }
    }
label_0456a13f:
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2fd0();
  plVar25 = (long *)unaff_R12;
  if (g_data_057af03e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransformPositionCommand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransformPositionRotationCommand);
    plVar25 = &TypeInfo_TransformScaleCommand;
    il2cpp_runtime_helper_023445d0();
    g_data_057af03e = '\x01';
  }
  if (method_00 == (System_String_Fields)0x0) {
label_0456a2f7:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af03b == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
      g_data_057af03b = '\x01';
    }
    pSVar39 = (System_Collections_Generic_List_T__o *)0x0;
    UNRECOVERED_JUMPTABLE_00 = (Il2CppMethodPointer)0x0;
    pIVar40 = (Il2CppObject *)0x0;
    pSVar8 = (((Map_MapScriptSceneObject_o *)plVar25)->fields).Name;
    __this_08 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
    System_Collections_Generic_List_object____ctor_362ba10
              (__this_08,(System_Collections_Generic_IEnumerable_T__o *)pSVar8,MethodInfo_List_1_Map_MapObject);
    if (__this_08 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffea0,__this_08,
                 MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
      item_00 = pIVar40;
      while( true ) {
        __this_02.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
        __this_02.fields._list = pSVar39;
        __this_02.fields._current = item_00;
        bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea0);
        if ((char)bVar15 == '\0') {
          __this_03.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
          __this_03.fields._list = pSVar39;
          __this_03.fields._current = item_00;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea0);
          return;
        }
        pIVar40 = item_00;
        if (g_data_057af03c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
          g_data_057af03c = '\x01';
        }
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)
                  (((Map_MapScriptSceneObject_o *)plVar25)->fields).Name;
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
        System_Collections_Generic_HashSet_object___Remove(pSVar11,item_00,MethodInfo_Boolean_Remove);
        item_00 = pIVar40;
      }
      il2cpp_runtime_helper_022b2c90();
    }
    auVar38 = il2cpp_runtime_helper_022b2c90();
    if (auVar38._8_4_ == 1) {
      plVar25 = (long *)__cxa_begin_catch(auVar38._0_8_);
      lVar23 = *plVar25;
      __cxa_end_catch();
      __this_04.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
      __this_04.fields._list = pSVar39;
      __this_04.fields._current = pIVar40;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea0);
      if (lVar23 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar23);
    }
    __this_05.fields._8_8_ = UNRECOVERED_JUMPTABLE_00;
    __this_05.fields._list = pSVar39;
    __this_05.fields._current = pIVar40;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea0);
    _Unwind_Resume(auVar38._0_8_);
  }
  (**(code **)(*(long *)method_00 + 0x178))(method_00,*(undefined8 *)(*(long *)method_00 + 0x180));
  lVar23 = MethodInfo_Void_Add;
  plVar25 = *(long **)&(unaff_R12->fields).RotationY;
  if ((Map_MapScriptSceneObject_o *)plVar25 == (Map_MapScriptSceneObject_o *)0x0) goto label_0456a2f7;
  piVar1 = (int32_t *)((long)&(((Map_MapScriptSceneObject_o *)plVar25)->fields).Asset + 4);
  *piVar1 = *piVar1 + 1;
  pSVar12 = (System_Object_array *)(((Map_MapScriptSceneObject_o *)plVar25)->fields).Type;
  if (pSVar12 == (System_Object_array *)0x0) goto label_0456a2f7;
  uVar16 = *(uint *)&(((Map_MapScriptSceneObject_o *)plVar25)->fields).Asset;
  if (uVar16 < (uint)pSVar12->max_length) {
    *(uint *)&(((Map_MapScriptSceneObject_o *)plVar25)->fields).Asset = uVar16 + 1;
    plVar25 = (long *)(pSVar12->m_Items + (int)uVar16);
    *(System_String_Fields *)(pSVar12->m_Items + (int)uVar16) = method_00;
    il2cpp_runtime_helper_022b4080();
    lVar23._0_4_ = (unaff_R12->fields).ScaleX;
    lVar23._4_4_ = (unaff_R12->fields).ScaleY;
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)plVar25,(Il2CppObject *)method_00,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
    lVar23._0_4_ = (unaff_R12->fields).ScaleX;
    lVar23._4_4_ = (unaff_R12->fields).ScaleY;
  }
  if (lVar23 == 0) goto label_0456a2f7;
  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
  length = *(int32_t *)(lVar23 + 0x18);
  *(undefined4 *)(lVar23 + 0x18) = 0;
  if (0 < length) {
    System_Array__Clear(*(System_Array_o **)(lVar23 + 0x10),0,length,(MethodInfo *)0x0);
  }
  lVar23 = *(long *)method_00;
  bVar3 = *(byte *)(lVar23 + 0x130);
  if (((((bVar3 < *(byte *)(TypeInfo_TransformPositionCommand + 0x130)) ||
        (*(long *)(*(long *)(lVar23 + 200) + -8 + (ulong)*(byte *)(TypeInfo_TransformPositionCommand + 0x130) * 8) != TypeInfo_TransformPositionCommand)
        ) && ((bVar3 < *(byte *)(TypeInfo_TransformPositionRotationCommand + 0x130) ||
              (*(long *)(*(long *)(lVar23 + 200) + -8 + (ulong)*(byte *)(TypeInfo_TransformPositionRotationCommand + 0x130) * 8) !=
               TypeInfo_TransformPositionRotationCommand)))) &&
      ((bVar3 < *(byte *)(TypeInfo_TransformScaleCommand + 0x130) ||
       (*(long *)(*(long *)(lVar23 + 200) + -8 + (ulong)*(byte *)(TypeInfo_TransformScaleCommand + 0x130) * 8) != TypeInfo_TransformScaleCommand))
      )) || (extraout_DL == '\0')) {
    return;
  }
  pUVar6 = (UI_MapEditorMenu_o *)(unaff_R12->fields).CollideMode;
  plVar25 = (long *)0x0;
  if (pUVar6 == (UI_MapEditorMenu_o *)0x0) goto label_0456a2f7;
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x = (pUVar6->fields).InspectPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    return;
  }
  pUVar4 = (pUVar6->fields).InspectPanel;
  if (pUVar4 != (UI_MapEditorInspectPanel_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270(pUVar6,(pUVar4->fields)._mapObjects,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pSVar19 = (x->fields)._syncedSerialized;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppSVar2 = &(x->fields)._syncedSerialized;
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
label_044375dc:
    pUVar18 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    pSVar19 = (System_Collections_Generic_Dictionary_string__string__o *)
              UI_ElementFactory__CreateHeadedPanel_object_(pUVar18,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    (x->fields)._syncedSerialized = pSVar19;
    il2cpp_runtime_helper_022b4080(ppSVar2);
    pSVar19 = (x->fields)._syncedSerialized;
    if (pSVar19 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar19,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar20,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      pSVar19 = *ppSVar2;
      if (pSVar19 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        (*(pSVar19->klass->vtable)._21_System_Collections_IDictionary_get_Item.methodPtr)
                  (pSVar19,(pSVar19->klass->vtable)._21_System_Collections_IDictionary_get_Item.method);
        return;
      }
    }
  }
  else if (*ppSVar2 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    pUVar17 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*ppSVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar17,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar23 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar17 = *(UnityEngine_Object_o **)(lVar23 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
    return;
  }
  pUVar24 = *(UI_BasePanel_o **)(lVar23 + 0xa8);
  if (pUVar24 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar24,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0);
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar18 = pUVar24[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pUVar18 = pUVar24[1].fields.DoublePanelRight;
    if ((pUVar18 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar24[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar5 = pUVar24[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar15 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pSVar5 = pUVar24[1].fields._popups;
    if ((pSVar5 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0),
       pUVar20 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar20,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      pUVar24 = (UI_BasePanel_o *)pUVar24[1].fields._popups;
      if (pUVar24 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar24,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.MapEditorGameManager$$AddObject
// il2cpp: void GameManagers_MapEditorGameManager__AddObject (GameManagers_MapEditorGameManager_o* __this, System_String_o* name, const MethodInfo* method);
// 0x45696c0

void GameManagers_MapEditorGameManager__AddObject
               (GameManagers_MapEditorGameManager_o *__this,System_String_o *name,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar2;
  byte bVar3;
  int32_t length;
  UI_MapEditorInspectPanel_o *pUVar4;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar7;
  Map_MapScriptBaseObject_array *pMVar8;
  System_Collections_Generic_HashSet_object__o *pSVar9;
  UI_MapEditorMenu_o *pUVar10;
  System_Object_array *pSVar11;
  undefined1 auVar12 [16];
  double dVar13;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_06;
  bool_conflict bVar14;
  UnityEngine_LayerMask_o mask;
  uint uVar15;
  UnityEngine_Object_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  System_Collections_Generic_Dictionary_string__string__o *pSVar18;
  UnityEngine_GameObject_o *pUVar19;
  Map_MapScriptObjects_o *__this_07;
  System_String_array *pSVar20;
  System_Int32_array *layers;
  System_String_Fields method_00;
  System_String_Fields item;
  System_Collections_Generic_List_object__o *__this_08;
  MethodInfo *pMVar21;
  char extraout_DL;
  MethodInfo *method_01;
  UI_MapEditorInspectPanel_o *x;
  long lVar22;
  UI_BasePanel_o *pUVar23;
  long *plVar24;
  Map_MapScriptSceneObject_o *unaff_R12;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 uVar30;
  undefined4 extraout_XMM0_Dd_03;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o UVar36;
  undefined1 auVar37 [12];
  System_Collections_Generic_List_T__o *pSVar38;
  Il2CppMethodPointer pIVar39;
  Il2CppObject *pIVar40;
  Il2CppObject *item_00;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined4 in_stack_ffffffffffffff20;
  float in_stack_ffffffffffffff2c;
  float in_stack_ffffffffffffff30;
  float local_c8;
  float fStack_c4;
  double local_b0;
  undefined1 local_a8 [16];
  float local_98;
  float local_94;
  undefined8 local_90;
  float fStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod pIStack_58;
  uint32_t uStack_50;
  float local_4c;
  float fStack_48;
  undefined8 uStack_44;
  
  if (g_data_057af034 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AddObjectCommand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapObjectShader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"Custom/");
    g_data_057af034 = '\x01';
  }
  fStack_48 = 0.0;
  uStack_44 = 0;
  pIStack_58 = (InvokerMethod)0x0;
  uStack_50 = 0;
  local_4c = 0.0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  __this_07 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
  method_00._stringLength = 0;
  method_00._firstChar = 0;
  method_00._6_2_ = 0;
  Map_MapScriptObjects___ctor(__this_07,(MethodInfo *)0x0);
  if (name == (System_String_o *)0x0) goto label_0456a135;
  method_00 = "Custom/";
  bVar14 = System_String__StartsWith(name,(System_String_o *)"Custom/",(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0456a135;
    unaff_R12 = (Map_MapScriptSceneObject_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_01,(Il2CppObject *)name,MethodInfo_MapScriptBaseObject_get_Item);
    if (unaff_R12 == (Map_MapScriptSceneObject_o *)0x0) {
label_04569955:
      lVar22 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      method_00 = (System_String_Fields)name;
      if (((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x28), lVar22 == 0)) ||
         (pUVar17 = *(UnityEngine_Transform_o **)(lVar22 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
      goto label_0456a135;
      method_00._stringLength = 0;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      UVar35 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      fVar25 = UVar35.fields.z;
      lVar22 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x28), lVar22 == 0)) ||
         (pUVar17 = *(UnityEngine_Transform_o **)(lVar22 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
      goto label_0456a135;
      method_00._stringLength = 0;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      UVar36 = UnityEngine_Transform__get_forward(pUVar17,(MethodInfo *)0x0);
      lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
      if (((lVar22 == 0) || (*(long *)(lVar22 + 0x68) == 0)) || (*(long *)(lVar22 + 0x70) == 0))
      goto label_0456a135;
      fVar34 = *(float *)(*(long *)(lVar22 + 0x68) + 0x14);
      local_c8 = UVar35.fields.x;
      fStack_c4 = UVar35.fields.y;
      local_c8 = local_c8 + UVar36.fields.x * fVar34;
      fStack_c4 = fStack_c4 + UVar36.fields.y * fVar34;
      uVar31 = CONCAT44(fStack_c4,local_c8);
      fVar25 = fVar25 + UVar36.fields.z * fVar34;
      if (*(char *)(*(long *)(lVar22 + 0x70) + 0x11) != '\0') {
        lVar22 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
        if (((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x28), lVar22 != 0)) &&
           (pUVar17 = *(UnityEngine_Transform_o **)(lVar22 + 0x10), pUVar17 != (UnityEngine_Transform_o *)0x0)
           ) {
          method_00._stringLength = 0;
          method_00._firstChar = 0;
          method_00._6_2_ = 0;
          UVar35 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
          lVar22 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x28), lVar22 != 0)) {
            local_78._8_4_ = extraout_XMM0_Dc_01;
            local_78._0_8_ = UVar35.fields._0_8_;
            local_78._12_4_ = extraout_XMM0_Dd_01;
            pUVar17 = *(UnityEngine_Transform_o **)(lVar22 + 0x10);
            local_94 = UVar35.fields.z;
            if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
              method_00._stringLength = 0;
              method_00._firstChar = 0;
              method_00._6_2_ = 0;
              UVar35 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
              fVar26 = UVar35.fields.x;
              fVar28 = UVar35.fields.y;
              fVar27 = extraout_XMM0_Dc_02;
              fVar34 = UVar35.fields.z;
              if (g_data_057a6845 == '\0') {
                local_a8._0_4_ = UVar35.fields.z;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                g_data_057a6845 = '\x01';
                fVar34 = (float)local_a8._0_4_;
                in_stack_ffffffffffffff2c = fVar28;
                in_stack_ffffffffffffff30 = fVar27;
              }
              auVar32._0_4_ = local_c8 - fVar26;
              auVar32._4_4_ = fStack_c4 - fVar28;
              auVar32._8_4_ = (extraout_XMM0_Dc + extraout_XMM0_Dc_00 * 0.0) - fVar27;
              auVar32._12_4_ = (extraout_XMM0_Dd + extraout_XMM0_Dd_00 * 0.0) - extraout_XMM0_Dd_02;
              fVar34 = fVar25 - fVar34;
              if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                local_a8 = auVar32;
                il2cpp_runtime_helper_02337ed0();
                auVar32 = local_a8;
              }
              uVar29 = 0;
              uVar30 = 0;
              fVar27 = fVar34 * fVar34 + auVar32._4_4_ * auVar32._4_4_ + auVar32._0_4_ * auVar32._0_4_;
              if (fVar27 < 0.0) {
                local_a8 = auVar32;
                fVar27 = sqrtf(fVar27);
                uVar29 = extraout_XMM0_Dc_03;
                uVar30 = extraout_XMM0_Dd_03;
                auVar32 = local_a8;
                if (1e-05 < fVar27) goto label_04569bca;
label_04569b6e:
                if (g_data_057a65d5 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                  g_data_057a65d5 = '\x01';
                }
                auVar33._8_8_ = 0;
                auVar33._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
                fVar34 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
              }
              else {
                fVar27 = SQRT(fVar27);
                if (fVar27 <= 1e-05) goto label_04569b6e;
label_04569bca:
                fVar34 = fVar34 / fVar27;
                auVar12._4_4_ = fVar27;
                auVar12._0_4_ = fVar27;
                auVar12._8_4_ = uVar29;
                auVar12._12_4_ = uVar30;
                auVar33 = divps(auVar32,auVar12);
              }
              lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
              if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x68), local_a8 = auVar33, lVar22 != 0)) {
                local_98 = *(float *)(lVar22 + 0x14);
                method_00._stringLength = 1;
                method_00._firstChar = 0;
                method_00._6_2_ = 0;
                layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
                if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                if (layers != (System_Int32_array *)0x0) {
                  if ((int)layers->max_length == 0) goto label_0456a13f;
                  layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
                  mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
                  uVar15 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  auVar32 = local_78;
                  local_90 = local_78._0_8_;
                  fStack_88 = local_94;
                  uStack_84 = local_a8._0_4_;
                  uStack_80 = local_a8._4_4_;
                  uVar43 = CONCAT44(fVar34,uStack_80);
                  uVar42 = CONCAT44(uStack_84,local_94);
                  method_00._4_4_ = 0;
                  method_00._stringLength = uVar15;
                  ray.fields.m_Origin.fields.z = local_94;
                  ray.fields.m_Direction.fields.x = (float)uStack_84;
                  ray.fields.m_Origin.fields.x = (float)local_78._0_4_;
                  ray.fields.m_Origin.fields.y = (float)local_78._4_4_;
                  ray.fields.m_Direction.fields.y = (float)uStack_80;
                  ray.fields.m_Direction.fields.z = fVar34;
                  uVar41 = local_78._0_8_;
                  fStack_7c = fVar34;
                  local_78 = auVar32;
                  bVar14 = UnityEngine_Physics__Raycast_4e78080
                                     (ray,(UnityEngine_RaycastHit_o *)&local_68,local_98,uVar15,
                                      (MethodInfo *)0x0);
                  if ((char)bVar14 != '\0') {
                    method_00._stringLength = 0;
                    method_00._firstChar = 0;
                    method_00._6_2_ = 0;
                    __this_06.fields.m_Point.fields.z = (float)(int)uVar42;
                    __this_06.fields.m_Normal.fields.x = (float)(int)((ulong)uVar42 >> 0x20);
                    __this_06.fields.m_Point.fields.x = (float)(int)uVar41;
                    __this_06.fields.m_Point.fields.y = (float)(int)((ulong)uVar41 >> 0x20);
                    __this_06.fields.m_Normal.fields.y = (float)(int)uVar43;
                    __this_06.fields.m_Normal.fields.z = (float)(int)((ulong)uVar43 >> 0x20);
                    __this_06.fields.m_FaceID = in_stack_ffffffffffffff20;
                    __this_06.fields.m_Distance = fVar25;
                    __this_06.fields.m_UV.fields.x = fVar34;
                    __this_06.fields.m_UV.fields.y = in_stack_ffffffffffffff2c;
                    __this_06.fields.m_Collider = (int32_t)in_stack_ffffffffffffff30;
                    UVar35 = UnityEngine_RaycastHit__get_point(__this_06,(MethodInfo *)&local_68);
                    fVar25 = UVar35.fields.z;
                    uVar31 = UVar35.fields._0_8_;
                  }
                  goto label_04569d11;
                }
              }
            }
          }
        }
        goto label_0456a135;
      }
label_04569d11:
      plVar24 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (plVar24 == (long *)0x0) goto label_0456a135;
      method_00 = TypeInfo_MapEditorGameManager;
      if ((*(byte *)((long)TypeInfo_MapEditorGameManager + 0x130) <= *(byte *)(*plVar24 + 0x130)) &&
         (*(System_String_Fields *)
           (*(long *)(*plVar24 + 200) + -8 + (ulong)*(byte *)((long)TypeInfo_MapEditorGameManager + 0x130) * 8) == TypeInfo_MapEditorGameManager
         )) {
        if (*(char *)((long)plVar24 + 0x4c) != '\0') {
          lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
          if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x50), lVar22 == 0)) goto label_0456a135;
          fVar34 = *(float *)(lVar22 + 0x14);
          local_a8._0_4_ = fVar34;
          fVar34 = (float)uVar31 / fVar34;
          dVar13 = modf((double)fVar34,&local_b0,(MethodInfo *)TypeInfo_MapEditorGameManager);
          if (0.0 <= fVar34) {
            if ((dVar13 != 0.5) || (NAN(dVar13))) {
              fVar34 = floorf(fVar34 + 0.5);
            }
            else {
              fVar34 = (float)local_b0;
              if (((long)local_b0 & 1U) != 0) {
                fVar34 = fVar34 + 1.0;
              }
            }
          }
          else if ((dVar13 != -0.5) || (NAN(dVar13))) {
            fVar34 = ceilf(fVar34 + -0.5);
          }
          else {
            fVar34 = (float)local_b0;
            if (((long)local_b0 & 1U) != 0) {
              fVar34 = fVar34 + -1.0;
            }
          }
          fVar27 = (float)((ulong)uVar31 >> 0x20) / (float)local_a8._0_4_;
          dVar13 = modf((double)fVar27,&local_b0,(MethodInfo *)method_00);
          if (0.0 <= fVar27) {
            if ((dVar13 != 0.5) || (NAN(dVar13))) {
              fVar27 = floorf(fVar27 + 0.5);
            }
            else {
              fVar27 = (float)local_b0;
              if (((long)local_b0 & 1U) != 0) {
                fVar27 = fVar27 + 1.0;
              }
            }
          }
          else if ((dVar13 != -0.5) || (NAN(dVar13))) {
            fVar27 = ceilf(fVar27 + -0.5);
          }
          else {
            fVar27 = (float)local_b0;
            if (((long)local_b0 & 1U) != 0) {
              fVar27 = fVar27 + -1.0;
            }
          }
          fVar34 = fVar34 * (float)local_a8._0_4_;
          fVar27 = fVar27 * (float)local_a8._0_4_;
          fVar25 = fVar25 / (float)local_a8._0_4_;
          dVar13 = modf((double)fVar25,&local_b0,(MethodInfo *)method_00);
          if (0.0 <= fVar25) {
            if ((dVar13 != 0.5) || (NAN(dVar13))) {
              fVar25 = floorf(fVar25 + 0.5);
            }
            else {
              fVar25 = (float)local_b0;
              if (((long)local_b0 & 1U) != 0) {
                fVar25 = fVar25 + 1.0;
              }
            }
          }
          else if ((dVar13 != -0.5) || (NAN(dVar13))) {
            fVar25 = ceilf(fVar25 + -0.5);
          }
          else {
            fVar25 = (float)local_b0;
            if (((long)local_b0 & 1U) != 0) {
              fVar25 = fVar25 + -1.0;
            }
          }
          fVar25 = (float)local_a8._0_4_ * fVar25;
          uVar31 = CONCAT44(fVar27,fVar34);
        }
        if (unaff_R12 != (Map_MapScriptSceneObject_o *)0x0) {
          method_00._stringLength = 0;
          method_00._firstChar = 0;
          method_00._6_2_ = 0;
          UVar35.fields.z = fVar25;
          UVar35.fields.x = (float)(int)uVar31;
          UVar35.fields.y = (float)(int)((ulong)uVar31 >> 0x20);
          Map_MapScriptBaseObject__SetPosition
                    ((Map_MapScriptBaseObject_o *)unaff_R12,UVar35,(MethodInfo *)0x0);
          pMVar21 = MethodInfo_Void_Add;
          if ((__this_07 != (Map_MapScriptObjects_o *)0x0) &&
             (pSVar7 = (__this_07->fields).Objects,
             pSVar7 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pMVar8 = (pSVar7->fields)._items;
            if (pMVar8 != (Map_MapScriptBaseObject_array *)0x0) {
              uVar15 = (pSVar7->fields)._size;
              if (uVar15 < (uint)pMVar8->max_length) {
                pMVar21 = (MethodInfo *)(ulong)(uVar15 + 1);
                (pSVar7->fields)._size = uVar15 + 1;
                pMVar8->m_Items[(int)uVar15] = (Map_MapScriptBaseObject_o *)unaff_R12;
                il2cpp_runtime_helper_022b4080(pMVar8->m_Items + (int)uVar15,unaff_R12);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)unaff_R12,
                           (MethodInfo_362C220 *)pMVar21->klass->rgctx_data[0xe].method);
              }
              pSVar7 = (__this_07->fields).Objects;
              method_00 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_AddObjectCommand);
              MapEditor_AddObjectCommand___ctor
                        ((MapEditor_AddObjectCommand_o *)method_00,pSVar7,(MethodInfo *)0x0);
              GameManagers_MapEditorGameManager__NewCommand
                        (__this,(MapEditor_BaseCommand_o *)method_00,1,pMVar21);
              GameManagers_MapEditorGameManager__DeselectAll(__this,(MethodInfo *)method_00);
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if ((System_Collections_Generic_Dictionary_int__object__o *)
                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
                  (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                uVar15 = (__this->fields)._currentObjectId;
                method_00._4_4_ = 0;
                method_00._stringLength = uVar15;
                item = (System_String_Fields)
                       System_Collections_Generic_Dictionary_int__object___get_Item
                                 ((System_Collections_Generic_Dictionary_int__object__o *)
                                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8),uVar15,MethodInfo_MapObject_get_Item);
                if (g_data_057af03d == '\0') {
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
                  g_data_057af03d = '\x01';
                }
                pSVar9 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
                if (pSVar9 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  System_Collections_Generic_HashSet_object___Add(pSVar9,(Il2CppObject *)item,MethodInfo_Boolean_Add);
                  pUVar10 = (__this->fields)._menu;
                  method_00 = item;
                  if (pUVar10 != (UI_MapEditorMenu_o *)0x0) {
                    pMVar21 = (MethodInfo *)0x0;
                    UI_MapEditorMenu__SyncHierarchyPanel(pUVar10,(MethodInfo *)0x0);
                    GameManagers_MapEditorGameManager__OnSelectionChange(__this,pMVar21);
                    return;
                  }
                }
              }
            }
          }
        }
        goto label_0456a135;
      }
      goto label_0456a13a;
    }
    method_00 = TypeInfo_MapScriptSceneObject;
    if ((*(byte *)((long)TypeInfo_MapScriptSceneObject + 0x130) <=
         (((System_Collections_Generic_List_object__c *)unaff_R12->klass)->_2).naturalAligment) &&
       (name = (System_String_o *)TypeInfo_MapScriptSceneObject,
       *(System_String_Fields *)
        ((((System_Collections_Generic_List_object__c *)unaff_R12->klass)->_2).typeHierarchy +
        ((ulong)*(byte *)((long)TypeInfo_MapScriptSceneObject + 0x130) - 1)) == TypeInfo_MapScriptSceneObject)) goto label_04569955;
  }
  else {
    unaff_R12 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
    method_00._stringLength = 0;
    method_00._firstChar = 0;
    method_00._6_2_ = 0;
    Map_MapScriptSceneObject___ctor(unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 == (Map_MapScriptSceneObject_o *)0x0) {
label_0456a135:
      il2cpp_runtime_helper_022b2c90();
label_0456a13a:
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      (unaff_R12->fields).Asset = name;
      il2cpp_runtime_helper_022b4080(&(unaff_R12->fields).Asset,name);
      method_00._stringLength = 0x2f;
      method_00._firstChar = 0;
      method_00._6_2_ = 0;
      pSVar20 = System_String__Split(name,0x2f,0,(MethodInfo *)0x0);
      if (pSVar20 == (System_String_array *)0x0) goto label_0456a135;
      if (2 < (uint)pSVar20->max_length) {
        method_00 = *(System_String_Fields *)(pSVar20->m_Items + 2);
        *(System_String_Fields *)&(unaff_R12->fields).Visible = method_00;
        il2cpp_runtime_helper_022b4080(&(unaff_R12->fields).Visible);
        pSVar6 = (unaff_R12->fields).PhysicsMaterial;
        if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (pSVar6 != (System_String_o *)0x0) {
          name = *(System_String_o **)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8);
          pSVar6->fields = (System_String_Fields)name;
          il2cpp_runtime_helper_022b4080(&pSVar6->fields);
          goto label_04569955;
        }
        goto label_0456a135;
      }
    }
label_0456a13f:
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2fd0();
  plVar24 = (long *)unaff_R12;
  if (g_data_057af03e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransformPositionCommand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransformPositionRotationCommand);
    plVar24 = &TypeInfo_TransformScaleCommand;
    il2cpp_runtime_helper_023445d0();
    g_data_057af03e = '\x01';
  }
  if (method_00 == (System_String_Fields)0x0) {
label_0456a2f7:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af03b == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
      g_data_057af03b = '\x01';
    }
    pSVar38 = (System_Collections_Generic_List_T__o *)0x0;
    pIVar39 = (Il2CppMethodPointer)0x0;
    pIVar40 = (Il2CppObject *)0x0;
    pSVar6 = (((Map_MapScriptSceneObject_o *)plVar24)->fields).Name;
    __this_08 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
    System_Collections_Generic_List_object____ctor_362ba10
              (__this_08,(System_Collections_Generic_IEnumerable_T__o *)pSVar6,MethodInfo_List_1_Map_MapObject);
    if (__this_08 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xfffffffffffffea8,__this_08,
                 MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
      item_00 = pIVar40;
      while( true ) {
        __this_02.fields._8_8_ = pIVar39;
        __this_02.fields._list = pSVar38;
        __this_02.fields._current = item_00;
        bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_02,(MethodInfo_321A1D0 *)&stack0xfffffffffffffea8);
        if ((char)bVar14 == '\0') {
          __this_03.fields._8_8_ = pIVar39;
          __this_03.fields._list = pSVar38;
          __this_03.fields._current = item_00;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
          return;
        }
        pIVar40 = item_00;
        if (g_data_057af03c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
          g_data_057af03c = '\x01';
        }
        pSVar9 = (System_Collections_Generic_HashSet_object__o *)
                 (((Map_MapScriptSceneObject_o *)plVar24)->fields).Name;
        if (pSVar9 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
        System_Collections_Generic_HashSet_object___Remove(pSVar9,item_00,MethodInfo_Boolean_Remove);
        item_00 = pIVar40;
      }
      il2cpp_runtime_helper_022b2c90();
    }
    auVar37 = il2cpp_runtime_helper_022b2c90();
    if (auVar37._8_4_ == 1) {
      plVar24 = (long *)__cxa_begin_catch(auVar37._0_8_);
      lVar22 = *plVar24;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar39;
      __this_04.fields._list = pSVar38;
      __this_04.fields._current = pIVar40;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
      if (lVar22 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar22);
    }
    __this_05.fields._8_8_ = pIVar39;
    __this_05.fields._list = pSVar38;
    __this_05.fields._current = pIVar40;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xfffffffffffffea8);
    _Unwind_Resume(auVar37._0_8_);
  }
  (**(code **)(*(long *)method_00 + 0x178))(method_00,*(undefined8 *)(*(long *)method_00 + 0x180));
  lVar22 = MethodInfo_Void_Add;
  plVar24 = *(long **)&(unaff_R12->fields).RotationY;
  if ((Map_MapScriptSceneObject_o *)plVar24 == (Map_MapScriptSceneObject_o *)0x0) goto label_0456a2f7;
  piVar1 = (int32_t *)((long)&(((Map_MapScriptSceneObject_o *)plVar24)->fields).Asset + 4);
  *piVar1 = *piVar1 + 1;
  pSVar11 = (System_Object_array *)(((Map_MapScriptSceneObject_o *)plVar24)->fields).Type;
  if (pSVar11 == (System_Object_array *)0x0) goto label_0456a2f7;
  uVar15 = *(uint *)&(((Map_MapScriptSceneObject_o *)plVar24)->fields).Asset;
  if (uVar15 < (uint)pSVar11->max_length) {
    *(uint *)&(((Map_MapScriptSceneObject_o *)plVar24)->fields).Asset = uVar15 + 1;
    plVar24 = (long *)(pSVar11->m_Items + (int)uVar15);
    *(System_String_Fields *)(pSVar11->m_Items + (int)uVar15) = method_00;
    il2cpp_runtime_helper_022b4080();
    lVar22._0_4_ = (unaff_R12->fields).ScaleX;
    lVar22._4_4_ = (unaff_R12->fields).ScaleY;
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)plVar24,(Il2CppObject *)method_00,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
    lVar22._0_4_ = (unaff_R12->fields).ScaleX;
    lVar22._4_4_ = (unaff_R12->fields).ScaleY;
  }
  if (lVar22 == 0) goto label_0456a2f7;
  *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
  length = *(int32_t *)(lVar22 + 0x18);
  *(undefined4 *)(lVar22 + 0x18) = 0;
  if (0 < length) {
    System_Array__Clear(*(System_Array_o **)(lVar22 + 0x10),0,length,(MethodInfo *)0x0);
  }
  lVar22 = *(long *)method_00;
  bVar3 = *(byte *)(lVar22 + 0x130);
  if (((((bVar3 < *(byte *)(TypeInfo_TransformPositionCommand + 0x130)) ||
        (*(long *)(*(long *)(lVar22 + 200) + -8 + (ulong)*(byte *)(TypeInfo_TransformPositionCommand + 0x130) * 8) != TypeInfo_TransformPositionCommand)
        ) && ((bVar3 < *(byte *)(TypeInfo_TransformPositionRotationCommand + 0x130) ||
              (*(long *)(*(long *)(lVar22 + 200) + -8 + (ulong)*(byte *)(TypeInfo_TransformPositionRotationCommand + 0x130) * 8) !=
               TypeInfo_TransformPositionRotationCommand)))) &&
      ((bVar3 < *(byte *)(TypeInfo_TransformScaleCommand + 0x130) ||
       (*(long *)(*(long *)(lVar22 + 200) + -8 + (ulong)*(byte *)(TypeInfo_TransformScaleCommand + 0x130) * 8) != TypeInfo_TransformScaleCommand))
      )) || (extraout_DL == '\0')) {
    return;
  }
  pUVar10 = (UI_MapEditorMenu_o *)(unaff_R12->fields).CollideMode;
  plVar24 = (long *)0x0;
  if (pUVar10 == (UI_MapEditorMenu_o *)0x0) goto label_0456a2f7;
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x = (pUVar10->fields).InspectPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    return;
  }
  pUVar4 = (pUVar10->fields).InspectPanel;
  if (pUVar4 != (UI_MapEditorInspectPanel_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270(pUVar10,(pUVar4->fields)._mapObjects,method_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pSVar18 = (x->fields)._syncedSerialized;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppSVar2 = &(x->fields)._syncedSerialized;
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
label_044375dc:
    pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    pSVar18 = (System_Collections_Generic_Dictionary_string__string__o *)
              UI_ElementFactory__CreateHeadedPanel_object_(pUVar17,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    (x->fields)._syncedSerialized = pSVar18;
    il2cpp_runtime_helper_022b4080(ppSVar2);
    pSVar18 = (x->fields)._syncedSerialized;
    if (pSVar18 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      pUVar19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar18,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar19,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      pSVar18 = *ppSVar2;
      if (pSVar18 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        (*(pSVar18->klass->vtable)._21_System_Collections_IDictionary_get_Item.methodPtr)
                  (pSVar18,(pSVar18->klass->vtable)._21_System_Collections_IDictionary_get_Item.method);
        return;
      }
    }
  }
  else if (*ppSVar2 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    pUVar16 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*ppSVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar16,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar22 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar16 = *(UnityEngine_Object_o **)(lVar22 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    return;
  }
  pUVar23 = *(UI_BasePanel_o **)(lVar22 + 0xa8);
  if (pUVar23 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar23,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0);
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar17 = pUVar23[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    pUVar17 = pUVar23[1].fields.DoublePanelRight;
    if ((pUVar17 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0),
       pUVar19 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar19,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar23[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar5 = pUVar23[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    pSVar5 = pUVar23[1].fields._popups;
    if ((pSVar5 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0),
       pUVar19 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar19,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pUVar23 = (UI_BasePanel_o *)pUVar23[1].fields._popups;
      if (pUVar23 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar23,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.MapEditorGameManager$$Undo
// il2cpp: void GameManagers_MapEditorGameManager__Undo (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456a8d0

void GameManagers_MapEditorGameManager__Undo(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  UI_MapEditorMenu_o *pUVar6;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  Il2CppClass *pIVar7;
  Map_MapScriptBaseObject_array *pMVar8;
  long lVar9;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  bool_conflict bVar10;
  Il2CppObject *pIVar11;
  System_Object_array *pSVar12;
  long *plVar13;
  Il2CppObject *unaff_RBX;
  MethodInfo *pMVar14;
  GameManagers_MapEditorGameManager_o *__this_06;
  System_Collections_Generic_List_object__o *pSVar15;
  System_Collections_Generic_List_object__o *__this_07;
  Map_MapScriptObjects_o *unaff_R12;
  undefined1 auVar16 [12];
  System_Collections_Generic_HashSet_T__o *pSVar17;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar18;
  Il2CppType *pIVar19;
  undefined1 auStack_70 [16];
  Il2CppType *pIStack_60;
  Il2CppObject *pIStack_58;
  
  if (g_data_057af035 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AddObjectCommand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteObjectCommand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCommand_get_Item);
    g_data_057af035 = '\x01';
  }
  __this_06 = (GameManagers_MapEditorGameManager_o *)(__this->fields)._undoCommands;
  if (__this_06 != (GameManagers_MapEditorGameManager_o *)0x0) {
    iVar4 = *(int *)&(__this_06->fields).m_CancellationTokenSource;
    if (iVar4 == 0) {
      return;
    }
    pIVar11 = System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)__this_06,iVar4 + -1,MethodInfo_BaseCommand_get_Item);
    if (pIVar11 != (Il2CppObject *)0x0) {
      (*pIVar11->klass->vtable[5].methodPtr)(pIVar11);
      lVar9 = MethodInfo_Void_Add;
      __this_06 = (GameManagers_MapEditorGameManager_o *)(__this->fields)._redoCommands;
      unaff_RBX = pIVar11;
      if (__this_06 != (GameManagers_MapEditorGameManager_o *)0x0) {
        piVar1 = (int32_t *)((long)&(__this_06->fields).m_CancellationTokenSource + 4);
        *piVar1 = *piVar1 + 1;
        pSVar12 = (System_Object_array *)(__this_06->fields).m_CachedPtr;
        if (pSVar12 != (System_Object_array *)0x0) {
          uVar5 = *(uint *)&(__this_06->fields).m_CancellationTokenSource;
          if (uVar5 < (uint)pSVar12->max_length) {
            *(uint *)&(__this_06->fields).m_CancellationTokenSource = uVar5 + 1;
            pSVar12->m_Items[(int)uVar5] = pIVar11;
            il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar5);
            pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
            if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) {
              __this_06 = (GameManagers_MapEditorGameManager_o *)0x0;
            }
            else {
label_0456a9fe:
              System_Collections_Generic_List_object___RemoveAt
                        (pSVar15,(pSVar15->fields)._size + -1,MethodInfo_Void_RemoveAt);
              pIVar7 = pIVar11->klass;
              bVar2 = (pIVar7->_2).naturalAligment;
              bVar3 = (TypeInfo_AddObjectCommand->_2).naturalAligment;
              if (((bVar2 < bVar3) || ((pIVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_AddObjectCommand)) &&
                 ((bVar3 = (TypeInfo_DeleteObjectCommand->_2).naturalAligment, pMVar14 = (MethodInfo *)(ulong)bVar3,
                  bVar2 < bVar3 || ((pIVar7->_2).typeHierarchy[(long)&pMVar14[-1].field_0x57] != TypeInfo_DeleteObjectCommand)
                  ))) {
label_0456aa74:
                GameManagers_MapEditorGameManager__OnSelectionChange(__this,pMVar14);
                return;
              }
              pUVar6 = (__this->fields)._menu;
              __this_06 = (GameManagers_MapEditorGameManager_o *)0x0;
              if (pUVar6 != (UI_MapEditorMenu_o *)0x0) {
                pMVar14 = (MethodInfo *)0x0;
                UI_MapEditorMenu__SyncHierarchyPanel(pUVar6,(MethodInfo *)0x0);
                goto label_0456aa74;
              }
            }
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_06,pIVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            pSVar15 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
            __this_06 = (GameManagers_MapEditorGameManager_o *)0x0;
            if (pSVar15 != (System_Collections_Generic_List_object__o *)0x0) goto label_0456a9fe;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af036 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AddObjectCommand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteObjectCommand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCommand_get_Item);
    g_data_057af036 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_object__o *)(__this_06->fields)._redoCommands;
  if (pSVar15 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar4 = (pSVar15->fields)._size;
    if (iVar4 == 0) {
      return;
    }
    pIVar11 = System_Collections_Generic_List_object___get_Item(pSVar15,iVar4 + -1,MethodInfo_BaseCommand_get_Item);
    if (pIVar11 != (Il2CppObject *)0x0) {
      (*pIVar11->klass->vtable[4].methodPtr)(pIVar11);
      lVar9 = MethodInfo_Void_Add;
      pSVar15 = (System_Collections_Generic_List_object__o *)(__this_06->fields)._undoCommands;
      unaff_RBX = pIVar11;
      if (pSVar15 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar1 = &(pSVar15->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar12 = (pSVar15->fields)._items;
        if (pSVar12 != (System_Object_array *)0x0) {
          uVar5 = (pSVar15->fields)._size;
          if (uVar5 < (uint)pSVar12->max_length) {
            (pSVar15->fields)._size = uVar5 + 1;
            pSVar12->m_Items[(int)uVar5] = pIVar11;
            il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar5);
            __this_07 = (System_Collections_Generic_List_object__o *)(__this_06->fields)._redoCommands;
            if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) {
              pSVar15 = (System_Collections_Generic_List_object__o *)0x0;
              goto label_0456ac43;
            }
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar15,pIVar11,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            __this_07 = (System_Collections_Generic_List_object__o *)(__this_06->fields)._redoCommands;
            pSVar15 = (System_Collections_Generic_List_object__o *)0x0;
            if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto label_0456ac43;
          }
          System_Collections_Generic_List_object___RemoveAt
                    (__this_07,(__this_07->fields)._size + -1,MethodInfo_Void_RemoveAt);
          pIVar7 = pIVar11->klass;
          bVar2 = (pIVar7->_2).naturalAligment;
          bVar3 = (TypeInfo_AddObjectCommand->_2).naturalAligment;
          if (((bVar3 <= bVar2) && ((pIVar7->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_AddObjectCommand)) ||
             ((bVar3 = (TypeInfo_DeleteObjectCommand->_2).naturalAligment, pMVar14 = (MethodInfo *)(ulong)bVar3,
              bVar3 <= bVar2 && ((pIVar7->_2).typeHierarchy[(long)&pMVar14[-1].field_0x57] == TypeInfo_DeleteObjectCommand))))
          {
            pUVar6 = (__this_06->fields)._menu;
            pSVar15 = (System_Collections_Generic_List_object__o *)0x0;
            if (pUVar6 == (UI_MapEditorMenu_o *)0x0) goto label_0456ac43;
            pMVar14 = (MethodInfo *)0x0;
            UI_MapEditorMenu__SyncHierarchyPanel(pUVar6,(MethodInfo *)0x0);
          }
          GameManagers_MapEditorGameManager__OnSelectionChange(__this_06,pMVar14);
          return;
        }
      }
    }
  }
label_0456ac43:
  il2cpp_runtime_helper_022b2c90();
  pIStack_58 = unaff_RBX;
  if (g_data_057af037 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    g_data_057af037 = '\x01';
  }
  pSVar17 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pSVar18 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar19 = (Il2CppType *)0x0;
  pSVar12 = pSVar15[1].fields._items;
  if (pSVar12 != (System_Object_array *)0x0) {
    if (*(int *)pSVar12->m_Items == 0) {
      return;
    }
    unaff_R12 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
    Map_MapScriptObjects___ctor(unaff_R12,(MethodInfo *)0x0);
    pSVar12 = pSVar15[1].fields._items;
    if (pSVar12 != (System_Object_array *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_70,
                 (System_Collections_Generic_HashSet_object__o *)pSVar12,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
      pSVar17 = (System_Collections_Generic_HashSet_T__o *)auStack_70._0_8_;
      pSVar18 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_70._8_8_;
      pIVar19 = pIStack_60;
      if (unaff_R12 == (Map_MapScriptObjects_o *)0x0) {
        __this_02.fields._index = auStack_70._8_4_;
        __this_02.fields._version = auStack_70._12_4_;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_70._0_8_;
        __this_02.fields._current = (Il2CppObject *)pIStack_60;
        bVar10 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                           (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffff78);
        pSVar17 = (System_Collections_Generic_HashSet_T__o *)auStack_70._0_8_;
        pSVar18 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_70._8_8_;
        pIVar19 = pIStack_60;
        if ((char)bVar10 != '\0') goto label_0456ae51;
      }
      else {
        while (__this_01.fields._8_8_ = pSVar18, __this_01.fields._set = pSVar17,
              __this_01.fields._current = (Il2CppObject *)pIVar19,
              bVar10 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                 (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff78),
              lVar9 = MethodInfo_Void_Add, (char)bVar10 != '\0') {
          if (pIVar19 == (Il2CppType *)0x0) {
label_0456ae47:
            il2cpp_runtime_helper_022b2c90();
            goto label_0456ae4c;
          }
          __this_00 = (unaff_R12->fields).Objects;
          if (__this_00 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
label_0456ae42:
            il2cpp_runtime_helper_022b2c90();
            goto label_0456ae47;
          }
          pIVar7 = pIVar19[2].data;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar8 = (__this_00->fields)._items;
          if (pMVar8 == (Map_MapScriptBaseObject_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0456ae42;
          }
          uVar5 = (__this_00->fields)._size;
          if (uVar5 < (uint)pMVar8->max_length) {
            (__this_00->fields)._size = uVar5 + 1;
            pMVar8->m_Items[(int)uVar5] = (Map_MapScriptBaseObject_o *)pIVar7;
            il2cpp_runtime_helper_022b4080(pMVar8->m_Items + (int)uVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pIVar7,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_03.fields._8_8_ = pSVar18;
      __this_03.fields._set = pSVar17;
      __this_03.fields._current = (Il2CppObject *)pIVar19;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
      goto label_0456ae03;
    }
  }
label_0456ae4c:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0456ae51:
    auVar16 = il2cpp_runtime_helper_022b2c90();
    if (auVar16._8_4_ != 1) {
label_0456aec3:
      __this_05.fields._8_8_ = pSVar18;
      __this_05.fields._set = pSVar17;
      __this_05.fields._current = (Il2CppObject *)pIVar19;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
      _Unwind_Resume(auVar16._0_8_);
    }
    plVar13 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar9 = *plVar13;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pSVar18;
    __this_04.fields._set = pSVar17;
    __this_04.fields._current = (Il2CppObject *)pIVar19;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff78);
    if (lVar9 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar9);
      goto label_0456aec3;
    }
label_0456ae03:
    if (unaff_R12 != (Map_MapScriptObjects_o *)0x0) {
      pSVar12 = (System_Object_array *)
                (*(unaff_R12->klass->vtable)._8_Serialize.methodPtr)
                          (unaff_R12,(unaff_R12->klass->vtable)._8_Serialize.method);
      pSVar15[2].fields._items = pSVar12;
      il2cpp_runtime_helper_022b4080(&pSVar15[2].fields,pSVar12);
      return;
    }
  } while( true );
}


// GameManagers.MapEditorGameManager$$Redo
// il2cpp: void GameManagers_MapEditorGameManager__Redo (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456aa90

void GameManagers_MapEditorGameManager__Redo(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  UI_MapEditorMenu_o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_01;
  Il2CppClass *pIVar6;
  Map_MapScriptBaseObject_array *pMVar7;
  long lVar8;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  bool_conflict bVar9;
  Il2CppObject *item;
  System_Object_array *pSVar10;
  long *plVar11;
  Il2CppObject *unaff_RBX;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *__this_07;
  System_Collections_Generic_List_object__o *__this_08;
  Map_MapScriptObjects_o *unaff_R12;
  undefined1 auVar12 [12];
  System_Collections_Generic_HashSet_T__o *pSVar13;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar14;
  Il2CppType *pIVar15;
  undefined1 auStack_58 [16];
  Il2CppType *pIStack_48;
  Il2CppObject *pIStack_40;
  
  if (g_data_057af036 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AddObjectCommand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteObjectCommand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCommand_get_Item);
    g_data_057af036 = '\x01';
  }
  __this_07 = (System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands;
  if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar4 = (__this_07->fields)._size;
    if (iVar4 == 0) {
      return;
    }
    item = System_Collections_Generic_List_object___get_Item(__this_07,iVar4 + -1,MethodInfo_BaseCommand_get_Item);
    if (item != (Il2CppObject *)0x0) {
      (*item->klass->vtable[4].methodPtr)(item);
      lVar8 = MethodInfo_Void_Add;
      __this_07 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
      unaff_RBX = item;
      if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar1 = &(__this_07->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar10 = (__this_07->fields)._items;
        if (pSVar10 != (System_Object_array *)0x0) {
          uVar5 = (__this_07->fields)._size;
          if (uVar5 < (uint)pSVar10->max_length) {
            (__this_07->fields)._size = uVar5 + 1;
            pSVar10->m_Items[(int)uVar5] = item;
            il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar5);
            __this_08 = (System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands;
            if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) {
              __this_07 = (System_Collections_Generic_List_object__o *)0x0;
              goto label_0456ac43;
            }
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_07,item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            __this_08 = (System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands;
            __this_07 = (System_Collections_Generic_List_object__o *)0x0;
            if (__this_08 == (System_Collections_Generic_List_object__o *)0x0) goto label_0456ac43;
          }
          System_Collections_Generic_List_object___RemoveAt
                    (__this_08,(__this_08->fields)._size + -1,MethodInfo_Void_RemoveAt);
          pIVar6 = item->klass;
          bVar2 = (pIVar6->_2).naturalAligment;
          bVar3 = (TypeInfo_AddObjectCommand->_2).naturalAligment;
          if (((bVar3 <= bVar2) && ((pIVar6->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_AddObjectCommand)) ||
             ((bVar3 = (TypeInfo_DeleteObjectCommand->_2).naturalAligment, method_00 = (MethodInfo *)(ulong)bVar3,
              bVar3 <= bVar2 && ((pIVar6->_2).typeHierarchy[(long)&method_00[-1].field_0x57] == TypeInfo_DeleteObjectCommand))
             )) {
            __this_00 = (__this->fields)._menu;
            __this_07 = (System_Collections_Generic_List_object__o *)0x0;
            if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto label_0456ac43;
            method_00 = (MethodInfo *)0x0;
            UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
          }
          GameManagers_MapEditorGameManager__OnSelectionChange(__this,method_00);
          return;
        }
      }
    }
  }
label_0456ac43:
  il2cpp_runtime_helper_022b2c90();
  pIStack_40 = unaff_RBX;
  if (g_data_057af037 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    g_data_057af037 = '\x01';
  }
  pSVar13 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pSVar14 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  pSVar10 = __this_07[1].fields._items;
  if (pSVar10 != (System_Object_array *)0x0) {
    if (*(int *)pSVar10->m_Items == 0) {
      return;
    }
    unaff_R12 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
    Map_MapScriptObjects___ctor(unaff_R12,(MethodInfo *)0x0);
    pSVar10 = __this_07[1].fields._items;
    if (pSVar10 != (System_Object_array *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_58,
                 (System_Collections_Generic_HashSet_object__o *)pSVar10,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
      pSVar13 = (System_Collections_Generic_HashSet_T__o *)auStack_58._0_8_;
      pSVar14 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_58._8_8_;
      pIVar15 = pIStack_48;
      if (unaff_R12 == (Map_MapScriptObjects_o *)0x0) {
        __this_03.fields._index = auStack_58._8_4_;
        __this_03.fields._version = auStack_58._12_4_;
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_58._0_8_;
        __this_03.fields._current = (Il2CppObject *)pIStack_48;
        bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_03,(MethodInfo_3219C40 *)&stack0xffffffffffffff90);
        pSVar13 = (System_Collections_Generic_HashSet_T__o *)auStack_58._0_8_;
        pSVar14 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_58._8_8_;
        pIVar15 = pIStack_48;
        if ((char)bVar9 != '\0') goto label_0456ae51;
      }
      else {
        while (__this_02.fields._8_8_ = pSVar14, __this_02.fields._set = pSVar13,
              __this_02.fields._current = (Il2CppObject *)pIVar15,
              bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffff90),
              lVar8 = MethodInfo_Void_Add, (char)bVar9 != '\0') {
          if (pIVar15 == (Il2CppType *)0x0) {
label_0456ae47:
            il2cpp_runtime_helper_022b2c90();
            goto label_0456ae4c;
          }
          __this_01 = (unaff_R12->fields).Objects;
          if (__this_01 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
label_0456ae42:
            il2cpp_runtime_helper_022b2c90();
            goto label_0456ae47;
          }
          pIVar6 = pIVar15[2].data;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar7 = (__this_01->fields)._items;
          if (pMVar7 == (Map_MapScriptBaseObject_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0456ae42;
          }
          uVar5 = (__this_01->fields)._size;
          if (uVar5 < (uint)pMVar7->max_length) {
            (__this_01->fields)._size = uVar5 + 1;
            pMVar7->m_Items[(int)uVar5] = (Map_MapScriptBaseObject_o *)pIVar6;
            il2cpp_runtime_helper_022b4080(pMVar7->m_Items + (int)uVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pIVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_04.fields._8_8_ = pSVar14;
      __this_04.fields._set = pSVar13;
      __this_04.fields._current = (Il2CppObject *)pIVar15;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff90);
      goto label_0456ae03;
    }
  }
label_0456ae4c:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0456ae51:
    auVar12 = il2cpp_runtime_helper_022b2c90();
    if (auVar12._8_4_ != 1) {
label_0456aec3:
      __this_06.fields._8_8_ = pSVar14;
      __this_06.fields._set = pSVar13;
      __this_06.fields._current = (Il2CppObject *)pIVar15;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_06,(MethodInfo_3219C30 *)&stack0xffffffffffffff90);
      _Unwind_Resume(auVar12._0_8_);
    }
    plVar11 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar8 = *plVar11;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pSVar14;
    __this_05.fields._set = pSVar13;
    __this_05.fields._current = (Il2CppObject *)pIVar15;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff90);
    if (lVar8 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar8);
      goto label_0456aec3;
    }
label_0456ae03:
    if (unaff_R12 != (Map_MapScriptObjects_o *)0x0) {
      pSVar10 = (System_Object_array *)
                (*(unaff_R12->klass->vtable)._8_Serialize.methodPtr)
                          (unaff_R12,(unaff_R12->klass->vtable)._8_Serialize.method);
      __this_07[2].fields._items = pSVar10;
      il2cpp_runtime_helper_022b4080(&__this_07[2].fields,pSVar10);
      return;
    }
  } while( true );
}


// GameManagers.MapEditorGameManager$$Copy
// il2cpp: void GameManagers_MapEditorGameManager__Copy (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456ac50

void GameManagers_MapEditorGameManager__Copy(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_01;
  Il2CppClass *item;
  Map_MapScriptBaseObject_array *pMVar4;
  long lVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  long *plVar8;
  Map_MapScriptObjects_o *unaff_R12;
  undefined1 auVar9 [12];
  System_Collections_Generic_HashSet_T__o *pSVar10;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (g_data_057af037 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    g_data_057af037 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pSVar11 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pSVar3 = (__this->fields).SelectedObjects;
  if (pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
    if ((pSVar3->fields)._count == 0) {
      return;
    }
    unaff_R12 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
    Map_MapScriptObjects___ctor(unaff_R12,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this_00,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
      pSVar10 = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
      pSVar11 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_40._8_8_;
      pIVar12 = local_30;
      if (unaff_R12 == (Map_MapScriptObjects_o *)0x0) {
        __this_03.fields._index = local_40._8_4_;
        __this_03.fields._version = local_40._12_4_;
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
        __this_03.fields._current = (Il2CppObject *)local_30;
        bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_03,(MethodInfo_3219C40 *)&stack0xffffffffffffffa8);
        pSVar10 = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
        pSVar11 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_40._8_8_;
        pIVar12 = local_30;
        if ((char)bVar6 != '\0') goto label_0456ae51;
      }
      else {
        while (__this_02.fields._8_8_ = pSVar11, __this_02.fields._set = pSVar10,
              __this_02.fields._current = (Il2CppObject *)pIVar12,
              bVar6 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_3219C40 *)&stack0xffffffffffffffa8),
              lVar5 = MethodInfo_Void_Add, (char)bVar6 != '\0') {
          if (pIVar12 == (Il2CppType *)0x0) {
label_0456ae47:
            il2cpp_runtime_helper_022b2c90();
            goto label_0456ae4c;
          }
          __this_01 = (unaff_R12->fields).Objects;
          if (__this_01 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
label_0456ae42:
            il2cpp_runtime_helper_022b2c90();
            goto label_0456ae47;
          }
          item = pIVar12[2].data;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar4 = (__this_01->fields)._items;
          if (pMVar4 == (Map_MapScriptBaseObject_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0456ae42;
          }
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pMVar4->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pMVar4->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)item;
            il2cpp_runtime_helper_022b4080(pMVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_04.fields._8_8_ = pSVar11;
      __this_04.fields._set = pSVar10;
      __this_04.fields._current = (Il2CppObject *)pIVar12;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
      goto label_0456ae03;
    }
  }
label_0456ae4c:
  do {
    il2cpp_runtime_helper_022b2c90();
label_0456ae51:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) {
label_0456aec3:
      __this_06.fields._8_8_ = pSVar11;
      __this_06.fields._set = pSVar10;
      __this_06.fields._current = (Il2CppObject *)pIVar12;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_06,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar9._0_8_);
    }
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar5 = *plVar8;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pSVar11;
    __this_05.fields._set = pSVar10;
    __this_05.fields._current = (Il2CppObject *)pIVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffffa8);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      goto label_0456aec3;
    }
label_0456ae03:
    if (unaff_R12 != (Map_MapScriptObjects_o *)0x0) {
      pSVar7 = (System_String_o *)
               (*(unaff_R12->klass->vtable)._8_Serialize.methodPtr)
                         (unaff_R12,(unaff_R12->klass->vtable)._8_Serialize.method);
      (__this->fields)._clipboard = pSVar7;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._clipboard,pSVar7);
      return;
    }
  } while( true );
}


// GameManagers.MapEditorGameManager$$Paste
// il2cpp: void GameManagers_MapEditorGameManager__Paste (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456af00

void GameManagers_MapEditorGameManager__Paste(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UI_MapEditorMenu_o *__this_01;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar3;
  Map_MapScriptObjects_o *__this_06;
  MethodInfo *pMVar4;
  Il2CppObject *item;
  long *plVar5;
  MethodInfo *in_RCX;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  GameManagers_MapEditorGameManager_o *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (g_data_057af038 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AddObjectCommand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    g_data_057af038 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  bVar3 = System_String__op_Equality
                    ((__this->fields)._clipboard,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    __this_06 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
    Map_MapScriptObjects___ctor(__this_06,(MethodInfo *)0x0);
    if (__this_06 != (Map_MapScriptObjects_o *)0x0) {
      (*(__this_06->klass->vtable)._9_Deserialize.methodPtr)
                (__this_06,(__this->fields)._clipboard,(__this_06->klass->vtable)._9_Deserialize.method);
      pSVar1 = (__this_06->fields).Objects;
      pMVar4 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_AddObjectCommand);
      MapEditor_AddObjectCommand___ctor((MapEditor_AddObjectCommand_o *)pMVar4,pSVar1,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand(__this,(MapEditor_BaseCommand_o *)pMVar4,1,in_RCX);
      GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar4);
      pSVar1 = (__this_06->fields).Objects;
      local_50 = __this;
      if (pSVar1 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
        pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
        pIVar8 = (Il2CppType *)local_48._8_8_;
        pIVar10 = local_38;
        while( true ) {
          __this_02.fields._8_8_ = pIVar8;
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
          __this_02.fields._current = pIVar10;
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
          if ((char)bVar3 == '\0') {
            __this_03.fields._8_8_ = pIVar8;
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
            __this_03.fields._current = pIVar10;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
            pIVar9 = pIVar10;
            goto label_0456b12e;
          }
          pIVar9 = pIVar10;
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (pIVar10 == (Il2CppObject *)0x0) break;
          if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8)
              == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0456b164;
          item = System_Collections_Generic_Dictionary_int__object___get_Item
                           ((System_Collections_Generic_Dictionary_int__object__o *)
                            **(undefined8 **)(TypeInfo_MapLoader + 0xb8),*(int32_t *)&pIVar10[2].klass,MethodInfo_MapObject_get_Item)
          ;
          pIVar10 = pIVar9;
          if (g_data_057af03d == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
            g_data_057af03d = '\x01';
            pIVar10 = pIVar9;
          }
          __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            pIVar9 = pIVar10;
            break;
          }
          System_Collections_Generic_HashSet_object___Add(__this_00,item,MethodInfo_Boolean_Add);
        }
        il2cpp_runtime_helper_022b2c90();
label_0456b164:
        il2cpp_runtime_helper_022b2c90();
      }
    }
    do {
      auVar6 = il2cpp_runtime_helper_022b2c90();
      if (auVar6._8_4_ != 1) {
label_0456b1db:
        __this_05.fields._8_8_ = pIVar8;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
        __this_05.fields._current = pIVar9;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        _Unwind_Resume(auVar6._0_8_);
      }
      plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar2 = *plVar5;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar8;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_04.fields._current = pIVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      if (lVar2 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar2);
        goto label_0456b1db;
      }
label_0456b12e:
      __this_01 = (local_50->fields)._menu;
    } while (__this_01 == (UI_MapEditorMenu_o *)0x0);
    pMVar4 = (MethodInfo *)0x0;
    UI_MapEditorMenu__SyncHierarchyPanel(__this_01,(MethodInfo *)0x0);
    GameManagers_MapEditorGameManager__OnSelectionChange(local_50,pMVar4);
  }
  return;
}


// GameManagers.MapEditorGameManager$$Cut
// il2cpp: void GameManagers_MapEditorGameManager__Cut (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456b220

void GameManagers_MapEditorGameManager__Cut(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager__Copy(__this,method);
  GameManagers_MapEditorGameManager__Delete(__this,method);
  return;
}


// GameManagers.MapEditorGameManager$$Delete
// il2cpp: void GameManagers_MapEditorGameManager__Delete (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456b230

void GameManagers_MapEditorGameManager__Delete(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  UI_MapEditorMenu_o *pUVar6;
  MapEditor_MapEditorBrush_o *pMVar7;
  long lVar8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Camera_o *pUVar10;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  UnityEngine_Ray_o ray;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  UnityEngine_RaycastHit_o __this_05;
  char cVar12;
  undefined8 __this_06;
  undefined1 auVar13 [16];
  UnityEngine_LayerMask_o mask;
  uint uVar14;
  bool_conflict bVar15;
  System_Collections_Generic_List_MapObject__o *objs;
  _union_13 _Var16;
  System_Int32_array *layers;
  UnityEngine_Collider_o *collider;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  Il2CppObject *item;
  System_Object_array *pSVar17;
  UnityEngine_GameObject_o *__this_08;
  long *plVar18;
  MethodInfo *in_RCX;
  ulong uVar19;
  MethodInfo *method_00;
  GameManagers_MapEditorGameManager_o *__this_09;
  System_Collections_Generic_HashSet_MapObject__o *pSVar20;
  float fVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar22;
  float in_XMM1_Db;
  float fVar23;
  float fVar24;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o v;
  undefined1 auVar26 [12];
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o end;
  undefined8 in_stack_fffffffffffffeb0;
  undefined8 in_stack_fffffffffffffeb8;
  UnityEngine_GameObject_o *in_stack_fffffffffffffec0;
  float in_stack_fffffffffffffed0;
  float in_stack_fffffffffffffed4;
  float in_stack_fffffffffffffed8;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  UnityEngine_GameObject_o *pUStack_100;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [8];
  float fStack_c8;
  float fStack_c4;
  Il2CppType **ppIStack_c0;
  Il2CppRGCTXData *pIStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_98 [24];
  Il2CppMethodPointer pIStack_80;
  Il2CppMethodPointer pIStack_78;
  InvokerMethod pIStack_70;
  uint32_t uStack_68;
  float fStack_64;
  float fStack_60;
  undefined8 uStack_5c;
  _union_13 _Stack_48;
  
  __this_09 = __this;
  if (g_data_057af039 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteObjectCommand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    __this_09 = (GameManagers_MapEditorGameManager_o *)&TypeInfo_List_MapObject;
    il2cpp_runtime_helper_023445d0();
    g_data_057af039 = '\x01';
  }
  pSVar20 = (__this->fields).SelectedObjects;
  _Var16.rgctx_data = (Il2CppRGCTXData *)0x0;
  if (pSVar20 != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
    if ((pSVar20->fields)._count == 0) {
      return;
    }
    objs = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
    System_Collections_Generic_List_object____ctor_362ba10
              ((System_Collections_Generic_List_object__o *)objs,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar20,MethodInfo_List_1_Map_MapObject);
    _Var16.rgctx_data = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteObjectCommand);
    MapEditor_DeleteObjectCommand___ctor
              ((MapEditor_DeleteObjectCommand_o *)_Var16.rgctx_data,objs,(MethodInfo *)0x0);
    method = (MethodInfo *)_Var16.rgctx_data;
    GameManagers_MapEditorGameManager__NewCommand
              (__this,(MapEditor_BaseCommand_o *)_Var16.rgctx_data,1,in_RCX);
    pUVar6 = (__this->fields)._menu;
    __this_09 = (GameManagers_MapEditorGameManager_o *)0x0;
    if (pUVar6 != (UI_MapEditorMenu_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UI_MapEditorMenu__SyncHierarchyPanel(pUVar6,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__OnSelectionChange(__this,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  cVar12 = (char)method;
  _Stack_48 = _Var16;
  if (g_data_057af03a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameO);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0();
    g_data_057af03a = '\x01';
  }
  fStack_60 = 0.0;
  uStack_5c = 0;
  pIStack_70 = (InvokerMethod)0x0;
  uStack_68 = 0;
  fStack_64 = 0.0;
  pIStack_80 = (Il2CppMethodPointer)0x0;
  pIStack_78 = (Il2CppMethodPointer)0x0;
  auStack_f0._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_f0._8_8_ = (Il2CppMethodPointer)0x0;
  auStack_f0._16_8_ = (UnityEngine_GameObject_o *)0x0;
  pMVar7 = (__this_09->fields).Brush;
  if ((pMVar7 != (MapEditor_MapEditorBrush_o *)0x0) && ((char)(pMVar7->fields).Active != '\0')) {
    return;
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  UVar25 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fVar22 = UVar25.fields.z;
  fVar23 = UVar25.fields.x;
  fVar1 = (float)(__this_09->fields)._isDrag;
  fVar3 = (__this_09->fields)._dragStart.fields.x;
  fVar21 = (__this_09->fields)._dragStart.fields.y;
  fVar24 = 0.0;
  if (g_data_057a6841 == '\0') {
    ppIStack_c0 = (Il2CppType **)CONCAT44(fVar3,fVar3);
    pIStack_b8 = (Il2CppRGCTXData *)0x0;
    auStack_d0._4_4_ = fVar1;
    auStack_d0._0_4_ = fVar21;
    fStack_c8 = 0.0;
    fStack_c4 = fVar3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
    fVar3 = ppIStack_c0._0_4_;
    fVar21 = (float)auStack_d0._0_4_;
    fVar1 = (float)auStack_d0._4_4_;
    fVar24 = fStack_c8;
    in_stack_fffffffffffffed0 = fVar22;
    in_stack_fffffffffffffed4 = fVar23;
    in_stack_fffffffffffffed8 = in_XMM1_Db;
  }
  fVar3 = UVar25.fields.y - fVar3;
  fVar22 = fVar22 - fVar21;
  fVar23 = fVar23 - fVar1;
  in_XMM1_Db = in_XMM1_Db - fVar24;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_stack_fffffffffffffed0 = fVar22;
    in_stack_fffffffffffffed4 = fVar23;
    in_stack_fffffffffffffed8 = in_XMM1_Db;
  }
  fVar21 = fVar23 * fVar23 + fVar3 * fVar3 + fVar22 * fVar22;
  if (fVar21 < 0.0) {
    fVar21 = sqrtf(fVar21);
    if (fVar21 < 1.0) goto label_0456b580;
label_0456b535:
    if (cVar12 == '\0') {
      GameManagers_MapEditorGameManager__DeselectAll(__this_09,method);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0456b76f;
label_0456b555:
      pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    }
    else {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_0456b555;
label_0456b76f:
      il2cpp_runtime_helper_02337ed0();
      pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    }
    if ((pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_07 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar9,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameO),
       __this_07 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&fStack_110
                 ,__this_07,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      auStack_f0._16_8_ = pUStack_100;
      auStack_f0._0_8_ = CONCAT44(fStack_10c,fStack_110);
      auStack_f0._8_8_ = CONCAT44(fStack_104,fStack_108);
label_0456b7e0:
      __this_01.fields._index = (int)in_stack_fffffffffffffeb8;
      __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
      __this_01.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb0;
      __this_01.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec0;
      bVar15 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                         (__this_01,(MethodInfo_3251B20 *)auStack_f0);
      __this_06 = auStack_f0._16_8_;
      if ((char)bVar15 != '\0') {
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
        if (pSVar9 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0456bc2c;
        item = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar9,(Il2CppObject *)__this_06,MethodInfo_MapObject_get_Item);
        if ((UnityEngine_GameObject_o *)__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_0456bc31;
        pSVar17 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                            ((UnityEngine_GameObject_o *)__this_06,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
        if (pSVar17 != (System_Object_array *)0x0) goto code_r0x0456b86e;
        goto label_0456bc36;
      }
      __this_02.fields._index = (int)in_stack_fffffffffffffeb8;
      __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb0;
      __this_02.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec0;
      method = (MethodInfo *)MethodInfo_Void_Dispose;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251B10 *)auStack_f0);
      goto label_0456bb4d;
    }
label_0456bc3b:
    il2cpp_runtime_helper_022b2c90();
label_0456bc40:
    il2cpp_runtime_helper_022b2c90();
label_0456bc45:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (1.0 <= SQRT(fVar21)) goto label_0456b535;
label_0456b580:
    pUVar6 = (__this_09->fields)._menu;
    if (pUVar6 == (UI_MapEditorMenu_o *)0x0) goto label_0456bc3b;
    if ((char)(pUVar6->fields).IsMouseUI != '\0') goto label_0456bb4d;
    if (lVar8 == 0) goto label_0456bc3b;
    pUVar10 = *(UnityEngine_Camera_o **)(lVar8 + 0x20);
    UVar25 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Camera_o *)0x0) goto label_0456bc3b;
    UnityEngine_Camera__ScreenPointToRay_4db37e0
              ((UnityEngine_Ray_o *)auStack_98,pUVar10,UVar25,(MethodInfo *)0x0);
    pUStack_100 = (UnityEngine_GameObject_o *)auStack_98._16_8_;
    fStack_110 = (float)auStack_98._0_4_;
    fStack_10c = (float)auStack_98._4_4_;
    fStack_108 = (float)auStack_98._8_4_;
    fStack_104 = (float)auStack_98._12_4_;
    layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (layers == (System_Int32_array *)0x0) goto label_0456bc3b;
    if ((int)layers->max_length != 0) {
      layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      uVar14 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      in_stack_fffffffffffffeb0 = CONCAT44(fStack_10c,fStack_110);
      in_stack_fffffffffffffeb8 = CONCAT44(fStack_104,fStack_108);
      method._4_4_ = 0;
      method._0_4_ = uVar14;
      ray.fields.m_Origin.fields.z = fStack_108;
      ray.fields.m_Direction.fields.x = fStack_104;
      ray.fields.m_Origin.fields.x = fStack_110;
      ray.fields.m_Origin.fields.y = fStack_10c;
      ray.fields.m_Direction.fields._4_8_ = pUStack_100;
      in_stack_fffffffffffffec0 = pUStack_100;
      bVar15 = UnityEngine_Physics__Raycast_4e78080
                         (ray,(UnityEngine_RaycastHit_o *)&pIStack_80,100000.0,uVar14,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        _Var16 = (_union_13)method;
        if (cVar12 != '\0') goto label_0456bb4d;
label_0456bb6e:
        method = (MethodInfo *)_Var16;
        GameManagers_MapEditorGameManager__DeselectAll(__this_09,method);
        goto label_0456bb4d;
      }
      __this_05.fields.m_Point.fields.z = (float)(int)in_stack_fffffffffffffeb8;
      __this_05.fields.m_Normal.fields.x = (float)(int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
      __this_05.fields.m_Point.fields.x = (float)(int)in_stack_fffffffffffffeb0;
      __this_05.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
      __this_05.fields.m_Normal.fields._4_8_ = in_stack_fffffffffffffec0;
      __this_05.fields._24_8_ = __this_09;
      __this_05.fields.m_UV.fields.x = in_stack_fffffffffffffed0;
      __this_05.fields.m_UV.fields.y = in_stack_fffffffffffffed4;
      __this_05.fields.m_Collider = (int32_t)in_stack_fffffffffffffed8;
      collider = UnityEngine_RaycastHit__get_collider(__this_05,(MethodInfo *)&pIStack_80);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      _Var16.rgctx_data = (Il2CppRGCTXData *)0x0;
      method = (MethodInfo *)Map_MapLoader__FindObjectFromCollider(collider,(MethodInfo *)0x0);
      pSVar20 = (__this_09->fields).SelectedObjects;
      if (pSVar20 != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
        if (cVar12 == '\0') {
          if ((((System_Collections_Generic_HashSet_object__o *)pSVar20)->fields)._count == 1) {
            _Var16.rgctx_data = (Il2CppRGCTXData *)method;
            bVar15 = System_Collections_Generic_HashSet_object___Contains
                               ((System_Collections_Generic_HashSet_object__o *)pSVar20,(Il2CppObject *)method
                                ,MethodInfo_Boolean_Contains);
            if ((char)bVar15 != '\0') goto label_0456bb6e;
            pSVar20 = (__this_09->fields).SelectedObjects;
            if (pSVar20 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0456bc3b;
          }
          if (0 < (((System_Collections_Generic_HashSet_object__o *)pSVar20)->fields)._count) {
            GameManagers_MapEditorGameManager__DeselectAll(__this_09,(MethodInfo *)_Var16.rgctx_data);
            goto label_0456bbb8;
          }
          if (g_data_057af03d == '\0') goto label_0456bbcc;
label_0456bbed:
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)pSVar20,(Il2CppObject *)method,
                     MethodInfo_Boolean_Add);
          goto label_0456bb4d;
        }
        bVar15 = System_Collections_Generic_HashSet_object___Contains
                           ((System_Collections_Generic_HashSet_object__o *)pSVar20,(Il2CppObject *)method,
                            MethodInfo_Boolean_Contains);
        if ((char)bVar15 == '\0') {
label_0456bbb8:
          if (g_data_057af03d == '\0') {
label_0456bbcc:
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
            g_data_057af03d = '\x01';
          }
          pSVar20 = (__this_09->fields).SelectedObjects;
          if (pSVar20 != (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0456bbed;
        }
        else {
          if (g_data_057af03c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
            g_data_057af03c = '\x01';
          }
          pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this_09->fields).SelectedObjects;
          if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet_object___Remove(pSVar11,(Il2CppObject *)method,MethodInfo_Boolean_Remove);
            goto label_0456bb4d;
          }
        }
      }
      goto label_0456bc3b;
    }
  }
  auVar26 = il2cpp_runtime_helper_022b2ca0();
  if (auVar26._8_4_ == 1) {
    plVar18 = (long *)__cxa_begin_catch(auVar26._0_8_);
    lVar8 = *plVar18;
    __cxa_end_catch();
    __this_03.fields._index = (int)in_stack_fffffffffffffeb8;
    __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
    __this_03.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb0;
    __this_03.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec0;
    method = (MethodInfo *)MethodInfo_Void_Dispose;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)auStack_f0);
    if (lVar8 == 0) {
label_0456bb4d:
      GameManagers_MapEditorGameManager__OnSelectionChange(__this_09,method);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_04.fields._index = (int)in_stack_fffffffffffffeb8;
  __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  __this_04.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb0;
  __this_04.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec0;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251B10 *)auStack_f0);
  _Unwind_Resume(auVar26._0_8_);
code_r0x0456b86e:
  if (0 < (int)pSVar17->max_length) {
    uVar19 = 0;
    if ((pSVar17->max_length & 0xffffffff) != 0) {
      do {
        x = (UnityEngine_Object_o *)pSVar17->m_Items[uVar19];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar15 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          if (x == (UnityEngine_Object_o *)0x0) goto label_0456bc0e;
          __this_08 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (__this_08 == (UnityEngine_GameObject_o *)0x0) goto label_0456bc09;
          bVar15 = UnityEngine_GameObject__get_activeSelf(__this_08,(MethodInfo *)0x0);
          if ((char)bVar15 != '\0') {
            UnityEngine_Renderer__get_bounds
                      ((UnityEngine_Bounds_o *)&fStack_110,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
            fVar1 = fStack_10c;
            fVar21 = fStack_110;
            if (lVar8 == 0) goto label_0456bc18;
            if (*(UnityEngine_Camera_o **)(lVar8 + 0x20) == (UnityEngine_Camera_o *)0x0) goto label_0456bc1d;
            UVar25.fields.y = fStack_10c;
            UVar25.fields.x = fStack_110;
            UVar25.fields.z = fStack_108;
            fVar3 = fStack_108;
            UVar25 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                               (*(UnityEngine_Camera_o **)(lVar8 + 0x20),UVar25,(MethodInfo *)0x0);
            auStack_b0._8_4_ = extraout_XMM0_Dc;
            auStack_b0._0_8_ = UVar25.fields._0_8_;
            auStack_b0._12_4_ = extraout_XMM0_Dd;
            if (*(long *)(lVar8 + 0x28) == 0) goto label_0456bc22;
            __this_00 = *(UnityEngine_Transform_o **)(*(long *)(lVar8 + 0x28) + 0x10);
            if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_0456bc13;
            UVar25 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
            fStack_c8 = (float)extraout_XMM0_Dc_00;
            auStack_d0 = (undefined1  [8])UVar25.fields._0_8_;
            fStack_c4 = (float)extraout_XMM0_Dd_00;
            ppIStack_c0 = (Il2CppType **)CONCAT44(ppIStack_c0._4_4_,UVar25.fields.z);
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
              iVar5 = *(int *)(TypeInfo_Math + 0xe4);
            }
            else {
              iVar5 = *(int *)(TypeInfo_Math + 0xe4);
            }
            if (iVar5 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar21 = (fVar3 - ppIStack_c0._0_4_) * (fVar3 - ppIStack_c0._0_4_) +
                     (fVar1 - (float)auStack_d0._4_4_) * (fVar1 - (float)auStack_d0._4_4_) +
                     (fVar21 - (float)auStack_d0._0_4_) * (fVar21 - (float)auStack_d0._0_4_);
            if (fVar21 < 0.0) {
              fVar21 = sqrtf(fVar21);
              pUVar10 = *(UnityEngine_Camera_o **)(lVar8 + 0x20);
            }
            else {
              fVar21 = SQRT(fVar21);
              pUVar10 = *(UnityEngine_Camera_o **)(lVar8 + 0x20);
            }
            if (pUVar10 == (UnityEngine_Camera_o *)0x0) goto label_0456bc27;
            fVar1 = UnityEngine_Camera__get_farClipPlane(pUVar10,(MethodInfo *)0x0);
            if (fVar21 < fVar1) {
              uVar2 = (__this_09->fields)._isDrag;
              uVar4 = (__this_09->fields)._dragStart.fields.x;
              UVar25 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              auVar13 = auStack_b0;
              start.fields.y = (float)uVar4;
              start.fields.x = (float)uVar2;
              v.fields.z = 0.0;
              v.fields.x = (float)auStack_b0._0_4_;
              v.fields.y = (float)auStack_b0._4_4_;
              start.fields.z = 0.0;
              end.fields.z = 0.0;
              end.fields.x = (float)(int)UVar25.fields._0_8_;
              end.fields.y = (float)(int)(UVar25.fields._0_8_ >> 0x20);
              auStack_b0 = auVar13;
              bVar15 = Utility_Util__IsVectorBetween(v,start,end,(MethodInfo *)0x0);
              if (((char)bVar15 != '\0') &&
                 (bVar15 = UnityEngine_Renderer__get_isVisible((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0),
                 (char)bVar15 != '\0')) {
                pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this_09->fields).SelectedObjects;
                if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0456bc40;
                bVar15 = System_Collections_Generic_HashSet_object___Contains(pSVar11,item,MethodInfo_Boolean_Contains);
                if ((char)bVar15 == '\0') {
                  if (g_data_057af03d == '\0') {
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
                    g_data_057af03d = '\x01';
                  }
                  pSVar11 = (System_Collections_Generic_HashSet_object__o *)
                            (__this_09->fields).SelectedObjects;
                  if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0456bc45;
                  System_Collections_Generic_HashSet_object___Add(pSVar11,item,MethodInfo_Boolean_Add);
                }
                goto label_0456b7e0;
              }
            }
          }
        }
        uVar19 = uVar19 + 1;
        uVar14 = (uint)pSVar17->max_length;
        if ((long)(int)uVar14 <= (long)uVar19) goto label_0456b7e0;
        if (uVar14 <= uVar19) break;
      } while( true );
    }
    il2cpp_runtime_helper_022b2ca0();
label_0456bc09:
    il2cpp_runtime_helper_022b2c90();
label_0456bc0e:
    il2cpp_runtime_helper_022b2c90();
label_0456bc13:
    il2cpp_runtime_helper_022b2c90();
label_0456bc18:
    il2cpp_runtime_helper_022b2c90();
label_0456bc1d:
    il2cpp_runtime_helper_022b2c90();
label_0456bc22:
    il2cpp_runtime_helper_022b2c90();
label_0456bc27:
    il2cpp_runtime_helper_022b2c90();
label_0456bc2c:
    il2cpp_runtime_helper_022b2c90();
label_0456bc31:
    il2cpp_runtime_helper_022b2c90();
label_0456bc36:
    il2cpp_runtime_helper_022b2c90();
    goto label_0456bc3b;
  }
  goto label_0456b7e0;
}


// GameManagers.MapEditorGameManager$$Select
// il2cpp: void GameManagers_MapEditorGameManager__Select (GameManagers_MapEditorGameManager_o* __this, bool multi, const MethodInfo* method);
// 0x456b310

void GameManagers_MapEditorGameManager__Select
               (GameManagers_MapEditorGameManager_o *__this,bool_conflict multi,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  MapEditor_MapEditorBrush_o *pMVar6;
  long lVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  UI_MapEditorMenu_o *pUVar9;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Camera_o *pUVar10;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  UnityEngine_Ray_o ray;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  UnityEngine_RaycastHit_o __this_05;
  undefined8 __this_06;
  undefined1 auVar12 [16];
  UnityEngine_LayerMask_o mask;
  uint uVar13;
  bool_conflict bVar14;
  System_Int32_array *layers;
  UnityEngine_Collider_o *collider;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  Il2CppObject *item;
  System_Object_array *pSVar15;
  UnityEngine_GameObject_o *__this_08;
  long *plVar16;
  ulong uVar17;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  System_Collections_Generic_HashSet_MapObject__o *__this_09;
  char cVar18;
  float fVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar20;
  float in_XMM1_Db;
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o v;
  undefined1 auVar24 [12];
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o end;
  undefined8 in_stack_fffffffffffffec8;
  undefined8 in_stack_fffffffffffffed0;
  UnityEngine_GameObject_o *in_stack_fffffffffffffed8;
  float in_stack_fffffffffffffee8;
  float in_stack_fffffffffffffeec;
  float in_stack_fffffffffffffef0;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  UnityEngine_GameObject_o *local_e8;
  undefined1 local_d8 [32];
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  Il2CppType **local_a8;
  Il2CppRGCTXData *pIStack_a0;
  undefined1 local_98 [16];
  undefined1 local_80 [24];
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod pIStack_58;
  uint32_t uStack_50;
  float local_4c;
  float fStack_48;
  undefined8 uStack_44;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,multi);
  if (g_data_057af03a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameO);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0();
    g_data_057af03a = '\x01';
  }
  fStack_48 = 0.0;
  uStack_44 = 0;
  pIStack_58 = (InvokerMethod)0x0;
  uStack_50 = 0;
  local_4c = 0.0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  local_d8._0_8_ = (Il2CppMethodPointer)0x0;
  local_d8._8_8_ = (Il2CppMethodPointer)0x0;
  local_d8._16_8_ = (UnityEngine_GameObject_o *)0x0;
  pMVar6 = (__this->fields).Brush;
  if ((pMVar6 != (MapEditor_MapEditorBrush_o *)0x0) && ((char)(pMVar6->fields).Active != '\0')) {
    return;
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  UVar23 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fVar20 = UVar23.fields.z;
  fVar21 = UVar23.fields.x;
  fVar1 = (float)(__this->fields)._isDrag;
  fVar3 = (__this->fields)._dragStart.fields.x;
  fVar19 = (__this->fields)._dragStart.fields.y;
  fVar22 = 0.0;
  if (g_data_057a6841 == '\0') {
    local_a8 = (Il2CppType **)CONCAT44(fVar3,fVar3);
    pIStack_a0 = (Il2CppRGCTXData *)0x0;
    local_b8._4_4_ = fVar1;
    local_b8._0_4_ = fVar19;
    fStack_b0 = 0.0;
    fStack_ac = fVar3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
    fVar3 = local_a8._0_4_;
    fVar19 = (float)local_b8._0_4_;
    fVar1 = (float)local_b8._4_4_;
    fVar22 = fStack_b0;
    in_stack_fffffffffffffee8 = fVar20;
    in_stack_fffffffffffffeec = fVar21;
    in_stack_fffffffffffffef0 = in_XMM1_Db;
  }
  fVar3 = UVar23.fields.y - fVar3;
  fVar20 = fVar20 - fVar19;
  fVar21 = fVar21 - fVar1;
  in_XMM1_Db = in_XMM1_Db - fVar22;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_stack_fffffffffffffee8 = fVar20;
    in_stack_fffffffffffffeec = fVar21;
    in_stack_fffffffffffffef0 = in_XMM1_Db;
  }
  fVar19 = fVar21 * fVar21 + fVar3 * fVar3 + fVar20 * fVar20;
  cVar18 = (char)multi;
  if (fVar19 < 0.0) {
    fVar19 = sqrtf(fVar19);
    if (fVar19 < 1.0) goto label_0456b580;
label_0456b535:
    if (cVar18 == '\0') {
      GameManagers_MapEditorGameManager__DeselectAll(__this,method_00);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0456b76f;
label_0456b555:
      pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    }
    else {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_0456b555;
label_0456b76f:
      il2cpp_runtime_helper_02337ed0();
      pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    }
    if ((pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_07 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar8,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameO),
       __this_07 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&local_f8,
                 __this_07,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      local_d8._16_8_ = local_e8;
      local_d8._0_8_ = CONCAT44(fStack_f4,local_f8);
      local_d8._8_8_ = CONCAT44(fStack_ec,fStack_f0);
label_0456b7e0:
      __this_01.fields._index = (int)in_stack_fffffffffffffed0;
      __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
      __this_01.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
      __this_01.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffed8;
      bVar14 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                         (__this_01,(MethodInfo_3251B20 *)local_d8);
      __this_06 = local_d8._16_8_;
      if ((char)bVar14 != '\0') {
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
        if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0456bc2c;
        item = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar8,(Il2CppObject *)__this_06,MethodInfo_MapObject_get_Item);
        if ((UnityEngine_GameObject_o *)__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_0456bc31;
        pSVar15 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                            ((UnityEngine_GameObject_o *)__this_06,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
        if (pSVar15 != (System_Object_array *)0x0) goto code_r0x0456b86e;
        goto label_0456bc36;
      }
      __this_02.fields._index = (int)in_stack_fffffffffffffed0;
      __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
      __this_02.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffed8;
      method_00 = MethodInfo_Void_Dispose;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251B10 *)local_d8);
      goto label_0456bb4d;
    }
label_0456bc3b:
    il2cpp_runtime_helper_022b2c90();
label_0456bc40:
    il2cpp_runtime_helper_022b2c90();
label_0456bc45:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (1.0 <= SQRT(fVar19)) goto label_0456b535;
label_0456b580:
    pUVar9 = (__this->fields)._menu;
    if (pUVar9 == (UI_MapEditorMenu_o *)0x0) goto label_0456bc3b;
    if ((char)(pUVar9->fields).IsMouseUI != '\0') goto label_0456bb4d;
    if (lVar7 == 0) goto label_0456bc3b;
    pUVar10 = *(UnityEngine_Camera_o **)(lVar7 + 0x20);
    UVar23 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Camera_o *)0x0) goto label_0456bc3b;
    UnityEngine_Camera__ScreenPointToRay_4db37e0
              ((UnityEngine_Ray_o *)local_80,pUVar10,UVar23,(MethodInfo *)0x0);
    local_e8 = (UnityEngine_GameObject_o *)local_80._16_8_;
    local_f8 = (float)local_80._0_4_;
    fStack_f4 = (float)local_80._4_4_;
    fStack_f0 = (float)local_80._8_4_;
    fStack_ec = (float)local_80._12_4_;
    layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (layers == (System_Int32_array *)0x0) goto label_0456bc3b;
    if ((int)layers->max_length != 0) {
      layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      uVar13 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      in_stack_fffffffffffffec8 = CONCAT44(fStack_f4,local_f8);
      in_stack_fffffffffffffed0 = CONCAT44(fStack_ec,fStack_f0);
      method_00 = (MethodInfo *)(ulong)uVar13;
      ray.fields.m_Origin.fields.z = fStack_f0;
      ray.fields.m_Direction.fields.x = fStack_ec;
      ray.fields.m_Origin.fields.x = local_f8;
      ray.fields.m_Origin.fields.y = fStack_f4;
      ray.fields.m_Direction.fields._4_8_ = local_e8;
      in_stack_fffffffffffffed8 = local_e8;
      bVar14 = UnityEngine_Physics__Raycast_4e78080
                         (ray,(UnityEngine_RaycastHit_o *)&local_68,100000.0,uVar13,(MethodInfo *)0x0);
      if ((char)bVar14 == '\0') {
        method_01 = method_00;
        if (cVar18 != '\0') goto label_0456bb4d;
label_0456bb6e:
        method_00 = method_01;
        GameManagers_MapEditorGameManager__DeselectAll(__this,method_00);
        goto label_0456bb4d;
      }
      __this_05.fields.m_Point.fields.z = (float)(int)in_stack_fffffffffffffed0;
      __this_05.fields.m_Normal.fields.x = (float)(int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
      __this_05.fields.m_Point.fields.x = (float)(int)in_stack_fffffffffffffec8;
      __this_05.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_fffffffffffffec8 >> 0x20);
      __this_05.fields.m_Normal.fields._4_8_ = in_stack_fffffffffffffed8;
      __this_05.fields._24_8_ = __this;
      __this_05.fields.m_UV.fields.x = in_stack_fffffffffffffee8;
      __this_05.fields.m_UV.fields.y = in_stack_fffffffffffffeec;
      __this_05.fields.m_Collider = (int32_t)in_stack_fffffffffffffef0;
      collider = UnityEngine_RaycastHit__get_collider(__this_05,(MethodInfo *)&local_68);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (MethodInfo *)0x0;
      method_00 = (MethodInfo *)Map_MapLoader__FindObjectFromCollider(collider,(MethodInfo *)0x0);
      __this_09 = (__this->fields).SelectedObjects;
      if (__this_09 != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
        if (cVar18 == '\0') {
          if ((((System_Collections_Generic_HashSet_object__o *)__this_09)->fields)._count == 1) {
            method_01 = method_00;
            bVar14 = System_Collections_Generic_HashSet_object___Contains
                               ((System_Collections_Generic_HashSet_object__o *)__this_09,
                                (Il2CppObject *)method_00,MethodInfo_Boolean_Contains);
            if ((char)bVar14 != '\0') goto label_0456bb6e;
            __this_09 = (__this->fields).SelectedObjects;
            if (__this_09 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0456bc3b;
          }
          if (0 < (((System_Collections_Generic_HashSet_object__o *)__this_09)->fields)._count) {
            GameManagers_MapEditorGameManager__DeselectAll(__this,method_01);
            goto label_0456bbb8;
          }
          if (g_data_057af03d == '\0') goto label_0456bbcc;
label_0456bbed:
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this_09,(Il2CppObject *)method_00,
                     MethodInfo_Boolean_Add);
          goto label_0456bb4d;
        }
        bVar14 = System_Collections_Generic_HashSet_object___Contains
                           ((System_Collections_Generic_HashSet_object__o *)__this_09,
                            (Il2CppObject *)method_00,MethodInfo_Boolean_Contains);
        if ((char)bVar14 == '\0') {
label_0456bbb8:
          if (g_data_057af03d == '\0') {
label_0456bbcc:
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
            g_data_057af03d = '\x01';
          }
          __this_09 = (__this->fields).SelectedObjects;
          if (__this_09 != (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0456bbed;
        }
        else {
          if (g_data_057af03c == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
            g_data_057af03c = '\x01';
          }
          pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
          if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet_object___Remove(pSVar11,(Il2CppObject *)method_00,MethodInfo_Boolean_Remove)
            ;
            goto label_0456bb4d;
          }
        }
      }
      goto label_0456bc3b;
    }
  }
  auVar24 = il2cpp_runtime_helper_022b2ca0();
  if (auVar24._8_4_ == 1) {
    plVar16 = (long *)__cxa_begin_catch(auVar24._0_8_);
    lVar7 = *plVar16;
    __cxa_end_catch();
    __this_03.fields._index = (int)in_stack_fffffffffffffed0;
    __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
    __this_03.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
    __this_03.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffed8;
    method_00 = MethodInfo_Void_Dispose;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)local_d8);
    if (lVar7 == 0) {
label_0456bb4d:
      GameManagers_MapEditorGameManager__OnSelectionChange(__this,method_00);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_04.fields._index = (int)in_stack_fffffffffffffed0;
  __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_04.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
  __this_04.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffed8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251B10 *)local_d8);
  _Unwind_Resume(auVar24._0_8_);
code_r0x0456b86e:
  if (0 < (int)pSVar15->max_length) {
    uVar17 = 0;
    if ((pSVar15->max_length & 0xffffffff) != 0) {
      do {
        x = (UnityEngine_Object_o *)pSVar15->m_Items[uVar17];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar14 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          if (x == (UnityEngine_Object_o *)0x0) goto label_0456bc0e;
          __this_08 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (__this_08 == (UnityEngine_GameObject_o *)0x0) goto label_0456bc09;
          bVar14 = UnityEngine_GameObject__get_activeSelf(__this_08,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            UnityEngine_Renderer__get_bounds
                      ((UnityEngine_Bounds_o *)&local_f8,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
            fVar1 = fStack_f4;
            fVar19 = local_f8;
            if (lVar7 == 0) goto label_0456bc18;
            if (*(UnityEngine_Camera_o **)(lVar7 + 0x20) == (UnityEngine_Camera_o *)0x0) goto label_0456bc1d;
            UVar23.fields.y = fStack_f4;
            UVar23.fields.x = local_f8;
            UVar23.fields.z = fStack_f0;
            fVar3 = fStack_f0;
            UVar23 = UnityEngine_Camera__WorldToScreenPoint_4db3370
                               (*(UnityEngine_Camera_o **)(lVar7 + 0x20),UVar23,(MethodInfo *)0x0);
            local_98._8_4_ = extraout_XMM0_Dc;
            local_98._0_8_ = UVar23.fields._0_8_;
            local_98._12_4_ = extraout_XMM0_Dd;
            if (*(long *)(lVar7 + 0x28) == 0) goto label_0456bc22;
            __this_00 = *(UnityEngine_Transform_o **)(*(long *)(lVar7 + 0x28) + 0x10);
            if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_0456bc13;
            UVar23 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
            fStack_b0 = (float)extraout_XMM0_Dc_00;
            local_b8 = (undefined1  [8])UVar23.fields._0_8_;
            fStack_ac = (float)extraout_XMM0_Dd_00;
            local_a8 = (Il2CppType **)CONCAT44(local_a8._4_4_,UVar23.fields.z);
            if (g_data_057a68cb == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a68cb = '\x01';
              iVar5 = *(int *)(TypeInfo_Math + 0xe4);
            }
            else {
              iVar5 = *(int *)(TypeInfo_Math + 0xe4);
            }
            if (iVar5 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar19 = (fVar3 - local_a8._0_4_) * (fVar3 - local_a8._0_4_) +
                     (fVar1 - (float)local_b8._4_4_) * (fVar1 - (float)local_b8._4_4_) +
                     (fVar19 - (float)local_b8._0_4_) * (fVar19 - (float)local_b8._0_4_);
            if (fVar19 < 0.0) {
              fVar19 = sqrtf(fVar19);
              pUVar10 = *(UnityEngine_Camera_o **)(lVar7 + 0x20);
            }
            else {
              fVar19 = SQRT(fVar19);
              pUVar10 = *(UnityEngine_Camera_o **)(lVar7 + 0x20);
            }
            if (pUVar10 == (UnityEngine_Camera_o *)0x0) goto label_0456bc27;
            fVar1 = UnityEngine_Camera__get_farClipPlane(pUVar10,(MethodInfo *)0x0);
            if (fVar19 < fVar1) {
              uVar2 = (__this->fields)._isDrag;
              uVar4 = (__this->fields)._dragStart.fields.x;
              UVar23 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              auVar12 = local_98;
              start.fields.y = (float)uVar4;
              start.fields.x = (float)uVar2;
              v.fields.z = 0.0;
              v.fields.x = (float)local_98._0_4_;
              v.fields.y = (float)local_98._4_4_;
              start.fields.z = 0.0;
              end.fields.z = 0.0;
              end.fields.x = (float)(int)UVar23.fields._0_8_;
              end.fields.y = (float)(int)(UVar23.fields._0_8_ >> 0x20);
              local_98 = auVar12;
              bVar14 = Utility_Util__IsVectorBetween(v,start,end,(MethodInfo *)0x0);
              if (((char)bVar14 != '\0') &&
                 (bVar14 = UnityEngine_Renderer__get_isVisible((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0),
                 (char)bVar14 != '\0')) {
                pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
                if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0456bc40;
                bVar14 = System_Collections_Generic_HashSet_object___Contains(pSVar11,item,MethodInfo_Boolean_Contains);
                if ((char)bVar14 == '\0') {
                  if (g_data_057af03d == '\0') {
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
                    g_data_057af03d = '\x01';
                  }
                  pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
                  if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0456bc45;
                  System_Collections_Generic_HashSet_object___Add(pSVar11,item,MethodInfo_Boolean_Add);
                }
                goto label_0456b7e0;
              }
            }
          }
        }
        uVar17 = uVar17 + 1;
        uVar13 = (uint)pSVar15->max_length;
        if ((long)(int)uVar13 <= (long)uVar17) goto label_0456b7e0;
        if (uVar13 <= uVar17) break;
      } while( true );
    }
    il2cpp_runtime_helper_022b2ca0();
label_0456bc09:
    il2cpp_runtime_helper_022b2c90();
label_0456bc0e:
    il2cpp_runtime_helper_022b2c90();
label_0456bc13:
    il2cpp_runtime_helper_022b2c90();
label_0456bc18:
    il2cpp_runtime_helper_022b2c90();
label_0456bc1d:
    il2cpp_runtime_helper_022b2c90();
label_0456bc22:
    il2cpp_runtime_helper_022b2c90();
label_0456bc27:
    il2cpp_runtime_helper_022b2c90();
label_0456bc2c:
    il2cpp_runtime_helper_022b2c90();
label_0456bc31:
    il2cpp_runtime_helper_022b2c90();
label_0456bc36:
    il2cpp_runtime_helper_022b2c90();
    goto label_0456bc3b;
  }
  goto label_0456b7e0;
}


// GameManagers.MapEditorGameManager$$DeselectAll
// il2cpp: void GameManagers_MapEditorGameManager__DeselectAll (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456a300

void GameManagers_MapEditorGameManager__DeselectAll
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *collection;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  System_Collections_Generic_List_object__o *__this_05;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *item;
  
  if (g_data_057af03b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    g_data_057af03b = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  collection = (__this->fields).SelectedObjects;
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
  System_Collections_Generic_List_object____ctor_362ba10
            (__this_05,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_Map_MapObject);
  if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this_05,
               MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    item = pIVar7;
    while( true ) {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = pSVar5;
      __this_01.fields._current = item;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = pSVar5;
        __this_02.fields._current = item;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
        return;
      }
      pIVar7 = item;
      if (g_data_057af03c == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        g_data_057af03c = '\x01';
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
      System_Collections_Generic_HashSet_object___Remove(__this_00,item,MethodInfo_Boolean_Remove);
      item = pIVar7;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar4._0_8_);
}


// GameManagers.MapEditorGameManager$$DeselectObject
// il2cpp: void GameManagers_MapEditorGameManager__DeselectObject (GameManagers_MapEditorGameManager_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x456bf10

void GameManagers_MapEditorGameManager__DeselectObject
               (GameManagers_MapEditorGameManager_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  byte bVar1;
  MapEditor_ScaleGizmo_c *pMVar2;
  UI_MapEditorMenu_o *__this_00;
  void *pvVar3;
  UI_ExportPopup_o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  uint *puVar4;
  int32_t iVar5;
  bool_conflict bVar6;
  Il2CppClass *pIVar7;
  MapEditor_OutlineGizmo_o *pMVar8;
  MapEditor_RotationGizmo_o *pMVar9;
  CustomLogic_CustomLogicEvaluator_o *pCVar10;
  long lVar11;
  System_String_o *pSVar12;
  Il2CppObject *__this_06;
  Il2CppClass *pIVar13;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  long *plVar14;
  int iVar15;
  Il2CppClass *__this_08;
  GameManagers_MapEditorGameManager_o *__this_09;
  undefined1 auVar16 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar17;
  Il2CppMethodPointer pIVar18;
  int iVar19;
  undefined4 uVar20;
  
  if (g_data_057af03c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057af03c = '\x01';
  }
  __this_08 = (Il2CppClass *)(__this->fields).SelectedObjects;
  if (__this_08 != (Il2CppClass *)0x0) {
    System_Collections_Generic_HashSet_object___Remove
              ((System_Collections_Generic_HashSet_object__o *)__this_08,(Il2CppObject *)obj,MethodInfo_Boolean_Remove);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af03f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057af03f = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  puVar4 = &(__this_08->_1).byval_arg.bits;
  *(undefined8 *)&(__this_08->_1).byval_arg.bits = *(undefined8 *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  il2cpp_runtime_helper_022b4080(puVar4);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar7 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pIVar7 != (Il2CppClass *)0x0) goto label_0456c02a;
label_0456c0a1:
    (__this_08->_1).typeMetadataHandle = (void *)0x0;
  }
  else {
    pIVar7 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pIVar7 == (Il2CppClass *)0x0) goto label_0456c0a1;
label_0456c02a:
    pIVar13 = TypeInfo_MapEditorMenu;
    pMVar2 = (pIVar7->_1).image;
    bVar1 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if (((pMVar2->_2).naturalAligment < bVar1) ||
       ((pMVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorMenu)) goto label_0456c2a7;
    (__this_08->_1).typeMetadataHandle = pIVar7;
    pMVar2 = (pIVar7->_1).image;
    if (((pMVar2->_2).naturalAligment < bVar1) || ((pMVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar13))
    goto label_0456c2a7;
  }
  il2cpp_runtime_helper_022b4080();
  pIVar7 = (Il2CppClass *)MapEditor_PositionGizmo__Create((MethodInfo *)0x0);
  (__this_08->_1).klass = pIVar7;
  il2cpp_runtime_helper_022b4080(&(__this_08->_1).klass,pIVar7);
  pMVar8 = MapEditor_OutlineGizmo__Create((MethodInfo *)0x0);
  (__this_08->_1).properties = pMVar8;
  il2cpp_runtime_helper_022b4080(&(__this_08->_1).properties,pMVar8);
  pMVar9 = MapEditor_RotationGizmo__Create((MethodInfo *)0x0);
  (__this_08->_1).fields = pMVar9;
  il2cpp_runtime_helper_022b4080(&(__this_08->_1).fields,pMVar9);
  pIVar7 = (Il2CppClass *)MapEditor_ScaleGizmo__Create((MethodInfo *)0x0);
  __this_09 = (GameManagers_MapEditorGameManager_o *)&(__this_08->_1).events;
  (__this_08->_1).events = pIVar7;
  il2cpp_runtime_helper_022b4080();
  iVar5 = GameManagers_MapEditorGameManager__GetHighestObjectId(__this_09,(MethodInfo *)pIVar7);
  *(int32_t *)&(__this_08->_1).nestedTypes = iVar5;
  __this_00 = (__this_08->_1).typeMetadataHandle;
  if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
    pIVar7 = (Il2CppClass *)0x0;
    UI_MapEditorMenu__ShowHierarchyPanel(__this_00,(MethodInfo *)0x0);
    lVar11 = *(long *)puVar4;
    if (lVar11 != 0) {
      pSVar12 = *(System_String_o **)(lVar11 + 0x40);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar10 = CustomLogic_CustomLogicManager__GetEditorEvaluator(pSVar12,1,(MethodInfo *)0x0);
      (__this_08->_1).this_arg.data = pCVar10;
      il2cpp_runtime_helper_022b4080(&(__this_08->_1).this_arg,pCVar10);
      pIVar7 = (__this_08->_1).klass;
      (__this_08->_1).element_class = pIVar7;
      il2cpp_runtime_helper_022b4080(&(__this_08->_1).element_class);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar11 = *(long *)(TypeInfo_MapLoader + 0xb8);
      if (*(long *)(lVar11 + 0x78) != 0) {
        if (*(int *)(*(long *)(lVar11 + 0x78) + 0x18) < 1) {
label_0456c233:
          if (g_data_057af041 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndAutosave_d__35);
            g_data_057af041 = '\x01';
          }
          __this_06 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndAutosave_d__35);
          pIVar7 = (Il2CppClass *)0x0;
          System_Object___ctor(__this_06,(MethodInfo *)0x0);
          *(undefined4 *)&__this_06[1].klass = 0;
          if (__this_06 != (Il2CppObject *)0x0) {
            __this_06[2].klass = __this_08;
            il2cpp_runtime_helper_022b4080(__this_06 + 2,__this_08);
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      ((UnityEngine_MonoBehaviour_o *)__this_08,(System_Collections_IEnumerator_o *)__this_06,
                       (MethodInfo *)0x0);
            return;
          }
        }
        else {
          pvVar3 = (__this_08->_1).typeMetadataHandle;
          if (pvVar3 != (void *)0x0) {
            __this_01 = *(UI_ExportPopup_o **)((long)pvVar3 + 0xf8);
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              lVar11 = *(long *)(TypeInfo_MapLoader + 0xb8);
            }
            pIVar7 = *(Il2CppClass **)(lVar11 + 0x78);
            pSVar12 = System_String__Join_3af7e00
                                ("\n",(System_Collections_Generic_IEnumerable_string__o *)pIVar7,
                                 (MethodInfo *)0x0);
            if (__this_01 != (UI_ExportPopup_o *)0x0) {
              UI_ExportPopup__Show(__this_01,pSVar12,(MethodInfo *)0x0);
              goto label_0456c233;
            }
          }
        }
      }
    }
  }
  pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_0456c2a7:
  il2cpp_runtime_helper_022b2fd0(pIVar7,pIVar13);
  if (g_data_057af048 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Map);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057af048 = '\x01';
  }
  pSVar17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar18 = (Il2CppMethodPointer)0x0;
  iVar19 = 0;
  uVar20 = 0;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
       (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
     (__this_07 = System_Collections_Generic_Dictionary_int__object___get_Keys
                            ((System_Collections_Generic_Dictionary_int__object__o *)
                             **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Map),
     __this_07 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffff88,__this_07,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    iVar15 = 0;
    while (__this_02.fields._8_8_ = pIVar18, __this_02.fields._dictionary = pSVar17,
          __this_02.fields._currentKey._0_4_ = iVar19, __this_02.fields._currentKey._4_4_ = uVar20,
          bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                            (__this_02,(MethodInfo_3244230 *)&stack0xffffffffffffff88), (char)bVar6 != '\0') {
      if (iVar15 < iVar19) {
        iVar15 = iVar19;
      }
    }
    __this_03.fields._8_8_ = pIVar18;
    __this_03.fields._dictionary = pSVar17;
    __this_03.fields._currentKey._0_4_ = iVar19;
    __this_03.fields._currentKey._4_4_ = uVar20;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
              (__this_03,(MethodInfo_3244220 *)&stack0xffffffffffffff88);
    return;
  }
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ == 1) {
    plVar14 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar11 = *plVar14;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar18;
    __this_04.fields._dictionary = pSVar17;
    __this_04.fields._currentKey._0_4_ = iVar19;
    __this_04.fields._currentKey._4_4_ = uVar20;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
              (__this_04,(MethodInfo_3244220 *)&stack0xffffffffffffff88);
    if (lVar11 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar11);
  }
  __this_05.fields._8_8_ = pIVar18;
  __this_05.fields._dictionary = pSVar17;
  __this_05.fields._currentKey._0_4_ = iVar19;
  __this_05.fields._currentKey._4_4_ = uVar20;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
            (__this_05,(MethodInfo_3244220 *)&stack0xffffffffffffff88);
  _Unwind_Resume(auVar16._0_8_);
}


// GameManagers.MapEditorGameManager$$SelectObject
// il2cpp: void GameManagers_MapEditorGameManager__SelectObject (GameManagers_MapEditorGameManager_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x456a4d0

void GameManagers_MapEditorGameManager__SelectObject
               (GameManagers_MapEditorGameManager_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *pSVar1;
  MapEditor_MapEditorBrush_o *pMVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorHierarchyPanel_o *__this_00;
  long lVar4;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  System_Collections_Generic_List_MapObject__o *objs;
  long *plVar7;
  MethodInfo *method_00;
  GameManagers_MapEditorGameManager_o *__this_05;
  undefined1 auVar8 [12];
  undefined8 in_stack_ffffffffffffff70;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar9;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_60;
  Il2CppRGCTXData *pIStack_48;
  
  if (g_data_057af03d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    g_data_057af03d = '\x01';
  }
  __this_05 = (GameManagers_MapEditorGameManager_o *)(__this->fields).SelectedObjects;
  if (__this_05 != (GameManagers_MapEditorGameManager_o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_05,(Il2CppObject *)obj,MethodInfo_Boolean_Add);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = (Il2CppRGCTXData *)__this;
  if (g_data_057af046 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057af046 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pSVar1 = (__this_05->fields).SelectedObjects;
  pSVar6 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_MapObject);
  System_Collections_Generic_HashSet_object____ctor_33e06b0
            (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pSVar1,MethodInfo_HashSet_1_Map_MapObject);
  if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0456a7fb;
  System_Collections_Generic_HashSet_object___GetEnumerator(&SStack_60,pSVar6,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_60.fields._set;
  while( true ) {
    do {
      __this_01.fields._8_8_ = __this_05;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70;
      __this_01.fields._current = (Il2CppObject *)pSVar9;
      bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff80);
      if ((char)bVar5 == '\0') {
        __this_02.fields._8_8_ = __this_05;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70;
        __this_02.fields._current = (Il2CppObject *)pSVar9;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
        goto label_0456a725;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (SStack_60.fields._current == (Il2CppObject *)0x0) goto label_0456a805;
      if (SStack_60.fields._current[2].klass == (Il2CppClass *)0x0) goto label_0456a80a;
      if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0456a800;
      bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_int__object__o *)
                         **(undefined8 **)(TypeInfo_MapLoader + 0xb8),
                         *(int32_t *)&((SStack_60.fields._current[2].klass)->_1).byval_arg.data,MethodInfo_Boolean_ContainsKey);
    } while ((char)bVar5 != '\0');
    if (g_data_057af03c == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      g_data_057af03c = '\x01';
    }
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(__this_05->fields).SelectedObjects;
    if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Remove(pSVar6,SStack_60.fields._current,MethodInfo_Boolean_Remove);
  }
  do {
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
label_0456a897:
      __this_04.fields._8_8_ = __this_05;
      __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70;
      __this_04.fields._current = (Il2CppObject *)pSVar9;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
      _Unwind_Resume(auVar8._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = __this_05;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70;
    __this_03.fields._current = (Il2CppObject *)pSVar9;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_0456a897;
    }
label_0456a725:
    pSVar1 = (__this_05->fields).SelectedObjects;
    if (pSVar1 != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
      if ((pSVar1->fields)._count < 1) {
label_0456a758:
        pUVar3 = (__this_05->fields)._menu;
        if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
          UI_MapEditorMenu__HideInspector(pUVar3,(MethodInfo *)0x0);
          pUVar3 = (__this_05->fields)._menu;
joined_r0x0456a77d:
          if ((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
             (__this_00 = (pUVar3->fields).HierarchyPanel, __this_00 != (UI_MapEditorHierarchyPanel_o *)0x0))
          {
            method_00 = (MethodInfo *)0x0;
            UI_MapEditorHierarchyPanel__SyncSelectedItems(__this_00,(MethodInfo *)0x0);
            GameManagers_MapEditorGameManager__SyncGizmos(__this_05,method_00);
            return;
          }
        }
      }
      else {
        pMVar2 = (__this_05->fields).Brush;
        if (pMVar2 != (MapEditor_MapEditorBrush_o *)0x0) {
          if ((char)(pMVar2->fields).Active != '\0') goto label_0456a758;
          pUVar3 = (__this_05->fields)._menu;
          objs = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
          System_Collections_Generic_List_object____ctor_362ba10
                    ((System_Collections_Generic_List_object__o *)objs,
                     (System_Collections_Generic_IEnumerable_T__o *)pSVar1,MethodInfo_List_1_Map_MapObject);
          if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto label_0456a7fb;
          UI_MapEditorMenu__ShowInspector_4335270(pUVar3,objs,(MethodInfo *)0x0);
          pUVar3 = (__this_05->fields)._menu;
          goto joined_r0x0456a77d;
        }
      }
    }
label_0456a7fb:
    il2cpp_runtime_helper_022b2c90();
label_0456a800:
    il2cpp_runtime_helper_022b2c90();
label_0456a805:
    il2cpp_runtime_helper_022b2c90();
label_0456a80a:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// GameManagers.MapEditorGameManager$$NewCommand
// il2cpp: void GameManagers_MapEditorGameManager__NewCommand (GameManagers_MapEditorGameManager_o* __this, MapEditor_BaseCommand_o* command, bool syncInspector, const MethodInfo* method);
// 0x456a150

void GameManagers_MapEditorGameManager__NewCommand
               (GameManagers_MapEditorGameManager_o *__this,MapEditor_BaseCommand_o *command,
               bool_conflict syncInspector,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_string__string__o **ppSVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int32_t length;
  UI_MapEditorInspectPanel_o *pUVar6;
  UI_BasePanel_o *__this_00;
  System_Collections_Generic_List_BasePopup__o *pSVar7;
  System_Object_array *pSVar8;
  System_Collections_Generic_List_BaseCommand__o *pSVar9;
  MapEditor_BaseCommand_c *pMVar10;
  UI_MapEditorMenu_o *__this_01;
  System_Collections_Generic_HashSet_MapObject__o *collection;
  System_Collections_Generic_HashSet_object__o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar11;
  UnityEngine_Object_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  System_Collections_Generic_Dictionary_string__string__o *pSVar14;
  UnityEngine_GameObject_o *pUVar15;
  System_Collections_Generic_List_object__o *__this_07;
  long *plVar16;
  MethodInfo *method_00;
  UI_MapEditorInspectPanel_o *x;
  long lVar17;
  UI_BasePanel_o *pUVar18;
  Il2CppClass **__this_08;
  undefined1 auVar19 [12];
  System_Collections_Generic_List_T__o *pSVar20;
  Il2CppMethodPointer pIVar21;
  Il2CppObject *pIVar22;
  Il2CppObject *item;
  
  __this_08 = (Il2CppClass **)__this;
  if (g_data_057af03e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransformPositionCommand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransformPositionRotationCommand);
    __this_08 = &TypeInfo_TransformScaleCommand;
    il2cpp_runtime_helper_023445d0();
    g_data_057af03e = '\x01';
  }
  if (command == (MapEditor_BaseCommand_o *)0x0) {
label_0456a2f7:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af03b == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
      g_data_057af03b = '\x01';
    }
    pSVar20 = (System_Collections_Generic_List_T__o *)0x0;
    pIVar21 = (Il2CppMethodPointer)0x0;
    pIVar22 = (Il2CppObject *)0x0;
    collection = (((GameManagers_MapEditorGameManager_o *)__this_08)->fields).SelectedObjects;
    __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
    System_Collections_Generic_List_object____ctor_362ba10
              (__this_07,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_Map_MapObject);
    if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,__this_07,
                 MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
      item = pIVar22;
      while( true ) {
        __this_03.fields._8_8_ = pIVar21;
        __this_03.fields._list = pSVar20;
        __this_03.fields._current = item;
        bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
        if ((char)bVar11 == '\0') {
          __this_04.fields._8_8_ = pIVar21;
          __this_04.fields._list = pSVar20;
          __this_04.fields._current = item;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
          return;
        }
        pIVar22 = item;
        if (g_data_057af03c == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
          g_data_057af03c = '\x01';
        }
        __this_02 = (System_Collections_Generic_HashSet_object__o *)
                    (((GameManagers_MapEditorGameManager_o *)__this_08)->fields).SelectedObjects;
        if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
        System_Collections_Generic_HashSet_object___Remove(__this_02,item,MethodInfo_Boolean_Remove);
        item = pIVar22;
      }
      il2cpp_runtime_helper_022b2c90();
    }
    auVar19 = il2cpp_runtime_helper_022b2c90();
    if (auVar19._8_4_ == 1) {
      plVar16 = (long *)__cxa_begin_catch(auVar19._0_8_);
      lVar17 = *plVar16;
      __cxa_end_catch();
      __this_05.fields._8_8_ = pIVar21;
      __this_05.fields._list = pSVar20;
      __this_05.fields._current = pIVar22;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
      if (lVar17 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar17);
    }
    __this_06.fields._8_8_ = pIVar21;
    __this_06.fields._list = pSVar20;
    __this_06.fields._current = pIVar22;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    _Unwind_Resume(auVar19._0_8_);
  }
  (*(command->klass->vtable)._4_Execute.methodPtr)(command,(command->klass->vtable)._4_Execute.method);
  lVar17 = MethodInfo_Void_Add;
  __this_08 = (Il2CppClass **)(__this->fields)._undoCommands;
  if ((GameManagers_MapEditorGameManager_o *)__this_08 == (GameManagers_MapEditorGameManager_o *)0x0)
  goto label_0456a2f7;
  piVar1 = (int32_t *)
           ((long)&(((GameManagers_MapEditorGameManager_o *)__this_08)->fields).m_CancellationTokenSource + 4)
  ;
  *piVar1 = *piVar1 + 1;
  pSVar8 = (System_Object_array *)(((GameManagers_MapEditorGameManager_o *)__this_08)->fields).m_CachedPtr;
  if (pSVar8 == (System_Object_array *)0x0) goto label_0456a2f7;
  uVar5 = *(uint *)&(((GameManagers_MapEditorGameManager_o *)__this_08)->fields).m_CancellationTokenSource;
  if (uVar5 < (uint)pSVar8->max_length) {
    *(uint *)&(((GameManagers_MapEditorGameManager_o *)__this_08)->fields).m_CancellationTokenSource =
         uVar5 + 1;
    __this_08 = (Il2CppClass **)(pSVar8->m_Items + (int)uVar5);
    pSVar8->m_Items[(int)uVar5] = (Il2CppObject *)command;
    il2cpp_runtime_helper_022b4080();
    pSVar9 = (__this->fields)._redoCommands;
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_08,(Il2CppObject *)command,
               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    pSVar9 = (__this->fields)._redoCommands;
  }
  if (pSVar9 == (System_Collections_Generic_List_BaseCommand__o *)0x0) goto label_0456a2f7;
  piVar1 = &(pSVar9->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar9->fields)._size;
  (pSVar9->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,length,(MethodInfo *)0x0);
  }
  pMVar10 = command->klass;
  bVar3 = (pMVar10->_2).naturalAligment;
  bVar4 = (TypeInfo_TransformPositionCommand->_2).naturalAligment;
  if (((((bVar3 < bVar4) || ((pMVar10->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_TransformPositionCommand)) &&
       ((bVar4 = (TypeInfo_TransformPositionRotationCommand->_2).naturalAligment, bVar3 < bVar4 ||
        ((pMVar10->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_TransformPositionRotationCommand)))) &&
      ((bVar4 = (TypeInfo_TransformScaleCommand->_2).naturalAligment, bVar3 < bVar4 ||
       ((pMVar10->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_TransformScaleCommand)))) || ((char)syncInspector == '\0')) {
    return;
  }
  __this_01 = (__this->fields)._menu;
  __this_08 = (Il2CppClass **)0x0;
  if (__this_01 == (UI_MapEditorMenu_o *)0x0) goto label_0456a2f7;
  if (g_data_057ae69d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69d = '\x01';
  }
  x = (__this_01->fields).InspectPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pUVar6 = (__this_01->fields).InspectPanel;
  if (pUVar6 != (UI_MapEditorInspectPanel_o *)0x0) {
    UI_MapEditorMenu__ShowInspector_4335270(__this_01,(pUVar6->fields)._mapObjects,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69e = '\x01';
  }
  pSVar14 = (x->fields)._syncedSerialized;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppSVar2 = &(x->fields)._syncedSerialized;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
label_044375dc:
    pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    pSVar14 = (System_Collections_Generic_Dictionary_string__string__o *)
              UI_ElementFactory__CreateHeadedPanel_object_(pUVar13,0,MethodInfo_MapEditorHierarchyPanel_CreateHeadedPanel_MapEditorHiera);
    (x->fields)._syncedSerialized = pSVar14;
    il2cpp_runtime_helper_022b4080(ppSVar2);
    pSVar14 = (x->fields)._syncedSerialized;
    if (pSVar14 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      pUVar15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar14,(MethodInfo *)0x0);
      UI_ElementFactory__SetAnchor(pUVar15,0,0,(UnityEngine_Vector2_o)0xc282000040a00000,(MethodInfo *)0x0);
      pSVar14 = *ppSVar2;
      if (pSVar14 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        (*(pSVar14->klass->vtable)._21_System_Collections_IDictionary_get_Item.methodPtr)
                  (pSVar14,(pSVar14->klass->vtable)._21_System_Collections_IDictionary_get_Item.method);
        return;
      }
    }
  }
  else if (*ppSVar2 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    pUVar12 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*ppSVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar12,(MethodInfo *)0x0);
    goto label_044375dc;
  }
  lVar17 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae69f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae69f = '\x01';
  }
  pUVar12 = *(UnityEngine_Object_o **)(lVar17 + 0xa8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pUVar18 = *(UI_BasePanel_o **)(lVar17 + 0xa8);
  if (pUVar18 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar18,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90(0);
  if (g_data_057ae6a0 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6a0 = '\x01';
  }
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar13 = pUVar18[1].fields.DoublePanelRight;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    pUVar13 = pUVar18[1].fields.DoublePanelRight;
    if ((pUVar13 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
       pUVar15 == (UnityEngine_GameObject_o *)0x0)) goto label_0443782e;
    bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar15,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      __this_00 = (UI_BasePanel_o *)pUVar18[1].fields.DoublePanelRight;
      if (__this_00 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(__this_00,(MethodInfo *)0x0);
    }
  }
  pSVar7 = pUVar18[1].fields._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pSVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    pSVar7 = pUVar18[1].fields._popups;
    if ((pSVar7 == (System_Collections_Generic_List_BasePopup__o *)0x0) ||
       (pUVar15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0),
       pUVar15 == (UnityEngine_GameObject_o *)0x0)) {
label_0443782e:
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar15,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pUVar18 = (UI_BasePanel_o *)pUVar18[1].fields._popups;
      if (pUVar18 == (UI_BasePanel_o *)0x0) goto label_0443782e;
      UI_BasePanel__GetPhysicalWidth(pUVar18,(MethodInfo *)0x0);
    }
  }
  return;
}


// GameManagers.MapEditorGameManager$$OnFinishLoading
// il2cpp: void GameManagers_MapEditorGameManager__OnFinishLoading (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456bf60

void GameManagers_MapEditorGameManager__OnFinishLoading
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  Map_MapScript_o **ppMVar1;
  byte bVar2;
  UI_MapEditorMenu_o *pUVar3;
  Map_MapScript_o *pMVar4;
  UI_ExportPopup_o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  int32_t iVar5;
  bool_conflict bVar6;
  MapEditor_PositionGizmo_o *pMVar7;
  MapEditor_OutlineGizmo_o *pMVar8;
  MapEditor_RotationGizmo_o *pMVar9;
  UI_MapEditorMenu_o *method_00;
  CustomLogic_CustomLogicEvaluator_o *pCVar10;
  long lVar11;
  System_String_o *pSVar12;
  Il2CppObject *__this_05;
  Il2CppClass *pIVar13;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  long *plVar14;
  int iVar15;
  GameManagers_MapEditorGameManager_o *__this_07;
  undefined1 auVar16 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar17;
  Il2CppMethodPointer pIVar18;
  int iVar19;
  undefined4 uVar20;
  
  if (g_data_057af03f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"\n");
    g_data_057af03f = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar1 = &(__this->fields).MapScript;
  (__this->fields).MapScript = *(Map_MapScript_o **)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  il2cpp_runtime_helper_022b4080(ppMVar1);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (method_00 != (UI_MapEditorMenu_o *)0x0) goto label_0456c02a;
label_0456c0a1:
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    method_00 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (method_00 == (UI_MapEditorMenu_o *)0x0) goto label_0456c0a1;
label_0456c02a:
    pIVar13 = TypeInfo_MapEditorMenu;
    bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if (((((System_Collections_Generic_IEnumerable_string__c *)method_00->klass)->_2).naturalAligment < bVar2)
       || ((((System_Collections_Generic_IEnumerable_string__c *)method_00->klass)->_2).typeHierarchy
           [(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) goto label_0456c2a7;
    (__this->fields)._menu = method_00;
    if (((((System_Collections_Generic_IEnumerable_string__c *)method_00->klass)->_2).naturalAligment < bVar2)
       || ((((System_Collections_Generic_IEnumerable_string__c *)method_00->klass)->_2).typeHierarchy
           [(ulong)bVar2 - 1] != pIVar13)) goto label_0456c2a7;
  }
  il2cpp_runtime_helper_022b4080();
  pMVar7 = MapEditor_PositionGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._positionGizmo = pMVar7;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._positionGizmo,pMVar7);
  pMVar8 = MapEditor_OutlineGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._outlineGizmo = pMVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._outlineGizmo,pMVar8);
  pMVar9 = MapEditor_RotationGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._rotationGizmo = pMVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rotationGizmo,pMVar9);
  method_00 = (UI_MapEditorMenu_o *)MapEditor_ScaleGizmo__Create((MethodInfo *)0x0);
  __this_07 = (GameManagers_MapEditorGameManager_o *)&(__this->fields)._scaleGizmo;
  (__this->fields)._scaleGizmo = (MapEditor_ScaleGizmo_o *)method_00;
  il2cpp_runtime_helper_022b4080();
  iVar5 = GameManagers_MapEditorGameManager__GetHighestObjectId(__this_07,(MethodInfo *)method_00);
  (__this->fields)._currentObjectId = iVar5;
  pUVar3 = (__this->fields)._menu;
  if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
    method_00 = (UI_MapEditorMenu_o *)0x0;
    UI_MapEditorMenu__ShowHierarchyPanel(pUVar3,(MethodInfo *)0x0);
    pMVar4 = *ppMVar1;
    if (pMVar4 != (Map_MapScript_o *)0x0) {
      pSVar12 = (pMVar4->fields).Logic;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar10 = CustomLogic_CustomLogicManager__GetEditorEvaluator(pSVar12,1,(MethodInfo *)0x0);
      (__this->fields).LogicEvaluator = pCVar10;
      il2cpp_runtime_helper_022b4080(&(__this->fields).LogicEvaluator,pCVar10);
      method_00 = (UI_MapEditorMenu_o *)(__this->fields)._positionGizmo;
      (__this->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)method_00;
      il2cpp_runtime_helper_022b4080(&(__this->fields).CurrentGizmo);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar11 = *(long *)(TypeInfo_MapLoader + 0xb8);
      if (*(long *)(lVar11 + 0x78) != 0) {
        if (*(int *)(*(long *)(lVar11 + 0x78) + 0x18) < 1) {
label_0456c233:
          if (g_data_057af041 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndAutosave_d__35);
            g_data_057af041 = '\x01';
          }
          __this_05 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndAutosave_d__35);
          method_00 = (UI_MapEditorMenu_o *)0x0;
          System_Object___ctor(__this_05,(MethodInfo *)0x0);
          *(undefined4 *)&__this_05[1].klass = 0;
          if (__this_05 != (Il2CppObject *)0x0) {
            __this_05[2].klass = (Il2CppClass *)__this;
            il2cpp_runtime_helper_022b4080(__this_05 + 2,__this);
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_05,
                       (MethodInfo *)0x0);
            return;
          }
        }
        else {
          pUVar3 = (__this->fields)._menu;
          if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
            __this_00 = (UI_ExportPopup_o *)(pUVar3->fields).ErrorPopup;
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              lVar11 = *(long *)(TypeInfo_MapLoader + 0xb8);
            }
            method_00 = *(UI_MapEditorMenu_o **)(lVar11 + 0x78);
            pSVar12 = System_String__Join_3af7e00
                                ("\n",(System_Collections_Generic_IEnumerable_string__o *)method_00,
                                 (MethodInfo *)0x0);
            if (__this_00 != (UI_ExportPopup_o *)0x0) {
              UI_ExportPopup__Show(__this_00,pSVar12,(MethodInfo *)0x0);
              goto label_0456c233;
            }
          }
        }
      }
    }
  }
  pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_0456c2a7:
  il2cpp_runtime_helper_022b2fd0(method_00,pIVar13);
  if (g_data_057af048 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Map);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057af048 = '\x01';
  }
  pSVar17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar18 = (Il2CppMethodPointer)0x0;
  iVar19 = 0;
  uVar20 = 0;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
       (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
     (__this_06 = System_Collections_Generic_Dictionary_int__object___get_Keys
                            ((System_Collections_Generic_Dictionary_int__object__o *)
                             **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Map),
     __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffa0,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    iVar15 = 0;
    while (__this_01.fields._8_8_ = pIVar18, __this_01.fields._dictionary = pSVar17,
          __this_01.fields._currentKey._0_4_ = iVar19, __this_01.fields._currentKey._4_4_ = uVar20,
          bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                            (__this_01,(MethodInfo_3244230 *)&stack0xffffffffffffffa0), (char)bVar6 != '\0') {
      if (iVar15 < iVar19) {
        iVar15 = iVar19;
      }
    }
    __this_02.fields._8_8_ = pIVar18;
    __this_02.fields._dictionary = pSVar17;
    __this_02.fields._currentKey._0_4_ = iVar19;
    __this_02.fields._currentKey._4_4_ = uVar20;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
              (__this_02,(MethodInfo_3244220 *)&stack0xffffffffffffffa0);
    return;
  }
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ == 1) {
    plVar14 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar11 = *plVar14;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar18;
    __this_03.fields._dictionary = pSVar17;
    __this_03.fields._currentKey._0_4_ = iVar19;
    __this_03.fields._currentKey._4_4_ = uVar20;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
              (__this_03,(MethodInfo_3244220 *)&stack0xffffffffffffffa0);
    if (lVar11 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar11);
  }
  __this_04.fields._8_8_ = pIVar18;
  __this_04.fields._dictionary = pSVar17;
  __this_04.fields._currentKey._0_4_ = iVar19;
  __this_04.fields._currentKey._4_4_ = uVar20;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
            (__this_04,(MethodInfo_3244220 *)&stack0xffffffffffffffa0);
  _Unwind_Resume(auVar16._0_8_);
}


// GameManagers.MapEditorGameManager$$Awake
// il2cpp: void GameManagers_MapEditorGameManager__Awake (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456c4b0

void GameManagers_MapEditorGameManager__Awake(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  long lVar1;
  undefined4 uVar2;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  if (g_data_057af040 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057af040 = '\x01';
  }
  uVar2 = 0;
  __this_00 = __this;
  GameManagers_BaseGameManager__Awake((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar1 != 0) {
    (__this->fields)._input = *(Settings_MapEditorInputSettings_o **)(lVar1 + 0x50);
    il2cpp_runtime_helper_022b4080(&(__this->fields)._input);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = uVar2;
  return;
}


// GameManagers.MapEditorGameManager$$WaitAndAutosave
// il2cpp: System_Collections_IEnumerator_o* GameManagers_MapEditorGameManager__WaitAndAutosave (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456c440

System_Collections_IEnumerator_o *
GameManagers_MapEditorGameManager__WaitAndAutosave
          (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  long lVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  System_Collections_IEnumerator_o *pSVar3;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar4;
  GameManagers_BaseGameManager_o *__this_00;
  
  if (g_data_057af041 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndAutosave_d__35);
    g_data_057af041 = '\x01';
  }
  pGVar2 = (GameManagers_BaseGameManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndAutosave_d__35);
  __this_00 = pGVar2;
  System_Object___ctor((Il2CppObject *)pGVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pGVar2->fields).m_CachedPtr = 0;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    (pGVar2->fields).pvCache = (Photon_Pun_PhotonView_o *)__this;
    il2cpp_runtime_helper_022b4080(&(pGVar2->fields).pvCache,__this);
    return (System_Collections_IEnumerator_o *)pGVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af040 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057af040 = '\x01';
  }
  uVar4 = 0;
  pGVar2 = __this_00;
  GameManagers_BaseGameManager__Awake(__this_00,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar1 != 0) {
    __this_00[2].fields.pvCache = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x50);
    pSVar3 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b4080(&__this_00[2].fields.pvCache);
    return pSVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pGVar2->fields).m_CachedPtr = uVar4;
  return extraout_RAX;
}


// GameManagers.MapEditorGameManager$$Update
// il2cpp: void GameManagers_MapEditorGameManager__Update (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456c530

void GameManagers_MapEditorGameManager__Update(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o start;
  MapEditor_BaseGizmo_o *pMVar1;
  MapEditor_BaseGizmo_c *pMVar2;
  Settings_MapEditorInputSettings_o *pSVar3;
  System_Collections_Generic_HashSet_MapObject__o *pSVar4;
  MapEditor_MapEditorBrush_o *__this_00;
  UI_MapEditorTopPanel_o *__this_01;
  long lVar5;
  code *vtableDispatch;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_EventSystems_EventSystem_o *pUVar8;
  long *plVar9;
  System_Collections_Generic_List_MapScriptBaseObject__o *objs;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  MethodInfo *pMVar10;
  UI_MapEditorMenu_o *pUVar11;
  MethodInfo *pMVar12;
  MapEditor_PositionGizmo_o *method_01;
  UI_MapEditorInspectPanel_o *__this_02;
  UI_MapEditorInspectPanel_o *__this_03;
  long lVar13;
  GameManagers_MapEditorGameManager_o *__this_04;
  UnityEngine_Vector3_o UVar14;
  
  GameManagers_MapEditorGameManager__UpdateInput(__this,method);
  GameManagers_MapEditorGameManager__UpdateBrush(__this,method);
  if (g_data_057af044 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af044 = '\x01';
  }
  pUVar11 = (__this->fields)._menu;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  pMVar1 = (__this->fields).CurrentGizmo;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_0456d22a:
    pUVar11 = (__this->fields)._menu;
    plVar9 = (long *)(UI_MapEditorMenu_o *)0x0;
    if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
      pMVar12 = (MethodInfo *)0x0;
      bVar7 = UI_MapEditorMenu__IsPopupActive(pUVar11,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (*(int *)(TypeInfo_EventSystem + 0xe4) != 0) goto label_0456d25d;
label_0456d417:
        il2cpp_runtime_helper_02337ed0();
        plVar9 = (long *)0x0;
        pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      }
      else {
        *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) goto label_0456d417;
label_0456d25d:
        plVar9 = (long *)0x0;
        pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      }
      if (pUVar8 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
        pUVar11 = (UI_MapEditorMenu_o *)(pUVar8->fields).m_CurrentSelected;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar10 = (MethodInfo *)0x0;
        plVar9 = (long *)pUVar11;
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          pMVar12 = pMVar10;
          if (pUVar11 == (UI_MapEditorMenu_o *)0x0) goto label_0456d42c;
          plVar9 = (long *)UnityEngine_GameObject__GetComponent_object_
                                     ((UnityEngine_GameObject_o *)pUVar11,MethodInfo_InputField_GetComponent_InputField);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar10 = (MethodInfo *)0x0;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)plVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
          }
        }
        pUVar11 = (__this->fields)._menu;
        if (*(char *)((long)&(__this->fields).IgnoreNextSelect + 1) == '\0') {
label_0456d3a0:
          pMVar12 = pMVar10;
          if (g_data_057a694c == '\0') {
            plVar9 = &TypeInfo_Vector2;
            il2cpp_runtime_helper_023445d0();
            g_data_057a694c = '\x01';
            pMVar12 = pMVar10;
          }
          if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
            UI_MapEditorMenu__SetDrag
                      (pUVar11,0,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
                       ,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                       (MethodInfo *)0x0);
            return;
          }
        }
        else {
          start.fields.x = (float)(__this->fields)._isDrag;
          start.fields.y = (__this->fields)._dragStart.fields.x;
          plVar9 = (long *)0x0;
          UVar14 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          pMVar12 = pMVar10;
          if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
            pMVar12 = (MethodInfo *)0x1;
            UI_MapEditorMenu__SetDrag
                      (pUVar11,1,start,(UnityEngine_Vector2_o)UVar14.fields._0_8_,(MethodInfo *)0x0);
            pSVar3 = (__this->fields)._input;
            plVar9 = (long *)pUVar11;
            if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (plVar9 = (long *)(pSVar3->fields).Select,
               (UI_MapEditorMenu_o *)plVar9 != (UI_MapEditorMenu_o *)0x0)) {
              pMVar12 = (MethodInfo *)0x0;
              bVar7 = Settings_KeybindSetting__GetKeyUp
                                ((Settings_KeybindSetting_o *)plVar9,0,(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                return;
              }
              pSVar3 = (__this->fields)._input;
              if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                 (plVar9 = (long *)(pSVar3->fields).Multiselect,
                 (UI_MapEditorMenu_o *)plVar9 != (UI_MapEditorMenu_o *)0x0)) {
                pMVar10 = (MethodInfo *)0x0;
                pMVar12 = (MethodInfo *)0x0;
                bVar7 = Settings_KeybindSetting__GetKey
                                  ((Settings_KeybindSetting_o *)plVar9,0,(MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  pSVar4 = (__this->fields).SelectedObjects;
                  if (pSVar4 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0456d42c;
                  pMVar10 = (MethodInfo *)(ulong)(0 < (pSVar4->fields)._count);
                }
                plVar9 = (long *)__this;
                GameManagers_MapEditorGameManager__Select(__this,(bool_conflict)pMVar10,method_00);
                *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
                pUVar11 = (__this->fields)._menu;
                goto label_0456d3a0;
              }
            }
          }
        }
      }
    }
  }
  else {
    pMVar1 = (__this->fields).CurrentGizmo;
    plVar9 = (long *)(UI_MapEditorMenu_o *)0x0;
    if (pMVar1 != (MapEditor_BaseGizmo_o *)0x0) {
      pMVar2 = pMVar1->klass;
      pMVar12 = (pMVar2->vtable)._4_IsActive.method;
      cVar6 = (*(pMVar2->vtable)._4_IsActive.methodPtr)();
      if (cVar6 != '\0') {
        *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
      }
      goto label_0456d22a;
    }
  }
label_0456d42c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af043 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AddObjectCommand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057af043 = '\x01';
  }
  __this_02 = (((UI_MapEditorMenu_o *)plVar9)->fields).InspectPanel;
  if (__this_02 != (UI_MapEditorInspectPanel_o *)0x0) {
    if ((char)(__this_02->fields).m_CachedPtr == '\0') {
      return;
    }
    pMVar12 = (MethodInfo *)0x0;
    objs = MapEditor_MapEditorBrush__BuildPlacements
                     ((MapEditor_MapEditorBrush_o *)__this_02,(MethodInfo *)0x0);
    if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      if ((objs->fields)._size == 0) {
        return;
      }
      pMVar12 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_AddObjectCommand);
      MapEditor_AddObjectCommand___ctor((MapEditor_AddObjectCommand_o *)pMVar12,objs,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand
                ((GameManagers_MapEditorGameManager_o *)plVar9,(MapEditor_BaseCommand_o *)pMVar12,1,in_RCX);
      pUVar11 = (UI_MapEditorMenu_o *)(((UI_MapEditorMenu_o *)plVar9)->fields).ExportPopup;
      __this_02 = (UI_MapEditorInspectPanel_o *)0x0;
      if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
        pMVar12 = (MethodInfo *)0x0;
        UI_MapEditorMenu__SyncHierarchyPanel(pUVar11,(MethodInfo *)0x0);
        __this_03 = (((UI_MapEditorMenu_o *)plVar9)->fields).InspectPanel;
        __this_02 = (UI_MapEditorInspectPanel_o *)0x0;
        if (__this_03 != (UI_MapEditorInspectPanel_o *)0x0) {
          if (*(char *)&(__this_03->fields).SinglePanel == '\0') {
label_0456d503:
            MapEditor_MapEditorBrush__RegenerateGhosts
                      ((MapEditor_MapEditorBrush_o *)__this_03,(MethodInfo *)0x0);
            return;
          }
          pMVar12 = (MethodInfo *)0x0;
          MapEditor_MapEditorBrush__Reseed((MapEditor_MapEditorBrush_o *)__this_03,(MethodInfo *)0x0);
          __this_03 = (((UI_MapEditorMenu_o *)plVar9)->fields).InspectPanel;
          __this_02 = (UI_MapEditorInspectPanel_o *)0x0;
          if (__this_03 != (UI_MapEditorInspectPanel_o *)0x0) goto label_0456d503;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (MapEditor_MapEditorBrush_o *)(__this_02->fields)._mapObjects;
  if (__this_00 != (MapEditor_MapEditorBrush_o *)0x0) {
    cVar6 = (char)(__this_00->fields).Active;
    pMVar12 = (MethodInfo *)(ulong)(cVar6 == '\0');
    MapEditor_MapEditorBrush__SetActive(__this_00,(uint)(cVar6 == '\0'),(MethodInfo *)0x0);
    if (cVar6 == '\0') {
      GameManagers_MapEditorGameManager__DeselectAll((GameManagers_MapEditorGameManager_o *)__this_02,pMVar12)
      ;
      pUVar11 = (UI_MapEditorMenu_o *)(__this_02->fields).BottomBar;
      if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
        pMVar12 = (MethodInfo *)0x0;
        UI_MapEditorMenu__ShowBrushPanel(pUVar11,(MethodInfo *)0x0);
        goto label_0456d573;
      }
    }
    else {
      pUVar11 = (UI_MapEditorMenu_o *)(__this_02->fields).BottomBar;
      if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
        pMVar12 = (MethodInfo *)0x0;
        UI_MapEditorMenu__HideBrushPanel(pUVar11,(MethodInfo *)0x0);
label_0456d573:
        GameManagers_MapEditorGameManager__OnSelectionChange
                  ((GameManagers_MapEditorGameManager_o *)__this_02,pMVar12);
        return;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar13 + 0x68) != 0) {
    __this_01 = *(UI_MapEditorTopPanel_o **)(*(long *)(lVar13 + 0x68) + 0xb0);
    lVar13 = 0;
    if (__this_01 != (UI_MapEditorTopPanel_o *)0x0) {
      UI_MapEditorTopPanel__Save(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar13 + 0x90) != (long *)0x0) {
    lVar5 = **(long **)(lVar13 + 0x90);
    pMVar12 = *(MethodInfo **)(lVar5 + 0x1b0);
    (**(code **)(lVar5 + 0x1a8))();
    if (*(long **)(lVar13 + 0x78) != (long *)0x0) {
      lVar5 = **(long **)(lVar13 + 0x78);
      pMVar12 = *(MethodInfo **)(lVar5 + 0x1b0);
      (**(code **)(lVar5 + 0x1a8))();
      if (*(long **)(lVar13 + 0x80) != (long *)0x0) {
        lVar5 = **(long **)(lVar13 + 0x80);
        pMVar12 = *(MethodInfo **)(lVar5 + 0x1b0);
        (**(code **)(lVar5 + 0x1a8))();
        plVar9 = *(long **)(lVar13 + 0x88);
        if (plVar9 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar9 + 0x1a8);
          (*vtableDispatch)(plVar9,*(undefined8 *)(*plVar9 + 0x1b0),extraout_RDX,vtableDispatch)
          ;
          return;
        }
      }
    }
  }
  __this_04 = (GameManagers_MapEditorGameManager_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af047 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    g_data_057af047 = '\x01';
  }
  bVar7 = System_String__op_Equality((System_String_o *)pMVar12,"Position",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    bVar7 = System_String__op_Equality((System_String_o *)pMVar12,"Rotation",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      method_01 = (MapEditor_PositionGizmo_o *)(__this_04->fields)._scaleGizmo;
    }
    else {
      method_01 = (MapEditor_PositionGizmo_o *)(__this_04->fields)._rotationGizmo;
    }
  }
  else {
    method_01 = (__this_04->fields)._positionGizmo;
  }
  (__this_04->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)method_01;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).CurrentGizmo);
  GameManagers_MapEditorGameManager__SyncGizmos(__this_04,(MethodInfo *)method_01);
  return;
}


// GameManagers.MapEditorGameManager$$UpdateBrush
// il2cpp: void GameManagers_MapEditorGameManager__UpdateBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456c9d0

void GameManagers_MapEditorGameManager__UpdateBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o start;
  Il2CppClass *__this_00;
  Settings_MapEditorInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  UI_ExportPopup_o *x;
  UI_ExternalLinkPopup_o *pUVar3;
  UI_ExternalLinkPopup_c *pUVar4;
  UI_ImportPopup_o *pUVar5;
  UI_ConfirmPopup_o *pUVar6;
  UI_MapEditorTopPanel_o *__this_01;
  long lVar7;
  code *vtableDispatch;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_02;
  char cVar8;
  bool_conflict bVar9;
  UnityEngine_LayerMask_o mask;
  int32_t iVar10;
  bool_conflict bVar11;
  bool_conflict bVar12;
  UI_MapEditorMenu_o *pUVar13;
  UnityEngine_Object_o *x_00;
  System_Int32_array *layers;
  UnityEngine_EventSystems_EventSystem_o *pUVar14;
  long *plVar15;
  System_Collections_Generic_List_MapScriptBaseObject__o *objs;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  MethodInfo *pMVar16;
  float fVar17;
  MethodInfo *pMVar18;
  MapEditor_PositionGizmo_o *method_01;
  UI_MapEditorMenu_o *pUVar19;
  MapEditor_MapEditorBrush_o *pMVar20;
  UI_MapEditorInspectPanel_o *__this_03;
  UI_MapEditorInspectPanel_o *__this_04;
  long lVar21;
  GameManagers_MapEditorGameManager_o *__this_05;
  UI_MapEditorMenu_o *x_01;
  int iVar22;
  float fVar23;
  float fVar24;
  UnityEngine_Vector3_o UVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  int32_t in_stack_ffffffffffffff70;
  UnityEngine_Ray_o local_70;
  UI_MapEditorMenu_c *local_58;
  void *pvStack_50;
  intptr_t iStack_48;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  
  if (g_data_057af042 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&"Mouse ScrollWheel");
    g_data_057af042 = '\x01';
  }
  uStack_38 = 0;
  uStack_34 = 0;
  iStack_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_58 = (UI_MapEditorMenu_c *)0x0;
  pvStack_50 = (void *)0x0;
  pMVar20 = (__this->fields).Brush;
  if (pMVar20 == (MapEditor_MapEditorBrush_o *)0x0) {
    return;
  }
  if ((char)(pMVar20->fields).Active == '\0') {
    return;
  }
  pUVar19 = (__this->fields)._menu;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  pUVar19 = (__this->fields)._menu;
  if (pUVar19 == (UI_MapEditorMenu_o *)0x0) {
label_0456d14e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar9 = UI_MapEditorMenu__IsPopupActive(pUVar19,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
label_0456cad0:
      pMVar20 = (__this->fields).Brush;
      pUVar19 = (UI_MapEditorMenu_o *)0x0;
      if (pMVar20 != (MapEditor_MapEditorBrush_o *)0x0) {
        MapEditor_MapEditorBrush__ClearCenter(pMVar20,(MethodInfo *)0x0);
        return;
      }
      goto label_0456d14e;
    }
    pUVar13 = (__this->fields)._menu;
    if (pUVar13 == (UI_MapEditorMenu_o *)0x0) goto label_0456d14e;
    if ((char)(pUVar13->fields).IsMouseUI != '\0') goto label_0456cad0;
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar13 = (UI_MapEditorMenu_o *)UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    x_01 = (UI_MapEditorMenu_o *)0x0;
    pUVar19 = pUVar13;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (pUVar13 == (UI_MapEditorMenu_o *)0x0) goto label_0456d14e;
      x_01 = (UI_MapEditorMenu_o *)(pUVar13->fields).ExternalLinkPopup;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar19 = x_01;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (x_01 == (UI_MapEditorMenu_o *)0x0) goto label_0456d14e;
      x_00 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x_01,MethodInfo_InputField_GetComponent_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') goto label_0456cad0;
    }
    pUVar13 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar19 = pUVar13;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    if (pUVar13 == (UI_MapEditorMenu_o *)0x0) goto label_0456d14e;
    __this_00 = (Il2CppClass *)(pUVar13->fields)._popups;
    pUVar19 = (UI_MapEditorMenu_o *)0x0;
    UVar25 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (__this_00 == (Il2CppClass *)0x0) goto label_0456d14e;
    UnityEngine_Camera__ScreenPointToRay_4db37e0
              (&local_70,(UnityEngine_Camera_o *)__this_00,UVar25,(MethodInfo *)0x0);
    layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
    if (*(int *)((long)&(TypeInfo_PhysicsLayer->fields).SettingsPopup + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar19 = TypeInfo_PhysicsLayer;
    if (layers == (System_Int32_array *)0x0) goto label_0456d14e;
    if ((int)layers->max_length != 0) {
      layers->m_Items[0] =
           *(int32_t *)&(((TypeInfo_PhysicsLayer->fields).AddObjectPopup)->fields)._currentCategoryPanel;
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      iVar10 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar26 = CONCAT44(local_70.fields.m_Origin.fields.y,local_70.fields.m_Origin.fields.x);
      uVar27 = CONCAT44(local_70.fields.m_Direction.fields.x,local_70.fields.m_Origin.fields.z);
      pUVar19 = (UI_MapEditorMenu_o *)&stack0xffffffffffffffa8;
      ray.fields.m_Origin.fields.z = local_70.fields.m_Origin.fields.z;
      ray.fields.m_Direction.fields.x = local_70.fields.m_Direction.fields.x;
      ray.fields.m_Origin.fields.x = local_70.fields.m_Origin.fields.x;
      ray.fields.m_Origin.fields.y = local_70.fields.m_Origin.fields.y;
      ray.fields.m_Direction.fields.y = local_70.fields.m_Direction.fields.y;
      ray.fields.m_Direction.fields.z = local_70.fields.m_Direction.fields.z;
      bVar9 = UnityEngine_Physics__Raycast_4e78080
                        (ray,(UnityEngine_RaycastHit_o *)pUVar19,100000.0,iVar10,(MethodInfo *)0x0);
      pMVar20 = (__this->fields).Brush;
      if ((char)bVar9 == '\0') {
        if (pMVar20 != (MapEditor_MapEditorBrush_o *)0x0) {
          MapEditor_MapEditorBrush__ClearCenter(pMVar20,(MethodInfo *)0x0);
          goto label_0456cd0f;
        }
      }
      else {
        pUVar19 = (UI_MapEditorMenu_o *)&stack0xffffffffffffffa8;
        __this_02.fields.m_Point.fields.z = (float)(int)uVar27;
        __this_02.fields.m_Normal.fields.x = (float)(int)((ulong)uVar27 >> 0x20);
        __this_02.fields.m_Point.fields.x = (float)(int)uVar26;
        __this_02.fields.m_Point.fields.y = (float)(int)((ulong)uVar26 >> 0x20);
        __this_02.fields.m_Normal.fields.y = local_70.fields.m_Direction.fields.y;
        __this_02.fields.m_Normal.fields.z = local_70.fields.m_Direction.fields.z;
        __this_02.fields.m_FaceID = (int)in_stack_ffffffffffffff60;
        __this_02.fields.m_Distance = (float)(int)((ulong)in_stack_ffffffffffffff60 >> 0x20);
        __this_02.fields.m_UV.fields.x = (float)in_stack_ffffffffffffff68;
        __this_02.fields.m_UV.fields.y = (float)in_stack_ffffffffffffff6c;
        __this_02.fields.m_Collider = in_stack_ffffffffffffff70;
        UVar25 = UnityEngine_RaycastHit__get_point(__this_02,(MethodInfo *)pUVar19);
        if (pMVar20 != (MapEditor_MapEditorBrush_o *)0x0) {
          MapEditor_MapEditorBrush__SetCenter(pMVar20,UVar25,(MethodInfo *)0x0);
label_0456cd0f:
          pUVar19 = "Mouse ScrollWheel";
          fVar23 = UnityEngine_Input__GetAxis((System_String_o *)"Mouse ScrollWheel",(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._input;
          if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (pUVar19 = (UI_MapEditorMenu_o *)(pSVar1->fields).BrushCount,
             pUVar19 != (UI_MapEditorMenu_o *)0x0)) {
            bVar9 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pUVar19,0,(MethodInfo *)0x0);
            pSVar1 = (__this->fields)._input;
            if (pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) {
              pSVar2 = (pSVar1->fields).BrushCurve;
              pUVar19 = (UI_MapEditorMenu_o *)0x0;
              if (pSVar2 != (Settings_KeybindSetting_o *)0x0) {
                bVar11 = Settings_KeybindSetting__GetKey(pSVar2,0,(MethodInfo *)0x0);
                pUVar19 = (UI_MapEditorMenu_o *)(__this->fields).Brush;
                if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
                  if (*(int *)((long)&(pUVar19->fields).m_CachedPtr + 4) == 1) {
                    pSVar1 = (__this->fields)._input;
                    if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                       (pUVar19 = (UI_MapEditorMenu_o *)(pSVar1->fields).BrushCurveAxisX,
                       pUVar19 != (UI_MapEditorMenu_o *)0x0)) {
                      bVar12 = Settings_KeybindSetting__GetKeyDown
                                         ((Settings_KeybindSetting_o *)pUVar19,0,(MethodInfo *)0x0);
                      if ((char)bVar12 == '\0') {
                        pSVar1 = (__this->fields)._input;
                        if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                           (pUVar19 = (UI_MapEditorMenu_o *)(pSVar1->fields).BrushCurveAxisY,
                           pUVar19 != (UI_MapEditorMenu_o *)0x0)) {
                          bVar12 = Settings_KeybindSetting__GetKeyDown
                                             ((Settings_KeybindSetting_o *)pUVar19,0,(MethodInfo *)0x0);
                          if ((char)bVar12 != '\0') {
                            pMVar20 = (__this->fields).Brush;
                            fVar24 = 2.8026e-45;
                            goto joined_r0x0456cea3;
                          }
                          pSVar1 = (__this->fields)._input;
                          if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
                             (pUVar19 = (UI_MapEditorMenu_o *)(pSVar1->fields).BrushCurveAxisZ,
                             pUVar19 == (UI_MapEditorMenu_o *)0x0)) goto label_0456d14e;
                          bVar12 = Settings_KeybindSetting__GetKeyDown
                                             ((Settings_KeybindSetting_o *)pUVar19,0,(MethodInfo *)0x0);
                          if ((char)bVar12 != '\0') {
                            pMVar20 = (__this->fields).Brush;
                            fVar24 = 4.2039e-45;
                            goto joined_r0x0456cea3;
                          }
                          pSVar1 = (__this->fields)._input;
                          if ((pSVar1 == (Settings_MapEditorInputSettings_o *)0x0) ||
                             (pUVar19 = (UI_MapEditorMenu_o *)(pSVar1->fields).BrushCurveAxisNone,
                             pUVar19 == (UI_MapEditorMenu_o *)0x0)) goto label_0456d14e;
                          fVar24 = 0.0;
                          bVar12 = Settings_KeybindSetting__GetKeyDown
                                             ((Settings_KeybindSetting_o *)pUVar19,0,(MethodInfo *)0x0);
                          if ((char)bVar12 != '\0') {
                            pMVar20 = (__this->fields).Brush;
                            goto joined_r0x0456cea3;
                          }
                          goto label_0456ceee;
                        }
                      }
                      else {
                        pMVar20 = (__this->fields).Brush;
                        fVar24 = 1.4013e-45;
joined_r0x0456cea3:
                        if (pMVar20 != (MapEditor_MapEditorBrush_o *)0x0) {
                          (pMVar20->fields).SpacingZ = fVar24;
label_0456ceee:
                          if (ABS(fVar23) <= 0.0001) goto label_0456cf6f;
                          pMVar20 = (__this->fields).Brush;
                          pUVar19 = (UI_MapEditorMenu_o *)0x0;
                          if (pMVar20 != (MapEditor_MapEditorBrush_o *)0x0) {
                            fVar24 = (pMVar20->fields).SpacingZ;
                            fVar17 = 1.4013e-45;
                            if (fVar24 != 0.0) {
                              fVar17 = fVar24;
                            }
                            iVar22 = (uint)(0.0 < fVar23) * 2 + -1;
                            if ((char)bVar11 == '\0') {
                              if ((char)bVar9 == '\0') {
                                UVar25 = MapEditor_MapEditorBrush__GetAverageGhostSize
                                                   (pMVar20,(MethodInfo *)0x0);
                                fVar23 = UVar25.fields.y;
                                if (fVar17 == 1.4013e-45) {
                                  pMVar20 = (__this->fields).Brush;
                                  pUVar19 = (UI_MapEditorMenu_o *)0x0;
                                  if (pMVar20 != (MapEditor_MapEditorBrush_o *)0x0) {
                                    fVar24 = UVar25.fields.x * 0.1;
                                    fVar23 = 0.5;
                                    if (0.5 <= fVar24) {
                                      fVar23 = fVar24;
                                    }
                                    fVar24 = (float)iVar22 * fVar23 + (float)(pMVar20->fields).GridZ;
                                    fVar23 = 0.0;
                                    if (0.0 <= fVar24) {
                                      fVar23 = fVar24;
                                    }
                                    (pMVar20->fields).GridZ = (int32_t)fVar23;
                                    goto label_0456cf54;
                                  }
                                }
                                else {
                                  if (fVar17 != 2.8026e-45) {
                                    fVar23 = UVar25.fields.z;
                                  }
                                  fVar24 = 0.5;
                                  if (0.5 <= fVar23 * 0.1) {
                                    fVar24 = fVar23 * 0.1;
                                  }
                                  if (fVar17 == 4.2039e-45) {
                                    pMVar20 = (__this->fields).Brush;
                                    pUVar19 = (UI_MapEditorMenu_o *)0x0;
                                    if (pMVar20 != (MapEditor_MapEditorBrush_o *)0x0) {
                                      fVar24 = fVar24 * (float)iVar22 + (pMVar20->fields).SpacingY;
                                      fVar23 = 0.0;
                                      if (0.0 <= fVar24) {
                                        fVar23 = fVar24;
                                      }
                                      (pMVar20->fields).SpacingY = fVar23;
                                      goto label_0456cf54;
                                    }
                                  }
                                  else if (fVar17 == 2.8026e-45) {
                                    pMVar20 = (__this->fields).Brush;
                                    pUVar19 = (UI_MapEditorMenu_o *)0x0;
                                    if (pMVar20 != (MapEditor_MapEditorBrush_o *)0x0) {
                                      fVar24 = fVar24 * (float)iVar22 + (pMVar20->fields).SpacingX;
                                      fVar23 = 0.0;
                                      if (0.0 <= fVar24) {
                                        fVar23 = fVar24;
                                      }
                                      (pMVar20->fields).SpacingX = fVar23;
                                      goto label_0456cf54;
                                    }
                                  }
                                  else {
                                    pMVar20 = (__this->fields).Brush;
                                    pUVar19 = (UI_MapEditorMenu_o *)0x0;
                                    if (pMVar20 != (MapEditor_MapEditorBrush_o *)0x0) goto label_0456cf54;
                                  }
                                }
                                goto label_0456d14e;
                              }
                              if (fVar17 == 4.2039e-45) {
                                iVar22 = iVar22 + (pMVar20->fields).GridY;
                                iVar10 = 1;
                                if (0 < iVar22) {
                                  iVar10 = iVar22;
                                }
                                (pMVar20->fields).GridY = iVar10;
                              }
                              else if (fVar17 == 2.8026e-45) {
                                iVar22 = iVar22 + (pMVar20->fields).GridX;
                                iVar10 = 1;
                                if (0 < iVar22) {
                                  iVar10 = iVar22;
                                }
                                (pMVar20->fields).GridX = iVar10;
                              }
                              else if (fVar17 == 1.4013e-45) {
                                iVar22 = iVar22 + (pMVar20->fields).RandomizeEachPlacement;
                                bVar9 = 1;
                                if (0 < iVar22) {
                                  bVar9 = iVar22;
                                }
                                (pMVar20->fields).RandomizeEachPlacement = bVar9;
                              }
                            }
                            else {
                              (pMVar20->fields).CurveAxis =
                                   (int32_t)((float)iVar22 * 0.5 + (float)(pMVar20->fields).CurveAxis);
                            }
label_0456cf54:
                            MapEditor_MapEditorBrush__RegenerateGhosts(pMVar20,(MethodInfo *)0x0);
                            pUVar19 = (__this->fields)._menu;
                            if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
                              UI_MapEditorMenu__SyncBrushPanelValues(pUVar19,(MethodInfo *)0x0);
                              goto label_0456cf6f;
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (ABS(fVar23) <= 0.0001) {
label_0456cf6f:
                      pSVar1 = (__this->fields)._input;
                    }
                    else {
                      MapEditor_MapEditorBrush__SetRadius
                                ((MapEditor_MapEditorBrush_o *)pUVar19,
                                 (fVar23 + fVar23 + 1.0) *
                                 *(float *)&(pUVar19->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
                      pSVar1 = (__this->fields)._input;
                    }
                    if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                       (pUVar19 = (UI_MapEditorMenu_o *)(pSVar1->fields).BrushReroll,
                       pUVar19 != (UI_MapEditorMenu_o *)0x0)) {
                      bVar9 = Settings_KeybindSetting__GetKeyDown
                                        ((Settings_KeybindSetting_o *)pUVar19,0,(MethodInfo *)0x0);
                      if ((char)bVar9 == '\0') {
label_0456cfc7:
                        pSVar1 = (__this->fields)._input;
                        if (pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) {
                          pSVar2 = (pSVar1->fields).Select;
                          pUVar19 = (UI_MapEditorMenu_o *)0x0;
                          if (pSVar2 != (Settings_KeybindSetting_o *)0x0) {
                            pMVar18 = (MethodInfo *)0x0;
                            bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar2,0,(MethodInfo *)0x0);
                            if ((char)bVar9 == '\0') {
                              return;
                            }
                            GameManagers_MapEditorGameManager__PlaceBrush(__this,pMVar18);
                            return;
                          }
                        }
                      }
                      else {
                        pMVar20 = (__this->fields).Brush;
                        pUVar19 = (UI_MapEditorMenu_o *)0x0;
                        if (pMVar20 != (MapEditor_MapEditorBrush_o *)0x0) {
                          MapEditor_MapEditorBrush__Reseed(pMVar20,(MethodInfo *)0x0);
                          pUVar19 = (UI_MapEditorMenu_o *)(__this->fields).Brush;
                          if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
                            MapEditor_MapEditorBrush__RegenerateGhosts
                                      ((MapEditor_MapEditorBrush_o *)pUVar19,(MethodInfo *)0x0);
                            goto label_0456cfc7;
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
      goto label_0456d14e;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af044 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af044 = '\x01';
  }
  x = (pUVar19->fields).ExportPopup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  pUVar3 = (pUVar19->fields).ExternalLinkPopup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar18 = (MethodInfo *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_0456d22a:
    pUVar13 = (UI_MapEditorMenu_o *)(pUVar19->fields).ExportPopup;
    plVar15 = (long *)(UI_MapEditorMenu_o *)0x0;
    if (pUVar13 != (UI_MapEditorMenu_o *)0x0) {
      pMVar18 = (MethodInfo *)0x0;
      bVar9 = UI_MapEditorMenu__IsPopupActive(pUVar13,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (*(int *)(TypeInfo_EventSystem + 0xe4) != 0) goto label_0456d25d;
label_0456d417:
        il2cpp_runtime_helper_02337ed0();
        plVar15 = (long *)0x0;
        pUVar14 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      }
      else {
        *(undefined1 *)((long)&(pUVar19->fields).BrushPanel + 5) = 0;
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) goto label_0456d417;
label_0456d25d:
        plVar15 = (long *)0x0;
        pUVar14 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      }
      if (pUVar14 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
        pUVar13 = (UI_MapEditorMenu_o *)(pUVar14->fields).m_CurrentSelected;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar16 = (MethodInfo *)0x0;
        plVar15 = (long *)pUVar13;
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          pMVar18 = pMVar16;
          if (pUVar13 == (UI_MapEditorMenu_o *)0x0) goto label_0456d42c;
          plVar15 = (long *)UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar13,MethodInfo_InputField_GetComponent_InputField);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar16 = (MethodInfo *)0x0;
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)plVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            *(undefined1 *)((long)&(pUVar19->fields).BrushPanel + 5) = 0;
          }
        }
        pUVar13 = (UI_MapEditorMenu_o *)(pUVar19->fields).ExportPopup;
        if (*(char *)((long)&(pUVar19->fields).BrushPanel + 5) == '\0') {
label_0456d3a0:
          pMVar18 = pMVar16;
          if (g_data_057a694c == '\0') {
            plVar15 = &TypeInfo_Vector2;
            il2cpp_runtime_helper_023445d0();
            g_data_057a694c = '\x01';
            pMVar18 = pMVar16;
          }
          if (pUVar13 != (UI_MapEditorMenu_o *)0x0) {
            UI_MapEditorMenu__SetDrag
                      (pUVar13,0,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
                       ,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                       (MethodInfo *)0x0);
            return;
          }
        }
        else {
          start.fields = (UnityEngine_Vector2_Fields)(pUVar19->fields).HierarchyPanel;
          plVar15 = (long *)0x0;
          UVar25 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          pMVar18 = pMVar16;
          if (pUVar13 != (UI_MapEditorMenu_o *)0x0) {
            pMVar18 = (MethodInfo *)0x1;
            UI_MapEditorMenu__SetDrag
                      (pUVar13,1,start,(UnityEngine_Vector2_o)UVar25.fields._0_8_,(MethodInfo *)0x0);
            pUVar5 = (pUVar19->fields).ImportPopup;
            plVar15 = (long *)pUVar13;
            if ((pUVar5 != (UI_ImportPopup_o *)0x0) &&
               (plVar15 = (long *)(pUVar5->fields)._topButtons,
               (UI_MapEditorMenu_o *)plVar15 != (UI_MapEditorMenu_o *)0x0)) {
              pMVar18 = (MethodInfo *)0x0;
              bVar9 = Settings_KeybindSetting__GetKeyUp
                                ((Settings_KeybindSetting_o *)plVar15,0,(MethodInfo *)0x0);
              if ((char)bVar9 == '\0') {
                return;
              }
              pUVar5 = (pUVar19->fields).ImportPopup;
              if ((pUVar5 != (UI_ImportPopup_o *)0x0) &&
                 (plVar15 = *(long **)&(pUVar5->fields)._currentAnimationValue,
                 (UI_MapEditorMenu_o *)plVar15 != (UI_MapEditorMenu_o *)0x0)) {
                pMVar16 = (MethodInfo *)0x0;
                pMVar18 = (MethodInfo *)0x0;
                bVar9 = Settings_KeybindSetting__GetKey
                                  ((Settings_KeybindSetting_o *)plVar15,0,(MethodInfo *)0x0);
                if ((char)bVar9 != '\0') {
                  pUVar6 = (pUVar19->fields).ConfirmPopup;
                  if (pUVar6 == (UI_ConfirmPopup_o *)0x0) goto label_0456d42c;
                  pMVar16 = (MethodInfo *)(ulong)(0 < *(int *)&(pUVar6->fields).SinglePanel);
                }
                plVar15 = (long *)pUVar19;
                GameManagers_MapEditorGameManager__Select
                          ((GameManagers_MapEditorGameManager_o *)pUVar19,(bool_conflict)pMVar16,method_00);
                *(undefined1 *)((long)&(pUVar19->fields).BrushPanel + 5) = 0;
                pUVar13 = (UI_MapEditorMenu_o *)(pUVar19->fields).ExportPopup;
                goto label_0456d3a0;
              }
            }
          }
        }
      }
    }
  }
  else {
    pUVar3 = (pUVar19->fields).ExternalLinkPopup;
    plVar15 = (long *)(UI_MapEditorMenu_o *)0x0;
    if (pUVar3 != (UI_ExternalLinkPopup_o *)0x0) {
      pUVar4 = pUVar3->klass;
      pMVar18 = (pUVar4->vtable)._4_get_ThemePanel.method;
      cVar8 = (*(pUVar4->vtable)._4_get_ThemePanel.methodPtr)();
      if (cVar8 != '\0') {
        *(undefined1 *)((long)&(pUVar19->fields).BrushPanel + 5) = 0;
      }
      goto label_0456d22a;
    }
  }
label_0456d42c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af043 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AddObjectCommand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057af043 = '\x01';
  }
  __this_03 = (((UI_MapEditorMenu_o *)plVar15)->fields).InspectPanel;
  if (__this_03 != (UI_MapEditorInspectPanel_o *)0x0) {
    if ((char)(__this_03->fields).m_CachedPtr == '\0') {
      return;
    }
    pMVar18 = (MethodInfo *)0x0;
    objs = MapEditor_MapEditorBrush__BuildPlacements
                     ((MapEditor_MapEditorBrush_o *)__this_03,(MethodInfo *)0x0);
    if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      if ((objs->fields)._size == 0) {
        return;
      }
      pMVar18 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_AddObjectCommand);
      MapEditor_AddObjectCommand___ctor((MapEditor_AddObjectCommand_o *)pMVar18,objs,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand
                ((GameManagers_MapEditorGameManager_o *)plVar15,(MapEditor_BaseCommand_o *)pMVar18,1,in_RCX);
      pUVar19 = (UI_MapEditorMenu_o *)(((UI_MapEditorMenu_o *)plVar15)->fields).ExportPopup;
      __this_03 = (UI_MapEditorInspectPanel_o *)0x0;
      if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
        pMVar18 = (MethodInfo *)0x0;
        UI_MapEditorMenu__SyncHierarchyPanel(pUVar19,(MethodInfo *)0x0);
        __this_04 = (((UI_MapEditorMenu_o *)plVar15)->fields).InspectPanel;
        __this_03 = (UI_MapEditorInspectPanel_o *)0x0;
        if (__this_04 != (UI_MapEditorInspectPanel_o *)0x0) {
          if (*(char *)&(__this_04->fields).SinglePanel == '\0') {
label_0456d503:
            MapEditor_MapEditorBrush__RegenerateGhosts
                      ((MapEditor_MapEditorBrush_o *)__this_04,(MethodInfo *)0x0);
            return;
          }
          pMVar18 = (MethodInfo *)0x0;
          MapEditor_MapEditorBrush__Reseed((MapEditor_MapEditorBrush_o *)__this_04,(MethodInfo *)0x0);
          __this_04 = (((UI_MapEditorMenu_o *)plVar15)->fields).InspectPanel;
          __this_03 = (UI_MapEditorInspectPanel_o *)0x0;
          if (__this_04 != (UI_MapEditorInspectPanel_o *)0x0) goto label_0456d503;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar20 = (MapEditor_MapEditorBrush_o *)(__this_03->fields)._mapObjects;
  if (pMVar20 != (MapEditor_MapEditorBrush_o *)0x0) {
    cVar8 = (char)(pMVar20->fields).Active;
    pMVar18 = (MethodInfo *)(ulong)(cVar8 == '\0');
    MapEditor_MapEditorBrush__SetActive(pMVar20,(uint)(cVar8 == '\0'),(MethodInfo *)0x0);
    if (cVar8 == '\0') {
      GameManagers_MapEditorGameManager__DeselectAll((GameManagers_MapEditorGameManager_o *)__this_03,pMVar18)
      ;
      pUVar19 = (UI_MapEditorMenu_o *)(__this_03->fields).BottomBar;
      if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
        pMVar18 = (MethodInfo *)0x0;
        UI_MapEditorMenu__ShowBrushPanel(pUVar19,(MethodInfo *)0x0);
        goto label_0456d573;
      }
    }
    else {
      pUVar19 = (UI_MapEditorMenu_o *)(__this_03->fields).BottomBar;
      if (pUVar19 != (UI_MapEditorMenu_o *)0x0) {
        pMVar18 = (MethodInfo *)0x0;
        UI_MapEditorMenu__HideBrushPanel(pUVar19,(MethodInfo *)0x0);
label_0456d573:
        GameManagers_MapEditorGameManager__OnSelectionChange
                  ((GameManagers_MapEditorGameManager_o *)__this_03,pMVar18);
        return;
      }
    }
  }
  lVar21 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar21 + 0x68) != 0) {
    __this_01 = *(UI_MapEditorTopPanel_o **)(*(long *)(lVar21 + 0x68) + 0xb0);
    lVar21 = 0;
    if (__this_01 != (UI_MapEditorTopPanel_o *)0x0) {
      UI_MapEditorTopPanel__Save(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar21 + 0x90) != (long *)0x0) {
    lVar7 = **(long **)(lVar21 + 0x90);
    pMVar18 = *(MethodInfo **)(lVar7 + 0x1b0);
    (**(code **)(lVar7 + 0x1a8))();
    if (*(long **)(lVar21 + 0x78) != (long *)0x0) {
      lVar7 = **(long **)(lVar21 + 0x78);
      pMVar18 = *(MethodInfo **)(lVar7 + 0x1b0);
      (**(code **)(lVar7 + 0x1a8))();
      if (*(long **)(lVar21 + 0x80) != (long *)0x0) {
        lVar7 = **(long **)(lVar21 + 0x80);
        pMVar18 = *(MethodInfo **)(lVar7 + 0x1b0);
        (**(code **)(lVar7 + 0x1a8))();
        plVar15 = *(long **)(lVar21 + 0x88);
        if (plVar15 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar15 + 0x1a8);
          (*vtableDispatch)
                    (plVar15,*(undefined8 *)(*plVar15 + 0x1b0),extraout_RDX,vtableDispatch);
          return;
        }
      }
    }
  }
  __this_05 = (GameManagers_MapEditorGameManager_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af047 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    g_data_057af047 = '\x01';
  }
  bVar9 = System_String__op_Equality((System_String_o *)pMVar18,"Position",(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    bVar9 = System_String__op_Equality((System_String_o *)pMVar18,"Rotation",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      method_01 = (MapEditor_PositionGizmo_o *)(__this_05->fields)._scaleGizmo;
    }
    else {
      method_01 = (MapEditor_PositionGizmo_o *)(__this_05->fields)._rotationGizmo;
    }
  }
  else {
    method_01 = (__this_05->fields)._positionGizmo;
  }
  (__this_05->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)method_01;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields).CurrentGizmo);
  GameManagers_MapEditorGameManager__SyncGizmos(__this_05,(MethodInfo *)method_01);
  return;
}


// GameManagers.MapEditorGameManager$$PlaceBrush
// il2cpp: void GameManagers_MapEditorGameManager__PlaceBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456d440

void GameManagers_MapEditorGameManager__PlaceBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_MapEditorMenu_o *pUVar2;
  UI_MapEditorTopPanel_o *__this_00;
  long lVar3;
  long *plVar4;
  code *vtableDispatch;
  bool_conflict bVar5;
  System_Collections_Generic_List_MapScriptBaseObject__o *objs;
  MethodInfo *in_RCX;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MapEditor_PositionGizmo_o *method_01;
  GameManagers_MapEditorGameManager_o *pGVar6;
  MapEditor_MapEditorBrush_o *pMVar7;
  long lVar8;
  
  if (g_data_057af043 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AddObjectCommand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057af043 = '\x01';
  }
  pGVar6 = (GameManagers_MapEditorGameManager_o *)(__this->fields).Brush;
  if (pGVar6 != (GameManagers_MapEditorGameManager_o *)0x0) {
    if ((char)(pGVar6->fields).m_CachedPtr == '\0') {
      return;
    }
    method = (MethodInfo *)0x0;
    objs = MapEditor_MapEditorBrush__BuildPlacements((MapEditor_MapEditorBrush_o *)pGVar6,(MethodInfo *)0x0);
    if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      if ((objs->fields)._size == 0) {
        return;
      }
      method = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_AddObjectCommand);
      MapEditor_AddObjectCommand___ctor((MapEditor_AddObjectCommand_o *)method,objs,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand(__this,(MapEditor_BaseCommand_o *)method,1,in_RCX);
      pUVar2 = (__this->fields)._menu;
      pGVar6 = (GameManagers_MapEditorGameManager_o *)0x0;
      if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
        method = (MethodInfo *)0x0;
        UI_MapEditorMenu__SyncHierarchyPanel(pUVar2,(MethodInfo *)0x0);
        pMVar7 = (__this->fields).Brush;
        pGVar6 = (GameManagers_MapEditorGameManager_o *)0x0;
        if (pMVar7 != (MapEditor_MapEditorBrush_o *)0x0) {
          if ((char)(pMVar7->fields).Count == '\0') {
label_0456d503:
            MapEditor_MapEditorBrush__RegenerateGhosts(pMVar7,(MethodInfo *)0x0);
            return;
          }
          method = (MethodInfo *)0x0;
          MapEditor_MapEditorBrush__Reseed(pMVar7,(MethodInfo *)0x0);
          pMVar7 = (__this->fields).Brush;
          pGVar6 = (GameManagers_MapEditorGameManager_o *)0x0;
          if (pMVar7 != (MapEditor_MapEditorBrush_o *)0x0) goto label_0456d503;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = (pGVar6->fields).Brush;
  if (pMVar7 != (MapEditor_MapEditorBrush_o *)0x0) {
    cVar1 = (char)(pMVar7->fields).Active;
    method = (MethodInfo *)(ulong)(cVar1 == '\0');
    MapEditor_MapEditorBrush__SetActive(pMVar7,(uint)(cVar1 == '\0'),(MethodInfo *)0x0);
    if (cVar1 == '\0') {
      GameManagers_MapEditorGameManager__DeselectAll(pGVar6,method);
      pUVar2 = (pGVar6->fields)._menu;
      if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UI_MapEditorMenu__ShowBrushPanel(pUVar2,(MethodInfo *)0x0);
        goto label_0456d573;
      }
    }
    else {
      pUVar2 = (pGVar6->fields)._menu;
      if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UI_MapEditorMenu__HideBrushPanel(pUVar2,(MethodInfo *)0x0);
label_0456d573:
        GameManagers_MapEditorGameManager__OnSelectionChange(pGVar6,method_00);
        return;
      }
    }
  }
  lVar8 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar8 + 0x68) != 0) {
    __this_00 = *(UI_MapEditorTopPanel_o **)(*(long *)(lVar8 + 0x68) + 0xb0);
    lVar8 = 0;
    if (__this_00 != (UI_MapEditorTopPanel_o *)0x0) {
      UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar8 + 0x90) != (long *)0x0) {
    lVar3 = **(long **)(lVar8 + 0x90);
    method = *(MethodInfo **)(lVar3 + 0x1b0);
    (**(code **)(lVar3 + 0x1a8))();
    if (*(long **)(lVar8 + 0x78) != (long *)0x0) {
      lVar3 = **(long **)(lVar8 + 0x78);
      method = *(MethodInfo **)(lVar3 + 0x1b0);
      (**(code **)(lVar3 + 0x1a8))();
      if (*(long **)(lVar8 + 0x80) != (long *)0x0) {
        lVar3 = **(long **)(lVar8 + 0x80);
        method = *(MethodInfo **)(lVar3 + 0x1b0);
        (**(code **)(lVar3 + 0x1a8))();
        plVar4 = *(long **)(lVar8 + 0x88);
        if (plVar4 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar4 + 0x1a8);
          (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1b0),extraout_RDX,vtableDispatch)
          ;
          return;
        }
      }
    }
  }
  pGVar6 = (GameManagers_MapEditorGameManager_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af047 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    g_data_057af047 = '\x01';
  }
  bVar5 = System_String__op_Equality((System_String_o *)method,"Position",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality((System_String_o *)method,"Rotation",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      method_01 = (MapEditor_PositionGizmo_o *)(pGVar6->fields)._scaleGizmo;
    }
    else {
      method_01 = (MapEditor_PositionGizmo_o *)(pGVar6->fields)._rotationGizmo;
    }
  }
  else {
    method_01 = (pGVar6->fields)._positionGizmo;
  }
  (pGVar6->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)method_01;
  il2cpp_runtime_helper_022b4080(&(pGVar6->fields).CurrentGizmo);
  GameManagers_MapEditorGameManager__SyncGizmos(pGVar6,(MethodInfo *)method_01);
  return;
}


// GameManagers.MapEditorGameManager$$ToggleBrush
// il2cpp: void GameManagers_MapEditorGameManager__ToggleBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456d520

void GameManagers_MapEditorGameManager__ToggleBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  char cVar1;
  MapEditor_MapEditorBrush_o *__this_00;
  UI_MapEditorMenu_o *pUVar2;
  UI_MapEditorTopPanel_o *__this_01;
  long lVar3;
  long *plVar4;
  code *vtableDispatch;
  bool_conflict bVar5;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MapEditor_PositionGizmo_o *method_01;
  long lVar6;
  GameManagers_MapEditorGameManager_o *__this_02;
  
  __this_00 = (__this->fields).Brush;
  if (__this_00 != (MapEditor_MapEditorBrush_o *)0x0) {
    cVar1 = (char)(__this_00->fields).Active;
    method = (MethodInfo *)(ulong)(cVar1 == '\0');
    MapEditor_MapEditorBrush__SetActive(__this_00,(uint)(cVar1 == '\0'),(MethodInfo *)0x0);
    if (cVar1 == '\0') {
      GameManagers_MapEditorGameManager__DeselectAll(__this,method);
      pUVar2 = (__this->fields)._menu;
      if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_0456d582;
      method_00 = (MethodInfo *)0x0;
      UI_MapEditorMenu__ShowBrushPanel(pUVar2,(MethodInfo *)0x0);
    }
    else {
      pUVar2 = (__this->fields)._menu;
      if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto label_0456d582;
      method_00 = (MethodInfo *)0x0;
      UI_MapEditorMenu__HideBrushPanel(pUVar2,(MethodInfo *)0x0);
    }
    GameManagers_MapEditorGameManager__OnSelectionChange(__this,method_00);
    return;
  }
label_0456d582:
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if ((*(long *)(lVar6 + 0x68) != 0) &&
     (__this_01 = *(UI_MapEditorTopPanel_o **)(*(long *)(lVar6 + 0x68) + 0xb0), lVar6 = 0,
     __this_01 != (UI_MapEditorTopPanel_o *)0x0)) {
    UI_MapEditorTopPanel__Save(__this_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar6 + 0x90) != (long *)0x0) {
    lVar3 = **(long **)(lVar6 + 0x90);
    method = *(MethodInfo **)(lVar3 + 0x1b0);
    (**(code **)(lVar3 + 0x1a8))();
    if (*(long **)(lVar6 + 0x78) != (long *)0x0) {
      lVar3 = **(long **)(lVar6 + 0x78);
      method = *(MethodInfo **)(lVar3 + 0x1b0);
      (**(code **)(lVar3 + 0x1a8))();
      if (*(long **)(lVar6 + 0x80) != (long *)0x0) {
        lVar3 = **(long **)(lVar6 + 0x80);
        method = *(MethodInfo **)(lVar3 + 0x1b0);
        (**(code **)(lVar3 + 0x1a8))();
        plVar4 = *(long **)(lVar6 + 0x88);
        if (plVar4 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar4 + 0x1a8);
          (*vtableDispatch)(plVar4,*(undefined8 *)(*plVar4 + 0x1b0),extraout_RDX,vtableDispatch)
          ;
          return;
        }
      }
    }
  }
  __this_02 = (GameManagers_MapEditorGameManager_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af047 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    g_data_057af047 = '\x01';
  }
  bVar5 = System_String__op_Equality((System_String_o *)method,"Position",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality((System_String_o *)method,"Rotation",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      method_01 = (MapEditor_PositionGizmo_o *)(__this_02->fields)._scaleGizmo;
    }
    else {
      method_01 = (MapEditor_PositionGizmo_o *)(__this_02->fields)._rotationGizmo;
    }
  }
  else {
    method_01 = (__this_02->fields)._positionGizmo;
  }
  (__this_02->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)method_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).CurrentGizmo);
  GameManagers_MapEditorGameManager__SyncGizmos(__this_02,(MethodInfo *)method_01);
  return;
}


// GameManagers.MapEditorGameManager$$UpdateDrag
// il2cpp: void GameManagers_MapEditorGameManager__UpdateDrag (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456d160

void GameManagers_MapEditorGameManager__UpdateDrag
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o start;
  MapEditor_BaseGizmo_o *pMVar1;
  MapEditor_BaseGizmo_c *pMVar2;
  Settings_MapEditorInputSettings_o *pSVar3;
  System_Collections_Generic_HashSet_MapObject__o *pSVar4;
  MapEditor_MapEditorBrush_o *__this_00;
  UI_MapEditorTopPanel_o *__this_01;
  long lVar5;
  code *vtableDispatch;
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_EventSystems_EventSystem_o *pUVar8;
  long *plVar9;
  System_Collections_Generic_List_MapScriptBaseObject__o *objs;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  MethodInfo *pMVar10;
  UI_MapEditorMenu_o *pUVar11;
  MethodInfo *pMVar12;
  MapEditor_PositionGizmo_o *method_01;
  UI_MapEditorInspectPanel_o *__this_02;
  UI_MapEditorInspectPanel_o *__this_03;
  long lVar13;
  GameManagers_MapEditorGameManager_o *__this_04;
  UnityEngine_Vector3_o UVar14;
  
  if (g_data_057af044 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af044 = '\x01';
  }
  pUVar11 = (__this->fields)._menu;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  pMVar1 = (__this->fields).CurrentGizmo;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_0456d22a:
    pUVar11 = (__this->fields)._menu;
    plVar9 = (long *)(UI_MapEditorMenu_o *)0x0;
    if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
      pMVar12 = (MethodInfo *)0x0;
      bVar7 = UI_MapEditorMenu__IsPopupActive(pUVar11,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (*(int *)(TypeInfo_EventSystem + 0xe4) != 0) goto label_0456d25d;
label_0456d417:
        il2cpp_runtime_helper_02337ed0();
        plVar9 = (long *)0x0;
        pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      }
      else {
        *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) goto label_0456d417;
label_0456d25d:
        plVar9 = (long *)0x0;
        pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      }
      if (pUVar8 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
        pUVar11 = (UI_MapEditorMenu_o *)(pUVar8->fields).m_CurrentSelected;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar10 = (MethodInfo *)0x0;
        plVar9 = (long *)pUVar11;
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          pMVar12 = pMVar10;
          if (pUVar11 == (UI_MapEditorMenu_o *)0x0) goto label_0456d42c;
          plVar9 = (long *)UnityEngine_GameObject__GetComponent_object_
                                     ((UnityEngine_GameObject_o *)pUVar11,MethodInfo_InputField_GetComponent_InputField);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar10 = (MethodInfo *)0x0;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)plVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
          }
        }
        pUVar11 = (__this->fields)._menu;
        if (*(char *)((long)&(__this->fields).IgnoreNextSelect + 1) == '\0') {
label_0456d3a0:
          pMVar12 = pMVar10;
          if (g_data_057a694c == '\0') {
            plVar9 = &TypeInfo_Vector2;
            il2cpp_runtime_helper_023445d0();
            g_data_057a694c = '\x01';
            pMVar12 = pMVar10;
          }
          if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
            UI_MapEditorMenu__SetDrag
                      (pUVar11,0,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8)
                       ,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                       (MethodInfo *)0x0);
            return;
          }
        }
        else {
          start.fields.x = (float)(__this->fields)._isDrag;
          start.fields.y = (__this->fields)._dragStart.fields.x;
          plVar9 = (long *)0x0;
          UVar14 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          pMVar12 = pMVar10;
          if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
            pMVar12 = (MethodInfo *)0x1;
            UI_MapEditorMenu__SetDrag
                      (pUVar11,1,start,(UnityEngine_Vector2_o)UVar14.fields._0_8_,(MethodInfo *)0x0);
            pSVar3 = (__this->fields)._input;
            plVar9 = (long *)pUVar11;
            if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (plVar9 = (long *)(pSVar3->fields).Select,
               (UI_MapEditorMenu_o *)plVar9 != (UI_MapEditorMenu_o *)0x0)) {
              pMVar12 = (MethodInfo *)0x0;
              bVar7 = Settings_KeybindSetting__GetKeyUp
                                ((Settings_KeybindSetting_o *)plVar9,0,(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                return;
              }
              pSVar3 = (__this->fields)._input;
              if ((pSVar3 != (Settings_MapEditorInputSettings_o *)0x0) &&
                 (plVar9 = (long *)(pSVar3->fields).Multiselect,
                 (UI_MapEditorMenu_o *)plVar9 != (UI_MapEditorMenu_o *)0x0)) {
                pMVar10 = (MethodInfo *)0x0;
                pMVar12 = (MethodInfo *)0x0;
                bVar7 = Settings_KeybindSetting__GetKey
                                  ((Settings_KeybindSetting_o *)plVar9,0,(MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  pSVar4 = (__this->fields).SelectedObjects;
                  if (pSVar4 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto label_0456d42c;
                  pMVar10 = (MethodInfo *)(ulong)(0 < (pSVar4->fields)._count);
                }
                plVar9 = (long *)__this;
                GameManagers_MapEditorGameManager__Select(__this,(bool_conflict)pMVar10,method_00);
                *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
                pUVar11 = (__this->fields)._menu;
                goto label_0456d3a0;
              }
            }
          }
        }
      }
    }
  }
  else {
    pMVar1 = (__this->fields).CurrentGizmo;
    plVar9 = (long *)(UI_MapEditorMenu_o *)0x0;
    if (pMVar1 != (MapEditor_BaseGizmo_o *)0x0) {
      pMVar2 = pMVar1->klass;
      pMVar12 = (pMVar2->vtable)._4_IsActive.method;
      cVar6 = (*(pMVar2->vtable)._4_IsActive.methodPtr)();
      if (cVar6 != '\0') {
        *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
      }
      goto label_0456d22a;
    }
  }
label_0456d42c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af043 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AddObjectCommand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057af043 = '\x01';
  }
  __this_02 = (((UI_MapEditorMenu_o *)plVar9)->fields).InspectPanel;
  if (__this_02 != (UI_MapEditorInspectPanel_o *)0x0) {
    if ((char)(__this_02->fields).m_CachedPtr == '\0') {
      return;
    }
    pMVar12 = (MethodInfo *)0x0;
    objs = MapEditor_MapEditorBrush__BuildPlacements
                     ((MapEditor_MapEditorBrush_o *)__this_02,(MethodInfo *)0x0);
    if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      if ((objs->fields)._size == 0) {
        return;
      }
      pMVar12 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_AddObjectCommand);
      MapEditor_AddObjectCommand___ctor((MapEditor_AddObjectCommand_o *)pMVar12,objs,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand
                ((GameManagers_MapEditorGameManager_o *)plVar9,(MapEditor_BaseCommand_o *)pMVar12,1,in_RCX);
      pUVar11 = (UI_MapEditorMenu_o *)(((UI_MapEditorMenu_o *)plVar9)->fields).ExportPopup;
      __this_02 = (UI_MapEditorInspectPanel_o *)0x0;
      if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
        pMVar12 = (MethodInfo *)0x0;
        UI_MapEditorMenu__SyncHierarchyPanel(pUVar11,(MethodInfo *)0x0);
        __this_03 = (((UI_MapEditorMenu_o *)plVar9)->fields).InspectPanel;
        __this_02 = (UI_MapEditorInspectPanel_o *)0x0;
        if (__this_03 != (UI_MapEditorInspectPanel_o *)0x0) {
          if (*(char *)&(__this_03->fields).SinglePanel == '\0') {
label_0456d503:
            MapEditor_MapEditorBrush__RegenerateGhosts
                      ((MapEditor_MapEditorBrush_o *)__this_03,(MethodInfo *)0x0);
            return;
          }
          pMVar12 = (MethodInfo *)0x0;
          MapEditor_MapEditorBrush__Reseed((MapEditor_MapEditorBrush_o *)__this_03,(MethodInfo *)0x0);
          __this_03 = (((UI_MapEditorMenu_o *)plVar9)->fields).InspectPanel;
          __this_02 = (UI_MapEditorInspectPanel_o *)0x0;
          if (__this_03 != (UI_MapEditorInspectPanel_o *)0x0) goto label_0456d503;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (MapEditor_MapEditorBrush_o *)(__this_02->fields)._mapObjects;
  if (__this_00 != (MapEditor_MapEditorBrush_o *)0x0) {
    cVar6 = (char)(__this_00->fields).Active;
    pMVar12 = (MethodInfo *)(ulong)(cVar6 == '\0');
    MapEditor_MapEditorBrush__SetActive(__this_00,(uint)(cVar6 == '\0'),(MethodInfo *)0x0);
    if (cVar6 == '\0') {
      GameManagers_MapEditorGameManager__DeselectAll((GameManagers_MapEditorGameManager_o *)__this_02,pMVar12)
      ;
      pUVar11 = (UI_MapEditorMenu_o *)(__this_02->fields).BottomBar;
      if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
        pMVar12 = (MethodInfo *)0x0;
        UI_MapEditorMenu__ShowBrushPanel(pUVar11,(MethodInfo *)0x0);
        goto label_0456d573;
      }
    }
    else {
      pUVar11 = (UI_MapEditorMenu_o *)(__this_02->fields).BottomBar;
      if (pUVar11 != (UI_MapEditorMenu_o *)0x0) {
        pMVar12 = (MethodInfo *)0x0;
        UI_MapEditorMenu__HideBrushPanel(pUVar11,(MethodInfo *)0x0);
label_0456d573:
        GameManagers_MapEditorGameManager__OnSelectionChange
                  ((GameManagers_MapEditorGameManager_o *)__this_02,pMVar12);
        return;
      }
    }
  }
  lVar13 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar13 + 0x68) != 0) {
    __this_01 = *(UI_MapEditorTopPanel_o **)(*(long *)(lVar13 + 0x68) + 0xb0);
    lVar13 = 0;
    if (__this_01 != (UI_MapEditorTopPanel_o *)0x0) {
      UI_MapEditorTopPanel__Save(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar13 + 0x90) != (long *)0x0) {
    lVar5 = **(long **)(lVar13 + 0x90);
    pMVar12 = *(MethodInfo **)(lVar5 + 0x1b0);
    (**(code **)(lVar5 + 0x1a8))();
    if (*(long **)(lVar13 + 0x78) != (long *)0x0) {
      lVar5 = **(long **)(lVar13 + 0x78);
      pMVar12 = *(MethodInfo **)(lVar5 + 0x1b0);
      (**(code **)(lVar5 + 0x1a8))();
      if (*(long **)(lVar13 + 0x80) != (long *)0x0) {
        lVar5 = **(long **)(lVar13 + 0x80);
        pMVar12 = *(MethodInfo **)(lVar5 + 0x1b0);
        (**(code **)(lVar5 + 0x1a8))();
        plVar9 = *(long **)(lVar13 + 0x88);
        if (plVar9 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar9 + 0x1a8);
          (*vtableDispatch)(plVar9,*(undefined8 *)(*plVar9 + 0x1b0),extraout_RDX,vtableDispatch)
          ;
          return;
        }
      }
    }
  }
  __this_04 = (GameManagers_MapEditorGameManager_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af047 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    g_data_057af047 = '\x01';
  }
  bVar7 = System_String__op_Equality((System_String_o *)pMVar12,"Position",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    bVar7 = System_String__op_Equality((System_String_o *)pMVar12,"Rotation",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      method_01 = (MapEditor_PositionGizmo_o *)(__this_04->fields)._scaleGizmo;
    }
    else {
      method_01 = (MapEditor_PositionGizmo_o *)(__this_04->fields)._rotationGizmo;
    }
  }
  else {
    method_01 = (__this_04->fields)._positionGizmo;
  }
  (__this_04->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)method_01;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).CurrentGizmo);
  GameManagers_MapEditorGameManager__SyncGizmos(__this_04,(MethodInfo *)method_01);
  return;
}


// GameManagers.MapEditorGameManager$$UpdateInput
// il2cpp: void GameManagers_MapEditorGameManager__UpdateInput (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456c550

void GameManagers_MapEditorGameManager__UpdateInput
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o start;
  Settings_MapEditorInputSettings_o *pSVar1;
  Settings_KeybindSetting_o *__this_00;
  UI_MapEditorTopPanel_o *pUVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorAddObjectPopup_o *pUVar4;
  UI_ExportPopup_o *pUVar5;
  Il2CppClass *__this_01;
  UI_ImportPopup_o *pUVar6;
  System_Collections_Generic_Dictionary_string__Type__o *__this_02;
  System_Collections_Generic_Dictionary_string__Button__o *__this_03;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_GameObject_c *pUVar9;
  System_Collections_Generic_List_BasePopup__o *pSVar10;
  long lVar11;
  code *vtableDispatch;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_04;
  char cVar12;
  bool_conflict bVar13;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  bool_conflict bVar14;
  bool_conflict bVar15;
  UI_MapEditorMenu_o *pUVar16;
  UI_MapEditorInspectPanel_o *pUVar17;
  UnityEngine_Object_o *pUVar18;
  System_Int32_array *layers;
  UnityEngine_EventSystems_EventSystem_o *pUVar19;
  long *plVar20;
  System_Collections_Generic_List_MapScriptBaseObject__o *objs;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  MethodInfo *pMVar21;
  undefined4 uVar22;
  int iVar23;
  MethodInfo *pMVar24;
  MapEditor_PositionGizmo_o *method_01;
  UI_MapEditorMenu_o *__this_05;
  UI_MapEditorInspectPanel_o *pUVar25;
  GameManagers_MapEditorGameManager_o *pGVar26;
  MapEditor_MapEditorBrush_o *pMVar27;
  long lVar28;
  UI_MapEditorInspectPanel_o *x;
  int iVar29;
  float fVar30;
  float fVar31;
  UnityEngine_Vector3_o UVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  int32_t in_stack_ffffffffffffff58;
  UnityEngine_Ray_o UStack_88;
  UI_MapEditorInspectPanel_c *pUStack_70;
  void *pvStack_68;
  intptr_t iStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  UI_MapEditorMenu_o *pUStack_40;
  
  if (g_data_057af045 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af045 = '\x01';
  }
  pUVar16 = (__this->fields)._menu;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_05 = pUVar16;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return;
  }
  pSVar1 = (__this->fields)._input;
  if (pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) {
    __this_00 = (pSVar1->fields).SaveMap;
    __this_05 = (UI_MapEditorMenu_o *)0x0;
    if (__this_00 != (Settings_KeybindSetting_o *)0x0) {
      bVar13 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
      __this_05 = (__this->fields)._menu;
      if ((char)bVar13 == '\0') {
        if (__this_05 != (UI_MapEditorMenu_o *)0x0) {
          bVar13 = UI_MapEditorMenu__IsPopupActive(__this_05,(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            return;
          }
          if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_05 = (UI_MapEditorMenu_o *)0x0;
          pUVar19 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
          if (pUVar19 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
            pUVar16 = (UI_MapEditorMenu_o *)(pUVar19->fields).m_CurrentSelected;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_05 = pUVar16;
            bVar13 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar13 != '\0') {
              if (pUVar16 == (UI_MapEditorMenu_o *)0x0) goto label_0456c9c2;
              pUVar16 = (UI_MapEditorMenu_o *)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)pUVar16,MethodInfo_InputField_GetComponent_InputField);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_05 = pUVar16;
              bVar13 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar13 != '\0') {
                return;
              }
            }
            pSVar1 = (__this->fields)._input;
            if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
               (__this_05 = (UI_MapEditorMenu_o *)(pSVar1->fields).Undo,
               __this_05 != (UI_MapEditorMenu_o *)0x0)) {
              pMVar24 = (MethodInfo *)0x0;
              bVar13 = Settings_KeybindSetting__GetKeyDown
                                 ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
              if ((char)bVar13 != '\0') {
                GameManagers_MapEditorGameManager__Undo(__this,pMVar24);
                goto label_0456c9b4;
              }
              pSVar1 = (__this->fields)._input;
              if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                 (__this_05 = (UI_MapEditorMenu_o *)(pSVar1->fields).Redo,
                 __this_05 != (UI_MapEditorMenu_o *)0x0)) {
                pMVar24 = (MethodInfo *)0x0;
                bVar13 = Settings_KeybindSetting__GetKeyDown
                                   ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
                if ((char)bVar13 != '\0') {
                  GameManagers_MapEditorGameManager__Redo(__this,pMVar24);
                  goto label_0456c9b4;
                }
                pSVar1 = (__this->fields)._input;
                if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                   (__this_05 = (UI_MapEditorMenu_o *)(pSVar1->fields).CopyObjects,
                   __this_05 != (UI_MapEditorMenu_o *)0x0)) {
                  pMVar24 = (MethodInfo *)0x0;
                  bVar13 = Settings_KeybindSetting__GetKeyDown
                                     ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
                  if ((char)bVar13 != '\0') {
                    GameManagers_MapEditorGameManager__Copy(__this,pMVar24);
                    goto label_0456c9b4;
                  }
                  pSVar1 = (__this->fields)._input;
                  if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                     (__this_05 = (UI_MapEditorMenu_o *)(pSVar1->fields).Paste,
                     __this_05 != (UI_MapEditorMenu_o *)0x0)) {
                    pMVar24 = (MethodInfo *)0x0;
                    bVar13 = Settings_KeybindSetting__GetKeyDown
                                       ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
                    if ((char)bVar13 != '\0') {
                      GameManagers_MapEditorGameManager__Paste(__this,pMVar24);
                      goto label_0456c9b4;
                    }
                    pSVar1 = (__this->fields)._input;
                    if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                       (__this_05 = (UI_MapEditorMenu_o *)(pSVar1->fields).Cut,
                       __this_05 != (UI_MapEditorMenu_o *)0x0)) {
                      pMVar24 = (MethodInfo *)0x0;
                      bVar13 = Settings_KeybindSetting__GetKeyDown
                                         ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
                      if ((char)bVar13 != '\0') {
                        GameManagers_MapEditorGameManager__Copy(__this,pMVar24);
label_0456c7c3:
                        GameManagers_MapEditorGameManager__Delete(__this,pMVar24);
label_0456c9b4:
                        *(undefined1 *)&(__this->fields).IgnoreNextSelect = 0;
                        return;
                      }
                      pSVar1 = (__this->fields)._input;
                      if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                         (__this_05 = (UI_MapEditorMenu_o *)(pSVar1->fields).AddObject,
                         __this_05 != (UI_MapEditorMenu_o *)0x0)) {
                        bVar13 = Settings_KeybindSetting__GetKeyDown
                                           ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
                        if ((char)bVar13 == '\0') {
                          pSVar1 = (__this->fields)._input;
                          if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                             (__this_05 = (UI_MapEditorMenu_o *)(pSVar1->fields).Delete,
                             __this_05 != (UI_MapEditorMenu_o *)0x0)) {
                            pMVar24 = (MethodInfo *)0x0;
                            bVar13 = Settings_KeybindSetting__GetKeyDown
                                               ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
                            if ((char)bVar13 != '\0') goto label_0456c7c3;
                            pSVar1 = (__this->fields)._input;
                            if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                               (__this_05 = (UI_MapEditorMenu_o *)(pSVar1->fields).Deselect,
                               __this_05 != (UI_MapEditorMenu_o *)0x0)) {
                              pMVar24 = (MethodInfo *)0x0;
                              bVar13 = Settings_KeybindSetting__GetKeyDown
                                                 ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0);
                              if ((char)bVar13 != '\0') {
                                GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar24);
                                GameManagers_MapEditorGameManager__OnSelectionChange(__this,pMVar24);
                                goto label_0456c9b4;
                              }
                              pSVar1 = (__this->fields)._input;
                              if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                                 (__this_05 = (UI_MapEditorMenu_o *)(pSVar1->fields).ChangeGizmo,
                                 __this_05 != (UI_MapEditorMenu_o *)0x0)) {
                                bVar13 = Settings_KeybindSetting__GetKeyDown
                                                   ((Settings_KeybindSetting_o *)__this_05,0,(MethodInfo *)0x0
                                                   );
                                if ((char)bVar13 == '\0') {
                                  pSVar1 = (__this->fields)._input;
                                  if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                                     (__this_05 = (UI_MapEditorMenu_o *)(pSVar1->fields).ToggleSnap,
                                     __this_05 != (UI_MapEditorMenu_o *)0x0)) {
                                    bVar13 = Settings_KeybindSetting__GetKeyDown
                                                       ((Settings_KeybindSetting_o *)__this_05,0,
                                                        (MethodInfo *)0x0);
                                    if ((char)bVar13 == '\0') {
                                      pSVar1 = (__this->fields)._input;
                                      if ((pSVar1 != (Settings_MapEditorInputSettings_o *)0x0) &&
                                         (__this_05 = (UI_MapEditorMenu_o *)(pSVar1->fields).Select,
                                         __this_05 != (UI_MapEditorMenu_o *)0x0)) {
                                        bVar13 = Settings_KeybindSetting__GetKeyDown
                                                           ((Settings_KeybindSetting_o *)__this_05,0,
                                                            (MethodInfo *)0x0);
                                        if ((char)bVar13 == '\0') goto label_0456c9b4;
                                        pUVar3 = (__this->fields)._menu;
                                        if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
                                          if ((char)(pUVar3->fields).IsMouseUI == '\0') {
                                            *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 1;
                                            UVar32 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
                                            (__this->fields)._isDrag = (int)UVar32.fields._0_8_;
                                            (__this->fields)._dragStart.fields.x =
                                                 (float)(int)((ulong)UVar32.fields._0_8_ >> 0x20);
                                            (__this->fields)._dragStart.fields.y = UVar32.fields.z;
                                          }
                                          goto label_0456c9b4;
                                        }
                                      }
                                    }
                                    else {
                                      pUVar3 = (__this->fields)._menu;
                                      if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
                                        pUVar2 = (pUVar3->fields)._topPanel;
                                        __this_05 = (UI_MapEditorMenu_o *)0x0;
                                        if (pUVar2 != (UI_MapEditorTopPanel_o *)0x0) {
                                          UI_MapEditorTopPanel__ToggleSnap(pUVar2,(MethodInfo *)0x0);
                                          goto label_0456c9b4;
                                        }
                                      }
                                    }
                                  }
                                }
                                else {
                                  pUVar3 = (__this->fields)._menu;
                                  if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
                                    pUVar2 = (pUVar3->fields)._topPanel;
                                    __this_05 = (UI_MapEditorMenu_o *)0x0;
                                    if (pUVar2 != (UI_MapEditorTopPanel_o *)0x0) {
                                      UI_MapEditorTopPanel__NextGizmo(pUVar2,(MethodInfo *)0x0);
                                      goto label_0456c9b4;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pUVar3 = (__this->fields)._menu;
                          if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
                            pUVar4 = (pUVar3->fields).AddObjectPopup;
                            __this_05 = (UI_MapEditorMenu_o *)0x0;
                            if (pUVar4 != (UI_MapEditorAddObjectPopup_o *)0x0) {
                              if ((char)(pUVar4->fields).IsActive == '\0') {
                                if ((char)(pUVar3->fields).IsMouseUI == '\0') {
                                  (*(pUVar4->klass->vtable)._21_Show.methodPtr)
                                            (pUVar4,(pUVar4->klass->vtable)._21_Show.method);
                                }
                              }
                              else {
                                (*(pUVar4->klass->vtable)._22_Hide.methodPtr)
                                          (pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
                              }
                              goto label_0456c9b4;
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
      else if (__this_05 != (UI_MapEditorMenu_o *)0x0) {
        pUVar2 = (__this_05->fields)._topPanel;
        __this_05 = (UI_MapEditorMenu_o *)0x0;
        if (pUVar2 != (UI_MapEditorTopPanel_o *)0x0) {
          UI_MapEditorTopPanel__Save(pUVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0456c9c2:
  il2cpp_runtime_helper_022b2c90();
  pUStack_40 = pUVar16;
  if (g_data_057af042 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&"Mouse ScrollWheel");
    g_data_057af042 = '\x01';
  }
  uStack_50 = 0;
  uStack_4c = 0;
  iStack_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  pUStack_70 = (UI_MapEditorInspectPanel_c *)0x0;
  pvStack_68 = (void *)0x0;
  pUVar25 = (__this_05->fields).InspectPanel;
  if (pUVar25 == (UI_MapEditorInspectPanel_o *)0x0) {
    return;
  }
  if ((char)(pUVar25->fields).m_CachedPtr == '\0') {
    return;
  }
  pUVar5 = (__this_05->fields).ExportPopup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return;
  }
  pUVar25 = (UI_MapEditorInspectPanel_o *)(__this_05->fields).ExportPopup;
  if (pUVar25 == (UI_MapEditorInspectPanel_o *)0x0) {
label_0456d14e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar13 = UI_MapEditorMenu__IsPopupActive((UI_MapEditorMenu_o *)pUVar25,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
label_0456cad0:
      pUVar17 = (__this_05->fields).InspectPanel;
      pUVar25 = (UI_MapEditorInspectPanel_o *)0x0;
      if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) {
        MapEditor_MapEditorBrush__ClearCenter((MapEditor_MapEditorBrush_o *)pUVar17,(MethodInfo *)0x0);
        return;
      }
      goto label_0456d14e;
    }
    pUVar5 = (__this_05->fields).ExportPopup;
    if (pUVar5 == (UI_ExportPopup_o *)0x0) goto label_0456d14e;
    if (*(char *)&pUVar5[1].fields.BottomBar != '\0') goto label_0456cad0;
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar17 = (UI_MapEditorInspectPanel_o *)
              UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    x = (UI_MapEditorInspectPanel_o *)0x0;
    pUVar25 = pUVar17;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      if (pUVar17 == (UI_MapEditorInspectPanel_o *)0x0) goto label_0456d14e;
      x = (UI_MapEditorInspectPanel_o *)(pUVar17->fields)._currentCategoryPanel;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar25 = x;
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      if (x == (UI_MapEditorInspectPanel_o *)0x0) goto label_0456d14e;
      pUVar18 = (UnityEngine_Object_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x,MethodInfo_InputField_GetComponent_InputField);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar13 = UnityEngine_Object__op_Inequality(pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar13 != '\0') goto label_0456cad0;
    }
    pUVar17 = *(UI_MapEditorInspectPanel_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar25 = pUVar17;
    bVar13 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      return;
    }
    if (pUVar17 == (UI_MapEditorInspectPanel_o *)0x0) goto label_0456d14e;
    __this_01 = (Il2CppClass *)(pUVar17->fields).SinglePanel;
    pUVar25 = (UI_MapEditorInspectPanel_o *)0x0;
    UVar32 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (__this_01 == (Il2CppClass *)0x0) goto label_0456d14e;
    UnityEngine_Camera__ScreenPointToRay_4db37e0
              (&UStack_88,(UnityEngine_Camera_o *)__this_01,UVar32,(MethodInfo *)0x0);
    layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
    if (*(int *)((long)&(TypeInfo_PhysicsLayer->fields)._visible + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar25 = TypeInfo_PhysicsLayer;
    if (layers == (System_Int32_array *)0x0) goto label_0456d14e;
    if ((int)layers->max_length != 0) {
      layers->m_Items[0] = *(int32_t *)&(TypeInfo_PhysicsLayer->fields)._parent[2].klass;
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar33 = CONCAT44(UStack_88.fields.m_Origin.fields.y,UStack_88.fields.m_Origin.fields.x);
      uVar34 = CONCAT44(UStack_88.fields.m_Direction.fields.x,UStack_88.fields.m_Origin.fields.z);
      pUVar25 = (UI_MapEditorInspectPanel_o *)&stack0xffffffffffffff90;
      ray.fields.m_Origin.fields.z = UStack_88.fields.m_Origin.fields.z;
      ray.fields.m_Direction.fields.x = UStack_88.fields.m_Direction.fields.x;
      ray.fields.m_Origin.fields.x = UStack_88.fields.m_Origin.fields.x;
      ray.fields.m_Origin.fields.y = UStack_88.fields.m_Origin.fields.y;
      ray.fields.m_Direction.fields.y = UStack_88.fields.m_Direction.fields.y;
      ray.fields.m_Direction.fields.z = UStack_88.fields.m_Direction.fields.z;
      bVar13 = UnityEngine_Physics__Raycast_4e78080
                         (ray,(UnityEngine_RaycastHit_o *)pUVar25,100000.0,layerMask,(MethodInfo *)0x0);
      pUVar17 = (__this_05->fields).InspectPanel;
      if ((char)bVar13 == '\0') {
        if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) {
          MapEditor_MapEditorBrush__ClearCenter((MapEditor_MapEditorBrush_o *)pUVar17,(MethodInfo *)0x0);
          goto label_0456cd0f;
        }
      }
      else {
        pUVar25 = (UI_MapEditorInspectPanel_o *)&stack0xffffffffffffff90;
        __this_04.fields.m_Point.fields.z = (float)(int)uVar34;
        __this_04.fields.m_Normal.fields.x = (float)(int)((ulong)uVar34 >> 0x20);
        __this_04.fields.m_Point.fields.x = (float)(int)uVar33;
        __this_04.fields.m_Point.fields.y = (float)(int)((ulong)uVar33 >> 0x20);
        __this_04.fields.m_Normal.fields.y = UStack_88.fields.m_Direction.fields.y;
        __this_04.fields.m_Normal.fields.z = UStack_88.fields.m_Direction.fields.z;
        __this_04.fields.m_FaceID = (int)in_stack_ffffffffffffff48;
        __this_04.fields.m_Distance = (float)(int)((ulong)in_stack_ffffffffffffff48 >> 0x20);
        __this_04.fields.m_UV.fields.x = (float)in_stack_ffffffffffffff50;
        __this_04.fields.m_UV.fields.y = (float)in_stack_ffffffffffffff54;
        __this_04.fields.m_Collider = in_stack_ffffffffffffff58;
        UVar32 = UnityEngine_RaycastHit__get_point(__this_04,(MethodInfo *)pUVar25);
        if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) {
          MapEditor_MapEditorBrush__SetCenter((MapEditor_MapEditorBrush_o *)pUVar17,UVar32,(MethodInfo *)0x0);
label_0456cd0f:
          pUVar25 = "Mouse ScrollWheel";
          fVar30 = UnityEngine_Input__GetAxis((System_String_o *)"Mouse ScrollWheel",(MethodInfo *)0x0);
          pUVar6 = (__this_05->fields).ImportPopup;
          if ((pUVar6 != (UI_ImportPopup_o *)0x0) &&
             (pUVar25 = (UI_MapEditorInspectPanel_o *)pUVar6[1].fields._currentCategoryPanelName,
             pUVar25 != (UI_MapEditorInspectPanel_o *)0x0)) {
            bVar13 = Settings_KeybindSetting__GetKey((Settings_KeybindSetting_o *)pUVar25,0,(MethodInfo *)0x0)
            ;
            pUVar6 = (__this_05->fields).ImportPopup;
            if (pUVar6 != (UI_ImportPopup_o *)0x0) {
              __this_02 = pUVar6[1].fields._categoryPanelTypes;
              pUVar25 = (UI_MapEditorInspectPanel_o *)0x0;
              if (__this_02 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
                bVar14 = Settings_KeybindSetting__GetKey
                                   ((Settings_KeybindSetting_o *)__this_02,0,(MethodInfo *)0x0);
                pUVar25 = (__this_05->fields).InspectPanel;
                if (pUVar25 != (UI_MapEditorInspectPanel_o *)0x0) {
                  if (*(int *)((long)&(pUVar25->fields).m_CachedPtr + 4) == 1) {
                    pUVar6 = (__this_05->fields).ImportPopup;
                    if ((pUVar6 != (UI_ImportPopup_o *)0x0) &&
                       (pUVar25 = (UI_MapEditorInspectPanel_o *)pUVar6[1].fields.MaskBackground,
                       pUVar25 != (UI_MapEditorInspectPanel_o *)0x0)) {
                      bVar15 = Settings_KeybindSetting__GetKeyDown
                                         ((Settings_KeybindSetting_o *)pUVar25,0,(MethodInfo *)0x0);
                      if ((char)bVar15 == '\0') {
                        pUVar6 = (__this_05->fields).ImportPopup;
                        if ((pUVar6 != (UI_ImportPopup_o *)0x0) &&
                           (pUVar25 = (UI_MapEditorInspectPanel_o *)pUVar6[1].fields.Parent,
                           pUVar25 != (UI_MapEditorInspectPanel_o *)0x0)) {
                          bVar15 = Settings_KeybindSetting__GetKeyDown
                                             ((Settings_KeybindSetting_o *)pUVar25,0,(MethodInfo *)0x0);
                          if ((char)bVar15 != '\0') {
                            pUVar17 = (__this_05->fields).InspectPanel;
                            uVar22 = 2;
                            goto joined_r0x0456cea3;
                          }
                          pUVar6 = (__this_05->fields).ImportPopup;
                          if ((pUVar6 == (UI_ImportPopup_o *)0x0) ||
                             (pUVar25 = (UI_MapEditorInspectPanel_o *)pUVar6[1].fields.BottomBar,
                             pUVar25 == (UI_MapEditorInspectPanel_o *)0x0)) goto label_0456d14e;
                          bVar15 = Settings_KeybindSetting__GetKeyDown
                                             ((Settings_KeybindSetting_o *)pUVar25,0,(MethodInfo *)0x0);
                          if ((char)bVar15 != '\0') {
                            pUVar17 = (__this_05->fields).InspectPanel;
                            uVar22 = 3;
                            goto joined_r0x0456cea3;
                          }
                          pUVar6 = (__this_05->fields).ImportPopup;
                          if ((pUVar6 == (UI_ImportPopup_o *)0x0) ||
                             (pUVar25 = (UI_MapEditorInspectPanel_o *)pUVar6[1].fields.TopBar,
                             pUVar25 == (UI_MapEditorInspectPanel_o *)0x0)) goto label_0456d14e;
                          uVar22 = 0;
                          bVar15 = Settings_KeybindSetting__GetKeyDown
                                             ((Settings_KeybindSetting_o *)pUVar25,0,(MethodInfo *)0x0);
                          if ((char)bVar15 != '\0') {
                            pUVar17 = (__this_05->fields).InspectPanel;
                            goto joined_r0x0456cea3;
                          }
                          goto label_0456ceee;
                        }
                      }
                      else {
                        pUVar17 = (__this_05->fields).InspectPanel;
                        uVar22 = 1;
joined_r0x0456cea3:
                        if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) {
                          *(undefined4 *)((long)&(pUVar17->fields)._popups + 4) = uVar22;
label_0456ceee:
                          if (ABS(fVar30) <= 0.0001) goto label_0456cf6f;
                          pUVar17 = (__this_05->fields).InspectPanel;
                          pUVar25 = (UI_MapEditorInspectPanel_o *)0x0;
                          if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) {
                            iVar29 = *(int *)((long)&(pUVar17->fields)._popups + 4);
                            iVar23 = 1;
                            if (iVar29 != 0) {
                              iVar23 = iVar29;
                            }
                            iVar29 = (uint)(0.0 < fVar30) * 2 + -1;
                            if ((char)bVar14 == '\0') {
                              if ((char)bVar13 == '\0') {
                                UVar32 = MapEditor_MapEditorBrush__GetAverageGhostSize
                                                   ((MapEditor_MapEditorBrush_o *)pUVar17,(MethodInfo *)0x0);
                                fVar30 = UVar32.fields.y;
                                if (iVar23 == 1) {
                                  pUVar17 = (__this_05->fields).InspectPanel;
                                  pUVar25 = (UI_MapEditorInspectPanel_o *)0x0;
                                  if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) {
                                    fVar31 = UVar32.fields.x * 0.1;
                                    fVar30 = 0.5;
                                    if (0.5 <= fVar31) {
                                      fVar30 = fVar31;
                                    }
                                    fVar31 = (float)iVar29 * fVar30 +
                                             *(float *)&(pUVar17->fields).DoublePanelRight;
                                    fVar30 = 0.0;
                                    if (0.0 <= fVar31) {
                                      fVar30 = fVar31;
                                    }
                                    *(float *)&(pUVar17->fields).DoublePanelRight = fVar30;
                                    goto label_0456cf54;
                                  }
                                }
                                else {
                                  if (iVar23 != 2) {
                                    fVar30 = UVar32.fields.z;
                                  }
                                  fVar31 = 0.5;
                                  if (0.5 <= fVar30 * 0.1) {
                                    fVar31 = fVar30 * 0.1;
                                  }
                                  if (iVar23 == 3) {
                                    pUVar17 = (__this_05->fields).InspectPanel;
                                    pUVar25 = (UI_MapEditorInspectPanel_o *)0x0;
                                    if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) {
                                      fVar31 = fVar31 * (float)iVar29 + *(float *)&(pUVar17->fields)._popups;
                                      fVar30 = 0.0;
                                      if (0.0 <= fVar31) {
                                        fVar30 = fVar31;
                                      }
                                      *(float *)&(pUVar17->fields)._popups = fVar30;
                                      goto label_0456cf54;
                                    }
                                  }
                                  else if (iVar23 == 2) {
                                    pUVar17 = (__this_05->fields).InspectPanel;
                                    pUVar25 = (UI_MapEditorInspectPanel_o *)0x0;
                                    if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) {
                                      fVar31 = fVar31 * (float)iVar29 +
                                               *(float *)((long)&(pUVar17->fields).DoublePanelRight + 4);
                                      fVar30 = 0.0;
                                      if (0.0 <= fVar31) {
                                        fVar30 = fVar31;
                                      }
                                      *(float *)((long)&(pUVar17->fields).DoublePanelRight + 4) = fVar30;
                                      goto label_0456cf54;
                                    }
                                  }
                                  else {
                                    pUVar17 = (__this_05->fields).InspectPanel;
                                    pUVar25 = (UI_MapEditorInspectPanel_o *)0x0;
                                    if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) goto label_0456cf54;
                                  }
                                }
                                goto label_0456d14e;
                              }
                              if (iVar23 == 3) {
                                iVar29 = iVar29 + *(int *)((long)&(pUVar17->fields).DoublePanelLeft + 4);
                                iVar23 = 1;
                                if (0 < iVar29) {
                                  iVar23 = iVar29;
                                }
                                *(int *)((long)&(pUVar17->fields).DoublePanelLeft + 4) = iVar23;
                              }
                              else if (iVar23 == 2) {
                                iVar29 = iVar29 + *(int *)&(pUVar17->fields).DoublePanelLeft;
                                iVar23 = 1;
                                if (0 < iVar29) {
                                  iVar23 = iVar29;
                                }
                                *(int *)&(pUVar17->fields).DoublePanelLeft = iVar23;
                              }
                              else if (iVar23 == 1) {
                                iVar29 = iVar29 + *(int *)((long)&(pUVar17->fields).SinglePanel + 4);
                                iVar23 = 1;
                                if (0 < iVar29) {
                                  iVar23 = iVar29;
                                }
                                *(int *)((long)&(pUVar17->fields).SinglePanel + 4) = iVar23;
                              }
                            }
                            else {
                              *(float *)&(pUVar17->fields)._currentCategoryPanel =
                                   (float)iVar29 * 0.5 + *(float *)&(pUVar17->fields)._currentCategoryPanel;
                            }
label_0456cf54:
                            MapEditor_MapEditorBrush__RegenerateGhosts
                                      ((MapEditor_MapEditorBrush_o *)pUVar17,(MethodInfo *)0x0);
                            pUVar25 = (UI_MapEditorInspectPanel_o *)(__this_05->fields).ExportPopup;
                            if (pUVar25 != (UI_MapEditorInspectPanel_o *)0x0) {
                              UI_MapEditorMenu__SyncBrushPanelValues
                                        ((UI_MapEditorMenu_o *)pUVar25,(MethodInfo *)0x0);
                              goto label_0456cf6f;
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (ABS(fVar30) <= 0.0001) {
label_0456cf6f:
                      pUVar6 = (__this_05->fields).ImportPopup;
                    }
                    else {
                      MapEditor_MapEditorBrush__SetRadius
                                ((MapEditor_MapEditorBrush_o *)pUVar25,
                                 (fVar30 + fVar30 + 1.0) *
                                 *(float *)&(pUVar25->fields).m_CancellationTokenSource,(MethodInfo *)0x0);
                      pUVar6 = (__this_05->fields).ImportPopup;
                    }
                    if ((pUVar6 != (UI_ImportPopup_o *)0x0) &&
                       (pUVar25 = (UI_MapEditorInspectPanel_o *)pUVar6[1].fields._currentCategoryPanel,
                       pUVar25 != (UI_MapEditorInspectPanel_o *)0x0)) {
                      bVar13 = Settings_KeybindSetting__GetKeyDown
                                         ((Settings_KeybindSetting_o *)pUVar25,0,(MethodInfo *)0x0);
                      if ((char)bVar13 == '\0') {
label_0456cfc7:
                        pUVar6 = (__this_05->fields).ImportPopup;
                        if (pUVar6 != (UI_ImportPopup_o *)0x0) {
                          __this_03 = (pUVar6->fields)._topButtons;
                          pUVar25 = (UI_MapEditorInspectPanel_o *)0x0;
                          if (__this_03 != (System_Collections_Generic_Dictionary_string__Button__o *)0x0) {
                            pMVar24 = (MethodInfo *)0x0;
                            bVar13 = Settings_KeybindSetting__GetKeyDown
                                               ((Settings_KeybindSetting_o *)__this_03,0,(MethodInfo *)0x0);
                            if ((char)bVar13 == '\0') {
                              return;
                            }
                            GameManagers_MapEditorGameManager__PlaceBrush
                                      ((GameManagers_MapEditorGameManager_o *)__this_05,pMVar24);
                            return;
                          }
                        }
                      }
                      else {
                        pUVar17 = (__this_05->fields).InspectPanel;
                        pUVar25 = (UI_MapEditorInspectPanel_o *)0x0;
                        if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) {
                          MapEditor_MapEditorBrush__Reseed
                                    ((MapEditor_MapEditorBrush_o *)pUVar17,(MethodInfo *)0x0);
                          pUVar25 = (__this_05->fields).InspectPanel;
                          if (pUVar25 != (UI_MapEditorInspectPanel_o *)0x0) {
                            MapEditor_MapEditorBrush__RegenerateGhosts
                                      ((MapEditor_MapEditorBrush_o *)pUVar25,(MethodInfo *)0x0);
                            goto label_0456cfc7;
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
      goto label_0456d14e;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057af044 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057af044 = '\x01';
  }
  pUVar7 = (pUVar25->fields).BottomBar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return;
  }
  pUVar18 = (UnityEngine_Object_o *)(pUVar25->fields)._currentCategoryPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar24 = (MethodInfo *)0x0;
  bVar13 = UnityEngine_Object__op_Inequality(pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
label_0456d22a:
    pUVar16 = (UI_MapEditorMenu_o *)(pUVar25->fields).BottomBar;
    plVar20 = (long *)(UI_MapEditorInspectPanel_o *)0x0;
    if (pUVar16 != (UI_MapEditorMenu_o *)0x0) {
      pMVar24 = (MethodInfo *)0x0;
      bVar13 = UI_MapEditorMenu__IsPopupActive(pUVar16,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        if (*(int *)(TypeInfo_EventSystem + 0xe4) != 0) goto label_0456d25d;
label_0456d417:
        il2cpp_runtime_helper_02337ed0();
        plVar20 = (long *)0x0;
        pUVar19 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      }
      else {
        *(undefined1 *)((long)&(pUVar25->fields)._mixedFields + 5) = 0;
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) goto label_0456d417;
label_0456d25d:
        plVar20 = (long *)0x0;
        pUVar19 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      }
      if (pUVar19 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
        pUVar17 = (UI_MapEditorInspectPanel_o *)(pUVar19->fields).m_CurrentSelected;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar21 = (MethodInfo *)0x0;
        plVar20 = (long *)pUVar17;
        bVar13 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          pMVar24 = pMVar21;
          if (pUVar17 == (UI_MapEditorInspectPanel_o *)0x0) goto label_0456d42c;
          plVar20 = (long *)UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar17,MethodInfo_InputField_GetComponent_InputField);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar21 = (MethodInfo *)0x0;
          bVar13 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)plVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            *(undefined1 *)((long)&(pUVar25->fields)._mixedFields + 5) = 0;
          }
        }
        pUVar17 = (UI_MapEditorInspectPanel_o *)(pUVar25->fields).BottomBar;
        if (*(char *)((long)&(pUVar25->fields)._mixedFields + 5) == '\0') {
label_0456d3a0:
          pMVar24 = pMVar21;
          if (g_data_057a694c == '\0') {
            plVar20 = &TypeInfo_Vector2;
            il2cpp_runtime_helper_023445d0();
            g_data_057a694c = '\x01';
            pMVar24 = pMVar21;
          }
          if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) {
            UI_MapEditorMenu__SetDrag
                      ((UI_MapEditorMenu_o *)pUVar17,0,
                       (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                       (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                       (MethodInfo *)0x0);
            return;
          }
        }
        else {
          start.fields = (UnityEngine_Vector2_Fields)(pUVar25->fields)._syncedSerialized;
          plVar20 = (long *)0x0;
          UVar32 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          pMVar24 = pMVar21;
          if (pUVar17 != (UI_MapEditorInspectPanel_o *)0x0) {
            pMVar24 = (MethodInfo *)0x1;
            UI_MapEditorMenu__SetDrag
                      ((UI_MapEditorMenu_o *)pUVar17,1,start,(UnityEngine_Vector2_o)UVar32.fields._0_8_,
                       (MethodInfo *)0x0);
            pUVar7 = (pUVar25->fields).TopBar;
            plVar20 = (long *)pUVar17;
            if ((pUVar7 != (UnityEngine_Transform_o *)0x0) &&
               (plVar20 = (long *)pUVar7[5].klass,
               (UI_MapEditorInspectPanel_o *)plVar20 != (UI_MapEditorInspectPanel_o *)0x0)) {
              pMVar24 = (MethodInfo *)0x0;
              bVar13 = Settings_KeybindSetting__GetKeyUp
                                 ((Settings_KeybindSetting_o *)plVar20,0,(MethodInfo *)0x0);
              if ((char)bVar13 == '\0') {
                return;
              }
              pUVar7 = (pUVar25->fields).TopBar;
              if ((pUVar7 != (UnityEngine_Transform_o *)0x0) &&
                 (plVar20 = pUVar7[5].monitor,
                 (UI_MapEditorInspectPanel_o *)plVar20 != (UI_MapEditorInspectPanel_o *)0x0)) {
                pMVar21 = (MethodInfo *)0x0;
                pMVar24 = (MethodInfo *)0x0;
                bVar13 = Settings_KeybindSetting__GetKey
                                   ((Settings_KeybindSetting_o *)plVar20,0,(MethodInfo *)0x0);
                if ((char)bVar13 != '\0') {
                  pSVar10 = (pUVar25->fields)._popups;
                  if (pSVar10 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_0456d42c;
                  pMVar21 = (MethodInfo *)(ulong)(0 < *(int *)&(pSVar10->fields)._syncRoot);
                }
                plVar20 = (long *)pUVar25;
                GameManagers_MapEditorGameManager__Select
                          ((GameManagers_MapEditorGameManager_o *)pUVar25,(bool_conflict)pMVar21,method_00);
                *(undefined1 *)((long)&(pUVar25->fields)._mixedFields + 5) = 0;
                pUVar17 = (UI_MapEditorInspectPanel_o *)(pUVar25->fields).BottomBar;
                goto label_0456d3a0;
              }
            }
          }
        }
      }
    }
  }
  else {
    pUVar8 = (pUVar25->fields)._currentCategoryPanel;
    plVar20 = (long *)(UI_MapEditorInspectPanel_o *)0x0;
    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
      pUVar9 = pUVar8->klass;
      pMVar24 = pUVar9[1]._1.gc_desc;
      cVar12 = (*pUVar9[1]._1.image)();
      if (cVar12 != '\0') {
        *(undefined1 *)((long)&(pUVar25->fields)._mixedFields + 5) = 0;
      }
      goto label_0456d22a;
    }
  }
label_0456d42c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af043 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AddObjectCommand);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057af043 = '\x01';
  }
  pGVar26 = (GameManagers_MapEditorGameManager_o *)
            (((UI_MapEditorInspectPanel_o *)plVar20)->fields)._mapObjects;
  if (pGVar26 != (GameManagers_MapEditorGameManager_o *)0x0) {
    if ((char)(pGVar26->fields).m_CachedPtr == '\0') {
      return;
    }
    pMVar24 = (MethodInfo *)0x0;
    objs = MapEditor_MapEditorBrush__BuildPlacements((MapEditor_MapEditorBrush_o *)pGVar26,(MethodInfo *)0x0);
    if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      if ((objs->fields)._size == 0) {
        return;
      }
      pMVar24 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_AddObjectCommand);
      MapEditor_AddObjectCommand___ctor((MapEditor_AddObjectCommand_o *)pMVar24,objs,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand
                ((GameManagers_MapEditorGameManager_o *)plVar20,(MapEditor_BaseCommand_o *)pMVar24,1,in_RCX);
      pUVar16 = (UI_MapEditorMenu_o *)(((UI_MapEditorInspectPanel_o *)plVar20)->fields).BottomBar;
      pGVar26 = (GameManagers_MapEditorGameManager_o *)0x0;
      if (pUVar16 != (UI_MapEditorMenu_o *)0x0) {
        pMVar24 = (MethodInfo *)0x0;
        UI_MapEditorMenu__SyncHierarchyPanel(pUVar16,(MethodInfo *)0x0);
        pMVar27 = (MapEditor_MapEditorBrush_o *)(((UI_MapEditorInspectPanel_o *)plVar20)->fields)._mapObjects;
        pGVar26 = (GameManagers_MapEditorGameManager_o *)0x0;
        if (pMVar27 != (MapEditor_MapEditorBrush_o *)0x0) {
          if ((char)(pMVar27->fields).Count == '\0') {
label_0456d503:
            MapEditor_MapEditorBrush__RegenerateGhosts(pMVar27,(MethodInfo *)0x0);
            return;
          }
          pMVar24 = (MethodInfo *)0x0;
          MapEditor_MapEditorBrush__Reseed(pMVar27,(MethodInfo *)0x0);
          pMVar27 = (MapEditor_MapEditorBrush_o *)
                    (((UI_MapEditorInspectPanel_o *)plVar20)->fields)._mapObjects;
          pGVar26 = (GameManagers_MapEditorGameManager_o *)0x0;
          if (pMVar27 != (MapEditor_MapEditorBrush_o *)0x0) goto label_0456d503;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar27 = (pGVar26->fields).Brush;
  if (pMVar27 != (MapEditor_MapEditorBrush_o *)0x0) {
    cVar12 = (char)(pMVar27->fields).Active;
    pMVar24 = (MethodInfo *)(ulong)(cVar12 == '\0');
    MapEditor_MapEditorBrush__SetActive(pMVar27,(uint)(cVar12 == '\0'),(MethodInfo *)0x0);
    if (cVar12 == '\0') {
      GameManagers_MapEditorGameManager__DeselectAll(pGVar26,pMVar24);
      pUVar16 = (pGVar26->fields)._menu;
      if (pUVar16 != (UI_MapEditorMenu_o *)0x0) {
        pMVar24 = (MethodInfo *)0x0;
        UI_MapEditorMenu__ShowBrushPanel(pUVar16,(MethodInfo *)0x0);
        goto label_0456d573;
      }
    }
    else {
      pUVar16 = (pGVar26->fields)._menu;
      if (pUVar16 != (UI_MapEditorMenu_o *)0x0) {
        pMVar24 = (MethodInfo *)0x0;
        UI_MapEditorMenu__HideBrushPanel(pUVar16,(MethodInfo *)0x0);
label_0456d573:
        GameManagers_MapEditorGameManager__OnSelectionChange(pGVar26,pMVar24);
        return;
      }
    }
  }
  lVar28 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)(lVar28 + 0x68) != 0) {
    pUVar2 = *(UI_MapEditorTopPanel_o **)(*(long *)(lVar28 + 0x68) + 0xb0);
    lVar28 = 0;
    if (pUVar2 != (UI_MapEditorTopPanel_o *)0x0) {
      UI_MapEditorTopPanel__Save(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long **)(lVar28 + 0x90) != (long *)0x0) {
    lVar11 = **(long **)(lVar28 + 0x90);
    pMVar24 = *(MethodInfo **)(lVar11 + 0x1b0);
    (**(code **)(lVar11 + 0x1a8))();
    if (*(long **)(lVar28 + 0x78) != (long *)0x0) {
      lVar11 = **(long **)(lVar28 + 0x78);
      pMVar24 = *(MethodInfo **)(lVar11 + 0x1b0);
      (**(code **)(lVar11 + 0x1a8))();
      if (*(long **)(lVar28 + 0x80) != (long *)0x0) {
        lVar11 = **(long **)(lVar28 + 0x80);
        pMVar24 = *(MethodInfo **)(lVar11 + 0x1b0);
        (**(code **)(lVar11 + 0x1a8))();
        plVar20 = *(long **)(lVar28 + 0x88);
        if (plVar20 != (long *)0x0) {
          vtableDispatch = *(code **)(*plVar20 + 0x1a8);
          (*vtableDispatch)
                    (plVar20,*(undefined8 *)(*plVar20 + 0x1b0),extraout_RDX,vtableDispatch);
          return;
        }
      }
    }
  }
  pGVar26 = (GameManagers_MapEditorGameManager_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af047 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    g_data_057af047 = '\x01';
  }
  bVar13 = System_String__op_Equality((System_String_o *)pMVar24,"Position",(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    bVar13 = System_String__op_Equality((System_String_o *)pMVar24,"Rotation",(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      method_01 = (MapEditor_PositionGizmo_o *)(pGVar26->fields)._scaleGizmo;
    }
    else {
      method_01 = (MapEditor_PositionGizmo_o *)(pGVar26->fields)._rotationGizmo;
    }
  }
  else {
    method_01 = (pGVar26->fields)._positionGizmo;
  }
  (pGVar26->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)method_01;
  il2cpp_runtime_helper_022b4080(&(pGVar26->fields).CurrentGizmo);
  GameManagers_MapEditorGameManager__SyncGizmos(pGVar26,(MethodInfo *)method_01);
  return;
}


// GameManagers.MapEditorGameManager$$Save
// il2cpp: void GameManagers_MapEditorGameManager__Save (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456d590

void GameManagers_MapEditorGameManager__Save(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorTopPanel_o *__this_00;
  MapEditor_OutlineGizmo_o *pMVar2;
  MapEditor_OutlineGizmo_c *pMVar3;
  MapEditor_PositionGizmo_c *pMVar4;
  MapEditor_RotationGizmo_o *pMVar5;
  MapEditor_RotationGizmo_c *pMVar6;
  MapEditor_ScaleGizmo_o *pMVar7;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar8;
  undefined8 extraout_RDX;
  MapEditor_PositionGizmo_o *pMVar9;
  GameManagers_MapEditorGameManager_o *__this_01;
  
  pUVar1 = (__this->fields)._menu;
  if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._topPanel, __this = (GameManagers_MapEditorGameManager_o *)0x0,
     __this_00 != (UI_MapEditorTopPanel_o *)0x0)) {
    UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar2 = (__this->fields)._outlineGizmo;
  if (pMVar2 != (MapEditor_OutlineGizmo_o *)0x0) {
    pMVar3 = pMVar2->klass;
    method = (pMVar3->vtable)._7_OnSelectionChange.method;
    (*(pMVar3->vtable)._7_OnSelectionChange.methodPtr)();
    pMVar9 = (__this->fields)._positionGizmo;
    if (pMVar9 != (MapEditor_PositionGizmo_o *)0x0) {
      pMVar4 = pMVar9->klass;
      method = (pMVar4->vtable)._7_OnSelectionChange.method;
      (*(pMVar4->vtable)._7_OnSelectionChange.methodPtr)();
      pMVar5 = (__this->fields)._rotationGizmo;
      if (pMVar5 != (MapEditor_RotationGizmo_o *)0x0) {
        pMVar6 = pMVar5->klass;
        method = (pMVar6->vtable)._7_OnSelectionChange.method;
        (*(pMVar6->vtable)._7_OnSelectionChange.methodPtr)();
        pMVar7 = (__this->fields)._scaleGizmo;
        if (pMVar7 != (MapEditor_ScaleGizmo_o *)0x0) {
          vtableDispatch = (pMVar7->klass->vtable)._7_OnSelectionChange.methodPtr;
          (*vtableDispatch)
                    (pMVar7,(pMVar7->klass->vtable)._7_OnSelectionChange.method,extraout_RDX,
                     vtableDispatch);
          return;
        }
      }
    }
  }
  __this_01 = (GameManagers_MapEditorGameManager_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af047 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    g_data_057af047 = '\x01';
  }
  bVar8 = System_String__op_Equality((System_String_o *)method,"Position",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    bVar8 = System_String__op_Equality((System_String_o *)method,"Rotation",(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pMVar9 = (MapEditor_PositionGizmo_o *)(__this_01->fields)._scaleGizmo;
    }
    else {
      pMVar9 = (MapEditor_PositionGizmo_o *)(__this_01->fields)._rotationGizmo;
    }
  }
  else {
    pMVar9 = (__this_01->fields)._positionGizmo;
  }
  (__this_01->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)pMVar9;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).CurrentGizmo);
  GameManagers_MapEditorGameManager__SyncGizmos(__this_01,(MethodInfo *)pMVar9);
  return;
}


// GameManagers.MapEditorGameManager$$OnSelectionChange
// il2cpp: void GameManagers_MapEditorGameManager__OnSelectionChange (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456a520

void GameManagers_MapEditorGameManager__OnSelectionChange
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *pSVar1;
  MapEditor_MapEditorBrush_o *pMVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorHierarchyPanel_o *__this_00;
  long lVar4;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar5;
  System_Collections_Generic_HashSet_object__o *pSVar6;
  System_Collections_Generic_List_MapObject__o *objs;
  long *plVar7;
  MethodInfo *method_00;
  undefined1 auVar8 [12];
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar9;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (g_data_057af046 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057af046 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pSVar1 = (__this->fields).SelectedObjects;
  pSVar6 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_MapObject);
  System_Collections_Generic_HashSet_object____ctor_33e06b0
            (pSVar6,(System_Collections_Generic_IEnumerable_T__o *)pSVar1,MethodInfo_HashSet_1_Map_MapObject);
  if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0456a7fb;
  System_Collections_Generic_HashSet_object___GetEnumerator(&local_48,pSVar6,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
  pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48.fields._set;
  while( true ) {
    do {
      __this_01.fields._8_8_ = __this;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88;
      __this_01.fields._current = (Il2CppObject *)pSVar9;
      bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff98);
      if ((char)bVar5 == '\0') {
        __this_02.fields._8_8_ = __this;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88;
        __this_02.fields._current = (Il2CppObject *)pSVar9;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
        goto label_0456a725;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) goto label_0456a805;
      if (local_48.fields._current[2].klass == (Il2CppClass *)0x0) goto label_0456a80a;
      if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0456a800;
      bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_int__object__o *)
                         **(undefined8 **)(TypeInfo_MapLoader + 0xb8),
                         *(int32_t *)&((local_48.fields._current[2].klass)->_1).byval_arg.data,MethodInfo_Boolean_ContainsKey);
    } while ((char)bVar5 != '\0');
    if (g_data_057af03c == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      g_data_057af03c = '\x01';
    }
    pSVar6 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
    if (pSVar6 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    System_Collections_Generic_HashSet_object___Remove(pSVar6,local_48.fields._current,MethodInfo_Boolean_Remove);
  }
  do {
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
label_0456a897:
      __this_04.fields._8_8_ = __this;
      __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88;
      __this_04.fields._current = (Il2CppObject *)pSVar9;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar8._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = __this;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88;
    __this_03.fields._current = (Il2CppObject *)pSVar9;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_0456a897;
    }
label_0456a725:
    pSVar1 = (__this->fields).SelectedObjects;
    if (pSVar1 != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
      if ((pSVar1->fields)._count < 1) {
label_0456a758:
        pUVar3 = (__this->fields)._menu;
        if (pUVar3 != (UI_MapEditorMenu_o *)0x0) {
          UI_MapEditorMenu__HideInspector(pUVar3,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._menu;
joined_r0x0456a77d:
          if ((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
             (__this_00 = (pUVar3->fields).HierarchyPanel, __this_00 != (UI_MapEditorHierarchyPanel_o *)0x0))
          {
            method_00 = (MethodInfo *)0x0;
            UI_MapEditorHierarchyPanel__SyncSelectedItems(__this_00,(MethodInfo *)0x0);
            GameManagers_MapEditorGameManager__SyncGizmos(__this,method_00);
            return;
          }
        }
      }
      else {
        pMVar2 = (__this->fields).Brush;
        if (pMVar2 != (MapEditor_MapEditorBrush_o *)0x0) {
          if ((char)(pMVar2->fields).Active != '\0') goto label_0456a758;
          pUVar3 = (__this->fields)._menu;
          objs = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
          System_Collections_Generic_List_object____ctor_362ba10
                    ((System_Collections_Generic_List_object__o *)objs,
                     (System_Collections_Generic_IEnumerable_T__o *)pSVar1,MethodInfo_List_1_Map_MapObject);
          if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto label_0456a7fb;
          UI_MapEditorMenu__ShowInspector_4335270(pUVar3,objs,(MethodInfo *)0x0);
          pUVar3 = (__this->fields)._menu;
          goto joined_r0x0456a77d;
        }
      }
    }
label_0456a7fb:
    il2cpp_runtime_helper_022b2c90();
label_0456a800:
    il2cpp_runtime_helper_022b2c90();
label_0456a805:
    il2cpp_runtime_helper_022b2c90();
label_0456a80a:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// GameManagers.MapEditorGameManager$$SyncGizmos
// il2cpp: void GameManagers_MapEditorGameManager__SyncGizmos (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456d5c0

void GameManagers_MapEditorGameManager__SyncGizmos
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  MapEditor_OutlineGizmo_o *pMVar1;
  MapEditor_OutlineGizmo_c *pMVar2;
  MapEditor_PositionGizmo_c *pMVar3;
  MapEditor_RotationGizmo_o *pMVar4;
  MapEditor_RotationGizmo_c *pMVar5;
  MapEditor_ScaleGizmo_o *pMVar6;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar7;
  undefined8 extraout_RDX;
  MapEditor_PositionGizmo_o *pMVar8;
  GameManagers_MapEditorGameManager_o *__this_00;
  
  pMVar1 = (__this->fields)._outlineGizmo;
  if (pMVar1 != (MapEditor_OutlineGizmo_o *)0x0) {
    pMVar2 = pMVar1->klass;
    method = (pMVar2->vtable)._7_OnSelectionChange.method;
    (*(pMVar2->vtable)._7_OnSelectionChange.methodPtr)();
    pMVar8 = (__this->fields)._positionGizmo;
    if (pMVar8 != (MapEditor_PositionGizmo_o *)0x0) {
      pMVar3 = pMVar8->klass;
      method = (pMVar3->vtable)._7_OnSelectionChange.method;
      (*(pMVar3->vtable)._7_OnSelectionChange.methodPtr)();
      pMVar4 = (__this->fields)._rotationGizmo;
      if (pMVar4 != (MapEditor_RotationGizmo_o *)0x0) {
        pMVar5 = pMVar4->klass;
        method = (pMVar5->vtable)._7_OnSelectionChange.method;
        (*(pMVar5->vtable)._7_OnSelectionChange.methodPtr)();
        pMVar6 = (__this->fields)._scaleGizmo;
        if (pMVar6 != (MapEditor_ScaleGizmo_o *)0x0) {
          vtableDispatch = (pMVar6->klass->vtable)._7_OnSelectionChange.methodPtr;
          (*vtableDispatch)
                    (pMVar6,(pMVar6->klass->vtable)._7_OnSelectionChange.method,extraout_RDX,
                     vtableDispatch);
          return;
        }
      }
    }
  }
  __this_00 = (GameManagers_MapEditorGameManager_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af047 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    g_data_057af047 = '\x01';
  }
  bVar7 = System_String__op_Equality((System_String_o *)method,"Position",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    bVar7 = System_String__op_Equality((System_String_o *)method,"Rotation",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pMVar8 = (MapEditor_PositionGizmo_o *)(__this_00->fields)._scaleGizmo;
    }
    else {
      pMVar8 = (MapEditor_PositionGizmo_o *)(__this_00->fields)._rotationGizmo;
    }
  }
  else {
    pMVar8 = (__this_00->fields)._positionGizmo;
  }
  (__this_00->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)pMVar8;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).CurrentGizmo);
  GameManagers_MapEditorGameManager__SyncGizmos(__this_00,(MethodInfo *)pMVar8);
  return;
}


// GameManagers.MapEditorGameManager$$SetGizmo
// il2cpp: void GameManagers_MapEditorGameManager__SetGizmo (GameManagers_MapEditorGameManager_o* __this, System_String_o* gizmo, const MethodInfo* method);
// 0x456d640

void GameManagers_MapEditorGameManager__SetGizmo
               (GameManagers_MapEditorGameManager_o *__this,System_String_o *gizmo,MethodInfo *method)

{
  bool_conflict bVar1;
  MapEditor_PositionGizmo_o *method_00;
  
  if (g_data_057af047 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Position");
    il2cpp_runtime_helper_023445d0(&"Rotation");
    g_data_057af047 = '\x01';
  }
  bVar1 = System_String__op_Equality(gizmo,"Position",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(gizmo,"Rotation",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      method_00 = (MapEditor_PositionGizmo_o *)(__this->fields)._scaleGizmo;
    }
    else {
      method_00 = (MapEditor_PositionGizmo_o *)(__this->fields)._rotationGizmo;
    }
  }
  else {
    method_00 = (__this->fields)._positionGizmo;
  }
  (__this->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CurrentGizmo);
  GameManagers_MapEditorGameManager__SyncGizmos(__this,(MethodInfo *)method_00);
  return;
}


// GameManagers.MapEditorGameManager$$SetGizmoMode
// il2cpp: void GameManagers_MapEditorGameManager__SetGizmoMode (GameManagers_MapEditorGameManager_o* __this, int32_t mode, const MethodInfo* method);
// 0x456d6e0

void GameManagers_MapEditorGameManager__SetGizmoMode
               (GameManagers_MapEditorGameManager_o *__this,int32_t mode,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  (__this->fields).CurrentGizmoMode = mode;
  GameManagers_MapEditorGameManager__SyncGizmos(__this,(MethodInfo *)CONCAT44(in_register_00000034,mode));
  return;
}


// GameManagers.MapEditorGameManager$$GetNextObjectId
// il2cpp: int32_t GameManagers_MapEditorGameManager__GetNextObjectId (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456d6f0

int32_t GameManagers_MapEditorGameManager__GetNextObjectId
                  (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields)._currentObjectId + 1;
  (__this->fields)._currentObjectId = iVar1;
  return iVar1;
}


// GameManagers.MapEditorGameManager$$GetHighestObjectId
// il2cpp: int32_t GameManagers_MapEditorGameManager__GetHighestObjectId (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456c2c0

int32_t GameManagers_MapEditorGameManager__GetHighestObjectId
                  (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  long *plVar3;
  int iVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (g_data_057af048 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Map);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057af048 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  iVar8 = 0;
  uVar9 = 0;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
       (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary_int__object___get_Keys
                            ((System_Collections_Generic_Dictionary_int__object__o *)
                             **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_Int32_Map),
     __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffc8,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    iVar4 = 0;
    while (__this_00.fields._8_8_ = pIVar7, __this_00.fields._dictionary = pSVar6,
          __this_00.fields._currentKey._0_4_ = iVar8, __this_00.fields._currentKey._4_4_ = uVar9,
          bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                            (__this_00,(MethodInfo_3244230 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0') {
      if (iVar4 < iVar8) {
        iVar4 = iVar8;
      }
    }
    __this_01.fields._8_8_ = pIVar7;
    __this_01.fields._dictionary = pSVar6;
    __this_01.fields._currentKey._0_4_ = iVar8;
    __this_01.fields._currentKey._4_4_ = uVar9;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
              (__this_01,(MethodInfo_3244220 *)&stack0xffffffffffffffc8);
    return iVar4;
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._dictionary = pSVar6;
    __this_02.fields._currentKey._0_4_ = iVar8;
    __this_02.fields._currentKey._4_4_ = uVar9;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
              (__this_02,(MethodInfo_3244220 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
      return 0x557b288;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar7;
  __this_03.fields._dictionary = pSVar6;
  __this_03.fields._currentKey._0_4_ = iVar8;
  __this_03.fields._currentKey._4_4_ = uVar9;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
            (__this_03,(MethodInfo_3244220 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar5._0_8_);
}


// GameManagers.MapEditorGameManager$$TryGetSetting<object>
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__TryGetSetting_object_ (GameManagers_MapEditorGameManager_o* __this, System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, System_String_o* key, Il2CppObject* Default, const MethodInfo_257D2D0* method);
// 0x267d2d0

Il2CppObject *
GameManagers_MapEditorGameManager__TryGetSetting_object_
          (GameManagers_MapEditorGameManager_o *__this,
          System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,System_String_o *key,
          Il2CppObject *Default,MethodInfo_257D2D0 *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *pSVar2;
  System_RuntimeTypeHandle_o SVar3;
  char cVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  long lVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  System_ArgumentNullException_c *pSVar11;
  System_String_o *pSVar12;
  System_Delegate_o *d;
  System_ArgumentNullException_o *__this_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar13;
  System_Type_o *pSVar14;
  void *pvVar15;
  System_RuntimeTypeHandle_Fields *pSVar16;
  long lVar17;
  void *pvVar18;
  undefined1 *__dest;
  long lVar19;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar20;
  System_ArgumentNullException_c *__src;
  System_ArgumentNullException_c *pSVar21;
  System_ArgumentNullException_o *ptr;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_f0;
  long alStack_e8 [6];
  long alStack_b8 [4];
  undefined1 auStack_98 [8];
  System_ArgumentNullException_c *pSStack_90;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSStack_88;
  System_ArgumentNullException_c *pSStack_80;
  MethodInfo_257D2D0 *pMStack_78;
  
  pSVar20 = settings;
  if (method->rgctx_data == (MethodInfo_257D2D0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    __this = (GameManagers_MapEditorGameManager_o *)&MethodInfo_BaseSetting_get_Item;
    il2cpp_runtime_helper_023445d0();
    if (method->rgctx_data == (MethodInfo_257D2D0_RGCTXs *)0x0) {
      __this = (GameManagers_MapEditorGameManager_o *)method;
      il2cpp_runtime_helper_02300a20();
    }
  }
  if (settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)settings,(Il2CppObject *)key
                       ,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 != '\0') {
      pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                          (Il2CppObject *)key,MethodInfo_BaseSetting_get_Item);
      pIVar7 = method->rgctx_data->_0_T;
      if (((pIVar7->_2).field_0x6d & 1) == 0) {
        pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar7);
      }
      lVar8 = il2cpp_runtime_helper_023051f0(pIVar6,pIVar7);
      if (lVar8 != 0) {
        pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                            (Il2CppObject *)key,MethodInfo_BaseSetting_get_Item);
        pIVar7 = method->rgctx_data->_0_T;
        if (((pIVar7->_2).field_0x6d & 1) == 0) {
          pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar7);
        }
        if (pIVar6 != (Il2CppObject *)0x0) {
          pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pIVar6,pIVar7);
          if (pIVar9 != (Il2CppObject *)0x0) {
            return pIVar9;
          }
          il2cpp_runtime_helper_022b2fd0(pIVar6,pIVar7);
        }
        Default = (Il2CppObject *)0x0;
      }
    }
    return Default;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a6982 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Delegate);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Marshal);
    g_data_057a6982 = '\x01';
  }
  if (__this != (GameManagers_MapEditorGameManager_o *)0x0) {
    if (*(int *)(TypeInfo_Marshal + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = (TypeInfo_Delegate->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Delegate)) {
      pIVar6 = (Il2CppObject *)
               System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegateInternal
                         ((System_Delegate_o *)__this,(MethodInfo *)0x0);
      return pIVar6;
    }
    il2cpp_runtime_helper_022b2fd0(__this);
  }
  uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
  pSVar11 = (System_ArgumentNullException_c *)il2cpp_runtime_helper_023052d0(uVar10);
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"d");
  System_ArgumentNullException___ctor_3c0ad60
            ((System_ArgumentNullException_o *)pSVar11,pSVar12,(MethodInfo *)0x0);
  pSVar21 = pSVar11;
  il2cpp_runtime_helper_022b2b10();
  pSVar13 = (pSVar20->fields)._keys;
  pSStack_90 = pSVar21;
  pSStack_80 = pSVar11;
  pMStack_78 = method;
  if (pSVar13 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
    alStack_b8[3] = 0x267d4f0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Delegate);
    alStack_b8[3] = 0x267d4fc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Marshal);
    pSVar13 = (pSVar20->fields)._keys;
    if (pSVar13 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      alStack_b8[3] = 0x267d50d;
      il2cpp_runtime_helper_02300a20(pSVar20);
      pSVar13 = (pSVar20->fields)._keys;
    }
  }
  uVar22 = (ulong)(pSVar13->klass->_2).actualSize;
  lVar8 = -(uVar22 + 0xf & 0xfffffffffffffff0);
  __dest = auStack_98 + lVar8;
  pSVar11 = (System_ArgumentNullException_c *)&stack0xffffffffffffff70;
  __src = pSVar11;
  if ((int)(pSVar13->klass->_1).byval_arg.bits < 0) {
    __src = pSVar21;
  }
  pSStack_88 = pSVar20;
  *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d54b;
  memcpy(__dest,__src,uVar22);
  pSVar2 = pSVar13->klass;
  *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d556;
  cVar4 = il2cpp_runtime_helper_022b2c30(pSVar2,__dest);
  if (cVar4 == '\0') {
label_0267d5fc:
    *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d608;
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d610;
    __this_00 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023052d0(uVar10);
    *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d61f;
    pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"d");
    *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d62c;
    System_ArgumentNullException___ctor_3c0ad60(__this_00,pSVar12,(MethodInfo *)0x0);
    pSVar20 = pSStack_88;
    *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d638;
    ptr = __this_00;
    il2cpp_runtime_helper_022b2b10();
    *(System_ArgumentNullException_c **)(auStack_98 + lVar8 + -8) = pSVar21;
    *(System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o **)((long)alStack_b8 + lVar8 + 0x10)
         = pSVar13;
    *(System_ArgumentNullException_o **)((long)alStack_b8 + lVar8 + 8) = __this_00;
    pSVar13 = (pSVar20->fields)._keys;
    if (pSVar13 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      *(undefined8 *)((long)alStack_b8 + lVar8) = 0x267d660;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Marshal);
      pSVar13 = (pSVar20->fields)._keys;
      if (pSVar13 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
        *(undefined8 *)((long)alStack_b8 + lVar8) = 0x267d671;
        il2cpp_runtime_helper_02300a20(pSVar20);
        pSVar13 = (pSVar20->fields)._keys;
      }
    }
    SVar3.fields.value = (System_RuntimeTypeHandle_Fields)pSVar13->klass;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      *(undefined8 *)((long)alStack_b8 + lVar8) = 0x267d694;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)alStack_b8 + lVar8) = 0x267d69e;
    pSVar14 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Marshal + 0xe4) == 0) {
      *(undefined8 *)((long)alStack_b8 + lVar8) = 0x267d6b9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)alStack_b8 + lVar8) = 0x267d6c6;
    pIVar6 = System_Runtime_InteropServices_Marshal__PtrToStructure((intptr_t)ptr,pSVar14,(MethodInfo *)0x0);
    pvVar15 = ((pSVar20->fields)._keys)->monitor;
    if ((*(byte *)((long)pvVar15 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)alStack_b8 + lVar8) = 0x267d6e2;
      pvVar15 = (void *)il2cpp_runtime_helper_023009c0(pvVar15);
    }
    if (pIVar6 != (Il2CppObject *)0x0) {
      *(undefined8 *)((long)alStack_b8 + lVar8) = 0x267d6f5;
      pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pIVar6,pvVar15);
      if (pIVar9 != (Il2CppObject *)0x0) {
        return pIVar9;
      }
      *(undefined8 *)((long)alStack_b8 + lVar8) = 0x267d713;
      pvVar18 = pvVar15;
      pIVar9 = pIVar6;
      auVar23 = il2cpp_runtime_helper_022b2fd0();
      lVar17 = auVar23._8_8_;
      *(undefined1 **)((long)alStack_b8 + lVar8) = &stack0xffffffffffffffa8;
      *(System_Collections_Generic_Dictionary_string__BaseSetting__o **)((long)alStack_e8 + lVar8 + 0x28) =
           pSVar20;
      *(Il2CppObject **)((long)alStack_e8 + lVar8 + 0x20) = pIVar6;
      *(System_ArgumentNullException_c **)((long)alStack_e8 + lVar8 + 0x18) = pSVar11;
      *(ulong *)((long)alStack_e8 + lVar8 + 0x10) = uVar22;
      *(void **)((long)alStack_e8 + lVar8 + 8) = pvVar15;
      *(long *)((long)alStack_e8 + lVar8) = auVar23._0_8_;
      *(void **)((long)alStack_e8 + lVar8) = pvVar18;
      pSVar16 = *(System_RuntimeTypeHandle_Fields **)(lVar17 + 0x38);
      if (pSVar16 == (System_RuntimeTypeHandle_Fields *)0x0) {
        *(undefined8 *)((long)&uStack_f0 + lVar8) = 0x267d74d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Marshal);
        pSVar16 = *(System_RuntimeTypeHandle_Fields **)(lVar17 + 0x38);
        if (pSVar16 == (System_RuntimeTypeHandle_Fields *)0x0) {
          *(undefined8 *)((long)&uStack_f0 + lVar8) = 0x267d75e;
          il2cpp_runtime_helper_02300a20(lVar17);
          pSVar16 = *(System_RuntimeTypeHandle_Fields **)(lVar17 + 0x38);
        }
      }
      uVar22 = (ulong)*(uint *)(pSVar16[1].value + 0xfc);
      lVar19 = (long)alStack_e8 + (lVar8 - (uVar22 + 0xf & 0xfffffffffffffff0));
      SVar3.fields.value = (System_RuntimeTypeHandle_Fields)pSVar16->value;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        *(undefined8 *)(lVar19 + -8) = 0x267d79d;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(lVar19 + -8) = 0x267d7a7;
      pSVar14 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Marshal + 0xe4) == 0) {
        *(undefined8 *)(lVar19 + -8) = 0x267d7c2;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(lVar19 + -8) = 0x267d7cf;
      pIVar6 = System_Runtime_InteropServices_Marshal__PtrToStructure
                         ((intptr_t)pIVar9,pSVar14,(MethodInfo *)0x0);
      lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        *(undefined8 *)(lVar19 + -8) = 0x267d7eb;
        lVar17 = il2cpp_runtime_helper_023009c0(lVar17);
      }
      *(undefined8 *)(lVar19 + -8) = 0x267d7f9;
      pvVar18 = (void *)il2cpp_runtime_helper_022b2b80(pIVar6,lVar17,lVar19);
      pvVar15 = *(void **)((long)alStack_e8 + lVar8);
      *(undefined8 *)(lVar19 + -8) = 0x267d808;
      pIVar6 = memcpy(pvVar15,pvVar18,uVar22);
      return pIVar6;
    }
    return (Il2CppObject *)0x0;
  }
  pSVar13 = (pSStack_88->fields)._keys;
  if ((int)(pSVar13->klass->_1).byval_arg.bits < 0) {
    pSVar11 = pSVar21;
  }
  *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d57f;
  memcpy(__dest,pSVar11,uVar22);
  pSVar2 = pSVar13->klass;
  *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d58a;
  d = (System_Delegate_o *)il2cpp_runtime_helper_02304f30(pSVar2);
  if (*(int *)(TypeInfo_Marshal + 0xe4) == 0) {
    *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d5ac;
    il2cpp_runtime_helper_02337ed0();
  }
  if (d != (System_Delegate_o *)0x0) {
    bVar1 = (TypeInfo_Delegate->_2).naturalAligment;
    if (((d->klass->_2).naturalAligment < bVar1) ||
       ((d->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Delegate)) {
      *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d5fc;
      il2cpp_runtime_helper_022b2fd0(d);
      goto label_0267d5fc;
    }
  }
  *(undefined8 *)(auStack_98 + lVar8 + -8) = 0x267d5e5;
  pIVar6 = (Il2CppObject *)
           System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegateInternal(d,(MethodInfo *)0x0);
  return pIVar6;
}


// GameManagers.MapEditorGameManager$$ToggleLights
// il2cpp: void GameManagers_MapEditorGameManager__ToggleLights (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456d700

void GameManagers_MapEditorGameManager__ToggleLights
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  void *pvVar1;
  Il2CppClass *pIVar2;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  long lVar3;
  System_Collections_Generic_HashSet_int__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_08;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_09;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_10;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_11;
  System_Collections_Generic_List_Enumerator_object__o __this_12;
  System_Collections_Generic_List_Enumerator_object__o __this_13;
  System_Collections_Generic_List_Enumerator_object__o __this_14;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_15;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_16;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_17;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_18;
  char cVar4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Behaviour_o *pUVar8;
  _union_236485 _Var9;
  UnityEngine_Light_o *pUVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  _union_236485 unaff_RBP;
  Settings_HashSetSetting_int__o *__this_19;
  _union_236485 unaff_R12;
  Il2CppObject *unaff_R13;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  bool_conflict value;
  undefined8 *unaff_R14;
  undefined1 auVar16 [12];
  UnityEngine_Color_o UVar17;
  Il2CppType *pIVar18;
  Il2CppObject *pIVar19;
  _union_236485 local_100;
  Il2CppType *pIStack_f8;
  Il2CppObject *local_f0;
  _union_236485 local_e0;
  Il2CppType *pIStack_d8;
  Il2CppObject *local_d0;
  long lStack_c8;
  _union_236485 _Stack_c0;
  Il2CppObject *pIStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  _union_236485 _Stack_a0;
  Il2CppClass *pIVar20;
  Il2CppRGCTXData *pIVar21;
  _union_236485 _Var22;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *local_78;
  Il2CppClass *local_68;
  Il2CppRGCTXData *pIStack_60;
  _union_236485 local_58;
  Il2CppObject *local_50;
  undefined1 local_48 [16];
  _union_236485 local_38;
  
  pIVar14 = (Il2CppObject *)&stack0xffffffffffffff68;
  pIVar19 = (Il2CppObject *)&stack0xffffffffffffff68;
  pIVar15 = (Il2CppObject *)&stack0xffffffffffffff68;
  if (g_data_057af049 == '\0') {
    _Stack_a0 = (_union_236485)0x456d72a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma);
    _Stack_a0 = (_union_236485)0x456d736;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    _Stack_a0 = (_union_236485)0x456d742;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    _Stack_a0 = (_union_236485)0x456d74e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    _Stack_a0 = (_union_236485)0x456d75a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    _Stack_a0 = (_union_236485)0x456d766;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    _Stack_a0 = (_union_236485)0x456d772;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptComponent_get_Current);
    _Stack_a0 = (_union_236485)0x456d77e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Light_AddComponent_Light);
    _Stack_a0 = (_union_236485)0x456d78a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Light_GetComponent_Light);
    _Stack_a0 = (_union_236485)0x456d796;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapScriptComponent_GetEnumerator);
    _Stack_a0 = (_union_236485)0x456d7a2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_ColorSetting_TryGetSetting_ColorSetting);
    _Stack_a0 = (_union_236485)0x456d7ae;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FloatSetting_TryGetSetting_FloatSetting);
    _Stack_a0 = (_union_236485)0x456d7ba;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    _Stack_a0 = (_union_236485)0x456d7c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    _Stack_a0 = (_union_236485)0x456d7d2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    _Stack_a0 = (_union_236485)0x456d7de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    _Stack_a0 = (_union_236485)0x456d7ea;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    _Stack_a0 = (_union_236485)0x456d7f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    _Stack_a0 = (_union_236485)0x456d802;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    _Stack_a0 = (_union_236485)0x456d80e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    _Stack_a0 = (_union_236485)0x456d81a;
    il2cpp_runtime_helper_023445d0(&"Color");
    _Stack_a0 = (_union_236485)0x456d826;
    il2cpp_runtime_helper_023445d0(&"Daylight");
    _Stack_a0 = (_union_236485)0x456d832;
    il2cpp_runtime_helper_023445d0(&"Intensity");
    _Stack_a0 = (_union_236485)0x456d83e;
    il2cpp_runtime_helper_023445d0(&"PointLight");
    _Stack_a0 = (_union_236485)0x456d84a;
    il2cpp_runtime_helper_023445d0(&"Range");
    g_data_057af049 = '\x01';
  }
  pIVar20 = (Il2CppClass *)0x0;
  pIVar21 = (Il2CppRGCTXData *)0x0;
  _Var22.genericMethod = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
  local_68 = (Il2CppClass *)0x0;
  pIStack_60 = (Il2CppRGCTXData *)0x0;
  local_58.genericMethod = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
  _Var9 = unaff_RBP;
  if (*(char *)&(__this->fields)._dragStart.fields.z == '\0') {
    *(undefined1 *)&(__this->fields)._dragStart.fields.z = 1;
    local_78 = *(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c **)
                (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (local_78 != (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0) {
      pvVar1 = (local_78->_1).image;
      if ((*(byte *)((long)pvVar1 + 0x130) < *(byte *)(TypeInfo_MapEditorGameManager + 0x130)) ||
         (*(long *)(*(long *)((long)pvVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapEditorGameManager + 0x130) * 8) !=
          TypeInfo_MapEditorGameManager)) goto label_0456e1ac;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      _Stack_a0 = (_union_236485)0x456da30;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      _Stack_a0 = (_union_236485)0x456da55;
      pSVar6 = System_Collections_Generic_Dictionary_int__object___get_Values
                         ((System_Collections_Generic_Dictionary_int__object__o *)
                          **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma);
      if (pSVar6 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        _Stack_a0 = (_union_236485)0x456da75;
        System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_48,pSVar6,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
        pIVar20 = (Il2CppClass *)local_48._0_8_;
        pIVar21 = (Il2CppRGCTXData *)local_48._8_8_;
        _Var22 = local_38;
        do {
          do {
            do {
              while( true ) {
                unaff_R12 = _Var22;
                unaff_RBP.genericMethod = &MethodInfo_Boolean_MoveNext;
                _Stack_a0 = (_union_236485)0x456daac;
                __this_11.fields._8_8_ = pIVar21;
                __this_11.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
                __this_11.fields._currentValue = unaff_R12.genericMethod;
                bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                                  (__this_11,(MethodInfo_32443D0 *)&stack0xffffffffffffff68);
                if ((char)bVar5 == '\0') {
                  _Stack_a0 = (_union_236485)0x456e13c;
                  __this_15.fields._8_8_ = pIVar21;
                  __this_15.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
                  __this_15.fields._currentValue = unaff_R12.genericMethod;
                  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                            (__this_15,(MethodInfo_32443C0 *)&stack0xffffffffffffff68);
                  return;
                }
                _Var22 = unaff_R12;
                if (unaff_R12.genericMethod ==
                    (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) goto label_0456e17c;
                if (*(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                     ((long)unaff_R12.genericMethod + 0x18) ==
                    (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0456e181;
                _Stack_a0 = (_union_236485)0x456dadf;
                pUVar7 = (UnityEngine_Object_o *)
                         UnityEngine_GameObject__GetComponent_object_
                                   ((UnityEngine_GameObject_o *)
                                    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                     ((long)unaff_R12.genericMethod + 0x18),MethodInfo_Light_GetComponent_Light);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  _Stack_a0 = (_union_236485)0x456dafa;
                  il2cpp_runtime_helper_02337ed0();
                }
                _Stack_a0 = (_union_236485)0x456db06;
                bVar5 = UnityEngine_Object__op_Inequality
                                  (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') break;
                unaff_R13 = (Il2CppObject *)&stack0xffffffffffffff68;
                if (*(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                     ((long)unaff_R12.genericMethod + 0x18) ==
                    (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0456e190;
                _Stack_a0 = (_union_236485)0x456db27;
                pUVar8 = (UnityEngine_Behaviour_o *)
                         UnityEngine_GameObject__GetComponent_object_
                                   ((UnityEngine_GameObject_o *)
                                    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                     ((long)unaff_R12.genericMethod + 0x18),MethodInfo_Light_GetComponent_Light);
                if (pUVar8 == (UnityEngine_Behaviour_o *)0x0) goto label_0456e195;
                _Stack_a0 = (_union_236485)0x456db3f;
                UnityEngine_Behaviour__set_enabled(pUVar8,1,(MethodInfo *)0x0);
              }
              pIVar2 = ((Il2CppObject *)((long)unaff_R12.genericMethod + 0x20))->klass;
            } while (pIVar2 == (Il2CppClass *)0x0);
            pvVar1 = (pIVar2->_1).image;
          } while ((*(byte *)((long)pvVar1 + 0x130) < *(byte *)(TypeInfo_MapScriptSceneObject + 0x130)) ||
                  (*(long *)(*(long *)((long)pvVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapScriptSceneObject + 0x130) * 8)
                   != TypeInfo_MapScriptSceneObject));
          __this_00 = (pIVar2->_1).fields;
          unaff_R13 = (Il2CppObject *)&stack0xffffffffffffff68;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_0456e1a7;
          _Stack_a0 = (_union_236485)0x456dbb5;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_00,MethodInfo_List_1_T_Enumerator_Map_MapScriptComponent_GetEnumerator);
          local_58 = local_38;
          local_68 = (Il2CppClass *)local_48._0_8_;
          pIStack_60 = (Il2CppRGCTXData *)local_48._8_8_;
          unaff_R13 = (Il2CppObject *)&stack0xffffffffffffff68;
          if (local_78 ==
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0) {
            _Stack_a0 = (_union_236485)0x456ddfb;
            __this_13.fields._8_8_ = pIVar21;
            __this_13.fields._list = (System_Collections_Generic_List_T__o *)pIVar20;
            __this_13.fields._current = _Var22.genericMethod;
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_13,(MethodInfo_321A1D0 *)&local_68);
            if ((char)bVar5 != '\0') {
              _Stack_a0 = (_union_236485)0x456ded9;
              il2cpp_runtime_helper_022b2c90();
              unaff_R13 = (Il2CppObject *)&stack0xffffffffffffff68;
              goto label_0456e1a7;
            }
          }
          else {
            do {
              do {
                while( true ) {
                  _Stack_a0 = (_union_236485)0x456dbf4;
                  __this_12.fields._8_8_ = pIVar21;
                  __this_12.fields._list = (System_Collections_Generic_List_T__o *)pIVar20;
                  __this_12.fields._current = _Var22.genericMethod;
                  bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_12,(MethodInfo_321A1D0 *)&local_68);
                  _Var9 = local_58;
                  unaff_R14 = (undefined8 *)0x6;
                  if ((char)bVar5 == '\0') goto label_0456de0e;
                  if (local_58.genericMethod ==
                      (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
                    _Stack_a0 = (_union_236485)0x456dec5;
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0456e190;
                  }
                  __this_01 = (local_78->_1).this_arg.data;
                  if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    _Stack_a0 = (_union_236485)0x456decf;
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0456e190;
                  }
                  _Stack_a0 = (_union_236485)0x456dc31;
                  unaff_RBP.genericMethod =
                       CustomLogic_CustomLogicEvaluator__GetComponentSettings
                                 (__this_01,
                                  (System_String_o *)
                                  ((Il2CppObject *)((long)local_58.genericMethod + 0x10))->klass,
                                  (System_Collections_Generic_List_string__o *)
                                  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                   ((long)local_58.genericMethod + 0x18),(MethodInfo *)0x0);
                  _Stack_a0 = (_union_236485)0x456dc49;
                  bVar5 = System_String__op_Equality
                                    ((System_String_o *)
                                     ((Il2CppObject *)((long)_Var9.genericMethod + 0x10))->klass,"Daylight",
                                     (MethodInfo *)0x0);
                  if ((char)bVar5 == '\0') break;
                  _Stack_a0 = (_union_236485)0x456dc73;
                  unaff_R13 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                                        (__this,unaff_RBP.genericMethod,"Color",(Il2CppObject *)0x0,
                                         MethodInfo_ColorSetting_TryGetSetting_ColorSetting);
                  _Stack_a0 = (_union_236485)0x456dc97;
                  _Var9.genericMethod =
                       GameManagers_MapEditorGameManager__TryGetSetting_object_
                                 (__this,unaff_RBP.genericMethod,"Intensity",(Il2CppObject *)0x0,MethodInfo_FloatSetting_TryGetSetting_FloatSetting
                                 );
                  if ((unaff_R13 != (Il2CppObject *)0x0) &&
                     (unaff_RBP.genericMethod = _Var9.genericMethod,
                     _Var9.genericMethod !=
                     (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
                    if (*(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                         ((long)unaff_R12.genericMethod + 0x18) ==
                        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                      _Stack_a0 = (_union_236485)0x456dee3;
                      il2cpp_runtime_helper_022b2c90();
                      goto label_0456e19f;
                    }
                    _Stack_a0 = (_union_236485)0x456de67;
                    pUVar10 = (UnityEngine_Light_o *)
                              UnityEngine_GameObject__AddComponent_object_
                                        ((UnityEngine_GameObject_o *)
                                         *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                          ((long)unaff_R12.genericMethod + 0x18),MethodInfo_Light_AddComponent_Light);
                    if (pUVar10 == (UnityEngine_Light_o *)0x0) {
                      _Stack_a0 = (_union_236485)0x456deed;
                      il2cpp_runtime_helper_022b2c90();
                      goto label_0456e19f;
                    }
                    _Stack_a0 = (_union_236485)0x456de7e;
                    UnityEngine_Light__set_type(pUVar10,1,(MethodInfo *)0x0);
                    if (unaff_R13[1].monitor != (Utility_Color255_o *)0x0) {
                      _Stack_a0 = (_union_236485)0x456de91;
                      UVar17 = Utility_Color255__ToColor(unaff_R13[1].monitor,(MethodInfo *)0x0);
                      _Stack_a0 = (_union_236485)0x456de9b;
                      UnityEngine_Light__set_color(pUVar10,UVar17,(MethodInfo *)0x0);
                      _Stack_a0 = (_union_236485)0x456deaa;
                      UnityEngine_Light__set_intensity
                                (pUVar10,*(float *)((long)_Var9.genericMethod + 0x14),(MethodInfo *)0x0);
                      _Stack_a0 = (_union_236485)0x456deb9;
                      UnityEngine_Light__set_shadows(pUVar10,1,(MethodInfo *)0x0);
                      goto label_0456de0e;
                    }
                    _Stack_a0 = (_union_236485)0x456def7;
                    il2cpp_runtime_helper_022b2c90();
                    goto label_0456e19f;
                  }
                }
                _Stack_a0 = (_union_236485)0x456dcd5;
                bVar5 = System_String__op_Equality
                                  ((System_String_o *)
                                   ((Il2CppObject *)((long)_Var9.genericMethod + 0x10))->klass,"PointLight",
                                   (MethodInfo *)0x0);
              } while ((char)bVar5 == '\0');
              _Stack_a0 = (_union_236485)0x456dd03;
              unaff_R13 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                                    (__this,unaff_RBP.genericMethod,"Color",(Il2CppObject *)0x0,
                                     MethodInfo_ColorSetting_TryGetSetting_ColorSetting);
              _Stack_a0 = (_union_236485)0x456dd27;
              local_50 = GameManagers_MapEditorGameManager__TryGetSetting_object_
                                   (__this,unaff_RBP.genericMethod,"Intensity",(Il2CppObject *)0x0,
                                    MethodInfo_FloatSetting_TryGetSetting_FloatSetting);
              _Stack_a0 = (_union_236485)0x456dd46;
              _Var9.genericMethod =
                   GameManagers_MapEditorGameManager__TryGetSetting_object_
                             (__this,unaff_RBP.genericMethod,"Range",(Il2CppObject *)0x0,MethodInfo_FloatSetting_TryGetSetting_FloatSetting);
            } while (((unaff_R13 == (Il2CppObject *)0x0) || (local_50 == (Il2CppObject *)0x0)) ||
                    (unaff_RBP.genericMethod = _Var9.genericMethod,
                    _Var9.genericMethod == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0
                    ));
            if (*(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                 ((long)unaff_R12.genericMethod + 0x18) ==
                (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
              _Stack_a0 = (_union_236485)0x456df01;
              il2cpp_runtime_helper_022b2c90();
              goto label_0456e19f;
            }
            _Stack_a0 = (_union_236485)0x456dd84;
            pUVar10 = (UnityEngine_Light_o *)
                      UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)
                                 *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                  ((long)unaff_R12.genericMethod + 0x18),MethodInfo_Light_AddComponent_Light);
            if (pUVar10 == (UnityEngine_Light_o *)0x0) {
              _Stack_a0 = (_union_236485)0x456df0b;
              il2cpp_runtime_helper_022b2c90();
              goto label_0456e19f;
            }
            _Stack_a0 = (_union_236485)0x456dd9f;
            UnityEngine_Light__set_type(pUVar10,2,(MethodInfo *)0x0);
            if (unaff_R13[1].monitor == (Utility_Color255_o *)0x0) {
              _Stack_a0 = (_union_236485)0x456df15;
              il2cpp_runtime_helper_022b2c90();
              goto label_0456e19f;
            }
            _Stack_a0 = (_union_236485)0x456ddb6;
            UVar17 = Utility_Color255__ToColor(unaff_R13[1].monitor,(MethodInfo *)0x0);
            _Stack_a0 = (_union_236485)0x456ddc0;
            UnityEngine_Light__set_color(pUVar10,UVar17,(MethodInfo *)0x0);
            _Stack_a0 = (_union_236485)0x456ddd4;
            UnityEngine_Light__set_intensity
                      (pUVar10,*(float *)((long)&local_50[1].klass + 4),(MethodInfo *)0x0);
            _Stack_a0 = (_union_236485)0x456dde3;
            UnityEngine_Light__set_range
                      (pUVar10,*(float *)((long)_Var9.genericMethod + 0x14),(MethodInfo *)0x0);
          }
label_0456de0e:
          unaff_R14 = (undefined8 *)0x6;
          _Stack_a0 = (_union_236485)0x456de22;
          __this_14.fields._8_8_ = pIVar21;
          __this_14.fields._list = (System_Collections_Generic_List_T__o *)pIVar20;
          __this_14.fields._current = _Var22.genericMethod;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_14,(MethodInfo_321A1C0 *)&local_68);
        } while( true );
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      _Stack_a0 = (_union_236485)0x456d899;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      _Stack_a0 = (_union_236485)0x456d8be;
      pSVar6 = System_Collections_Generic_Dictionary_int__object___get_Values
                         ((System_Collections_Generic_Dictionary_int__object__o *)
                          **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma);
      if (pSVar6 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        _Stack_a0 = (_union_236485)0x456d8de;
        System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_48,pSVar6,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
        unaff_R14 = &MethodInfo_Boolean_MoveNext;
        pIVar14 = (Il2CppObject *)&MethodInfo_Light_GetComponent_Light;
        unaff_R12.genericMethod = &TypeInfo_Object;
        pIVar20 = (Il2CppClass *)local_48._0_8_;
        pIVar21 = (Il2CppRGCTXData *)local_48._8_8_;
        _Var22 = local_38;
        while( true ) {
          unaff_RBP = _Var22;
          _Stack_a0 = (_union_236485)0x456d91b;
          __this_09.fields._8_8_ = pIVar21;
          __this_09.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
          __this_09.fields._currentValue = unaff_RBP.genericMethod;
          bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                            (__this_09,(MethodInfo_32443D0 *)&stack0xffffffffffffff68);
          if ((char)bVar5 == '\0') {
            _Stack_a0 = (_union_236485)0x456d9aa;
            __this_10.fields._8_8_ = pIVar21;
            __this_10.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
            __this_10.fields._currentValue = unaff_RBP.genericMethod;
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                      (__this_10,(MethodInfo_32443C0 *)&stack0xffffffffffffff68);
            *(undefined1 *)&(__this->fields)._dragStart.fields.z = 0;
            return;
          }
          _Var22 = unaff_RBP;
          if (unaff_RBP.genericMethod == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)
          break;
          if (*(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
               ((long)unaff_RBP.genericMethod + 0x18) ==
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0456e177;
          _Stack_a0 = (_union_236485)0x456d943;
          pUVar7 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)
                              *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                               ((long)unaff_RBP.genericMethod + 0x18),MethodInfo_Light_GetComponent_Light);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            _Stack_a0 = (_union_236485)0x456d958;
            il2cpp_runtime_helper_02337ed0();
          }
          _Stack_a0 = (_union_236485)0x456d964;
          bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pIVar19 = pIVar14;
            if (*(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                 ((long)unaff_RBP.genericMethod + 0x18) ==
                (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0456e186;
            _Stack_a0 = (_union_236485)0x456d97e;
            pUVar8 = (UnityEngine_Behaviour_o *)
                     UnityEngine_GameObject__GetComponent_object_
                               ((UnityEngine_GameObject_o *)
                                *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                 ((long)unaff_RBP.genericMethod + 0x18),MethodInfo_Light_GetComponent_Light);
            if (pUVar8 == (UnityEngine_Behaviour_o *)0x0) goto label_0456e18b;
            _Stack_a0 = (_union_236485)0x456d993;
            UnityEngine_Behaviour__set_enabled(pUVar8,0,(MethodInfo *)0x0);
          }
        }
        _Stack_a0 = (_union_236485)0x456e177;
        il2cpp_runtime_helper_022b2c90();
label_0456e177:
        _Stack_a0 = (_union_236485)0x456e17c;
        il2cpp_runtime_helper_022b2c90();
label_0456e17c:
        _Stack_a0 = (_union_236485)0x456e181;
        il2cpp_runtime_helper_022b2c90();
        pIVar19 = pIVar14;
label_0456e181:
        _Stack_a0 = (_union_236485)0x456e186;
        il2cpp_runtime_helper_022b2c90();
label_0456e186:
        _Stack_a0 = (_union_236485)0x456e18b;
        il2cpp_runtime_helper_022b2c90();
label_0456e18b:
        _Stack_a0 = (_union_236485)0x456e190;
        il2cpp_runtime_helper_022b2c90();
        unaff_R13 = pIVar19;
label_0456e190:
        _Stack_a0 = (_union_236485)0x456e195;
        il2cpp_runtime_helper_022b2c90();
        pIVar15 = unaff_R13;
label_0456e195:
        _Stack_a0 = (_union_236485)0x456e19a;
        il2cpp_runtime_helper_022b2c90();
        _Var9 = unaff_RBP;
        unaff_R13 = pIVar15;
      }
    }
  }
  _Stack_a0 = (_union_236485)0x456e19f;
  il2cpp_runtime_helper_022b2c90();
label_0456e19f:
  _Stack_a0 = (_union_236485)0x456e1a7;
  il2cpp_runtime_helper_022fefe0(_Var9.genericMethod);
  unaff_RBP = _Var9;
label_0456e1a7:
  _Stack_a0 = (_union_236485)0x456e1ac;
  il2cpp_runtime_helper_022b2c90();
label_0456e1ac:
  _Stack_a0 = (_union_236485)0x456e1b6;
  auVar16 = il2cpp_runtime_helper_022b2fd0(local_78);
  uVar12 = auVar16._0_8_;
  if (auVar16._8_4_ == 1) {
    _Stack_a0 = (_union_236485)0x456e22e;
    plVar11 = (long *)__cxa_begin_catch(uVar12);
    lVar3 = *plVar11;
    _Stack_a0 = (_union_236485)0x456e236;
    __cxa_end_catch();
    _Stack_a0 = (_union_236485)0x456e248;
    __this_16.fields._8_8_ = pIVar21;
    __this_16.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
    __this_16.fields._currentValue = _Var22.genericMethod;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              (__this_16,(MethodInfo_32443C0 *)&stack0xffffffffffffff68);
    if (lVar3 == 0) {
      return;
    }
    _Stack_a0 = (_union_236485)0x456e2d4;
    uVar12 = il2cpp_runtime_helper_022fefe0(lVar3);
    _Stack_a0 = (_union_236485)0x456e2e9;
    __this_18.fields._8_8_ = pIVar21;
    __this_18.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
    __this_18.fields._currentValue = _Var22.genericMethod;
    __this_19 = MethodInfo_Void_Dispose;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              (__this_18,(MethodInfo_32443C0 *)&stack0xffffffffffffff68);
    if (lVar3 != 0) {
      _Stack_a0 = (_union_236485)0x456e2fe;
      uVar13 = il2cpp_runtime_helper_022fefe0(lVar3);
      _Stack_a0 = (_union_236485)0x456e306;
      il2cpp_runtime_helper_01f66400(uVar13);
      lStack_c8 = lVar3;
      _Stack_c0 = unaff_R12;
      pIStack_b8 = unaff_R13;
      puStack_b0 = unaff_R14;
      uStack_a8 = uVar12;
      _Stack_a0 = unaff_RBP;
      if (g_data_057af04a == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Int32_GetEnumerator);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Value);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
        il2cpp_runtime_helper_023445d0(&"Physical");
        il2cpp_runtime_helper_023445d0(&"None");
        il2cpp_runtime_helper_023445d0(&"Region");
        g_data_057af04a = '\x01';
      }
      _Var9.genericMethod =
           (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
      pIVar18 = (Il2CppType *)0x0;
      pIVar19 = (Il2CppObject *)0x0;
      local_100.genericMethod =
           (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
      pIStack_f8 = (Il2CppType *)0x0;
      local_f0 = (Il2CppObject *)0x0;
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
           (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
         (pSVar6 = System_Collections_Generic_Dictionary_int__object___get_Values
                             ((System_Collections_Generic_Dictionary_int__object__o *)
                              **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma),
         pSVar6 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
label_0456e739:
        il2cpp_runtime_helper_022b2c90();
        il2cpp_runtime_helper_022fefe0(unaff_R12.genericMethod);
label_0456e746:
        auVar16 = il2cpp_runtime_helper_022b2c90();
        if (auVar16._8_4_ == 1) {
          plVar11 = (long *)__cxa_begin_catch(auVar16._0_8_);
          lVar3 = *plVar11;
          __cxa_end_catch();
          __this_07.fields._8_8_ = pIVar18;
          __this_07.fields._dictionary = _Var9.genericMethod;
          __this_07.fields._currentValue = pIVar19;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                    (__this_07,(MethodInfo_32443C0 *)&stack0xfffffffffffffee0);
          if (lVar3 == 0) {
            return;
          }
          il2cpp_runtime_helper_022fefe0(lVar3);
        }
        __this_08.fields._8_8_ = pIVar18;
        __this_08.fields._dictionary = _Var9.genericMethod;
        __this_08.fields._currentValue = pIVar19;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                  (__this_08,(MethodInfo_32443C0 *)&stack0xfffffffffffffee0);
        _Unwind_Resume(auVar16._0_8_);
      }
      System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&local_e0
                 ,pSVar6,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
      _Var9 = local_e0;
      pIVar18 = pIStack_d8;
      pIVar15 = local_d0;
label_0456e4a0:
      __this_03.fields._8_8_ = pIVar18;
      __this_03.fields._dictionary = _Var9.genericMethod;
      __this_03.fields._currentValue = pIVar15;
      bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                        (__this_03,(MethodInfo_32443D0 *)&stack0xfffffffffffffee0);
      if ((char)bVar5 == '\0') {
        __this_06.fields._8_8_ = pIVar18;
        __this_06.fields._dictionary = _Var9.genericMethod;
        __this_06.fields._currentValue = pIVar15;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                  (__this_06,(MethodInfo_32443C0 *)&stack0xfffffffffffffee0);
        return;
      }
      if (pIVar15 != (Il2CppObject *)0x0) goto code_r0x0456e4c8;
      il2cpp_runtime_helper_022b2c90();
      pIVar19 = pIVar15;
      goto label_0456e72f;
    }
  }
  else {
    _Stack_a0 = (_union_236485)0x456e26c;
    __this_17.fields._8_8_ = pIVar21;
    __this_17.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
    __this_17.fields._currentValue = _Var22.genericMethod;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              (__this_17,(MethodInfo_32443C0 *)&stack0xffffffffffffff68);
  }
  _Stack_a0 = (_union_236485)0x456e2f6;
  _Unwind_Resume(uVar12);
code_r0x0456e4c8:
  unaff_R12 = (_union_236485)((_union_236485 *)(pIVar15 + 2))->genericMethod;
  if (unaff_R12.genericMethod == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)
  goto label_0456e4a0;
  if ((*(byte *)(*(long *)unaff_R12.genericMethod + 0x130) < *(byte *)(TypeInfo_MapScriptSceneObject + 0x130)) ||
     (*(long *)(*(long *)(*(long *)unaff_R12.genericMethod + 200) + -8 +
               (ulong)*(byte *)(TypeInfo_MapScriptSceneObject + 0x130) * 8) != TypeInfo_MapScriptSceneObject)) goto label_0456e4a0;
  pIVar19 = pIVar15;
  if (__this_19 == (Settings_HashSetSetting_int__o *)0x0) {
label_0456e72f:
    il2cpp_runtime_helper_022b2c90();
    goto label_0456e734;
  }
  bVar5 = Settings_HashSetSetting_int___Contains(__this_19,0,MethodInfo_Boolean_Contains);
  value = 1;
  if ((char)bVar5 == '\0') {
    __this_02 = (System_Collections_Generic_HashSet_int__o *)(__this_19->fields)._value;
    if (__this_02 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      System_Collections_Generic_HashSet_int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_e0,__this_02,MethodInfo_HashSet_1_T_Enumerator_System_Int32_GetEnumerator);
      local_f0 = local_d0;
      local_100 = local_e0;
      pIStack_f8 = pIStack_d8;
switchD_0456e5b2_default:
      __this_04.fields._8_8_ = pIVar18;
      __this_04.fields._set = _Var9.genericMethod;
      __this_04.fields._current = pIVar19;
      bVar5 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                        (__this_04,(MethodInfo_3214F50 *)&local_100);
      if ((char)bVar5 == '\0') {
        value = 0;
        goto label_0456e64f;
      }
      switch(local_f0._0_4_) {
      case 1:
        cVar4 = *(char *)((long)unaff_R12.genericMethod + 0x28);
        break;
      case 2:
        cVar4 = *(char *)((long)unaff_R12.genericMethod + 0x28);
        goto joined_r0x0456e61e;
      case 3:
        cVar4 = *(char *)((long)unaff_R12.genericMethod + 0x2a);
        break;
      case 4:
        cVar4 = *(char *)((long)unaff_R12.genericMethod + 0x2a);
        goto joined_r0x0456e61e;
      case 5:
        cVar4 = *(char *)((long)unaff_R12.genericMethod + 0x29);
        break;
      case 6:
        cVar4 = *(char *)((long)unaff_R12.genericMethod + 0x29);
        goto joined_r0x0456e61e;
      case 7:
        bVar5 = System_String__op_Equality
                          ((System_String_o *)((Il2CppObject *)((long)unaff_R12.genericMethod + 0x60))->klass,
                           "Physical",(MethodInfo *)0x0);
        cVar4 = (char)bVar5;
        break;
      case 8:
        bVar5 = System_String__op_Equality
                          ((System_String_o *)((Il2CppObject *)((long)unaff_R12.genericMethod + 0x60))->klass,
                           "Region",(MethodInfo *)0x0);
        cVar4 = (char)bVar5;
        break;
      case 9:
        bVar5 = System_String__op_Equality
                          ((System_String_o *)((Il2CppObject *)((long)unaff_R12.genericMethod + 0x60))->klass,
                           "None",(MethodInfo *)0x0);
        cVar4 = (char)bVar5;
        break;
      case 10:
        cVar4 = *(char *)((long)unaff_R12.genericMethod + 0x2b);
        break;
      case 0xb:
        cVar4 = *(char *)((long)unaff_R12.genericMethod + 0x2b);
joined_r0x0456e61e:
        if (cVar4 == '\0') goto label_0456e649;
      default:
        goto switchD_0456e5b2_default;
      }
      if (cVar4 != '\0') goto label_0456e649;
      goto switchD_0456e5b2_default;
    }
    goto label_0456e746;
  }
label_0456e67f:
  if (pIVar15[1].monitor != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pIVar15[1].monitor,value,(MethodInfo *)0x0);
    pIVar15 = pIVar19;
    goto label_0456e4a0;
  }
label_0456e734:
  il2cpp_runtime_helper_022b2c90();
  goto label_0456e739;
label_0456e649:
  value = 1;
label_0456e64f:
  unaff_R12.genericMethod = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
  __this_05.fields._8_8_ = pIVar18;
  __this_05.fields._set = _Var9.genericMethod;
  __this_05.fields._current = pIVar19;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(__this_05,(MethodInfo_3214F40 *)&local_100);
  goto label_0456e67f;
}


// GameManagers.MapEditorGameManager$$SetLayerVisibility
// il2cpp: void GameManagers_MapEditorGameManager__SetLayerVisibility (GameManagers_MapEditorGameManager_o* __this, Settings_HashSetSetting_int__o* selectedLayers, const MethodInfo* method);
// 0x456e310

void GameManagers_MapEditorGameManager__SetLayerVisibility
               (GameManagers_MapEditorGameManager_o *__this,Settings_HashSetSetting_int__o *selectedLayers,
               MethodInfo *method)

{
  void *pvVar1;
  System_Collections_Generic_HashSet_int__o *__this_00;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_06;
  char cVar3;
  bool_conflict bVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_07;
  long *plVar5;
  Il2CppClass *unaff_R12;
  bool_conflict value;
  undefined1 auVar6 [12];
  _union_236485 _Var7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  _union_236485 _Stack_68;
  Il2CppType *pIStack_60;
  Il2CppObject *pIStack_58;
  _union_236485 _Stack_48;
  Il2CppType *pIStack_40;
  Il2CppObject *pIStack_38;
  
  if (g_data_057af04a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_Int32_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"Physical");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Region");
    g_data_057af04a = '\x01';
  }
  _Var7.genericMethod =
       (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  _Stack_68.genericMethod =
       (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  pIStack_58 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
       (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
     (__this_07 = System_Collections_Generic_Dictionary_int__object___get_Values
                            ((System_Collections_Generic_Dictionary_int__object__o *)
                             **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_Int32_Ma),
     __this_07 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
label_0456e739:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_R12);
label_0456e746:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ == 1) {
      plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar2 = *plVar5;
      __cxa_end_catch();
      __this_05.fields._8_8_ = pIVar8;
      __this_05.fields._dictionary = _Var7.genericMethod;
      __this_05.fields._currentValue = pIVar9;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                (__this_05,(MethodInfo_32443C0 *)&stack0xffffffffffffff78);
      if (lVar2 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_06.fields._8_8_ = pIVar8;
    __this_06.fields._dictionary = _Var7.genericMethod;
    __this_06.fields._currentValue = pIVar9;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              (__this_06,(MethodInfo_32443C0 *)&stack0xffffffffffffff78);
    _Unwind_Resume(auVar6._0_8_);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&_Stack_48,
             __this_07,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
  _Var7 = _Stack_48;
  pIVar8 = pIStack_40;
  pIVar10 = pIStack_38;
label_0456e4a0:
  __this_01.fields._8_8_ = pIVar8;
  __this_01.fields._dictionary = _Var7.genericMethod;
  __this_01.fields._currentValue = pIVar10;
  bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                    (__this_01,(MethodInfo_32443D0 *)&stack0xffffffffffffff78);
  if ((char)bVar4 == '\0') {
    __this_04.fields._8_8_ = pIVar8;
    __this_04.fields._dictionary = _Var7.genericMethod;
    __this_04.fields._currentValue = pIVar10;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              (__this_04,(MethodInfo_32443C0 *)&stack0xffffffffffffff78);
    return;
  }
  if (pIVar10 != (Il2CppObject *)0x0) goto code_r0x0456e4c8;
  il2cpp_runtime_helper_022b2c90();
  pIVar9 = pIVar10;
  goto label_0456e72f;
code_r0x0456e4c8:
  unaff_R12 = pIVar10[2].klass;
  if (unaff_R12 == (Il2CppClass *)0x0) goto label_0456e4a0;
  pvVar1 = (unaff_R12->_1).image;
  if ((*(byte *)((long)pvVar1 + 0x130) < *(byte *)(TypeInfo_MapScriptSceneObject + 0x130)) ||
     (*(long *)(*(long *)((long)pvVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapScriptSceneObject + 0x130) * 8) !=
      TypeInfo_MapScriptSceneObject)) goto label_0456e4a0;
  pIVar9 = pIVar10;
  if (selectedLayers == (Settings_HashSetSetting_int__o *)0x0) {
label_0456e72f:
    il2cpp_runtime_helper_022b2c90();
    goto label_0456e734;
  }
  bVar4 = Settings_HashSetSetting_int___Contains(selectedLayers,0,MethodInfo_Boolean_Contains);
  value = 1;
  if ((char)bVar4 == '\0') {
    __this_00 = (System_Collections_Generic_HashSet_int__o *)(selectedLayers->fields)._value;
    if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      System_Collections_Generic_HashSet_int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)&_Stack_48,__this_00,MethodInfo_HashSet_1_T_Enumerator_System_Int32_GetEnumerator);
      pIStack_58 = pIStack_38;
      _Stack_68 = _Stack_48;
      pIStack_60 = pIStack_40;
switchD_0456e5b2_default:
      __this_02.fields._8_8_ = pIVar8;
      __this_02.fields._set = _Var7.genericMethod;
      __this_02.fields._current = pIVar9;
      bVar4 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                        (__this_02,(MethodInfo_3214F50 *)&_Stack_68);
      if ((char)bVar4 == '\0') {
        value = 0;
        goto label_0456e64f;
      }
      switch(pIStack_58._0_4_) {
      case 1:
        cVar3 = (char)(unaff_R12->_1).byval_arg.bits;
        break;
      case 2:
        cVar3 = (char)(unaff_R12->_1).byval_arg.bits;
        goto joined_r0x0456e61e;
      case 3:
        cVar3 = *(char *)((long)&(unaff_R12->_1).byval_arg.bits + 2);
        break;
      case 4:
        cVar3 = *(char *)((long)&(unaff_R12->_1).byval_arg.bits + 2);
        goto joined_r0x0456e61e;
      case 5:
        cVar3 = *(char *)((long)&(unaff_R12->_1).byval_arg.bits + 1);
        break;
      case 6:
        cVar3 = *(char *)((long)&(unaff_R12->_1).byval_arg.bits + 1);
        goto joined_r0x0456e61e;
      case 7:
        bVar4 = System_String__op_Equality((unaff_R12->_1).generic_class,"Physical",(MethodInfo *)0x0);
        cVar3 = (char)bVar4;
        break;
      case 8:
        bVar4 = System_String__op_Equality((unaff_R12->_1).generic_class,"Region",(MethodInfo *)0x0);
        cVar3 = (char)bVar4;
        break;
      case 9:
        bVar4 = System_String__op_Equality((unaff_R12->_1).generic_class,"None",(MethodInfo *)0x0);
        cVar3 = (char)bVar4;
        break;
      case 10:
        cVar3 = *(char *)((long)&(unaff_R12->_1).byval_arg.bits + 3);
        break;
      case 0xb:
        cVar3 = *(char *)((long)&(unaff_R12->_1).byval_arg.bits + 3);
joined_r0x0456e61e:
        if (cVar3 == '\0') goto label_0456e649;
      default:
        goto switchD_0456e5b2_default;
      }
      if (cVar3 != '\0') goto label_0456e649;
      goto switchD_0456e5b2_default;
    }
    goto label_0456e746;
  }
label_0456e67f:
  if (pIVar10[1].monitor != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pIVar10[1].monitor,value,(MethodInfo *)0x0);
    pIVar10 = pIVar9;
    goto label_0456e4a0;
  }
label_0456e734:
  il2cpp_runtime_helper_022b2c90();
  goto label_0456e739;
label_0456e649:
  value = 1;
label_0456e64f:
  unaff_R12 = (Il2CppClass *)0x0;
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._set = _Var7.genericMethod;
  __this_03.fields._current = pIVar9;
  System_Collections_Generic_HashSet_Enumerator_int___Dispose(__this_03,(MethodInfo_3214F40 *)&_Stack_68);
  goto label_0456e67f;
}


// GameManagers.MapEditorGameManager$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___ctor (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x456e7e0

void GameManagers_MapEditorGameManager___ctor(GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  MapEditor_MapEditorBrush_o *__this_01;
  
  if (g_data_057af04b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_MapObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_MapEditor_BaseCommand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseCommand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorBrush);
    g_data_057af04b = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_MapObject);
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_Map_MapObject);
  (__this->fields).SelectedObjects = (System_Collections_Generic_HashSet_MapObject__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SelectedObjects,__this_00);
  pSVar1 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseCommand);
  System_Collections_Generic_List_object____ctor(pSVar1,MethodInfo_List_1_MapEditor_BaseCommand);
  (__this->fields)._undoCommands = (System_Collections_Generic_List_BaseCommand__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._undoCommands,pSVar1);
  pSVar1 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseCommand);
  System_Collections_Generic_List_object____ctor(pSVar1,MethodInfo_List_1_MapEditor_BaseCommand);
  (__this->fields)._redoCommands = (System_Collections_Generic_List_BaseCommand__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._redoCommands,pSVar1);
  (__this->fields)._clipboard = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._clipboard);
  __this_01 = (MapEditor_MapEditorBrush_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapEditorBrush);
  MapEditor_MapEditorBrush___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).Brush = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Brush);
  GameManagers_BaseGameManager___ctor((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  return;
}


