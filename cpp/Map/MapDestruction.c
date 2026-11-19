// Type: Map.MapDestruction
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapDestruction.cs
// Prior real C# source: none
// --------------------------------

// Map.MapDestruction.<SweepHitbox>d__31$$.ctor
// il2cpp: void Map_MapDestruction__SweepHitbox_d__31___ctor (Map_MapDestruction__SweepHitbox_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x597e010

void Map_MapDestruction__SweepHitbox_d__31___ctor
               (Map_MapDestruction__SweepHitbox_d__31_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapDestruction.<SweepHitbox>d__31$$System.IDisposable.Dispose
// il2cpp: void Map_MapDestruction__SweepHitbox_d__31__System_IDisposable_Dispose (Map_MapDestruction__SweepHitbox_d__31_o* __this, const MethodInfo* method);
// 0x59827b0

void Map_MapDestruction__SweepHitbox_d__31__System_IDisposable_Dispose
               (Map_MapDestruction__SweepHitbox_d__31_o *__this,MethodInfo *method)

{
  return;
}


// Map.MapDestruction.<SweepHitbox>d__31$$MoveNext
// il2cpp: bool Map_MapDestruction__SweepHitbox_d__31__MoveNext (Map_MapDestruction__SweepHitbox_d__31_o* __this, const MethodInfo* method);
// 0x59827c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5982920: jmp 0x5982b93

bool Map_MapDestruction__SweepHitbox_d__31__MoveNext
               (Map_MapDestruction__SweepHitbox_d__31_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  Characters_BaseHitbox_o *pCVar6;
  UnityEngine_Collider_o *pUVar7;
  UnityEngine_BoxCollider_o *__this_00;
  UnityEngine_Collider_array *pUVar8;
  Characters_BaseCharacter_o *attacker;
  UnityEngine_Vector3_Fields point0;
  bool bVar9;
  int32_t iVar10;
  System_Collections_Generic_HashSet_int__o *pSVar11;
  UnityEngine_Transform_o *pUVar12;
  MethodInfo *pMVar13;
  Map_MapDestruction_c *method_00;
  float hitSize;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Quaternion_o UVar19;
  UnityEngine_Vector3_o center;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  UnityEngine_Vector3_o v;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o halfExtents;
  undefined8 uStack_98;
  float fStack_78;
  float fStack_74;
  UnityEngine_Bounds_o UStack_60;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  
  if (Il2CppMethodInitialized_075459ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075459ff = '\x01';
  }
  iVar5 = (__this->fields).__1__state;
  if (iVar5 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar5 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pSVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
    System_Collections_Generic_HashSet_int____ctor
              (pSVar11,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    (__this->fields)._hit_5__2 = pSVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hit_5__2);
    pCVar6 = (__this->fields).hitbox;
    if (pCVar6 == (Characters_BaseHitbox_o *)0x0) goto label_05982d0a;
    (__this->fields)._collider_5__3 = (pCVar6->fields)._collider;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._collider_5__3);
    pUVar7 = (__this->fields)._collider_5__3;
    if (pUVar7 == (UnityEngine_Collider_o *)0x0) goto label_05982d0a;
    UnityEngine_Collider__get_bounds(&UStack_60,pUVar7,(MethodInfo *)0x0);
    (__this->fields)._previous_5__4.fields.x = UStack_60.fields.m_Center.fields.x;
    (__this->fields)._previous_5__4.fields.y = UStack_60.fields.m_Center.fields.y;
    (__this->fields)._previous_5__4.fields.z = UStack_60.fields.m_Center.fields.z;
  }
  pUVar7 = (__this->fields)._collider_5__3;
  if (pUVar7 == (UnityEngine_Collider_o *)0x0) goto label_05982d0a;
  bVar9 = UnityEngine_Collider__get_enabled(pUVar7,(MethodInfo *)0x0);
  if (!bVar9) {
    return false;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    if (Il2CppMethodInitialized_075459e5 != '\0') goto label_0598290a;
label_05982933:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_075459e5 = '\x01';
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor != 0) goto label_05982917;
label_0598295f:
    method_00 = TypeInfo_Map_MapDestruction;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    bVar9 = Map_MapDestruction__get_IsActive((MethodInfo *)method_00);
  }
  else {
    if (Il2CppMethodInitialized_075459e5 == '\0') goto label_05982933;
label_0598290a:
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) goto label_0598295f;
label_05982917:
    bVar9 = Map_MapDestruction__get_IsActive((MethodInfo *)TypeInfo_Map_MapDestruction);
  }
  if (!bVar9) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_Map_MapManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    cVar3 = TypeInfo_Map_MapManager->static_fields->MapLoaded;
  }
  else {
    cVar3 = *(char *)((Il2CppClass *)TypeInfo_Map_MapManager)->static_fields;
  }
  if (cVar3 == '\0') {
    return false;
  }
  pMVar13 = (MethodInfo *)(__this->fields)._collider_5__3;
  if (pMVar13 == (MethodInfo *)0x0) goto label_05982d0a;
  UnityEngine_Collider__get_bounds(&UStack_60,(UnityEngine_Collider_o *)pMVar13,(MethodInfo *)0x0);
  pUVar7 = (__this->fields)._collider_5__3;
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  hitSize = Map_MapDestruction__GetHitSize(pUVar7,pMVar13);
  __this_00 = (UnityEngine_BoxCollider_o *)(__this->fields)._collider_5__3;
  if (__this_00 == (UnityEngine_BoxCollider_o *)0x0) {
label_05982a24:
    point0 = (__this->fields)._previous_5__4.fields;
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    pUVar8 = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
    iVar10 = TypeInfo_Map_MapDestruction->static_fields->MapMask;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    pMVar13 = (MethodInfo *)0x0;
    UVar20.fields.z = UStack_60.fields.m_Center.fields.z;
    UVar20.fields.x = UStack_60.fields.m_Center.fields.x;
    UVar20.fields.y = UStack_60.fields.m_Center.fields.y;
    iVar10 = UnityEngine_Physics__OverlapCapsuleNonAlloc
                       ((UnityEngine_Vector3_o)point0,UVar20,hitSize * 0.5,pUVar8,iVar10,1,(MethodInfo *)0x0);
    pCVar6 = (__this->fields).hitbox;
  }
  else {
    bVar4 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar4) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar4 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider)) goto label_05982a24;
    UVar20 = UnityEngine_BoxCollider__get_size(__this_00,(MethodInfo *)0x0);
    pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_05982d0a;
    UVar21 = UnityEngine_Transform__get_lossyScale(pUVar12,(MethodInfo *)0x0);
    uStack_98._0_4_ = UVar20.fields.x;
    uStack_98._4_4_ = UVar20.fields.y;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    uVar14 = 0;
    v.fields.y = uStack_98._4_4_ * UVar21.fields.y;
    v.fields.x = (float)uStack_98 * UVar21.fields.x;
    v.fields.z = UVar20.fields.z * UVar21.fields.z;
    UVar20 = Utility_Util__Abs(v,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    pUVar8 = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
    pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_05982d0a;
    uStack_98._0_4_ = UVar20.fields.x;
    uStack_98._4_4_ = UVar20.fields.y;
    UVar19 = UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
    iVar10 = TypeInfo_Map_MapDestruction->static_fields->MapMask;
    fVar15 = UVar19.fields.x;
    fVar16 = UVar19.fields.y;
    fVar17 = UVar19.fields.z;
    fVar18 = UVar19.fields.w;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      auStack_38._8_4_ = extraout_XMM0_Dc;
      auStack_38._0_8_ = UVar19.fields._0_8_;
      auStack_38._12_4_ = extraout_XMM0_Dd;
      auStack_48._8_4_ = (int)uVar14;
      auStack_48._0_8_ = UVar19.fields._8_8_;
      auStack_48._12_4_ = (int)((ulong)uVar14 >> 0x20);
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      fVar15 = (float)auStack_38._0_4_;
      fVar16 = (float)auStack_38._4_4_;
      fVar17 = (float)auStack_48._0_4_;
      fVar18 = (float)auStack_48._4_4_;
    }
    pMVar13 = (MethodInfo *)0x0;
    UVar21.fields.z = UStack_60.fields.m_Center.fields.z;
    UVar21.fields.x = UStack_60.fields.m_Center.fields.x;
    UVar21.fields.y = UStack_60.fields.m_Center.fields.y;
    halfExtents.fields.z = UVar20.fields.z * 0.5;
    halfExtents.fields.x = (float)uStack_98 * 0.5;
    halfExtents.fields.y = uStack_98._4_4_ * 0.5;
    UVar19.fields.y = fVar16;
    UVar19.fields.x = fVar15;
    UVar19.fields.w = fVar18;
    UVar19.fields.z = fVar17;
    iVar10 = UnityEngine_Physics__OverlapBoxNonAlloc
                       (UVar21,halfExtents,pUVar8,UVar19,iVar10,1,(MethodInfo *)0x0);
    pCVar6 = (__this->fields).hitbox;
  }
  if (pCVar6 != (Characters_BaseHitbox_o *)0x0) {
    attacker = (pCVar6->fields).Owner;
    uVar1 = (__this->fields)._previous_5__4.fields.x;
    uVar2 = (__this->fields)._previous_5__4.fields.y;
    fStack_78 = UStack_60.fields.m_Center.fields.x;
    fStack_74 = UStack_60.fields.m_Center.fields.y;
    direction.fields.x = fStack_78 - (float)uVar1;
    direction.fields.y = fStack_74 - (float)uVar2;
    direction.fields.z = UStack_60.fields.m_Center.fields.z - (__this->fields)._previous_5__4.fields.z;
    pSVar11 = (__this->fields)._hit_5__2;
    if ((((Il2CppClass *)TypeInfo_Map_MapDestruction)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    center.fields.z = UStack_60.fields.m_Center.fields.z;
    center.fields.x = UStack_60.fields.m_Center.fields.x;
    center.fields.y = UStack_60.fields.m_Center.fields.y;
    Map_MapDestruction__Request(attacker,iVar10,center,direction,hitSize,pSVar11,pMVar13);
    (__this->fields)._previous_5__4.fields.x = UStack_60.fields.m_Center.fields.x;
    (__this->fields)._previous_5__4.fields.y = UStack_60.fields.m_Center.fields.y;
    (__this->fields)._previous_5__4.fields.z = UStack_60.fields.m_Center.fields.z;
    (__this->fields).__2__current = (Il2CppObject *)TypeInfo_Map_MapDestruction->static_fields->FixedStep;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
label_05982d0a:
  ThrowNullReferenceException();
}


// Map.MapDestruction.<SweepHitbox>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapDestruction__SweepHitbox_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapDestruction__SweepHitbox_d__31_o* __this, const MethodInfo* method);
// 0x5982d10

Il2CppObject *
Map_MapDestruction__SweepHitbox_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Map_MapDestruction__SweepHitbox_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapDestruction.<SweepHitbox>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapDestruction__SweepHitbox_d__31__System_Collections_IEnumerator_Reset (Map_MapDestruction__SweepHitbox_d__31_o* __this, const MethodInfo* method);
// 0x5982d20

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
// 0x5982d60

Il2CppObject *
Map_MapDestruction__SweepHitbox_d__31__System_Collections_IEnumerator_get_Current
          (Map_MapDestruction__SweepHitbox_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapDestruction$$get_IsActive
// il2cpp: bool Map_MapDestruction__get_IsActive (const MethodInfo* method);
// 0x597d0f0

bool Map_MapDestruction__get_IsActive(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameMiscSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_075459e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075459e4 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).Misc, pSVar2 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).DestructibleEnvironment, pSVar3 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((pSVar3->fields)._value == false) {
    return false;
  }
  return TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2;
}


// Map.MapDestruction$$get_Enabled
// il2cpp: bool Map_MapDestruction__get_Enabled (const MethodInfo* method);
// 0x597d180

bool Map_MapDestruction__get_Enabled(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_075459e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_075459e5 = '\x01';
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Map_MapDestruction;
  }
  else {
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Map_MapDestruction;
  }
  TypeInfo_Map_MapDestruction = (Map_MapDestruction_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar2 = Map_MapDestruction__get_IsActive((MethodInfo *)klass);
  }
  else {
    bVar2 = Map_MapDestruction__get_IsActive((MethodInfo *)klass);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_Map_MapManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    return TypeInfo_Map_MapManager->static_fields->MapLoaded != false;
  }
  return false;
}


// Map.MapDestruction$$Reset
// il2cpp: void Map_MapDestruction__Reset (const MethodInfo* method);
// 0x597d220
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597d24d: jmp 0x597d308

