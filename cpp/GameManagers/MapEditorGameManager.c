// Type: GameManagers.MapEditorGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/MapEditorGameManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/MapEditorGameManager.cs  [CHANGED since prior version]
// --------------------------------

// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__35___ctor (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4237ae0

void GameManagers_MapEditorGameManager_<WaitAndAutosave>d__35___ctor
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$System.IDisposable.Dispose
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_IDisposable_Dispose (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, const MethodInfo* method);
// 0x4239f10

void GameManagers_MapEditorGameManager_<WaitAndAutosave>d__35__System_IDisposable_Dispose
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,
               MethodInfo *method)

{
  return;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$MoveNext
// il2cpp: bool GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__MoveNext (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, const MethodInfo* method);
// 0x4239f20

bool_conflict
GameManagers_MapEditorGameManager_<WaitAndAutosave>d__35__MoveNext
          (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,MethodInfo *method)

{
  int iVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorTopPanel_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar4;
  
  if (DAT_0570515d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_0570515d = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pGVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
        (pUVar3 = (pGVar2->fields)._menu, pUVar3 == (UI_MapEditorMenu_o *)0x0)) ||
       (__this_00 = (pUVar3->fields)._topPanel, __this_00 == (UI_MapEditorTopPanel_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UI_MapEditorTopPanel__Autosave(__this_00,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
  }
  __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_01,900.0,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_01;
  uVar4 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, const MethodInfo* method);
// 0x4239fe0

Il2CppObject *
GameManagers_MapEditorGameManager_<WaitAndAutosave>d__35__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_Collections_IEnumerator_Reset (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, const MethodInfo* method);
// 0x4239ff0

void GameManagers_MapEditorGameManager_<WaitAndAutosave>d__35__System_Collections_IEnumerator_Reset
               (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// GameManagers.MapEditorGameManager.<WaitAndAutosave>d__35$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__WaitAndAutosave_d__35__System_Collections_IEnumerator_get_Current (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o* __this, const MethodInfo* method);
// 0x423a030

Il2CppObject *
GameManagers_MapEditorGameManager_<WaitAndAutosave>d__35__System_Collections_IEnumerator_get_Current
          (GameManagers_MapEditorGameManager__WaitAndAutosave_d__35_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.MapEditorGameManager$$ShowAddObject
// il2cpp: void GameManagers_MapEditorGameManager__ShowAddObject (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4234c30

void GameManagers_MapEditorGameManager__ShowAddObject
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorAddObjectPopup_o *pUVar2;
  Il2CppMethodPointer vtable_dispatch_00;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields)._menu;
  if ((pUVar1 == (UI_MapEditorMenu_o *)0x0) ||
     (pUVar2 = (pUVar1->fields).AddObjectPopup, pUVar2 == (UI_MapEditorAddObjectPopup_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((char)(pUVar2->fields).IsActive != '\0') {
    vtable_dispatch_00 = (pUVar2->klass->vtable)._22_Hide.methodPtr;
    (*vtable_dispatch_00)
              (pUVar2,(pUVar2->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch_00);
    return;
  }
  if ((char)(pUVar1->fields).IsMouseUI != '\0') {
    return;
  }
  vtable_dispatch_00 = (pUVar2->klass->vtable)._21_Show.methodPtr;
  (*vtable_dispatch_00)
            (pUVar2,(pUVar2->klass->vtable)._21_Show.method,in_RDX,vtable_dispatch_00);
  return;
}


// GameManagers.MapEditorGameManager$$AddObject
// il2cpp: void GameManagers_MapEditorGameManager__AddObject (GameManagers_MapEditorGameManager_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4234c90

void GameManagers_MapEditorGameManager__AddObject
               (GameManagers_MapEditorGameManager_o *__this,System_String_o *name,MethodInfo *method
               )

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  long *plVar7;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar8;
  Map_MapScriptBaseObject_array *pMVar9;
  System_Collections_Generic_HashSet_object__o *__this_01;
  UI_MapEditorMenu_o *__this_02;
  undefined1 auVar10 [16];
  double dVar11;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_03;
  bool_conflict bVar12;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  Map_MapScriptObjects_o *__this_04;
  Map_MapScriptSceneObject_o *__this_05;
  System_String_array *pSVar13;
  System_Int32_array *layers;
  MethodInfo *method_00;
  Il2CppObject *item;
  MethodInfo *pMVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dd_03;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o UVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
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
  
  if (DAT_05705145 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AddObjectCommand);
    il2cpp_init_method_metadata(&TypeInfo_BuiltinMapPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObjectShader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptObjects);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"Custom/");
    DAT_05705145 = '\x01';
  }
  fStack_48 = 0.0;
  uStack_44 = 0;
  pIStack_58 = (InvokerMethod)0x0;
  uStack_50 = 0;
  local_4c = 0.0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  __this_04 = (Map_MapScriptObjects_o *)il2cpp_runtime_glue(TypeInfo_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_04,(MethodInfo *)0x0);
  if (name == (System_String_o *)0x0) goto LAB_04235705;
  bVar12 = System_String__StartsWith(name,"Custom/",(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_04235705;
    __this_05 = (Map_MapScriptSceneObject_o *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          (__this_00,(Il2CppObject *)name,MethodInfo_MapScriptBaseObject_get_Item);
    if (__this_05 != (Map_MapScriptSceneObject_o *)0x0) {
      bVar2 = (TypeInfo_MapScriptSceneObject->_2).naturalAligment;
      if (((__this_05->klass->_2).naturalAligment < bVar2) ||
         ((__this_05->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapScriptSceneObject)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_05);
      }
    }
  }
  else {
    __this_05 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(__this_05,(MethodInfo *)0x0);
    if (__this_05 == (Map_MapScriptSceneObject_o *)0x0) goto LAB_04235705;
    (__this_05->fields).Asset = name;
    il2cpp_runtime_glue(&(__this_05->fields).Asset,name);
    pSVar13 = System_String__Split(name,0x2f,0,(MethodInfo *)0x0);
    if (pSVar13 == (System_String_array *)0x0) goto LAB_04235705;
    if ((uint)pSVar13->max_length < 3) goto LAB_0423570f;
    *(System_String_o **)&(__this_05->fields).Visible = pSVar13->m_Items[2];
    il2cpp_runtime_glue(&(__this_05->fields).Visible);
    pSVar4 = (__this_05->fields).PhysicsMaterial;
    if (*(int *)(TypeInfo_MapObjectShader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar4 == (System_String_o *)0x0) goto LAB_04235705;
    pSVar4->fields = *(System_String_Fields *)(*(long *)(TypeInfo_MapObjectShader + 0xb8) + 8);
    il2cpp_runtime_glue(&pSVar4->fields);
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x28), lVar5 == 0)) ||
     (pUVar6 = *(UnityEngine_Transform_o **)(lVar5 + 0x10), pUVar6 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_04235705;
  UVar25 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
  fVar15 = UVar25.fields.z;
  lVar5 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x28), lVar5 == 0)) ||
     (pUVar6 = *(UnityEngine_Transform_o **)(lVar5 + 0x10), pUVar6 == (UnityEngine_Transform_o *)0x0
     )) goto LAB_04235705;
  UVar26 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x68) == 0)) || (*(long *)(lVar5 + 0x70) == 0))
  goto LAB_04235705;
  fVar24 = *(float *)(*(long *)(lVar5 + 0x68) + 0x14);
  local_c8 = UVar25.fields.x;
  fStack_c4 = UVar25.fields.y;
  local_c8 = local_c8 + UVar26.fields.x * fVar24;
  fStack_c4 = fStack_c4 + UVar26.fields.y * fVar24;
  uVar21 = CONCAT44(fStack_c4,local_c8);
  fVar15 = fVar15 + UVar26.fields.z * fVar24;
  if (*(char *)(*(long *)(lVar5 + 0x70) + 0x11) != '\0') {
    lVar5 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x28), lVar5 == 0)) ||
       (pUVar6 = *(UnityEngine_Transform_o **)(lVar5 + 0x10),
       pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_04235705;
    UVar25 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    lVar5 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_04235705;
    local_78._8_4_ = extraout_XMM0_Dc_01;
    local_78._0_8_ = UVar25.fields._0_8_;
    local_78._12_4_ = extraout_XMM0_Dd_01;
    pUVar6 = *(UnityEngine_Transform_o **)(lVar5 + 0x10);
    local_94 = UVar25.fields.z;
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_04235705;
    UVar25 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    fVar16 = UVar25.fields.x;
    fVar18 = UVar25.fields.y;
    fVar17 = extraout_XMM0_Dc_02;
    fVar24 = UVar25.fields.z;
    if (DAT_056fde20 == '\0') {
      local_a8._0_4_ = UVar25.fields.z;
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      fVar24 = (float)local_a8._0_4_;
      in_stack_ffffffffffffff2c = fVar18;
      in_stack_ffffffffffffff30 = fVar17;
    }
    auVar22._0_4_ = local_c8 - fVar16;
    auVar22._4_4_ = fStack_c4 - fVar18;
    auVar22._8_4_ = (extraout_XMM0_Dc + extraout_XMM0_Dc_00 * 0.0) - fVar17;
    auVar22._12_4_ = (extraout_XMM0_Dd + extraout_XMM0_Dd_00 * 0.0) - extraout_XMM0_Dd_02;
    fVar24 = fVar15 - fVar24;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      local_a8 = auVar22;
      il2cpp_init_class();
      auVar22 = local_a8;
    }
    uVar19 = 0;
    uVar20 = 0;
    fVar17 = fVar24 * fVar24 + auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_;
    if (fVar17 < 0.0) {
      local_a8 = auVar22;
      fVar17 = sqrtf(fVar17);
      uVar19 = extraout_XMM0_Dc_03;
      uVar20 = extraout_XMM0_Dd_03;
      auVar22 = local_a8;
      if (fVar17 <= 1e-05) goto LAB_0423513e;
LAB_0423519a:
      fVar24 = fVar24 / fVar17;
      auVar10._4_4_ = fVar17;
      auVar10._0_4_ = fVar17;
      auVar10._8_4_ = uVar19;
      auVar10._12_4_ = uVar20;
      auVar23 = divps(auVar22,auVar10);
    }
    else {
      fVar17 = SQRT(fVar17);
      if (1e-05 < fVar17) goto LAB_0423519a;
LAB_0423513e:
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      auVar23._8_8_ = 0;
      auVar23._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar24 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x68), local_a8 = auVar23, lVar5 == 0))
    goto LAB_04235705;
    local_98 = *(float *)(lVar5 + 0x14);
    layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (layers == (System_Int32_array *)0x0) goto LAB_04235705;
    if ((int)layers->max_length == 0) {
LAB_0423570f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
    mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
    layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    auVar22 = local_78;
    local_90 = local_78._0_8_;
    fStack_88 = local_94;
    uStack_84 = local_a8._0_4_;
    uStack_80 = local_a8._4_4_;
    uVar29 = CONCAT44(fVar24,uStack_80);
    uVar28 = CONCAT44(uStack_84,local_94);
    ray.fields.m_Origin.fields.z = local_94;
    ray.fields.m_Direction.fields.x = (float)uStack_84;
    ray.fields.m_Origin.fields.x = (float)local_78._0_4_;
    ray.fields.m_Origin.fields.y = (float)local_78._4_4_;
    ray.fields.m_Direction.fields.y = (float)uStack_80;
    ray.fields.m_Direction.fields.z = fVar24;
    uVar27 = local_78._0_8_;
    fStack_7c = fVar24;
    local_78 = auVar22;
    bVar12 = UnityEngine_Physics__Raycast
                       (ray,(UnityEngine_RaycastHit_o *)&local_68,local_98,layerMask,
                        (MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      __this_03.fields.m_Point.fields.z = (float)(int)uVar28;
      __this_03.fields.m_Normal.fields.x = (float)(int)((ulong)uVar28 >> 0x20);
      __this_03.fields.m_Point.fields.x = (float)(int)uVar27;
      __this_03.fields.m_Point.fields.y = (float)(int)((ulong)uVar27 >> 0x20);
      __this_03.fields.m_Normal.fields.y = (float)(int)uVar29;
      __this_03.fields.m_Normal.fields.z = (float)(int)((ulong)uVar29 >> 0x20);
      __this_03.fields.m_FaceID = in_stack_ffffffffffffff20;
      __this_03.fields.m_Distance = fVar15;
      __this_03.fields.m_UV.fields.x = fVar24;
      __this_03.fields.m_UV.fields.y = in_stack_ffffffffffffff2c;
      __this_03.fields.m_Collider = (int32_t)in_stack_ffffffffffffff30;
      UVar25 = UnityEngine_RaycastHit__get_point(__this_03,(MethodInfo *)&local_68);
      fVar15 = UVar25.fields.z;
      uVar21 = UVar25.fields._0_8_;
    }
  }
  plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar7 != (long *)0x0) {
    if ((*(byte *)(*plVar7 + 0x130) < *(byte *)&TypeInfo_MapEditorGameManager[3].return_type) ||
       (*(MethodInfo **)
         (*(long *)(*plVar7 + 200) + -8 + (ulong)*(byte *)&TypeInfo_MapEditorGameManager[3].return_type * 8) !=
        TypeInfo_MapEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if (*(char *)((long)plVar7 + 0x4c) != '\0') {
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x50), lVar5 == 0)) goto LAB_04235705;
      fVar24 = *(float *)(lVar5 + 0x14);
      local_a8._0_4_ = fVar24;
      fVar24 = (float)uVar21 / fVar24;
      pMVar14 = TypeInfo_MapEditorGameManager;
      dVar11 = modf((double)fVar24,&local_b0,TypeInfo_MapEditorGameManager);
      if (0.0 <= fVar24) {
        if ((dVar11 != 0.5) || (NAN(dVar11))) {
          fVar24 = floorf(fVar24 + 0.5);
        }
        else {
          fVar24 = (float)local_b0;
          if (((long)local_b0 & 1U) != 0) {
            fVar24 = fVar24 + 1.0;
          }
        }
      }
      else if ((dVar11 != -0.5) || (NAN(dVar11))) {
        fVar24 = ceilf(fVar24 + -0.5);
      }
      else {
        fVar24 = (float)local_b0;
        if (((long)local_b0 & 1U) != 0) {
          fVar24 = fVar24 + -1.0;
        }
      }
      fVar17 = (float)((ulong)uVar21 >> 0x20) / (float)local_a8._0_4_;
      dVar11 = modf((double)fVar17,&local_b0,pMVar14);
      if (0.0 <= fVar17) {
        if ((dVar11 != 0.5) || (NAN(dVar11))) {
          fVar17 = floorf(fVar17 + 0.5);
        }
        else {
          fVar17 = (float)local_b0;
          if (((long)local_b0 & 1U) != 0) {
            fVar17 = fVar17 + 1.0;
          }
        }
      }
      else if ((dVar11 != -0.5) || (NAN(dVar11))) {
        fVar17 = ceilf(fVar17 + -0.5);
      }
      else {
        fVar17 = (float)local_b0;
        if (((long)local_b0 & 1U) != 0) {
          fVar17 = fVar17 + -1.0;
        }
      }
      fVar24 = fVar24 * (float)local_a8._0_4_;
      fVar17 = fVar17 * (float)local_a8._0_4_;
      fVar15 = fVar15 / (float)local_a8._0_4_;
      dVar11 = modf((double)fVar15,&local_b0,pMVar14);
      if (0.0 <= fVar15) {
        if ((dVar11 != 0.5) || (NAN(dVar11))) {
          fVar15 = floorf(fVar15 + 0.5);
        }
        else {
          fVar15 = (float)local_b0;
          if (((long)local_b0 & 1U) != 0) {
            fVar15 = fVar15 + 1.0;
          }
        }
      }
      else if ((dVar11 != -0.5) || (NAN(dVar11))) {
        fVar15 = ceilf(fVar15 + -0.5);
      }
      else {
        fVar15 = (float)local_b0;
        if (((long)local_b0 & 1U) != 0) {
          fVar15 = fVar15 + -1.0;
        }
      }
      fVar15 = (float)local_a8._0_4_ * fVar15;
      uVar21 = CONCAT44(fVar17,fVar24);
    }
    if (((__this_05 != (Map_MapScriptSceneObject_o *)0x0) &&
        (UVar25.fields.z = fVar15, UVar25.fields.x = (float)(int)uVar21,
        UVar25.fields.y = (float)(int)((ulong)uVar21 >> 0x20),
        Map_MapScriptBaseObject__SetPosition
                  ((Map_MapScriptBaseObject_o *)__this_05,UVar25,(MethodInfo *)0x0),
        pMVar14 = MethodInfo_Void_Add, __this_04 != (Map_MapScriptObjects_o *)0x0)) &&
       (pSVar8 = (__this_04->fields).Objects,
       pSVar8 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pMVar9 = (pSVar8->fields)._items;
      if (pMVar9 != (Map_MapScriptBaseObject_array *)0x0) {
        uVar3 = (pSVar8->fields)._size;
        if (uVar3 < (uint)pMVar9->max_length) {
          pMVar14 = (MethodInfo *)(ulong)(uVar3 + 1);
          (pSVar8->fields)._size = uVar3 + 1;
          pMVar9->m_Items[(int)uVar3] = (Map_MapScriptBaseObject_o *)__this_05;
          il2cpp_runtime_glue(pMVar9->m_Items + (int)uVar3,__this_05);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)__this_05,
                     (MethodInfo_35A7350 *)pMVar14->klass->rgctx_data[0xe].method);
        }
        pSVar8 = (__this_04->fields).Objects;
        method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_AddObjectCommand);
        MapEditor_AddObjectCommand___ctor
                  ((MapEditor_AddObjectCommand_o *)method_00,pSVar8,(MethodInfo *)0x0);
        GameManagers_MapEditorGameManager__NewCommand
                  (__this,(MapEditor_BaseCommand_o *)method_00,1,pMVar14);
        GameManagers_MapEditorGameManager__DeselectAll(__this,method_00);
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if ((System_Collections_Generic_Dictionary_int__object__o *)
            **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
            (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          item = System_Collections_Generic_Dictionary<int__object>__get_Item
                           ((System_Collections_Generic_Dictionary_int__object__o *)
                            **(undefined8 **)(TypeInfo_MapLoader + 0xb8),(__this->fields)._currentObjectId
                            ,MethodInfo_MapObject_get_Item);
          if (DAT_0570514e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
            DAT_0570514e = '\x01';
          }
          __this_01 = (System_Collections_Generic_HashSet_object__o *)
                      (__this->fields).SelectedObjects;
          if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet<object>__Add(__this_01,item,MethodInfo_Boolean_Add);
            __this_02 = (__this->fields)._menu;
            if (__this_02 != (UI_MapEditorMenu_o *)0x0) {
              pMVar14 = (MethodInfo *)0x0;
              UI_MapEditorMenu__SyncHierarchyPanel(__this_02,(MethodInfo *)0x0);
              GameManagers_MapEditorGameManager__OnSelectionChange(__this,pMVar14);
              return;
            }
          }
        }
      }
    }
  }
