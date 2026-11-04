// Type: Map.MapDestruction
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/MapDestruction.cs
// Prior real C# source: none
// --------------------------------

// Map.MapDestruction.<SweepHitbox>d__31$$.ctor
// il2cpp: void Map_MapDestruction__SweepHitbox_d__31___ctor (Map_MapDestruction__SweepHitbox_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Map_MapDestruction__SweepHitbox_d__31___ctor(Map_MapDestruction__SweepHitbox_d__31_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapDestruction.<SweepHitbox>d__31$$System.IDisposable.Dispose
// il2cpp: void Map_MapDestruction__SweepHitbox_d__31__System_IDisposable_Dispose (Map_MapDestruction__SweepHitbox_d__31_o* __this, const MethodInfo* method);
// 0x180547020

void
Map_MapDestruction__SweepHitbox_d__31__System_IDisposable_Dispose(Map_MapDestruction__SweepHitbox_d__31_o* __this, MethodInfo* method)

{
  return;
}


// Map.MapDestruction.<SweepHitbox>d__31$$MoveNext
// il2cpp: bool Map_MapDestruction__SweepHitbox_d__31__MoveNext (Map_MapDestruction__SweepHitbox_d__31_o* __this, const MethodInfo* method);
// 0x181eb9770

bool Map_MapDestruction__SweepHitbox_d__31__MoveNext
               (Map_MapDestruction__SweepHitbox_d__31_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar7;
  byte bVar11;
  int iVar12;
  Characters_BaseHitbox_o *pCVar13;
  UnityEngine_Collider_o *pUVar14;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Collider_array *pUVar15;
  Characters_BaseCharacter_o *attacker;
  Il2CppObject *value;
  float fVar16;
  float fVar17;
  float fVar18;
  bool bVar19;
  int32_t iVar20;
  System_Collections_Generic_HashSet_int__o *pSVar21;
  UnityEngine_Bounds_o *pUVar22;
  UnityEngine_Vector3_o *pUVar23;
  UnityEngine_Transform_o *pUVar24;
  UnityEngine_Quaternion_o *pUVar25;
  float hitSize;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_o local_b8;
  UnityEngine_Bounds_o local_a8 [6];
  
  if (Il2CppMethodInitialized_18434506e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434506e = '\x01';
  }
  iVar12 = (__this->fields).__1__state;
  if (iVar12 == 0) {
    (__this->fields).__1__state = -1;
    pSVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (pSVar21,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    (__this->fields)._hit_5__2 = pSVar21;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hit_5__2,pSVar21);
    pCVar13 = (__this->fields).hitbox;
    if (pCVar13 == (Characters_BaseHitbox_o *)0x0) goto label_181eb9ce3;
    pUVar14 = (pCVar13->fields)._collider;
    (__this->fields)._collider_5__3 = pUVar14;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._collider_5__3,pUVar14);
    pUVar14 = (__this->fields)._collider_5__3;
    if (pUVar14 == (UnityEngine_Collider_o *)0x0) goto label_181eb9ce3;
    pUVar22 = UnityEngine_Collider__get_bounds(local_a8,pUVar14,(MethodInfo *)0x0);
    fVar16 = (pUVar22->fields).m_Center.fields.y;
    fVar17 = (pUVar22->fields).m_Center.fields.z;
    local_a8[0].fields.m_Extents.fields.y = (pUVar22->fields).m_Extents.fields.y;
    local_a8[0].fields.m_Extents.fields.z = (pUVar22->fields).m_Extents.fields.z;
    (__this->fields)._previous_5__4.fields.x = (pUVar22->fields).m_Center.fields.x;
    (__this->fields)._previous_5__4.fields.y = fVar16;
    (__this->fields)._previous_5__4.fields.z = fVar17;
  }
  else {
    if (iVar12 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  pUVar14 = (__this->fields)._collider_5__3;
  if (pUVar14 == (UnityEngine_Collider_o *)0x0) goto label_181eb9ce3;
  bVar19 = UnityEngine_Collider__get_enabled(pUVar14,(MethodInfo *)0x0);
  if (!bVar19) {
    return false;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  bVar19 = Map_MapDestruction__get_Enabled((MethodInfo *)0x0);
  if (!bVar19) {
    return false;
  }
  pUVar14 = (__this->fields)._collider_5__3;
  if (pUVar14 == (UnityEngine_Collider_o *)0x0) goto label_181eb9ce3;
  pUVar22 = UnityEngine_Collider__get_bounds(local_a8,pUVar14,(MethodInfo *)0x0);
  pUVar14 = (__this->fields)._collider_5__3;
  fVar16 = (pUVar22->fields).m_Center.fields.x;
  fVar17 = (pUVar22->fields).m_Center.fields.y;
  fVar18 = (pUVar22->fields).m_Center.fields.z;
  local_a8[0].fields.m_Extents.fields.y = (pUVar22->fields).m_Extents.fields.y;
  local_a8[0].fields.m_Extents.fields.z = (pUVar22->fields).m_Extents.fields.z;
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  hitSize = Map_MapDestruction__GetHitSize(pUVar14,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Component_o *)(__this->fields)._collider_5__3;
  if (__this_00 == (UnityEngine_Component_o *)0x0) {
label_181eb9b1e:
    uVar7._0_4_ = (__this->fields)._previous_5__4.fields.x;
    uVar7._4_4_ = (__this->fields)._previous_5__4.fields.y;
    fVar1 = (__this->fields)._previous_5__4.fields.z;
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    pUVar15 = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
    iVar20 = TypeInfo_Map_MapDestruction->static_fields->MapMask;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_c8._0_8_ = uVar7;
    local_c8.z = fVar1;
    local_b8.fields.x = fVar16;
    local_b8.fields.y = fVar17;
    local_b8.fields.z = fVar18;
    iVar20 = UnityEngine_Physics__OverlapCapsuleNonAlloc
                       ((UnityEngine_Vector3_o *)&local_c8,&local_b8,hitSize * 0.5,pUVar15,iVar20,1,
                        (MethodInfo *)0x0);
  }
  else {
    bVar11 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar11) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar11 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider)) goto label_181eb9b1e;
    pUVar23 = UnityEngine_BoxCollider__get_size
                        (&local_b8,(UnityEngine_BoxCollider_o *)__this_00,(MethodInfo *)0x0);
    uVar4 = (pUVar23->fields).x;
    uVar8 = (pUVar23->fields).y;
    fVar1 = (pUVar23->fields).z;
    pUVar24 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_181eb9ce3;
    pUVar23 = UnityEngine_Transform__get_lossyScale(&local_b8,pUVar24,(MethodInfo *)0x0);
    uVar5 = (pUVar23->fields).x;
    uVar9 = (pUVar23->fields).y;
    local_c8.z = fVar1 * (pUVar23->fields).z;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    local_c8.y = (float)uVar9 * (float)uVar8;
    local_c8.x = (float)uVar5 * (float)uVar4;
    pUVar23 = EZhex1991_EZSoftBone_EZSoftBoneUtility__Abs
                        (&local_b8,(UnityEngine_Vector3_o *)&local_c8,(MethodInfo *)0x0);
    uVar6 = (pUVar23->fields).x;
    uVar10 = (pUVar23->fields).y;
    fVar1 = (pUVar23->fields).z;
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    pUVar15 = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
    pUVar24 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar24 == (UnityEngine_Transform_o *)0x0) goto label_181eb9ce3;
    pUVar25 = UnityEngine_Transform__get_rotation
                        ((UnityEngine_Quaternion_o *)local_a8,pUVar24,(MethodInfo *)0x0);
    local_a8[0].fields.m_Center.fields.x = (pUVar25->fields).x;
    local_a8[0].fields.m_Center.fields.y = (pUVar25->fields).y;
    local_a8[0].fields.m_Center.fields.z = (pUVar25->fields).z;
    local_a8[0].fields.m_Extents.fields.x = (pUVar25->fields).w;
    iVar20 = TypeInfo_Map_MapDestruction->static_fields->MapMask;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_c8.y = (float)uVar10 * 0.5;
    local_c8.x = (float)uVar6 * 0.5;
    local_c8.z = fVar1 * 0.5;
    local_b8.fields.x = fVar16;
    local_b8.fields.y = fVar17;
    local_b8.fields.z = fVar18;
    iVar20 = UnityEngine_Physics__OverlapBoxNonAlloc
                       (&local_b8,(UnityEngine_Vector3_o *)&local_c8,pUVar15,
                        (UnityEngine_Quaternion_o *)local_a8,iVar20,1,(MethodInfo *)0x0);
  }
  pCVar13 = (__this->fields).hitbox;
  if (pCVar13 != (Characters_BaseHitbox_o *)0x0) {
    attacker = (pCVar13->fields).Owner;
    fVar1 = (__this->fields)._previous_5__4.fields.x;
    fVar2 = (__this->fields)._previous_5__4.fields.y;
    fVar3 = (__this->fields)._previous_5__4.fields.z;
    pSVar21 = (__this->fields)._hit_5__2;
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    local_c8.y = fVar17 - fVar2;
    local_c8.x = fVar16 - fVar1;
    local_c8.z = fVar18 - fVar3;
    local_b8.fields.x = fVar16;
    local_b8.fields.y = fVar17;
    local_b8.fields.z = fVar18;
    Map_MapDestruction__Request
              (attacker,iVar20,&local_b8,(UnityEngine_Vector3_o *)&local_c8,hitSize,pSVar21,(MethodInfo *)0x0)
    ;
    (__this->fields)._previous_5__4.fields.x = fVar16;
    (__this->fields)._previous_5__4.fields.y = fVar17;
    (__this->fields)._previous_5__4.fields.z = fVar18;
    value = (Il2CppObject *)TypeInfo_Map_MapDestruction->static_fields->FixedStep;
    (__this->fields).__2__current = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
    (__this->fields).__1__state = 1;
    return true;
  }
label_181eb9ce3:
  ThrowNullReferenceException();
}


// Map.MapDestruction.<SweepHitbox>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapDestruction__SweepHitbox_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapDestruction__SweepHitbox_d__31_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Map_MapDestruction__SweepHitbox_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(Map_MapDestruction__SweepHitbox_d__31_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.MapDestruction.<SweepHitbox>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapDestruction__SweepHitbox_d__31__System_Collections_IEnumerator_Reset (Map_MapDestruction__SweepHitbox_d__31_o* __this, const MethodInfo* method);
// 0x181eb9cf0