void Map_MapDestruction__Reset(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  
  if (Il2CppMethodInitialized_075459e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_075459e6 = '\x01';
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapDestruction->static_fields->Objects;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_int__object__o **)
              ((long)((Il2CppClass *)TypeInfo_Map_MapDestruction)->static_fields + 8);
  }
  if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___Clear
              (__this,(MethodInfo_4A0F8F0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_Clear);
    __this_00 = TypeInfo_Map_MapDestruction->static_fields->BatchSlices;
    if (__this_00 != (System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *)0x0) {
      System_Collections_Generic_Dictionary_object__BatchSlice___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_4A71780 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_Clear);
      __this_01 = TypeInfo_Map_MapDestruction->static_fields->Destroyed;
      if (__this_01 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        System_Collections_Generic_HashSet_int___Clear
                  (__this_01,(MethodInfo_4FA7DB0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$RegisterBatchSlice
// il2cpp: void Map_MapDestruction__RegisterBatchSlice (UnityEngine_Renderer_o* original, UnityEngine_Mesh_o* combined, int32_t start, int32_t count, const MethodInfo* method);
// 0x597d310

void Map_MapDestruction__RegisterBatchSlice
               (UnityEngine_Renderer_o *original,UnityEngine_Mesh_o *combined,int32_t start,int32_t count,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *__this;
  Map_BatchSlice_o value;
  UnityEngine_Mesh_o *local_38;
  int32_t local_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075459e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_075459e7 = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  __this = TypeInfo_Map_MapDestruction->static_fields->BatchSlices;
  local_30 = 0;
  iStack_2c = 0;
  local_38 = combined;
  Il2CppCodeGenWriteBarrier(&local_38);
  local_30 = start;
  iStack_2c = count;
  if (__this == (System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *)0x0) {
    ThrowNullReferenceException();
  }
  value.fields.Start = start;
  value.fields.Mesh = local_38;
  value.fields.Count = count;
  System_Collections_Generic_Dictionary_object__BatchSlice___set_Item
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)original,value,
             (MethodInfo_4A71590 *)
             MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_set_Item);
  return;
}


// Map.MapDestruction$$Build
// il2cpp: void Map_MapDestruction__Build (const MethodInfo* method);
// 0x597d3d0
// eh: try 0x597d554..0x597d659 -> pad 0x597d66a (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x597d682..0x597d687 -> pad 0x597d6ac cleanup
// eh: try 0x597d6af..0x597d6b9 -> pad 0x597d6c1 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597d40c: jmp 0x597d645
// asm:   0x597d54c: nop dword ptr [rax]
// asm:   0x597d65e: jmp 0x597d66a
// asm:   0x597d660: jmp 0x597d66a
// asm:   0x597d662: jmp 0x597d66a
// asm:   0x597d664: jmp 0x597d66a
// asm:   0x597d666: jmp 0x597d66a
// asm:   0x597d668: jmp 0x597d66a
// asm:   0x597d66a: mov rbx, rax
// asm:   0x597d66d: cmp edx, 1
// asm:   0x597d670: jne 0x597d6af
// asm:   0x597d672: mov rdi, rbx
// asm:   0x597d675: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x597d67a: mov rbx, qword ptr [rax]
// asm:   0x597d67d: mov qword ptr [rsp + 8], rbx
// asm:   0x597d682: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x597d687: lea rax, [rip + 0x19122aa]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
// asm:   0x597d68e: mov rsi, qword ptr [rax]
// asm:   0x597d691: lea rdi, [rsp + 0x20]
// asm:   0x597d696: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x597d69b: test rbx, rbx
// asm:   0x597d69e: je 0x597d60b
// asm:   0x597d6a4: mov rdi, rbx
// asm:   0x597d6a7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x597d6ac: mov rbx, rax
// asm:   0x597d6af: lea rdi, [rsp + 8]
// asm:   0x597d6b4: call 0x2fd4070  ; il2cpp_runtime_helper_02fd4070()
// asm:   0x597d6b9: mov rdi, rbx
// asm:   0x597d6bc: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x597d6c1: mov rdi, rax
// asm:   0x597d6c4: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapDestruction__Build(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *batchSlices;
  Map_MapObject_o *mapObject;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this;
  Map_DestructibleMapObject_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar4;
  Il2CppClass *klass;
  undefined1 auStack_60 [16];
  Map_MapObject_o *pMStack_50;
  undefined1 auStack_48 [16];
  Map_MapObject_o *pMStack_38;
  
  if (Il2CppMethodInitialized_075459e8 == '\0') {
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
    Il2CppMethodInitialized_075459e8 = '\x01';
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Map_MapDestruction;
  }
  else {
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Map_MapDestruction;
  }
  TypeInfo_Map_MapDestruction = (Map_MapDestruction_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    bVar3 = Map_MapDestruction__get_IsActive((MethodInfo *)klass);
  }
  else {
    bVar3 = Map_MapDestruction__get_IsActive((MethodInfo *)klass);
  }
  if (!bVar3) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Map_MapLoader)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if ((pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
     (__this = System_Collections_Generic_Dictionary_int__object___get_Values
                         (pSVar2,(MethodInfo_4A0F4E0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Values),
     __this != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_60,
               __this,(MethodInfo_43E8AC0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_MapObject_GetEnumerator
              );
    pMStack_38 = pMStack_50;
    auStack_48._0_8_ = auStack_60._0_8_;
    auStack_48._8_8_ = auStack_60._8_8_;
    auStack_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    auStack_60._8_8_ =
         (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_48;
    while (bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                             ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                               *)auStack_48,
                              (MethodInfo_4CA2980 *)
                              MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_MoveNext
                             ), mapObject = pMStack_38, bVar3) {
      pMVar4 = extraout_RDX;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        pMVar4 = extraout_RDX_00;
      }
      batchSlices = TypeInfo_Map_MapDestruction->static_fields->BatchSlices;
      if ((TypeInfo_Map_DestructibleMapObject->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_DestructibleMapObject);
        pMVar4 = extraout_RDX_01;
      }
      value = Map_DestructibleMapObject__Create(mapObject,batchSlices,1000.0,pMVar4);
      if (value != (Map_DestructibleMapObject_o *)0x0) {
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapDestruction->static_fields->Objects;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_int__object___set_Item
                  (pSVar2,(value->fields).Id,(Il2CppObject *)value,
                   (MethodInfo_4A0F720 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_set_Item);
      }
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_48,
               (MethodInfo_4CA2970 *)
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_MapObject_Dispose
              );
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    pMVar4 = (MethodInfo *)TypeInfo_Map_MapDestruction->static_fields->BatchSlices;
    if (pMVar4 != (MethodInfo *)0x0) {
      System_Collections_Generic_Dictionary_object__BatchSlice___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pMVar4,
                 (MethodInfo_4A71780 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_Clear);
      Map_MapDestruction__RemoveParentsOfIndestructible(pMVar4);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$RemoveParentsOfIndestructible
// il2cpp: void Map_MapDestruction__RemoveParentsOfIndestructible (const MethodInfo* method);
// 0x597d6d0
// fidelity: the machine code has facts this C leaves out:
//   call to System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
// eh: try 0x597d91a..0x597dc1a -> pad 0x597dc3f (+18 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x597dc25..0x597dc2d -> pad 0x597dcee catch (...) [compiler noexcept guard]
// eh: try 0x597dc5f..0x597dcb4 -> pad 0x597dd03 (+1 call sites) cleanup
// eh: try 0x597dcf9..0x597dd10 -> pad 0x597dd18 catch (...) [compiler noexcept guard]
// asm: 94 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597d87d: nop dword ptr [rax]
// asm:   0x597d9c9: nop dword ptr [rax]
// asm:   0x597da9b: test r13d, r13d
// asm:   0x597da9e: je 0x597d910
// asm:   0x597daa4: jmp 0x597dbc2
// asm:   0x597dabd: jmp 0x597dac5
// asm:   0x597dabf: jmp 0x597dac5
// asm:   0x597dac1: jmp 0x597dac5
// asm:   0x597dac3: jmp 0x597dac5
// asm:   0x597dac5: mov r14, rdx
// asm:   0x597dac8: mov rbx, rax
// asm:   0x597dacb: cmp r14d, 1
// asm:   0x597dacf: jne 0x597dc25
// asm:   0x597dad5: mov rdi, rbx
// asm:   0x597dad8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x597dadd: mov rbp, qword ptr [rax]
// asm:   0x597dae0: mov qword ptr [rsp], rbp
// asm:   0x597dae4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x597dae9: xor r13d, r13d
// asm:   0x597daec: mov bl, 1
// asm:   0x597daee: jmp 0x597da76
// asm:   0x597dc12: mov rdi, rbp
// asm:   0x597dc15: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x597dc1f: mov r14, rdx
// asm:   0x597dc22: mov rbx, rax
// asm:   0x597dc25: mov rdi, rsp
// asm:   0x597dc28: call 0x2fd40e0  ; il2cpp_runtime_helper_02fd40e0()
// asm:   0x597dc2d: jmp 0x597dc45
// asm:   0x597dc2f: jmp 0x597dc3f
// asm:   0x597dc31: jmp 0x597dc98
// asm:   0x597dc33: jmp 0x597dc3f
// asm:   0x597dc35: jmp 0x597dc3f
// asm:   0x597dc37: jmp 0x597dc3f
// asm:   0x597dc39: jmp 0x597dc3f
// asm:   0x597dc3b: jmp 0x597dc3f
// asm:   0x597dc3d: jmp 0x597dc3f
// asm:   0x597dc3f: mov r14, rdx
// asm:   0x597dc42: mov rbx, rax
// asm:   0x597dc45: cmp r14d, 1
// asm:   0x597dc49: jne 0x597dd06
// asm:   0x597dc4f: mov rdi, rbx
// asm:   0x597dc52: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x597dc57: mov rbp, qword ptr [rax]
// asm:   0x597dc5a: mov qword ptr [rsp + 0x78], rbp
// asm:   0x597dc5f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x597dc64: mov r14, qword ptr [rsp + 0x18]
// asm:   0x597dc69: lea r13, [rsp + 0x40]
// asm:   0x597dc6e: lea rbx, [rip + 0x191058b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext
// asm:   0x597dc75: lea rax, [rip + 0x1911be4]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_DestructibleMapObject_Dispose
// asm:   0x597dc7c: mov rsi, qword ptr [rax]
// asm:   0x597dc7f: lea rdi, [rsp + 0x20]
// asm:   0x597dc84: call 0x4da27d0  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose()
// asm:   0x597dc89: test rbp, rbp
// asm:   0x597dc8c: je 0x597db15
// asm:   0x597dc92: jmp 0x597dccf
// asm:   0x597dc94: jmp 0x597dc98
// asm:   0x597dc96: jmp 0x597dc98
// asm:   0x597dc98: mov rbx, rax
// asm:   0x597dc9b: cmp edx, 1
// asm:   0x597dc9e: jne 0x597dcf9
// asm:   0x597dca0: mov rdi, rbx
// asm:   0x597dca3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x597dca8: mov rbp, qword ptr [rax]
// asm:   0x597dcab: mov qword ptr [rsp], rbp
// asm:   0x597dcaf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x597dcb4: lea rax, [rip + 0x191053d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x597dcbb: mov rsi, qword ptr [rax]
// asm:   0x597dcbe: mov rdi, r13
// asm:   0x597dcc1: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x597dcc6: test rbp, rbp
// asm:   0x597dcc9: je 0x597dbb2
// asm:   0x597dccf: mov rdi, rbp
// asm:   0x597dcd2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x597dcd7: add rsp, 0x88
// asm:   0x597dcde: pop rbx
// asm:   0x597dcdf: pop r12
// asm:   0x597dce1: pop r13
// asm:   0x597dce3: pop r14
// asm:   0x597dce5: pop r15
// asm:   0x597dce7: pop rbp
// asm:   0x597dce8: ret 
// asm:   0x597dcee: mov rdi, rax
// asm:   0x597dcf1: call 0x2ab61e0  ; __clang_call_terminate()
// asm:   0x597dcf6: mov rbx, rax
// asm:   0x597dcf9: mov rdi, rsp
// asm:   0x597dcfc: call 0x2fd4140  ; il2cpp_runtime_helper_02fd4140()
// asm:   0x597dd01: jmp 0x597dd10
// asm:   0x597dd03: mov rbx, rax
// asm:   0x597dd06: lea rdi, [rsp + 0x78]
// asm:   0x597dd0b: call 0x2fd4110  ; il2cpp_runtime_helper_02fd4110()
// asm:   0x597dd10: mov rdi, rbx
// asm:   0x597dd13: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x597dd18: mov rdi, rax
// asm:   0x597dd1b: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapDestruction__RemoveParentsOfIndestructible(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  System_Int32_array *pSVar4;
  MethodInfo *pMVar5;
  int32_t iVar6;
  int32_t key;
  bool bVar7;
  System_Collections_Generic_List_int__o *__this;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  undefined1 local_b8 [16];
  Il2CppObject *local_a8;
  System_Collections_Generic_List_int__o *local_a0;
  undefined1 local_98 [8];
  System_Collections_Generic_List_Enumerator_int__o *pSStack_90;
  Il2CppObject *local_88;
  System_Collections_Generic_HashSet_int__o *local_80;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_int__o *pSStack_70;
  Il2CppObject *local_68;
  undefined1 local_58 [8];
  System_Collections_Generic_List_Enumerator_int__o *pSStack_50;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075459e9 == '\0') {
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
    Il2CppMethodInitialized_075459e9 = '\x01';
  }
  local_98 = (undefined1  [8])0x0;
  pSStack_90 = (System_Collections_Generic_List_Enumerator_int__o *)0x0;
  local_88 = (Il2CppObject *)0x0;
  local_80 = (System_Collections_Generic_HashSet_int__o *)0x0;
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_int__o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_int__o *)0x0;
  local_68 = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  if (__this != (System_Collections_Generic_List_int__o *)0x0) {
    local_a0 = __this;
    while( true ) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      (__this->fields)._size = 0;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapDestruction->static_fields->Objects;
      if ((pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
         (__this_00 = System_Collections_Generic_Dictionary_int__object___get_Keys
                                (pSVar3,(MethodInfo_4A0F330 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Keys
                                ),
         __this_00 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) break;
      System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_b8,
                 __this_00,
                 (MethodInfo_510AAB0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_DestructibleMapObject_GetEnumerator
                );
      local_88 = local_a8;
      local_98 = (undefined1  [8])local_b8._0_8_;
      pSStack_90 = (System_Collections_Generic_List_Enumerator_int__o *)local_b8._8_8_;
      local_40 = 0;
      local_38 = local_98;
      while (bVar7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                               ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                 *)local_98,
                                (MethodInfo_4CA27E0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_DestructibleMapObject_MoveNex
                               ), bVar7) {
        iVar6 = (int32_t)local_88;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToChildren;
        if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar7 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                          (pSVar3,iVar6,(Il2CppObject **)&local_80,
                           (MethodInfo_4A114B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_TryGetValue);
        if (bVar7) {
          if (local_80 == (System_Collections_Generic_HashSet_int__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_HashSet_int___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8,local_80,
                     (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
          local_48 = local_a8;
          local_58 = (undefined1  [8])local_b8._0_8_;
          pSStack_50 = (System_Collections_Generic_List_Enumerator_int__o *)local_b8._8_8_;
          local_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_b8._8_8_ = (System_Collections_Generic_List_Enumerator_int__o *)local_58;
          do {
            bVar7 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
                               (MethodInfo_4C3AEE0 *)
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
            if (!bVar7) goto label_0597da72;
            key = (int32_t)local_48;
            if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
            }
            pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapDestruction->static_fields->Objects;
            if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                              (pSVar3,key,
                               (MethodInfo_4A0F950 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_ContainsKey
                              );
            pMVar5 = MethodInfo_System_Collections_Generic_List_int_Add;
          } while (bVar7);
          piVar1 = &(local_a0->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (local_a0->fields)._items;
          if (pSVar4 == (System_Int32_array *)0x0) {
            ThrowNullReferenceException();
          }
          uVar2 = (local_a0->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (local_a0->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = iVar6;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (local_a0,iVar6,(MethodInfo_3916AC0 *)pMVar5->klass->rgctx_data[0xe].method);
          }
label_0597da72:
          System_Collections_Generic_HashSet_Enumerator_int___Dispose
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,
                     (MethodInfo_4C3AED0 *)
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
        }
      }
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_98,
                 (MethodInfo_4CA27D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_DestructibleMapObject_Dispose
                );
      __this = local_a0;
      System_Collections_Generic_List_int___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,local_a0,
                 (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_68 = local_a8;
      local_78 = (undefined1  [8])local_b8._0_8_;
      pSStack_70 = (System_Collections_Generic_List_Enumerator_int__o *)local_b8._8_8_;
      local_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_b8._8_8_ = (System_Collections_Generic_List_Enumerator_int__o *)local_78;
      while (bVar7 = System_Collections_Generic_List_Enumerator_int___MoveNext
                               ((System_Collections_Generic_List_Enumerator_int__o *)local_78,
                                (MethodInfo_4C3B4A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar7) {
        iVar6 = (int32_t)local_68;
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapDestruction->static_fields->Objects;
        if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_int__object___Remove
                  (pSVar3,iVar6,
                   (MethodInfo_4A10DC0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_Remove);
      }
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_78,
                 (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      if ((__this->fields)._size < 1) {
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$Remove
// il2cpp: void Map_MapDestruction__Remove (int32_t id, const MethodInfo* method);
// 0x597dd20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597dd52: jmp 0x597dde9

void Map_MapDestruction__Remove(int32_t id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if (Il2CppMethodInitialized_075459ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_075459ea = '\x01';
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapDestruction->static_fields->Objects;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_int__object__o **)
              ((long)((Il2CppClass *)TypeInfo_Map_MapDestruction)->static_fields + 8);
  }
  if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary_int__object___Remove
              (__this,id,
               (MethodInfo_4A10DC0 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_Remove);
    __this_00 = TypeInfo_Map_MapDestruction->static_fields->Destroyed;
    if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      System_Collections_Generic_HashSet_int___Remove
                (__this_00,id,(MethodInfo_4FA80C0 *)MethodInfo_System_Collections_Generic_HashSet_int_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$CanDestroyWith
// il2cpp: bool Map_MapDestruction__CanDestroyWith (Characters_BaseCharacter_o* attacker, const MethodInfo* method);
// 0x597ddf0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597de14: cmp byte ptr [rip + 0x1bc7bca], 0
// asm:   0x597de1b: je 0x597de8b
// asm:   0x597de3a: jmp 0x597decc
// asm:   0x597deeb: jmp 0x597df88

bool Map_MapDestruction__CanDestroyWith(Characters_BaseCharacter_o *attacker,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  undefined1 uVar3;
  bool bVar4;
  int32_t iVar5;
  Map_MapDestruction_c *klass;
  
  if (Il2CppMethodInitialized_075459eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075459eb = '\x01';
    uVar2 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  if (Il2CppMethodInitialized_075459e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_075459e5 = '\x01';
    uVar2 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_Map_MapDestruction;
  }
  else {
    uVar2 = *(uint32_t *)((long)TypeInfo_Map_MapDestruction + 0xe4);
    klass = TypeInfo_Map_MapDestruction;
  }
  TypeInfo_Map_MapDestruction = klass;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    uVar3 = Map_MapDestruction__get_IsActive((MethodInfo *)klass);
  }
  else {
    uVar3 = Map_MapDestruction__get_IsActive((MethodInfo *)klass);
  }
  if ((bool)uVar3) {
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
      cVar1 = TypeInfo_Map_MapManager->static_fields->MapLoaded;
    }
    else {
      cVar1 = TypeInfo_Map_MapManager->static_fields->MapLoaded;
    }
    if (cVar1 != '\0') {
      if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)attacker,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        return false;
      }
      if (attacker != (Characters_BaseCharacter_o *)0x0) {
        bVar4 = (*(attacker->klass->vtable)._74_IsMine.methodPtr)
                          (attacker,(attacker->klass->vtable)._74_IsMine.method);
        if (!bVar4) {
          return false;
        }
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        __this = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapDestruction->static_fields->Objects;
        if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          iVar5 = System_Collections_Generic_Dictionary_int__object___get_Count
                            (__this,(MethodInfo_4A0F320 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Count
                            );
          return 0 < iVar5;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Map.MapDestruction$$SweepHitbox
// il2cpp: System_Collections_IEnumerator_o* Map_MapDestruction__SweepHitbox (Characters_BaseHitbox_o* hitbox, const MethodInfo* method);
// 0x597dfa0

System_Collections_IEnumerator_o *
Map_MapDestruction__SweepHitbox(Characters_BaseHitbox_o *hitbox,MethodInfo *method)

{
  Map_MapDestruction__SweepHitbox_d__31_o *__this;
  
  if (Il2CppMethodInitialized_075459ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction_SweepHitbox_d__31);
    Il2CppMethodInitialized_075459ec = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapDestruction_SweepHitbox_d__31);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).hitbox = hitbox;
  Il2CppCodeGenWriteBarrier(&(__this->fields).hitbox);
  return (System_Collections_IEnumerator_o *)__this;
}


// Map.MapDestruction$$Explode
// il2cpp: void Map_MapDestruction__Explode (Characters_BaseCharacter_o* attacker, UnityEngine_Vector3_o center, float radius, const MethodInfo* method);
// 0x597e030

void Map_MapDestruction__Explode
               (Characters_BaseCharacter_o *attacker,UnityEngine_Vector3_o center,float radius,
               MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Collider_array *results;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075459ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_075459ed = '\x01';
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    bVar2 = Map_MapDestruction__CanDestroyWith(attacker,method);
  }
  else {
    bVar2 = Map_MapDestruction__CanDestroyWith(attacker,method);
  }
  if (bVar2) {
    if ((((Il2CppClass *)TypeInfo_Map_MapDestruction)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    results = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
    iVar3 = TypeInfo_Map_MapDestruction->static_fields->MapMask;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    method_00 = (MethodInfo *)0x0;
    iVar3 = UnityEngine_Physics__OverlapSphereNonAlloc(center,radius * 0.5,results,iVar3,1,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    Map_MapDestruction__Request
              (attacker,iVar3,center,
               (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
               radius + radius,(System_Collections_Generic_HashSet_int__o *)0x0,method_00);
    return;
  }
  return;
}


// Map.MapDestruction$$Request
// il2cpp: void Map_MapDestruction__Request (Characters_BaseCharacter_o* attacker, int32_t count, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float hitSize, System_Collections_Generic_HashSet_int__o* hit, const MethodInfo* method);
// 0x597e1b0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597e21a: jmp 0x597e8fc
// asm:   0x597e414: cmp byte ptr [rip + 0x1bc7619], 0
// asm:   0x597e41b: je 0x597e43e
// asm:   0x597e41d: test rbp, rbp
// asm:   0x597e420: jne 0x597e456
// asm:   0x597e422: jmp 0x597e8fc

void Map_MapDestruction__Request
               (Characters_BaseCharacter_o *attacker,int32_t count,UnityEngine_Vector3_o center,
               UnityEngine_Vector3_o direction,float hitSize,System_Collections_Generic_HashSet_int__o *hit,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t iVar3;
  uint uVar4;
  UnityEngine_Collider_array *pUVar5;
  UnityEngine_Component_o *__this;
  Map_MapScriptBaseObject_o *pMVar6;
  Utility_BaseComponentCache_o *pUVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  Characters_BaseCharacter_o *pCVar9;
  bool bVar10;
  UnityEngine_Transform_o *current;
  Map_MapObject_o *pMVar11;
  System_Collections_Generic_List_int__o *pSVar12;
  System_Int32_array *pSVar13;
  Photon_Realtime_Player_o *sender;
  System_Object_array *parameters;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  MethodInfo **method_00;
  MethodInfo *pMVar16;
  uint uVar17;
  long lVar18;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  UnityEngine_Vector3_o center_00;
  UnityEngine_Vector3_o direction_00;
  float local_a0;
  float local_90;
  int32_t local_8c;
  System_Collections_Generic_HashSet_int__o *local_88;
  Characters_BaseCharacter_o *local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  direction_00.fields.z = direction.fields.z;
  center_00.fields.z = center.fields.z;
  local_58._8_4_ = in_XMM2_Dc;
  local_58._0_8_ = direction.fields._0_8_;
  local_58._12_4_ = in_XMM2_Dd;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = center.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  local_88 = hit;
  if (Il2CppMethodInitialized_075459ee == '\0') {
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
    Il2CppMethodInitialized_075459ee = '\x01';
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) goto label_0597e2da;
label_0597e206:
    pSVar12 = TypeInfo_Map_MapDestruction->static_fields->Targets;
  }
  else {
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor != 0) goto label_0597e206;
label_0597e2da:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    pSVar12 = TypeInfo_Map_MapDestruction->static_fields->Targets;
  }
  if (pSVar12 != (System_Collections_Generic_List_int__o *)0x0) {
    piVar1 = &(pSVar12->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar12->fields)._size = 0;
    if (Il2CppMethodInitialized_075459f7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
      Il2CppMethodInitialized_075459f7 = '\x01';
    }
    local_a0 = 11.0;
    if (attacker != (Characters_BaseCharacter_o *)0x0) {
      bVar2 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if (bVar2 <= (attacker->klass->_2).typeHierarchyDepth) {
        local_a0 = *(float *)(&g_data_0100ab20 +
                             (ulong)((attacker->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                                    (Il2CppClass *)TypeInfo_Characters_BaseTitan) * 4);
      }
    }
    local_80 = attacker;
    if (0 < count) {
      uVar17 = 0;
      lVar18 = 0x20;
      do {
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        pUVar5 = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
        if (pUVar5 == (UnityEngine_Collider_array *)0x0) goto label_0597e8fc;
        if ((uint)pUVar5->max_length <= uVar17) goto label_0597e901;
        __this = *(UnityEngine_Component_o **)((long)pUVar5->m_Items + lVar18 + -0x20);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        if (Il2CppMethodInitialized_07545a34 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
          Il2CppMethodInitialized_07545a34 = '\x01';
        }
        if (__this == (UnityEngine_Component_o *)0x0) goto label_0597e8fc;
        pMVar16 = (MethodInfo *)0x0;
        current = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pMVar11 = Map_MapLoader__FindObjectFromTransform(current,pMVar16);
        pUVar5 = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
        if (pUVar5 == (UnityEngine_Collider_array *)0x0) goto label_0597e8fc;
        if ((uint)pUVar5->max_length <= uVar17) goto label_0597e901;
        *(undefined8 *)((long)pUVar5->m_Items + lVar18 + -0x20) = 0;
        pMVar16 = (MethodInfo *)0x0;
        Il2CppCodeGenWriteBarrier((void **)((long)pUVar5->m_Items + lVar18 + -0x20));
        if (pMVar11 != (Map_MapObject_o *)0x0) {
          pMVar6 = (pMVar11->fields).ScriptObject;
          if (pMVar6 == (Map_MapScriptBaseObject_o *)0x0) goto label_0597e8fc;
          iVar3 = (pMVar6->fields).Id;
          if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
          }
          bVar10 = Map_MapDestruction__CanBreak(iVar3,local_a0 * hitSize,pMVar16);
          if (bVar10) {
            if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
            }
            pSVar12 = TypeInfo_Map_MapDestruction->static_fields->Targets;
            if (pSVar12 == (System_Collections_Generic_List_int__o *)0x0) goto label_0597e8fc;
            bVar10 = System_Collections_Generic_List_int___Contains
                               (pSVar12,iVar3,
                                (MethodInfo_3916F20 *)MethodInfo_System_Collections_Generic_List_int_Contains)
            ;
            if ((!bVar10) &&
               ((local_88 == (System_Collections_Generic_HashSet_int__o *)0x0 ||
                (bVar10 = System_Collections_Generic_HashSet_int___Add
                                    (local_88,iVar3,
                                     (MethodInfo_4FA8AF0 *)
                                     MethodInfo_System_Collections_Generic_HashSet_int_Add), bVar10)))) {
              if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
              }
              pMVar16 = MethodInfo_System_Collections_Generic_List_int_Add;
              pSVar12 = TypeInfo_Map_MapDestruction->static_fields->Targets;
              if (pSVar12 == (System_Collections_Generic_List_int__o *)0x0) goto label_0597e8fc;
              piVar1 = &(pSVar12->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar13 = (pSVar12->fields)._items;
              if (pSVar13 == (System_Int32_array *)0x0) goto label_0597e8fc;
              uVar4 = (pSVar12->fields)._size;
              if (uVar4 < (uint)pSVar13->max_length) {
                (pSVar12->fields)._size = uVar4 + 1;
                pSVar13->m_Items[(int)uVar4] = iVar3;
              }
              else {
                System_Collections_Generic_List_int___AddWithResize
                          (pSVar12,iVar3,(MethodInfo_3916AC0 *)pMVar16->klass->rgctx_data[0xe].method);
              }
            }
          }
        }
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 8;
      } while (count != uVar17);
    }
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    pCVar9 = local_80;
    pSVar12 = TypeInfo_Map_MapDestruction->static_fields->Targets;
    if (pSVar12 != (System_Collections_Generic_List_int__o *)0x0) {
      if ((pSVar12->fields)._size == 0) {
        return;
      }
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        pSVar12 = TypeInfo_Map_MapDestruction->static_fields->Targets;
        if (pSVar12 == (System_Collections_Generic_List_int__o *)0x0) goto label_0597e8fc;
      }
      method_00 = &MethodInfo_System_Collections_Generic_List_int_ToArray;
      pSVar13 = System_Collections_Generic_List_int___ToArray
                          (pSVar12,(MethodInfo_3918D60 *)
                                   MethodInfo_System_Collections_Generic_List_int_ToArray);
      if (((pCVar9 != (Characters_BaseCharacter_o *)0x0) &&
          (pUVar7 = (pCVar9->fields).Cache, pUVar7 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pPVar8 = (pUVar7->fields).PhotonView, pPVar8 != (Photon_Pun_PhotonView_o *)0x0)) {
        iVar3 = (pPVar8->fields).viewIdField;
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          if (bVar10) goto label_0597e67b;
        }
        else {
          bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          if (bVar10) {
label_0597e67b:
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            sender = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
            if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
            }
            center_00.fields.x = (float)local_48._0_4_;
            center_00.fields.y = (float)local_48._4_4_;
            direction_00.fields.x = (float)local_58._0_4_;
            direction_00.fields.y = (float)local_58._4_4_;
            Map_MapDestruction__OnRequest
                      (iVar3,pSVar13,center_00,direction_00,hitSize,sender,(MethodInfo *)method_00);
            return;
          }
        }
        pPVar8 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
        local_8c = iVar3;
        pIVar14 = il2cpp_vm_Object_Box(g_data_07556710,&local_8c);
        if (parameters != (System_Object_array *)0x0) {
          if ((pIVar14 != (Il2CppObject *)0x0) &&
             (pIVar15 = il2cpp_vm_Object_IsInst(pIVar14,(((parameters->obj).klass)->_1).element_class),
             pIVar15 == (Il2CppObject *)0x0)) {
label_0597e906:
            pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length != 0) {
            parameters->m_Items[0] = pIVar14;
            Il2CppCodeGenWriteBarrier(parameters->m_Items);
            if ((pSVar13 != (System_Int32_array *)0x0) &&
               (pIVar14 = il2cpp_vm_Object_IsInst(&pSVar13->obj,(((parameters->obj).klass)->_1).element_class)
               , pIVar14 == (Il2CppObject *)0x0)) goto label_0597e906;
            if ((parameters->max_length & 0xfffffffe) != 0) {
              parameters->m_Items[1] = &pSVar13->obj;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
              local_68 = local_48._0_8_;
              local_60 = center_00.fields.z;
              pIVar14 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_68);
              if ((pIVar14 != (Il2CppObject *)0x0) &&
                 (pIVar15 = il2cpp_vm_Object_IsInst(pIVar14,(((parameters->obj).klass)->_1).element_class),
                 pIVar15 == (Il2CppObject *)0x0)) goto label_0597e906;
              if (2 < (uint)parameters->max_length) {
                parameters->m_Items[2] = pIVar14;
                Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
                local_78 = local_58._0_8_;
                local_70 = direction_00.fields.z;
                pIVar14 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_78);
                if ((pIVar14 != (Il2CppObject *)0x0) &&
                   (pIVar15 = il2cpp_vm_Object_IsInst(pIVar14,(((parameters->obj).klass)->_1).element_class),
                   pIVar15 == (Il2CppObject *)0x0)) goto label_0597e906;
                if ((parameters->max_length & 0xfffffffc) != 0) {
                  parameters->m_Items[3] = pIVar14;
                  Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
                  local_90 = hitSize;
                  pIVar14 = il2cpp_vm_Object_Box(g_data_07556740,&local_90);
                  if ((pIVar14 != (Il2CppObject *)0x0) &&
                     (pIVar15 = il2cpp_vm_Object_IsInst(pIVar14,(((parameters->obj).klass)->_1).element_class)
                     , pIVar15 == (Il2CppObject *)0x0)) goto label_0597e906;
                  if (4 < (uint)parameters->max_length) {
                    parameters->m_Items[4] = pIVar14;
                    Il2CppCodeGenWriteBarrier(parameters->m_Items + 4);
                    if (pPVar8 != (Photon_Pun_PhotonView_o *)0x0) {
                      Photon_Pun_PhotonView__RPC(pPVar8,"RequestMapDestructionRPC",2,parameters,(MethodInfo *)0x0);
                      return;
                    }
                    goto label_0597e8fc;
                  }
                }
              }
            }
          }
label_0597e901:
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_0597e8fc:
  ThrowNullReferenceException();
}


// Map.MapDestruction$$OnRequest
// il2cpp: void Map_MapDestruction__OnRequest (int32_t attackerId, System_Int32_array* ids, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float hitSize, Photon_Realtime_Player_o* sender, const MethodInfo* method);
// 0x597eb20
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597ec58: jmp 0x597ed50
// asm:   0x597eca4: jmp 0x597ed50
// asm:   0x597f258: lea rax, [rip + 0x1962cc9]  ; "MapObjectsDestroyedRPC"
// asm:   0x597f25f: mov rsi, qword ptr [rax]
// asm:   0x597f262: mov rdi, r14
// asm:   0x597f265: mov edx, 1
// asm:   0x597f26a: mov rcx, rbp
// asm:   0x597f26d: xor r8d, r8d
// asm:   0x597f270: call 0x57e5770  ; Photon_Pun_PhotonView__RPC()
// asm:   0x597f275: jmp 0x597ed50

void Map_MapDestruction__OnRequest
               (int32_t attackerId,System_Int32_array *ids,UnityEngine_Vector3_o center,
               UnityEngine_Vector3_o direction,float hitSize,Photon_Realtime_Player_o *sender,
               MethodInfo *method)

{
  byte bVar1;
  int32_t id;
  UnityEngine_Collider_array *pUVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Characters_BaseCharacter_o *pCVar4;
  bool bVar5;
  uint uVar6;
  uint extraout_EAX;
  uint extraout_EAX_00;
  Photon_Pun_PhotonView_o *pPVar7;
  System_Collections_Generic_List_int__o *__this_01;
  ulong uVar8;
  Map_DestructibleMapObject_o *pMVar9;
  System_Int32_array *ids_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar11;
  ulong uVar12;
  Map_MapDestruction_c *method_00;
  float fVar13;
  int iVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined4 uVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o center_00;
  float fStack_88;
  Characters_BaseCharacter_o *pCStack_80;
  Il2CppClass *pIStack_78;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  _union_14 _Stack_40;
  _union_14 _Stack_38;
  
  uVar18 = direction.fields.z;
  center_00.fields.z = center.fields.z;
  uStack_58 = center.fields._0_8_;
  _Stack_40.genericMethod = direction.fields._0_8_;
  auStack_68._8_4_ = in_XMM2_Dc;
  auStack_68._0_8_ = _Stack_40.genericMethod;
  auStack_68._12_4_ = in_XMM2_Dd;
  _Stack_38._0_4_ = uVar18;
  if (Il2CppMethodInitialized_075459ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_TryGetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"MapObjectsDestroyedRPC");
    Il2CppMethodInitialized_075459ef = '\x01';
  }
  pCStack_80 = (Characters_BaseCharacter_o *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar5) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Map_MapDestruction)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    if (Il2CppMethodInitialized_075459e5 != '\0') goto label_0597ec8e;
label_0597ecb7:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_075459e5 = '\x01';
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor != 0) goto label_0597ec9b;
label_0597ece3:
    method_00 = TypeInfo_Map_MapDestruction;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    bVar5 = Map_MapDestruction__get_IsActive((MethodInfo *)method_00);
  }
  else {
    if (Il2CppMethodInitialized_075459e5 == '\0') goto label_0597ecb7;
label_0597ec8e:
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) goto label_0597ece3;
label_0597ec9b:
    bVar5 = Map_MapDestruction__get_IsActive((MethodInfo *)TypeInfo_Map_MapDestruction);
  }
  if (!bVar5) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Map_MapManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  if (ids == (System_Int32_array *)0x0) {
    return;
  }
  if (TypeInfo_Map_MapManager->static_fields->MapLoaded == false) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  pUVar2 = TypeInfo_Map_MapDestruction->static_fields->Overlaps;
  if (pUVar2 == (UnityEngine_Collider_array *)0x0) goto label_0597f297;
  if ((int)pUVar2->max_length < (int)ids->max_length) {
    return;
  }
  if (hitSize <= 0.0) {
    return;
  }
  uVar6 = (uint)hitSize & 0x7f800000;
  if (uVar6 == 0x7f800000) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    uVar6 = extraout_EAX;
  }
  auVar14._0_4_ = -(uint)(((uint)uStack_58 & 0x7f800000) == 0x7f800000);
  iVar16 = -(uint)((uStack_58._4_4_ & 0x7f800000) == 0x7f800000);
  auVar14._4_4_ = auVar14._0_4_;
  auVar14._8_4_ = iVar16;
  auVar14._12_4_ = iVar16;
  iVar16 = movmskpd(uVar6,auVar14);
  if (iVar16 != 0) {
    return;
  }
  uVar6 = ~(uint)center_00.fields.z;
  if ((uVar6 & 0x7f800000) == 0) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    uVar6 = extraout_EAX_00;
  }
  auVar15._0_4_ = -(uint)((auStack_68._0_4_ & 0x7f800000) == 0x7f800000);
  iVar16 = -(uint)((auStack_68._4_4_ & 0x7f800000) == 0x7f800000);
  auVar15._4_4_ = auVar15._0_4_;
  auVar15._8_4_ = iVar16;
  auVar15._12_4_ = iVar16;
  uVar6 = movmskpd(uVar6,auVar15);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if ((byte)((byte)uVar6 >> 1) != 0) {
    return;
  }
  if ((uVar18 & 0x7f800000) == 0x7f800000) {
    return;
  }
  pPVar7 = Photon_Pun_PhotonView__Find(attackerId,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if (pPVar7 == (Photon_Pun_PhotonView_o *)0x0) goto label_0597f297;
  if ((pPVar7->fields)._Owner_k__BackingField != sender) {
    return;
  }
  pMVar11 = (MethodInfo *)&pCStack_80;
  bVar5 = UnityEngine_Component__TryGetComponent_object_
                    ((UnityEngine_Component_o *)pPVar7,(Il2CppObject **)pMVar11,
                     (MethodInfo_34B1690 *)MethodInfo_UnityEngine_Component_TryGetComponent_BaseCharacter);
  pCVar4 = pCStack_80;
  if (!bVar5) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  fVar13 = Map_MapDestruction__GetMaxHitSize(pCVar4,hitSize,pMVar11);
  pCVar4 = pCStack_80;
  auVar14 = ZEXT416((uint)hitSize);
  if (fVar13 < hitSize) {
    return;
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  fVar13 = Map_MapDestruction__GetMaxObjectSize(pCVar4,hitSize,pMVar11);
  auStack_68._0_4_ = fVar13;
  if (((pCStack_80 == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar3 = (pCStack_80->fields).Cache, pUVar3 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this = (pUVar3->fields).Transform, __this == (UnityEngine_Transform_o *)0x0)) goto label_0597f297;
  UVar19 = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
  auVar17._4_12_ = auVar14._4_12_;
  auVar17._0_4_ = UVar19.fields.z;
  fVar13 = (float)il2cpp_runtime_helper_05956b50(UVar19.fields._0_8_,auVar17._0_8_,(uint)uStack_58,center_00.fields.z,0);
  if ((float)auStack_68._0_4_ + 1000.0 < fVar13) {
    return;
  }
  if (pCStack_80 == (Characters_BaseCharacter_o *)0x0) {
label_0597ef7d:
    fStack_88 = hitSize * 0.5 * 0.5;
  }
  else {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((pCStack_80->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCStack_80->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Characters_BaseTitan)) goto label_0597ef7d;
    fStack_88 = (float)il2cpp_runtime_helper_0599adc0(&_Stack_40,0);
    fStack_88 = fStack_88 + hitSize;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  uVar6 = (uint)ids->max_length;
  pMVar11 = (MethodInfo *)(ulong)uVar6;
  System_Collections_Generic_List_int____ctor_3916240
            (__this_01,uVar6,(MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8
            );
  if (0 < (int)ids->max_length) {
    uVar8 = ids->max_length & 0xffffffff;
    if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) {
      uVar12 = 0;
      do {
        if (uVar8 <= uVar12) goto label_0597f29c;
        id = ids->m_Items[uVar12];
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        bVar5 = Map_MapDestruction__CanBreak(id,(float)auStack_68._0_4_,pMVar11);
        if (bVar5) goto label_0597f297;
        uVar12 = uVar12 + 1;
        uVar6 = (uint)ids->max_length;
        uVar8 = (ulong)uVar6;
      } while ((long)uVar12 < (long)(int)uVar6);
    }
    else {
      uVar12 = 0;
      do {
        if (uVar8 <= uVar12) {
label_0597f29c:
          ThrowIndexOutOfRangeException();
        }
        uVar6 = ids->m_Items[uVar12];
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        bVar5 = Map_MapDestruction__CanBreak(uVar6,(float)auStack_68._0_4_,pMVar11);
        if (bVar5) {
          pMVar11 = (MethodInfo *)(ulong)uVar6;
          bVar5 = System_Collections_Generic_List_int___Contains
                            (__this_01,uVar6,
                             (MethodInfo_3916F20 *)MethodInfo_System_Collections_Generic_List_int_Contains);
          if (!bVar5) {
            if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
            }
            __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                        TypeInfo_Map_MapDestruction->static_fields->Objects;
            if ((__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
               (pMVar9 = System_Collections_Generic_Dictionary_int__object___get_Item
                                   (__this_00,uVar6,
                                    (MethodInfo_4A0F690 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Item
                                   ), pMVar9 == (Map_DestructibleMapObject_o *)0x0)) goto label_0597f297;
            pIStack_78 = uStack_58;
            pMVar11 = (MethodInfo *)&pIStack_78;
            fStack_70 = center_00.fields.z;
            fVar13 = UnityEngine_Bounds__Internal_SqrDistance
                               (&(pMVar9->fields).Bounds,(UnityEngine_Vector3_o *)pMVar11,(MethodInfo *)0x0);
            if (fVar13 <= fStack_88 * fStack_88) {
              pMVar11 = (MethodInfo *)(ulong)uVar6;
              il2cpp_runtime_helper_02fd40a0(__this_01,pMVar11,MethodInfo_System_Collections_Generic_List_int_Add);
            }
          }
        }
        uVar12 = uVar12 + 1;
        uVar6 = (uint)ids->max_length;
        uVar8 = (ulong)uVar6;
      } while ((long)uVar12 < (long)(int)uVar6);
    }
  }
  if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
    if ((__this_01->fields)._size == 0) {
      return;
    }
    ids_00 = System_Collections_Generic_List_int___ToArray
                       (__this_01,(MethodInfo_3918D60 *)MethodInfo_System_Collections_Generic_List_int_ToArray
                       );
    pMVar11 = extraout_RDX;
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      pMVar11 = extraout_RDX_00;
    }
    center_00.fields._0_8_ = uStack_58;
    Map_MapDestruction__Apply(ids_00,center_00,hitSize,true,pMVar11);
    pPVar7 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    if (parameters != (System_Object_array *)0x0) {
      il2cpp_codegen_array_element_type_check((System_Array_o *)parameters,&ids_00->obj);
      il2cpp_runtime_helper_02ac8d90(parameters,0,ids_00);
      pIStack_78 = uStack_58;
      fStack_70 = center_00.fields.z;
      pIVar10 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&pIStack_78);
      il2cpp_codegen_array_element_type_check((System_Array_o *)parameters,pIVar10);
      il2cpp_runtime_helper_02ac8d90(parameters,1,pIVar10);
      fStack_6c = hitSize;
      pIVar10 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_6c);
      il2cpp_codegen_array_element_type_check((System_Array_o *)parameters,pIVar10);
      il2cpp_runtime_helper_02ac8d90(parameters,2,pIVar10);
      if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar7,"MapObjectsDestroyedRPC",1,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_0597f297:
  ThrowNullReferenceException();
}


// Map.MapDestruction$$OnDestroyed
// il2cpp: void Map_MapDestruction__OnDestroyed (System_Int32_array* ids, UnityEngine_Vector3_o center, float hitSize, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x597f8b0

void Map_MapDestruction__OnDestroyed
               (System_Int32_array *ids,UnityEngine_Vector3_o center,float hitSize,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075459f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_075459f0 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if (((ids != (System_Int32_array *)0x0) && (bVar1)) && ((~(uint)hitSize & 0x7f800000) != 0)) {
      method_00 = extraout_RDX;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        method_00 = extraout_RDX_00;
      }
      Map_MapDestruction__Apply(ids,center,hitSize,true,method_00);
      return;
    }
  }
  return;
}


// Map.MapDestruction$$RequestState
// il2cpp: void Map_MapDestruction__RequestState (const MethodInfo* method);
// 0x597f960
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597f98b: jmp 0x597fac2
// asm:   0x597fa7c: test r14, r14
// asm:   0x597fa7f: je 0x597fb27

void Map_MapDestruction__RequestState(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Photon_Pun_PhotonView_o *__this;
  MethodInfo *method_00;
  bool bVar3;
  Il2CppClass *pIVar4;
  Map_MapDestruction_c *method_01;
  
  if (Il2CppMethodInitialized_075459f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"RequestMapDestructionStateRPC");
    Il2CppMethodInitialized_075459f1 = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
  }
  else {
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    method_01 = TypeInfo_Map_MapDestruction;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    bVar3 = Map_MapDestruction__get_IsActive((MethodInfo *)method_01);
    method_00 = MethodInfo_System_Array_Empty_object;
  }
  else {
    bVar3 = Map_MapDestruction__get_IsActive((MethodInfo *)TypeInfo_Map_MapDestruction);
    method_00 = MethodInfo_System_Array_Empty_object;
  }
  if (!bVar3) {
    MethodInfo_System_Array_Empty_object = method_00;
    return;
  }
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  MethodInfo_System_Array_Empty_object = method_00;
  if ((method_00->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(method_00);
    pIVar4 = *(Il2CppClass **)((long)(method_00->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = *(Il2CppClass **)((long)(method_00->field7_0x38).methodMetadataHandle + 0x10);
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (pIVar4->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar4);
    pIVar4 = (method_00->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  else {
    pIVar4 = (method_00->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar4->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  if (__this == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Photon_Pun_PhotonView__RPC
            (__this,"RequestMapDestructionStateRPC",2,*(System_Object_array **)pIVar4->static_fields,(MethodInfo *)0x0);
  return;
}


// Map.MapDestruction$$OnStateRequest
// il2cpp: void Map_MapDestruction__OnStateRequest (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x597fb30
// eh: try 0x597fd63..0x597ff6d -> pad 0x597ff7f (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x597ff9b..0x597ffa0 -> pad 0x597ffca cleanup
// eh: try 0x597ffcd..0x597ffd7 -> pad 0x597ffdf catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597fc41: jmp 0x597ff3b
// asm:   0x597ff72: mov qword ptr [rsp + 8], rbp
// asm:   0x597ff77: jmp 0x597ff83
// asm:   0x597ff79: jmp 0x597ff83
// asm:   0x597ff7b: jmp 0x597ff83
// asm:   0x597ff7d: jmp 0x597ff83
// asm:   0x597ff7f: jmp 0x597ff83
// asm:   0x597ff81: jmp 0x597ff83
// asm:   0x597ff83: mov rbx, rax
// asm:   0x597ff86: cmp edx, 1
// asm:   0x597ff89: jne 0x597ffcd
// asm:   0x597ff8b: mov rdi, rbx
// asm:   0x597ff8e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x597ff93: mov rbx, qword ptr [rax]
// asm:   0x597ff96: mov qword ptr [rsp + 0x30], rbx
// asm:   0x597ff9b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x597ffa0: lea rax, [rip + 0x190e239]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x597ffa7: mov rsi, qword ptr [rax]
// asm:   0x597ffaa: lea rdi, [rsp + 0x10]
// asm:   0x597ffaf: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x597ffb4: test rbx, rbx
// asm:   0x597ffb7: mov rbp, qword ptr [rsp + 8]
// asm:   0x597ffbc: je 0x597fead
// asm:   0x597ffc2: mov rdi, rbx
// asm:   0x597ffc5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x597ffca: mov rbx, rax
// asm:   0x597ffcd: lea rdi, [rsp + 0x30]
// asm:   0x597ffd2: call 0x2fd4170  ; il2cpp_runtime_helper_02fd4170()
// asm:   0x597ffd7: mov rdi, rbx
// asm:   0x597ffda: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x597ffdf: mov rdi, rax
// asm:   0x597ffe2: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapDestruction__OnStateRequest(Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_int__o *__this;
  System_Object_array *pSVar7;
  System_Int32_array *pSVar8;
  Il2CppObject *pIVar9;
  undefined1 auStack_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *pIStack_58;
  Photon_Realtime_Player_o *pPStack_50;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_075459f2 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MapDestructionStateRPC");
    Il2CppMethodInitialized_075459f2 = '\x01';
  }
  auStack_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  pIStack_58 = (Il2CppObject *)0x0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if ((!bVar6) || (pPStack_50 = info.fields.Sender, info.fields.Sender == (Photon_Realtime_Player_o *)0x0)) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Map_MapDestruction)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  pSVar3 = TypeInfo_Map_MapDestruction->static_fields->Destroyed;
  if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
    if ((pSVar3->fields)._count == 0) {
      return;
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor_3916240
              (__this,0x100,(MethodInfo_3916240 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c8)
    ;
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    pSVar3 = TypeInfo_Map_MapDestruction->static_fields->Destroyed;
    if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      System_Collections_Generic_HashSet_int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_48,pSVar3,
                 (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      pIStack_58 = pIStack_38;
      auStack_68 = (undefined1  [8])auStack_48._0_8_;
      puStack_60 = (undefined1 *)auStack_48._8_8_;
      auStack_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      auStack_48._8_8_ = auStack_68;
      if (__this != (System_Collections_Generic_List_int__o *)0x0) {
label_0597fd60:
        do {
          bVar6 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
                             (MethodInfo_4C3AEE0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
          pMVar5 = MethodInfo_System_Collections_Generic_List_int_Add;
          if (!bVar6) goto label_0597fe99;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this->fields)._items;
          if (pSVar8 == (System_Int32_array *)0x0) goto label_0597ff4a;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar8->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar8->m_Items[(int)uVar2] = (int32_t)pIStack_58;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (__this,(int32_t)pIStack_58,(MethodInfo_3916AC0 *)pMVar5->klass->rgctx_data[0xe].method)
            ;
          }
          if (0xff < (__this->fields)._size) {
            pPVar4 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
            pSVar7 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
            pSVar8 = System_Collections_Generic_List_int___ToArray
                               (__this,(MethodInfo_3918D60 *)
                                       MethodInfo_System_Collections_Generic_List_int_ToArray);
            if (pSVar7 != (System_Object_array *)0x0) {
              if ((pSVar8 != (System_Int32_array *)0x0) &&
                 (pIVar9 = il2cpp_vm_Object_IsInst(&pSVar8->obj,(((pSVar7->obj).klass)->_1).element_class),
                 pIVar9 == (Il2CppObject *)0x0)) {
                pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
              }
              if ((int)pSVar7->max_length == 0) {
                ThrowIndexOutOfRangeException();
              }
              pSVar7->m_Items[0] = &pSVar8->obj;
              Il2CppCodeGenWriteBarrier(pSVar7->m_Items);
              if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC_56e5850
                          (pPVar4,"MapDestructionStateRPC",pPStack_50,pSVar7,(MethodInfo *)0x0);
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                (__this->fields)._size = 0;
                goto label_0597fd60;
              }
            }
            ThrowNullReferenceException();
          }
        } while( true );
      }
      bVar6 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
                         (MethodInfo_4C3AEE0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
      if (bVar6) {
label_0597ff4a:
        ThrowNullReferenceException();
      }
label_0597fe99:
      System_Collections_Generic_HashSet_Enumerator_int___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_68,
                 (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
      if (__this != (System_Collections_Generic_List_int__o *)0x0) {
        if ((__this->fields)._size < 1) {
          return;
        }
        pPVar4 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        pSVar7 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        pSVar8 = System_Collections_Generic_List_int___ToArray
                           (__this,(MethodInfo_3918D60 *)
                                   MethodInfo_System_Collections_Generic_List_int_ToArray);
        if (pSVar7 != (System_Object_array *)0x0) {
          il2cpp_codegen_array_element_type_check((System_Array_o *)pSVar7,&pSVar8->obj);
          il2cpp_runtime_helper_02ac8d90(pSVar7,0,pSVar8);
          if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC_56e5850
                      (pPVar4,"MapDestructionStateRPC",pPStack_50,pSVar7,(MethodInfo *)0x0);
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
// 0x597fff0

void Map_MapDestruction__OnState
               (System_Int32_array *ids,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  UnityEngine_Vector3_Fields center;
  bool bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075459f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_075459f3 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((ids != (System_Int32_array *)0x0) && (bVar1)) {
      method_00 = extraout_RDX;
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
        method_00 = extraout_RDX_00;
      }
      center = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        method_00 = extraout_RDX_01;
      }
      Map_MapDestruction__Apply(ids,(UnityEngine_Vector3_o)center,0.0,false,method_00);
      return;
    }
  }
  return;
}


// Map.MapDestruction$$Apply
// il2cpp: void Map_MapDestruction__Apply (System_Int32_array* ids, UnityEngine_Vector3_o center, float hitSize, bool effects, const MethodInfo* method);
// 0x597f3b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597f514: jmp 0x597f530
// asm:   0x597f78e: jmp 0x597f89d

void Map_MapDestruction__Apply
               (System_Int32_array *ids,UnityEngine_Vector3_o center,float hitSize,bool effects,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint32_t uVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  Map_DestructibleMapObject_array *pMVar4;
  System_Collections_Generic_HashSet_Component__o *components;
  MethodInfo *pMVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  System_Collections_Generic_Queue_int__o *pSVar9;
  System_Collections_Generic_List_DestructibleMapObject__o *pSVar10;
  Map_DestructibleMapObject_o *target;
  Map_MapDestruction_StaticFields *pMVar11;
  ulong uVar12;
  Map_DestructibleMapObject_o *pMVar13;
  undefined7 in_register_00000031;
  Map_DestructibleMapObject_o *pMVar14;
  UnityEngine_Collider_array *method_00;
  Il2CppClass *klass;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o center_00;
  Map_DestructibleMapObject_o *local_58;
  float local_50;
  float local_4c;
  undefined1 local_48 [16];
  
  pMVar14 = (Map_DestructibleMapObject_o *)CONCAT71(in_register_00000031,effects);
  local_50 = center.fields.z;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = center.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  local_4c = hitSize;
  if (Il2CppMethodInitialized_075459f4 == '\0') {
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
    Il2CppMethodInitialized_075459f4 = '\x01';
  }
  local_58 = (Map_DestructibleMapObject_o *)0x0;
  if (ids != (System_Int32_array *)0x0) {
    if (0 < (int)ids->max_length) {
      uVar8 = ids->max_length & 0xffffffff;
      uVar12 = 0;
      do {
        if (uVar8 <= uVar12) {
          ThrowIndexOutOfRangeException();
        }
        uVar7 = ids->m_Items[uVar12];
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        pSVar9 = TypeInfo_Map_MapDestruction->static_fields->Pending;
        if (pSVar9 == (System_Collections_Generic_Queue_int__o *)0x0) goto label_0597f89d;
        pMVar14 = (Map_DestructibleMapObject_o *)(ulong)uVar7;
        System_Collections_Generic_Queue_int___Enqueue
                  (pSVar9,uVar7,(MethodInfo_3E72790 *)MethodInfo_System_Collections_Generic_Queue_int_Enqueue)
        ;
        uVar12 = uVar12 + 1;
        uVar7 = (uint)ids->max_length;
        uVar8 = (ulong)uVar7;
      } while ((long)uVar12 < (long)(int)uVar7);
    }
    while( true ) {
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      pMVar11 = TypeInfo_Map_MapDestruction->static_fields;
      pSVar9 = pMVar11->Pending;
      if (pSVar9 == (System_Collections_Generic_Queue_int__o *)0x0) goto label_0597f89d;
      if ((pSVar9->fields)._size < 1) break;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        pSVar9 = TypeInfo_Map_MapDestruction->static_fields->Pending;
        if (pSVar9 == (System_Collections_Generic_Queue_int__o *)0x0) goto label_0597f89d;
      }
      uVar7 = System_Collections_Generic_Queue_int___Dequeue
                        (pSVar9,(MethodInfo_3E72930 *)MethodInfo_System_Collections_Generic_Queue_int_Dequeue)
      ;
      __this = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapDestruction->static_fields->Objects;
      if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0597f89d;
      pMVar14 = (Map_DestructibleMapObject_o *)(ulong)uVar7;
      bVar6 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                        (__this,uVar7,(Il2CppObject **)&local_58,
                         (MethodInfo_4A114B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_TryGetValue
                        );
      if (bVar6) {
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        __this_00 = TypeInfo_Map_MapDestruction->static_fields->Destroyed;
        if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0597f89d;
        pMVar14 = (Map_DestructibleMapObject_o *)(ulong)uVar7;
        bVar6 = System_Collections_Generic_HashSet_int___Add
                          (__this_00,uVar7,
                           (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
        if (bVar6) {
          if (local_58 == (Map_DestructibleMapObject_o *)0x0) goto label_0597f89d;
          Map_DestructibleMapObject__Destroy(local_58,(MethodInfo *)pMVar14);
          pMVar13 = local_58;
          if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
          }
          Map_MapDestruction__ReleaseHooks(pMVar13,(MethodInfo *)pMVar14);
          if ((local_58 == (Map_DestructibleMapObject_o *)0x0) ||
             (pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_Map_MapDestruction->static_fields->NavMeshRemovals,
             pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0)) goto label_0597f89d;
          method_00 = (local_58->fields).Colliders;
          System_Collections_Generic_HashSet_object___UnionWith
                    (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)method_00,
                     (MethodInfo_4FB4470 *)MethodInfo_System_Collections_Generic_HashSet_Component_UnionWith);
          Map_MapDestruction__EnqueueAttached(local_58,(MethodInfo *)method_00);
          pMVar5 = MethodInfo_System_Collections_Generic_List_DestructibleMapObject_Add;
          pSVar10 = TypeInfo_Map_MapDestruction->static_fields->Applied;
          if (pSVar10 == (System_Collections_Generic_List_DestructibleMapObject__o *)0x0) goto label_0597f89d;
          piVar1 = &(pSVar10->fields)._version;
          *piVar1 = *piVar1 + 1;
          pMVar4 = (pSVar10->fields)._items;
          if (pMVar4 == (Map_DestructibleMapObject_array *)0x0) goto label_0597f89d;
          uVar7 = (pSVar10->fields)._size;
          pMVar14 = local_58;
          if (uVar7 < (uint)pMVar4->max_length) {
            (pSVar10->fields)._size = uVar7 + 1;
            pMVar4->m_Items[(int)uVar7] = local_58;
            Il2CppCodeGenWriteBarrier(pMVar4->m_Items + (int)uVar7);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)local_58,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
        }
      }
    }
    if (effects) {
      pMVar13 = (Map_DestructibleMapObject_o *)0x0;
      goto label_0597f73c;
    }
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      pMVar11 = TypeInfo_Map_MapDestruction->static_fields;
    }
    if (pMVar11->Applied != (System_Collections_Generic_List_DestructibleMapObject__o *)0x0)
    goto label_0597f7b7;
  }
label_0597f89d:
  ThrowNullReferenceException();
label_0597f73c:
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  pSVar10 = TypeInfo_Map_MapDestruction->static_fields->Applied;
  if (pSVar10 == (System_Collections_Generic_List_DestructibleMapObject__o *)0x0) goto label_0597f89d;
  uVar7 = (uint)pMVar13;
  if ((3 < uVar7) || ((pSVar10->fields)._size <= (int)uVar7)) goto label_0597f7b7;
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    pSVar10 = TypeInfo_Map_MapDestruction->static_fields->Applied;
    if (pSVar10 == (System_Collections_Generic_List_DestructibleMapObject__o *)0x0) goto label_0597f89d;
  }
  target = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar10,uVar7,
                      (MethodInfo_395CF20 *)
                      MethodInfo_System_Collections_Generic_List_DestructibleMapObject_get_Item);
  center_00.fields.z = local_50;
  center_00.fields.x = (float)local_48._0_4_;
  center_00.fields.y = (float)local_48._4_4_;
  pMVar14 = pMVar13;
  Map_MapDestruction__SpawnEffects(target,center_00,local_4c,(MethodInfo *)pMVar13);
  pMVar13 = (Map_DestructibleMapObject_o *)(ulong)(uVar7 + 1);
  goto label_0597f73c;
label_0597f7b7:
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  klass = (Il2CppClass *)TypeInfo_Map_MapDestruction;
  pMVar11 = TypeInfo_Map_MapDestruction->static_fields;
  pSVar10 = pMVar11->Applied;
  if (pSVar10 != (System_Collections_Generic_List_DestructibleMapObject__o *)0x0) {
    piVar1 = &(pSVar10->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar10->fields)._size;
    (pSVar10->fields)._size = 0;
    if (0 < length) {
      pMVar14 = (Map_DestructibleMapObject_o *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,length,(MethodInfo *)0x0);
      pMVar11 = TypeInfo_Map_MapDestruction->static_fields;
      klass = (Il2CppClass *)TypeInfo_Map_MapDestruction;
    }
    components = pMVar11->NavMeshRemovals;
    if (components != (System_Collections_Generic_HashSet_Component__o *)0x0) {
      if ((components->fields)._count != 0) {
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          components = TypeInfo_Map_MapDestruction->static_fields->NavMeshRemovals;
          uVar2 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar2 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
        }
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__RemoveNavMeshSources(components,(MethodInfo *)pMVar14);
        pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                 TypeInfo_Map_MapDestruction->static_fields->NavMeshRemovals;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0597f89d;
        System_Collections_Generic_HashSet_object___Clear
                  (pSVar3,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_Component_Clear)
        ;
      }
      return;
    }
  }
  goto label_0597f89d;
}


// Map.MapDestruction$$EnqueueAttached
// il2cpp: void Map_MapDestruction__EnqueueAttached (Map_DestructibleMapObject_o* target, const MethodInfo* method);
// 0x5980320
// eh: try 0x59804e3..0x598074e -> pad 0x5980762 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x598077a..0x598077f -> pad 0x598079e cleanup
// eh: try 0x59807a1..0x59807ab -> pad 0x598080c catch (...) [compiler noexcept guard]
// eh: try 0x59807ca..0x59807cf -> pad 0x59807f4 cleanup
// eh: try 0x59807f7..0x5980804 -> pad 0x598080c catch (...) [compiler noexcept guard]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x598074e: jmp 0x59807af
// asm:   0x5980750: jmp 0x59807af
// asm:   0x5980752: jmp 0x59807af
// asm:   0x5980754: jmp 0x5980762
// asm:   0x5980756: jmp 0x59807af
// asm:   0x5980758: jmp 0x59807af
// asm:   0x598075a: jmp 0x59807af
// asm:   0x598075c: jmp 0x59807af
// asm:   0x598075e: jmp 0x5980762
// asm:   0x5980760: jmp 0x5980762
// asm:   0x5980762: mov rbx, rax
// asm:   0x5980765: cmp edx, 1
// asm:   0x5980768: jne 0x59807a1
// asm:   0x598076a: mov rdi, rbx
// asm:   0x598076d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5980772: mov rbx, qword ptr [rax]
// asm:   0x5980775: mov qword ptr [rsp + 0x30], rbx
// asm:   0x598077a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x598077f: lea rax, [rip + 0x190da5a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5980786: mov rsi, qword ptr [rax]
// asm:   0x5980789: lea rdi, [rsp + 0x70]
// asm:   0x598078e: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5980793: test rbx, rbx
// asm:   0x5980796: je 0x598053f
// asm:   0x598079c: jmp 0x59807ec
// asm:   0x598079e: mov rbx, rax
// asm:   0x59807a1: lea rdi, [rsp + 0x30]
// asm:   0x59807a6: call 0x2fd41a0  ; il2cpp_runtime_helper_02fd41a0()
// asm:   0x59807ab: jmp 0x5980804
// asm:   0x59807ad: jmp 0x59807af
// asm:   0x59807af: mov rbx, rax
// asm:   0x59807b2: cmp edx, 1
// asm:   0x59807b5: jne 0x59807f7
// asm:   0x59807b7: mov rdi, rbx
// asm:   0x59807ba: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59807bf: mov rbx, qword ptr [rax]
// asm:   0x59807c2: mov qword ptr [rsp + 0x90], rbx
// asm:   0x59807ca: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59807cf: lea rax, [rip + 0x190f0a2]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_DestructibleMapObject_Dispo
// asm:   0x59807d6: mov rsi, qword ptr [rax]
// asm:   0x59807d9: lea rdi, [rsp + 0x50]
// asm:   0x59807de: call 0x4da2970  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose()
// asm:   0x59807e3: test rbx, rbx
// asm:   0x59807e6: je 0x5980723
// asm:   0x59807ec: mov rdi, rbx
// asm:   0x59807ef: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59807f4: mov rbx, rax
// asm:   0x59807f7: lea rdi, [rsp + 0x90]
// asm:   0x59807ff: call 0x2fd41d0  ; il2cpp_runtime_helper_02fd41d0()
// asm:   0x5980804: mov rdi, rbx
// asm:   0x5980807: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x598080c: mov rdi, rax
// asm:   0x598080f: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapDestruction__EnqueueAttached(Map_DestructibleMapObject_o *target,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_Queue_int__o *pSVar3;
  System_Collections_Generic_HashSet_int__o *__this;
  UnityEngine_Bounds_o inner;
  UnityEngine_Bounds_o outer;
  UnityEngine_Bounds_o *pUVar4;
  Il2CppObject *pIVar5;
  int32_t item;
  bool bVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  Map_MapDestruction_c *method_00;
  float fVar7;
  undefined1 local_b8 [16];
  Il2CppClass *local_a8;
  System_Collections_Generic_HashSet_int__o *local_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  Il2CppObject *local_88;
  undefined1 local_78 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_70;
  Il2CppClass *local_68;
  undefined8 local_58;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_075459f5 == '\0') {
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
    Il2CppMethodInitialized_075459f5 = '\x01';
  }
  local_a0 = (System_Collections_Generic_HashSet_int__o *)0x0;
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_68 = (Il2CppClass *)0x0;
  local_98 = (undefined1  [8])0x0;
  uStack_90._0_4_ = 0;
  uStack_90._4_4_ = 0;
  local_88 = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  if ((target != (Map_DestructibleMapObject_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren,
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar6 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      (pSVar2,(target->fields).Id,(Il2CppObject **)&local_a0,
                       (MethodInfo_4A114B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_TryGetValue);
    if (bVar6) {
      if (local_a0 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05980744;
      System_Collections_Generic_HashSet_int___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8,local_a0,
                 (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
      local_68 = local_a8;
      local_78 = (undefined1  [8])local_b8._0_8_;
      pSStack_70 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8._8_8_;
      local_b8._0_8_ = (Il2CppClass *)0x0;
      local_b8._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_78;
      while( true ) {
        bVar6 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                           (MethodInfo_4C3AEE0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
        if (!bVar6) break;
        item = (int32_t)local_68;
        if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
        }
        pSVar3 = TypeInfo_Map_MapDestruction->static_fields->Pending;
        if (pSVar3 == (System_Collections_Generic_Queue_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Queue_int___Enqueue
                  (pSVar3,item,(MethodInfo_3E72790 *)MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
      }
      System_Collections_Generic_HashSet_Enumerator_int___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,
                 (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    }
    if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapDestruction->static_fields->Objects;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      __this_00 = System_Collections_Generic_Dictionary_int__object___get_Values
                            (pSVar2,(MethodInfo_4A0F4E0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_get_Values
                            );
      if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_b8,__this_00,
                   (MethodInfo_43E8AC0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_int_DestructibleMapObject_GetEnumerator
                  );
        local_88 = (Il2CppObject *)local_a8;
        local_98 = (undefined1  [8])local_b8._0_8_;
        uStack_90 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_b8._8_8_;
        local_58 = 0;
        pUVar1 = &(target->fields).Bounds;
        local_50 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_98;
        while( true ) {
          bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_98,
                             (MethodInfo_4CA2980 *)
                             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_DestructibleMapObject_MoveN
                            );
          pIVar5 = local_88;
          if (!bVar6) {
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose
                      ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                       local_98,(MethodInfo_4CA2970 *)
                                MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int_DestructibleMapObject_Dispo
                      );
            return;
          }
          if (local_88 == (Il2CppObject *)0x0) break;
          if (*(float *)&local_88[3].monitor <= (target->fields).Size * 0.5) {
            if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
            }
            __this = TypeInfo_Map_MapDestruction->static_fields->Destroyed;
            if (__this == (System_Collections_Generic_HashSet_int__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar6 = System_Collections_Generic_HashSet_int___Contains
                              (__this,*(int32_t *)&pIVar5[1].klass,
                               (MethodInfo_4FA7E00 *)
                               MethodInfo_System_Collections_Generic_HashSet_int_Contains);
            if (!bVar6) {
              local_a8 = pIVar5[3].klass;
              local_b8._0_8_ = pIVar5[2].klass;
              local_b8._8_8_ = pIVar5[2].monitor;
              pUVar4 = &(target->fields).Bounds;
              local_38._0_4_ = (pUVar4->fields).m_Extents.fields.y;
              local_38._4_4_ = (pUVar4->fields).m_Extents.fields.z;
              local_48._0_4_ = (pUVar1->fields).m_Center.fields.x;
              local_48._4_4_ = (pUVar1->fields).m_Center.fields.y;
              uStack_40 = *(undefined8 *)&(target->fields).Bounds.fields.m_Center.fields.z;
              method_00 = TypeInfo_Map_MapDestruction;
              if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
              }
              inner.fields.m_Center.fields.z = (float)local_b8._8_4_;
              inner.fields.m_Extents.fields.x = (float)local_b8._12_4_;
              inner.fields.m_Center.fields.x = (float)local_b8._0_4_;
              inner.fields.m_Center.fields.y = (float)local_b8._4_4_;
              inner.fields.m_Extents.fields._4_8_ = local_a8;
              outer.fields.m_Center.fields.z = (float)(undefined4)uStack_40;
              outer.fields.m_Extents.fields.x = (float)uStack_40._4_4_;
              outer.fields.m_Center.fields.x = (float)(undefined4)local_48;
              outer.fields.m_Center.fields.y = (float)local_48._4_4_;
              outer.fields.m_Extents.fields.y = (float)(undefined4)local_38;
              outer.fields.m_Extents.fields.z = (float)local_38._4_4_;
              fVar7 = Map_MapDestruction__ContainedFraction(inner,outer,(MethodInfo *)method_00);
              if (0.6 <= fVar7) {
                if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
                }
                pSVar3 = TypeInfo_Map_MapDestruction->static_fields->Pending;
                if (pSVar3 == (System_Collections_Generic_Queue_int__o *)0x0) {
                  ThrowNullReferenceException();
                }
                System_Collections_Generic_Queue_int___Enqueue
                          (pSVar3,*(int32_t *)&pIVar5[1].klass,
                           (MethodInfo_3E72790 *)MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
              }
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
label_05980744:
  ThrowNullReferenceException();
}


// Map.MapDestruction$$ContainedFraction
// il2cpp: float Map_MapDestruction__ContainedFraction (UnityEngine_Bounds_o inner, UnityEngine_Bounds_o outer, const MethodInfo* method);
// 0x5980bb0

float Map_MapDestruction__ContainedFraction
                (UnityEngine_Bounds_o inner,UnityEngine_Bounds_o outer,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar8->zeroVector).fields.x;
  uVar4 = (pUVar8->zeroVector).fields.y;
  fVar1 = (pUVar8->zeroVector).fields.z;
  if (Il2CppMethodInitialized_0753e4b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b7 = '\x01';
    pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
  }
  fVar7 = inner.fields.m_Center.fields.z + inner.fields.m_Extents.fields.z;
  if (outer.fields.m_Center.fields.z + outer.fields.m_Extents.fields.z <=
      inner.fields.m_Center.fields.z + inner.fields.m_Extents.fields.z) {
    fVar7 = outer.fields.m_Center.fields.z + outer.fields.m_Extents.fields.z;
  }
  fVar14 = inner.fields.m_Center.fields.z - inner.fields.m_Extents.fields.z;
  if (inner.fields.m_Center.fields.z - inner.fields.m_Extents.fields.z <=
      outer.fields.m_Center.fields.z - outer.fields.m_Extents.fields.z) {
    fVar14 = outer.fields.m_Center.fields.z - outer.fields.m_Extents.fields.z;
  }
  auVar10._0_4_ = fVar7 - fVar14;
  auVar10._4_4_ = inner.fields.m_Extents.fields.z + inner.fields.m_Extents.fields.z;
  auVar10._8_8_ = 0;
  fVar7 = inner.fields.m_Center.fields.y + inner.fields.m_Extents.fields.y;
  if (outer.fields.m_Center.fields.y + outer.fields.m_Extents.fields.y <=
      inner.fields.m_Center.fields.y + inner.fields.m_Extents.fields.y) {
    fVar7 = outer.fields.m_Center.fields.y + outer.fields.m_Extents.fields.y;
  }
  fVar14 = inner.fields.m_Center.fields.y - inner.fields.m_Extents.fields.y;
  if (inner.fields.m_Center.fields.y - inner.fields.m_Extents.fields.y <=
      outer.fields.m_Center.fields.y - outer.fields.m_Extents.fields.y) {
    fVar14 = outer.fields.m_Center.fields.y - outer.fields.m_Extents.fields.y;
  }
  auVar9._0_4_ = fVar7 - fVar14;
  auVar9._4_4_ = inner.fields.m_Extents.fields.y + inner.fields.m_Extents.fields.y;
  auVar9._8_8_ = 0;
  fVar7 = inner.fields.m_Center.fields.x + inner.fields.m_Extents.fields.x;
  if (outer.fields.m_Center.fields.x + outer.fields.m_Extents.fields.x <=
      inner.fields.m_Center.fields.x + inner.fields.m_Extents.fields.x) {
    fVar7 = outer.fields.m_Center.fields.x + outer.fields.m_Extents.fields.x;
  }
  fVar14 = inner.fields.m_Center.fields.x - inner.fields.m_Extents.fields.x;
  if (inner.fields.m_Center.fields.x - inner.fields.m_Extents.fields.x <=
      outer.fields.m_Center.fields.x - outer.fields.m_Extents.fields.x) {
    fVar14 = outer.fields.m_Center.fields.x - outer.fields.m_Extents.fields.x;
  }
  auVar12._0_4_ = fVar7 - fVar14;
  auVar12._4_4_ = inner.fields.m_Extents.fields.x + inner.fields.m_Extents.fields.x;
  auVar12._8_8_ = 0;
  uVar3 = (pUVar8->oneVector).fields.x;
  uVar5 = (pUVar8->oneVector).fields.y;
  auVar11._4_4_ = (pUVar8->oneVector).fields.z * 0.01;
  auVar11._0_4_ = fVar1;
  auVar11._8_8_ = 0;
  auVar11 = maxps(auVar10,auVar11);
  auVar13._4_4_ = (float)uVar3 * 0.01;
  auVar13._0_4_ = uVar2;
  auVar13._8_8_ = 0;
  auVar13 = maxps(auVar12,auVar13);
  auVar6._4_4_ = (float)uVar5 * 0.01;
  auVar6._0_4_ = uVar4;
  auVar6._8_4_ = uVar4;
  auVar6._12_4_ = uVar4;
  auVar10 = maxps(auVar9,auVar6);
  return (auVar10._0_4_ * auVar13._0_4_ * auVar11._0_4_) / (auVar10._4_4_ * auVar13._4_4_ * auVar11._4_4_);
}


// Map.MapDestruction$$CanBreak
// il2cpp: bool Map_MapDestruction__CanBreak (int32_t id, float maxObjectSize, const MethodInfo* method);
// 0x597ea20

bool Map_MapDestruction__CanBreak(int32_t id,float maxObjectSize,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this;
  System_Collections_Generic_HashSet_int__o *__this_00;
  bool bVar1;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_075459f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_075459f6 = '\x01';
  }
  local_18 = (Il2CppObject *)0x0;
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  __this = (System_Collections_Generic_Dictionary_int__object__o *)
           TypeInfo_Map_MapDestruction->static_fields->Objects;
  if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      (__this,id,&local_18,
                       (MethodInfo_4A114B0 *)
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
      bVar1 = System_Collections_Generic_HashSet_int___Contains
                        (__this_00,id,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar1) {
        return false;
      }
      if (local_18 != (Il2CppObject *)0x0) {
        return *(float *)&local_18[3].monitor <= maxObjectSize;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$GetMaxObjectSize
// il2cpp: float Map_MapDestruction__GetMaxObjectSize (Characters_BaseCharacter_o* attacker, float hitSize, const MethodInfo* method);
// 0x597e920

float Map_MapDestruction__GetMaxObjectSize
                (Characters_BaseCharacter_o *attacker,float hitSize,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_075459f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_075459f7 = '\x01';
  }
  fVar2 = 11.0;
  if (attacker != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (bVar1 <= (attacker->klass->_2).typeHierarchyDepth) {
      fVar2 = *(float *)(&g_data_0100ab20 +
                        (ulong)((attacker->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                               (Il2CppClass *)TypeInfo_Characters_BaseTitan) * 4);
    }
  }
  return fVar2 * hitSize;
}


// Map.MapDestruction$$GetMaxHitSize
// il2cpp: float Map_MapDestruction__GetMaxHitSize (Characters_BaseCharacter_o* attacker, float hitSize, const MethodInfo* method);
// 0x597f2e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x597f364: lea rax, [rip + 0x18fb58d]  ; TypeInfo_Map_MapDestruction
// asm:   0x597f36b: mov rdi, qword ptr [rax]
// asm:   0x597f36e: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x597f375: jne 0x597f388

float Map_MapDestruction__GetMaxHitSize(Characters_BaseCharacter_o *attacker,float hitSize,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_075459f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_075459f8 = '\x01';
  }
  if (attacker != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (attacker->klass->_2).typeHierarchyDepth) &&
       ((attacker->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)
       ) {
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      fVar2 = Map_MapDestruction__GetHandSize((Characters_BaseTitan_o *)attacker,hitSize,method);
      return fVar2 * 4.0;
    }
  }
  return 150.0;
}


// Map.MapDestruction$$GetHandSize
// il2cpp: float Map_MapDestruction__GetHandSize (Characters_BaseTitan_o* titan, float hitSize, const MethodInfo* method);
// 0x5980eb0

float Map_MapDestruction__GetHandSize(Characters_BaseTitan_o *titan,float hitSize,MethodInfo *method)

{
  uint32_t uVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  Characters_BaseHitbox_o *x;
  UnityEngine_Object_o *x_00;
  UnityEngine_Collider_o *collider;
  bool bVar3;
  MethodInfo *method_00;
  float fVar4;
  
  if (Il2CppMethodInitialized_075459f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075459f9 = '\x01';
  }
  if ((titan == (Characters_BaseTitan_o *)0x0) ||
     (pCVar2 = (titan->fields).BaseTitanCache, pCVar2 == (Characters_BaseTitanComponentCache_o *)0x0)) {
label_05980fcd:
    ThrowNullReferenceException();
  }
  x = (pCVar2->fields).HandRHitbox;
  if (x == (Characters_BaseHitbox_o *)0x0) {
    x = (pCVar2->fields).HandLHitbox;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (Characters_BaseHitbox_o *)0x0) goto label_05980fcd;
    x_00 = (UnityEngine_Object_o *)(x->fields)._collider;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      collider = (x->fields)._collider;
      if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
      }
      fVar4 = Map_MapDestruction__GetHitSize(collider,method_00);
      return fVar4;
    }
  }
  return hitSize;
}


// Map.MapDestruction$$GetHitSize
// il2cpp: float Map_MapDestruction__GetHitSize (UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x5980fe0

float Map_MapDestruction__GetHitSize(UnityEngine_Collider_o *collider,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  UnityEngine_Collider_c *pUVar3;
  UnityEngine_Transform_o *__this;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__return_storage_ptr__;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  undefined1 local_20 [20];
  float local_c;
  
  if (Il2CppMethodInitialized_075459fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075459fa = '\x01';
  }
  if (collider != (UnityEngine_Collider_o *)0x0) {
    __this = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__get_lossyScale(__this,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      UVar9 = Utility_Util__Abs(UVar9,(MethodInfo *)0x0);
      fVar5 = UVar9.fields.z;
      fVar6 = UVar9.fields.x;
      fVar7 = UVar9.fields.y;
      fVar4 = fVar7;
      if (fVar7 <= fVar5) {
        fVar4 = fVar5;
      }
      fVar8 = fVar6;
      if (fVar6 <= fVar4) {
        fVar8 = fVar4;
      }
      pUVar3 = collider->klass;
      bVar1 = (pUVar3->_2).typeHierarchyDepth;
      bVar2 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pUVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider))
      {
        bVar2 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
        if ((bVar1 < bVar2) ||
           ((pUVar3->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
          bVar2 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
          if ((bVar1 < bVar2) ||
             ((pUVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider)
             ) {
            __return_storage_ptr__ = (CustomLogic_CustomLogicMathBuiltin_o *)local_20;
            UnityEngine_Collider__get_bounds
                      ((UnityEngine_Bounds_o *)__return_storage_ptr__,collider,(MethodInfo *)0x0);
            fVar6 = local_20._12_4_ + local_20._12_4_;
            fVar7 = local_20._16_4_ + local_20._16_4_;
            local_c = local_c + local_c;
            method_00 = (MethodInfo *)collider;
            collider = (UnityEngine_Collider_o *)__return_storage_ptr__;
          }
          else {
            method_00 = (MethodInfo *)0x0;
            UVar9 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)collider,(MethodInfo *)0x0)
            ;
            fVar6 = fVar6 * UVar9.fields.x;
            fVar7 = fVar7 * UVar9.fields.y;
            local_c = fVar5 * UVar9.fields.z;
          }
          local_c = fVar7 * fVar6 * local_c;
          if (local_c <= 0.0) {
            local_c = 0.0;
          }
          fVar4 = powf((CustomLogic_CustomLogicMathBuiltin_o *)collider,local_c,0.33333334,method_00);
          return fVar4;
        }
        fVar4 = UnityEngine_CapsuleCollider__get_radius
                          ((UnityEngine_CapsuleCollider_o *)collider,(MethodInfo *)0x0);
      }
      else {
        fVar4 = UnityEngine_SphereCollider__get_radius
                          ((UnityEngine_SphereCollider_o *)collider,(MethodInfo *)0x0);
      }
      return fVar8 * fVar4 + fVar8 * fVar4;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapDestruction$$SpawnEffects
// il2cpp: void Map_MapDestruction__SpawnEffects (Map_DestructibleMapObject_o* target, UnityEngine_Vector3_o center, float hitSize, const MethodInfo* method);
// 0x5980820

void Map_MapDestruction__SpawnEffects
               (Map_DestructibleMapObject_o *target,UnityEngine_Vector3_o center,float hitSize,
               MethodInfo *method)

{
  UnityEngine_Bounds_o objectBounds;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar1;
  float fVar2;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector3_o impact;
  Il2CppMethodPointer local_48;
  float local_40;
  InvokerMethod local_38;
  char *pcStack_30;
  Il2CppClass *local_28;
  undefined1 local_18 [16];
  
  fVar1 = center.fields.x;
  fVar2 = center.fields.y;
  if (g_data_075459fb == '\0') {
    local_18._8_4_ = in_XMM0_Dc;
    local_18._0_8_ = center.fields._0_8_;
    local_18._12_4_ = in_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestructionDebris);
    g_data_075459fb = '\x01';
    fVar1 = (float)local_18._0_4_;
    fVar2 = (float)local_18._4_4_;
  }
  if (target == (Map_DestructibleMapObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_01 = (MethodInfo *)&(target->fields).Bounds;
  local_28 = *(Il2CppClass **)&(target->fields).Bounds.fields.m_Extents.fields.y;
  local_38 = *(InvokerMethod *)&(target->fields).Bounds.fields.m_Center.fields;
  pcStack_30 = *(char **)&(target->fields).Bounds.fields.m_Center.fields.z;
  local_48 = (Il2CppMethodPointer)CONCAT44(fVar2,fVar1);
  method_00 = (MethodInfo *)&local_48;
  local_40 = center.fields.z;
  impact = UnityEngine_Bounds__Internal_ClosestPoint
                     ((UnityEngine_Bounds_o *)method_01,(UnityEngine_Vector3_o *)method_00,(MethodInfo *)0x0);
  objectBounds.fields._8_8_ = pcStack_30;
  objectBounds.fields.m_Center.fields._0_8_ = local_38;
  objectBounds.fields.m_Extents.fields._4_8_ = local_28;
  Map_MapDestructionDust__Spawn(objectBounds,impact,hitSize * 0.5,method_01);
  if ((TypeInfo_Map_MapDestructionDebris->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestructionDebris);
  }
  Map_MapDestructionDebris__Spawn(target,method_00);
  return;
}


// Map.MapDestruction$$ReleaseHooks
// il2cpp: void Map_MapDestruction__ReleaseHooks (Map_DestructibleMapObject_o* target, const MethodInfo* method);
// 0x59800c0
// fidelity: the machine code has facts this C leaves out:
//   virtual call through vtable slot 74
// eh: try 0x59801f4..0x59802ad -> pad 0x59802be (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59802d6..0x59802db -> pad 0x59802fc cleanup
// eh: try 0x59802ff..0x5980309 -> pad 0x5980311 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59802b2: jmp 0x59802be
// asm:   0x59802b4: jmp 0x59802be
// asm:   0x59802b6: jmp 0x59802be
// asm:   0x59802b8: jmp 0x59802be
// asm:   0x59802ba: jmp 0x59802be
// asm:   0x59802bc: jmp 0x59802be
// asm:   0x59802be: mov rbx, rax
// asm:   0x59802c1: cmp edx, 1
// asm:   0x59802c4: jne 0x59802ff
// asm:   0x59802c6: mov rdi, rbx
// asm:   0x59802c9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59802ce: mov rbx, qword ptr [rax]
// asm:   0x59802d1: mov qword ptr [rsp + 8], rbx
// asm:   0x59802d6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59802db: lea rax, [rip + 0x190db86]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x59802e2: mov rsi, qword ptr [rax]
// asm:   0x59802e5: lea rdi, [rsp + 0x20]
// asm:   0x59802ea: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x59802ef: test rbx, rbx
// asm:   0x59802f2: je 0x5980299
// asm:   0x59802f4: mov rdi, rbx
// asm:   0x59802f7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59802fc: mov rbx, rax
// asm:   0x59802ff: lea rdi, [rsp + 8]
// asm:   0x5980304: call 0x2fd4200  ; il2cpp_runtime_helper_02fd4200()
// asm:   0x5980309: mov rdi, rbx
// asm:   0x598030c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5980311: mov rdi, rax
// asm:   0x5980314: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapDestruction__ReleaseHooks(Map_DestructibleMapObject_o *target,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  Characters_HookUseable_o *useable;
  Il2CppObject *x;
  bool bVar3;
  char cVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 local_60 [16];
  UnityEngine_Object_o *local_50;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_075459fc == '\0') {
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
    Il2CppMethodInitialized_075459fc = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      __this = (System_Collections_Generic_HashSet_object__o *)(*(uint64_t *)((char *)pGVar2 + 0x40));
      if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
      local_48.fields._current = (Il2CppObject *)local_50;
      local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_60._8_8_ = &local_48;
      while( true ) {
        bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_4C456D0 *)
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
            useable = ((UnityEngine_Object_o *)((long)x + 0x120))->monitor;
            method_00 = extraout_RDX;
            if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
              method_00 = extraout_RDX_00;
            }
            Map_MapDestruction__ReleaseHooks_5882120(useable,target,method_00);
            Map_MapDestruction__ReleaseHooks_5882120
                      ((Characters_HookUseable_o *)
                       (((UnityEngine_Object_o *)((long)x + 0x120))->fields).m_CachedPtr,target,method_01);
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (&local_48,
                 (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose)
      ;
    }
  }
  return;
}


// Map.MapDestruction$$ReleaseHooks
// il2cpp: void Map_MapDestruction__ReleaseHooks (Characters_HookUseable_o* useable, Map_DestructibleMapObject_o* target, const MethodInfo* method);
// 0x5982120
// eh: try 0x5982204..0x5982341 -> pad 0x598235a (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5982372..0x5982377 -> pad 0x5982396 cleanup
// eh: try 0x5982399..0x59823a3 -> pad 0x59823ab catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59821ee: mov r15, rsp
// asm:   0x59821f1: lea r12, [rip + 0x18f91f8]  ; TypeInfo_UnityEngine_Object
// asm:   0x59821f8: nop dword ptr [rax + rax]
// asm:   0x59822bf: mov r14, rsp
// asm:   0x59822c2: lea r15, [rip + 0x18f9127]  ; TypeInfo_UnityEngine_Object
// asm:   0x59822c9: nop dword ptr [rax]
// asm:   0x5982346: jmp 0x598235a
// asm:   0x5982348: jmp 0x598235a
// asm:   0x598234a: jmp 0x598235a
// asm:   0x598234c: jmp 0x598235a
// asm:   0x598234e: jmp 0x598235a
// asm:   0x5982350: jmp 0x598235a
// asm:   0x5982352: jmp 0x598235a
// asm:   0x5982354: jmp 0x598235a
// asm:   0x5982356: jmp 0x598235a
// asm:   0x5982358: jmp 0x598235a
// asm:   0x598235a: mov rbx, rax
// asm:   0x598235d: cmp edx, 1
// asm:   0x5982360: jne 0x5982399
// asm:   0x5982362: mov rdi, rbx
// asm:   0x5982365: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x598236a: mov rbx, qword ptr [rax]
// asm:   0x598236d: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5982372: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5982377: lea rax, [rip + 0x190baba]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose
// asm:   0x598237e: mov rsi, qword ptr [rax]
// asm:   0x5982381: mov rdi, rsp
// asm:   0x5982384: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5982389: test rbx, rbx
// asm:   0x598238c: je 0x5982328
// asm:   0x598238e: mov rdi, rbx
// asm:   0x5982391: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5982396: mov rbx, rax
// asm:   0x5982399: lea rdi, [rsp + 0x20]
// asm:   0x598239e: call 0x2fd4230  ; il2cpp_runtime_helper_02fd4230()
// asm:   0x59823a3: mov rdi, rbx
// asm:   0x59823a6: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59823ab: mov rdi, rax
// asm:   0x59823ae: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapDestruction__ReleaseHooks_5882120
               (Characters_HookUseable_o *useable,Map_DestructibleMapObject_o *target,MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o *__this;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_Enumerator_object__o *pSVar2;
  bool bVar3;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  Characters_Hook_o *local_38;
  
  if (Il2CppMethodInitialized_075459fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075459fd = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if (useable != (Characters_HookUseable_o *)0x0) {
    __this = (useable->fields).Hooks;
    if (__this == (System_Collections_Generic_List_Hook__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator);
    local_68.fields._current = (Il2CppObject *)local_38;
    local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    local_68.fields._index = local_48._8_4_;
    local_68.fields._version = local_48._12_4_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = &local_68;
    pSVar2 = &local_68;
    if (target == (Map_DestructibleMapObject_o *)0x0) {
      while (local_48._8_8_ = pSVar2,
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_68,
                               (MethodInfo_4C45C50 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext),
            pIVar1 = local_68.fields._current, bVar3) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pSVar2 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
        if (bVar3) {
          if ((Characters_Hook_o *)pIVar1 == (Characters_Hook_o *)0x0) goto label_05982337;
          if (((Characters_Hook_Fields *)((long)pIVar1 + 0x10))->State == 2) {
            ThrowNullReferenceException();
          }
        }
      }
    }
    else {
      while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_68,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext),
            pIVar1 = local_68.fields._current, bVar3) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if ((Characters_Hook_o *)pIVar1 == (Characters_Hook_o *)0x0) {
label_05982337:
            ThrowNullReferenceException();
          }
          if (((Characters_Hook_Fields *)((long)pIVar1 + 0x10))->State == 2) {
            __this_00 = ((Characters_Hook_Fields *)((long)pIVar1 + 0x10))->HookParent;
            if (Il2CppMethodInitialized_075459d5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
              Il2CppMethodInitialized_075459d5 = '\x01';
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar3) {
              if (__this_00 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar3 = UnityEngine_Transform__IsChildOf(__this_00,(target->fields).Root,(MethodInfo *)0x0);
              if (bVar3) {
                Characters_Hook__SetHookState((Characters_Hook_o *)pIVar1,4,(MethodInfo *)0x0);
              }
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
  }
  return;
}


// Map.MapDestruction$$IsFinite
// il2cpp: bool Map_MapDestruction__IsFinite (UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x597f2b0

bool Map_MapDestruction__IsFinite(UnityEngine_Vector3_o value,MethodInfo *method)

{
  undefined4 in_EAX;
  undefined8 in_XMM0_Qb;
  undefined1 auVar1 [16];
  int iVar3;
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = value.fields._0_8_;
  auVar1._8_8_ = in_XMM0_Qb;
  auVar2._0_4_ = -(uint)(SUB164(auVar1 & _DAT_01008860,0) == (int)g_data_01008860);
  iVar3 = -(uint)(SUB164(auVar1 & _DAT_01008860,4) == g_data_01008860._4_4_);
  auVar2._4_4_ = auVar2._0_4_;
  auVar2._8_4_ = iVar3;
  auVar2._12_4_ = iVar3;
  iVar3 = movmskpd(in_EAX,auVar2);
  if (iVar3 == 0) {
    return (~(uint)value.fields.z & 0x7f800000) != 0;
  }
  return false;
}


// Map.MapDestruction$$.cctor
// il2cpp: void Map_MapDestruction___cctor (const MethodInfo* method);
// 0x59823c0

void Map_MapDestruction___cctor(MethodInfo *method)

{
  uint uVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  Map_MapDestruction_StaticFields *pMVar3;
  UnityEngine_LayerMask_o mask;
  int32_t iVar4;
  System_Int32_array *layers;
  System_Collections_Generic_Dictionary_int__DestructibleMapObject__o *__this;
  System_Collections_Generic_Dictionary_Renderer__BatchSlice__o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  UnityEngine_Collider_array *pUVar5;
  System_Collections_Generic_List_int__o *__this_02;
  System_Collections_Generic_List_DestructibleMapObject__o *__this_03;
  System_Collections_Generic_Queue_int__o *__this_04;
  System_Collections_Generic_HashSet_Component__o *__this_05;
  UnityEngine_WaitForFixedUpdate_o *__this_06;
  
  if (Il2CppMethodInitialized_075459fe == '\0') {
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
    Il2CppMethodInitialized_075459fe = '\x01';
  }
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,6);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)layers->max_length;
  if (uVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    layers->m_Items[0] = pUVar2->MapObjectAll;
    if ((((uVar1 != 1) && (layers->m_Items[1] = pUVar2->MapObjectEntities, 2 < uVar1)) &&
        (layers->m_Items[2] = pUVar2->MapObjectCharacters, uVar1 != 3)) &&
       ((layers->m_Items[3] = pUVar2->MapObjectTitans, 4 < uVar1 &&
        (layers->m_Items[4] = pUVar2->MapObjectHumans, uVar1 != 5)))) {
      layers->m_Items[5] = pUVar2->MapObjectProjectiles;
      mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      iVar4 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
      TypeInfo_Map_MapDestruction->static_fields->MapMask = iVar4;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject);
      System_Collections_Generic_Dictionary_int__object____ctor
                ((System_Collections_Generic_Dictionary_int__object__o *)__this,
                 (MethodInfo_4A0EB10 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_DestructibleMapObject_ctor);
      pMVar3 = TypeInfo_Map_MapDestruction->static_fields;
      pMVar3->Objects = __this;
      Il2CppCodeGenWriteBarrier(&pMVar3->Objects);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice
                            );
      System_Collections_Generic_Dictionary_object__BatchSlice____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_4A709B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Renderer_BatchSlice_ctor);
      pMVar3 = TypeInfo_Map_MapDestruction->static_fields;
      pMVar3->BatchSlices = __this_00;
      Il2CppCodeGenWriteBarrier(&pMVar3->BatchSlices);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
      System_Collections_Generic_HashSet_int____ctor
                (__this_01,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
      pMVar3 = TypeInfo_Map_MapDestruction->static_fields;
      pMVar3->Destroyed = __this_01;
      Il2CppCodeGenWriteBarrier(&pMVar3->Destroyed);
      pUVar5 = (UnityEngine_Collider_array *)SZArrayNew(TypeInfo_UnityEngine_Collider_array,0x40);
      pMVar3 = TypeInfo_Map_MapDestruction->static_fields;
      pMVar3->Overlaps = pUVar5;
      Il2CppCodeGenWriteBarrier(&pMVar3->Overlaps);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
      System_Collections_Generic_List_int____ctor
                (__this_02,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
      pMVar3 = TypeInfo_Map_MapDestruction->static_fields;
      pMVar3->Targets = __this_02;
      Il2CppCodeGenWriteBarrier(&pMVar3->Targets);
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_DestructibleMapObject);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_03,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_DestructibleMapObject_ctor);
      pMVar3 = TypeInfo_Map_MapDestruction->static_fields;
      pMVar3->Applied = __this_03;
      Il2CppCodeGenWriteBarrier(&pMVar3->Applied);
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_int);
      System_Collections_Generic_Queue_int____ctor
                (__this_04,(MethodInfo_3E721D0 *)MethodInfo_System_Collections_Generic_Queue_int_ctor);
      pMVar3 = TypeInfo_Map_MapDestruction->static_fields;
      pMVar3->Pending = __this_04;
      Il2CppCodeGenWriteBarrier(&pMVar3->Pending);
      __this_05 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Component);
      System_Collections_Generic_HashSet_object____ctor
                ((System_Collections_Generic_HashSet_object__o *)__this_05,
                 (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Component_ctor);
      pMVar3 = TypeInfo_Map_MapDestruction->static_fields;
      pMVar3->NavMeshRemovals = __this_05;
      Il2CppCodeGenWriteBarrier(&pMVar3->NavMeshRemovals);
      __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForFixedUpdate);
      UnityEngine_WaitForFixedUpdate___ctor(__this_06,(MethodInfo *)0x0);
      pMVar3 = TypeInfo_Map_MapDestruction->static_fields;
      pMVar3->FixedStep = __this_06;
      Il2CppCodeGenWriteBarrier(&pMVar3->FixedStep);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