LAB_04235705:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$Undo
// il2cpp: void GameManagers_MapEditorGameManager__Undo (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4235ea0

void GameManagers_MapEditorGameManager__Undo
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Object_array *pSVar7;
  Il2CppClass *pIVar8;
  UI_MapEditorMenu_o *__this_00;
  long lVar9;
  Il2CppObject *item;
  MethodInfo *method_00;
  
  if (DAT_05705146 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AddObjectCommand);
    il2cpp_init_method_metadata(&TypeInfo_DeleteObjectCommand);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_BaseCommand_get_Item);
    DAT_05705146 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
  if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar4 = (pSVar6->fields)._size;
    if (iVar4 == 0) {
      return;
    }
    item = System_Collections_Generic_List<object>__get_Item(pSVar6,iVar4 + -1,MethodInfo_BaseCommand_get_Item);
    if (item != (Il2CppObject *)0x0) {
      (*item->klass->vtable[5].methodPtr)(item,item->klass->vtable[5].method);
      lVar9 = MethodInfo_Void_Add;
      pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (pSVar6->fields)._items;
        if (pSVar7 != (System_Object_array *)0x0) {
          uVar5 = (pSVar6->fields)._size;
          if (uVar5 < (uint)pSVar7->max_length) {
            (pSVar6->fields)._size = uVar5 + 1;
            pSVar7->m_Items[(int)uVar5] = item;
            il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar5,item);
            pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar6,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
          }
          if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
            System_Collections_Generic_List<object>__RemoveAt
                      (pSVar6,(pSVar6->fields)._size + -1,MethodInfo_Void_RemoveAt);
            pIVar8 = item->klass;
            bVar2 = (pIVar8->_2).naturalAligment;
            bVar3 = (TypeInfo_AddObjectCommand->_2).naturalAligment;
            if (((bVar3 <= bVar2) && ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_AddObjectCommand))
               || ((bVar3 = (TypeInfo_DeleteObjectCommand->_2).naturalAligment,
                   method_00 = (MethodInfo *)(ulong)bVar3, bVar3 <= bVar2 &&
                   ((pIVar8->_2).typeHierarchy[(long)&method_00[-1].field_0x57] == TypeInfo_DeleteObjectCommand))))
            {
              __this_00 = (__this->fields)._menu;
              if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto LAB_04236053;
              method_00 = (MethodInfo *)0x0;
              UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
            }
            GameManagers_MapEditorGameManager__OnSelectionChange(__this,method_00);
            return;
          }
        }
      }
    }
  }
LAB_04236053:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$Redo
// il2cpp: void GameManagers_MapEditorGameManager__Redo (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4236060

void GameManagers_MapEditorGameManager__Redo
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  System_Object_array *pSVar7;
  Il2CppClass *pIVar8;
  UI_MapEditorMenu_o *__this_00;
  long lVar9;
  Il2CppObject *item;
  MethodInfo *method_00;
  
  if (DAT_05705147 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AddObjectCommand);
    il2cpp_init_method_metadata(&TypeInfo_DeleteObjectCommand);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_BaseCommand_get_Item);
    DAT_05705147 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands;
  if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar4 = (pSVar6->fields)._size;
    if (iVar4 == 0) {
      return;
    }
    item = System_Collections_Generic_List<object>__get_Item(pSVar6,iVar4 + -1,MethodInfo_BaseCommand_get_Item);
    if (item != (Il2CppObject *)0x0) {
      (*item->klass->vtable[4].methodPtr)(item,item->klass->vtable[4].method);
      lVar9 = MethodInfo_Void_Add;
      pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
      if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (pSVar6->fields)._items;
        if (pSVar7 != (System_Object_array *)0x0) {
          uVar5 = (pSVar6->fields)._size;
          if (uVar5 < (uint)pSVar7->max_length) {
            (pSVar6->fields)._size = uVar5 + 1;
            pSVar7->m_Items[(int)uVar5] = item;
            il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar5,item);
            pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar6,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            pSVar6 = (System_Collections_Generic_List_object__o *)(__this->fields)._redoCommands;
          }
          if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
            System_Collections_Generic_List<object>__RemoveAt
                      (pSVar6,(pSVar6->fields)._size + -1,MethodInfo_Void_RemoveAt);
            pIVar8 = item->klass;
            bVar2 = (pIVar8->_2).naturalAligment;
            bVar3 = (TypeInfo_AddObjectCommand->_2).naturalAligment;
            if (((bVar3 <= bVar2) && ((pIVar8->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_AddObjectCommand))
               || ((bVar3 = (TypeInfo_DeleteObjectCommand->_2).naturalAligment,
                   method_00 = (MethodInfo *)(ulong)bVar3, bVar3 <= bVar2 &&
                   ((pIVar8->_2).typeHierarchy[(long)&method_00[-1].field_0x57] == TypeInfo_DeleteObjectCommand))))
            {
              __this_00 = (__this->fields)._menu;
              if (__this_00 == (UI_MapEditorMenu_o *)0x0) goto LAB_04236213;
              method_00 = (MethodInfo *)0x0;
              UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
            }
            GameManagers_MapEditorGameManager__OnSelectionChange(__this,method_00);
            return;
          }
        }
      }
    }
  }
LAB_04236213:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$Copy
// il2cpp: void GameManagers_MapEditorGameManager__Copy (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4236220