void Map_MapDestruction__SweepHitbox_d__31__System_Collections_IEnumerator_Reset
               (Map_MapDestruction__SweepHitbox_d__31_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Map_MapDestruction_SweepHitbox_d__31_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Map.MapDestruction.<SweepHitbox>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_MapDestruction__SweepHitbox_d__31__System_Collections_IEnumerator_get_Current (Map_MapDestruction__SweepHitbox_d__31_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Map_MapDestruction__SweepHitbox_d__31__System_Collections_IEnumerator_get_Current(Map_MapDestruction__SweepHitbox_d__31_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.MapDestruction$$get_IsActive
// il2cpp: bool Map_MapDestruction__get_IsActive (const MethodInfo* method);
// 0x181e931a0

bool Map_MapDestruction__get_IsActive(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_184345052 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184345052 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).DestructibleEnvironment, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == false) {
      return false;
    }
    return TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2;
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$get_Enabled
// il2cpp: bool Map_MapDestruction__get_Enabled (const MethodInfo* method);
// 0x181e93120

bool Map_MapDestruction__get_Enabled(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345053 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_184345053 = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  bVar1 = Map_MapDestruction__get_IsActive((MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  return TypeInfo_Map_MapManager->static_fields->MapLoaded;
}


// Map.MapDestruction$$Reset
// il2cpp: void Map_MapDestruction__Reset (const MethodInfo* method);
// 0x181e92a20

void Map_MapDestruction__Reset(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *__this;
  System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *__this_00;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_01;
  
  if (Il2CppMethodInitialized_184345054 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184345054 = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  __this = TypeInfo_Map_MapDestruction->static_fields->Objects;
  if (__this != (System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_Clear);
    __this_00 = TypeInfo_Map_MapDestruction->static_fields->BatchSlices;
    if (__this_00 != (System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_13BF1C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_Clear);
      __this_01 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                  TypeInfo_Map_MapDestruction->static_fields->Destroyed;
      if (__this_01 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                  (__this_01,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$RegisterBatchSlice
// il2cpp: void Map_MapDestruction__RegisterBatchSlice (UnityEngine_Renderer_o* original, UnityEngine_Mesh_o* combined, int32_t start, int32_t count, const MethodInfo* method);
// 0x181e91760

void Map_MapDestruction__RegisterBatchSlice
               (UnityEngine_Renderer_o *original,UnityEngine_Mesh_o *combined,int32_t start,int32_t count,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *__this;
  UnityEngine_Mesh_o *local_48;
  undefined8 uStack_40;
  Map_BatchSlice_o local_38;
  
  if (Il2CppMethodInitialized_184345055 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184345055 = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  __this = TypeInfo_Map_MapDestruction->static_fields->BatchSlices;
  uStack_40 = 0;
  local_48 = combined;
  Il2CppCodeGenWriteBarrier(&local_48,combined);
  uStack_40._4_4_ = count;
  uStack_40._0_4_ = start;
  if (__this != (System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *)0x0) {
    local_38.fields.Mesh = local_48;
    local_38.fields.Start = start;
    local_38.fields.Count = count;
    System_Collections_Generic_Dictionary_object__BatchSlice___set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)original,
               &local_38,
               (MethodInfo_1465800 *)
               MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_set_Item);
    return;
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$Build
// il2cpp: void Map_MapDestruction__Build (const MethodInfo* method);
// 0x181e8f3e0
// eh: try 0x181e8f532..0x181e8f691 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e8f611: mov rdx, qword ptr [rip + 0x2220830]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x181e8f618: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e8f61d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e8f622: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e8f627: test rcx, rcx
// asm:   0x181e8f62a: jne 0x181e8f691
// asm:   0x181e8f691: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Map_MapDestruction__Build(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__MapObject__o *__this;
  System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *pSVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Map_MapObject_o *mapObject;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Map_DestructibleMapObject_o *value;
  undefined1 local_50 [16];
  Map_MapObject_o *local_40;
  undefined1 local_38 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_30;
  Map_MapObject_o *local_28;
  
  if (Il2CppMethodInitialized_184345056 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_DestructibleMapObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    Il2CppMethodInitialized_184345056 = '\x01';
  }
  local_38 = (undefined1  [8])0x0;
  pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_28 = (Map_MapObject_o *)0x0;
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  bVar2 = Map_MapDestruction__get_IsActive((MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if ((__this != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) &&
     (__this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                             (MethodInfo_13C65A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values),
     __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_50,
               __this_01,
               (MethodInfo_F1E4D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator);
    local_38 = (undefined1  [8])local_50._0_8_;
    pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50._8_8_;
    local_28 = local_40;
    local_50._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_50._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
    while (bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                             ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                               *)local_38,
                              (MethodInfo_155CFB0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                             ), mapObject = local_28, bVar2) {
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      pSVar1 = TypeInfo_Map_MapDestruction->static_fields->BatchSlices;
      if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
      }
      value = Map_DestructibleMapObject__Create(mapObject,pSVar1,1000.0,(MethodInfo *)0x0);
      if (value != (Map_DestructibleMapObject_o *)0x0) {
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                    TypeInfo_Map_MapDestruction->static_fields->Objects;
        if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_int__object___set_Item
                  (__this_00,(value->fields).Id,(Il2CppObject *)value,
                   (MethodInfo_1423510 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_set_Item);
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    pSVar1 = TypeInfo_Map_MapDestruction->static_fields->BatchSlices;
    if (pSVar1 != (System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                 (MethodInfo_13BF1C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_Clear);
      Map_MapDestruction__RemoveParentsOfIndestructible((MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$RemoveParentsOfIndestructible
// il2cpp: void Map_MapDestruction__RemoveParentsOfIndestructible (const MethodInfo* method);
// 0x181e91bd0
// eh: try 0x181e91e02..0x181e920f4 -> pad 0x18333c670 (+6 call sites) catch Il2CppExceptionWrapper
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e91ebe: nop 
// asm:   0x181e91f57: jmp 0x181e91e02
// asm:   0x181e91f5c: mov rdx, qword ptr [rip + 0x21f60e5]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x181e91f63: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181e91f68: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e91f6d: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181e91f72: test rcx, rcx
// asm:   0x181e91f75: jne 0x181e920d8
// asm:   0x181e91f7b: xor r14d, r14d
// asm:   0x181e91f7e: mov rsi, qword ptr [rsp + 0xf8]
// asm:   0x181e91f86: jmp 0x181e91e02
// asm:   0x181e91f9e: mov rdx, qword ptr [rip + 0x221c703]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_DestructibleMapObject_Dispose
// asm:   0x181e91fa5: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e91faa: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e91faf: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e91fb4: test rcx, rcx
// asm:   0x181e91fb7: jne 0x181e920e8
// asm:   0x181e91fbd: xor r14d, r14d
// asm:   0x181e91fc0: mov rsi, qword ptr [rsp + 0xf8]
// asm:   0x181e92083: mov rdx, qword ptr [rip + 0x21f625e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x181e9208a: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181e9208f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e92094: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181e92099: test rcx, rcx
// asm:   0x181e9209c: jne 0x181e920f4
// asm:   0x181e9209e: xor r14d, r14d
// asm:   0x181e920a1: mov rsi, qword ptr [rsp + 0xf8]
// asm:   0x181e920d8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e920e8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e920f4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c670: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c675: push rbp
// asm:   0x18333c676: sub rsp, 0x20
// asm:   0x18333c67a: mov rbp, rdx
// asm:   0x18333c67d: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x18333c684: mov rcx, qword ptr [rax]
// asm:   0x18333c687: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333c68b: movabs rax, 0
// asm:   0x18333c695: add rsp, 0x20
// asm:   0x18333c699: pop rbp
// asm:   0x18333c69a: ret 
// asm:   0x18333d110: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d115: push rbp
// asm:   0x18333d116: sub rsp, 0x20
// asm:   0x18333d11a: mov rbp, rdx
// asm:   0x18333d11d: mov rax, qword ptr [rbp + 0xb0]
// asm:   0x18333d124: mov rcx, qword ptr [rax]
// asm:   0x18333d127: mov qword ptr [rbp + 0x48], rcx
// asm:   0x18333d12b: movabs rax, 0
// asm:   0x18333d135: add rsp, 0x20
// asm:   0x18333d139: pop rbp
// asm:   0x18333d13a: ret 
// asm:   0x18333d140: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333d145: push rbp
// asm:   0x18333d146: sub rsp, 0x20
// asm:   0x18333d14a: mov rbp, rdx
// asm:   0x18333d14d: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18333d154: mov rcx, qword ptr [rax]
// asm:   0x18333d157: mov qword ptr [rbp + 0x58], rcx
// asm:   0x18333d15b: movabs rax, 0
// asm:   0x18333d165: add rsp, 0x20
// asm:   0x18333d169: pop rbp
// asm:   0x18333d16a: ret 

void Map_MapDestruction__RemoveParentsOfIndestructible(MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *__this;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_HashSet_uint__o *local_res18;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_b8;
  undefined8 local_a0;
  System_Collections_Generic_HashSet_Enumerator_T__o *local_98;
  undefined8 local_90;
  System_Collections_Generic_List_Enumerator_T__o *local_88;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_80;
  System_Collections_Generic_HashSet_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50 [2];
  
  if (Il2CppMethodInitialized_184345057 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_DestructibleMapObject_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_DestructibleMapObject_MoveNex
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_DestructibleMapObject_get_Cur
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_DestructibleMapObject_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184345057 = '\x01';
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._currentKey = (Il2CppObject *)0x0;
  local_res18 = (System_Collections_Generic_HashSet_uint__o *)0x0;
  local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  local_50[0].fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50[0].fields._index = 0;
  local_50[0].fields._version = 0;
  local_50[0].fields._current = (Il2CppObject *)0x0;
  __this_01 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  while (__this_01 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    (__this_01->fields)._size = 0;
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    __this = TypeInfo_Map_MapDestruction->static_fields->Objects;
    if ((__this == (System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *)0x0) ||
       (__this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                               (MethodInfo_13C6500 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Keys
                              ),
       __this_02 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) break;
    System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
              (&local_b8,__this_02,
               (MethodInfo_F1E550 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_DestructibleMapObject_GetEnumerator
              );
    local_80.fields._dictionary = local_b8.fields._dictionary;
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._currentKey = local_b8.fields._currentValue;
label_181e91e02:
    bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__object___MoveNext
                      (&local_80,
                       (MethodInfo_15638A0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_DestructibleMapObject_MoveNex
                      );
    pIVar4 = local_80.fields._currentKey;
    if (bVar5) {
      iVar3 = (int32_t)local_80.fields._currentKey;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                        (pSVar2,iVar3,(Il2CppObject **)&local_res18,
                         (MethodInfo_141F4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_TryGetValue);
      if (bVar5) {
        if (local_res18 == (System_Collections_Generic_HashSet_uint__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_uint___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_b8,local_res18,
                   (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
        local_68.fields._set = (System_Collections_Generic_HashSet_T__o *)local_b8.fields._dictionary;
        local_68.fields._index = local_b8.fields._index;
        local_68.fields._version = local_b8.fields._version;
        local_68.fields._current = local_b8.fields._currentValue;
        local_a0 = 0;
        local_98 = &local_68;
        do {
          bVar5 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                            (&local_68,
                             (MethodInfo_1537E90 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
          if (!bVar5) {
            System_Collections_Generic_HashSet_Enumerator_int___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_68,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
            goto label_181e91e02;
          }
          iVar3 = (int32_t)local_68.fields._current;
          if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
          }
          __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                      TypeInfo_Map_MapDestruction->static_fields->Objects;
          if (__this_00 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (__this_00,iVar3,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_ContainsKey
                            );
        } while (bVar5);
        il2cpp_runtime_helper_180026690(__this_01,(ulonglong)pIVar4 & 0xffffffff,
                      MethodInfo_System_Collections_Generic_List_int_Add);
        System_Collections_Generic_HashSet_Enumerator_int___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_68,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
      }
      goto label_181e91e02;
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_DestructibleMapObject_Dispose
              );
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_b8,__this_01,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_50[0].fields._list = (System_Collections_Generic_List_T__o *)local_b8.fields._dictionary;
    local_50[0].fields._index = local_b8.fields._index;
    local_50[0].fields._version = local_b8.fields._version;
    local_50[0].fields._current = local_b8.fields._currentValue;
    local_90 = 0;
    local_88 = local_50;
    while (bVar5 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                             (local_50,(MethodInfo_1530180 *)
                                       MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext),
          bVar5) {
      iVar3 = (int32_t)local_50[0].fields._current;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapDestruction->static_fields->Objects;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_int__object___Remove
                (pSVar2,iVar3,
                 (MethodInfo_1419B90 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_Remove);
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50,
               MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    if ((__this_01->fields)._size < 1) {
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$Remove
// il2cpp: void Map_MapDestruction__Remove (int32_t id, const MethodInfo* method);
// 0x181e92100

void Map_MapDestruction__Remove(int32_t id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if (Il2CppMethodInitialized_184345058 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184345058 = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  __this = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_Map_MapDestruction->static_fields->Objects;
  if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___Remove
              (__this,id,
               (MethodInfo_1419B90 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_Remove);
    __this_00 = TypeInfo_Map_MapDestruction->static_fields->Destroyed;
    if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      System_Collections_Generic_HashSet_Int32Enum___Remove
                ((System_Collections_Generic_HashSet_T__o *)__this_00,id,
                 (MethodInfo_17666A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$CanDestroyWith
// il2cpp: bool Map_MapDestruction__CanDestroyWith (Characters_BaseCharacter_o* attacker, const MethodInfo* method);
// 0x181e8f7b0

bool Map_MapDestruction__CanDestroyWith(Characters_BaseCharacter_o *attacker,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *__this;
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184345059 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345059 = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  bVar1 = Map_MapDestruction__get_Enabled((MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)attacker,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (attacker != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (*(attacker->klass->vtable)._74_IsMine.methodPtr)
                          (attacker,(attacker->klass->vtable)._74_IsMine.method);
        if (!bVar1) {
          return false;
        }
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        __this = TypeInfo_Map_MapDestruction->static_fields->Objects;
        if (__this != (System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *)0x0) {
          iVar2 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                             (MethodInfo_13CDEB0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Count
                            );
          return 0 < iVar2;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Map.MapDestruction$$SweepHitbox
// il2cpp: System_Collections_IEnumerator_o* Map_MapDestruction__SweepHitbox (Characters_BaseHitbox_o* hitbox, const MethodInfo* method);
// 0x181e92c00

System_Collections_IEnumerator_o *
Map_MapDestruction__SweepHitbox(Characters_BaseHitbox_o *hitbox,MethodInfo *method)

{
  Map_MapDestruction__SweepHitbox_d__31_o *__this;
  
  if (Il2CppMethodInitialized_18434505a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction_SweepHitbox_d__31);
    Il2CppMethodInitialized_18434505a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapDestruction_SweepHitbox_d__31);
  Map_MapDestruction__SweepHitbox_d__31___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this,0,(MethodInfo *)0x0);
  if (__this != (Map_MapDestruction__SweepHitbox_d__31_o *)0x0) {
    (__this->fields).hitbox = hitbox;
    Il2CppCodeGenWriteBarrier(&(__this->fields).hitbox,hitbox);
    return (System_Collections_IEnumerator_o *)__this;
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$Explode
// il2cpp: void Map_MapDestruction__Explode (Characters_BaseCharacter_o* attacker, UnityEngine_Vector3_o center, float radius, const MethodInfo* method);
// 0x181e8ff30

void Map_MapDestruction__Explode
               (Characters_BaseCharacter_o *attacker,UnityEngine_Vector3_o *center,float radius,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *__this;
  UnityEngine_Collider_array *results;
  UnityEngine_Vector3_StaticFields *pUVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434505b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_18434505b = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  if (Il2CppMethodInitialized_184345059 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345059 = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  bVar2 = Map_MapDestruction__get_Enabled((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)attacker,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (attacker == (Characters_BaseCharacter_o *)0x0) {
label_181e901a0:
        ThrowNullReferenceException();
      }
      bVar2 = (*(attacker->klass->vtable)._74_IsMine.methodPtr)
                        (attacker,(attacker->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        __this = TypeInfo_Map_MapDestruction->static_fields->Objects;
        if (__this == (System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *)0x0)
        goto label_181e901a0;
        iVar3 = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___get_Count
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                           (MethodInfo_13CDEB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Count
                          );
        if (0 < iVar3) {
          if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
          }
          results = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
          iVar3 = TypeInfo_Map_MapDestruction->static_fields->MapMask;
          if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
          }
          local_38.x = (center->fields).x;
          local_38.y = (center->fields).y;
          local_38.z = (center->fields).z;
          iVar3 = UnityEngine_Physics__OverlapSphereNonAlloc
                            ((UnityEngine_Vector3_o *)&local_38,radius * 0.5,results,iVar3,1,(MethodInfo *)0x0
                            );
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          local_28[0].z = (center->fields).z;
          pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_38.x = (pUVar1->zeroVector).fields.x;
          local_38.y = (pUVar1->zeroVector).fields.y;
          local_38.z = (pUVar1->zeroVector).fields.z;
          local_28[0].x = (center->fields).x;
          local_28[0].y = (center->fields).y;
          Map_MapDestruction__Request
                    (attacker,iVar3,(UnityEngine_Vector3_o *)local_28,(UnityEngine_Vector3_o *)&local_38,
                     radius + radius,(System_Collections_Generic_HashSet_int__o *)0x0,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Map.MapDestruction$$Request
// il2cpp: void Map_MapDestruction__Request (Characters_BaseCharacter_o* attacker, int32_t count, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float hitSize, System_Collections_Generic_HashSet_int__o* hit, const MethodInfo* method);
// 0x181e92300
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e924aa: mov rsi, qword ptr [rsp + 0xe8]
// asm:   0x181e924b2: nop dword ptr [rax]
// asm:   0x181e924b6: nop word ptr [rax + rax]

void Map_MapDestruction__Request
               (Characters_BaseCharacter_o *attacker,int32_t count,UnityEngine_Vector3_o *center,
               UnityEngine_Vector3_o *direction,float hitSize,System_Collections_Generic_HashSet_int__o *hit,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  UnityEngine_Collider_array *pUVar5;
  UnityEngine_Collider_o *collider;
  Map_MapScriptBaseObject_o *pMVar6;
  System_Collections_Generic_List_T__o *__this;
  Utility_BaseComponentCache_o *pUVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  bool bVar9;
  Map_MapObject_o *pMVar10;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *ids;
  System_Object_array *parameters;
  Il2CppObject *pIVar11;
  Il2CppObject *pIVar12;
  Photon_Realtime_Player_o *sender;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  int32_t local_78;
  float local_74 [3];
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58 [4];
  
  if (Il2CppMethodInitialized_18434505c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"RequestMapDestructionRPC");
    Il2CppMethodInitialized_18434505c = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  pSVar4 = TypeInfo_Map_MapDestruction->static_fields->Targets;
  if (pSVar4 == (System_Collections_Generic_List_int__o *)0x0) goto label_181e929b6;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  uVar14 = 0;
  (pSVar4->fields)._size = 0;
  if (Il2CppMethodInitialized_184345065 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_184345065 = '\x01';
  }
  if (attacker == (Characters_BaseCharacter_o *)0x0) {
label_181e9248a:
    fVar15 = 11.0;
  }
  else {
    bVar2 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((attacker->klass->_2).typeHierarchyDepth < bVar2) ||
       ((attacker->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_BaseTitan)) goto label_181e9248a;
    fVar15 = 23.0;
  }
  if (0 < count) {
    do {
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      pUVar5 = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
      if (pUVar5 == (UnityEngine_Collider_array *)0x0) goto label_181e929b6;
      uVar13 = (uint)uVar14;
      if ((uint)pUVar5->max_length <= uVar13) {
label_181e929cc:
        ThrowIndexOutOfRangeException();
      }
      collider = pUVar5->m_Items[uVar14];
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar10 = Map_MapLoader__FindObjectFromCollider(collider,(MethodInfo *)0x0);
      pUVar5 = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
      if (pUVar5 == (UnityEngine_Collider_array *)0x0) goto label_181e929b6;
      if ((uint)pUVar5->max_length <= uVar13) goto label_181e929cc;
      pUVar5->m_Items[uVar14] = (UnityEngine_Collider_o *)0x0;
      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + uVar14,(void *)0x0);
      if (pMVar10 != (Map_MapObject_o *)0x0) {
        pMVar6 = (pMVar10->fields).ScriptObject;
        if (pMVar6 == (Map_MapScriptBaseObject_o *)0x0) goto label_181e929b6;
        iVar3 = (pMVar6->fields).Id;
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        bVar9 = Map_MapDestruction__CanBreak(iVar3,fVar15 * hitSize,(MethodInfo *)0x0);
        if (bVar9) {
          if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
          }
          pSVar4 = TypeInfo_Map_MapDestruction->static_fields->Targets;
          if (pSVar4 == (System_Collections_Generic_List_int__o *)0x0) goto label_181e929b6;
          bVar9 = System_Collections_Generic_List_int___Contains
                            (pSVar4,iVar3,
                             (MethodInfo_91C120 *)MethodInfo_System_Collections_Generic_List_int_Contains);
          if ((!bVar9) &&
             ((hit == (System_Collections_Generic_HashSet_int__o *)0x0 ||
              (bVar9 = System_Collections_Generic_HashSet_int___Add
                                 (hit,iVar3,
                                  (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add)
              , bVar9)))) {
            if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
            }
            pSVar4 = TypeInfo_Map_MapDestruction->static_fields->Targets;
            if (pSVar4 == (System_Collections_Generic_List_int__o *)0x0) goto label_181e929b6;
            il2cpp_runtime_helper_180026690(pSVar4,iVar3,MethodInfo_System_Collections_Generic_List_int_Add);
          }
        }
      }
      uVar14 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < count);
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  pSVar4 = TypeInfo_Map_MapDestruction->static_fields->Targets;
  if (pSVar4 != (System_Collections_Generic_List_int__o *)0x0) {
    if ((pSVar4->fields)._size != 0) {
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      __this = (System_Collections_Generic_List_T__o *)TypeInfo_Map_MapDestruction->static_fields->Targets;
      if ((((__this == (System_Collections_Generic_List_T__o *)0x0) ||
           (ids = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                            (__this,(MethodInfo_929FE0 *)
                                    MethodInfo_System_Collections_Generic_List_int_ToArray),
           attacker == (Characters_BaseCharacter_o *)0x0)) ||
          (pUVar7 = (attacker->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pPVar8 = (pUVar7->fields).PhotonView, pPVar8 == (Photon_Pun_PhotonView_o *)0x0)) goto label_181e929b6;
      iVar3 = (pPVar8->fields).viewIdField;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      bVar9 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
      if (!bVar9) {
        pPVar8 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
        local_78 = iVar3;
        pIVar11 = il2cpp_value_box(g_data_184354e08,&local_78);
        if (parameters == (System_Object_array *)0x0) {
label_181e92a18:
          ThrowNullReferenceException();
        }
        if ((pIVar11 != (Il2CppObject *)0x0) &&
           (pIVar12 = il2cpp_vm_Object_IsInst(pIVar11,(((parameters->obj).klass)->_1).element_class),
           pIVar12 == (Il2CppObject *)0x0)) {
          pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar11;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar11);
          if ((ids != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                       *)0x0) &&
             (pIVar11 = il2cpp_vm_Object_IsInst(&ids->obj,(((parameters->obj).klass)->_1).element_class),
             pIVar11 == (Il2CppObject *)0x0)) {
            pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
          }
          if (1 < (uint)parameters->max_length) {
            parameters->m_Items[1] = &ids->obj;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,ids);
            local_68.x = (center->fields).x;
            local_68.y = (center->fields).y;
            local_68.z = (center->fields).z;
            pIVar11 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_68);
            if ((pIVar11 != (Il2CppObject *)0x0) &&
               (pIVar12 = il2cpp_vm_Object_IsInst(pIVar11,(((parameters->obj).klass)->_1).element_class),
               pIVar12 == (Il2CppObject *)0x0)) {
              pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
            }
            if (2 < (uint)parameters->max_length) {
              parameters->m_Items[2] = pIVar11;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar11);
              local_58[0].x = (direction->fields).x;
              local_58[0].y = (direction->fields).y;
              local_58[0].z = (direction->fields).z;
              pIVar11 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,local_58);
              if ((pIVar11 != (Il2CppObject *)0x0) &&
                 (pIVar12 = il2cpp_vm_Object_IsInst(pIVar11,(((parameters->obj).klass)->_1).element_class),
                 pIVar12 == (Il2CppObject *)0x0)) {
                pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
              }
              if (3 < (uint)parameters->max_length) {
                parameters->m_Items[3] = pIVar11;
                Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,pIVar11);
                local_74[0] = hitSize;
                pIVar11 = il2cpp_value_box(g_data_184354e38,local_74);
                if ((pIVar11 != (Il2CppObject *)0x0) &&
                   (pIVar12 = il2cpp_vm_Object_IsInst(pIVar11,(((parameters->obj).klass)->_1).element_class),
                   pIVar12 == (Il2CppObject *)0x0)) {
                  pIVar11 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar11,(MethodInfo *)0x0);
                }
                if (4 < (uint)parameters->max_length) {
                  parameters->m_Items[4] = pIVar11;
                  Il2CppCodeGenWriteBarrier(parameters->m_Items + 4,pIVar11);
                  if (pPVar8 != (Photon_Pun_PhotonView_o *)0x0) {
                    Photon_Pun_PhotonView__RPC(pPVar8,"RequestMapDestructionRPC",2,parameters,(MethodInfo *)0x0);
                    return;
                  }
                  goto label_181e92a18;
                }
              }
            }
          }
        }
        ThrowIndexOutOfRangeException();
      }
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      sender = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      local_58[0].x = (direction->fields).x;
      local_58[0].y = (direction->fields).y;
      local_58[0].z = (direction->fields).z;
      local_68.z = (center->fields).z;
      local_68.x = (center->fields).x;
      local_68.y = (center->fields).y;
      Map_MapDestruction__OnRequest
                (iVar3,(System_Int32_array *)ids,(UnityEngine_Vector3_o *)&local_68,
                 (UnityEngine_Vector3_o *)local_58,hitSize,sender,(MethodInfo *)0x0);
    }
    return;
  }
label_181e929b6:
  ThrowNullReferenceException();
}


// Map.MapDestruction$$OnRequest
// il2cpp: void Map_MapDestruction__OnRequest (int32_t attackerId, System_Int32_array* ids, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float hitSize, Photon_Realtime_Player_o* sender, const MethodInfo* method);
// 0x181e90810

void Map_MapDestruction__OnRequest
               (int32_t attackerId,System_Int32_array *ids,UnityEngine_Vector3_o *center,
               UnityEngine_Vector3_o *direction,float hitSize,Photon_Realtime_Player_o *sender,
               MethodInfo *method)

{
  byte bVar1;
  int32_t id;
  UnityEngine_Collider_array *pUVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_Collider_o *collider;
  Il2CppClass *pIVar3;
  UnityEngine_Transform_o *__this;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  bool bVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  void **ppvVar6;
  UnityEngine_Vector3_o *pUVar7;
  System_Collections_Generic_List_T__o *__this_01;
  uint64_t uVar8;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *ids_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_a8 [2];
  Il2CppObject *local_a0;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88 [8];
  
  if (Il2CppMethodInitialized_18434505d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_TryGetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"MapObjectsDestroyedRPC");
    Il2CppMethodInitialized_18434505d = '\x01';
  }
  local_a0 = (Il2CppObject *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  bVar4 = Map_MapDestruction__get_Enabled((MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  if (ids == (System_Int32_array *)0x0) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  pUVar2 = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
  if (pUVar2 == (UnityEngine_Collider_array *)0x0) goto label_181e911c2;
  if ((int)pUVar2->max_length < (int)ids->max_length) {
    return;
  }
  if (0x7f7fffff < (uint)ABS(hitSize)) {
    return;
  }
  if (hitSize <= 0.0) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  if (0x7f7fffff < (uint)ABS((center->fields).x)) {
    return;
  }
  if (0x7f7fffff < (uint)ABS((center->fields).y)) {
    return;
  }
  if (0x7f7fffff < (uint)ABS((center->fields).z)) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  if (0x7f7fffff < (uint)ABS((direction->fields).x)) {
    return;
  }
  if (0x7f7fffff < (uint)ABS((direction->fields).y)) {
    return;
  }
  if (0x7f7fffff < (uint)ABS((direction->fields).z)) {
    return;
  }
  pPVar5 = Photon_Pun_PhotonView__Find(attackerId,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  if (pPVar5 == (Photon_Pun_PhotonView_o *)0x0) goto label_181e911c2;
  if ((pPVar5->fields)._Owner_k__BackingField != sender) {
    return;
  }
  bVar4 = UnityEngine_Component__TryGetComponent_object_
                    ((UnityEngine_Component_o *)pPVar5,&local_a0,
                     (MethodInfo_6657C0 *)MethodInfo_UnityEngine_Component_TryGetComponent_BaseCharacter);
  pIVar9 = local_a0;
  if (!bVar4) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  if (Il2CppMethodInitialized_184345066 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184345066 = '\x01';
  }
  if (pIVar9 == (Il2CppObject *)0x0) {
label_181e90c62:
    fVar12 = 150.0;
  }
  else {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((pIVar9->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_BaseTitan)) goto label_181e90c62;
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    if (Il2CppMethodInitialized_184345067 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184345067 = '\x01';
    }
    if (pIVar9[0x10].klass == (Il2CppClass *)0x0) goto label_181e911c2;
    ppvVar6 = &((pIVar9[0x10].klass)->_1).properties;
    if (*ppvVar6 == (void *)0x0) {
      ppvVar6 = &((pIVar9[0x10].klass)->_1).events;
    }
    x = *ppvVar6;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if (x == (UnityEngine_Object_o *)0x0) goto label_181e911c2;
      x_00 = (*(uint64_t *)((char *)x + 0x50));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) goto label_181e90c4d;
      collider = (*(uint64_t *)((char *)x + 0x50));
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      fVar12 = Map_MapDestruction__GetHitSize(collider,(MethodInfo *)0x0);
      fVar12 = fVar12 * 4.0;
    }
    else {
label_181e90c4d:
      fVar12 = hitSize * 4.0;
    }
  }
  pIVar9 = local_a0;
  if (fVar12 < hitSize) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  if (Il2CppMethodInitialized_184345065 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_184345065 = '\x01';
  }
  if (pIVar9 == (Il2CppObject *)0x0) {
label_181e90cec:
    fVar12 = 11.0;
  }
  else {
    pIVar3 = pIVar9->klass;
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan))
    goto label_181e90cec;
    fVar12 = 23.0;
  }
  if (((local_a0 == (Il2CppObject *)0x0) || (local_a0[7].monitor == (void *)0x0)) ||
     (__this = *(UnityEngine_Transform_o **)((longlong)local_a0[7].monitor + 0x10),
     __this == (UnityEngine_Transform_o *)0x0)) goto label_181e911c2;
  pUVar7 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_88,__this,(MethodInfo *)0x0);
  fVar15 = (pUVar7->fields).x;
  fVar14 = (pUVar7->fields).y;
  fVar16 = (pUVar7->fields).z;
  if (Il2CppMethodInitialized_18433dee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433dee7 = '\x01';
  }
  fVar15 = fVar15 - (center->fields).x;
  fVar14 = fVar14 - (center->fields).y;
  fVar16 = fVar16 - (center->fields).z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar13 = (double)(fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16);
  if (dVar13 < 0.0) {
    dVar13 = sqrt(dVar13);
  }
  else {
    dVar13 = SQRT(dVar13);
  }
  if (fVar12 * hitSize + 1000.0 < (float)dVar13) {
    return;
  }
  if (local_a0 == (Il2CppObject *)0x0) {
label_181e90ebd:
    fVar15 = hitSize * 0.5 * 0.5;
  }
  else {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((local_a0->klass->_2).typeHierarchyDepth < bVar1) ||
       ((local_a0->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_BaseTitan)) goto label_181e90ebd;
    if (Il2CppMethodInitialized_18433de59 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433de59 = '\x01';
    }
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar15 = (direction->fields).y;
    fVar14 = (direction->fields).x;
    fVar16 = (direction->fields).z;
    dVar13 = (double)(fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16);
    if (dVar13 < 0.0) {
      dVar13 = sqrt(dVar13);
      fVar15 = (float)dVar13 + hitSize;
    }
    else {
      fVar15 = (float)SQRT(dVar13) + hitSize;
    }
  }
  __this_01 = (System_Collections_Generic_List_T__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_01,(int32_t)ids->max_length,
             (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
  for (uVar11 = 0; (int)uVar11 < (int)ids->max_length; uVar11 = uVar11 + 1) {
    if ((uint)ids->max_length <= uVar11) {
      ThrowIndexOutOfRangeException();
    }
    id = ids->m_Items[(int)uVar11];
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    bVar4 = Map_MapDestruction__CanBreak(id,fVar12 * hitSize,(MethodInfo *)0x0);
    if (bVar4) {
      if (__this_01 == (System_Collections_Generic_List_T__o *)0x0) goto label_181e911c2;
      bVar4 = System_Collections_Generic_List_int___Contains
                        ((System_Collections_Generic_List_int__o *)__this_01,id,
                         (MethodInfo_91C120 *)MethodInfo_System_Collections_Generic_List_int_Contains);
      if (!bVar4) {
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                    TypeInfo_Map_MapDestruction->static_fields->Objects;
        if ((__this_00 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
           (uVar8 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (__this_00,id,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Item
                              ), uVar8 == 0)) {
          ThrowNullReferenceException();
        }
        local_98.z = (center->fields).z;
        local_98.x = (center->fields).x;
        local_98.y = (center->fields).y;
        fVar14 = UnityEngine_Bounds__Internal_SqrDistance
                           ((UnityEngine_Bounds_o *)(uVar8 + 0x20),(UnityEngine_Vector3_o *)&local_98,
                            (MethodInfo *)0x0);
        if (fVar14 <= fVar15 * fVar15) {
          il2cpp_runtime_helper_180026690(__this_01,id);
        }
      }
    }
  }
  if (__this_01 == (System_Collections_Generic_List_T__o *)0x0) {
label_181e911c2:
    ThrowNullReferenceException();
  }
  if ((__this_01->fields)._size == 0) {
    return;
  }
  ids_00 = System_Collections_Generic_List_int___ToArray
                     (__this_01,(MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_int_ToArray);
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  local_98.z = (center->fields).z;
  local_98.x = (center->fields).x;
  local_98.y = (center->fields).y;
  Map_MapDestruction__Apply
            ((System_Int32_array *)ids_00,(UnityEngine_Vector3_o *)&local_98,hitSize,true,(MethodInfo *)0x0);
  pPVar5 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  if (parameters == (System_Object_array *)0x0) {
label_181e9120a:
    ThrowNullReferenceException();
  }
  if ((ids_00 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                  *)0x0) &&
     (pIVar9 = il2cpp_vm_Object_IsInst(&ids_00->obj,(((parameters->obj).klass)->_1).element_class),
     pIVar9 == (Il2CppObject *)0x0)) {
    pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = &ids_00->obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,ids_00);
    local_88[0].x = (center->fields).x;
    local_88[0].y = (center->fields).y;
    local_88[0].z = (center->fields).z;
    pIVar9 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,local_88);
    if ((pIVar9 != (Il2CppObject *)0x0) &&
       (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((parameters->obj).klass)->_1).element_class),
       pIVar10 == (Il2CppObject *)0x0)) {
      pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar9;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar9);
      local_a8[0] = hitSize;
      pIVar9 = il2cpp_value_box(g_data_184354e38,local_a8);
      if ((pIVar9 != (Il2CppObject *)0x0) &&
         (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((parameters->obj).klass)->_1).element_class),
         pIVar10 == (Il2CppObject *)0x0)) {
        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = pIVar9;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar9);
        if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(pPVar5,"MapObjectsDestroyedRPC",1,parameters,(MethodInfo *)0x0);
          return;
        }
        goto label_181e9120a;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Map.MapDestruction$$OnDestroyed
// il2cpp: void Map_MapDestruction__OnDestroyed (System_Int32_array* ids, UnityEngine_Vector3_o center, float hitSize, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e90750

void Map_MapDestruction__OnDestroyed
               (System_Int32_array *ids,UnityEngine_Vector3_o *center,float hitSize,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434505e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_18434505e = '\x01';
  }
  if ((info->fields).Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient((info->fields).Sender,(MethodInfo *)0x0);
    if (((bVar1) && (ids != (System_Int32_array *)0x0)) && ((uint)ABS(hitSize) < 0x7f800000)) {
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      local_28[0].x = (center->fields).x;
      local_28[0].y = (center->fields).y;
      local_28[0].z = (center->fields).z;
      Map_MapDestruction__Apply(ids,(UnityEngine_Vector3_o *)local_28,hitSize,true,(MethodInfo *)0x0);
    }
  }
  return;
}


// Map.MapDestruction$$RequestState
// il2cpp: void Map_MapDestruction__RequestState (const MethodInfo* method);
// 0x181e921b0

void Map_MapDestruction__RequestState(MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  MethodInfo *pMVar1;
  bool bVar2;
  Il2CppClass *pIVar3;
  
  if (Il2CppMethodInitialized_18434505f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"RequestMapDestructionStateRPC");
    Il2CppMethodInitialized_18434505f = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    bVar2 = Map_MapDestruction__get_IsActive((MethodInfo *)0x0);
    pMVar1 = MethodInfo_System_Array_Empty_object;
    if (bVar2) {
      __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      if ((MethodInfo_System_Array_Empty_object->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
      }
      pIVar3 = (pMVar1->field7_0x38).rgctx_data[2].klass;
      if (((pIVar3->_2).bitflags1 & 1) == 0) {
        pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
      }
      if ((pIVar3->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(pIVar3);
      }
      pIVar3 = (pMVar1->field7_0x38).rgctx_data[2].klass;
      if (((pIVar3->_2).bitflags1 & 1) == 0) {
        pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
      }
      if (__this == (Photon_Pun_PhotonView_o *)0x0) {
        ThrowNullReferenceException();
      }
      Photon_Pun_PhotonView__RPC
                (__this,"RequestMapDestructionStateRPC",2,*(System_Object_array **)pIVar3->static_fields,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


// Map.MapDestruction$$OnStateRequest
// il2cpp: void Map_MapDestruction__OnStateRequest (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e91210
// eh: try 0x181e91414..0x181e91672 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e9154b: mov rdx, qword ptr [rip + 0x21f6af6]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x181e91552: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e91557: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e9155c: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e91561: test rcx, rcx
// asm:   0x181e91564: jne 0x181e91672
// asm:   0x181e9156a: xor r12d, r12d
// asm:   0x181e9156d: mov r13, qword ptr [rsp + 0xa0]
// asm:   0x181e91575: mov rdi, qword ptr [rsp + 0xb0]
// asm:   0x181e91672: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void Map_MapDestruction__OnStateRequest(Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  System_Collections_Generic_HashSet_uint__o *__this;
  Photon_Pun_PhotonView_o *pPVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_T__o *__this_00;
  System_Object_array *pSVar7;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar8;
  Il2CppObject *pIVar9;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_184345060 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapDestructionStateRPC");
    Il2CppMethodInitialized_184345060 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((!bVar6) || ((info->fields).Sender == (Photon_Realtime_Player_o *)0x0)) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  pSVar3 = TypeInfo_Map_MapDestruction->static_fields->Destroyed;
  if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    if ((pSVar3->fields)._count == 0) {
      return;
    }
    __this_00 = (System_Collections_Generic_List_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor
              (__this_00,0x100,
               (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b3068);
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    __this = (System_Collections_Generic_HashSet_uint__o *)
             TypeInfo_Map_MapDestruction->static_fields->Destroyed;
    if (__this != (System_Collections_Generic_HashSet_uint__o *)0x0) {
      System_Collections_Generic_HashSet_uint___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this,
                 (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_48 = (undefined1  [8])local_60._0_8_;
      pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
      local_38 = local_50;
      local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
      while (bVar6 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                                (MethodInfo_1537E90 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
            pMVar5 = MethodInfo_System_Collections_Generic_List_int_Add, bVar6) {
        if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (__this_00->fields)._items;
        if (pSVar7 == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pSVar7->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          *(uint32_t *)((longlong)pSVar7->m_Items + (longlong)(int)uVar2 * 4) = (uint32_t)local_38;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize
                    ((System_Collections_Generic_List_uint__o *)__this_00,(uint32_t)local_38,
                     (MethodInfo_91A500 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        if (0xff < (__this_00->fields)._size) {
          pPVar4 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
          pSVar7 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          pUVar8 = System_Collections_Generic_List_int___ToArray
                             (__this_00,
                              (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_int_ToArray);
          if (pSVar7 == (System_Object_array *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pUVar8 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                          *)0x0) &&
             (pIVar9 = il2cpp_vm_Object_IsInst(&pUVar8->obj,(((pSVar7->obj).klass)->_1).element_class),
             pIVar9 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if ((int)pSVar7->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar7->m_Items[0] = &pUVar8->obj;
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items,pUVar8);
          if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) {
            ThrowNullReferenceException();
          }
          Photon_Pun_PhotonView__RPC_1d4d8d0
                    (pPVar4,"MapDestructionStateRPC",(info->fields).Sender,pSVar7,(MethodInfo *)0x0);
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          (__this_00->fields)._size = 0;
        }
      }
      System_Collections_Generic_HashSet_Enumerator_int___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
      if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
        if ((__this_00->fields)._size < 1) {
          return;
        }
        pPVar4 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        pSVar7 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        pUVar8 = System_Collections_Generic_List_int___ToArray
                           (__this_00,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_int_ToArray);
        if (pSVar7 != (System_Object_array *)0x0) {
          if ((pUVar8 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                          *)0x0) &&
             (pIVar9 = il2cpp_vm_Object_IsInst(&pUVar8->obj,(((pSVar7->obj).klass)->_1).element_class),
             pIVar9 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if ((int)pSVar7->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar7->m_Items[0] = &pUVar8->obj;
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items,pUVar8);
          if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC_1d4d8d0
                      (pPVar4,"MapDestructionStateRPC",(info->fields).Sender,pSVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$OnState
// il2cpp: void Map_MapDestruction__OnState (System_Int32_array* ids, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e91690

void Map_MapDestruction__OnState
               (System_Int32_array *ids,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  bool bVar4;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345061 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184345061 = '\x01';
  }
  if ((info->fields).Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar4 = Photon_Realtime_Player__get_IsMasterClient((info->fields).Sender,(MethodInfo *)0x0);
    if ((bVar4) && (ids != (System_Int32_array *)0x0)) {
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar1._0_4_ = (pUVar3->zeroVector).fields.x;
      uVar1._4_4_ = (pUVar3->zeroVector).fields.y;
      fVar2 = (pUVar3->zeroVector).fields.z;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      Map_MapDestruction__Apply(ids,(UnityEngine_Vector3_o *)local_28,0.0,false,(MethodInfo *)0x0);
    }
  }
  return;
}


// Map.MapDestruction$$Apply
// il2cpp: void Map_MapDestruction__Apply (System_Int32_array* ids, UnityEngine_Vector3_o center, float hitSize, bool effects, const MethodInfo* method);
// 0x181e8ee40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e8ef5e: nop 

void Map_MapDestruction__Apply
               (System_Int32_array *ids,UnityEngine_Vector3_o *center,float hitSize,bool effects,
               MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  int32_t *piVar2;
  undefined8 uVar3;
  int32_t length;
  System_Collections_Generic_Queue_uint__o *pSVar4;
  System_Collections_Generic_Queue_int__o *pSVar5;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_List_DestructibleMapObject__o *pSVar6;
  System_Collections_Generic_HashSet_Component__o *pSVar7;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_02;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint32_t uVar11;
  Map_DestructibleMapObject_o *pMVar12;
  UnityEngine_Vector3_o *pUVar13;
  uint uVar14;
  int index;
  Map_DestructibleMapObject_o *local_res8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_o local_88;
  UnityEngine_Bounds_o local_78 [4];
  
  if (Il2CppMethodInitialized_184345062 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Component_Clear)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Component_UnionWith);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Component_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DestructibleMapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DestructibleMapObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DestructibleMapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DestructibleMapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_Dequeue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_get_Count);
    Il2CppMethodInitialized_184345062 = '\x01';
  }
  local_res8 = (Map_DestructibleMapObject_o *)0x0;
  if (ids != (System_Int32_array *)0x0) {
    for (uVar14 = 0; (int)uVar14 < (int)ids->max_length; uVar14 = uVar14 + 1) {
      if ((uint)ids->max_length <= uVar14) {
        ThrowIndexOutOfRangeException();
      }
      uVar11 = ids->m_Items[(int)uVar14];
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      pSVar4 = (System_Collections_Generic_Queue_uint__o *)TypeInfo_Map_MapDestruction->static_fields->Pending
      ;
      if (pSVar4 == (System_Collections_Generic_Queue_uint__o *)0x0) goto label_181e8f3cb;
      System_Collections_Generic_Queue_uint___Enqueue
                (pSVar4,uVar11,(MethodInfo_B93BF0 *)MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
    }
    while( true ) {
      do {
        do {
          if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
          }
          pSVar5 = TypeInfo_Map_MapDestruction->static_fields->Pending;
          if (pSVar5 == (System_Collections_Generic_Queue_int__o *)0x0) goto label_181e8f3cb;
          if ((pSVar5->fields)._size < 1) {
            index = 0;
            goto label_181e8f182;
          }
          if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
          }
          pSVar4 = (System_Collections_Generic_Queue_uint__o *)
                   TypeInfo_Map_MapDestruction->static_fields->Pending;
          if (pSVar4 == (System_Collections_Generic_Queue_uint__o *)0x0) goto label_181e8f3cb;
          uVar11 = System_Collections_Generic_Queue_uint___Dequeue
                             (pSVar4,(MethodInfo_B936A0 *)
                                     MethodInfo_System_Collections_Generic_Queue_int_Dequeue);
          __this = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapDestruction->static_fields->Objects;
          if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_181e8f3cb;
          bVar10 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                             (__this,uVar11,(Il2CppObject **)&local_res8,
                              (MethodInfo_141F4E0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_TryGetValue
                             );
        } while (!bVar10);
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        __this_00 = TypeInfo_Map_MapDestruction->static_fields->Destroyed;
        if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_181e8f3cb;
        bVar10 = System_Collections_Generic_HashSet_int___Add
                           (__this_00,uVar11,
                            (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
      } while (!bVar10);
      if (local_res8 == (Map_DestructibleMapObject_o *)0x0) break;
      Map_DestructibleMapObject__Destroy(local_res8,(MethodInfo *)0x0);
      pMVar12 = local_res8;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      Map_MapDestruction__ReleaseHooks(pMVar12,(MethodInfo *)0x0);
      if ((local_res8 == (Map_DestructibleMapObject_o *)0x0) ||
         (__this_01 = (System_Collections_Generic_HashSet_object__o *)
                      TypeInfo_Map_MapDestruction->static_fields->NavMeshRemovals,
         __this_01 == (System_Collections_Generic_HashSet_object__o *)0x0)) break;
      System_Collections_Generic_HashSet_object___UnionWith
                (__this_01,(System_Collections_Generic_IEnumerable_T__o *)(local_res8->fields).Colliders,
                 (MethodInfo_176B920 *)MethodInfo_System_Collections_Generic_HashSet_Component_UnionWith);
      Map_MapDestruction__EnqueueAttached(local_res8,(MethodInfo *)0x0);
      pSVar6 = TypeInfo_Map_MapDestruction->static_fields->Applied;
      if (pSVar6 == (System_Collections_Generic_List_DestructibleMapObject__o *)0x0) break;
      il2cpp_runtime_helper_180012890(pSVar6,local_res8,MethodInfo_System_Collections_Generic_List_DestructibleMapObject_Add);
    }
  }
label_181e8f3cb:
  ThrowNullReferenceException();
label_181e8f182:
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  pSVar6 = TypeInfo_Map_MapDestruction->static_fields->Applied;
  if (pSVar6 == (System_Collections_Generic_List_DestructibleMapObject__o *)0x0) goto label_181e8f3cb;
  bVar10 = false;
  if (index < (pSVar6->fields)._size) {
    bVar10 = effects;
  }
  if ((bVar10 == false) || (3 < index)) {
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    pSVar6 = TypeInfo_Map_MapDestruction->static_fields->Applied;
    if (pSVar6 == (System_Collections_Generic_List_DestructibleMapObject__o *)0x0) goto label_181e8f3cb;
    length = (pSVar6->fields)._size;
    piVar2 = &(pSVar6->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pSVar6->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar7 = TypeInfo_Map_MapDestruction->static_fields->NavMeshRemovals;
    if (pSVar7 == (System_Collections_Generic_HashSet_Component__o *)0x0) goto label_181e8f3cb;
    if ((pSVar7->fields)._count != 0) {
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      pSVar7 = TypeInfo_Map_MapDestruction->static_fields->NavMeshRemovals;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      Map_MapLoader__RemoveNavMeshSources(pSVar7,(MethodInfo *)0x0);
      __this_02 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                  TypeInfo_Map_MapDestruction->static_fields->NavMeshRemovals;
      if (__this_02 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) goto label_181e8f3cb;
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (__this_02,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_Component_Clear
                );
    }
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  pSVar6 = TypeInfo_Map_MapDestruction->static_fields->Applied;
  if (pSVar6 == (System_Collections_Generic_List_DestructibleMapObject__o *)0x0) goto label_181e8f3cb;
  pMVar12 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar6,index,
                       (MethodInfo_92B830 *)
                       MethodInfo_System_Collections_Generic_List_DestructibleMapObject_get_Item);
  if (Il2CppMethodInitialized_184345069 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    Il2CppMethodInitialized_184345069 = '\x01';
  }
  if (pMVar12 == (Map_DestructibleMapObject_o *)0x0) goto label_181e8f3cb;
  local_a8.x = (center->fields).x;
  local_a8.y = (center->fields).y;
  local_a8.z = (center->fields).z;
  pUVar1 = &(pMVar12->fields).Bounds;
  uVar8._0_4_ = (pUVar1->fields).m_Center.fields.x;
  uVar8._4_4_ = (pUVar1->fields).m_Center.fields.y;
  uVar9 = *(undefined8 *)&(pMVar12->fields).Bounds.fields.m_Center.fields.z;
  pUVar1 = &(pMVar12->fields).Bounds;
  uVar3._0_4_ = (pUVar1->fields).m_Extents.fields.y;
  uVar3._4_4_ = (pUVar1->fields).m_Extents.fields.z;
  pUVar13 = UnityEngine_Bounds__Internal_ClosestPoint
                      (&local_88,&(pMVar12->fields).Bounds,(UnityEngine_Vector3_o *)&local_a8,
                       (MethodInfo *)0x0);
  local_98.x = (pUVar13->fields).x;
  local_98.y = (pUVar13->fields).y;
  local_98.z = (pUVar13->fields).z;
  local_78[0].fields.m_Center.fields._0_8_ = uVar8;
  local_78[0].fields._8_8_ = uVar9;
  local_78[0].fields.m_Extents.fields._4_8_ = uVar3;
  Map_MapDestructionDust__Spawn(local_78,(UnityEngine_Vector3_o *)&local_98,hitSize * 0.5,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  Map_MapDestructionDebris__Spawn(pMVar12,(MethodInfo *)0x0);
  index = index + 1;
  goto label_181e8f182;
}


// Map.MapDestruction$$EnqueueAttached
// il2cpp: void Map_MapDestruction__EnqueueAttached (Map_DestructibleMapObject_o* target, const MethodInfo* method);
// 0x181e8fa80
// eh: try 0x181e8fc40..0x181e8ff1a -> pad 0x183331b00 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e8fcad: mov rdx, qword ptr [rip + 0x21f8394]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x181e8fcb4: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e8fcb9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e8fcbe: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e8fcc3: test rcx, rcx
// asm:   0x181e8fcc6: jne 0x181e8ff04
// asm:   0x181e8fccc: mov rsi, qword ptr [rsp + 0x130]
// asm:   0x181e8feb0: mov rdx, qword ptr [rip + 0x221ea91]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_DestructibleMapObject_Dispo
// asm:   0x181e8feb7: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e8febc: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e8fec1: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181e8fec6: test rcx, rcx
// asm:   0x181e8fec9: jne 0x181e8ff1a
// asm:   0x181e8ff04: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181e8ff1a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331b00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331b05: push rbp
// asm:   0x183331b06: sub rsp, 0x20
// asm:   0x183331b0a: mov rbp, rdx
// asm:   0x183331b0d: mov rax, qword ptr [rbp + 0x68]
// asm:   0x183331b11: mov rcx, qword ptr [rax]
// asm:   0x183331b14: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183331b18: movabs rax, 0
// asm:   0x183331b22: add rsp, 0x20
// asm:   0x183331b26: pop rbp
// asm:   0x183331b27: ret 
// asm:   0x183331d60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331d65: push rbp
// asm:   0x183331d66: sub rsp, 0x20
// asm:   0x183331d6a: mov rbp, rdx
// asm:   0x183331d6d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183331d71: mov rcx, qword ptr [rax]
// asm:   0x183331d74: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183331d78: movabs rax, 0
// asm:   0x183331d82: add rsp, 0x20
// asm:   0x183331d86: pop rbp
// asm:   0x183331d87: ret 

void Map_MapDestruction__EnqueueAttached(Map_DestructibleMapObject_o *target,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  Il2CppClass *pIVar2;
  undefined8 uVar3;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_Queue_uint__o *pSVar4;
  System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  Il2CppClass *pIVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint32_t item;
  Il2CppObject *pIVar9;
  bool bVar10;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  float fVar11;
  System_Collections_Generic_HashSet_uint__o *local_res18;
  undefined1 local_108 [16];
  Il2CppObject *local_f8;
  undefined1 local_f0 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_e8;
  Il2CppObject *local_e0;
  undefined1 local_d8 [8];
  uint64_t uStack_d0;
  Il2CppObject *local_c8;
  UnityEngine_Bounds_o local_a8;
  Il2CppClass *local_88;
  void *pvStack_80;
  Il2CppClass *local_78;
  
  if (Il2CppMethodInitialized_184345063 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_DestructibleMapObject_Dispo
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_DestructibleMapObject_MoveN
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_DestructibleMapObject_get_C
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_DestructibleMapObject_GetEnumerator
              );
    Il2CppMethodInitialized_184345063 = '\x01';
  }
  local_res18 = (System_Collections_Generic_HashSet_uint__o *)0x0;
  local_f0 = (undefined1  [8])0x0;
  pUStack_e8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_e0 = (Il2CppObject *)0x0;
  local_d8 = (undefined1  [8])0x0;
  uStack_d0 = 0;
  local_c8 = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if ((target != (Map_DestructibleMapObject_o *)0x0) &&
     (__this = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren,
     __this != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar10 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                       (__this,(target->fields).Id,(Il2CppObject **)&local_res18,
                        (MethodInfo_141F4E0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_TryGetValue);
    if (bVar10) {
      if (local_res18 == (System_Collections_Generic_HashSet_uint__o *)0x0) goto label_181e8ff20;
      System_Collections_Generic_HashSet_uint___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_108,local_res18,
                 (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_f0 = (undefined1  [8])local_108._0_8_;
      pUStack_e8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_108._8_8_;
      local_e0 = local_f8;
      local_108._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_108._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f0;
      while( true ) {
        bVar10 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                           ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0,
                            (MethodInfo_1537E90 *)
                            MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
        if (!bVar10) break;
        item = (uint32_t)local_e0;
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        pSVar4 = (System_Collections_Generic_Queue_uint__o *)
                 TypeInfo_Map_MapDestruction->static_fields->Pending;
        if (pSVar4 == (System_Collections_Generic_Queue_uint__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Queue_uint___Enqueue
                  (pSVar4,item,(MethodInfo_B93BF0 *)MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
      }
      System_Collections_Generic_HashSet_Enumerator_int___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_f0,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    }
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    __this_00 = TypeInfo_Map_MapDestruction->static_fields->Objects;
    if (__this_00 != (System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *)0x0) {
      __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (MethodInfo_13C65A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Values
                            );
      if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_108,__this_02,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_DestructibleMapObject_GetEnumerator
                  );
        local_d8 = (undefined1  [8])local_108._0_8_;
        uStack_d0 = local_108._8_8_;
        local_c8 = local_f8;
        local_108._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_108._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d8;
        while( true ) {
          bVar10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                             ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                               *)local_d8,
                              (MethodInfo_155CFB0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_DestructibleMapObject_MoveN
                             );
          pIVar9 = local_c8;
          if (!bVar10) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d8,
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_DestructibleMapObject_Dispo
                      );
            return;
          }
          if (local_c8 == (Il2CppObject *)0x0) break;
          if (*(float *)&local_c8[3].monitor <= (target->fields).Size * 0.5) {
            if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
            }
            __this_01 = TypeInfo_Map_MapDestruction->static_fields->Destroyed;
            if (__this_01 == (System_Collections_Generic_HashSet_int__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar10 = System_Collections_Generic_HashSet_Int32Enum___Contains
                               ((System_Collections_Generic_HashSet_T__o *)__this_01,
                                *(int32_t *)&pIVar9[1].klass,
                                (MethodInfo_1759C90 *)
                                MethodInfo_System_Collections_Generic_HashSet_int_Contains);
            if (!bVar10) {
              pIVar5 = pIVar9[2].klass;
              pvVar6 = pIVar9[2].monitor;
              pIVar2 = pIVar9[3].klass;
              pUVar1 = &(target->fields).Bounds;
              uVar7._0_4_ = (pUVar1->fields).m_Center.fields.x;
              uVar7._4_4_ = (pUVar1->fields).m_Center.fields.y;
              uVar8 = *(undefined8 *)&(target->fields).Bounds.fields.m_Center.fields.z;
              pUVar1 = &(target->fields).Bounds;
              uVar3._0_4_ = (pUVar1->fields).m_Extents.fields.y;
              uVar3._4_4_ = (pUVar1->fields).m_Extents.fields.z;
              if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
              }
              local_a8.fields.m_Center.fields._0_8_ = uVar7;
              local_a8.fields._8_8_ = uVar8;
              local_a8.fields.m_Extents.fields._4_8_ = uVar3;
              local_88 = pIVar5;
              pvStack_80 = pvVar6;
              local_78 = pIVar2;
              fVar11 = Map_MapDestruction__ContainedFraction
                                 ((UnityEngine_Bounds_o *)&local_88,&local_a8,(MethodInfo *)0x0);
              if (0.6 <= fVar11) {
                if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
                }
                pSVar4 = (System_Collections_Generic_Queue_uint__o *)
                         TypeInfo_Map_MapDestruction->static_fields->Pending;
                if (pSVar4 == (System_Collections_Generic_Queue_uint__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_Queue_uint___Enqueue
                          (pSVar4,*(uint32_t *)&pIVar9[1].klass,
                           (MethodInfo_B93BF0 *)MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
              }
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
label_181e8ff20:
  ThrowNullReferenceException();
}


// Map.MapDestruction$$ContainedFraction
// il2cpp: float Map_MapDestruction__ContainedFraction (UnityEngine_Bounds_o inner, UnityEngine_Bounds_o outer, const MethodInfo* method);
// 0x181e8f8b0

float Map_MapDestruction__ContainedFraction
                (UnityEngine_Bounds_o *inner,UnityEngine_Bounds_o *outer,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = (outer->fields).m_Extents.fields.x + (outer->fields).m_Center.fields.x;
  fVar8 = (inner->fields).m_Extents.fields.x + (inner->fields).m_Center.fields.x;
  if (fVar2 <= fVar8) {
    fVar8 = fVar2;
  }
  fVar2 = (inner->fields).m_Center.fields.x - (inner->fields).m_Extents.fields.x;
  fVar3 = (outer->fields).m_Center.fields.x - (outer->fields).m_Extents.fields.x;
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar5 = (outer->fields).m_Extents.fields.y + (outer->fields).m_Center.fields.y;
  fVar4 = (outer->fields).m_Center.fields.y - (outer->fields).m_Extents.fields.y;
  fVar3 = (inner->fields).m_Center.fields.y - (inner->fields).m_Extents.fields.y;
  fVar7 = (inner->fields).m_Extents.fields.y + (inner->fields).m_Center.fields.y;
  fVar9 = (inner->fields).m_Extents.fields.z + (inner->fields).m_Center.fields.z;
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = (outer->fields).m_Center.fields.z - (outer->fields).m_Extents.fields.z;
  if (fVar5 <= fVar7) {
    fVar7 = fVar5;
  }
  fVar6 = (outer->fields).m_Extents.fields.z + (outer->fields).m_Center.fields.z;
  fVar5 = (inner->fields).m_Center.fields.z - (inner->fields).m_Extents.fields.z;
  if (fVar6 <= fVar9) {
    fVar9 = fVar6;
  }
  if (fVar5 <= fVar4) {
    fVar5 = fVar4;
  }
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar1->zeroVector).fields.x;
  fVar6 = fVar8 - fVar2;
  if (fVar8 - fVar2 <= fVar4) {
    fVar6 = fVar4;
  }
  fVar8 = (pUVar1->zeroVector).fields.y;
  fVar2 = fVar7 - fVar3;
  if (fVar7 - fVar3 <= fVar8) {
    fVar2 = fVar8;
  }
  fVar8 = (inner->fields).m_Extents.fields.x;
  fVar3 = (inner->fields).m_Extents.fields.y;
  fVar8 = fVar8 + fVar8;
  fVar7 = (inner->fields).m_Extents.fields.z;
  fVar3 = fVar3 + fVar3;
  fVar4 = (pUVar1->zeroVector).fields.z;
  fVar10 = fVar9 - fVar5;
  if (fVar9 - fVar5 <= fVar4) {
    fVar10 = fVar4;
  }
  fVar7 = fVar7 + fVar7;
  if (Il2CppMethodInitialized_18433dbeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbeb = '\x01';
  }
  pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar9 = (pUVar1->oneVector).fields.x * 0.01;
  fVar4 = (pUVar1->oneVector).fields.y * 0.01;
  fVar5 = (pUVar1->oneVector).fields.z * 0.01;
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  if (fVar7 <= fVar5) {
    fVar7 = fVar5;
  }
  return (fVar2 * fVar6 * fVar10) / (fVar3 * fVar8 * fVar7);
}


// Map.MapDestruction$$CanBreak
// il2cpp: bool Map_MapDestruction__CanBreak (int32_t id, float maxObjectSize, const MethodInfo* method);
// 0x181e8f6a0

bool Map_MapDestruction__CanBreak(int32_t id,float maxObjectSize,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_HashSet_int__o *__this_00;
  bool bVar1;
  Il2CppObject *local_res20;
  
  if (Il2CppMethodInitialized_184345064 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184345064 = '\x01';
  }
  local_res20 = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  __this = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_Map_MapDestruction->static_fields->Objects;
  if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      (__this,id,&local_res20,
                       (MethodInfo_141F4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_TryGetValue)
    ;
    if (!bVar1) {
      return false;
    }
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    __this_00 = TypeInfo_Map_MapDestruction->static_fields->Destroyed;
    if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)__this_00,id,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar1) {
        return false;
      }
      if (local_res20 != (Il2CppObject *)0x0) {
        return *(float *)&local_res20[3].monitor <= maxObjectSize;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$GetMaxObjectSize
// il2cpp: float Map_MapDestruction__GetMaxObjectSize (Characters_BaseCharacter_o* attacker, float hitSize, const MethodInfo* method);
// 0x181e90690

float Map_MapDestruction__GetMaxObjectSize
                (Characters_BaseCharacter_o *attacker,float hitSize,MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_184345065 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_184345065 = '\x01';
  }
  if (attacker != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (attacker->klass->_2).typeHierarchyDepth) &&
       ((attacker->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      return hitSize * 23.0;
    }
  }
  return hitSize * 11.0;
}


// Map.MapDestruction$$GetMaxHitSize
// il2cpp: float Map_MapDestruction__GetMaxHitSize (Characters_BaseCharacter_o* attacker, float hitSize, const MethodInfo* method);
// 0x181e904f0

float Map_MapDestruction__GetMaxHitSize(Characters_BaseCharacter_o *attacker,float hitSize,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_Collider_o *collider;
  bool bVar2;
  longlong *plVar3;
  
  if (Il2CppMethodInitialized_184345066 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184345066 = '\x01';
  }
  if (attacker != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (attacker->klass->_2).typeHierarchyDepth) &&
       ((attacker->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      if (Il2CppMethodInitialized_184345067 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184345067 = '\x01';
      }
      if ((*(uint64_t *)((char *)attacker + 0x100)) != (void *)0x0) {
        plVar3 = (longlong *)((longlong)(*(uint64_t *)((char *)attacker + 0x100)) + 0x90);
        if (*plVar3 == 0) {
          plVar3 = (longlong *)((longlong)(*(uint64_t *)((char *)attacker + 0x100)) + 0x88);
        }
        x = (UnityEngine_Object_o *)*plVar3;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (x == (UnityEngine_Object_o *)0x0) goto label_181e90680;
          x_00 = (*(uint64_t *)((char *)x + 0x50));
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar2 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            collider = (*(uint64_t *)((char *)x + 0x50));
            if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
            }
            hitSize = Map_MapDestruction__GetHitSize(collider,(MethodInfo *)0x0);
          }
        }
        return hitSize * 4.0;
      }
label_181e90680:
      ThrowNullReferenceException();
    }
  }
  return 150.0;
}


// Map.MapDestruction$$GetHandSize
// il2cpp: float Map_MapDestruction__GetHandSize (Characters_BaseTitan_o* titan, float hitSize, const MethodInfo* method);
// 0x181e901b0

float Map_MapDestruction__GetHandSize(Characters_BaseTitan_o *titan,float hitSize,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_Collider_o *collider;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184345067 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345067 = '\x01';
  }
  if ((titan != (Characters_BaseTitan_o *)0x0) &&
     (pCVar1 = (titan->fields).BaseTitanCache, pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0)) {
    lVar3 = 0x90;
    if ((pCVar1->fields).HandRHitbox == (Characters_BaseHitbox_o *)0x0) {
      lVar3 = 0x88;
    }
    x = *(UnityEngine_Object_o **)((longlong)&pCVar1->klass + lVar3);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (x == (UnityEngine_Object_o *)0x0) goto label_181e902b5;
      x_00 = (*(uint64_t *)((char *)x + 0x50));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        collider = (*(uint64_t *)((char *)x + 0x50));
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        fVar4 = Map_MapDestruction__GetHitSize(collider,(MethodInfo *)0x0);
        return fVar4;
      }
    }
    return hitSize;
  }
label_181e902b5:
  ThrowNullReferenceException();
}


// Map.MapDestruction$$GetHitSize
// il2cpp: float Map_MapDestruction__GetHitSize (UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x181e902c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e904d3: movss xmm1, dword ptr [rip + 0x15af9e9]
// asm:   0x181e904db: movaps xmm0, xmm6
// asm:   0x181e904de: call 0x1804f6b50  ; il2cpp_runtime_helper_1804f6b50()
// asm:   0x181e904e3: jmp 0x181e903f7

float Map_MapDestruction__GetHitSize(UnityEngine_Collider_o *collider,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Collider_c *pUVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Bounds_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Bounds_o local_68 [4];
  
  if (Il2CppMethodInitialized_184345068 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184345068 = '\x01';
  }
  if ((collider != (UnityEngine_Collider_o *)0x0) &&
     (__this = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0),
     __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = UnityEngine_Transform__get_lossyScale
                       ((UnityEngine_Vector3_o *)&local_78,__this,(MethodInfo *)0x0);
    local_78.x = (pUVar3->fields).x;
    local_78.y = (pUVar3->fields).y;
    local_78.z = (pUVar3->fields).z;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pUVar3 = EZhex1991_EZSoftBone_EZSoftBoneUtility__Abs
                       ((UnityEngine_Vector3_o *)local_68,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0
                       );
    fVar6 = (pUVar3->fields).x;
    fVar7 = (pUVar3->fields).y;
    fVar8 = (pUVar3->fields).z;
    fVar5 = fVar7;
    if (fVar7 <= fVar8) {
      fVar5 = fVar8;
    }
    fVar9 = fVar6;
    if (fVar6 <= fVar5) {
      fVar9 = fVar5;
    }
    pUVar2 = collider->klass;
    bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if (((pUVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider
       )) {
      bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
      if (((pUVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
        bVar1 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
        if (((pUVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider)) {
          pUVar4 = UnityEngine_Collider__get_bounds(local_68,collider,(MethodInfo *)0x0);
          fVar6 = (pUVar4->fields).m_Extents.fields.x;
          fVar7 = (pUVar4->fields).m_Extents.fields.y;
          fVar6 = fVar6 + fVar6;
          fVar8 = (pUVar4->fields).m_Extents.fields.z;
          fVar7 = fVar7 + fVar7;
          fVar8 = fVar8 + fVar8;
        }
        else {
          pUVar3 = UnityEngine_BoxCollider__get_size
                             ((UnityEngine_Vector3_o *)local_68,(UnityEngine_BoxCollider_o *)collider,
                              (MethodInfo *)0x0);
          fVar6 = fVar6 * (pUVar3->fields).x;
          fVar7 = fVar7 * (pUVar3->fields).y;
          fVar8 = fVar8 * (pUVar3->fields).z;
        }
        fVar8 = fVar7 * fVar6 * fVar8;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        fVar6 = (float)il2cpp_runtime_helper_1804f6b50(fVar8,0x3eaaaaab);
        return fVar6;
      }
      fVar6 = UnityEngine_CapsuleCollider__get_radius
                        ((UnityEngine_CapsuleCollider_o *)collider,(MethodInfo *)0x0);
    }
    else {
      fVar6 = UnityEngine_SphereCollider__get_radius
                        ((UnityEngine_SphereCollider_o *)collider,(MethodInfo *)0x0);
    }
    return fVar6 * fVar9 + fVar6 * fVar9;
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$SpawnEffects
// il2cpp: void Map_MapDestruction__SpawnEffects (Map_DestructibleMapObject_o* target, UnityEngine_Vector3_o center, float hitSize, const MethodInfo* method);
// 0x181e92af0

void Map_MapDestruction__SpawnEffects
               (Map_DestructibleMapObject_o *target,UnityEngine_Vector3_o *center,float hitSize,
               MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Bounds_o local_58 [3];
  
  if (Il2CppMethodInitialized_184345069 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    Il2CppMethodInitialized_184345069 = '\x01';
  }
  if (target != (Map_DestructibleMapObject_o *)0x0) {
    local_78.x = (center->fields).x;
    local_78.y = (center->fields).y;
    local_78.z = (center->fields).z;
    pUVar1 = &(target->fields).Bounds;
    uVar3._0_4_ = (pUVar1->fields).m_Center.fields.x;
    uVar3._4_4_ = (pUVar1->fields).m_Center.fields.y;
    uVar4 = *(undefined8 *)&(target->fields).Bounds.fields.m_Center.fields.z;
    pUVar1 = &(target->fields).Bounds;
    uVar2._0_4_ = (pUVar1->fields).m_Extents.fields.y;
    uVar2._4_4_ = (pUVar1->fields).m_Extents.fields.z;
    pUVar5 = UnityEngine_Bounds__Internal_ClosestPoint
                       ((UnityEngine_Vector3_o *)local_58,&(target->fields).Bounds,
                        (UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
    local_68.x = (pUVar5->fields).x;
    local_68.y = (pUVar5->fields).y;
    local_68.z = (pUVar5->fields).z;
    local_58[0].fields.m_Center.fields._0_8_ = uVar3;
    local_58[0].fields._8_8_ = uVar4;
    local_58[0].fields.m_Extents.fields._4_8_ = uVar2;
    Map_MapDestructionDust__Spawn(local_58,(UnityEngine_Vector3_o *)&local_68,hitSize * 0.5,(MethodInfo *)0x0)
    ;
    if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
    }
    Map_MapDestructionDebris__Spawn(target,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$ReleaseHooks
// il2cpp: void Map_MapDestruction__ReleaseHooks (Map_DestructibleMapObject_o* target, const MethodInfo* method);
// 0x181e91830
// eh: try 0x181e91952..0x181e91a33 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e91a08: mov rdx, qword ptr [rip + 0x21f0519]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x181e91a0f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e91a14: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e91a19: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e91a1e: test rcx, rcx
// asm:   0x181e91a21: jne 0x181e91a33
// asm:   0x181e91a33: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Map_MapDestruction__ReleaseHooks(Map_DestructibleMapObject_o *target,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_Vector2Int__o *__this;
  UnityEngine_Object_c *useable;
  Il2CppObject *x;
  bool bVar3;
  char cVar4;
  undefined1 local_60 [16];
  UnityEngine_Object_o *local_50;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_18434506a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_18434506a = '\x01';
  }
  local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      __this = (System_Collections_Generic_HashSet_Vector2Int__o *)(*(uint64_t *)((char *)pGVar2 + 0x40));
      if (__this == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this,
                 (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
      local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._current = (Il2CppObject *)local_50;
      local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_15381F0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
        x = local_48.fields._current;
        if (!bVar3) break;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar3) {
          if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
            ThrowNullReferenceException();
          }
          cVar4 = (*(code *)((UnityEngine_Object_c *)x->klass)[3].vtable._3_ToString.method)
                            (x,((UnityEngine_Object_c *)x->klass)[4]._1.image);
          if (cVar4 != '\0') {
            useable = ((UnityEngine_Object_o *)((longlong)x + 0x120))->klass;
            if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
            }
            Map_MapDestruction__ReleaseHooks_1e91a40
                      ((Characters_HookUseable_o *)useable,target,(MethodInfo *)0x0);
            Map_MapDestruction__ReleaseHooks_1e91a40
                      (((UnityEngine_Object_o *)((longlong)x + 0x120))->monitor,target,(MethodInfo *)0x0);
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    }
  }
  return;
}


// Map.MapDestruction$$ReleaseHooks
// il2cpp: void Map_MapDestruction__ReleaseHooks (Characters_HookUseable_o* useable, Map_DestructibleMapObject_o* target, const MethodInfo* method);
// 0x181e91a40
// eh: try 0x181e91b00..0x181e91bbd -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e91b86: mov rdx, qword ptr [rip + 0x21efe5b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose
// asm:   0x181e91b8d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e91b92: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e91b97: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e91b9c: test rcx, rcx
// asm:   0x181e91b9f: jne 0x181e91bbd
// asm:   0x181e91bbd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Map_MapDestruction__ReleaseHooks_1e91a40
               (Characters_HookUseable_o *useable,Map_DestructibleMapObject_o *target,MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o *__this;
  Il2CppObject *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  Characters_Hook_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434506b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434506b = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (useable != (Characters_HookUseable_o *)0x0) {
    __this = (useable->fields).Hooks;
    if (__this == (System_Collections_Generic_List_Hook__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
      __this_00 = local_28.fields._current;
      if (!bVar1) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((Characters_Hook_o *)__this_00 == (Characters_Hook_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((Characters_Hook_Fields *)((longlong)__this_00 + 0x10))->State == 2) {
          if (target == (Map_DestructibleMapObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = Map_DestructibleMapObject__Contains
                            (target,((Characters_Hook_Fields *)((longlong)__this_00 + 0x10))->HookParent,
                             (MethodInfo *)0x0);
          if (bVar1) {
            Characters_Hook__SetHookState((Characters_Hook_o *)__this_00,4,(MethodInfo *)0x0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
  }
  return;
}


// Map.MapDestruction$$IsFinite
// il2cpp: bool Map_MapDestruction__IsFinite (UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x181e90720

bool Map_MapDestruction__IsFinite(UnityEngine_Vector3_o *value,MethodInfo *method)

{
  if (((uint)ABS((value->fields).x) < 0x7f800000) && ((uint)ABS((value->fields).y) < 0x7f800000)) {
    return (uint)ABS((value->fields).z) < 0x7f800000;
  }
  return false;
}


// Map.MapDestruction$$.cctor
// il2cpp: void Map_MapDestruction___cctor (const MethodInfo* method);
// 0x181e92c70

void Map_MapDestruction___cctor(MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Int32_array *layers;
  System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *__this;
  System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  UnityEngine_Collider_array *value;
  System_Collections_Generic_List_int__o *__this_02;
  System_Collections_Generic_List_DestructibleMapObject__o *__this_03;
  System_Collections_Generic_Queue_int__o *__this_04;
  System_Collections_Generic_HashSet_Component__o *__this_05;
  UnityEngine_WaitForFixedUpdate_o *__this_06;
  
  if (Il2CppMethodInitialized_18434506c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Collider_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Component_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Component);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_DestructibleMapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_DestructibleMapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Queue_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForFixedUpdate);
    Il2CppMethodInitialized_18434506c = '\x01';
  }
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,6);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if (((((int)layers->max_length != 0) &&
         (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
         1 < (uint)layers->max_length)) &&
        (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
        2 < (uint)layers->max_length)) &&
       (((layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters,
         3 < (uint)layers->max_length &&
         (layers->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectTitans,
         4 < (uint)layers->max_length)) &&
        (layers->m_Items[4] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectHumans,
        5 < (uint)layers->max_length)))) {
      layers->m_Items[5] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectProjectiles;
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      UVar1 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar1.fields.m_Mask,(MethodInfo *)0x0);
      TypeInfo_Map_MapDestruction->static_fields->MapMask = (int32_t)UVar1.fields.m_Mask;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject);
      System_Collections_Generic_Dictionary_int__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (MethodInfo_1404750 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_ctor);
      TypeInfo_Map_MapDestruction->static_fields->Objects = __this;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestruction->static_fields->Objects,__this);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice
                            );
      System_Collections_Generic_Dictionary_object__BatchSlice____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_1454140 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_ctor);
      TypeInfo_Map_MapDestruction->static_fields->BatchSlices = __this_00;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestruction->static_fields->BatchSlices,__this_00);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor
                (__this_01,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      TypeInfo_Map_MapDestruction->static_fields->Destroyed = __this_01;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestruction->static_fields->Destroyed,__this_01);
      value = (UnityEngine_Collider_array *)SZArrayNew(TypeInfo_UnityEngine_Collider_array,0x40);
      TypeInfo_Map_MapDestruction->static_fields->Overlaps = value;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestruction->static_fields->Overlaps,value);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
      System_Collections_Generic_List_int____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
      TypeInfo_Map_MapDestruction->static_fields->Targets = __this_02;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestruction->static_fields->Targets,__this_02);
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_DestructibleMapObject);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_DestructibleMapObject_ctor);
      TypeInfo_Map_MapDestruction->static_fields->Applied = __this_03;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestruction->static_fields->Applied,__this_03);
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_int);
      System_Collections_Generic_Queue_int____ctor
                ((System_Runtime_CompilerServices_ReadOnlyCollectionBuilder_T__o *)__this_04,
                 (MethodInfo_B96030 *)MethodInfo_System_Collections_Generic_Queue_int_ctor);
      TypeInfo_Map_MapDestruction->static_fields->Pending = __this_04;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestruction->static_fields->Pending,__this_04);
      __this_05 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Component);
      System_Collections_Generic_HashSet_object____ctor
                ((System_Collections_Generic_HashSet_object__o *)__this_05,
                 (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Component_ctor);
      TypeInfo_Map_MapDestruction->static_fields->NavMeshRemovals = __this_05;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestruction->static_fields->NavMeshRemovals,__this_05);
      __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForFixedUpdate);
      UnityEngine_WaitForFixedUpdate___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_06,(MethodInfo *)0x0);
      TypeInfo_Map_MapDestruction->static_fields->FixedStep = __this_06;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapDestruction->static_fields->FixedStep,__this_06);
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