void GameManagers_MapEditorGameManager__Copy
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_MapObject__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_01;
  Il2CppClass *item;
  Map_MapScriptBaseObject_array *pMVar4;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  long lVar5;
  bool_conflict bVar6;
  Map_MapScriptObjects_o *__this_05;
  System_String_o *pSVar7;
  System_Collections_Generic_HashSet_T__o *pSVar8;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (DAT_05705148 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptObjects);
    DAT_05705148 = '\x01';
  }
  pSVar3 = (__this->fields).SelectedObjects;
  if (pSVar3 != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
    if ((pSVar3->fields)._count == 0) {
      return;
    }
    __this_05 = (Map_MapScriptObjects_o *)il2cpp_runtime_glue(TypeInfo_MapScriptObjects);
    Map_MapScriptObjects___ctor(__this_05,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this_00,
                 MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
      pSVar8 = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
      pSVar9 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_40._8_8_;
      pIVar10 = local_30;
      if (__this_05 == (Map_MapScriptObjects_o *)0x0) {
        __this_03.fields._index = local_40._8_4_;
        __this_03.fields._version = local_40._12_4_;
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
        __this_03.fields._current = (Il2CppObject *)local_30;
        bVar6 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_03,(MethodInfo_3185890 *)&stack0xffffffffffffffa8);
        if ((char)bVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        while (__this_02.fields._8_8_ = pSVar9, __this_02.fields._set = pSVar8,
              __this_02.fields._current = (Il2CppObject *)pIVar10,
              bVar6 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffffa8),
              lVar5 = MethodInfo_Void_Add, local_40._0_8_ = pSVar8, local_40._8_8_ = pSVar9,
              local_30 = pIVar10, (char)bVar6 != '\0') {
          if (pIVar10 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          __this_01 = (__this_05->fields).Objects;
          if (__this_01 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          item = pIVar10[2].data;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar4 = (__this_01->fields)._items;
          if (pMVar4 == (Map_MapScriptBaseObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pMVar4->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pMVar4->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)item;
            il2cpp_runtime_glue(pMVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_04.fields._8_8_ = local_40._8_8_;
      __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
      __this_04.fields._current = (Il2CppObject *)local_30;
      System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                (__this_04,(MethodInfo_3185880 *)&stack0xffffffffffffffa8);
      if (__this_05 != (Map_MapScriptObjects_o *)0x0) {
        pSVar7 = (System_String_o *)
                 (*(__this_05->klass->vtable)._8_Serialize.methodPtr)
                           (__this_05,(__this_05->klass->vtable)._8_Serialize.method);
        (__this->fields)._clipboard = pSVar7;
        il2cpp_runtime_glue(&(__this->fields)._clipboard,pSVar7);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$Paste
// il2cpp: void GameManagers_MapEditorGameManager__Paste (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x42364d0

void GameManagers_MapEditorGameManager__Paste
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UI_MapEditorMenu_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  Map_MapScriptObjects_o *__this_04;
  MethodInfo *pMVar3;
  Il2CppObject *item;
  MethodInfo *in_RCX;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  Il2CppType *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_05705149 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AddObjectCommand);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptObjects);
    DAT_05705149 = '\x01';
  }
  bVar2 = System_String__op_Equality
                    ((__this->fields)._clipboard,
                     (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  __this_04 = (Map_MapScriptObjects_o *)il2cpp_runtime_glue(TypeInfo_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_04,(MethodInfo *)0x0);
  if (__this_04 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_04->klass->vtable)._9_Deserialize.methodPtr)
              (__this_04,(__this->fields)._clipboard,
               (__this_04->klass->vtable)._9_Deserialize.method);
    pSVar1 = (__this_04->fields).Objects;
    pMVar3 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_AddObjectCommand);
    MapEditor_AddObjectCommand___ctor
              ((MapEditor_AddObjectCommand_o *)pMVar3,pSVar1,(MethodInfo *)0x0);
    GameManagers_MapEditorGameManager__NewCommand(__this,(MapEditor_BaseCommand_o *)pMVar3,1,in_RCX)
    ;
    GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar3);
    pSVar1 = (__this_04->fields).Objects;
    if (pSVar1 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
      pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar5 = (Il2CppType *)local_48._8_8_;
      pIVar6 = local_38;
      while (__this_02.fields._8_8_ = pIVar5,
            __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar4,
            __this_02.fields._current = pIVar6,
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            (char)bVar2 != '\0') {
        pIVar7 = pIVar6;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((System_Collections_Generic_Dictionary_int__object__o *)
            **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
            (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        item = System_Collections_Generic_Dictionary<int__object>__get_Item
                         ((System_Collections_Generic_Dictionary_int__object__o *)
                          **(undefined8 **)(TypeInfo_MapLoader + 0xb8),*(int32_t *)&pIVar6[2].klass,
                          MethodInfo_MapObject_get_Item);
        pIVar6 = pIVar7;
        if (DAT_0570514e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
          DAT_0570514e = '\x01';
          pIVar6 = pIVar7;
        }
        __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects
        ;
        if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_HashSet<object>__Add(__this_00,item,MethodInfo_Boolean_Add);
      }
      __this_03.fields._8_8_ = pIVar5;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar4;
      __this_03.fields._current = pIVar6;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      __this_01 = (__this->fields)._menu;
      if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
        pMVar3 = (MethodInfo *)0x0;
        UI_MapEditorMenu__SyncHierarchyPanel(__this_01,(MethodInfo *)0x0);
        GameManagers_MapEditorGameManager__OnSelectionChange(__this,pMVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$Cut
// il2cpp: void GameManagers_MapEditorGameManager__Cut (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x42367f0

void GameManagers_MapEditorGameManager__Cut
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager__Copy(__this,method);
  GameManagers_MapEditorGameManager__Delete(__this,method);
  return;
}


// GameManagers.MapEditorGameManager$$Delete
// il2cpp: void GameManagers_MapEditorGameManager__Delete (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4236800

void GameManagers_MapEditorGameManager__Delete
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *collection;
  UI_MapEditorMenu_o *__this_00;
  System_Collections_Generic_List_MapObject__o *objs;
  MapEditor_DeleteObjectCommand_o *__this_01;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (DAT_0570514a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DeleteObjectCommand);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    DAT_0570514a = '\x01';
  }
  collection = (__this->fields).SelectedObjects;
  if (collection != (System_Collections_Generic_HashSet_MapObject__o *)0x0) {
    if ((collection->fields)._count == 0) {
      return;
    }
    objs = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)objs,
               (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_Map_MapObject);
    __this_01 = (MapEditor_DeleteObjectCommand_o *)il2cpp_runtime_glue(TypeInfo_DeleteObjectCommand);
    MapEditor_DeleteObjectCommand___ctor(__this_01,objs,(MethodInfo *)0x0);
    GameManagers_MapEditorGameManager__NewCommand
              (__this,(MapEditor_BaseCommand_o *)__this_01,1,in_RCX);
    __this_00 = (__this->fields)._menu;
    if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__OnSelectionChange(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$Select
// il2cpp: void GameManagers_MapEditorGameManager__Select (GameManagers_MapEditorGameManager_o* __this, bool multi, const MethodInfo* method);
// 0x42368e0

/* WARNING: Type propagation algorithm not settling */

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
  UnityEngine_RaycastHit_o __this_03;
  undefined1 auVar12 [16];
  UnityEngine_LayerMask_o mask;
  uint uVar13;
  bool_conflict bVar14;
  System_Int32_array *layers;
  UnityEngine_Collider_o *collider;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  Il2CppObject *item;
  System_Object_array *pSVar15;
  UnityEngine_GameObject_o *pUVar16;
  ulong uVar17;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  System_Collections_Generic_HashSet_MapObject__o *__this_05;
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
  UnityEngine_Vector3_o start;
  UnityEngine_Vector3_o end;
  undefined8 in_stack_fffffffffffffec8;
  undefined8 uVar24;
  undefined8 in_stack_fffffffffffffed0;
  undefined8 uVar25;
  Il2CppObject *in_stack_fffffffffffffed8;
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
  if (DAT_0570514b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_UnityEng);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata();
    DAT_0570514b = '\x01';
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
  if (DAT_056fde1c == '\0') {
    local_a8 = (Il2CppType **)CONCAT44(fVar3,fVar3);
    pIStack_a0 = (Il2CppRGCTXData *)0x0;
    local_b8._4_4_ = fVar1;
    local_b8._0_4_ = fVar19;
    fStack_b0 = 0.0;
    fStack_ac = fVar3;
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
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
    il2cpp_init_class();
    in_stack_fffffffffffffee8 = fVar20;
    in_stack_fffffffffffffeec = fVar21;
    in_stack_fffffffffffffef0 = in_XMM1_Db;
  }
  fVar19 = fVar21 * fVar21 + fVar3 * fVar3 + fVar20 * fVar20;
  cVar18 = (char)multi;
  if (fVar19 < 0.0) {
    fVar19 = sqrtf(fVar19);
  }
  else {
    fVar19 = SQRT(fVar19);
  }
  if (fVar19 < 1.0) {
    pUVar9 = (__this->fields)._menu;
    if (pUVar9 == (UI_MapEditorMenu_o *)0x0) goto LAB_0423720b;
    if ((char)(pUVar9->fields).IsMouseUI != '\0') goto LAB_0423711d;
    if (lVar7 == 0) goto LAB_0423720b;
    pUVar10 = *(UnityEngine_Camera_o **)(lVar7 + 0x20);
    UVar23 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Camera_o *)0x0) goto LAB_0423720b;
    UnityEngine_Camera__ScreenPointToRay
              ((UnityEngine_Ray_o *)local_80,pUVar10,UVar23,(MethodInfo *)0x0);
    local_e8 = (UnityEngine_GameObject_o *)local_80._16_8_;
    local_f8 = (float)local_80._0_4_;
    fStack_f4 = (float)local_80._4_4_;
    fStack_f0 = (float)local_80._8_4_;
    fStack_ec = (float)local_80._12_4_;
    layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (layers == (System_Int32_array *)0x0) goto LAB_0423720b;
    if ((int)layers->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
    mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
    uVar13 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar24 = CONCAT44(fStack_f4,local_f8);
    uVar25 = CONCAT44(fStack_ec,fStack_f0);
    method_00 = (MethodInfo *)(ulong)uVar13;
    ray.fields.m_Origin.fields.z = fStack_f0;
    ray.fields.m_Direction.fields.x = fStack_ec;
    ray.fields.m_Origin.fields.x = local_f8;
    ray.fields.m_Origin.fields.y = fStack_f4;
    ray.fields.m_Direction.fields._4_8_ = local_e8;
    pUVar16 = local_e8;
    bVar14 = UnityEngine_Physics__Raycast
                       (ray,(UnityEngine_RaycastHit_o *)&local_68,100000.0,uVar13,(MethodInfo *)0x0)
    ;
    if ((char)bVar14 == '\0') {
      method_01 = method_00;
      if (cVar18 != '\0') goto LAB_0423711d;
LAB_0423713e:
      method_00 = method_01;
      GameManagers_MapEditorGameManager__DeselectAll(__this,method_00);
      goto LAB_0423711d;
    }
    __this_03.fields.m_Point.fields.z = (float)(int)uVar25;
    __this_03.fields.m_Normal.fields.x = (float)(int)((ulong)uVar25 >> 0x20);
    __this_03.fields.m_Point.fields.x = (float)(int)uVar24;
    __this_03.fields.m_Point.fields.y = (float)(int)((ulong)uVar24 >> 0x20);
    __this_03.fields.m_Normal.fields._4_8_ = pUVar16;
    __this_03.fields._24_8_ = __this;
    __this_03.fields.m_UV.fields.x = in_stack_fffffffffffffee8;
    __this_03.fields.m_UV.fields.y = in_stack_fffffffffffffeec;
    __this_03.fields.m_Collider = (int32_t)in_stack_fffffffffffffef0;
    collider = UnityEngine_RaycastHit__get_collider(__this_03,(MethodInfo *)&local_68);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_01 = (MethodInfo *)0x0;
    method_00 = (MethodInfo *)Map_MapLoader__FindObjectFromCollider(collider,(MethodInfo *)0x0);
    __this_05 = (__this->fields).SelectedObjects;
    if (__this_05 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto LAB_0423720b;
    if (cVar18 == '\0') {
      if ((((System_Collections_Generic_HashSet_object__o *)__this_05)->fields)._count == 1) {
        method_01 = method_00;
        bVar14 = System_Collections_Generic_HashSet<object>__Contains
                           ((System_Collections_Generic_HashSet_object__o *)__this_05,
                            (Il2CppObject *)method_00,MethodInfo_Boolean_Contains);
        if ((char)bVar14 != '\0') goto LAB_0423713e;
        __this_05 = (__this->fields).SelectedObjects;
        if (__this_05 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto LAB_0423720b;
      }
      if (0 < (((System_Collections_Generic_HashSet_object__o *)__this_05)->fields)._count) {
        GameManagers_MapEditorGameManager__DeselectAll(__this,method_01);
        goto LAB_04237188;
      }
      if (DAT_0570514e == '\0') goto LAB_0423719c;
    }
    else {
      bVar14 = System_Collections_Generic_HashSet<object>__Contains
                         ((System_Collections_Generic_HashSet_object__o *)__this_05,
                          (Il2CppObject *)method_00,MethodInfo_Boolean_Contains);
      if ((char)bVar14 != '\0') {
        if (DAT_0570514d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
          DAT_0570514d = '\x01';
        }
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
        if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet<object>__Remove
                    (pSVar11,(Il2CppObject *)method_00,MethodInfo_Boolean_Remove);
          goto LAB_0423711d;
        }
        goto LAB_0423720b;
      }
LAB_04237188:
      if (DAT_0570514e == '\0') {
LAB_0423719c:
        il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
        DAT_0570514e = '\x01';
      }
      __this_05 = (__this->fields).SelectedObjects;
      if (__this_05 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto LAB_0423720b;
    }
    System_Collections_Generic_HashSet<object>__Add
              ((System_Collections_Generic_HashSet_object__o *)__this_05,(Il2CppObject *)method_00,
               MethodInfo_Boolean_Add);
    goto LAB_0423711d;
  }
  if (cVar18 == '\0') {
    GameManagers_MapEditorGameManager__DeselectAll(__this,method_00);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto LAB_04236d3f;
LAB_04236b25:
    pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto LAB_04236b25;
LAB_04236d3f:
    il2cpp_init_class();
    pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  }
  if ((pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_04 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            (pSVar8,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_UnityEng),
     __this_04 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
LAB_0423720b:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
             &local_f8,__this_04,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
  local_d8._16_8_ = local_e8;
  local_d8._0_8_ = CONCAT44(fStack_f4,local_f8);
  local_d8._8_8_ = CONCAT44(fStack_ec,fStack_f0);
LAB_04236db0:
  __this_01.fields._index = (int)in_stack_fffffffffffffed0;
  __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_01.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
  __this_01.fields._currentKey = in_stack_fffffffffffffed8;
  bVar14 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                     (__this_01,(MethodInfo_31D0850 *)local_d8);
  uVar24 = local_d8._16_8_;
  if ((char)bVar14 != '\0') {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar8 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
    if (pSVar8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    item = System_Collections_Generic_Dictionary<object__object>__get_Item
                     (pSVar8,(Il2CppObject *)uVar24,MethodInfo_MapObject_get_Item);
    if ((UnityEngine_GameObject_o *)uVar24 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = UnityEngine_GameObject__GetComponentsInChildren<object>
                        ((UnityEngine_GameObject_o *)uVar24,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    if (pSVar15 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar15->max_length) {
      uVar17 = 0;
      if ((pSVar15->max_length & 0xffffffff) == 0) {
LAB_042371d4:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        x = (UnityEngine_Object_o *)pSVar15->m_Items[uVar17];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar14 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar16 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          if (pUVar16 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar14 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            UnityEngine_Renderer__get_bounds
                      ((UnityEngine_Bounds_o *)&local_f8,(UnityEngine_Renderer_o *)x,
                       (MethodInfo *)0x0);
            fVar1 = fStack_f4;
            fVar19 = local_f8;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if (*(UnityEngine_Camera_o **)(lVar7 + 0x20) == (UnityEngine_Camera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UVar23.fields.y = fStack_f4;
            UVar23.fields.x = local_f8;
            UVar23.fields.z = fStack_f0;
            fVar3 = fStack_f0;
            UVar23 = UnityEngine_Camera__WorldToScreenPoint
                               (*(UnityEngine_Camera_o **)(lVar7 + 0x20),UVar23,(MethodInfo *)0x0);
            local_98._8_4_ = extraout_XMM0_Dc;
            local_98._0_8_ = UVar23.fields._0_8_;
            local_98._12_4_ = extraout_XMM0_Dd;
            if (*(long *)(lVar7 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception(UVar23.fields.x,UVar23.fields.z);
            }
            __this_00 = *(UnityEngine_Transform_o **)(*(long *)(lVar7 + 0x28) + 0x10);
            if (__this_00 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception(UVar23.fields.x,UVar23.fields.z);
            }
            UVar23 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
            fStack_b0 = (float)extraout_XMM0_Dc_00;
            local_b8 = (undefined1  [8])UVar23.fields._0_8_;
            fStack_ac = (float)extraout_XMM0_Dd_00;
            local_a8 = (Il2CppType **)CONCAT44(local_a8._4_4_,UVar23.fields.z);
            if (DAT_056fdea6 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Math);
              DAT_056fdea6 = '\x01';
              iVar5 = *(int *)(TypeInfo_Math + 0xe4);
            }
            else {
              iVar5 = *(int *)(TypeInfo_Math + 0xe4);
            }
            if (iVar5 == 0) {
              il2cpp_init_class();
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
            if (pUVar10 == (UnityEngine_Camera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            fVar1 = UnityEngine_Camera__get_farClipPlane(pUVar10,(MethodInfo *)0x0);
            if (fVar19 < fVar1) {
              uVar2 = (__this->fields)._isDrag;
              uVar4 = (__this->fields)._dragStart.fields.x;
              UVar23 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                il2cpp_init_class();
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
                 (bVar14 = UnityEngine_Renderer__get_isVisible
                                     ((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0),
                 (char)bVar14 != '\0')) {
                pSVar11 = (System_Collections_Generic_HashSet_object__o *)
                          (__this->fields).SelectedObjects;
                if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar14 = System_Collections_Generic_HashSet<object>__Contains
                                   (pSVar11,item,MethodInfo_Boolean_Contains);
                if ((char)bVar14 == '\0') {
                  if (DAT_0570514e == '\0') {
                    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
                    DAT_0570514e = '\x01';
                  }
                  pSVar11 = (System_Collections_Generic_HashSet_object__o *)
                            (__this->fields).SelectedObjects;
                  if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  System_Collections_Generic_HashSet<object>__Add(pSVar11,item,MethodInfo_Boolean_Add);
                }
                break;
              }
            }
          }
        }
        uVar17 = uVar17 + 1;
        uVar13 = (uint)pSVar15->max_length;
        if ((long)(int)uVar13 <= (long)uVar17) break;
        if (uVar13 <= uVar17) goto LAB_042371d4;
      } while( true );
    }
    goto LAB_04236db0;
  }
  __this_02.fields._index = (int)in_stack_fffffffffffffed0;
  __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  __this_02.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec8;
  __this_02.fields._currentKey = in_stack_fffffffffffffed8;
  method_00 = MethodInfo_Void_Dispose;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
            (__this_02,(MethodInfo_31D0840 *)local_d8);
LAB_0423711d:
  GameManagers_MapEditorGameManager__OnSelectionChange(__this,method_00);
  return;
}


// GameManagers.MapEditorGameManager$$DeselectAll
// il2cpp: void GameManagers_MapEditorGameManager__DeselectAll (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x42358d0

void GameManagers_MapEditorGameManager__DeselectAll
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *collection;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *item;
  Il2CppObject *pIVar4;
  
  if (DAT_0570514c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    DAT_0570514c = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  item = (Il2CppObject *)0x0;
  collection = (__this->fields).SelectedObjects;
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
  System_Collections_Generic_List<object>___ctor
            (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_Map_MapObject);
  if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this_03
               ,MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = item;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar3;
        __this_02.fields._list = pSVar2;
        __this_02.fields._current = item;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
        return;
      }
      pIVar4 = item;
      if (DAT_0570514d == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
        DAT_0570514d = '\x01';
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
      System_Collections_Generic_HashSet<object>__Remove(__this_00,item,MethodInfo_Boolean_Remove);
      item = pIVar4;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$DeselectObject
// il2cpp: void GameManagers_MapEditorGameManager__DeselectObject (GameManagers_MapEditorGameManager_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x42374e0

void GameManagers_MapEditorGameManager__DeselectObject
               (GameManagers_MapEditorGameManager_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_0570514d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_0570514d = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Remove(__this_00,(Il2CppObject *)obj,MethodInfo_Boolean_Remove);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$SelectObject
// il2cpp: void GameManagers_MapEditorGameManager__SelectObject (GameManagers_MapEditorGameManager_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x4235aa0

void GameManagers_MapEditorGameManager__SelectObject
               (GameManagers_MapEditorGameManager_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_0570514e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    DAT_0570514e = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this_00,(Il2CppObject *)obj,MethodInfo_Boolean_Add);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$NewCommand
// il2cpp: void GameManagers_MapEditorGameManager__NewCommand (GameManagers_MapEditorGameManager_o* __this, MapEditor_BaseCommand_o* command, bool syncInspector, const MethodInfo* method);
// 0x4235720

void GameManagers_MapEditorGameManager__NewCommand
               (GameManagers_MapEditorGameManager_o *__this,MapEditor_BaseCommand_o *command,
               bool_conflict syncInspector,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int32_t length;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_BaseCommand__o *pSVar6;
  MapEditor_BaseCommand_c *pMVar7;
  UI_MapEditorMenu_o *__this_01;
  long lVar8;
  
  if (DAT_0570514f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_TransformPositionCommand);
    il2cpp_init_method_metadata(&TypeInfo_TransformPositionRotationCommand);
    il2cpp_init_method_metadata(&TypeInfo_TransformScaleCommand);
    DAT_0570514f = '\x01';
  }
  if (command != (MapEditor_BaseCommand_o *)0x0) {
    (*(command->klass->vtable)._4_Execute.methodPtr)
              (command,(command->klass->vtable)._4_Execute.method);
    lVar8 = MethodInfo_Void_Add;
    __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._undoCommands;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_00->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar4 = (__this_00->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)command;
          il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4);
          pSVar6 = (__this->fields)._redoCommands;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)command,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          pSVar6 = (__this->fields)._redoCommands;
        }
        if (pSVar6 != (System_Collections_Generic_List_BaseCommand__o *)0x0) {
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          length = (pSVar6->fields)._size;
          (pSVar6->fields)._size = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0
                               );
          }
          pMVar7 = command->klass;
          bVar2 = (pMVar7->_2).naturalAligment;
          bVar3 = (TypeInfo_TransformPositionCommand->_2).naturalAligment;
          if (((((bVar2 < bVar3) || ((pMVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_TransformPositionCommand))
               && ((bVar3 = (TypeInfo_TransformPositionRotationCommand->_2).naturalAligment, bVar2 < bVar3 ||
                   ((pMVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_TransformPositionRotationCommand)))) &&
              ((bVar3 = (TypeInfo_TransformScaleCommand->_2).naturalAligment, bVar2 < bVar3 ||
               ((pMVar7->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_TransformScaleCommand)))) ||
             ((char)syncInspector == '\0')) {
            return;
          }
          __this_01 = (__this->fields)._menu;
          if (__this_01 != (UI_MapEditorMenu_o *)0x0) {
            UI_MapEditorMenu__SyncInspector(__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$OnFinishLoading
// il2cpp: void GameManagers_MapEditorGameManager__OnFinishLoading (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4237530

void GameManagers_MapEditorGameManager__OnFinishLoading
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  Map_MapScript_o **ppMVar1;
  byte bVar2;
  Map_MapScript_o *pMVar3;
  UI_ExportPopup_o *__this_00;
  Il2CppClass *pIVar4;
  int32_t iVar5;
  MapEditor_PositionGizmo_o *pMVar6;
  MapEditor_OutlineGizmo_o *pMVar7;
  MapEditor_RotationGizmo_o *pMVar8;
  MapEditor_ScaleGizmo_o *method_00;
  CustomLogic_CustomLogicEvaluator_o *pCVar9;
  long lVar10;
  System_String_o *pSVar11;
  Il2CppObject *__this_01;
  UI_MapEditorMenu_o *pUVar12;
  GameManagers_MapEditorGameManager_o *__this_02;
  
  if (DAT_05705150 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"\n");
    DAT_05705150 = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppMVar1 = &(__this->fields).MapScript;
  (__this->fields).MapScript = *(Map_MapScript_o **)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  il2cpp_runtime_glue(ppMVar1);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar12 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar12 != (UI_MapEditorMenu_o *)0x0) goto LAB_042375fa;
LAB_04237671:
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    pUVar12 = *(UI_MapEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar12 == (UI_MapEditorMenu_o *)0x0) goto LAB_04237671;
LAB_042375fa:
    pIVar4 = TypeInfo_MapEditorMenu;
    bVar2 = (TypeInfo_MapEditorMenu->_2).naturalAligment;
    if (((pUVar12->klass->_2).naturalAligment < bVar2) ||
       ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorMenu)) {
LAB_04237877:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar12,pIVar4);
    }
    (__this->fields)._menu = pUVar12;
    if (((pUVar12->klass->_2).naturalAligment < bVar2) ||
       ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar4)) goto LAB_04237877;
  }
  il2cpp_runtime_glue();
  pMVar6 = MapEditor_PositionGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._positionGizmo = pMVar6;
  il2cpp_runtime_glue(&(__this->fields)._positionGizmo,pMVar6);
  pMVar7 = MapEditor_OutlineGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._outlineGizmo = pMVar7;
  il2cpp_runtime_glue(&(__this->fields)._outlineGizmo,pMVar7);
  pMVar8 = MapEditor_RotationGizmo__Create((MethodInfo *)0x0);
  (__this->fields)._rotationGizmo = pMVar8;
  il2cpp_runtime_glue(&(__this->fields)._rotationGizmo,pMVar8);
  method_00 = MapEditor_ScaleGizmo__Create((MethodInfo *)0x0);
  __this_02 = (GameManagers_MapEditorGameManager_o *)&(__this->fields)._scaleGizmo;
  (__this->fields)._scaleGizmo = method_00;
  il2cpp_runtime_glue();
  iVar5 = GameManagers_MapEditorGameManager__GetHighestObjectId(__this_02,(MethodInfo *)method_00);
  (__this->fields)._currentObjectId = iVar5;
  pUVar12 = (__this->fields)._menu;
  if (pUVar12 != (UI_MapEditorMenu_o *)0x0) {
    UI_MapEditorMenu__ShowHierarchyPanel(pUVar12,(MethodInfo *)0x0);
    pMVar3 = *ppMVar1;
    if (pMVar3 != (Map_MapScript_o *)0x0) {
      pSVar11 = (pMVar3->fields).Logic;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar9 = CustomLogic_CustomLogicManager__GetEditorEvaluator(pSVar11,1,(MethodInfo *)0x0);
      (__this->fields).LogicEvaluator = pCVar9;
      il2cpp_runtime_glue(&(__this->fields).LogicEvaluator,pCVar9);
      (__this->fields).CurrentGizmo = (MapEditor_BaseGizmo_o *)(__this->fields)._positionGizmo;
      il2cpp_runtime_glue(&(__this->fields).CurrentGizmo);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar10 = *(long *)(TypeInfo_MapLoader + 0xb8);
      if (*(long *)(lVar10 + 0x78) != 0) {
        if (0 < *(int *)(*(long *)(lVar10 + 0x78) + 0x18)) {
          pUVar12 = (__this->fields)._menu;
          if (pUVar12 == (UI_MapEditorMenu_o *)0x0) goto LAB_04237872;
          __this_00 = (UI_ExportPopup_o *)(pUVar12->fields).ErrorPopup;
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
            lVar10 = *(long *)(TypeInfo_MapLoader + 0xb8);
          }
          pSVar11 = System_String__Join("\n",
                                        *(System_Collections_Generic_IEnumerable_string__o **)
                                         (lVar10 + 0x78),(MethodInfo *)0x0);
          if (__this_00 == (UI_ExportPopup_o *)0x0) goto LAB_04237872;
          UI_ExportPopup__Show(__this_00,pSVar11,(MethodInfo *)0x0);
        }
        if (DAT_05705152 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_WaitAndAutosave_d__35);
          DAT_05705152 = '\x01';
        }
        __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndAutosave_d__35);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        *(undefined4 *)&__this_01[1].klass = 0;
        if (__this_01 != (Il2CppObject *)0x0) {
          __this_01[2].klass = (Il2CppClass *)__this;
          il2cpp_runtime_glue(__this_01 + 2,__this);
          UnityEngine_MonoBehaviour__StartCoroutine
                    ((UnityEngine_MonoBehaviour_o *)__this,
                     (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_04237872:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$Awake
// il2cpp: void GameManagers_MapEditorGameManager__Awake (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4237a80

void GameManagers_MapEditorGameManager__Awake
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05705151 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05705151 = '\x01';
  }
  GameManagers_BaseGameManager__Awake((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar1 != 0) {
    (__this->fields)._input = *(Settings_MapEditorInputSettings_o **)(lVar1 + 0x50);
    il2cpp_runtime_glue(&(__this->fields)._input);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$WaitAndAutosave
// il2cpp: System_Collections_IEnumerator_o* GameManagers_MapEditorGameManager__WaitAndAutosave (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4237a10

System_Collections_IEnumerator_o *
GameManagers_MapEditorGameManager__WaitAndAutosave
          (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05705152 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndAutosave_d__35);
    DAT_05705152 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndAutosave_d__35);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$Update
// il2cpp: void GameManagers_MapEditorGameManager__Update (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4237b00

void GameManagers_MapEditorGameManager__Update
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager__UpdateInput(__this,method);
  GameManagers_MapEditorGameManager__UpdateBrush(__this,method);
  GameManagers_MapEditorGameManager__UpdateDrag(__this,method);
  return;
}


// GameManagers.MapEditorGameManager$$UpdateBrush
// il2cpp: void GameManagers_MapEditorGameManager__UpdateBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4237fa0

void GameManagers_MapEditorGameManager__UpdateBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UnityEngine_Camera_o *__this_00;
  Settings_MapEditorInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  UnityEngine_Ray_o ray;
  UnityEngine_RaycastHit_o __this_01;
  bool_conflict bVar4;
  UnityEngine_LayerMask_o mask;
  int32_t iVar5;
  bool_conflict bVar6;
  bool_conflict bVar7;
  UnityEngine_EventSystems_EventSystem_o *x;
  UnityEngine_Object_o *pUVar8;
  System_Int32_array *layers;
  float fVar9;
  MethodInfo *method_00;
  MapEditor_MapEditorBrush_o *pMVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  int32_t in_stack_ffffffffffffff70;
  UnityEngine_Ray_o local_70;
  Il2CppMethodPointer local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod pIStack_48;
  uint32_t uStack_40;
  float local_3c;
  float fStack_38;
  undefined8 uStack_34;
  
  if (DAT_05705153 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&"Mouse ScrollWheel");
    DAT_05705153 = '\x01';
  }
  fStack_38 = 0.0;
  uStack_34 = 0;
  pIStack_48 = (InvokerMethod)0x0;
  uStack_40 = 0;
  local_3c = 0.0;
  local_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  pMVar10 = (__this->fields).Brush;
  if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) {
    return;
  }
  if ((char)(pMVar10->fields).Active == '\0') {
    return;
  }
  pUVar1 = (__this->fields)._menu;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto LAB_0423871e;
  bVar4 = UI_MapEditorMenu__IsPopupActive(pUVar1,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
LAB_042380a0:
    pMVar10 = (__this->fields).Brush;
    if (pMVar10 != (MapEditor_MapEditorBrush_o *)0x0) {
      MapEditor_MapEditorBrush__ClearCenter(pMVar10,(MethodInfo *)0x0);
      return;
    }
    goto LAB_0423871e;
  }
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto LAB_0423871e;
  if ((char)(pUVar1->fields).IsMouseUI != '\0') goto LAB_042380a0;
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar8 = (UnityEngine_Object_o *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (x == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto LAB_0423871e;
    pUVar8 = (UnityEngine_Object_o *)(x->fields).m_CurrentSelected;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_0423871e;
    pUVar8 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_InputField_GetComponent_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') goto LAB_042380a0;
  }
  pUVar8 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_0423871e;
  __this_00 = pUVar8[1].monitor;
  UVar14 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Camera_o *)0x0) goto LAB_0423871e;
  UnityEngine_Camera__ScreenPointToRay(&local_70,__this_00,UVar14,(MethodInfo *)0x0);
  layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (layers == (System_Int32_array *)0x0) goto LAB_0423871e;
  if ((int)layers->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x40);
  mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
  iVar5 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar15 = CONCAT44(local_70.fields.m_Origin.fields.y,local_70.fields.m_Origin.fields.x);
  uVar16 = CONCAT44(local_70.fields.m_Direction.fields.x,local_70.fields.m_Origin.fields.z);
  ray.fields.m_Origin.fields.z = local_70.fields.m_Origin.fields.z;
  ray.fields.m_Direction.fields.x = local_70.fields.m_Direction.fields.x;
  ray.fields.m_Origin.fields.x = local_70.fields.m_Origin.fields.x;
  ray.fields.m_Origin.fields.y = local_70.fields.m_Origin.fields.y;
  ray.fields.m_Direction.fields.y = local_70.fields.m_Direction.fields.y;
  ray.fields.m_Direction.fields.z = local_70.fields.m_Direction.fields.z;
  bVar4 = UnityEngine_Physics__Raycast
                    (ray,(UnityEngine_RaycastHit_o *)&local_58,100000.0,iVar5,(MethodInfo *)0x0);
  pMVar10 = (__this->fields).Brush;
  if ((char)bVar4 == '\0') {
    if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0423871e;
    MapEditor_MapEditorBrush__ClearCenter(pMVar10,(MethodInfo *)0x0);
  }
  else {
    __this_01.fields.m_Point.fields.z = (float)(int)uVar16;
    __this_01.fields.m_Normal.fields.x = (float)(int)((ulong)uVar16 >> 0x20);
    __this_01.fields.m_Point.fields.x = (float)(int)uVar15;
    __this_01.fields.m_Point.fields.y = (float)(int)((ulong)uVar15 >> 0x20);
    __this_01.fields.m_Normal.fields.y = local_70.fields.m_Direction.fields.y;
    __this_01.fields.m_Normal.fields.z = local_70.fields.m_Direction.fields.z;
    __this_01.fields.m_FaceID = (int)in_stack_ffffffffffffff60;
    __this_01.fields.m_Distance = (float)(int)((ulong)in_stack_ffffffffffffff60 >> 0x20);
    __this_01.fields.m_UV.fields.x = (float)in_stack_ffffffffffffff68;
    __this_01.fields.m_UV.fields.y = (float)in_stack_ffffffffffffff6c;
    __this_01.fields.m_Collider = in_stack_ffffffffffffff70;
    UVar14 = UnityEngine_RaycastHit__get_point(__this_01,(MethodInfo *)&local_58);
    if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0423871e;
    MapEditor_MapEditorBrush__SetCenter(pMVar10,UVar14,(MethodInfo *)0x0);
  }
  fVar12 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
  pSVar2 = (__this->fields)._input;
  if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).BrushCount, pSVar3 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_0423871e;
  bVar4 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
  pSVar2 = (__this->fields)._input;
  if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).BrushCurve, pSVar3 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_0423871e;
  bVar6 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
  pMVar10 = (__this->fields).Brush;
  if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0423871e;
  if ((pMVar10->fields).AssetSelectMode == 1) {
    pSVar2 = (__this->fields)._input;
    if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).BrushCurveAxisX, pSVar3 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_0423871e;
    bVar7 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      pSVar2 = (__this->fields)._input;
      if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).BrushCurveAxisY, pSVar3 == (Settings_KeybindSetting_o *)0x0))
      goto LAB_0423871e;
      bVar7 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pMVar10 = (__this->fields).Brush;
        fVar13 = 2.8026e-45;
        goto joined_r0x04238473;
      }
      pSVar2 = (__this->fields)._input;
      if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).BrushCurveAxisZ, pSVar3 == (Settings_KeybindSetting_o *)0x0))
      goto LAB_0423871e;
      bVar7 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pMVar10 = (__this->fields).Brush;
        fVar13 = 4.2039e-45;
        goto joined_r0x04238473;
      }
      pSVar2 = (__this->fields)._input;
      if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).BrushCurveAxisNone, pSVar3 == (Settings_KeybindSetting_o *)0x0))
      goto LAB_0423871e;
      fVar13 = 0.0;
      bVar7 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pMVar10 = (__this->fields).Brush;
        goto joined_r0x04238473;
      }
    }
    else {
      pMVar10 = (__this->fields).Brush;
      fVar13 = 1.4013e-45;
joined_r0x04238473:
      if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0423871e;
      (pMVar10->fields).SpacingZ = fVar13;
    }
    if (0.0001 < ABS(fVar12)) {
      pMVar10 = (__this->fields).Brush;
      if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0423871e;
      fVar13 = (pMVar10->fields).SpacingZ;
      fVar9 = 1.4013e-45;
      if (fVar13 != 0.0) {
        fVar9 = fVar13;
      }
      iVar11 = (uint)(0.0 < fVar12) * 2 + -1;
      if ((char)bVar6 == '\0') {
        if ((char)bVar4 == '\0') {
          UVar14 = MapEditor_MapEditorBrush__GetAverageGhostSize(pMVar10,(MethodInfo *)0x0);
          fVar12 = UVar14.fields.y;
          if (fVar9 == 1.4013e-45) {
            pMVar10 = (__this->fields).Brush;
            if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0423871e;
            fVar13 = UVar14.fields.x * 0.1;
            fVar12 = 0.5;
            if (0.5 <= fVar13) {
              fVar12 = fVar13;
            }
            fVar13 = (float)iVar11 * fVar12 + (float)(pMVar10->fields).GridZ;
            fVar12 = 0.0;
            if (0.0 <= fVar13) {
              fVar12 = fVar13;
            }
            (pMVar10->fields).GridZ = (int32_t)fVar12;
          }
          else {
            if (fVar9 != 2.8026e-45) {
              fVar12 = UVar14.fields.z;
            }
            fVar13 = 0.5;
            if (0.5 <= fVar12 * 0.1) {
              fVar13 = fVar12 * 0.1;
            }
            if (fVar9 == 4.2039e-45) {
              pMVar10 = (__this->fields).Brush;
              if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0423871e;
              fVar13 = fVar13 * (float)iVar11 + (pMVar10->fields).SpacingY;
              fVar12 = 0.0;
              if (0.0 <= fVar13) {
                fVar12 = fVar13;
              }
              (pMVar10->fields).SpacingY = fVar12;
            }
            else if (fVar9 == 2.8026e-45) {
              pMVar10 = (__this->fields).Brush;
              if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0423871e;
              fVar13 = fVar13 * (float)iVar11 + (pMVar10->fields).SpacingX;
              fVar12 = 0.0;
              if (0.0 <= fVar13) {
                fVar12 = fVar13;
              }
              (pMVar10->fields).SpacingX = fVar12;
            }
            else {
              pMVar10 = (__this->fields).Brush;
              if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0423871e;
            }
          }
        }
        else if (fVar9 == 4.2039e-45) {
          iVar11 = iVar11 + (pMVar10->fields).GridY;
          iVar5 = 1;
          if (0 < iVar11) {
            iVar5 = iVar11;
          }
          (pMVar10->fields).GridY = iVar5;
        }
        else if (fVar9 == 2.8026e-45) {
          iVar11 = iVar11 + (pMVar10->fields).GridX;
          iVar5 = 1;
          if (0 < iVar11) {
            iVar5 = iVar11;
          }
          (pMVar10->fields).GridX = iVar5;
        }
        else if (fVar9 == 1.4013e-45) {
          iVar11 = iVar11 + (pMVar10->fields).RandomizeEachPlacement;
          bVar4 = 1;
          if (0 < iVar11) {
            bVar4 = iVar11;
          }
          (pMVar10->fields).RandomizeEachPlacement = bVar4;
        }
      }
      else {
        (pMVar10->fields).CurveAxis =
             (int32_t)((float)iVar11 * 0.5 + (float)(pMVar10->fields).CurveAxis);
      }
      MapEditor_MapEditorBrush__RegenerateGhosts(pMVar10,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._menu;
      if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto LAB_0423871e;
      UI_MapEditorMenu__SyncBrushPanelValues(pUVar1,(MethodInfo *)0x0);
    }
LAB_0423853f:
    pSVar2 = (__this->fields)._input;
  }
  else {
    if (ABS(fVar12) <= 0.0001) goto LAB_0423853f;
    MapEditor_MapEditorBrush__SetRadius
              (pMVar10,(fVar12 + fVar12 + 1.0) * (float)(pMVar10->fields).Mode,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._input;
  }
  if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).BrushReroll, pSVar3 == (Settings_KeybindSetting_o *)0x0))
  goto LAB_0423871e;
  bVar4 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pMVar10 = (__this->fields).Brush;
    if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0423871e;
    MapEditor_MapEditorBrush__Reseed(pMVar10,(MethodInfo *)0x0);
    pMVar10 = (__this->fields).Brush;
    if (pMVar10 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_0423871e;
    MapEditor_MapEditorBrush__RegenerateGhosts(pMVar10,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields)._input;
  if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).Select, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    bVar4 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      GameManagers_MapEditorGameManager__PlaceBrush(__this,method_00);
    }
    return;
  }
LAB_0423871e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$PlaceBrush
// il2cpp: void GameManagers_MapEditorGameManager__PlaceBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4238a10

void GameManagers_MapEditorGameManager__PlaceBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *objs;
  MapEditor_AddObjectCommand_o *__this_01;
  MethodInfo *in_RCX;
  MapEditor_MapEditorBrush_o *pMVar1;
  
  if (DAT_05705154 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AddObjectCommand);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05705154 = '\x01';
  }
  pMVar1 = (__this->fields).Brush;
  if (pMVar1 != (MapEditor_MapEditorBrush_o *)0x0) {
    if ((char)(pMVar1->fields).Active == '\0') {
      return;
    }
    objs = MapEditor_MapEditorBrush__BuildPlacements(pMVar1,(MethodInfo *)0x0);
    if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      if ((objs->fields)._size == 0) {
        return;
      }
      __this_01 = (MapEditor_AddObjectCommand_o *)il2cpp_runtime_glue(TypeInfo_AddObjectCommand);
      MapEditor_AddObjectCommand___ctor(__this_01,objs,(MethodInfo *)0x0);
      GameManagers_MapEditorGameManager__NewCommand
                (__this,(MapEditor_BaseCommand_o *)__this_01,1,in_RCX);
      __this_00 = (__this->fields)._menu;
      if (__this_00 != (UI_MapEditorMenu_o *)0x0) {
        UI_MapEditorMenu__SyncHierarchyPanel(__this_00,(MethodInfo *)0x0);
        pMVar1 = (__this->fields).Brush;
        if (pMVar1 != (MapEditor_MapEditorBrush_o *)0x0) {
          if ((char)(pMVar1->fields).Count != '\0') {
            MapEditor_MapEditorBrush__Reseed(pMVar1,(MethodInfo *)0x0);
            pMVar1 = (__this->fields).Brush;
            if (pMVar1 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_04238ae5;
          }
          MapEditor_MapEditorBrush__RegenerateGhosts(pMVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_04238ae5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$ToggleBrush
// il2cpp: void GameManagers_MapEditorGameManager__ToggleBrush (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4238af0

void GameManagers_MapEditorGameManager__ToggleBrush
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  char cVar1;
  MapEditor_MapEditorBrush_o *__this_00;
  UI_MapEditorMenu_o *pUVar2;
  MethodInfo *pMVar3;
  
  __this_00 = (__this->fields).Brush;
  if (__this_00 != (MapEditor_MapEditorBrush_o *)0x0) {
    cVar1 = (char)(__this_00->fields).Active;
    pMVar3 = (MethodInfo *)(ulong)(cVar1 == '\0');
    MapEditor_MapEditorBrush__SetActive(__this_00,(uint)(cVar1 == '\0'),(MethodInfo *)0x0);
    if (cVar1 == '\0') {
      GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar3);
      pUVar2 = (__this->fields)._menu;
      if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto LAB_04238b52;
      pMVar3 = (MethodInfo *)0x0;
      UI_MapEditorMenu__ShowBrushPanel(pUVar2,(MethodInfo *)0x0);
    }
    else {
      pUVar2 = (__this->fields)._menu;
      if (pUVar2 == (UI_MapEditorMenu_o *)0x0) goto LAB_04238b52;
      pMVar3 = (MethodInfo *)0x0;
      UI_MapEditorMenu__HideBrushPanel(pUVar2,(MethodInfo *)0x0);
    }
    GameManagers_MapEditorGameManager__OnSelectionChange(__this,pMVar3);
    return;
  }
LAB_04238b52:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$UpdateDrag
// il2cpp: void GameManagers_MapEditorGameManager__UpdateDrag (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4238730

void GameManagers_MapEditorGameManager__UpdateDrag
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o start;
  MapEditor_BaseGizmo_o *pMVar1;
  Settings_MapEditorInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  System_Collections_Generic_HashSet_MapObject__o *pSVar4;
  char cVar5;
  bool_conflict bVar6;
  UnityEngine_EventSystems_EventSystem_o *pUVar7;
  UnityEngine_Object_o *pUVar8;
  MethodInfo *method_00;
  bool bVar9;
  UI_MapEditorMenu_o *pUVar10;
  UnityEngine_Vector3_o UVar11;
  
  if (DAT_05705155 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705155 = '\x01';
  }
  pUVar10 = (__this->fields)._menu;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pMVar1 = (__this->fields).CurrentGizmo;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pMVar1 = (__this->fields).CurrentGizmo;
    if (pMVar1 == (MapEditor_BaseGizmo_o *)0x0) goto LAB_042389fc;
    cVar5 = (*(pMVar1->klass->vtable)._4_IsActive.methodPtr)();
    if (cVar5 != '\0') {
      *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
    }
  }
  pUVar10 = (__this->fields)._menu;
  if (pUVar10 == (UI_MapEditorMenu_o *)0x0) goto LAB_042389fc;
  bVar6 = UI_MapEditorMenu__IsPopupActive(pUVar10,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) != 0) goto LAB_0423882d;
LAB_042389e7:
    il2cpp_init_class();
    pUVar7 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  }
  else {
    *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) goto LAB_042389e7;
LAB_0423882d:
    pUVar7 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  }
  if (pUVar7 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto LAB_042389fc;
  pUVar8 = (UnityEngine_Object_o *)(pUVar7->fields).m_CurrentSelected;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_042389fc;
    pUVar8 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent<object>
                       ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_InputField_GetComponent_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
    }
  }
  pUVar10 = (__this->fields)._menu;
  if (*(char *)((long)&(__this->fields).IgnoreNextSelect + 1) != '\0') {
    start.fields.x = (float)(__this->fields)._isDrag;
    start.fields.y = (__this->fields)._dragStart.fields.x;
    UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pUVar10 == (UI_MapEditorMenu_o *)0x0) goto LAB_042389fc;
    UI_MapEditorMenu__SetDrag
              (pUVar10,1,start,(UnityEngine_Vector2_o)UVar11.fields._0_8_,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._input;
    if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Select, pSVar3 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_042389fc;
    bVar6 = Settings_KeybindSetting__GetKeyUp(pSVar3,0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    pSVar2 = (__this->fields)._input;
    if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Multiselect, pSVar3 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_042389fc;
    bVar9 = false;
    bVar6 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pSVar4 = (__this->fields).SelectedObjects;
      if (pSVar4 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto LAB_042389fc;
      bVar9 = 0 < (pSVar4->fields)._count;
    }
    GameManagers_MapEditorGameManager__Select(__this,(uint)bVar9,method_00);
    *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 0;
    pUVar10 = (__this->fields)._menu;
  }
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  if (pUVar10 != (UI_MapEditorMenu_o *)0x0) {
    UI_MapEditorMenu__SetDrag
              (pUVar10,0,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
LAB_042389fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$UpdateInput
// il2cpp: void GameManagers_MapEditorGameManager__UpdateInput (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4237b20

void GameManagers_MapEditorGameManager__UpdateInput
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  Settings_MapEditorInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  UI_MapEditorTopPanel_o *pUVar4;
  UI_MapEditorAddObjectPopup_o *pUVar5;
  bool_conflict bVar6;
  UnityEngine_EventSystems_EventSystem_o *pUVar7;
  UnityEngine_Object_o *pUVar8;
  MethodInfo *pMVar9;
  UnityEngine_Vector3_o UVar10;
  
  if (DAT_05705156 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&MethodInfo_InputField_GetComponent_InputField);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05705156 = '\x01';
  }
  pUVar1 = (__this->fields)._menu;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pSVar2 = (__this->fields)._input;
  if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).SaveMap, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
    bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._menu;
    if ((char)bVar6 == '\0') {
      if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
        bVar6 = UI_MapEditorMenu__IsPopupActive(pUVar1,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar7 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          pUVar8 = (UnityEngine_Object_o *)(pUVar7->fields).m_CurrentSelected;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04237f92;
            pUVar8 = (UnityEngine_Object_o *)
                     UnityEngine_GameObject__GetComponent<object>
                               ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_InputField_GetComponent_InputField);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar6 = UnityEngine_Object__op_Inequality
                              (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              return;
            }
          }
          pSVar2 = (__this->fields)._input;
          if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
             (pSVar3 = (pSVar2->fields).Undo, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
            pMVar9 = (MethodInfo *)0x0;
            bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
              pSVar2 = (__this->fields)._input;
              if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                 (pSVar3 = (pSVar2->fields).Redo, pSVar3 == (Settings_KeybindSetting_o *)0x0))
              goto LAB_04237f92;
              pMVar9 = (MethodInfo *)0x0;
              bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                GameManagers_MapEditorGameManager__Redo(__this,pMVar9);
                goto LAB_04237f84;
              }
              pSVar2 = (__this->fields)._input;
              if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                 (pSVar3 = (pSVar2->fields).CopyObjects, pSVar3 == (Settings_KeybindSetting_o *)0x0)
                 ) goto LAB_04237f92;
              pMVar9 = (MethodInfo *)0x0;
              bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                GameManagers_MapEditorGameManager__Copy(__this,pMVar9);
                goto LAB_04237f84;
              }
              pSVar2 = (__this->fields)._input;
              if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                 (pSVar3 = (pSVar2->fields).Paste, pSVar3 == (Settings_KeybindSetting_o *)0x0))
              goto LAB_04237f92;
              pMVar9 = (MethodInfo *)0x0;
              bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                GameManagers_MapEditorGameManager__Paste(__this,pMVar9);
                goto LAB_04237f84;
              }
              pSVar2 = (__this->fields)._input;
              if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                 (pSVar3 = (pSVar2->fields).Cut, pSVar3 == (Settings_KeybindSetting_o *)0x0))
              goto LAB_04237f92;
              pMVar9 = (MethodInfo *)0x0;
              bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                pSVar2 = (__this->fields)._input;
                if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                   (pSVar3 = (pSVar2->fields).AddObject, pSVar3 == (Settings_KeybindSetting_o *)0x0)
                   ) goto LAB_04237f92;
                bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
                if ((char)bVar6 != '\0') {
                  pUVar1 = (__this->fields)._menu;
                  if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
                     (pUVar5 = (pUVar1->fields).AddObjectPopup,
                     pUVar5 != (UI_MapEditorAddObjectPopup_o *)0x0)) {
                    if ((char)(pUVar5->fields).IsActive == '\0') {
                      if ((char)(pUVar1->fields).IsMouseUI == '\0') {
                        (*(pUVar5->klass->vtable)._21_Show.methodPtr)
                                  (pUVar5,(pUVar5->klass->vtable)._21_Show.method);
                      }
                    }
                    else {
                      (*(pUVar5->klass->vtable)._22_Hide.methodPtr)
                                (pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
                    }
                    goto LAB_04237f84;
                  }
                  goto LAB_04237f92;
                }
                pSVar2 = (__this->fields)._input;
                if ((pSVar2 == (Settings_MapEditorInputSettings_o *)0x0) ||
                   (pSVar3 = (pSVar2->fields).Delete, pSVar3 == (Settings_KeybindSetting_o *)0x0))
                goto LAB_04237f92;
                pMVar9 = (MethodInfo *)0x0;
                bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
                if ((char)bVar6 == '\0') {
                  pSVar2 = (__this->fields)._input;
                  if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
                     (pSVar3 = (pSVar2->fields).Deselect, pSVar3 != (Settings_KeybindSetting_o *)0x0
                     )) {
                    pMVar9 = (MethodInfo *)0x0;
                    bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
                    if ((char)bVar6 != '\0') {
                      GameManagers_MapEditorGameManager__DeselectAll(__this,pMVar9);
                      GameManagers_MapEditorGameManager__OnSelectionChange(__this,pMVar9);
                      goto LAB_04237f84;
                    }
                    pSVar2 = (__this->fields)._input;
                    if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
                       (pSVar3 = (pSVar2->fields).ChangeGizmo,
                       pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
                      bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
                      if ((char)bVar6 == '\0') {
                        pSVar2 = (__this->fields)._input;
                        if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
                           (pSVar3 = (pSVar2->fields).ToggleSnap,
                           pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
                          bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
                          if ((char)bVar6 == '\0') {
                            pSVar2 = (__this->fields)._input;
                            if ((pSVar2 != (Settings_MapEditorInputSettings_o *)0x0) &&
                               (pSVar3 = (pSVar2->fields).Select,
                               pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
                              bVar6 = Settings_KeybindSetting__GetKeyDown
                                                (pSVar3,0,(MethodInfo *)0x0);
                              if ((char)bVar6 != '\0') {
                                pUVar1 = (__this->fields)._menu;
                                if (pUVar1 == (UI_MapEditorMenu_o *)0x0) goto LAB_04237f92;
                                if ((char)(pUVar1->fields).IsMouseUI == '\0') {
                                  *(undefined1 *)((long)&(__this->fields).IgnoreNextSelect + 1) = 1;
                                  UVar10 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
                                  (__this->fields)._isDrag = (bool_conflict)UVar10.fields.x;
                                  (__this->fields)._dragStart.fields.x = UVar10.fields.y;
                                  (__this->fields)._dragStart.fields.y = UVar10.fields.z;
                                }
                              }
                              goto LAB_04237f84;
                            }
                          }
                          else {
                            pUVar1 = (__this->fields)._menu;
                            if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
                               (pUVar4 = (pUVar1->fields)._topPanel,
                               pUVar4 != (UI_MapEditorTopPanel_o *)0x0)) {
                              UI_MapEditorTopPanel__ToggleSnap(pUVar4,(MethodInfo *)0x0);
                              goto LAB_04237f84;
                            }
                          }
                        }
                      }
                      else {
                        pUVar1 = (__this->fields)._menu;
                        if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
                           (pUVar4 = (pUVar1->fields)._topPanel,
                           pUVar4 != (UI_MapEditorTopPanel_o *)0x0)) {
                          UI_MapEditorTopPanel__NextGizmo(pUVar4,(MethodInfo *)0x0);
                          goto LAB_04237f84;
                        }
                      }
                    }
                  }
                  goto LAB_04237f92;
                }
              }
              else {
                GameManagers_MapEditorGameManager__Copy(__this,pMVar9);
              }
              GameManagers_MapEditorGameManager__Delete(__this,pMVar9);
            }
            else {
              GameManagers_MapEditorGameManager__Undo(__this,pMVar9);
            }
LAB_04237f84:
            *(undefined1 *)&(__this->fields).IgnoreNextSelect = 0;
            return;
          }
        }
      }
    }
    else if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
            (pUVar4 = (pUVar1->fields)._topPanel, pUVar4 != (UI_MapEditorTopPanel_o *)0x0)) {
      UI_MapEditorTopPanel__Save(pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
LAB_04237f92:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$Save
// il2cpp: void GameManagers_MapEditorGameManager__Save (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4238b60

void GameManagers_MapEditorGameManager__Save
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorTopPanel_o *__this_00;
  
  pUVar1 = (__this->fields)._menu;
  if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._topPanel, __this_00 != (UI_MapEditorTopPanel_o *)0x0)) {
    UI_MapEditorTopPanel__Save(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$OnSelectionChange
// il2cpp: void GameManagers_MapEditorGameManager__OnSelectionChange (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4235af0

void GameManagers_MapEditorGameManager__OnSelectionChange
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_MapObject__o *pSVar1;
  MapEditor_MapEditorBrush_o *pMVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorHierarchyPanel_o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  System_Collections_Generic_List_MapObject__o *objs;
  MethodInfo *method_00;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar6;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (DAT_05705157 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Map_MapObject);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_MapObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05705157 = '\x01';
  }
  pSVar1 = (__this->fields).SelectedObjects;
  pSVar5 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_MapObject);
  System_Collections_Generic_HashSet<object>___ctor
            (pSVar5,(System_Collections_Generic_IEnumerable_T__o *)pSVar1,MethodInfo_HashSet_1_Map_MapObject);
  if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_04235dcb;
  System_Collections_Generic_HashSet<object>__GetEnumerator(&local_48,pSVar5,MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
  pSVar6 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48.fields._set;
  while (__this_01.fields._8_8_ = __this,
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88
        , __this_01.fields._current = (Il2CppObject *)pSVar6,
        bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98),
        (char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (local_48.fields._current[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((System_Collections_Generic_Dictionary_int__object__o *)
        **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar4 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_int__object__o *)
                       **(undefined8 **)(TypeInfo_MapLoader + 0xb8),
                       *(int32_t *)&((local_48.fields._current[2].klass)->_1).byval_arg.data,
                       MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      if (DAT_0570514d == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
        DAT_0570514d = '\x01';
      }
      pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).SelectedObjects;
      if (pSVar5 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_HashSet<object>__Remove
                (pSVar5,local_48.fields._current,MethodInfo_Boolean_Remove);
    }
  }
  __this_02.fields._8_8_ = __this;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88;
  __this_02.fields._current = (Il2CppObject *)pSVar6;
  System_Collections_Generic_HashSet_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
  pSVar1 = (__this->fields).SelectedObjects;
  if (pSVar1 == (System_Collections_Generic_HashSet_MapObject__o *)0x0) goto LAB_04235dcb;
  if ((pSVar1->fields)._count < 1) {
LAB_04235d28:
    pUVar3 = (__this->fields)._menu;
    if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto LAB_04235dcb;
    UI_MapEditorMenu__HideInspector(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._menu;
  }
  else {
    pMVar2 = (__this->fields).Brush;
    if (pMVar2 == (MapEditor_MapEditorBrush_o *)0x0) goto LAB_04235dcb;
    if ((char)(pMVar2->fields).Active != '\0') goto LAB_04235d28;
    pUVar3 = (__this->fields)._menu;
    objs = (System_Collections_Generic_List_MapObject__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)objs,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar1,MethodInfo_List_1_Map_MapObject);
    if (pUVar3 == (UI_MapEditorMenu_o *)0x0) goto LAB_04235dcb;
    UI_MapEditorMenu__ShowInspector(pUVar3,objs,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._menu;
  }
  if ((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
     (__this_00 = (pUVar3->fields).HierarchyPanel, __this_00 != (UI_MapEditorHierarchyPanel_o *)0x0)
     ) {
    method_00 = (MethodInfo *)0x0;
    UI_MapEditorHierarchyPanel__SyncSelectedItems(__this_00,(MethodInfo *)0x0);
    GameManagers_MapEditorGameManager__SyncGizmos(__this,method_00);
    return;
  }
LAB_04235dcb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$SyncGizmos
// il2cpp: void GameManagers_MapEditorGameManager__SyncGizmos (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4238b90

void GameManagers_MapEditorGameManager__SyncGizmos
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  MapEditor_OutlineGizmo_o *pMVar1;
  MapEditor_PositionGizmo_o *pMVar2;
  MapEditor_RotationGizmo_o *pMVar3;
  MapEditor_ScaleGizmo_o *pMVar4;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  pMVar1 = (__this->fields)._outlineGizmo;
  if (pMVar1 != (MapEditor_OutlineGizmo_o *)0x0) {
    (*(pMVar1->klass->vtable)._7_OnSelectionChange.methodPtr)
              (pMVar1,(pMVar1->klass->vtable)._7_OnSelectionChange.method);
    pMVar2 = (__this->fields)._positionGizmo;
    if (pMVar2 != (MapEditor_PositionGizmo_o *)0x0) {
      (*(pMVar2->klass->vtable)._7_OnSelectionChange.methodPtr)
                (pMVar2,(pMVar2->klass->vtable)._7_OnSelectionChange.method);
      pMVar3 = (__this->fields)._rotationGizmo;
      if (pMVar3 != (MapEditor_RotationGizmo_o *)0x0) {
        (*(pMVar3->klass->vtable)._7_OnSelectionChange.methodPtr)
                  (pMVar3,(pMVar3->klass->vtable)._7_OnSelectionChange.method);
        pMVar4 = (__this->fields)._scaleGizmo;
        if (pMVar4 != (MapEditor_ScaleGizmo_o *)0x0) {
          vtable_dispatch = (pMVar4->klass->vtable)._7_OnSelectionChange.methodPtr;
          (*vtable_dispatch)
                    (pMVar4,(pMVar4->klass->vtable)._7_OnSelectionChange.method,extraout_RDX,
                     vtable_dispatch);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$SetGizmo
// il2cpp: void GameManagers_MapEditorGameManager__SetGizmo (GameManagers_MapEditorGameManager_o* __this, System_String_o* gizmo, const MethodInfo* method);
// 0x4238c10

void GameManagers_MapEditorGameManager__SetGizmo
               (GameManagers_MapEditorGameManager_o *__this,System_String_o *gizmo,
               MethodInfo *method)

{
  bool_conflict bVar1;
  MapEditor_PositionGizmo_o *method_00;
  
  if (DAT_05705158 == '\0') {
    il2cpp_init_method_metadata(&"Position");
    il2cpp_init_method_metadata(&"Rotation");
    DAT_05705158 = '\x01';
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
  il2cpp_runtime_glue(&(__this->fields).CurrentGizmo);
  GameManagers_MapEditorGameManager__SyncGizmos(__this,(MethodInfo *)method_00);
  return;
}


// GameManagers.MapEditorGameManager$$SetGizmoMode
// il2cpp: void GameManagers_MapEditorGameManager__SetGizmoMode (GameManagers_MapEditorGameManager_o* __this, int32_t mode, const MethodInfo* method);
// 0x4238cb0

void GameManagers_MapEditorGameManager__SetGizmoMode
               (GameManagers_MapEditorGameManager_o *__this,int32_t mode,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  (__this->fields).CurrentGizmoMode = mode;
  GameManagers_MapEditorGameManager__SyncGizmos
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,mode));
  return;
}


// GameManagers.MapEditorGameManager$$GetNextObjectId
// il2cpp: int32_t GameManagers_MapEditorGameManager__GetNextObjectId (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4238cc0

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
// 0x4237890

int32_t GameManagers_MapEditorGameManager__GetHighestObjectId
                  (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  int iVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_05705159 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_I);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05705159 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  iVar5 = 0;
  uVar6 = 0;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (((System_Collections_Generic_Dictionary_int__object__o *)
       **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
       (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
     (__this_02 = System_Collections_Generic_Dictionary<int__object>__get_Keys
                            ((System_Collections_Generic_Dictionary_int__object__o *)
                             **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_I),
     __this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection<int__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffc8,__this_02,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    iVar2 = 0;
    while (__this_00.fields._8_8_ = pIVar4, __this_00.fields._dictionary = pSVar3,
          __this_00.fields._currentKey._0_4_ = iVar5, __this_00.fields._currentKey._4_4_ = uVar6,
          bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int__object>__MoveNext
                            (__this_00,(MethodInfo_31C2F60 *)&stack0xffffffffffffffc8),
          (char)bVar1 != '\0') {
      if (iVar2 < iVar5) {
        iVar2 = iVar5;
      }
    }
    __this_01.fields._8_8_ = pIVar4;
    __this_01.fields._dictionary = pSVar3;
    __this_01.fields._currentKey._0_4_ = iVar5;
    __this_01.fields._currentKey._4_4_ = uVar6;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<int__object>__Dispose
              (__this_01,(MethodInfo_31C2F50 *)&stack0xffffffffffffffc8);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$TryGetSetting<object>
// il2cpp: Il2CppObject* GameManagers_MapEditorGameManager__TryGetSetting_object_ (GameManagers_MapEditorGameManager_o* __this, System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, System_String_o* key, Il2CppObject* Default, const MethodInfo_25394B0* method);
// 0x26394b0

Il2CppObject *
GameManagers_MapEditorGameManager__TryGetSetting<object>
          (GameManagers_MapEditorGameManager_o *__this,
          System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,
          System_String_o *key,Il2CppObject *Default,MethodInfo_25394B0 *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  long lVar4;
  
  if (method->rgctx_data == (MethodInfo_25394B0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    if (method->rgctx_data == (MethodInfo_25394B0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
    }
  }
  if (settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                       (Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 != '\0') {
      pIVar2 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                          (Il2CppObject *)key,MethodInfo_BaseSetting_get_Item);
      pIVar3 = method->rgctx_data->_0_T;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar3);
      }
      lVar4 = il2cpp_runtime_glue(pIVar2,pIVar3);
      if (lVar4 != 0) {
        pIVar2 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                            (Il2CppObject *)key,MethodInfo_BaseSetting_get_Item);
        pIVar3 = method->rgctx_data->_0_T;
        if (((pIVar3->_2).field_0x6d & 1) == 0) {
          pIVar3 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar3);
        }
        if (pIVar2 == (Il2CppObject *)0x0) {
          Default = (Il2CppObject *)0x0;
        }
        else {
          Default = (Il2CppObject *)il2cpp_runtime_glue(pIVar2,pIVar3);
          if (Default == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIVar2,pIVar3);
          }
        }
      }
    }
    return Default;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$ToggleLights
// il2cpp: void GameManagers_MapEditorGameManager__ToggleLights (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4238cd0

/* WARNING: Removing unreachable block (ram,0x0423940c) */
/* WARNING: Removing unreachable block (ram,0x04239415) */
/* WARNING: Removing unreachable block (ram,0x0423976f) */

void GameManagers_MapEditorGameManager__ToggleLights
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  long *plVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_07;
  _union_234436 _Var4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Behaviour_o *pUVar8;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  UnityEngine_Light_o *pUVar11;
  UnityEngine_Color_o UVar12;
  System_Collections_Generic_List_Enumerator_T__c *pSVar13;
  Il2CppRGCTXData *pIVar14;
  _union_234436 _Var15;
  _union_234436 _Var16;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  Il2CppRGCTXData *pIStack_60;
  _union_234436 local_58;
  Il2CppObject *local_50;
  undefined1 local_48 [16];
  _union_234436 local_38;
  
  if (DAT_0570515a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptComponent_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Light_AddComponent_Light);
    il2cpp_init_method_metadata(&MethodInfo_Light_GetComponent_Light);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapScriptComponent__Get);
    il2cpp_init_method_metadata(&MethodInfo_ColorSetting_TryGetSetting_ColorSetting);
    il2cpp_init_method_metadata(&MethodInfo_FloatSetting_TryGetSetting_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"Color");
    il2cpp_init_method_metadata(&"Daylight");
    il2cpp_init_method_metadata(&"Intensity");
    il2cpp_init_method_metadata(&"PointLight");
    il2cpp_init_method_metadata(&"Range");
    DAT_0570515a = '\x01';
  }
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppRGCTXData *)0x0;
  local_58.genericMethod = (Il2CppObject *)0x0;
  if (*(char *)&(__this->fields)._dragStart.fields.z == '\0') {
    *(undefined1 *)&(__this->fields)._dragStart.fields.z = 1;
    plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar1 != (long *)0x0) {
      if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(TypeInfo_MapEditorGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapEditorGameManager + 0x130) * 8) !=
          TypeInfo_MapEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(plVar1);
      }
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((System_Collections_Generic_Dictionary_int__object__o *)
         **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
         (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
       (pSVar6 = System_Collections_Generic_Dictionary<int__object>__get_Values
                           ((System_Collections_Generic_Dictionary_int__object__o *)
                            **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
       pSVar6 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<int__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )local_48,pSVar6,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar14 = (Il2CppRGCTXData *)local_48._8_8_;
      _Var16 = local_38;
      do {
        do {
          do {
            while( true ) {
              _Var15 = _Var16;
              __this_03.fields._8_8_ = pIVar14;
              __this_03.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13;
              __this_03.fields._currentValue = _Var15.genericMethod;
              bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                                (__this_03,(MethodInfo_31C3100 *)&stack0xffffffffffffff68);
              if ((char)bVar5 == '\0') {
                __this_07.fields._8_8_ = pIVar14;
                __this_07.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13;
                __this_07.fields._currentValue = _Var15.genericMethod;
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
                          (__this_07,(MethodInfo_31C30F0 *)&stack0xffffffffffffff68);
                return;
              }
              if (_Var15.genericMethod == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if (*(void **)((long)_Var15.genericMethod + 0x18) == (UnityEngine_GameObject_o *)0x0)
              {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              _Var16 = _Var15;
              pUVar7 = (UnityEngine_Object_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (*(void **)((long)_Var15.genericMethod + 0x18),MethodInfo_Light_GetComponent_Light);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar5 = UnityEngine_Object__op_Inequality
                                (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') break;
              if (*(void **)((long)_Var15.genericMethod + 0x18) == (UnityEngine_GameObject_o *)0x0)
              {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pUVar8 = (UnityEngine_Behaviour_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (*(void **)((long)_Var15.genericMethod + 0x18),MethodInfo_Light_GetComponent_Light);
              if (pUVar8 == (UnityEngine_Behaviour_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              UnityEngine_Behaviour__set_enabled(pUVar8,1,(MethodInfo *)0x0);
            }
            pIVar2 = ((Il2CppObject *)((long)_Var15.genericMethod + 0x20))->klass;
          } while (pIVar2 == (Il2CppClass *)0x0);
          pvVar3 = (pIVar2->_1).image;
        } while ((*(byte *)((long)pvVar3 + 0x130) < *(byte *)(TypeInfo_MapScriptSceneObject + 0x130)) ||
                (*(long *)(*(long *)((long)pvVar3 + 200) + -8 +
                          (ulong)*(byte *)(TypeInfo_MapScriptSceneObject + 0x130) * 8) != TypeInfo_MapScriptSceneObject));
        __this_00 = (pIVar2->_1).fields;
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this_00,
                   MethodInfo_List_1_T__Enumerator_Map_MapScriptComponent__Get);
        local_58 = local_38;
        local_68 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
        pIStack_60 = (Il2CppRGCTXData *)local_48._8_8_;
        if (plVar1 == (long *)0x0) {
          __this_05.fields._8_8_ = pIVar14;
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
          __this_05.fields._current = _Var16.genericMethod;
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_05,(MethodInfo_3185E20 *)&local_68);
          if ((char)bVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        else {
          do {
            do {
              while( true ) {
                __this_04.fields._8_8_ = pIVar14;
                __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
                __this_04.fields._current = _Var16.genericMethod;
                bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_04,(MethodInfo_3185E20 *)&local_68);
                _Var4 = local_58;
                if ((char)bVar5 == '\0') goto LAB_042393de;
                if (local_58.genericMethod == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if ((CustomLogic_CustomLogicEvaluator_o *)plVar1[6] ==
                    (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                settings = CustomLogic_CustomLogicEvaluator__GetComponentSettings
                                     ((CustomLogic_CustomLogicEvaluator_o *)plVar1[6],
                                      (System_String_o *)
                                      ((Il2CppObject *)((long)local_58.genericMethod + 0x10))->klass
                                      ,*(void **)((long)local_58.genericMethod + 0x18),
                                      (MethodInfo *)0x0);
                bVar5 = System_String__op_Equality
                                  ((System_String_o *)
                                   ((Il2CppObject *)((long)_Var4.genericMethod + 0x10))->klass,
                                   "Daylight",(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') break;
                pIVar9 = GameManagers_MapEditorGameManager__TryGetSetting<object>
                                   (__this,settings,"Color",(Il2CppObject *)0x0,MethodInfo_ColorSetting_TryGetSetting_ColorSetting);
                pIVar10 = GameManagers_MapEditorGameManager__TryGetSetting<object>
                                    (__this,settings,"Intensity",(Il2CppObject *)0x0,MethodInfo_FloatSetting_TryGetSetting_FloatSetting);
                if ((pIVar9 != (Il2CppObject *)0x0) && (pIVar10 != (Il2CppObject *)0x0)) {
                  if (*(void **)((long)_Var15.genericMethod + 0x18) ==
                      (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar11 = (UnityEngine_Light_o *)
                            UnityEngine_GameObject__AddComponent<object>
                                      (*(void **)((long)_Var15.genericMethod + 0x18),MethodInfo_Light_AddComponent_Light);
                  if (pUVar11 == (UnityEngine_Light_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UnityEngine_Light__set_type(pUVar11,1,(MethodInfo *)0x0);
                  if (pIVar9[1].monitor == (Utility_Color255_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UVar12 = Utility_Color255__ToColor(pIVar9[1].monitor,(MethodInfo *)0x0);
                  UnityEngine_Light__set_color(pUVar11,UVar12,(MethodInfo *)0x0);
                  UnityEngine_Light__set_intensity
                            (pUVar11,*(float *)((long)&pIVar10[1].klass + 4),(MethodInfo *)0x0);
                  UnityEngine_Light__set_shadows(pUVar11,1,(MethodInfo *)0x0);
                  goto LAB_042393de;
                }
              }
              bVar5 = System_String__op_Equality
                                ((System_String_o *)
                                 ((Il2CppObject *)((long)_Var4.genericMethod + 0x10))->klass,
                                 "PointLight",(MethodInfo *)0x0);
            } while ((char)bVar5 == '\0');
            pIVar9 = GameManagers_MapEditorGameManager__TryGetSetting<object>
                               (__this,settings,"Color",(Il2CppObject *)0x0,MethodInfo_ColorSetting_TryGetSetting_ColorSetting);
            local_50 = GameManagers_MapEditorGameManager__TryGetSetting<object>
                                 (__this,settings,"Intensity",(Il2CppObject *)0x0,MethodInfo_FloatSetting_TryGetSetting_FloatSetting);
            pIVar10 = GameManagers_MapEditorGameManager__TryGetSetting<object>
                                (__this,settings,"Range",(Il2CppObject *)0x0,MethodInfo_FloatSetting_TryGetSetting_FloatSetting);
          } while (((pIVar9 == (Il2CppObject *)0x0) || (local_50 == (Il2CppObject *)0x0)) ||
                  (pIVar10 == (Il2CppObject *)0x0));
          if (*(void **)((long)_Var15.genericMethod + 0x18) == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar11 = (UnityEngine_Light_o *)
                    UnityEngine_GameObject__AddComponent<object>
                              (*(void **)((long)_Var15.genericMethod + 0x18),MethodInfo_Light_AddComponent_Light);
          if (pUVar11 == (UnityEngine_Light_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Light__set_type(pUVar11,2,(MethodInfo *)0x0);
          if (pIVar9[1].monitor == (Utility_Color255_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UVar12 = Utility_Color255__ToColor(pIVar9[1].monitor,(MethodInfo *)0x0);
          UnityEngine_Light__set_color(pUVar11,UVar12,(MethodInfo *)0x0);
          UnityEngine_Light__set_intensity
                    (pUVar11,*(float *)((long)&local_50[1].klass + 4),(MethodInfo *)0x0);
          UnityEngine_Light__set_range
                    (pUVar11,*(float *)((long)&pIVar10[1].klass + 4),(MethodInfo *)0x0);
        }
LAB_042393de:
        __this_06.fields._8_8_ = pIVar14;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar13;
        __this_06.fields._current = _Var16.genericMethod;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_06,(MethodInfo_3185E10 *)&local_68);
      } while( true );
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((System_Collections_Generic_Dictionary_int__object__o *)
         **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
         (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
       (pSVar6 = System_Collections_Generic_Dictionary<int__object>__get_Values
                           ((System_Collections_Generic_Dictionary_int__object__o *)
                            **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
       pSVar6 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<int__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )local_48,pSVar6,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar14 = (Il2CppRGCTXData *)local_48._8_8_;
      while( true ) {
        do {
          _Var16 = local_38;
          __this_01.fields._8_8_ = pIVar14;
          __this_01.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13;
          __this_01.fields._currentValue = _Var16.genericMethod;
          bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                            (__this_01,(MethodInfo_31C3100 *)&stack0xffffffffffffff68);
          if ((char)bVar5 == '\0') {
            __this_02.fields._8_8_ = pIVar14;
            __this_02.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar13;
            __this_02.fields._currentValue = _Var16.genericMethod;
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
                      (__this_02,(MethodInfo_31C30F0 *)&stack0xffffffffffffff68);
            *(undefined1 *)&(__this->fields)._dragStart.fields.z = 0;
            return;
          }
          if (_Var16.genericMethod == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (*(void **)((long)_Var16.genericMethod + 0x18) == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          _Var15 = _Var16;
          pUVar7 = (UnityEngine_Object_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (*(void **)((long)_Var16.genericMethod + 0x18),MethodInfo_Light_GetComponent_Light);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          local_38 = _Var15;
        } while ((char)bVar5 == '\0');
        if (*(void **)((long)_Var16.genericMethod + 0x18) == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar8 = (UnityEngine_Behaviour_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (*(void **)((long)_Var16.genericMethod + 0x18),MethodInfo_Light_GetComponent_Light);
        if (pUVar8 == (UnityEngine_Behaviour_o *)0x0) break;
        UnityEngine_Behaviour__set_enabled(pUVar8,0,(MethodInfo *)0x0);
        local_38 = _Var15;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MapEditorGameManager$$SetLayerVisibility
// il2cpp: void GameManagers_MapEditorGameManager__SetLayerVisibility (GameManagers_MapEditorGameManager_o* __this, Settings_HashSetSetting_int__o* selectedLayers, const MethodInfo* method);
// 0x42398e0

/* WARNING: Removing unreachable block (ram,0x04239d0e) */
/* WARNING: Removing unreachable block (ram,0x04239c3f) */
/* WARNING: Type propagation algorithm not settling */

void GameManagers_MapEditorGameManager__SetLayerVisibility
               (GameManagers_MapEditorGameManager_o *__this,
               Settings_HashSetSetting_int__o *selectedLayers,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  void *pvVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  char cVar3;
  bool_conflict bVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  bool_conflict value;
  _union_234436 _Var5;
  Il2CppType *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  _union_234436 local_68;
  Il2CppType *pIStack_60;
  Il2CppObject *local_58;
  _union_234436 local_48;
  Il2CppType *pIStack_40;
  Il2CppObject *local_38;
  
  if (DAT_0570515b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    il2cpp_init_method_metadata(&"Physical");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Region");
    DAT_0570515b = '\x01';
  }
  local_68.genericMethod =
       (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (((System_Collections_Generic_Dictionary_int__object__o *)
       **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
       (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
     (__this_05 = System_Collections_Generic_Dictionary<int__object>__get_Values
                            ((System_Collections_Generic_Dictionary_int__object__o *)
                             **(undefined8 **)(TypeInfo_MapLoader + 0xb8),MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
     __this_05 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_ValueCollection<int__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
             &local_48,__this_05,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
  _Var5 = local_48;
  pIVar6 = pIStack_40;
  pIVar7 = local_38;
LAB_04239a70:
  do {
    do {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._dictionary = _Var5.genericMethod;
      __this_01.fields._currentValue = pIVar7;
      bVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                        (__this_01,(MethodInfo_31C3100 *)&stack0xffffffffffffff78);
      if ((char)bVar4 == '\0') {
        __this_04.fields._8_8_ = pIVar6;
        __this_04.fields._dictionary = _Var5.genericMethod;
        __this_04.fields._currentValue = pIVar7;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
                  (__this_04,(MethodInfo_31C30F0 *)&stack0xffffffffffffff78);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar1 = pIVar7[2].klass;
    } while (pIVar1 == (Il2CppClass *)0x0);
    pvVar2 = (pIVar1->_1).image;
  } while ((*(byte *)((long)pvVar2 + 0x130) < *(byte *)(TypeInfo_MapScriptSceneObject + 0x130)) ||
          (*(long *)(*(long *)((long)pvVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MapScriptSceneObject + 0x130) * 8
                    ) != TypeInfo_MapScriptSceneObject));
  if (selectedLayers == (Settings_HashSetSetting_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar8 = pIVar7;
  bVar4 = Settings_HashSetSetting<int>__Contains(selectedLayers,0,MethodInfo_Boolean_Contains);
  value = 1;
  if ((char)bVar4 == '\0') {
    __this_00 = (System_Collections_Generic_HashSet_int__o *)(selectedLayers->fields)._value;
    if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_HashSet<int>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_48,__this_00,
               MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
    local_58 = local_38;
    local_68 = local_48;
    pIStack_60 = pIStack_40;
switchD_04239b82_default:
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._set = _Var5.genericMethod;
    __this_02.fields._current = pIVar8;
    bVar4 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                      (__this_02,(MethodInfo_3180BA0 *)&local_68);
    if ((char)bVar4 == '\0') {
      value = 0;
      goto LAB_04239c1f;
    }
    switch(local_58._0_4_) {
    case 1:
      cVar3 = (char)(pIVar1->_1).byval_arg.bits;
      break;
    case 2:
      cVar3 = (char)(pIVar1->_1).byval_arg.bits;
      goto joined_r0x04239bee;
    case 3:
      cVar3 = *(char *)((long)&(pIVar1->_1).byval_arg.bits + 2);
      break;
    case 4:
      cVar3 = *(char *)((long)&(pIVar1->_1).byval_arg.bits + 2);
      goto joined_r0x04239bee;
    case 5:
      cVar3 = *(char *)((long)&(pIVar1->_1).byval_arg.bits + 1);
      break;
    case 6:
      cVar3 = *(char *)((long)&(pIVar1->_1).byval_arg.bits + 1);
      goto joined_r0x04239bee;
    case 7:
      bVar4 = System_String__op_Equality((pIVar1->_1).generic_class,"Physical",(MethodInfo *)0x0);
      cVar3 = (char)bVar4;
      break;
    case 8:
      bVar4 = System_String__op_Equality((pIVar1->_1).generic_class,"Region",(MethodInfo *)0x0);
      cVar3 = (char)bVar4;
      break;
    case 9:
      bVar4 = System_String__op_Equality((pIVar1->_1).generic_class,"None",(MethodInfo *)0x0);
      cVar3 = (char)bVar4;
      break;
    case 10:
      cVar3 = *(char *)((long)&(pIVar1->_1).byval_arg.bits + 3);
      break;
    case 0xb:
      cVar3 = *(char *)((long)&(pIVar1->_1).byval_arg.bits + 3);
joined_r0x04239bee:
      if (cVar3 == '\0') goto LAB_04239c19;
    default:
      goto switchD_04239b82_default;
    }
    if (cVar3 != '\0') goto LAB_04239c19;
    goto switchD_04239b82_default;
  }
  goto LAB_04239c4f;
LAB_04239c19:
  value = 1;
LAB_04239c1f:
  __this_03.fields._8_8_ = pIVar6;
  __this_03.fields._set = _Var5.genericMethod;
  __this_03.fields._current = pIVar8;
  System_Collections_Generic_HashSet_Enumerator<int>__Dispose
            (__this_03,(MethodInfo_3180B90 *)&local_68);
LAB_04239c4f:
  if (pIVar7[1].monitor == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  UnityEngine_GameObject__SetActive(pIVar7[1].monitor,value,(MethodInfo *)0x0);
  pIVar7 = pIVar8;
  goto LAB_04239a70;
}


// GameManagers.MapEditorGameManager$$.ctor
// il2cpp: void GameManagers_MapEditorGameManager___ctor (GameManagers_MapEditorGameManager_o* __this, const MethodInfo* method);
// 0x4239db0

void GameManagers_MapEditorGameManager___ctor
               (GameManagers_MapEditorGameManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar1;
  MapEditor_MapEditorBrush_o *__this_01;
  
  if (DAT_0570515c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Map_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_MapObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_MapEditor_BaseCommand);
    il2cpp_init_method_metadata(&TypeInfo_List_BaseCommand);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorBrush);
    DAT_0570515c = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_MapObject);
  System_Collections_Generic_HashSet<object>___ctor(__this_00,MethodInfo_HashSet_1_Map_MapObject);
  (__this->fields).SelectedObjects = (System_Collections_Generic_HashSet_MapObject__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).SelectedObjects,__this_00);
  pSVar1 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_BaseCommand);
  System_Collections_Generic_List<object>___ctor(pSVar1,MethodInfo_List_1_MapEditor_BaseCommand);
  (__this->fields)._undoCommands = (System_Collections_Generic_List_BaseCommand__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._undoCommands,pSVar1);
  pSVar1 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_BaseCommand);
  System_Collections_Generic_List<object>___ctor(pSVar1,MethodInfo_List_1_MapEditor_BaseCommand);
  (__this->fields)._redoCommands = (System_Collections_Generic_List_BaseCommand__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._redoCommands,pSVar1);
  (__this->fields)._clipboard = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._clipboard);
  __this_01 = (MapEditor_MapEditorBrush_o *)il2cpp_runtime_glue(TypeInfo_MapEditorBrush);
  MapEditor_MapEditorBrush___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).Brush = __this_01;
  il2cpp_runtime_glue(&(__this->fields).Brush);
  GameManagers_BaseGameManager___ctor((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  return;
}


