// Type: Characters.BaseTitan
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/BaseTitan.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BaseTitan.cs
// --------------------------------

// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$.ctor
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228___ctor (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5c2c1b0

void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228___ctor
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228__System_IDisposable_Dispose (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o* __this, const MethodInfo* method);
// 0x5c2d0e0

void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228__System_IDisposable_Dispose
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$MoveNext
// il2cpp: bool Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228__MoveNext (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o* __this, const MethodInfo* method);
// 0x5c2d0f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c2d229: jmp 0x5c2d345

bool Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228__MoveNext
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint32_t uVar4;
  Characters_BaseTitan_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Rigidbody_o *pUVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  Il2CppObject *__this_00;
  float fVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  UnityEngine_Vector3_o UVar15;
  float local_38;
  float fStack_34;
  undefined8 local_28;
  
  if (Il2CppMethodInitialized_0754779b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForFixedUpdate);
    Il2CppMethodInitialized_0754779b = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return false;
  }
  pCVar5 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  uVar13 = 0;
  if ((__this->fields).time <= 0.0) {
    return false;
  }
  if (((pCVar5 == (Characters_BaseTitan_o *)0x0) ||
      (pUVar6 = (pCVar5->fields).Cache, pUVar6 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pUVar7 = (pUVar6->fields).Rigidbody, pUVar7 == (UnityEngine_Rigidbody_o *)0x0)) {
label_05c2d413:
    ThrowNullReferenceException();
  }
  bVar9 = UnityEngine_Rigidbody__get_isKinematic(pUVar7,(MethodInfo *)0x0);
  if (bVar9) goto label_05c2d345;
  pUVar6 = (pCVar5->fields).Cache;
  if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar7 = (pUVar6->fields).Rigidbody, pUVar7 == (UnityEngine_Rigidbody_o *)0x0)) goto label_05c2d413;
  UVar15 = UnityEngine_Rigidbody__get_linearVelocity(pUVar7,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    uVar13 = 0;
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar13 = 0;
  }
  fVar12 = UVar15.fields.z * UVar15.fields.z +
           UVar15.fields.y * UVar15.fields.y + UVar15.fields.x * UVar15.fields.x;
  if (fVar12 < 0.0) {
    fVar12 = sqrtf(fVar12);
    pfVar1 = &(__this->fields).maxSpeed;
    if (fVar12 < *pfVar1 || fVar12 == *pfVar1) goto label_05c2d345;
  }
  else {
    pfVar1 = &(__this->fields).maxSpeed;
    if (SQRT(fVar12) < *pfVar1 || SQRT(fVar12) == *pfVar1) goto label_05c2d345;
  }
  pUVar6 = (pCVar5->fields).Cache;
  if ((pUVar6 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar7 = (pUVar6->fields).Rigidbody, pUVar7 == (UnityEngine_Rigidbody_o *)0x0)) goto label_05c2d413;
  UVar15 = UnityEngine_Rigidbody__get_linearVelocity(pUVar7,(MethodInfo *)0x0);
  fVar12 = UVar15.fields.z;
  auVar14._8_4_ = extraout_XMM0_Dc;
  auVar14._0_8_ = UVar15.fields._0_8_;
  auVar14._12_4_ = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    uVar13 = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_28._0_4_ = 0.0;
    local_28._4_4_ = 0.0;
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05c2d3d9;
label_05c2d29d:
    local_28._0_4_ = 0.0;
    local_28._4_4_ = 0.0;
    uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_28._0_4_ = 0.0;
    local_28._4_4_ = 0.0;
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05c2d29d;
label_05c2d3d9:
    local_28._0_4_ = 0.0;
    local_28._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    uVar13 = 0;
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar13 = 0;
  }
  local_38 = UVar15.fields.x;
  fStack_34 = UVar15.fields.y;
  fVar11 = fVar12 * fVar12 + fStack_34 * fStack_34 + local_38 * local_38;
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
    uVar13 = extraout_XMM0_Db;
    if (1e-05 < fVar11) goto label_05c2d30d;
label_05c2d2e1:
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar12 = (pUVar10->zeroVector).fields.z;
  }
  else {
    fVar11 = SQRT(fVar11);
    if (fVar11 <= 1e-05) goto label_05c2d2e1;
label_05c2d30d:
    fVar12 = fVar12 / fVar11;
    auVar8._4_4_ = fVar11;
    auVar8._0_4_ = fVar11;
    auVar8._8_4_ = uVar13;
    auVar8._12_4_ = uVar13;
    auVar14 = divps(auVar14,auVar8);
    local_28._0_4_ = auVar14._0_4_;
    local_28._4_4_ = auVar14._4_4_;
    pUVar10 = (UnityEngine_Vector3_StaticFields *)&local_28;
  }
  uVar2 = (pUVar10->zeroVector).fields.x;
  uVar3 = (pUVar10->zeroVector).fields.y;
  fVar11 = (__this->fields).maxSpeed;
  UVar15.fields.z = fVar12 * fVar11;
  UVar15.fields.x = fVar11 * (float)uVar2;
  UVar15.fields.y = fVar11 * (float)uVar3;
  UnityEngine_Rigidbody__set_linearVelocity(pUVar7,UVar15,(MethodInfo *)0x0);
label_05c2d345:
  fVar12 = (__this->fields).time;
  fVar11 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields).time = fVar12 - fVar11;
  __this_00 = (Il2CppObject *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForFixedUpdate);
  UnityEngine_WaitForFixedUpdate___ctor((UnityEngine_WaitForFixedUpdate_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).__2__current = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  (__this->fields).__1__state = 1;
  return true;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o* __this, const MethodInfo* method);
// 0x5c2d420

Il2CppObject *
Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228__System_Collections_IEnumerator_Reset (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o* __this, const MethodInfo* method);
// 0x5c2d430

void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228__System_Collections_IEnumerator_Reset
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Characters_BaseTitan_HandleSpawnCollisionCoroutine_d__228_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228__System_Collections_IEnumerator_get_Current (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o* __this, const MethodInfo* method);
// 0x5c2d470

Il2CppObject *
Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228__System_Collections_IEnumerator_get_Current
          (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan$$get_GoreEnabled
// il2cpp: bool Characters_BaseTitan__get_GoreEnabled (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c252c0

bool Characters_BaseTitan__get_GoreEnabled(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return (__this->fields)._GoreEnabled_k__BackingField;
}


// Characters.BaseTitan$$set_GoreEnabled
// il2cpp: void Characters_BaseTitan__set_GoreEnabled (Characters_BaseTitan_o* __this, bool value, const MethodInfo* method);
// 0x5c252d0

void Characters_BaseTitan__set_GoreEnabled(Characters_BaseTitan_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._GoreEnabled_k__BackingField = value;
  return;
}


// Characters.BaseTitan$$get_DeathCollidersDisabled
// il2cpp: bool Characters_BaseTitan__get_DeathCollidersDisabled (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c21c10

bool Characters_BaseTitan__get_DeathCollidersDisabled(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_TitanDeathDissolve_o *pCVar1;
  
  pCVar1 = (__this->fields).DeathDissolve;
  if (pCVar1 == (Characters_TitanDeathDissolve_o *)0x0) {
    return false;
  }
  return (pCVar1->fields)._CollidersDisabled_k__BackingField != false;
}


// Characters.BaseTitan$$get_DefaultCrippleTime
// il2cpp: float Characters_BaseTitan__get_DefaultCrippleTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c252e0

float Characters_BaseTitan__get_DefaultCrippleTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 8.0;
}


// Characters.BaseTitan$$get_CanWallClimb
// il2cpp: bool Characters_BaseTitan__get_CanWallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c252f0

bool Characters_BaseTitan__get_CanWallClimb(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.BaseTitan$$get_CanSprint
// il2cpp: bool Characters_BaseTitan__get_CanSprint (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25300

bool Characters_BaseTitan__get_CanSprint(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.BaseTitan$$get_ComboStunTime
// il2cpp: float Characters_BaseTitan__get_ComboStunTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25310

float Characters_BaseTitan__get_ComboStunTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_LaunchSizeRatio
// il2cpp: float Characters_BaseTitan__get_LaunchSizeRatio (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25320

float Characters_BaseTitan__get_LaunchSizeRatio(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0.66;
}


// Characters.BaseTitan$$get_LaunchForce
// il2cpp: float Characters_BaseTitan__get_LaunchForce (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25330

float Characters_BaseTitan__get_LaunchForce(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 250.0;
}


// Characters.BaseTitan$$get_LaunchTime
// il2cpp: float Characters_BaseTitan__get_LaunchTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25340

float Characters_BaseTitan__get_LaunchTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.5;
}


// Characters.BaseTitan$$get_PushForce
// il2cpp: float Characters_BaseTitan__get_PushForce (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25350

float Characters_BaseTitan__get_PushForce(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 50.0;
}


// Characters.BaseTitan$$get_PushTime
// il2cpp: float Characters_BaseTitan__get_PushTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25360

float Characters_BaseTitan__get_PushTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0.5;
}


// Characters.BaseTitan$$get_GroundDistance
// il2cpp: float Characters_BaseTitan__get_GroundDistance (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25370

float Characters_BaseTitan__get_GroundDistance(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_GroundMask
// il2cpp: UnityEngine_LayerMask_o Characters_BaseTitan__get_GroundMask (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25380

UnityEngine_LayerMask_o
Characters_BaseTitan__get_GroundMask(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return (UnityEngine_LayerMask_Fields)
         (UnityEngine_LayerMask_Fields)(__this->fields).TitanGroundMaskLayers.fields.m_Mask;
}


// Characters.BaseTitan$$get_DefaultRunSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultRunSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25390

float Characters_BaseTitan__get_DefaultRunSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 15.0;
}


// Characters.BaseTitan$$get_DefaultWalkSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultWalkSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c253a0

float Characters_BaseTitan__get_DefaultWalkSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 5.0;
}


// Characters.BaseTitan$$get_DefaultJumpForce
// il2cpp: float Characters_BaseTitan__get_DefaultJumpForce (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c253b0

float Characters_BaseTitan__get_DefaultJumpForce(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 150.0;
}


// Characters.BaseTitan$$get_DefaultRotateSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultRotateSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c253c0

float Characters_BaseTitan__get_DefaultRotateSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_SizeMultiplier
// il2cpp: float Characters_BaseTitan__get_SizeMultiplier (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c253d0

float Characters_BaseTitan__get_SizeMultiplier(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_DisableCooldown
// il2cpp: float Characters_BaseTitan__get_DisableCooldown (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c253e0

float Characters_BaseTitan__get_DisableCooldown(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Characters.BaseTitan$$get_Gravity
// il2cpp: UnityEngine_Vector3_o Characters_BaseTitan__get_Gravity (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c253f0

UnityEngine_Vector3_o Characters_BaseTitan__get_Gravity(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->downVector).fields.x;
  uVar2 = (pUVar3->downVector).fields.y;
  UVar4.fields.x = (float)uVar1 * 100.0;
  UVar4.fields.y = (float)uVar2 * 100.0;
  UVar4.fields.z = (pUVar3->downVector).fields.z * 100.0;
  return (UnityEngine_Vector3_o)UVar4.fields;
}


// Characters.BaseTitan$$get_CheckGroundTime
// il2cpp: float Characters_BaseTitan__get_CheckGroundTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25440

float Characters_BaseTitan__get_CheckGroundTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0.4;
}


// Characters.BaseTitan$$get_MapObjectMask
// il2cpp: UnityEngine_LayerMask_o Characters_BaseTitan__get_MapObjectMask (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25450

UnityEngine_LayerMask_o
Characters_BaseTitan__get_MapObjectMask(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_0754776a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_0754776a = '\x01';
  }
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)layers->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities;
  UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
  return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar1;
}


// Characters.BaseTitan$$Init
// il2cpp: void Characters_BaseTitan__Init (Characters_BaseTitan_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x5c254f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c25b8d: mov r15, rsp
// asm:   0x5c25b90: lea r13, [rip + 0x1666109]  ; MethodInfo_System_Collections_Generic_Dictionary_string_float_Add
// asm:   0x5c25b97: nop word ptr [rax + rax]

void Characters_BaseTitan__Init
               (Characters_BaseTitan_o *__this,bool ai,System_String_o *team,SimpleJSONFixed_JSONNode_o *data,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  Characters_AnimationHandler_o *pCVar3;
  bool bVar4;
  int32_t health;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  float fVar8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_158;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_108;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c0;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754776b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPause");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpeeds");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionPause");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpeedMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"Health");
    il2cpp_codegen_initialize_runtime_metadata(&"SizeScaledTurnSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"JumpForce");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnPause");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnSpeed");
    Il2CppMethodInitialized_0754776b = '\x01';
  }
  local_158.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_158.m_Array.fields._index = 0;
  local_158.m_Array.fields._version = 0;
  local_158.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_158.m_Object.fields._getEnumeratorRetType = 0;
  local_158.m_Object.fields._36_4_ = 0;
  local_158.m_Object.fields._version = 0;
  local_158.m_Object.fields._index = 0;
  local_158.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_158.type = 0;
  local_158._4_4_ = 0;
  local_158.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_158.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_108.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_108.m_Array.fields._index = 0;
  local_108.m_Array.fields._version = 0;
  local_108.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_108.m_Object.fields._getEnumeratorRetType = 0;
  local_108.m_Object.fields._36_4_ = 0;
  local_108.m_Object.fields._version = 0;
  local_108.m_Object.fields._index = 0;
  local_108.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_108.type = 0;
  local_108._4_4_ = 0;
  local_108.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_108.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  Characters_BaseCharacter__Init((Characters_BaseCharacter_o *)__this,ai,team,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(data,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (data == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RunSpeedBase",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"RunSpeedBase",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      fVar8 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).RunSpeedBase = fVar8;
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RunSpeedPerLevel",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"RunSpeedPerLevel",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      fVar8 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).RunSpeedPerLevel = fVar8;
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"WalkSpeedBase",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"WalkSpeedBase",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      fVar8 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).WalkSpeedBase = fVar8;
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"WalkSpeedPerLevel",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"WalkSpeedPerLevel",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      fVar8 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).WalkSpeedPerLevel = fVar8;
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"JumpForce",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"JumpForce",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      fVar8 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).JumpForce = fVar8;
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RotateSpeed",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"RotateSpeed",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      fVar8 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).RotateSpeed = fVar8;
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"ActionPause",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"ActionPause",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      fVar8 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).ActionPause = fVar8;
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"TurnPause",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"TurnPause",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      fVar8 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).TurnPause = fVar8;
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"AttackPause",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"AttackPause",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      fVar8 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).AttackPause = fVar8;
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"Health",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"Health",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      health = (*(pSVar5->klass->vtable)._35_get_AsInt.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._35_get_AsInt.method);
      Characters_BaseCharacter__SetHealth((Characters_BaseCharacter_o *)__this,health,(MethodInfo *)0x0);
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"AttackSpeedMultiplier",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"AttackSpeedMultiplier",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      fVar8 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).AttackSpeedMultiplier = fVar8;
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"AttackSpeeds",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"AttackSpeeds",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,pSVar5,(MethodInfo *)0x0);
      local_108.m_Array.fields._current = local_78.m_Array.fields._current;
      local_108.m_Array.fields._list = local_78.m_Array.fields._list;
      local_108.m_Array.fields._index = local_78.m_Array.fields._index;
      local_108.m_Array.fields._version = local_78.m_Array.fields._version;
      local_108.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
      local_108.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
      local_108.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
      local_108.m_Object.fields._version = local_78.m_Object.fields._version;
      local_108.m_Object.fields._index = local_78.m_Object.fields._index;
      local_108.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
      local_108.type = local_78.type;
      local_108._4_4_ = local_78._4_4_;
      local_108.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,
                 (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
      local_158.m_Array.fields._current = local_c0.m_Array.fields._current;
      local_158.m_Array.fields._list = local_c0.m_Array.fields._list;
      local_158.m_Array.fields._index = local_c0.m_Array.fields._index;
      local_158.m_Array.fields._version = local_c0.m_Array.fields._version;
      local_158.m_Object.fields._current.fields.value = local_c0.m_Object.fields._current.fields.value;
      local_158.m_Object.fields._getEnumeratorRetType = local_c0.m_Object.fields._getEnumeratorRetType;
      local_158.m_Object.fields._36_4_ = local_c0.m_Object.fields._36_4_;
      local_158.m_Object.fields._version = local_c0.m_Object.fields._version;
      local_158.m_Object.fields._index = local_c0.m_Object.fields._index;
      local_158.m_Object.fields._current.fields.key = local_c0.m_Object.fields._current.fields.key;
      local_158.type = local_c0.type;
      local_158._4_4_ = local_c0._4_4_;
      local_158.m_Object.fields._dictionary = local_c0.m_Object.fields._dictionary;
      bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_158,(MethodInfo *)0x0);
      if (bVar4) {
        do {
          pSVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                             ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_158,(MethodInfo *)0x0);
          __this_00 = (__this->fields).AttackSpeeds;
          pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                             (data,"AttackSpeeds",(data->klass->vtable)._7_get_Item.method);
          if (((pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
              (pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar5,pSVar6,(pSVar5->klass->vtable)._7_get_Item.method),
              pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
             (fVar8 = (float)(**(code **)((long)pSVar5->klass + 0x388))
                                       (pSVar5,*(undefined8 *)((long)pSVar5->klass + 0x390)),
             __this_00 == (System_Collections_Generic_Dictionary_string__float__o *)0x0)) goto label_05c25e7d;
          System_Collections_Generic_Dictionary_object__float___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)pSVar6
                     ,fVar8,(MethodInfo_4AB5470 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
          bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_158,(MethodInfo *)0x0);
        } while (bVar4);
      }
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"TurnSpeed",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"TurnSpeed",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c25e7d;
      fVar8 = (*(pSVar5->klass->vtable)._37_get_AsFloat.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._37_get_AsFloat.method);
      (__this->fields).TurnSpeed = fVar8;
      pCVar1 = (__this->fields).BaseTitanAnimations;
      if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c25e7d;
      pSVar6 = (*(pCVar1->klass->vtable)._19_get_Turn90L.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._19_get_Turn90L.method);
      bVar4 = System_String__op_Inequality(pSVar6,"",(MethodInfo *)0x0);
      if (bVar4) {
        pCVar1 = (__this->fields).BaseTitanAnimations;
        if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c25e7d;
        pCVar2 = (__this->fields).Animation;
        pSVar6 = (*(pCVar1->klass->vtable)._19_get_Turn90L.methodPtr)
                           (pCVar1,(pCVar1->klass->vtable)._19_get_Turn90L.method);
        pCVar1 = (__this->fields).BaseTitanAnimations;
        if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c25e7d;
        pCVar3 = (__this->fields).Animation;
        pSVar7 = (*(pCVar1->klass->vtable)._19_get_Turn90L.methodPtr)
                           (pCVar1,(pCVar1->klass->vtable)._19_get_Turn90L.method);
        if ((pCVar3 == (Characters_AnimationHandler_o *)0x0) ||
           (fVar8 = Characters_AnimationHandler__GetSpeed(pCVar3,pSVar7,(MethodInfo *)0x0),
           pCVar2 == (Characters_AnimationHandler_o *)0x0)) goto label_05c25e7d;
        Characters_AnimationHandler__SetSpeed
                  (pCVar2,pSVar6,fVar8 * (__this->fields).TurnSpeed,(MethodInfo *)0x0);
      }
      pCVar1 = (__this->fields).BaseTitanAnimations;
      if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c25e7d;
      pSVar6 = (*(pCVar1->klass->vtable)._20_get_Turn90R.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._20_get_Turn90R.method);
      bVar4 = System_String__op_Inequality(pSVar6,"",(MethodInfo *)0x0);
      if (bVar4) {
        pCVar1 = (__this->fields).BaseTitanAnimations;
        if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c25e7d;
        pCVar2 = (__this->fields).Animation;
        pSVar6 = (*(pCVar1->klass->vtable)._20_get_Turn90R.methodPtr)
                           (pCVar1,(pCVar1->klass->vtable)._20_get_Turn90R.method);
        pCVar1 = (__this->fields).BaseTitanAnimations;
        if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c25e7d;
        pCVar3 = (__this->fields).Animation;
        pSVar7 = (*(pCVar1->klass->vtable)._20_get_Turn90R.methodPtr)
                           (pCVar1,(pCVar1->klass->vtable)._20_get_Turn90R.method);
        if ((pCVar3 == (Characters_AnimationHandler_o *)0x0) ||
           (fVar8 = Characters_AnimationHandler__GetSpeed(pCVar3,pSVar7,(MethodInfo *)0x0),
           pCVar2 == (Characters_AnimationHandler_o *)0x0)) goto label_05c25e7d;
        Characters_AnimationHandler__SetSpeed
                  (pCVar2,pSVar6,fVar8 * (__this->fields).TurnSpeed,(MethodInfo *)0x0);
      }
    }
    bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"SizeScaledTurnSpeed",(data->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar5 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                         (data,"SizeScaledTurnSpeed",(data->klass->vtable)._7_get_Item.method);
      if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05c25e7d:
        ThrowNullReferenceException();
      }
      bVar4 = (*(pSVar5->klass->vtable)._39_get_AsBool.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._39_get_AsBool.method);
      (__this->fields).SizeScaledTurnSpeed = bVar4;
    }
  }
  return;
}


// Characters.BaseTitan$$CreateDetection
// il2cpp: void Characters_BaseTitan__CreateDetection (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25e90

void Characters_BaseTitan__CreateDetection(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_TitanDetection_o *__this_00;
  
  if (Il2CppMethodInitialized_0754776c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDetection);
    Il2CppMethodInitialized_0754776c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanDetection);
  Characters_TitanDetection___ctor(__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Detection = (Characters_BaseDetection_o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Detection);
  return;
}


// Characters.BaseTitan$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_BaseTitan__GetRootMotionAnimations (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25f00

System_Collections_Generic_Dictionary_string__float__o *
Characters_BaseTitan__GetRootMotionAnimations(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_0754776d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_0754776d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  return __this_00;
}


// Characters.BaseTitan$$IsGrabAttack
// il2cpp: bool Characters_BaseTitan__IsGrabAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25f60

bool Characters_BaseTitan__IsGrabAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.BaseTitan$$IsComboAttack
// il2cpp: bool Characters_BaseTitan__IsComboAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25f70

bool Characters_BaseTitan__IsComboAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.BaseTitan$$get_MeleeHitType
// il2cpp: System_String_o* Characters_BaseTitan__get_MeleeHitType (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25f80

System_String_o * Characters_BaseTitan__get_MeleeHitType(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754776e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_0754776e = '\x01';
  }
  return "Titan";
}


// Characters.BaseTitan$$get_BasicAttacksStunOnly
// il2cpp: bool Characters_BaseTitan__get_BasicAttacksStunOnly (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25fb0

bool Characters_BaseTitan__get_BasicAttacksStunOnly(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.BaseTitan$$get_TreatAsSmall
// il2cpp: bool Characters_BaseTitan__get_TreatAsSmall (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25fc0

bool Characters_BaseTitan__get_TreatAsSmall(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.BaseTitan$$get_WorldSize
// il2cpp: float Characters_BaseTitan__get_WorldSize (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c25fd0

float Characters_BaseTitan__get_WorldSize(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).Size;
  fVar2 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                    (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
  return fVar2 * fVar1;
}


// Characters.BaseTitan$$IsKickAttack
// il2cpp: bool Characters_BaseTitan__IsKickAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c26000

bool Characters_BaseTitan__IsKickAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754776f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    Il2CppMethodInitialized_0754776f = '\x01';
  }
  bVar1 = System_String__op_Equality((__this->fields)._currentAttack,"AttackKick",(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseTitan$$IsFinisherHit
// il2cpp: bool Characters_BaseTitan__IsFinisherHit (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c26040

bool Characters_BaseTitan__IsFinisherHit(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754776f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    Il2CppMethodInitialized_0754776f = '\x01';
  }
  bVar1 = System_String__op_Equality((__this->fields)._currentAttack,"AttackKick",(MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    bVar2 = (*(__this->klass->vtable)._140_IsComboAttack.methodPtr)
                      (__this,(__this->klass->vtable)._140_IsComboAttack.method);
    if (!bVar2) {
      return false;
    }
    bVar2 = 2 < (__this->fields)._currentAttackStage;
  }
  return bVar2;
}


// Characters.BaseTitan$$GetFinisherReaction
// il2cpp: System_String_o* Characters_BaseTitan__GetFinisherReaction (Characters_BaseTitan_o* __this, bool kick, bool smallVictim, bool headHit, const MethodInfo* method);
// 0x5c260b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c260fb: jmp 0x5c2610f

System_String_o *
Characters_BaseTitan__GetFinisherReaction
          (Characters_BaseTitan_o *__this,bool kick,bool smallVictim,bool headHit,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if (Il2CppMethodInitialized_07547770 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Finisher");
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    Il2CppMethodInitialized_07547770 = '\x01';
  }
  if (smallVictim) {
    ppSVar1 = &"Knockback";
  }
  else {
    ppSVar1 = &"Stun";
  }
  if (!kick) {
    ppSVar1 = &"Finisher";
  }
  return *ppSVar1;
}


// Characters.BaseTitan$$IsHeadHit
// il2cpp: bool Characters_BaseTitan__IsHeadHit (Characters_BaseTitan_o* victim, Characters_BaseHitbox_o* hitbox, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x5c26120

bool Characters_BaseTitan__IsHeadHit
               (Characters_BaseTitan_o *victim,Characters_BaseHitbox_o *hitbox,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  UnityEngine_Object_o *y;
  UnityEngine_Collider_o *__this;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Bounds_o local_38;
  
  if (Il2CppMethodInitialized_07547771 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547771 = '\x01';
  }
  if ((victim != (Characters_BaseTitan_o *)0x0) &&
     (pCVar1 = (victim->fields).BaseTitanCache, pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0)) {
    y = (UnityEngine_Object_o *)(pCVar1->fields).NapeHurtbox;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)collider,y,(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    if (collider != (UnityEngine_Collider_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
      pCVar1 = (victim->fields).BaseTitanCache;
      if ((pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) &&
         (pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        bVar2 = UnityEngine_Transform__IsChildOf(pUVar3,(pCVar1->fields).Head,(MethodInfo *)0x0);
        if (bVar2) {
          return true;
        }
        if ((hitbox != (Characters_BaseHitbox_o *)0x0) &&
           (__this = (hitbox->fields)._collider, __this != (UnityEngine_Collider_o *)0x0)) {
          UnityEngine_Collider__get_bounds(&local_38,__this,(MethodInfo *)0x0);
          pCVar1 = (victim->fields).BaseTitanCache;
          if ((pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) &&
             (pUVar3 = (pCVar1->fields).Head, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UVar4 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
            return UVar4.fields.y <= local_38.fields.m_Center.fields.y + local_38.fields.m_Extents.fields.y;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$HasMeleeReaction
// il2cpp: bool Characters_BaseTitan__HasMeleeReaction (System_String_o* type, System_String_o* reaction, const MethodInfo* method);
// 0x5c26240

bool Characters_BaseTitan__HasMeleeReaction
               (System_String_o *type,System_String_o *reaction,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547772 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_07547772 = '\x01';
  }
  pSVar2 = System_String__Concat_52f0320("Titan",reaction,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(type,pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  pSVar2 = System_String__Concat_52f0320("Shifter",reaction,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(type,pSVar2,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseTitan$$IsComboStunType
// il2cpp: bool Characters_BaseTitan__IsComboStunType (System_String_o* type, const MethodInfo* method);
// 0x5c262d0

bool Characters_BaseTitan__IsComboStunType(System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547773 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ComboStun");
    Il2CppMethodInitialized_07547773 = '\x01';
  }
  pSVar2 = "ComboStun";
  if (Il2CppMethodInitialized_07547772 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_07547772 = '\x01';
  }
  b = System_String__Concat_52f0320("Titan",pSVar2,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(type,b,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  pSVar2 = System_String__Concat_52f0320("Shifter",pSVar2,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(type,pSVar2,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseTitan$$IsDecapitateType
// il2cpp: bool Characters_BaseTitan__IsDecapitateType (System_String_o* type, const MethodInfo* method);
// 0x5c26380

bool Characters_BaseTitan__IsDecapitateType(System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547774 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Finisher");
    Il2CppMethodInitialized_07547774 = '\x01';
  }
  pSVar2 = "Finisher";
  if (Il2CppMethodInitialized_07547772 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_07547772 = '\x01';
  }
  b = System_String__Concat_52f0320("Titan",pSVar2,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(type,b,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  pSVar2 = System_String__Concat_52f0320("Shifter",pSVar2,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(type,pSVar2,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseTitan$$IsKnockbackType
// il2cpp: bool Characters_BaseTitan__IsKnockbackType (System_String_o* type, const MethodInfo* method);
// 0x5c26430

bool Characters_BaseTitan__IsKnockbackType(System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547775 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Knockback");
    Il2CppMethodInitialized_07547775 = '\x01';
  }
  pSVar2 = "Knockback";
  if (Il2CppMethodInitialized_07547772 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_07547772 = '\x01';
  }
  b = System_String__Concat_52f0320("Titan",pSVar2,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(type,b,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  pSVar2 = System_String__Concat_52f0320("Shifter",pSVar2,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(type,pSVar2,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BaseTitan$$IsMeleeHitType
// il2cpp: bool Characters_BaseTitan__IsMeleeHitType (System_String_o* type, const MethodInfo* method);
// 0x5c264e0

bool Characters_BaseTitan__IsMeleeHitType(System_String_o *type,MethodInfo *method)

{
  System_String_o *str1;
  bool bVar1;
  System_String_o *b;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547776 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    Il2CppMethodInitialized_07547776 = '\x01';
  }
  str1 = "Stun";
  if (Il2CppMethodInitialized_07547772 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_07547772 = '\x01';
  }
  b = System_String__Concat_52f0320("Titan",str1,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(type,b,(MethodInfo *)0x0);
  if (!bVar1) {
    method_00 = (MethodInfo *)System_String__Concat_52f0320("Shifter",str1,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(type,(System_String_o *)method_00,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = Characters_BaseTitan__IsComboStunType(type,method_00);
      if (!bVar1) {
        bVar1 = Characters_BaseTitan__IsDecapitateType(type,method_00);
        if (!bVar1) {
          bVar1 = Characters_BaseTitan__IsKnockbackType(type,method_00);
          return bVar1;
        }
      }
    }
  }
  return true;
}


// Characters.BaseTitan$$GetMeleeStunTime
// il2cpp: float Characters_BaseTitan__GetMeleeStunTime (Characters_BaseTitan_o* __this, System_String_o* type, const MethodInfo* method);
// 0x5c265b0

float Characters_BaseTitan__GetMeleeStunTime
                (Characters_BaseTitan_o *__this,System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  _func_21 *vtableDispatch;
  MethodInfo *pMVar2;
  float fVar3;
  
  pMVar2 = (MethodInfo *)type;
  bVar1 = Characters_BaseTitan__IsComboStunType(type,(MethodInfo *)type);
  if (bVar1) {
    vtableDispatch = (__this->klass->vtable)._124_get_ComboStunTime.methodPtr;
    pMVar2 = (__this->klass->vtable)._124_get_ComboStunTime.method;
  }
  else {
    bVar1 = Characters_BaseTitan__IsKnockbackType(type,pMVar2);
    if (!bVar1) {
      return (__this->fields).StunTime;
    }
    vtableDispatch = (__this->klass->vtable)._129_get_PushTime.methodPtr;
    pMVar2 = (__this->klass->vtable)._129_get_PushTime.method;
  }
  fVar3 = (*vtableDispatch)(__this,pMVar2);
  return fVar3;
}


// Characters.BaseTitan$$GetCurrentSpeed
// il2cpp: float Characters_BaseTitan__GetCurrentSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c26620

float Characters_BaseTitan__GetCurrentSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  ulong uVar1;
  
  uVar1 = (ulong)(__this->fields).IsWalk;
  return (&(__this->fields).RunSpeedPerLevel)[uVar1 != 0] * (__this->fields).Size +
         (&(__this->fields).RunSpeedBase)[uVar1];
}


// Characters.BaseTitan$$get_IsMoving
// il2cpp: bool Characters_BaseTitan__get_IsMoving (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c26650

bool Characters_BaseTitan__get_IsMoving(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return (__this->fields).State - 1U < 3;
}


// Characters.BaseTitan$$CanAction
// il2cpp: bool Characters_BaseTitan__CanAction (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c26660

bool Characters_BaseTitan__CanAction(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  
  if (((__this->fields).EnableAI == false) || ((__this->fields).Dead != false)) {
    return false;
  }
  iVar1 = (__this->fields).State;
  if ((iVar1 != 0) || (bVar2 = true, 0.0 < (__this->fields)._stateTimeLeft)) {
    bVar2 = iVar1 - 1U < 3;
  }
  return bVar2;
}


// Characters.BaseTitan$$CanEmote
// il2cpp: bool Characters_BaseTitan__CanEmote (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c266a0

bool Characters_BaseTitan__CanEmote(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields).AI == false) {
    bVar1 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                      (__this,(__this->klass->vtable)._145_CanAction.method);
    return bVar1;
  }
  if (((__this->fields).EnableAI == false) || ((__this->fields).Dead != false)) {
    return false;
  }
  return (__this->fields).State != 0xf;
}


// Characters.BaseTitan$$get_IsSitting
// il2cpp: bool Characters_BaseTitan__get_IsSitting (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c266e0

bool Characters_BaseTitan__get_IsSitting(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  iVar1 = (__this->fields).State;
  if ((iVar1 - 0x11U < 4) || (iVar1 == 0x16)) {
    return true;
  }
  if (iVar1 != 0x15) {
    return false;
  }
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar2 = Characters_AnimationHandler__GetCurrentNormalizedTime(__this_00,(MethodInfo *)0x0);
  return fVar2 < 0.5;
}


// Characters.BaseTitan$$CanStun
// il2cpp: bool Characters_BaseTitan__CanStun (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c26730

bool Characters_BaseTitan__CanStun(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  if ((__this->fields).State == 0xd) {
    return false;
  }
  if ((__this->fields).Dead == false) {
    return (__this->fields).EnableAI != false;
  }
  return false;
}


// Characters.BaseTitan$$Jump
// il2cpp: void Characters_BaseTitan__Jump (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x5c26750

void Characters_BaseTitan__Jump
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool bVar3;
  System_String_o *pSVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547777 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547777 = '\x01';
  }
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar4 = (*(pCVar1->klass->vtable)._8_get_Jump.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._8_get_Jump.method);
    bVar3 = System_String__op_Equality(pSVar4,"",(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    (__this->fields)._jumpDirection.fields.x = direction.fields.x;
    (__this->fields)._jumpDirection.fields.y = direction.fields.y;
    (__this->fields)._jumpDirection.fields.z = direction.fields.z;
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar4 = (*(pCVar1->klass->vtable)._8_get_Jump.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._8_get_Jump.method);
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar5 = Characters_AnimationHandler__GetLength(pCVar2,pSVar4,(MethodInfo *)0x0);
        (__this->fields)._needFreshCore = true;
        pCVar2 = (__this->fields).Animation;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
          (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar4,0.1,0.0,(MethodInfo *)0x0);
          (__this->fields).State = 4;
          (__this->fields)._currentStateAnimation = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
          (__this->fields)._stateTimeLeft = fVar5;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$StartJump
// il2cpp: void Characters_BaseTitan__StartJump (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c26910

void Characters_BaseTitan__StartJump(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar7;
  float fVar8;
  float extraout_XMM0_Db;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_Fields local_30;
  float fStack_24;
  undefined8 uStack_20;
  
  Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,false,0.0,(MethodInfo *)0x0);
  (__this->fields).State = 5;
  (__this->fields)._stateTimeLeft = 0.2;
  pUVar6 = (__this->fields).Cache;
  if (pUVar6 == (Utility_BaseComponentCache_o *)0x0) goto label_05c26a97;
  __this_00 = (pUVar6->fields).Rigidbody;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_30.x = 0.0;
    local_30.y = 0.0;
  }
  else {
    local_30.x = 0.0;
    local_30.y = 0.0;
  }
  local_30.x = 0.0;
  local_30.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_30.x = 0.0;
    local_30.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fVar8 = (__this->fields)._jumpDirection.fields.x;
  uVar3._0_4_ = (__this->fields)._jumpDirection.fields.y;
  uVar3._4_4_ = (__this->fields)._jumpDirection.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    uStack_20._0_4_ = 0.0;
    uStack_20._4_4_ = 0.0;
    unique0x1000042d = uVar3;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar3._0_4_ = local_30.z;
    uVar3._4_4_ = fStack_24;
  }
  uVar3._4_4_ = uVar3._4_4_ * uVar3._4_4_;
  fVar8 = uVar3._4_4_ + fVar8 * fVar8 + (float)uVar3 * (float)uVar3;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
    uVar3._4_4_ = extraout_XMM0_Db;
    if (fVar8 <= 1e-05) goto label_05c269d7;
label_05c269fd:
    uVar1 = (__this->fields)._jumpDirection.fields.x;
    uVar4 = (__this->fields)._jumpDirection.fields.y;
    auVar9._4_4_ = uVar4;
    auVar9._0_4_ = uVar1;
    auVar9._8_8_ = 0;
    auVar10._4_4_ = fVar8;
    auVar10._0_4_ = fVar8;
    auVar10._8_4_ = uVar3._4_4_;
    auVar10._12_4_ = uVar3._4_4_;
    auVar10 = divps(auVar9,auVar10);
    local_30.x = auVar10._0_4_;
    local_30.y = auVar10._4_4_;
    fVar8 = (__this->fields)._jumpDirection.fields.z / fVar8;
    pUVar7 = (UnityEngine_Vector3_StaticFields *)&local_30;
  }
  else {
    fVar8 = SQRT(fVar8);
    if (1e-05 < fVar8) goto label_05c269fd;
label_05c269d7:
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar8 = (pUVar7->zeroVector).fields.z;
  }
  if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
    uVar2 = (pUVar7->zeroVector).fields.x;
    uVar5 = (pUVar7->zeroVector).fields.y;
    uVar3._0_4_ = (__this->fields).JumpForce;
    force.fields.z = fVar8 * (float)uVar3;
    force.fields.x = (float)uVar3 * (float)uVar2;
    force.fields.y = (float)uVar3 * (float)uVar5;
    UnityEngine_Rigidbody__AddForce(__this_00,force,2,(MethodInfo *)0x0);
    return;
  }
label_05c26a97:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Attack
// il2cpp: void Characters_BaseTitan__Attack (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x5c26aa0

void Characters_BaseTitan__Attack(Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  (*(__this->klass->vtable)._152_ResetAttackState.methodPtr)
            (__this,attack,(__this->klass->vtable)._152_ResetAttackState.method);
  Characters_BaseTitan__StateAttack(__this,(__this->fields)._currentAttackAnimation,0.1,true,in_RCX);
  return;
}


// Characters.BaseTitan$$CanAttack
// il2cpp: bool Characters_BaseTitan__CanAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c26bc0

bool Characters_BaseTitan__CanAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                    (__this,(__this->klass->vtable)._145_CanAction.method);
  return bVar1;
}


// Characters.BaseTitan$$CanUseAttack
// il2cpp: bool Characters_BaseTitan__CanUseAttack (Characters_BaseTitan_o* __this, Characters_TitanAttackInfo_o* attack, const MethodInfo* method);
// 0x5c26be0

bool Characters_BaseTitan__CanUseAttack
               (Characters_BaseTitan_o *__this,Characters_TitanAttackInfo_o *attack,MethodInfo *method)

{
  if (attack == (Characters_TitanAttackInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((attack->fields).LeftArm != false) {
    if ((__this->fields).LeftArmDisabled != false) {
      return false;
    }
    if ((__this->fields).LeftHandDisabled != false) {
      return false;
    }
  }
  if ((attack->fields).RightArm == false) {
    return true;
  }
  if ((__this->fields).RightArmDisabled == false) {
    return (__this->fields).RightHandDisabled == false;
  }
  return false;
}


// Characters.BaseTitan$$ResetAttackState
// il2cpp: void Characters_BaseTitan__ResetAttackState (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x5c26c30

void Characters_BaseTitan__ResetAttackState
               (Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Rigidbody_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  float fVar3;
  
  if (Il2CppMethodInitialized_07547778 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    Il2CppMethodInitialized_07547778 = '\x01';
  }
  Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,false,0.0,(MethodInfo *)0x0);
  if ((__this->fields).AI != false) {
    pUVar1 = (__this->fields).Cache;
    if (pUVar1 == (Utility_BaseComponentCache_o *)0x0) goto label_05c26d39;
    __this_00 = (pUVar1->fields).Rigidbody;
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_05c26d39;
    UnityEngine_Rigidbody__set_linearVelocity
              (__this_00,
               (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
  }
  (__this->fields)._currentAttack = attack;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentAttack);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AttackAnimations;
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_01,(Il2CppObject *)attack,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    (__this->fields)._currentAttackAnimation = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentAttackAnimation);
    fVar3 = Characters_BaseTitan__GetAttackSpeed(__this,attack,method_00);
    (__this->fields)._currentAttackSpeed = fVar3;
    (__this->fields)._currentAttackStage = 0;
    return;
  }
label_05c26d39:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetAttackSpeed
// il2cpp: float Characters_BaseTitan__GetAttackSpeed (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x5c26d40

float Characters_BaseTitan__GetAttackSpeed
                (Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *pSVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547779 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    Il2CppMethodInitialized_07547779 = '\x01';
  }
  pSVar1 = (__this->fields).AttackSpeeds;
  if (pSVar1 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
label_05c26deb:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)attack,
                     (MethodInfo_4AB5680 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
  if (bVar2) {
    pSVar1 = (__this->fields).AttackSpeeds;
    if (pSVar1 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_05c26deb;
    fVar4 = System_Collections_Generic_Dictionary_object__float___get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)attack,
                       (MethodInfo_4AB53E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
  }
  else {
    fVar4 = 1.0;
  }
  fVar4 = fVar4 * (__this->fields).AttackSpeedMultiplier;
  uVar3 = -(uint)(fVar4 <= 0.0);
  return (float)(uVar3 & 0x3f800000 | ~uVar3 & (uint)fVar4);
}


// Characters.BaseTitan$$Kick
// il2cpp: void Characters_BaseTitan__Kick (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c26df0

void Characters_BaseTitan__Kick(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$Stun
// il2cpp: void Characters_BaseTitan__Stun (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c26e00

void Characters_BaseTitan__Stun(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._155_Stun.methodPtr)
            (__this,(__this->fields).StunTime,false,(__this->klass->vtable)._155_Stun.method);
  return;
}


// Characters.BaseTitan$$Stun
// il2cpp: void Characters_BaseTitan__Stun (Characters_BaseTitan_o* __this, float time, bool refresh, const MethodInfo* method);
// 0x5c26e20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c26f26: jmp 0x5c26f10

void Characters_BaseTitan__Stun_5b26e20
               (Characters_BaseTitan_o *__this,float time,bool refresh,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  System_String_o *animation;
  
  bVar2 = (*(__this->klass->vtable)._147_CanStun.methodPtr)
                    (__this,(__this->klass->vtable)._147_CanStun.method);
  if ((!bVar2) &&
     ((((!refresh || ((__this->fields).State != 0xd)) || ((__this->fields).Dead != false)) ||
      ((__this->fields).EnableAI == false)))) {
    return;
  }
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._11_get_Stun.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._11_get_Stun.method);
    (__this->fields)._needFreshCore = true;
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
      (__this->fields).State = 0xd;
      (__this->fields)._currentStateAnimation = animation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
      (__this->fields)._stateTimeLeft = time;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$OnHitTitan
// il2cpp: void Characters_BaseTitan__OnHitTitan (Characters_BaseTitan_o* __this, Characters_BaseHitbox_o* hitbox, Characters_BaseTitan_o* victim, UnityEngine_Collider_o* collider, int32_t damage, bool firstHit, const MethodInfo* method);
// 0x5c26f30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c27393: mov eax, dword ptr [rsp + 0xc]
// asm:   0x5c27397: mov r12d, eax

void Characters_BaseTitan__OnHitTitan
               (Characters_BaseTitan_o *__this,Characters_BaseHitbox_o *hitbox,Characters_BaseTitan_o *victim,
               UnityEngine_Collider_o *collider,int32_t damage,bool firstHit,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  UI_InGameMenu_o *__this_00;
  UnityEngine_Quaternion_Fields rotation;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  UnityEngine_Transform_o *__this_01;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  MethodInfo *method_00;
  int32_t iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o position;
  
  if (Il2CppMethodInitialized_0754777a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ComboStun");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"Graze");
    Il2CppMethodInitialized_0754777a = '\x01';
  }
  if (!firstHit) {
    return;
  }
  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
  }
  if (hitbox == (Characters_BaseHitbox_o *)0x0) goto label_05c273ff;
  pSVar7 = TypeInfo_Effects_EffectPrefabs->static_fields->PunchHit;
  __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_05c273ff;
  position = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
  }
  rotation = *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields;
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
  }
  uVar9 = 0;
  Effects_EffectSpawner__Spawn
            (pSVar7,position,(UnityEngine_Quaternion_o)rotation,1.0,true,(System_Object_array *)0x0,
             (MethodInfo *)0x0);
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  Characters_BaseCharacter__PlaySound
            ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Hit,
             (MethodInfo *)0x0);
  pSVar7 = "Stun";
  if (victim == (Characters_BaseTitan_o *)0x0) goto label_05c273ff;
  if ((victim->fields).Dead != false) {
    return;
  }
  bVar4 = (*(__this->klass->vtable)._140_IsComboAttack.methodPtr)
                    (__this,(__this->klass->vtable)._140_IsComboAttack.method);
  if ((!bVar4) || (2 < (__this->fields)._currentAttackStage)) {
    if (Il2CppMethodInitialized_0754776f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
      Il2CppMethodInitialized_0754776f = '\x01';
    }
    bVar4 = System_String__op_Equality
                      ((__this->fields)._currentAttack,"AttackKick",(MethodInfo *)0x0);
    if ((bVar4) ||
       ((bVar4 = (*(__this->klass->vtable)._140_IsComboAttack.methodPtr)
                           (__this,(__this->klass->vtable)._140_IsComboAttack.method), bVar4 &&
        (2 < (__this->fields)._currentAttackStage)))) {
      bVar4 = (*(victim->klass->vtable)._143_get_TreatAsSmall.methodPtr)
                        (victim,(victim->klass->vtable)._143_get_TreatAsSmall.method);
      method_00 = (MethodInfo *)CONCAT71((int7)((ulong)uVar9 >> 8),1);
      if (!bVar4) {
        fVar1 = (victim->fields).Size;
        fVar11 = (*(victim->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                           (victim,(victim->klass->vtable)._134_get_SizeMultiplier.method);
        fVar2 = (__this->fields).Size;
        fVar12 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                           (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
        fVar13 = (*(__this->klass->vtable)._125_get_LaunchSizeRatio.methodPtr)
                           (__this,(__this->klass->vtable)._125_get_LaunchSizeRatio.method);
        method_00 = (MethodInfo *)
                    CONCAT71((int7)((ulong)method_00 >> 8),fVar11 * fVar1 <= fVar13 * fVar12 * fVar2);
      }
      bVar4 = SUB81(method_00,0);
      if (Il2CppMethodInitialized_0754776f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
        Il2CppMethodInitialized_0754776f = '\x01';
      }
      bVar5 = System_String__op_Equality
                        ((__this->fields)._currentAttack,"AttackKick",(MethodInfo *)0x0);
      bVar6 = Characters_BaseTitan__IsHeadHit(victim,hitbox,collider,method_00);
      pSVar7 = (*(__this->klass->vtable)._144_GetFinisherReaction.methodPtr)
                         (__this,bVar5,bVar4,bVar6,(__this->klass->vtable)._144_GetFinisherReaction.method);
      bVar4 = System_String__op_Equality(pSVar7,"Graze",(MethodInfo *)0x0);
      if (!bVar4) goto label_05c272ef;
      pSVar7 = "Stun";
      iVar10 = 0;
    }
    else {
      bVar4 = (*(__this->klass->vtable)._142_get_BasicAttacksStunOnly.methodPtr)
                        (__this,(__this->klass->vtable)._142_get_BasicAttacksStunOnly.method);
      iVar10 = 0;
      if (!bVar4) {
label_05c272ef:
        iVar10 = damage;
        if ((0 < damage) &&
           (bVar4 = Characters_BaseCharacter__IsMainCharacter
                              ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0), bVar4)) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (__this_00 == (UI_InGameMenu_o *)0x0) goto label_05c273ff;
          bVar3 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((__this_00->klass->_2).typeHierarchyDepth < bVar3) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)
             ) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          UI_InGameMenu__ShowKillScore(__this_00,damage,false,(MethodInfo *)0x0);
        }
      }
    }
  }
  else {
    iVar10 = 0;
    pSVar7 = "ComboStun";
  }
  pSVar8 = (*(__this->klass->vtable)._141_get_MeleeHitType.methodPtr)
                     (__this,(__this->klass->vtable)._141_get_MeleeHitType.method);
  pSVar7 = System_String__Concat_52f0320(pSVar8,pSVar7,(MethodInfo *)0x0);
  if (collider != (UnityEngine_Collider_o *)0x0) {
    pSVar8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
    (*(victim->klass->vtable)._95_GetHit.methodPtr)
              (victim,(Characters_BaseCharacter_o *)__this,iVar10,pSVar7,pSVar8,
               (victim->klass->vtable)._95_GetHit.method);
    return;
  }
label_05c273ff:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetMeleeHit
// il2cpp: void Characters_BaseTitan__GetMeleeHit (Characters_BaseTitan_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x5c27410
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c274b0: jmp 0x5c27514
// asm:   0x5c275b3: jmp 0x5c275ec

void Characters_BaseTitan__GetMeleeHit
               (Characters_BaseTitan_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  uint32_t uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  Characters_BaseCharacter_o *x;
  undefined4 in_register_00000034;
  MethodInfo *pMVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o velocity;
  undefined8 local_48;
  
  pMVar6 = (MethodInfo *)CONCAT44(in_register_00000034,viewId);
  if (Il2CppMethodInitialized_0754777b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754777b = '\x01';
  }
  bVar3 = Characters_BaseTitan__IsDecapitateType(type,pMVar6);
  bVar4 = Characters_BaseTitan__IsKnockbackType(type,pMVar6);
  (__this->fields)._launched = bVar4;
  (__this->fields)._decapitated = bVar3;
  Characters_BaseCharacter__GetHitRPC
            ((Characters_BaseCharacter_o *)__this,viewId,name,damage,type,collider,(MethodInfo *)0x0);
  if ((__this->fields).Dead == false) {
    (__this->fields)._launched = false;
    (__this->fields)._decapitated = false;
    if (!bVar3 && !bVar4) {
      return;
    }
  }
  else if (!bVar3 && !bVar4) {
    return;
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  x = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    if (((x == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar2 = (x->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
       (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UVar14 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
    fVar9 = UVar14.fields.z;
    fVar8 = UVar14.fields.x;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    fVar7 = fVar9 * fVar9 + fVar8 * fVar8 + 0.0;
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    uVar10 = 0;
    fVar13 = 0.0;
    if (1e-05 < fVar7) {
      auVar11._4_4_ = 0;
      auVar11._0_4_ = fVar8;
      auVar11._8_4_ = extraout_XMM0_Dc;
      auVar11._12_4_ = extraout_XMM0_Dd;
      fVar13 = fVar9 / fVar7;
      auVar12._4_4_ = fVar7;
      auVar12._0_4_ = fVar7;
      auVar12._8_4_ = fVar7;
      auVar12._12_4_ = fVar7;
      auVar12 = divps(auVar11,auVar12);
      uVar10 = auVar12._0_8_;
    }
    if ((__this->fields).Dead != false) {
      UVar14.fields.z = fVar13;
      UVar14.fields.x = (float)(int)uVar10;
      UVar14.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
      (*(__this->klass->vtable)._156_OnFinisherKill.methodPtr)
                (__this,UVar14,bVar4,bVar3,(__this->klass->vtable)._156_OnFinisherKill.method);
      return;
    }
    if (bVar4) {
      fVar8 = (*(__this->klass->vtable)._128_get_PushForce.methodPtr)
                        (__this,(__this->klass->vtable)._128_get_PushForce.method);
      fVar8 = fVar8 / (__this->fields).Size;
      velocity.fields.z = fVar13 * fVar8;
      local_48._0_4_ = (float)uVar10;
      local_48._4_4_ = (float)((ulong)uVar10 >> 0x20);
      pMVar6 = (__this->klass->vtable)._129_get_PushTime.method;
      fVar9 = (*(__this->klass->vtable)._129_get_PushTime.methodPtr)(__this,pMVar6);
      velocity.fields.x = (float)local_48 * fVar8;
      velocity.fields.y = local_48._4_4_ * fVar8;
      Characters_BaseTitan__SetLaunchVelocity(__this,velocity,fVar9,pMVar6);
      return;
    }
  }
  return;
}


// Characters.BaseTitan$$OnFinisherKill
// il2cpp: void Characters_BaseTitan__OnFinisherKill (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o direction, bool launch, bool decapitate, const MethodInfo* method);
// 0x5c27780

void Characters_BaseTitan__OnFinisherKill
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o direction,bool launch,bool decapitate,
               MethodInfo *method)

{
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  float fVar1;
  float time;
  UnityEngine_Vector3_o velocity;
  undefined8 uStack_18;
  
  if ((int)CONCAT71(in_register_00000031,launch) == 0) {
    return;
  }
  fVar1 = (*(__this->klass->vtable)._126_get_LaunchForce.methodPtr)
                    (__this,(__this->klass->vtable)._126_get_LaunchForce.method);
  fVar1 = fVar1 / (__this->fields).Size;
  velocity.fields.z = direction.fields.z * fVar1;
  uStack_18._0_4_ = direction.fields.x;
  uStack_18._4_4_ = direction.fields.y;
  method_00 = (__this->klass->vtable)._127_get_LaunchTime.method;
  time = (*(__this->klass->vtable)._127_get_LaunchTime.methodPtr)(__this,method_00);
  velocity.fields.x = fVar1 * (float)uStack_18;
  velocity.fields.y = fVar1 * uStack_18._4_4_;
  Characters_BaseTitan__SetLaunchVelocity(__this,velocity,time,method_00);
  return;
}


// Characters.BaseTitan$$Launch
// il2cpp: void Characters_BaseTitan__Launch (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x5c27800

void Characters_BaseTitan__Launch
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  float time;
  UnityEngine_Vector3_o velocity;
  undefined8 local_18;
  
  fVar1 = (*(__this->klass->vtable)._126_get_LaunchForce.methodPtr)
                    (__this,(__this->klass->vtable)._126_get_LaunchForce.method);
  fVar1 = fVar1 / (__this->fields).Size;
  velocity.fields.z = direction.fields.z * fVar1;
  local_18._0_4_ = direction.fields.x;
  local_18._4_4_ = direction.fields.y;
  method_00 = (__this->klass->vtable)._127_get_LaunchTime.method;
  time = (*(__this->klass->vtable)._127_get_LaunchTime.methodPtr)(__this,method_00);
  velocity.fields.x = fVar1 * (float)local_18;
  velocity.fields.y = fVar1 * local_18._4_4_;
  Characters_BaseTitan__SetLaunchVelocity(__this,velocity,time,method_00);
  return;
}


// Characters.BaseTitan$$Push
// il2cpp: void Characters_BaseTitan__Push (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x5c27700

void Characters_BaseTitan__Push
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  float time;
  UnityEngine_Vector3_o velocity;
  undefined8 local_18;
  
  fVar1 = (*(__this->klass->vtable)._128_get_PushForce.methodPtr)
                    (__this,(__this->klass->vtable)._128_get_PushForce.method);
  fVar1 = fVar1 / (__this->fields).Size;
  velocity.fields.z = direction.fields.z * fVar1;
  local_18._0_4_ = direction.fields.x;
  local_18._4_4_ = direction.fields.y;
  method_00 = (__this->klass->vtable)._129_get_PushTime.method;
  time = (*(__this->klass->vtable)._129_get_PushTime.methodPtr)(__this,method_00);
  velocity.fields.x = fVar1 * (float)local_18;
  velocity.fields.y = fVar1 * local_18._4_4_;
  Characters_BaseTitan__SetLaunchVelocity(__this,velocity,time,method_00);
  return;
}


// Characters.BaseTitan$$SetLaunchVelocity
// il2cpp: void Characters_BaseTitan__SetLaunchVelocity (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o velocity, float time, const MethodInfo* method);
// 0x5c27880

void Characters_BaseTitan__SetLaunchVelocity
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o velocity,float time,MethodInfo *method)

{
  ulong uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar5;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar6;
  undefined1 auVar7 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 local_30 [32];
  
  value_00.fields.z = velocity.fields.z;
  local_30._16_4_ = in_XMM0_Dc;
  local_30._8_8_ = velocity.fields._0_8_;
  local_30._20_4_ = in_XMM0_Dd;
  (__this->fields)._launchTimeLeft = time;
  Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,false,0.0,(MethodInfo *)0x0);
  (__this->fields).Grounded = false;
  fVar4 = value_00.fields.z * value_00.fields.z + (float)local_30._8_4_ * (float)local_30._8_4_ + 0.0;
  if (0.0 < fVar4) {
    pUVar2 = (__this->fields).Cache;
    if (pUVar2 == (Utility_BaseComponentCache_o *)0x0) goto label_05c27a4f;
    __this_00 = (pUVar2->fields).Transform;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      local_30._0_4_ = 0.0;
      local_30._4_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05c27984;
label_05c2790b:
      local_30._0_4_ = 0.0;
      local_30._4_4_ = 0.0;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05c27922;
label_05c279b3:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      if (fVar4 < 0.0) goto label_05c279c9;
label_05c2792e:
      uVar5 = 0;
      fVar4 = SQRT(fVar4);
      if (fVar4 <= 1e-05) goto label_05c2793f;
label_05c279db:
      fVar6 = value_00.fields.z / fVar4;
      auVar7._4_4_ = fVar4;
      auVar7._0_4_ = fVar4;
      auVar7._8_4_ = uVar5;
      auVar7._12_4_ = uVar5;
      auVar7 = divps(ZEXT416((uint)local_30._8_4_),auVar7);
      local_30._0_4_ = auVar7._0_4_;
      local_30._4_4_ = auVar7._4_4_;
      pUVar3 = (UnityEngine_Vector3_StaticFields *)local_30;
    }
    else {
      local_30._0_4_ = 0.0;
      local_30._4_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05c2790b;
label_05c27984:
      local_30._0_4_ = 0.0;
      local_30._4_4_ = 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05c279b3;
label_05c27922:
      if (0.0 <= fVar4) goto label_05c2792e;
label_05c279c9:
      fVar4 = sqrtf(fVar4);
      uVar5 = extraout_XMM0_Db;
      if (1e-05 < fVar4) goto label_05c279db;
label_05c2793f:
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar6 = (pUVar3->zeroVector).fields.z;
    }
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05c27a4f;
    uVar1._0_4_ = (pUVar3->zeroVector).fields.x;
    uVar1._4_4_ = (pUVar3->zeroVector).fields.y;
    value.fields.z = -fVar6;
    value.fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
    value.fields.y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
    UnityEngine_Transform__set_forward(__this_00,value,(MethodInfo *)0x0);
  }
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_01 = (pUVar2->fields).Rigidbody, __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
    value_00.fields.x = (float)local_30._8_4_;
    value_00.fields.y = (float)local_30._12_4_;
    UnityEngine_Rigidbody__set_linearVelocity(__this_01,value_00,(MethodInfo *)0x0);
    return;
  }
label_05c27a4f:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Run
// il2cpp: void Characters_BaseTitan__Run (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c27a60

void Characters_BaseTitan__Run(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  (__this->fields)._stepPhase = 0;
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._5_get_Run.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._5_get_Run.method);
    (__this->fields)._needFreshCore = true;
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.5,0.0,(MethodInfo *)0x0);
      (__this->fields).State = 1;
      (__this->fields)._currentStateAnimation = animation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
      (__this->fields)._stateTimeLeft = 0.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Sprint
// il2cpp: void Characters_BaseTitan__Sprint (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c27b30

void Characters_BaseTitan__Sprint(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  (__this->fields)._stepPhase = 0;
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._6_get_Sprint.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._6_get_Sprint.method);
    (__this->fields)._needFreshCore = true;
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.2,0.0,(MethodInfo *)0x0);
      (__this->fields).State = 2;
      (__this->fields)._currentStateAnimation = animation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
      (__this->fields)._stateTimeLeft = 0.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$WallClimb
// il2cpp: void Characters_BaseTitan__WallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c27c00

void Characters_BaseTitan__WallClimb(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  System_String_o *animation;
  
  bVar2 = (*(__this->klass->vtable)._122_get_CanWallClimb.methodPtr)
                    (__this,(__this->klass->vtable)._122_get_CanWallClimb.method);
  if ((bVar2) && ((__this->fields)._climbCooldownLeft <= 0.0)) {
    (__this->fields)._climbCooldownLeft = (__this->fields).ClimbCooldown;
    (__this->fields)._stepPhase = 0;
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      animation = (*(pCVar1->klass->vtable)._5_get_Run.methodPtr)
                            (pCVar1,(pCVar1->klass->vtable)._5_get_Run.method);
      (__this->fields)._needFreshCore = true;
      __this_00 = (__this->fields).Animation;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
        (__this->fields).State = 0x19;
        (__this->fields)._currentStateAnimation = animation;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
        (__this->fields)._stateTimeLeft = 0.0;
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Characters.BaseTitan$$Eat
// il2cpp: void Characters_BaseTitan__Eat (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c27d10

void Characters_BaseTitan__Eat(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$Walk
// il2cpp: void Characters_BaseTitan__Walk (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c27d20

void Characters_BaseTitan__Walk(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  (__this->fields)._stepPhase = 0;
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._7_get_Walk.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._7_get_Walk.method);
    (__this->fields)._needFreshCore = true;
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.5,0.0,(MethodInfo *)0x0);
      (__this->fields).State = 3;
      (__this->fields)._currentStateAnimation = animation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
      (__this->fields)._stateTimeLeft = 0.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Idle
// il2cpp: void Characters_BaseTitan__Idle (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c27df0

void Characters_BaseTitan__Idle(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((__this->fields).AI != false) {
    fVar1 = 0.1;
  }
  (*(__this->klass->vtable)._163_Idle.methodPtr)(__this,fVar1,(__this->klass->vtable)._163_Idle.method);
  return;
}


// Characters.BaseTitan$$Idle
// il2cpp: void Characters_BaseTitan__Idle (Characters_BaseTitan_o* __this, float fadeTime, const MethodInfo* method);
// 0x5c27e20

void Characters_BaseTitan__Idle_5b27e20(Characters_BaseTitan_o *__this,float fadeTime,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  System_String_o *animation;
  MethodInfo *in_R8;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) {
    ThrowNullReferenceException();
  }
  animation = (*(pCVar1->klass->vtable)._4_get_Idle.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._4_get_Idle.method);
  Characters_BaseTitan__StateActionWithTime(__this,0,animation,0.0,fadeTime,true,0.0,in_R8);
  return;
}


// Characters.BaseTitan$$IdleWait
// il2cpp: void Characters_BaseTitan__IdleWait (Characters_BaseTitan_o* __this, float waitTime, const MethodInfo* method);
// 0x5c27e80

void Characters_BaseTitan__IdleWait(Characters_BaseTitan_o *__this,float waitTime,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 2.0;
  if (waitTime <= 2.0) {
    fVar1 = waitTime;
  }
  (*(__this->klass->vtable)._163_Idle.methodPtr)
            (__this,(float)(~-(uint)(0.1 <= waitTime) & 0x3dcccccd | (uint)fVar1 & -(uint)(0.1 <= waitTime)),
             (__this->klass->vtable)._163_Idle.method);
  (__this->fields)._stateTimeLeft = waitTime;
  return;
}


// Characters.BaseTitan$$Land
// il2cpp: void Characters_BaseTitan__Land (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c27ee0

void Characters_BaseTitan__Land(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BaseTitanAnimations_o *pCVar2;
  Characters_AnimationHandler_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar5;
  System_String_o *pSVar6;
  float fVar7;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar9;
  undefined4 uVar10;
  UnityEngine_Quaternion_o UVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_Fields UStack_78;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [24];
  
  if (Il2CppMethodInitialized_0754777c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_0754777c = '\x01';
  }
  pCVar2 = (__this->fields).BaseTitanAnimations;
  if (pCVar2 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar6 = (*(pCVar2->klass->vtable)._10_get_Land.methodPtr)
                       (pCVar2,(pCVar2->klass->vtable)._10_get_Land.method);
    pCVar3 = (__this->fields).Animation;
    if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
      fVar7 = Characters_AnimationHandler__GetLength(pCVar3,pSVar6,(MethodInfo *)0x0);
      (__this->fields)._needFreshCore = true;
      pCVar3 = (__this->fields).Animation;
      if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar3,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
        uVar9 = 0;
        uVar10 = 0;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,(MethodInfo *)0x0);
        (__this->fields).State = 9;
        (__this->fields)._currentStateAnimation = pSVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
        (__this->fields)._stateTimeLeft = fVar7;
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        }
        pUVar4 = (__this->fields).Cache;
        if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
           (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
          pSVar6 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
          UVar12 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          auStack_28._8_4_ = extraout_XMM0_Dc;
          auStack_28._0_8_ = UVar12.fields._0_8_;
          auStack_28._12_4_ = extraout_XMM0_Dd;
          if (Il2CppMethodInitialized_075450a5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_075450a5 = '\x01';
          }
          pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
          uStack_38._0_4_ = (pUVar5->downVector).fields.x;
          uStack_38._4_4_ = (pUVar5->downVector).fields.y;
          uStack_30 = 0;
          fVar7 = (pUVar5->downVector).fields.z;
          auStack_68 = ZEXT416((uint)(__this->fields)._currentGroundDistance);
          UStack_78.x = 4.712389;
          UStack_78.y = 0.0;
          UStack_78.z = 0.0;
          UVar11 = UnityEngine_Quaternion__Internal_FromEulerRad
                             ((UnityEngine_Vector3_o *)&UStack_78,(MethodInfo *)0x0);
          auStack_48._8_4_ = extraout_XMM0_Dc_00;
          auStack_48._0_8_ = UVar11.fields._0_8_;
          auStack_48._12_4_ = extraout_XMM0_Dd_00;
          auStack_58._8_4_ = uVar9;
          auStack_58._0_8_ = UVar11.fields._8_8_;
          auStack_58._12_4_ = uVar10;
          fVar1 = (__this->fields).Size;
          fVar8 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                            (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
          if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
          }
          UVar12.fields.z = UVar12.fields.z + fVar7 * (float)auStack_68._0_4_;
          UVar12.fields.x = (float)auStack_28._0_4_ + (float)uStack_38 * (float)auStack_68._0_4_;
          UVar12.fields.y = (float)auStack_28._4_4_ + uStack_38._4_4_ * (float)auStack_68._0_4_;
          UVar11.fields.z = (float)auStack_58._0_4_;
          UVar11.fields.w = (float)auStack_58._4_4_;
          UVar11.fields.x = (float)auStack_48._0_4_;
          UVar11.fields.y = (float)auStack_48._4_4_;
          Effects_EffectSpawner__Spawn
                    (pSVar6,UVar12,UVar11,fVar1 * fVar8,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Fall
// il2cpp: void Characters_BaseTitan__Fall (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c28160

void Characters_BaseTitan__Fall(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    animation = (*(pCVar1->klass->vtable)._9_get_Fall.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._9_get_Fall.method);
    (__this->fields)._needFreshCore = true;
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
      (__this->fields).State = 7;
      (__this->fields)._currentStateAnimation = animation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
      (__this->fields)._stateTimeLeft = 0.0;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Turn
// il2cpp: void Characters_BaseTitan__Turn (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o targetDirection, const MethodInfo* method);
// 0x5c28220

void Characters_BaseTitan__Turn
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o targetDirection,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  VirtualInvokeData_bccba1ebf973 *pVVar2;
  bool bVar3;
  System_String_o *a;
  VirtualInvokeData_bccba1ebf973 *pVVar4;
  MethodInfo *method_00;
  float fVar5;
  
  if (Il2CppMethodInitialized_0754777d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754777d = '\x01';
  }
  bVar3 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                    (__this,(__this->klass->vtable)._145_CanAction.method);
  if (bVar3) {
    fVar5 = Characters_BaseCharacter__GetAngleToTarget
                      ((Characters_BaseCharacter_o *)__this,targetDirection,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (fVar5 <= 0.0) {
      if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c2831e;
      pVVar4 = &(pCVar1->klass->vtable)._19_get_Turn90L;
      pVVar2 = &(pCVar1->klass->vtable)._19_get_Turn90L;
    }
    else {
      if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c2831e;
      pVVar4 = &(pCVar1->klass->vtable)._20_get_Turn90R;
      pVVar2 = &(pCVar1->klass->vtable)._20_get_Turn90R;
    }
    a = (*pVVar4->methodPtr)(pCVar1,pVVar2->method);
    bVar3 = System_String__op_Inequality(a,"",(MethodInfo *)0x0);
    if (bVar3) {
      __this_00 = (__this->fields).Animation;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        fVar5 = Characters_AnimationHandler__GetTotalTime(__this_00,a,(MethodInfo *)0x0);
        Characters_BaseTitan__StartTurn(__this,targetDirection,a,fVar5,method_00);
        return;
      }
label_05c2831e:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BaseTitan$$StartTurn
// il2cpp: void Characters_BaseTitan__StartTurn (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o targetDirection, System_String_o* animation, float turnTime, const MethodInfo* method);
// 0x5c28330

void Characters_BaseTitan__StartTurn
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o targetDirection,
               System_String_o *animation,float turnTime,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  Characters_AnimationHandler_o *__this_00;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Quaternion_Fields UVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    local_38._8_4_ = in_XMM0_Dc;
    local_38._0_8_ = targetDirection.fields._0_8_;
    local_38._12_4_ = in_XMM0_Dd;
    local_28._0_4_ = targetDirection.fields.z;
    pUVar2 = (pUVar1->fields).Transform;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UVar5 = UnityEngine_Transform__get_forward(pUVar2,(MethodInfo *)0x0);
      local_48.z = UVar5.fields.z;
      local_48._0_8_ = UVar5.fields._0_8_;
      local_58.x = (float)local_38._0_4_;
      local_58.y = (float)local_38._4_4_;
      local_58.z = (float)local_28._0_4_;
      UVar5 = UnityEngine_Vector3__Internal_RotateTowards
                        ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,2.0943952,
                         3.4028235e+38,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).Cache;
      if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
        local_38._0_4_ = UVar5.fields.z;
        local_28._8_4_ = extraout_XMM0_Dc;
        local_28._0_8_ = UVar5.fields._0_8_;
        local_28._12_4_ = extraout_XMM0_Dd;
        pUVar2 = (pUVar1->fields).Transform;
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UVar4 = (UnityEngine_Quaternion_Fields)UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0)
          ;
          (__this->fields)._turnStartRotation.fields = UVar4;
          local_48.x = (float)local_28._0_4_;
          local_48.y = (float)local_28._4_4_;
          local_48.z = (float)local_38._0_4_;
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
          }
          pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_58.x = (pUVar3->upVector).fields.x;
          local_58.y = (pUVar3->upVector).fields.y;
          local_58.z = (pUVar3->upVector).fields.z;
          UVar4 = (UnityEngine_Quaternion_Fields)
                  UnityEngine_Quaternion__Internal_LookRotation
                            ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,
                             (MethodInfo *)0x0);
          (__this->fields)._turnTargetRotation.fields = UVar4;
          (__this->fields)._currentTurnTime = 0.0;
          (__this->fields)._maxTurnTime = turnTime;
          (__this->fields)._needFreshCore = true;
          __this_00 = (__this->fields).Animation;
          if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._173_Ungrab.methodPtr)
                      (__this,(__this->klass->vtable)._173_Ungrab.method);
            (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                      (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
            (__this->fields).State = 0x18;
            (__this->fields)._currentStateAnimation = animation;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
            (__this->fields)._stateTimeLeft = turnTime;
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Blind
// il2cpp: void Characters_BaseTitan__Blind (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c28510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c28556: jmp 0x5c2864f

void Characters_BaseTitan__Blind(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Characters_BaseTitanAnimations_o *pCVar3;
  bool bVar4;
  bool bVar5;
  System_String_o *pSVar6;
  int32_t state;
  MethodInfo *in_R8;
  float fVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_0754777e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754777e = '\x01';
  }
  iVar2 = (__this->fields).State;
  if (iVar2 != 0x10) {
    if (iVar2 == 0x13) {
      bVar4 = true;
      bVar5 = false;
      cVar1 = (__this->fields).AI;
    }
    else {
      bVar4 = iVar2 == 0x11;
      bVar5 = !bVar4;
      if (iVar2 == 0x12) {
        return;
      }
      cVar1 = (__this->fields).AI;
    }
    if ((cVar1 != '\0') && (bVar4 || (__this->fields)._disableCooldownLeft <= 0.0)) {
      bVar4 = Characters_BaseTitan__get_IsSitting(__this,method);
      pCVar3 = (__this->fields).BaseTitanAnimations;
      if (bVar4) {
        if (pCVar3 != (Characters_BaseTitanAnimations_o *)0x0) {
          pSVar6 = (*(pCVar3->klass->vtable)._18_get_SitBlind.methodPtr)
                             (pCVar3,(pCVar3->klass->vtable)._18_get_SitBlind.method);
          bVar4 = System_String__op_Inequality(pSVar6,"",(MethodInfo *)0x0);
          if (!bVar4) {
            return;
          }
          if (bVar5) {
            fVar7 = -1.0;
          }
          else {
            fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
            fVar7 = 0.0;
            if ((__this->fields).State == 0x13) {
              fVar7 = (__this->fields)._currentCrippleTime;
            }
            fVar7 = fVar8 + (__this->fields)._stateTimeLeft + fVar7;
          }
          (__this->fields)._crippleEndTime = fVar7;
          pCVar3 = (__this->fields).BaseTitanAnimations;
          if (pCVar3 != (Characters_BaseTitanAnimations_o *)0x0) {
            pSVar6 = (*(pCVar3->klass->vtable)._18_get_SitBlind.methodPtr)
                               (pCVar3,(pCVar3->klass->vtable)._18_get_SitBlind.method);
            state = 0x12;
label_05c286b5:
            Characters_BaseTitan__StateAction(__this,state,pSVar6,0.1,true,in_R8);
            (*(__this->klass->vtable)._196_DamagedGrunt.methodPtr)
                      (__this,1.0,(__this->klass->vtable)._196_DamagedGrunt.method);
            return;
          }
        }
      }
      else if (pCVar3 != (Characters_BaseTitanAnimations_o *)0x0) {
        pSVar6 = (*(pCVar3->klass->vtable)._21_get_Blind.methodPtr)
                           (pCVar3,(pCVar3->klass->vtable)._21_get_Blind.method);
        bVar5 = System_String__op_Inequality(pSVar6,"",(MethodInfo *)0x0);
        if (!bVar5) {
          return;
        }
        pCVar3 = (__this->fields).BaseTitanAnimations;
        if (pCVar3 != (Characters_BaseTitanAnimations_o *)0x0) {
          pSVar6 = (*(pCVar3->klass->vtable)._21_get_Blind.methodPtr)
                             (pCVar3,(pCVar3->klass->vtable)._21_get_Blind.method);
          state = 0x10;
          goto label_05c286b5;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BaseTitan$$Cripple
// il2cpp: void Characters_BaseTitan__Cripple (Characters_BaseTitan_o* __this, float time, const MethodInfo* method);
// 0x5c286f0

void Characters_BaseTitan__Cripple(Characters_BaseTitan_o *__this,float time,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool bVar3;
  System_String_o *pSVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_0754777f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754777f = '\x01';
  }
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar4 = (*(pCVar1->klass->vtable)._17_get_SitFall.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._17_get_SitFall.method);
    bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
    if ((((!bVar3) || ((__this->fields).State == 0x11)) || ((__this->fields).AI == false)) ||
       (0.0 < (__this->fields)._disableCooldownLeft)) {
      return;
    }
    if (time <= 0.0) {
      time = (*(__this->klass->vtable)._121_get_DefaultCrippleTime.methodPtr)
                       (__this,(__this->klass->vtable)._121_get_DefaultCrippleTime.method);
    }
    (__this->fields)._currentCrippleTime = time;
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar4 = (*(pCVar1->klass->vtable)._17_get_SitFall.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._17_get_SitFall.method);
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar5 = Characters_AnimationHandler__GetLength(pCVar2,pSVar4,(MethodInfo *)0x0);
        (__this->fields)._needFreshCore = true;
        pCVar2 = (__this->fields).Animation;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
          (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar4,0.1,0.0,(MethodInfo *)0x0);
          (__this->fields).State = 0x13;
          (__this->fields)._currentStateAnimation = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
          (__this->fields)._stateTimeLeft = fVar5;
          (*(__this->klass->vtable)._196_DamagedGrunt.methodPtr)
                    (__this,1.0,(__this->klass->vtable)._196_DamagedGrunt.method);
          fVar5 = (__this->fields)._currentCrippleTime;
          fVar6 = (*(__this->klass->vtable)._135_get_DisableCooldown.methodPtr)
                            (__this,(__this->klass->vtable)._135_get_DisableCooldown.method);
          (__this->fields)._disableCooldownLeft = fVar6 + fVar5;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Emote
// il2cpp: void Characters_BaseTitan__Emote (Characters_BaseTitan_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x5c288d0

void Characters_BaseTitan__Emote(Characters_BaseTitan_o *__this,System_String_o *emote,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$RegenerateWardedWeakSpot
// il2cpp: void Characters_BaseTitan__RegenerateWardedWeakSpot (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c288e0

void Characters_BaseTitan__RegenerateWardedWeakSpot(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$ForceAnimation
// il2cpp: void Characters_BaseTitan__ForceAnimation (Characters_BaseTitan_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x5c288f0

void Characters_BaseTitan__ForceAnimation
               (Characters_BaseTitan_o *__this,System_String_o *animation,float fade,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  float fVar2;
  
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    fVar2 = Characters_AnimationHandler__GetLength(pCVar1,animation,(MethodInfo *)0x0);
    (__this->fields)._needFreshCore = true;
    pCVar1 = (__this->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar1,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,fade,0.0,(MethodInfo *)0x0);
      (__this->fields).State = 8;
      (__this->fields)._currentStateAnimation = animation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
      (__this->fields)._stateTimeLeft = fVar2;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetSpawnEffectSize
// il2cpp: float Characters_BaseTitan__GetSpawnEffectSize (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c289b0

float Characters_BaseTitan__GetSpawnEffectSize(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).Size;
  fVar2 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                    (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
  return fVar2 * fVar1;
}


// Characters.BaseTitan$$GrabRPC
// il2cpp: void Characters_BaseTitan__GrabRPC (Characters_BaseTitan_o* __this, int32_t viewId, bool left, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c289e0

void Characters_BaseTitan__GrabRPC
               (Characters_BaseTitan_o *__this,int32_t viewId,bool left,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  bool bVar2;
  Photon_Pun_PhotonView_o *__this_00;
  Characters_Human_o *pCVar3;
  UnityEngine_Transform_o *pUVar4;
  
  if (Il2CppMethodInitialized_07547780 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    Il2CppMethodInitialized_07547780 = '\x01';
  }
  __this_00 = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
  if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) goto label_05c28ade;
  }
  else if ((__this_00->fields)._Owner_k__BackingField == info.fields.Sender) {
    pCVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
    bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      (__this->fields).HoldHuman = pCVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).HoldHuman);
    }
    if (pCVar3 == (Characters_Human_o *)0x0) {
label_05c28ade:
      ThrowNullReferenceException();
    }
    (pCVar3->fields).Grabber = __this;
    Il2CppCodeGenWriteBarrier(&(pCVar3->fields).Grabber);
    pCVar1 = (__this->fields).BaseTitanCache;
    if (left) {
      if (pCVar1 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_05c28ade;
      pUVar4 = (pCVar1->fields).GrabLSocket;
    }
    else {
      if (pCVar1 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_05c28ade;
      pUVar4 = (pCVar1->fields).GrabRSocket;
    }
    (pCVar3->fields).GrabHand = pUVar4;
    Il2CppCodeGenWriteBarrier(&(pCVar3->fields).GrabHand);
    return;
  }
  return;
}


// Characters.BaseTitan$$UngrabRPC
// il2cpp: void Characters_BaseTitan__UngrabRPC (Characters_BaseTitan_o* __this, int32_t viewId, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c28af0

void Characters_BaseTitan__UngrabRPC
               (Characters_BaseTitan_o *__this,int32_t viewId,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  bool bVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Characters_Human_o *pCVar2;
  
  if (Il2CppMethodInitialized_07547781 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    Il2CppMethodInitialized_07547781 = '\x01';
  }
  __this_00 = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
  if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
      return;
    }
  }
  else {
    if ((__this_00->fields)._Owner_k__BackingField != info.fields.Sender) {
      return;
    }
    pCVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
    bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (bVar1) {
      (__this->fields).HoldHuman = (Characters_Human_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).HoldHuman);
    }
    if (pCVar2 != (Characters_Human_o *)0x0) {
      (pCVar2->fields).Grabber = (Characters_BaseTitan_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pCVar2->fields).Grabber);
      (pCVar2->fields).GrabHand = (UnityEngine_Transform_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pCVar2->fields).GrabHand);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Ungrab
// il2cpp: void Characters_BaseTitan__Ungrab (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c28bf0

void Characters_BaseTitan__Ungrab(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar3;
  System_Object_array *parameters;
  Characters_Human_o **targetAddress;
  
  if (Il2CppMethodInitialized_07547782 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"UngrabRPC");
    Il2CppMethodInitialized_07547782 = '\x01';
  }
  pCVar1 = (__this->fields).HoldHuman;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    targetAddress = &(__this->fields).HoldHuman;
    if ((*targetAddress != (Characters_Human_o *)0x0) &&
       (pUVar2 = ((*targetAddress)->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) {
      __this_00 = (pUVar2->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"UngrabRPC",0,parameters,(MethodInfo *)0x0);
        pCVar1 = *targetAddress;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          (pCVar1->fields).GrabHand = (UnityEngine_Transform_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(pCVar1->fields).GrabHand);
          *targetAddress = (Characters_Human_o *)0x0;
          Il2CppCodeGenWriteBarrier(targetAddress);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Characters.BaseTitan$$DecreaseAttackSpeedRPC
// il2cpp: void Characters_BaseTitan__DecreaseAttackSpeedRPC (Characters_BaseTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c28cf0

void Characters_BaseTitan__DecreaseAttackSpeedRPC
               (Characters_BaseTitan_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  float fVar1;
  
  if ((__this->fields).ConfusedTime <= 0.0) {
    fVar1 = (__this->fields).AttackSpeedMultiplier;
    (__this->fields).PreviousAttackSpeedMultiplier = fVar1;
    (__this->fields).AttackSpeedMultiplier = fVar1 * 0.67;
  }
  (__this->fields).ConfusedTime = 10.0;
  return;
}


// Characters.BaseTitan$$Confuse
// il2cpp: void Characters_BaseTitan__Confuse (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c28d30

void Characters_BaseTitan__Confuse(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  
  if (Il2CppMethodInitialized_07547783 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"DecreaseAttackSpeedRPC");
    Il2CppMethodInitialized_07547783 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (pUVar1->fields).PhotonView, __this_00 == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  targetPlayer = (__this_00->fields)._Owner_k__BackingField;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
  Photon_Pun_PhotonView__RPC_56e5850
            (__this_00,"DecreaseAttackSpeedRPC",targetPlayer,parameters,(MethodInfo *)0x0);
  return;
}


// Characters.BaseTitan$$ResetAttackSpeed
// il2cpp: void Characters_BaseTitan__ResetAttackSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c28dc0

void Characters_BaseTitan__ResetAttackSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).PreviousAttackSpeedMultiplier;
  if (0.0 <= fVar1) {
    (__this->fields).AttackSpeedMultiplier = fVar1;
  }
  return;
}


// Characters.BaseTitan$$OnPlayerEnteredRoom
// il2cpp: void Characters_BaseTitan__OnPlayerEnteredRoom (Characters_BaseTitan_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5c1f4b0

void Characters_BaseTitan__OnPlayerEnteredRoom
               (Characters_BaseTitan_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  undefined8 in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07547784 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSizeRPC");
    Il2CppMethodInitialized_07547784 = '\x01';
  }
  Characters_BaseCharacter__OnPlayerEnteredRoom((Characters_BaseCharacter_o *)__this,player,(MethodInfo *)0x0)
  ;
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (pUVar1->fields).PhotonView, __this_00 == (Photon_Pun_PhotonView_o *)0x0)) {
label_05c1f5b9:
    ThrowNullReferenceException();
  }
  if ((__this_00->fields)._IsMine_k__BackingField != false) {
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    uStack_28 = CONCAT44((__this->fields).Size,(undefined4)uStack_28);
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,(void *)((long)&uStack_28 + 4));
    if (parameters == (System_Object_array *)0x0) goto label_05c1f5b9;
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    Photon_Pun_PhotonView__RPC_56e5850(__this_00,"SetSizeRPC",player,parameters,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BaseTitan$$StateAction
// il2cpp: void Characters_BaseTitan__StateAction (Characters_BaseTitan_o* __this, int32_t state, System_String_o* animation, float fade, bool deactivateHitboxes, const MethodInfo* method);
// 0x5c268b0

void Characters_BaseTitan__StateAction
               (Characters_BaseTitan_o *__this,int32_t state,System_String_o *animation,float fade,
               bool deactivateHitboxes,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float stateTime;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  stateTime = Characters_AnimationHandler__GetLength(__this_00,animation,(MethodInfo *)0x0);
  Characters_BaseTitan__StateActionWithTime
            (__this,state,animation,stateTime,fade,deactivateHitboxes,0.0,method);
  return;
}


// Characters.BaseTitan$$StateAttack
// il2cpp: void Characters_BaseTitan__StateAttack (Characters_BaseTitan_o* __this, System_String_o* animation, float fade, bool deactivateHitboxes, const MethodInfo* method);
// 0x5c26ae0

void Characters_BaseTitan__StateAttack
               (Characters_BaseTitan_o *__this,System_String_o *animation,float fade,bool deactivateHitboxes,
               MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  float fVar2;
  
  (__this->fields)._needFreshCore = true;
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(pCVar1,true,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
    if (deactivateHitboxes) {
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
    }
    Characters_BaseCharacter__CrossFadeWithSpeed
              ((Characters_BaseCharacter_o *)__this,animation,(__this->fields)._currentAttackSpeed,fade,0.0,
               (MethodInfo *)0x0);
    (__this->fields).State = 10;
    (__this->fields)._currentStateAnimation = animation;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
    pCVar1 = (__this->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetLength(pCVar1,animation,(MethodInfo *)0x0);
      (__this->fields)._stateTimeLeft = fVar2 / (__this->fields)._currentAttackSpeed;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$StateActionWithTime
// il2cpp: void Characters_BaseTitan__StateActionWithTime (Characters_BaseTitan_o* __this, int32_t state, System_String_o* animation, float stateTime, float fade, bool deactivateHitboxes, float speed, const MethodInfo* method);
// 0x5c20660

void Characters_BaseTitan__StateActionWithTime
               (Characters_BaseTitan_o *__this,int32_t state,System_String_o *animation,float stateTime,
               float fade,bool deactivateHitboxes,float speed,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  bool bVar1;
  
  (__this->fields)._needFreshCore = true;
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_AnimationHandler__SetCullingType
            (__this_00,state == 6 || (state == 0xf || state == 10),(MethodInfo *)0x0);
  if ((state != 0x17) && (state != 0x1b)) {
    (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
  }
  if (deactivateHitboxes) {
    (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
  }
  if (speed <= 0.0) {
    if ((state != 0) ||
       (bVar1 = System_String__op_Inequality
                          ((__this->fields)._currentStateAnimation,animation,(MethodInfo *)0x0), bVar1)) {
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,fade,0.0,(MethodInfo *)0x0);
    }
  }
  else {
    Characters_BaseCharacter__CrossFadeWithSpeed
              ((Characters_BaseCharacter_o *)__this,animation,speed,fade,0.0,(MethodInfo *)0x0);
  }
  (__this->fields).State = state;
  (__this->fields)._currentStateAnimation = animation;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
  (__this->fields)._stateTimeLeft = stateTime;
  return;
}


// Characters.BaseTitan$$SetAnimationUpdateMode
// il2cpp: void Characters_BaseTitan__SetAnimationUpdateMode (Characters_BaseTitan_o* __this, bool always, const MethodInfo* method);
// 0x5c28de0

void Characters_BaseTitan__SetAnimationUpdateMode
               (Characters_BaseTitan_o *__this,bool always,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_AnimationHandler__SetCullingType(__this_00,always,(MethodInfo *)0x0);
  return;
}


// Characters.BaseTitan$$Awake
// il2cpp: void Characters_BaseTitan__Awake (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c28e00

void Characters_BaseTitan__Awake(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  Settings_GraphicsSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Rigidbody_o *pUVar5;
  Characters_AnimationHandler_o *__this_00;
  bool bVar6;
  bool *pbVar7;
  Characters_TitanColliderToggler_o *pCVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_07547785 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547785 = '\x01';
  }
  Characters_BaseCharacter__Awake((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._inGameManager;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pGVar1 = (__this->fields)._inGameManager;
    if (pGVar1 == (GameManagers_InGameManager_o *)0x0) goto label_05c28ff1;
    pbVar7 = &(pGVar1->fields)._TitanGoreEnabled_k__BackingField;
  }
  else {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar2 == (Settings_GraphicsSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).TitanGore, pSVar3 == (Settings_BoolSetting_o *)0x0)) goto label_05c28ff1;
    pbVar7 = &(pSVar3->fields)._value;
  }
  (__this->fields)._GoreEnabled_k__BackingField = *pbVar7;
  (*(__this->klass->vtable)._176_CreateAnimations.methodPtr)
            (__this,(Characters_BaseTitanAnimations_o *)0x0,
             (__this->klass->vtable)._176_CreateAnimations.method);
  pUVar4 = (__this->fields).Cache;
  if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar5 = (pUVar4->fields).Rigidbody, pUVar5 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_freezeRotation(pUVar5,true,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar5 = (pUVar4->fields).Rigidbody, pUVar5 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__set_useGravity(pUVar5,false,(MethodInfo *)0x0);
      pCVar8 = Characters_TitanColliderToggler__Create(__this,(MethodInfo *)0x0);
      (__this->fields).TitanColliderToggler = pCVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields).TitanColliderToggler);
      fVar9 = (*(__this->klass->vtable)._130_get_DefaultRunSpeed.methodPtr)
                        (__this,(__this->klass->vtable)._130_get_DefaultRunSpeed.method);
      (__this->fields).RunSpeedBase = fVar9;
      fVar9 = (*(__this->klass->vtable)._131_get_DefaultWalkSpeed.methodPtr)
                        (__this,(__this->klass->vtable)._131_get_DefaultWalkSpeed.method);
      (__this->fields).WalkSpeedBase = fVar9;
      fVar9 = (*(__this->klass->vtable)._132_get_DefaultJumpForce.methodPtr)
                        (__this,(__this->klass->vtable)._132_get_DefaultJumpForce.method);
      (__this->fields).JumpForce = fVar9;
      fVar9 = (*(__this->klass->vtable)._133_get_DefaultRotateSpeed.methodPtr)
                        (__this,(__this->klass->vtable)._133_get_DefaultRotateSpeed.method);
      (__this->fields).RotateSpeed = fVar9;
      __this_00 = (__this->fields).Animation;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._190_ScaleSounds.methodPtr)
                  (__this,1.0,(__this->klass->vtable)._190_ScaleSounds.method);
        return;
      }
    }
  }
label_05c28ff1:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$CreateCache
// il2cpp: void Characters_BaseTitan__CreateCache (Characters_BaseTitan_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x5c211f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c21265: lea rdi, [r14 + 0x108]
// asm:   0x5c2126c: jmp 0x5c21280

void Characters_BaseTitan__CreateCache
               (Characters_BaseTitan_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseTitanComponentCache_c *pCVar2;
  
  if (Il2CppMethodInitialized_07547786 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitanComponentCache);
    Il2CppMethodInitialized_07547786 = '\x01';
  }
  pCVar2 = TypeInfo_Characters_BaseTitanComponentCache;
  if (cache == (Utility_BaseComponentCache_o *)0x0) {
    (__this->fields).BaseTitanCache = (Characters_BaseTitanComponentCache_o *)0x0;
label_05c21280:
    Il2CppCodeGenWriteBarrier(&(__this->fields).BaseTitanCache);
    Characters_BaseCharacter__CreateCache((Characters_BaseCharacter_o *)__this,cache,(MethodInfo *)0x0);
    return;
  }
  bVar1 = (TypeInfo_Characters_BaseTitanComponentCache->_2).typeHierarchyDepth;
  if ((bVar1 <= (cache->klass->_2).typeHierarchyDepth) &&
     ((cache->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_Characters_BaseTitanComponentCache)) {
    (__this->fields).BaseTitanCache = (Characters_BaseTitanComponentCache_o *)cache;
    if ((bVar1 <= (cache->klass->_2).typeHierarchyDepth) &&
       ((cache->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pCVar2)) goto label_05c21280;
  }
  il2cpp_codegen_raise_invalid_cast_exception(cache);
}


// Characters.BaseTitan$$CreateAnimations
// il2cpp: void Characters_BaseTitan__CreateAnimations (Characters_BaseTitan_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x5c21320

void Characters_BaseTitan__CreateAnimations
               (Characters_BaseTitan_o *__this,Characters_BaseTitanAnimations_o *animations,MethodInfo *method
               )

{
  System_Reflection_FieldInfo_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_string__float__o *pSVar4;
  System_Type_o *__this_01;
  System_Reflection_FieldInfo_array *pSVar5;
  System_String_o *__this_02;
  Il2CppObject *pIVar6;
  Il2CppObject *value;
  uint uVar7;
  
  if (Il2CppMethodInitialized_07547787 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitanAnimations);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    Il2CppMethodInitialized_07547787 = '\x01';
  }
  if (animations == (Characters_BaseTitanAnimations_o *)0x0) {
    animations = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseTitanAnimations);
    System_Object___ctor((Il2CppObject *)animations,(MethodInfo *)0x0);
  }
  (__this->fields).BaseTitanAnimations = animations;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BaseTitanAnimations);
  pSVar4 = (*(__this->klass->vtable)._138_GetRootMotionAnimations.methodPtr)
                     (__this,(__this->klass->vtable)._138_GetRootMotionAnimations.method);
  (__this->fields)._rootMotionAnimations = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rootMotionAnimations);
  pIVar6 = (Il2CppObject *)(__this->fields).BaseTitanAnimations;
  if (pIVar6 != (Il2CppObject *)0x0) {
    __this_01 = System_Object__GetType(pIVar6,(MethodInfo *)0x0);
    if (__this_01 != (System_Type_o *)0x0) {
      pSVar5 = System_Type__GetFields(__this_01,(MethodInfo *)0x0);
      if (pSVar5 != (System_Reflection_FieldInfo_array *)0x0) {
        uVar3 = (uint)pSVar5->max_length;
        if (0 < (int)uVar3) {
          uVar7 = 0;
          do {
            if (uVar3 <= uVar7) {
              ThrowIndexOutOfRangeException();
            }
            pSVar1 = pSVar5->m_Items[(int)uVar7];
            if (pSVar1 == (System_Reflection_FieldInfo_o *)0x0) goto label_05c2151b;
            __this_02 = (System_String_o *)
                        (*(pSVar1->klass->vtable)._8_unknown.methodPtr)
                                  (pSVar1,(pSVar1->klass->vtable)._8_unknown.method);
            if (__this_02 == (System_String_o *)0x0) goto label_05c2151b;
            bVar2 = System_String__StartsWith(__this_02,"Attack",(MethodInfo *)0x0);
            if (bVar2) {
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields).AttackAnimations;
              pIVar6 = (Il2CppObject *)
                       (*(pSVar1->klass->vtable)._8_unknown.methodPtr)
                                 (pSVar1,(pSVar1->klass->vtable)._8_unknown.method);
              value = (Il2CppObject *)
                      (*(pSVar1->klass->vtable)._26_unknown.methodPtr)
                                (pSVar1,(__this->fields).BaseTitanAnimations,
                                 (pSVar1->klass->vtable)._26_unknown.method);
              if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_05c2151b;
              if ((value != (Il2CppObject *)0x0) && (value->klass != g_data_07556758)) {
                il2cpp_codegen_raise_invalid_cast_exception(value);
              }
              System_Collections_Generic_Dictionary_object__object___Add
                        (__this_00,pIVar6,value,
                         (MethodInfo_4AAD4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
            }
            uVar7 = uVar7 + 1;
            uVar3 = (uint)pSVar5->max_length;
          } while ((int)uVar7 < (int)uVar3);
        }
        return;
      }
    }
  }
label_05c2151b:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_BaseTitan__GetCameraAnchor (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c29000

UnityEngine_Transform_o *
Characters_BaseTitan__GetCameraAnchor(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  
  pCVar1 = (__this->fields).BaseTitanCache;
  if (pCVar1 == (Characters_BaseTitanComponentCache_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).Head;
}


// Characters.BaseTitan$$UpdateDisableArm
// il2cpp: void Characters_BaseTitan__UpdateDisableArm (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c29020

void Characters_BaseTitan__UpdateDisableArm(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$DisableArm
// il2cpp: void Characters_BaseTitan__DisableArm (Characters_BaseTitan_o* __this, bool left, const MethodInfo* method);
// 0x5c29030

void Characters_BaseTitan__DisableArm(Characters_BaseTitan_o *__this,bool left,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$IsToggleColliderActive
// il2cpp: bool Characters_BaseTitan__IsToggleColliderActive (Characters_BaseTitan_o* __this, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x5c29040

bool Characters_BaseTitan__IsToggleColliderActive
               (Characters_BaseTitan_o *__this,UnityEngine_Collider_o *collider,MethodInfo *method)

{
  return true;
}


// Characters.BaseTitan$$UpdateTurn
// il2cpp: void Characters_BaseTitan__UpdateTurn (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c29050

void Characters_BaseTitan__UpdateTurn(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  float fVar3;
  UnityEngine_Quaternion_o value;
  UnityEngine_Quaternion_Fields UStack_30;
  UnityEngine_Quaternion_Fields UStack_20;
  
  fVar3 = (__this->fields)._currentTurnTime;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar3;
  (__this->fields)._currentTurnTime = fVar2;
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).Transform;
    UStack_20.x = (__this->fields)._turnStartRotation.fields.x;
    UStack_20.y = (__this->fields)._turnStartRotation.fields.y;
    UStack_20.z = (__this->fields)._turnStartRotation.fields.z;
    UStack_20.w = (__this->fields)._turnStartRotation.fields.w;
    fVar2 = fVar2 / (__this->fields)._maxTurnTime;
    UStack_30.x = (__this->fields)._turnTargetRotation.fields.x;
    UStack_30.y = (__this->fields)._turnTargetRotation.fields.y;
    UStack_30.z = (__this->fields)._turnTargetRotation.fields.z;
    UStack_30.w = (__this->fields)._turnTargetRotation.fields.w;
    fVar3 = 1.0;
    if (fVar2 <= 1.0) {
      fVar3 = fVar2;
    }
    value = UnityEngine_Quaternion__Internal_Slerp
                      ((UnityEngine_Quaternion_o *)&UStack_20,(UnityEngine_Quaternion_o *)&UStack_30,
                       (float)(-(uint)(0.0 <= fVar2) & (uint)fVar3),(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetSitIdleAniamtion
// il2cpp: System_String_o* Characters_BaseTitan__GetSitIdleAniamtion (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c29100

System_String_o * Characters_BaseTitan__GetSitIdleAniamtion(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  System_String_o *pSVar2;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pCVar1->klass->vtable)._14_get_SitIdle.methodPtr)
                     (pCVar1,(pCVar1->klass->vtable)._14_get_SitIdle.method);
  return pSVar2;
}


// Characters.BaseTitan$$GetSitFallAnimation
// il2cpp: System_String_o* Characters_BaseTitan__GetSitFallAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c29130

System_String_o * Characters_BaseTitan__GetSitFallAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  System_String_o *pSVar2;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pCVar1->klass->vtable)._17_get_SitFall.methodPtr)
                     (pCVar1,(pCVar1->klass->vtable)._17_get_SitFall.method);
  return pSVar2;
}


// Characters.BaseTitan$$GetSitUpAnimation
// il2cpp: System_String_o* Characters_BaseTitan__GetSitUpAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c29160

System_String_o * Characters_BaseTitan__GetSitUpAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  System_String_o *pSVar2;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pCVar1->klass->vtable)._16_get_SitUp.methodPtr)
                     (pCVar1,(pCVar1->klass->vtable)._16_get_SitUp.method);
  return pSVar2;
}


// Characters.BaseTitan$$SetDefaultVelocityLerp
// il2cpp: void Characters_BaseTitan__SetDefaultVelocityLerp (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c29190
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c293bf: jmp 0x5c29216

void Characters_BaseTitan__SetDefaultVelocityLerp(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Rigidbody_o *pUVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o value;
  float local_78;
  float local_58;
  float fStack_54;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07547788 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    Il2CppMethodInitialized_07547788 = '\x01';
  }
  bVar10 = System_String__op_Inequality
                     ((__this->fields)._currentAttack,"AttackBellyFlop",(MethodInfo *)0x0);
  if ((bVar10) &&
     (bVar10 = System_String__op_Inequality
                         ((__this->fields)._currentAttack,"AttackRockThrow",(MethodInfo *)0x0), bVar10)) {
    fVar1 = 1.47;
    local_78 = 1.47;
  }
  else {
    fVar1 = 1.0;
    local_78 = 1.0;
  }
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
    local_78 = fVar1;
  }
  pUVar7 = (__this->fields).Cache;
  if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar8 = (pUVar7->fields).Rigidbody, pUVar8 != (UnityEngine_Rigidbody_o *)0x0)) {
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar3 = (pUVar9->upVector).fields.x;
    uVar5 = (pUVar9->upVector).fields.y;
    fVar1 = (pUVar9->upVector).fields.z;
    UVar14 = UnityEngine_Rigidbody__get_linearVelocity(pUVar8,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_075450a5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_075450a5 = '\x01';
    }
    fVar12 = UVar14.fields.y;
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar8 = (pUVar7->fields).Rigidbody, pUVar8 != (UnityEngine_Rigidbody_o *)0x0)) {
      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar4 = (pUVar9->downVector).fields.x;
      uVar6 = (pUVar9->downVector).fields.y;
      fVar13 = (__this->fields)._currentGroundDistance * 100.0;
      if (100.0 <= fVar13) {
        fVar13 = 100.0;
      }
      fVar2 = (pUVar9->downVector).fields.z;
      UVar14 = UnityEngine_Rigidbody__get_linearVelocity(pUVar8,(MethodInfo *)0x0);
      fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      local_78 = local_78 * fVar11;
      fVar11 = 1.0;
      if (local_78 <= 1.0) {
        fVar11 = local_78;
      }
      fVar11 = (float)(-(uint)(0.0 <= local_78) & (uint)fVar11);
      local_58 = UVar14.fields.x;
      fStack_54 = UVar14.fields.y;
      value.fields.x = fVar11 * ((fVar13 * (float)uVar4 + (float)uVar3 * fVar12) - local_58) + local_58;
      value.fields.y = fVar11 * ((fVar13 * (float)uVar6 + (float)uVar5 * fVar12) - fStack_54) + fStack_54;
      value.fields.z = ((fVar2 * fVar13 + fVar1 * fVar12) - UVar14.fields.z) * fVar11 + UVar14.fields.z;
      UnityEngine_Rigidbody__set_linearVelocity(pUVar8,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$Update
// il2cpp: void Characters_BaseTitan__Update (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c293d0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c29524: jmp 0x5c29630
// asm:   0x5c298ef: cmp byte ptr [rbx + 0xdc], 0
// asm:   0x5c298f6: je 0x5c2962d

void Characters_BaseTitan__Update(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  Characters_BaseTitanComponentCache_o *pCVar3;
  Characters_Human_o *x;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int32_t iVar9;
  System_String_o *pSVar10;
  Characters_BaseTitan_c *pCVar11;
  MethodInfo *pMVar12;
  Characters_BaseTitan_o *pCVar13;
  MethodInfo *in_R8;
  int32_t *piVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  undefined8 local_d8;
  UnityEngine_LayerMask_o local_c8 [2];
  float local_c0;
  float local_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [16];
  UnityEngine_RaycastHit_o local_78;
  UnityEngine_RaycastHit_o local_48;
  
  if (Il2CppMethodInitialized_07547789 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547789 = '\x01';
  }
  local_48.fields.m_UV.fields.x = 0.0;
  local_48.fields.m_UV.fields.y = 0.0;
  local_48.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_48.fields.m_Normal.fields.y = 0.0;
  local_48.fields.m_Normal.fields.z = 0.0;
  local_48.fields.m_FaceID = 0;
  local_48.fields.m_Distance = 0.0;
  local_48.fields.m_Point.fields.x = 0.0;
  local_48.fields.m_Point.fields.y = 0.0;
  local_48.fields.m_Point.fields.z = 0.0;
  local_48.fields.m_Normal.fields.x = 0.0;
  local_c8[0].fields.m_Mask = (UnityEngine_LayerMask_Fields)0;
  local_a0 = 0.0;
  local_a8 = 0;
  local_90 = 0.0;
  local_98 = 0;
  local_78.fields.m_UV.fields.x = 0.0;
  local_78.fields.m_UV.fields.y = 0.0;
  local_78.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_78.fields.m_Normal.fields.y = 0.0;
  local_78.fields.m_Normal.fields.z = 0.0;
  local_78.fields.m_FaceID = 0;
  local_78.fields.m_Distance = 0.0;
  local_78.fields.m_Point.fields.x = 0.0;
  local_78.fields.m_Point.fields.y = 0.0;
  local_78.fields.m_Point.fields.z = 0.0;
  local_78.fields.m_Normal.fields.x = 0.0;
  (*(__this->klass->vtable)._177_UpdateDisableArm.methodPtr)
            (__this,(__this->klass->vtable)._177_UpdateDisableArm.method);
  (*(__this->klass->vtable)._199_UpdateAnimationColliders.methodPtr)
            (__this,(__this->klass->vtable)._199_UpdateAnimationColliders.method);
  bVar6 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar6) {
    return;
  }
  if ((__this->fields).EnableAI == false) {
    return;
  }
  fVar17 = (__this->fields)._disableCooldownLeft;
  fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._disableCooldownLeft = fVar17 - fVar15;
  fVar17 = (__this->fields)._climbCooldownLeft;
  fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._climbCooldownLeft = fVar17 - fVar15;
  uVar7 = (__this->fields).State;
  if ((__this->fields).AI == false) {
    if ((uVar7 - 1 < 3) && ((__this->fields).IsSit != false)) {
      pCVar1 = (__this->fields).BaseTitanAnimations;
      if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
        pSVar10 = (*(pCVar1->klass->vtable)._15_get_SitDown.methodPtr)
                            (pCVar1,(pCVar1->klass->vtable)._15_get_SitDown.method);
        pCVar2 = (__this->fields).Animation;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          fVar17 = Characters_AnimationHandler__GetLength(pCVar2,pSVar10,(MethodInfo *)0x0);
          (__this->fields)._needFreshCore = true;
          pCVar2 = (__this->fields).Animation;
          if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._173_Ungrab.methodPtr)
                      (__this,(__this->klass->vtable)._173_Ungrab.method);
            (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                      (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this,pSVar10,0.1,0.0,(MethodInfo *)0x0);
            (__this->fields).State = 0x14;
            (__this->fields)._currentStateAnimation = pSVar10;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
            (__this->fields)._stateTimeLeft = fVar17;
            return;
          }
        }
      }
      goto label_05c29fd5;
    }
    if ((uVar7 & 0xfffffffe) == 6) {
      if ((((__this->fields).HasDirection != false) && ((__this->fields).IsSprint != false)) &&
         (1.0 < (__this->fields).CurrentSprintStamina)) {
        pUVar4 = (__this->fields).Cache;
        if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05c29fd5;
        UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        fVar17 = UVar19.fields.z;
        local_b8._0_4_ = fVar17;
        uVar16 = il2cpp_runtime_helper_05bbcf10(0);
        pUVar4 = (__this->fields).Cache;
        if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
           (pCVar13 = (Characters_BaseTitan_o *)(pUVar4->fields).Transform,
           pCVar13 == (Characters_BaseTitan_o *)0x0)) goto label_05c29fd5;
        fVar15 = (__this->fields).Size;
        local_d8._0_4_ = UVar19.fields.x;
        local_d8._4_4_ = UVar19.fields.y;
        local_b8._0_4_ = (float)local_b8._0_4_ + fVar17 * 3.0 * fVar15;
        pMVar12 = (MethodInfo *)0x0;
        UVar19 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)pCVar13,(MethodInfo *)0x0);
        local_bc = UVar19.fields.z;
        local_88._8_4_ = extraout_XMM0_Dc;
        local_88._0_8_ = UVar19.fields._0_8_;
        local_88._12_4_ = extraout_XMM0_Dd;
        local_c0 = (__this->fields).Size;
        local_c8[0] = Characters_BaseTitan__get_MapObjectMask(pCVar13,pMVar12);
        iVar9 = UnityEngine_LayerMask__get_value(local_c8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        UVar19.fields.z = (float)local_b8._0_4_;
        UVar19.fields.x = (float)local_d8 + fVar15 * (float)uVar16 * 3.0;
        UVar19.fields.y = local_d8._4_4_ + fVar15 * (float)((ulong)uVar16 >> 0x20) * 3.0;
        UVar18.fields.z = local_bc;
        UVar18.fields.x = (float)local_88._0_4_;
        UVar18.fields.y = (float)local_88._4_4_;
        bVar6 = UnityEngine_Physics__Raycast_69d9ca0
                          (UVar19,UVar18,&local_48,local_c0 * 5.0,iVar9,(MethodInfo *)0x0);
        if (bVar6) {
          (*(__this->klass->vtable)._159_WallClimb.methodPtr)
                    (__this,(__this->klass->vtable)._159_WallClimb.method);
        }
      }
      goto label_05c2962d;
    }
  }
  else if ((uVar7 & 0xfffffffe) == 6) {
label_05c2962d:
    uVar7 = (__this->fields).State;
  }
  piVar14 = &(__this->fields).State;
  if ((uVar7 == 0x19) || (uVar7 == 2)) {
    fVar17 = (__this->fields).SprintStaminaConsumption;
    local_b8 = ZEXT416((uint)(__this->fields).CurrentSprintStamina);
    fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar17 = (float)local_b8._0_4_ - fVar15 * fVar17;
  }
  else {
    local_b8._0_4_ = (__this->fields).SprintStaminaRecover;
    fVar17 = (__this->fields).CurrentSprintStamina;
    fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar17 = fVar15 * (float)local_b8._0_4_ + fVar17;
  }
  fVar15 = (__this->fields).MaxSprintStamina;
  if (fVar17 <= fVar15) {
    fVar15 = fVar17;
  }
  fVar15 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar15);
  (__this->fields).CurrentSprintStamina = fVar15;
  iVar8 = (__this->fields).State;
  if (iVar8 == 0x19) {
    if ((0.0 < fVar15) && ((__this->fields).IsSprint != false)) {
      return;
    }
    (*(__this->klass->vtable)._163_Idle.methodPtr)(__this,0.2,(__this->klass->vtable)._163_Idle.method);
    iVar8 = (__this->fields).State;
  }
  switch(iVar8) {
  case 4:
    if ((__this->fields).AI == false) {
      UVar19 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)
                         (__this,(__this->klass->vtable)._76_GetAimPoint.method);
      pCVar3 = (__this->fields).BaseTitanCache;
      if (pCVar3 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_05c29fd5;
      local_b8._0_4_ = UVar19.fields.z;
      pUVar5 = (pCVar3->fields).Head;
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05c29fd5;
      UVar18 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      local_d8._0_4_ = UVar19.fields.x;
      local_d8._4_4_ = UVar19.fields.y;
      local_a8._0_4_ = (float)local_d8 - UVar18.fields.x;
      local_a8._4_4_ = local_d8._4_4_ - UVar18.fields.y;
      local_a0 = (float)local_b8._0_4_ - UVar18.fields.z;
      fVar17 = (float)il2cpp_runtime_helper_0599adc0(&local_a8,0);
      fVar17 = fVar17 / (__this->fields).JumpForce;
      UVar19 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                         (__this,(__this->klass->vtable)._58_get_Gravity.method);
      local_90 = UVar19.fields.z;
      local_98 = UVar19.fields._0_8_;
      fVar15 = (float)il2cpp_runtime_helper_0599adc0();
      local_a8._4_4_ = fVar15 * 0.5 * fVar17 * fVar17 + local_a8._4_4_;
      (__this->fields)._jumpDirection.fields.z = local_a0;
      (__this->fields)._jumpDirection.fields.x = (float)local_a8;
      (__this->fields)._jumpDirection.fields.y = local_a8._4_4_;
    }
    break;
  case 6:
  case 7:
  case 0xf:
  case 0x19:
    return;
  case 10:
    (*(__this->klass->vtable)._187_UpdateAttack.methodPtr)
              (__this,(__this->klass->vtable)._187_UpdateAttack.method);
    break;
  case 0x17:
  case 0x1b:
    (*(__this->klass->vtable)._188_UpdateEat.methodPtr)(__this,(__this->klass->vtable)._188_UpdateEat.method);
    break;
  case 0x18:
    (*(__this->klass->vtable)._180_UpdateTurn.methodPtr)
              (__this,(__this->klass->vtable)._180_UpdateTurn.method);
  }
  fVar17 = (__this->fields)._stateTimeLeft;
  fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar17 = fVar17 - fVar15;
  (__this->fields)._stateTimeLeft = fVar17;
  if (0.0 < fVar17) {
    return;
  }
  iVar8 = *piVar14;
  if (iVar8 == 10) {
    x = (__this->fields).HoldHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      (*(__this->klass->vtable)._160_Eat.methodPtr)(__this,(__this->klass->vtable)._160_Eat.method);
      return;
    }
    iVar8 = *piVar14;
  }
  switch(iVar8) {
  case 0:
    if ((__this->fields).HasDirection == false) {
      if ((__this->fields).IsSit == false) {
        return;
      }
      pCVar1 = (__this->fields).BaseTitanAnimations;
      if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
        pSVar10 = (*(pCVar1->klass->vtable)._15_get_SitDown.methodPtr)
                            (pCVar1,(pCVar1->klass->vtable)._15_get_SitDown.method);
        bVar6 = System_String__op_Inequality(pSVar10,"",(MethodInfo *)0x0);
        if (!bVar6) {
          return;
        }
        pCVar1 = (__this->fields).BaseTitanAnimations;
        if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
          pSVar10 = (*(pCVar1->klass->vtable)._15_get_SitDown.methodPtr)
                              (pCVar1,(pCVar1->klass->vtable)._15_get_SitDown.method);
          Characters_BaseTitan__StateAction(__this,0x14,pSVar10,0.1,true,in_R8);
          return;
        }
      }
      goto label_05c29fd5;
    }
    bVar6 = (__this->fields).IsSprint;
    if ((__this->fields).IsWalk == false) {
      if (bVar6 == false) goto label_05c29fbd;
    }
    else if (bVar6 == false) goto label_05c29f8a;
    if ((1.0 < (__this->fields).CurrentSprintStamina) &&
       (bVar6 = (*(__this->klass->vtable)._123_get_CanSprint.methodPtr)
                          (__this,(__this->klass->vtable)._123_get_CanSprint.method), bVar6))
    goto label_05c29f65;
label_05c29fbd:
    pCVar11 = __this->klass;
    goto label_05c29fc0;
  case 1:
    if ((__this->fields).HasDirection == false) {
label_05c29c90:
      (*(__this->klass->vtable)._163_Idle.methodPtr)(__this,0.2,(__this->klass->vtable)._163_Idle.method);
      return;
    }
    if ((__this->fields).IsSprint == false) {
      if ((__this->fields).IsWalk == false) {
        return;
      }
label_05c29f8a:
      pCVar11 = __this->klass;
label_05c29f9b:
      (*(pCVar11->vtable)._161_Walk.methodPtr)(__this,(pCVar11->vtable)._161_Walk.method);
      return;
    }
    bVar6 = (*(__this->klass->vtable)._123_get_CanSprint.methodPtr)
                      (__this,(__this->klass->vtable)._123_get_CanSprint.method);
    if (!bVar6) {
      return;
    }
    if ((__this->fields).CurrentSprintStamina <= 1.0) {
      return;
    }
    goto label_05c29f65;
  case 2:
    if ((__this->fields).AI == false) {
      pUVar4 = (__this->fields).Cache;
      if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) {
label_05c29fd5:
        ThrowNullReferenceException();
      }
      UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      fVar17 = UVar19.fields.z;
      local_b8._0_4_ = fVar17;
      uVar16 = il2cpp_runtime_helper_05bbcf10(0);
      pUVar4 = (__this->fields).Cache;
      if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
         (pCVar13 = (Characters_BaseTitan_o *)(pUVar4->fields).Transform,
         pCVar13 == (Characters_BaseTitan_o *)0x0)) goto label_05c29fd5;
      fVar15 = (__this->fields).Size;
      local_d8._0_4_ = UVar19.fields.x;
      local_d8._4_4_ = UVar19.fields.y;
      local_b8._0_4_ = (float)local_b8._0_4_ + fVar17 * 3.0 * fVar15;
      pMVar12 = (MethodInfo *)0x0;
      UVar19 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)pCVar13,(MethodInfo *)0x0);
      local_bc = UVar19.fields.z;
      local_88._8_4_ = extraout_XMM0_Dc_00;
      local_88._0_8_ = UVar19.fields._0_8_;
      local_88._12_4_ = extraout_XMM0_Dd_00;
      local_c0 = (__this->fields).Size;
      local_c8[0] = Characters_BaseTitan__get_MapObjectMask(pCVar13,pMVar12);
      iVar9 = UnityEngine_LayerMask__get_value(local_c8,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
      }
      origin.fields.z = (float)local_b8._0_4_;
      origin.fields.x = (float)local_d8 + fVar15 * (float)uVar16 * 3.0;
      origin.fields.y = local_d8._4_4_ + fVar15 * (float)((ulong)uVar16 >> 0x20) * 3.0;
      direction.fields.z = local_bc;
      direction.fields.x = (float)local_88._0_4_;
      direction.fields.y = (float)local_88._4_4_;
      bVar6 = UnityEngine_Physics__Raycast_69d9ca0
                        (origin,direction,&local_78,local_c0 * 5.0,iVar9,(MethodInfo *)0x0);
      if (bVar6) {
        (*(__this->klass->vtable)._159_WallClimb.methodPtr)
                  (__this,(__this->klass->vtable)._159_WallClimb.method);
      }
    }
    if ((__this->fields).HasDirection == false) goto label_05c29c90;
    if ((__this->fields).IsSprint != false) {
      if (0.0 < (__this->fields).CurrentSprintStamina) {
        return;
      }
      goto label_05c29fbd;
    }
    pCVar11 = __this->klass;
    if ((__this->fields).IsWalk != false) goto label_05c29f9b;
label_05c29fc0:
    (*(pCVar11->vtable)._157_Run.methodPtr)(__this,(pCVar11->vtable)._157_Run.method);
    break;
  case 3:
    if ((__this->fields).HasDirection == false) goto label_05c29c90;
    if ((__this->fields).IsSprint == false) {
      if ((__this->fields).IsWalk != false) {
        return;
      }
      goto label_05c29fbd;
    }
    if ((__this->fields).CurrentSprintStamina <= 1.0) {
      return;
    }
    bVar6 = (*(__this->klass->vtable)._123_get_CanSprint.methodPtr)
                      (__this,(__this->klass->vtable)._123_get_CanSprint.method);
    if (!bVar6) {
      return;
    }
label_05c29f65:
    (*(__this->klass->vtable)._158_Sprint.methodPtr)(__this,(__this->klass->vtable)._158_Sprint.method);
    break;
  case 4:
    (*(__this->klass->vtable)._149_StartJump.methodPtr)(__this,(__this->klass->vtable)._149_StartJump.method);
    break;
  case 5:
    *piVar14 = 6;
    break;
  default:
    (*(__this->klass->vtable)._162_Idle.methodPtr)(__this,(__this->klass->vtable)._162_Idle.method);
    break;
  case 8:
  case 0x10:
  case 0x15:
    pCVar11 = __this->klass;
    pMVar12 = (pCVar11->vtable)._164_IdleWait.method;
    fVar17 = 0.3;
    goto label_05c29e21;
  case 9:
  case 0x1a:
    fVar17 = (__this->fields).ActionPause;
    goto label_05c29e17;
  case 10:
  case 0x17:
    fVar17 = (__this->fields).AttackPause;
    goto label_05c29e17;
  case 0xb:
    pCVar11 = __this->klass;
    pMVar12 = (pCVar11->vtable)._164_IdleWait.method;
    fVar17 = 0.2;
    goto label_05c29e21;
  case 0x11:
    goto switchD_05c298d6_caseD_11;
  case 0x12:
    if (0.0 <= (__this->fields)._crippleEndTime) {
      pSVar10 = (*(__this->klass->vtable)._181_GetSitIdleAniamtion.methodPtr)
                          (__this,(__this->klass->vtable)._181_GetSitIdleAniamtion.method);
      fVar17 = (__this->fields)._crippleEndTime;
      fVar15 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      fVar17 = fVar17 - fVar15;
      fVar15 = 0.0;
      if (0.0 <= fVar17) {
        fVar15 = fVar17;
      }
      iVar9 = 0x11;
    }
    else {
      pCVar1 = (__this->fields).BaseTitanAnimations;
      if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c29fd5;
      pSVar10 = (*(pCVar1->klass->vtable)._14_get_SitIdle.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._14_get_SitIdle.method);
      fVar15 = 0.3;
      iVar9 = 0x16;
    }
    Characters_BaseTitan__StateActionWithTime(__this,iVar9,pSVar10,fVar15,0.3,true,0.0,in_R8);
    (__this->fields)._crippleEndTime = -1.0;
    break;
  case 0x13:
    pSVar10 = (*(__this->klass->vtable)._181_GetSitIdleAniamtion.methodPtr)
                        (__this,(__this->klass->vtable)._181_GetSitIdleAniamtion.method);
    fVar17 = (__this->fields)._currentCrippleTime;
    iVar9 = 0x11;
    goto label_05c29dae;
  case 0x14:
    pSVar10 = (*(__this->klass->vtable)._181_GetSitIdleAniamtion.methodPtr)
                        (__this,(__this->klass->vtable)._181_GetSitIdleAniamtion.method);
    fVar17 = 0.0;
    iVar9 = 0x16;
label_05c29dae:
    Characters_BaseTitan__StateActionWithTime(__this,iVar9,pSVar10,fVar17,0.1,true,0.0,in_R8);
    break;
  case 0x16:
    if (((__this->fields).HasDirection == false) && ((__this->fields).IsSit != false)) {
      return;
    }
    goto switchD_05c298d6_caseD_11;
  case 0x18:
    fVar17 = (__this->fields).TurnPause;
label_05c29e17:
    pCVar11 = __this->klass;
    pMVar12 = (pCVar11->vtable)._164_IdleWait.method;
label_05c29e21:
    (*(pCVar11->vtable)._164_IdleWait.methodPtr)(__this,fVar17,pMVar12);
  }
  return;
switchD_05c298d6_caseD_11:
  pSVar10 = (*(__this->klass->vtable)._183_GetSitUpAnimation.methodPtr)
                      (__this,(__this->klass->vtable)._183_GetSitUpAnimation.method);
  Characters_BaseTitan__StateAction(__this,0x15,pSVar10,0.1,true,in_R8);
  (*(__this->klass->vtable)._170_RegenerateWardedWeakSpot.methodPtr)
            (__this,(__this->klass->vtable)._170_RegenerateWardedWeakSpot.method);
  return;
}


// Characters.BaseTitan$$StopWallClimb
// il2cpp: void Characters_BaseTitan__StopWallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c29fe0

void Characters_BaseTitan__StopWallClimb(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._163_Idle.methodPtr)(__this,0.2,(__this->klass->vtable)._163_Idle.method);
  return;
}


// Characters.BaseTitan$$FixedUpdate
// il2cpp: void Characters_BaseTitan__FixedUpdate (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2a000
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c2a318: jmp 0x5c2aa86
// asm:   0x5c2a3e2: jmp 0x5c2a586
// asm:   0x5c2a404: jmp 0x5c2aa86
// asm:   0x5c2addf: movaps xmm0, xmm3
// asm:   0x5c2ade2: jmp 0x5c2ae79

void Characters_BaseTitan__FixedUpdate(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o **ppUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  Characters_TitanDeathDissolve_o *pCVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Transform_o *__this_00;
  Characters_BaseTitanComponentCache_o *pCVar9;
  UnityEngine_Transform_o *pUVar10;
  System_Collections_Generic_Dictionary_string__float__o *pSVar11;
  Characters_AnimationHandler_o *pCVar12;
  bool bVar13;
  uint uVar14;
  int32_t layerMask;
  MethodInfo *pMVar15;
  Characters_BaseTitan_o *__this_01;
  UnityEngine_Rigidbody_o *pUVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  undefined8 uVar20;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  undefined8 local_c8;
  undefined8 local_b8;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  UnityEngine_LayerMask_o local_70 [2];
  UnityEngine_RaycastHit_o local_68;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_0754778a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&"Gravity");
    Il2CppMethodInitialized_0754778a = '\x01';
  }
  local_68.fields.m_UV.fields.x = 0.0;
  local_68.fields.m_UV.fields.y = 0.0;
  local_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_68.fields.m_Normal.fields.y = 0.0;
  local_68.fields.m_Normal.fields.z = 0.0;
  local_68.fields.m_FaceID = 0;
  local_68.fields.m_Distance = 0.0;
  local_68.fields.m_Point.fields.x = 0.0;
  local_68.fields.m_Point.fields.y = 0.0;
  local_68.fields.m_Point.fields.z = 0.0;
  local_68.fields.m_Normal.fields.x = 0.0;
  local_70[0].fields.m_Mask = (UnityEngine_LayerMask_Fields)0;
  pCVar7 = (__this->fields).DeathDissolve;
  if ((pCVar7 != (Characters_TitanDeathDissolve_o *)0x0) &&
     ((pCVar7->fields)._CollidersDisabled_k__BackingField != false)) {
    return;
  }
  Characters_BaseCharacter__FixedUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar13 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar13) {
    return;
  }
  fVar18 = (__this->fields)._checkGroundTimeLeft;
  fVar17 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields)._checkGroundTimeLeft = fVar18 - fVar17;
  fVar18 = (__this->fields)._launchTimeLeft;
  fVar17 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields)._launchTimeLeft = fVar18 - fVar17;
  pUVar8 = (__this->fields).Cache;
  if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar16 = (pUVar8->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0)) goto label_05c2af0e;
  bVar13 = UnityEngine_Rigidbody__get_isKinematic(pUVar16,(MethodInfo *)0x0);
  iVar6 = (__this->fields).State;
  if (((iVar6 == 0x16) || (iVar6 == 0)) &&
     (((((__this->fields).AI != false && ((__this->fields).Grounded != false)) &&
       ((__this->fields).CurrentSpeed <= 0.1)) && ((__this->fields)._disableKinematicTimeLeft <= 0.0)))) {
    if (!bVar13) {
      Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,true,0.0,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ppUVar1 = &(__this->fields).Cache;
  if (bVar13) {
    Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,false,0.0,(MethodInfo *)0x0);
  }
  if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar16 = ((*ppUVar1)->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0)) goto label_05c2af0e;
  pMVar15 = (MethodInfo *)0x0;
  UVar25 = UnityEngine_Rigidbody__get_linearVelocity(pUVar16,(MethodInfo *)0x0);
  fVar17 = UVar25.fields.y;
  fVar18 = 0.0;
  if (fVar17 < 0.0) {
    fVar19 = (__this->fields)._currentFallTotalTime;
    fVar18 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    fVar18 = fVar18 + fVar19;
  }
  (__this->fields)._currentFallTotalTime = fVar18;
  if ((10.0 <= fVar18 & (__this->fields).AI) != 0) {
    if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar16 = ((*ppUVar1)->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0))
    goto label_05c2af0e;
    UVar25 = UnityEngine_Rigidbody__get_linearVelocity(pUVar16,(MethodInfo *)0x0);
    pMVar15 = (__this->klass->vtable)._58_get_Gravity.method;
    UVar26 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)(__this,pMVar15);
    fVar17 = UVar26.fields.z;
    if (UVar25.fields.y <= UVar26.fields.y * 10.0) {
      pMVar15 = (MethodInfo *)"Gravity";
      (*(__this->klass->vtable)._92_GetKilledRPC.methodPtr)
                (__this,"Gravity",(__this->klass->vtable)._92_GetKilledRPC.method);
    }
  }
  if ((((__this->fields)._checkGroundTimeLeft <= 0.0) || ((__this->fields).AI == false)) ||
     ((uVar14 = (__this->fields).State, uVar14 < 10 && ((0x2a0U >> (uVar14 & 0x1f) & 1) != 0)))) {
    (*(__this->klass->vtable)._107_CheckGround.methodPtr)
              (__this,(__this->klass->vtable)._107_CheckGround.method);
    pMVar15 = (__this->klass->vtable)._136_get_CheckGroundTime.method;
    fVar18 = (*(__this->klass->vtable)._136_get_CheckGroundTime.methodPtr)(__this,pMVar15);
    (__this->fields)._checkGroundTimeLeft = fVar18;
    uVar14 = (__this->fields).State;
  }
  if (uVar14 == 7) {
    if (((__this->fields).Grounded == false) || (0.0 < (__this->fields)._launchTimeLeft)) {
      if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar16 = ((*ppUVar1)->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0))
      goto label_05c2af0e;
      UVar25 = UnityEngine_Rigidbody__get_linearVelocity(pUVar16,(MethodInfo *)0x0);
      if (-1.0 <= UVar25.fields.y) {
        fVar18 = (__this->fields)._currentFallStuckTime;
        fVar17 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
        fVar17 = fVar17 + fVar18;
        (__this->fields)._currentFallStuckTime = fVar17;
        if (0.5 < fVar17) goto label_05c2a3a7;
      }
    }
    else {
label_05c2a37e:
      Characters_BaseTitan__SetDefaultVelocity(__this,pMVar15);
      uVar20 = il2cpp_runtime_helper_05b8d690(0);
      (__this->fields).LastTargetDirection.fields.x = (float)(int)uVar20;
      (__this->fields).LastTargetDirection.fields.y = (float)(int)((ulong)uVar20 >> 0x20);
      (__this->fields).LastTargetDirection.fields.z = fVar17;
      iVar6 = (__this->fields).State;
      if (iVar6 == 7) {
label_05c2a3a7:
        (*(__this->klass->vtable)._165_Land.methodPtr)(__this,(__this->klass->vtable)._165_Land.method);
      }
      else if (((__this->fields).HasDirection != false) && (iVar6 - 1U < 3)) {
        UVar25 = (*(__this->klass->vtable)._106_GetTargetDirection.methodPtr)
                           (__this,(__this->klass->vtable)._106_GetTargetDirection.method);
        (__this->fields).LastTargetDirection.fields.x = UVar25.fields.x;
        (__this->fields).LastTargetDirection.fields.y = UVar25.fields.y;
        (__this->fields).LastTargetDirection.fields.z = UVar25.fields.z;
        iVar6 = (__this->fields).State;
        if (iVar6 == 3) {
          if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar16 = ((*ppUVar1)->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0))
          goto label_05c2af0e;
          UVar25 = UnityEngine_Rigidbody__get_linearVelocity(pUVar16,(MethodInfo *)0x0);
          fVar17 = UVar25.fields.z;
          if (*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) goto label_05c2af0e;
          local_b8 = UVar25.fields._0_8_;
          pUVar10 = ((*ppUVar1)->fields).Transform;
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05c2af0e;
          UVar25 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
          fVar18 = UVar25.fields.z;
          local_c8._0_4_ = UVar25.fields.x;
          local_c8._4_4_ = UVar25.fields.y;
          fVar19 = (__this->fields).WalkSpeedPerLevel * (__this->fields).Size + (__this->fields).WalkSpeedBase
          ;
label_05c2a910:
          fVar18 = fVar18 * fVar19;
          local_c8._0_4_ = (float)local_c8 * fVar19;
          local_c8._4_4_ = local_c8._4_4_ * fVar19;
        }
        else {
          if (iVar6 != 2) {
            if (iVar6 != 1) goto label_05c2aa86;
            if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar16 = ((*ppUVar1)->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_05c2af0e;
            UVar25 = UnityEngine_Rigidbody__get_linearVelocity(pUVar16,(MethodInfo *)0x0);
            fVar17 = UVar25.fields.z;
            if (*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) goto label_05c2af0e;
            local_b8 = UVar25.fields._0_8_;
            pUVar10 = ((*ppUVar1)->fields).Transform;
            if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05c2af0e;
            UVar25 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
            fVar18 = UVar25.fields.z;
            local_c8._0_4_ = UVar25.fields.x;
            local_c8._4_4_ = UVar25.fields.y;
            fVar19 = (__this->fields).RunSpeedPerLevel * (__this->fields).Size + (__this->fields).RunSpeedBase
            ;
            goto label_05c2a910;
          }
          if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
             (pUVar16 = ((*ppUVar1)->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0))
          goto label_05c2af0e;
          UVar25 = UnityEngine_Rigidbody__get_linearVelocity(pUVar16,(MethodInfo *)0x0);
          fVar17 = UVar25.fields.z;
          if (*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) goto label_05c2af0e;
          local_b8 = UVar25.fields._0_8_;
          pUVar10 = ((*ppUVar1)->fields).Transform;
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05c2af0e;
          UVar25 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
          fVar19 = (__this->fields).RunSpeedPerLevel * (__this->fields).Size + (__this->fields).RunSpeedBase;
          fVar18 = UVar25.fields.z * fVar19 * 1.5;
          local_c8._0_4_ = UVar25.fields.x * fVar19 * 1.5;
          local_c8._4_4_ = UVar25.fields.y * fVar19 * 1.5;
        }
        local_c8._0_4_ = (float)local_c8 + (float)local_b8;
        local_c8._4_4_ = local_c8._4_4_ + local_b8._4_4_;
        fVar18 = fVar18 + fVar17;
label_05c2a9a6:
        value.fields.y = local_c8._4_4_;
        value.fields.x = (float)local_c8;
        value.fields.z = fVar18;
        UnityEngine_Rigidbody__set_linearVelocity(pUVar16,value,(MethodInfo *)0x0);
      }
    }
  }
  else {
    (__this->fields)._currentFallStuckTime = 0.0;
    if ((__this->fields).AI == false) {
      if (uVar14 < 0x1b) {
        if ((0x4108010U >> (uVar14 & 0x1f) & 1) == 0) {
          if (uVar14 == 6) goto label_05c2a539;
          if (uVar14 != 10) goto label_05c2a34f;
          goto label_05c2a503;
        }
        if (0.0 < (__this->fields)._launchTimeLeft) goto label_05c2a334;
label_05c2a586:
        Characters_BaseTitan__SetDefaultVelocityLerp(__this,pMVar15);
      }
      else {
label_05c2a34f:
        if ((__this->fields).Grounded == false) {
          if (uVar14 == 0x19) {
label_05c2a59c:
            if (*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) goto label_05c2af0e;
            pUVar16 = ((*ppUVar1)->fields).Rigidbody;
            uVar20 = il2cpp_runtime_helper_05b8d690(0);
            if (pUVar16 == (UnityEngine_Rigidbody_o *)0x0) goto label_05c2af0e;
            UVar25.fields.z = fVar17;
            UVar25.fields.x = (float)(int)uVar20;
            UVar25.fields.y = (float)(int)((ulong)uVar20 >> 0x20);
            UnityEngine_Rigidbody__set_linearVelocity(pUVar16,UVar25,(MethodInfo *)0x0);
            UVar25 = (*(__this->klass->vtable)._106_GetTargetDirection.methodPtr)
                               (__this,(__this->klass->vtable)._106_GetTargetDirection.method);
            if ((__this->fields).HasDirection == false) {
label_05c2aa73:
              (*(__this->klass->vtable)._185_StopWallClimb.methodPtr)
                        (__this,(__this->klass->vtable)._185_StopWallClimb.method);
              goto label_05c2aa86;
            }
            if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar10 = ((*ppUVar1)->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0))
            goto label_05c2af0e;
            UVar26 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
            local_c8._0_4_ = UVar25.fields.x;
            fVar18 = (float)il2cpp_runtime_helper_059d7e70((float)local_c8,UVar25.fields.z,UVar26.fields._0_8_,0);
            if (135.0 <= fVar18) goto label_05c2aa73;
            if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar10 = ((*ppUVar1)->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0))
            goto label_05c2af0e;
            UVar25 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
            fVar18 = UVar25.fields.z;
            uVar20 = il2cpp_runtime_helper_05bbcf10(0);
            pUVar8 = (__this->fields).Cache;
            if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
               (__this_01 = (Characters_BaseTitan_o *)(pUVar8->fields).Transform,
               __this_01 == (Characters_BaseTitan_o *)0x0)) goto label_05c2af0e;
            fVar17 = (__this->fields).Size;
            local_c8._0_4_ = UVar25.fields.x;
            local_c8._4_4_ = UVar25.fields.y;
            pMVar15 = (MethodInfo *)0x0;
            UVar26 = UnityEngine_Transform__get_forward
                               ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
            fVar19 = (__this->fields).Size;
            local_70[0] = Characters_BaseTitan__get_MapObjectMask(__this_01,pMVar15);
            layerMask = UnityEngine_LayerMask__get_value(local_70,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
            }
            origin.fields.z = UVar25.fields.z + fVar18 * 3.0 * fVar17;
            origin.fields.x = (float)local_c8 + fVar17 * (float)uVar20 * 3.0;
            origin.fields.y = local_c8._4_4_ + fVar17 * (float)((ulong)uVar20 >> 0x20) * 3.0;
            bVar13 = UnityEngine_Physics__Raycast_69d9ca0
                               (origin,UVar26,&local_68,fVar19 * 5.0,layerMask,(MethodInfo *)0x0);
            pUVar8 = *ppUVar1;
            if (!bVar13) {
              if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
                 (pUVar10 = (pUVar8->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0))
              goto label_05c2af0e;
              UVar25 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
              fVar18 = UVar25.fields.z;
              uVar20 = il2cpp_runtime_helper_05bbcf10(0);
              pUVar8 = (__this->fields).Cache;
              if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
                 (__this_00 = (pUVar8->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
              goto label_05c2af0e;
              fVar17 = (__this->fields).Size;
              UVar26 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
              fVar19 = (__this->fields).Size;
              local_b8._0_4_ = UVar25.fields.x;
              local_b8._4_4_ = UVar25.fields.y;
              value_00.fields.x =
                   (UVar26.fields.x + UVar26.fields.x) * fVar19 + fVar17 * (float)uVar20 * 3.0 +
                   (float)local_b8;
              value_00.fields.y =
                   (UVar26.fields.y + UVar26.fields.y) * fVar19 +
                   fVar17 * (float)((ulong)uVar20 >> 0x20) * 3.0 + local_b8._4_4_;
              value_00.fields.z =
                   (UVar26.fields.z + UVar26.fields.z) * fVar19 + fVar18 * 3.0 * fVar17 + UVar25.fields.z;
              UnityEngine_Transform__set_position(pUVar10,value_00,(MethodInfo *)0x0);
              goto label_05c2aa73;
            }
            if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar16 = (pUVar8->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_05c2af0e;
            UVar25 = UnityEngine_Rigidbody__get_linearVelocity(pUVar16,(MethodInfo *)0x0);
            fVar18 = UVar25.fields.z;
            uVar20 = il2cpp_runtime_helper_05bbcf10(0);
            fVar17 = (__this->fields).RunSpeedPerLevel * (__this->fields).Size * 0.5 +
                     (__this->fields).RunSpeedBase;
            local_b8._0_4_ = UVar25.fields.x;
            local_b8._4_4_ = UVar25.fields.y;
            UVar26.fields.x = (float)uVar20 * fVar17 + (float)local_b8;
            UVar26.fields.y = (float)((ulong)uVar20 >> 0x20) * fVar17 + local_b8._4_4_;
            UVar26.fields.z = fVar18 * fVar17 + UVar25.fields.z;
            UnityEngine_Rigidbody__set_linearVelocity(pUVar16,UVar26,(MethodInfo *)0x0);
            fVar18 = UnityEngine_RaycastHit__get_distance(&local_68,(MethodInfo *)0x0);
            if (fVar18 <= (__this->fields).Size * 3.5) goto label_05c2aa86;
            if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar16 = ((*ppUVar1)->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_05c2af0e;
            UVar25 = UnityEngine_Rigidbody__get_linearVelocity(pUVar16,(MethodInfo *)0x0);
            if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar10 = ((*ppUVar1)->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0))
            goto label_05c2af0e;
            UVar26 = UnityEngine_Transform__get_forward(pUVar10,(MethodInfo *)0x0);
            fVar18 = UnityEngine_RaycastHit__get_distance(&local_68,(MethodInfo *)0x0);
            local_38 = ZEXT416((uint)(__this->fields).Size);
            fVar17 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
            fVar17 = ((float)local_38._0_4_ * -3.5 + fVar18) / fVar17;
            if (10.0 <= fVar17) {
              fVar17 = 10.0;
            }
            local_98 = UVar26.fields.x;
            fStack_94 = UVar26.fields.y;
            local_c8._0_4_ = UVar25.fields.x;
            local_c8._4_4_ = UVar25.fields.y;
            local_c8._0_4_ = (float)local_c8 + fVar17 * local_98;
            local_c8._4_4_ = local_c8._4_4_ + fVar17 * fStack_94;
            fVar18 = UVar25.fields.z + UVar26.fields.z * fVar17;
            goto label_05c2a9a6;
          }
        }
        else if (uVar14 != 5) {
          if (uVar14 == 0x19) goto label_05c2a59c;
          if ((__this->fields)._launchTimeLeft <= 0.0) goto label_05c2a37e;
        }
      }
    }
    else {
label_05c2a334:
      if (uVar14 == 0xf) {
        if (((__this->fields).Grounded != false) && ((__this->fields)._launchTimeLeft <= 0.0)) {
label_05c2a52c:
          Characters_BaseTitan__SetDefaultVelocity(__this,pMVar15);
        }
      }
      else if (uVar14 == 10) {
label_05c2a503:
        pMVar15 = (__this->klass->vtable)._186_FixedUpdateAttack.method;
        (*(__this->klass->vtable)._186_FixedUpdateAttack.methodPtr)(__this,pMVar15);
        if ((__this->fields).Grounded != false) {
          if ((__this->fields).AI == false) goto label_05c2a586;
          goto label_05c2a52c;
        }
      }
      else {
        if (uVar14 != 6) goto label_05c2a34f;
label_05c2a539:
        if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar16 = ((*ppUVar1)->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_05c2af0e;
        UVar25 = UnityEngine_Rigidbody__get_linearVelocity(pUVar16,(MethodInfo *)0x0);
        if (UVar25.fields.y <= 1.0) {
          (*(__this->klass->vtable)._166_Fall.methodPtr)(__this,(__this->klass->vtable)._166_Fall.method);
        }
      }
    }
  }
label_05c2aa86:
  if ((__this->fields)._needFreshCore != false) {
    pCVar9 = (__this->fields).BaseTitanCache;
    if ((pCVar9 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (pUVar10 = (pCVar9->fields).Core, pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_05c2af0e;
    UVar25 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    pCVar9 = (__this->fields).BaseTitanCache;
    if ((pCVar9 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (pUVar10 = (pCVar9->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_05c2af0e;
    UVar26 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    local_c8._0_4_ = UVar25.fields.x;
    local_c8._4_4_ = UVar25.fields.y;
    (__this->fields)._furthestCoreLocalPosition.fields.x = (float)local_c8 - UVar26.fields.x;
    (__this->fields)._furthestCoreLocalPosition.fields.y = local_c8._4_4_ - UVar26.fields.y;
    (__this->fields)._furthestCoreLocalPosition.fields.z = UVar25.fields.z - UVar26.fields.z;
    fVar18 = (__this->fields)._furthestCoreLocalPosition.fields.y;
    (__this->fields)._previousCoreLocalPosition.fields.x =
         (__this->fields)._furthestCoreLocalPosition.fields.x;
    (__this->fields)._previousCoreLocalPosition.fields.y = fVar18;
    (__this->fields)._previousCoreLocalPosition.fields.z =
         (__this->fields)._furthestCoreLocalPosition.fields.z;
    (__this->fields)._needFreshCore = false;
  }
  pSVar11 = (__this->fields)._rootMotionAnimations;
  if (pSVar11 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_05c2af0e;
  bVar13 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                      (Il2CppObject *)(__this->fields)._currentStateAnimation,
                      (MethodInfo_4AB5680 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
  if (bVar13) {
    pCVar12 = (__this->fields).Animation;
    if (pCVar12 == (Characters_AnimationHandler_o *)0x0) goto label_05c2af0e;
    bVar13 = Characters_AnimationHandler__IsPlaying
                       (pCVar12,(__this->fields)._currentStateAnimation,(MethodInfo *)0x0);
    if (bVar13) {
      pCVar12 = (__this->fields).Animation;
      if (pCVar12 == (Characters_AnimationHandler_o *)0x0) goto label_05c2af0e;
      fVar18 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar12,(MethodInfo *)0x0);
      pSVar11 = (__this->fields)._rootMotionAnimations;
      if (pSVar11 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_05c2af0e;
      fVar17 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
                          (Il2CppObject *)(__this->fields)._currentStateAnimation,
                          (MethodInfo_4AB53E0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      if (fVar18 < fVar17) {
        pCVar9 = (__this->fields).BaseTitanCache;
        if ((pCVar9 == (Characters_BaseTitanComponentCache_o *)0x0) ||
           (pUVar10 = (pCVar9->fields).Core, pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_05c2af0e;
        UVar25 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
        pCVar9 = (__this->fields).BaseTitanCache;
        if ((pCVar9 == (Characters_BaseTitanComponentCache_o *)0x0) ||
           (pUVar10 = (pCVar9->fields).Transform, pUVar10 == (UnityEngine_Transform_o *)0x0))
        goto label_05c2af0e;
        UVar26 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
        }
        local_b8._0_4_ = UVar25.fields.x;
        local_b8._4_4_ = UVar25.fields.y;
        local_b8._0_4_ = (float)local_b8 - UVar26.fields.x;
        local_b8._4_4_ = local_b8._4_4_ - UVar26.fields.y;
        fVar18 = UVar25.fields.z - UVar26.fields.z;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar17 = fVar18 * fVar18 + local_b8._4_4_ * local_b8._4_4_ + (float)local_b8 * (float)local_b8;
        if (fVar17 < 0.0) {
          fVar17 = sqrtf(fVar17);
        }
        else {
          fVar17 = SQRT(fVar17);
        }
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
        }
        fVar19 = (__this->fields)._furthestCoreLocalPosition.fields.x;
        uVar2 = (__this->fields)._furthestCoreLocalPosition.fields.y;
        uVar4 = (__this->fields)._furthestCoreLocalPosition.fields.z;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        fVar19 = (float)uVar4 * (float)uVar4 + fVar19 * fVar19 + (float)uVar2 * (float)uVar2;
        if (fVar19 < 0.0) {
          fVar19 = sqrtf(fVar19);
        }
        else {
          fVar19 = SQRT(fVar19);
        }
        if (fVar19 <= fVar17) {
          uVar3 = (__this->fields)._previousCoreLocalPosition.fields.x;
          uVar5 = (__this->fields)._previousCoreLocalPosition.fields.y;
          fVar17 = (__this->fields)._previousCoreLocalPosition.fields.z;
          fVar19 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          auVar23._0_4_ = -((float)local_b8 - (float)uVar3);
          auVar23._4_4_ = -(local_b8._4_4_ - (float)uVar5);
          auVar23._8_4_ = -((extraout_XMM0_Dc - extraout_XMM0_Dc_00) - 0.0);
          auVar23._12_4_ = -((extraout_XMM0_Dd - extraout_XMM0_Dd_00) - 0.0);
          fVar22 = -(fVar18 - fVar17) / fVar19;
          auVar24._4_4_ = fVar19;
          auVar24._0_4_ = fVar19;
          auVar24._8_4_ = fVar19;
          auVar24._12_4_ = fVar19;
          auVar24 = divps(auVar23,auVar24);
          (__this->fields)._furthestCoreLocalPosition.fields.x = (float)local_b8;
          (__this->fields)._furthestCoreLocalPosition.fields.y = local_b8._4_4_;
          (__this->fields)._furthestCoreLocalPosition.fields.z = fVar18;
          (__this->fields)._previousCoreLocalPosition.fields.x = (float)local_b8;
          (__this->fields)._previousCoreLocalPosition.fields.y = local_b8._4_4_;
          (__this->fields)._previousCoreLocalPosition.fields.z = fVar18;
          fVar18 = auVar24._0_4_;
          fVar17 = auVar24._4_4_;
          if ((__this->fields).AI == false) {
            fVar19 = fVar22;
            uVar20 = il2cpp_runtime_helper_05b8d690(0);
            fVar21 = (float)((ulong)uVar20 >> 0x20);
            if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar16 = ((*ppUVar1)->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_05c2af0e;
            UVar25 = UnityEngine_Rigidbody__get_linearVelocity(pUVar16,(MethodInfo *)0x0);
            if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pUVar16 = ((*ppUVar1)->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0))
            goto label_05c2af0e;
            fVar18 = (fVar18 - (float)uVar20) * 0.0435 + (float)uVar20 + UVar25.fields.x;
            fVar17 = (fVar17 - fVar21) * 0.0435 + fVar21 + UVar25.fields.y;
            fVar22 = (fVar22 - fVar19) * 0.0435 + fVar19 + UVar25.fields.z;
          }
          else if ((*ppUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
                  (pUVar16 = ((*ppUVar1)->fields).Rigidbody, pUVar16 == (UnityEngine_Rigidbody_o *)0x0))
          goto label_05c2af0e;
          value_01.fields.y = fVar17;
          value_01.fields.x = fVar18;
          value_01.fields.z = fVar22;
          UnityEngine_Rigidbody__set_linearVelocity(pUVar16,value_01,(MethodInfo *)0x0);
        }
      }
    }
  }
  if ((__this->fields).State == 0x19) {
label_05c2aebc:
    fVar18 = (__this->fields).ConfusedTime;
    if (fVar18 <= 0.0) {
      fVar18 = (__this->fields).PreviousAttackSpeedMultiplier;
      if (0.0 <= fVar18) {
        (__this->fields).AttackSpeedMultiplier = fVar18;
      }
    }
    else {
      fVar17 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this->fields).ConfusedTime = fVar18 - fVar17;
    }
    return;
  }
  if (*ppUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar16 = ((*ppUVar1)->fields).Rigidbody;
    UVar25 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                       (__this,(__this->klass->vtable)._58_get_Gravity.method);
    if (pUVar16 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__AddForce(pUVar16,UVar25,5,(MethodInfo *)0x0);
      goto label_05c2aebc;
    }
  }
label_05c2af0e:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$FixedUpdateAttack
// il2cpp: void Characters_BaseTitan__FixedUpdateAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2b000

void Characters_BaseTitan__FixedUpdateAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$SetDefaultVelocity
// il2cpp: void Characters_BaseTitan__SetDefaultVelocity (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2af20

void Characters_BaseTitan__SetDefaultVelocity(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Rigidbody_o *pUVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  
  pUVar3 = (__this->fields).Cache;
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar4 = (pUVar3->fields).Rigidbody, pUVar4 != (UnityEngine_Rigidbody_o *)0x0)) {
    fVar6 = (__this->fields)._currentGroundDistance;
    UVar7 = UnityEngine_Rigidbody__get_linearVelocity(pUVar4,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).Cache;
    if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
      pUVar4 = (pUVar3->fields).Rigidbody;
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      if (pUVar4 != (UnityEngine_Rigidbody_o *)0x0) {
        pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar6 = fVar6 * 100.0;
        if (100.0 <= fVar6) {
          fVar6 = 100.0;
        }
        fVar6 = UVar7.fields.y - fVar6;
        if (fVar6 <= -100.0) {
          fVar6 = -100.0;
        }
        UVar7.fields.z = (pUVar5->upVector).fields.z * fVar6;
        uVar1 = (pUVar5->upVector).fields.x;
        uVar2 = (pUVar5->upVector).fields.y;
        UVar7.fields.x = fVar6 * (float)uVar1;
        UVar7.fields.y = fVar6 * (float)uVar2;
        UnityEngine_Rigidbody__set_linearVelocity(pUVar4,UVar7,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$LateUpdate
// il2cpp: void Characters_BaseTitan__LateUpdate (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2b010

void Characters_BaseTitan__LateUpdate(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  float fVar4;
  UnityEngine_Quaternion_o UVar5;
  UnityEngine_Quaternion_o UVar6;
  float local_68;
  float fStack_64;
  float local_48;
  float fStack_44;
  UnityEngine_Quaternion_o local_30;
  UnityEngine_Quaternion_o local_20;
  
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if ((((bVar3) && (uVar1 = (__this->fields).State, uVar1 < 8)) && ((0xceU >> (uVar1 & 0x1f) & 1) != 0)) &&
     ((__this->fields).HasDirection != false)) {
    pUVar2 = (__this->fields).Cache;
    if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
       (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
      ThrowNullReferenceException();
    }
    UVar5 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
    UVar6 = (*(__this->klass->vtable)._105_GetTargetRotation.methodPtr)
                      (__this,(__this->klass->vtable)._105_GetTargetRotation.method);
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    local_48 = UVar5.fields.x;
    fStack_44 = UVar5.fields.y;
    local_20.fields.z = UVar5.fields.z;
    local_20.fields.w = UVar5.fields.w;
    local_20.fields.x = local_48;
    local_20.fields.y = fStack_44;
    local_68 = UVar6.fields.x;
    fStack_64 = UVar6.fields.y;
    local_30.fields.z = UVar6.fields.z;
    local_30.fields.w = UVar6.fields.w;
    local_30.fields.x = local_68;
    local_30.fields.y = fStack_64;
    UVar5 = UnityEngine_Quaternion__Internal_Lerp
                      (&local_20,&local_30,fVar4 * (__this->fields).RotateSpeed,(MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation(__this_00,UVar5,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BaseTitan$$IsPlayingClip
// il2cpp: bool Characters_BaseTitan__IsPlayingClip (Characters_BaseTitan_o* __this, System_String_o* clip, const MethodInfo* method);
// 0x5c2b110

bool Characters_BaseTitan__IsPlayingClip
               (Characters_BaseTitan_o *__this,System_String_o *clip,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754778b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754778b = '\x01';
  }
  bVar1 = System_String__op_Inequality(clip,"",(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields).Animation;
    if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = Characters_AnimationHandler__IsPlaying(__this_00,clip,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// Characters.BaseTitan$$CheckGround
// il2cpp: void Characters_BaseTitan__CheckGround (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2b180

void Characters_BaseTitan__CheckGround(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  Characters_BaseTitanComponentCache_o *pCVar4;
  UnityEngine_Component_o *__this_00;
  UnityEngine_CapsuleCollider_o *__this_01;
  Utility_BaseComponentCache_o *pUVar5;
  bool bVar6;
  int32_t layerMask;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  float fVar9;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o direction;
  UnityEngine_LayerMask_o local_80;
  float local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  UnityEngine_RaycastHit_o local_48;
  
  if (Il2CppMethodInitialized_0754778c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_0754778c = '\x01';
  }
  local_48.fields.m_UV.fields.x = 0.0;
  local_48.fields.m_UV.fields.y = 0.0;
  local_48.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_48.fields.m_Normal.fields.y = 0.0;
  local_48.fields.m_Normal.fields.z = 0.0;
  local_48.fields.m_FaceID = 0;
  local_48.fields.m_Distance = 0.0;
  local_48.fields.m_Point.fields.x = 0.0;
  local_48.fields.m_Point.fields.y = 0.0;
  local_48.fields.m_Point.fields.z = 0.0;
  local_48.fields.m_Normal.fields.x = 0.0;
  pCVar4 = (__this->fields).BaseTitanCache;
  if ((pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) &&
     (__this_00 = (UnityEngine_Component_o *)(pCVar4->fields).Movebox,
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    pUVar7 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      UVar11 = UnityEngine_Transform__get_lossyScale(pUVar7,(MethodInfo *)0x0);
      pCVar4 = (__this->fields).BaseTitanCache;
      if ((pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) &&
         (__this_01 = (UnityEngine_CapsuleCollider_o *)(pCVar4->fields).Movebox,
         __this_01 != (UnityEngine_CapsuleCollider_o *)0x0)) {
        local_78._8_4_ = extraout_XMM0_Dc;
        local_78._0_8_ = UVar11.fields._0_8_;
        local_78._12_4_ = extraout_XMM0_Dd;
        bVar3 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
        if (((__this_01->klass->_2).typeHierarchyDepth < bVar3) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
          il2cpp_codegen_raise_invalid_cast_exception(UVar11.fields.x,UVar11.fields.z);
        }
        fVar9 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
        (__this->fields).JustGrounded = false;
        pUVar5 = (__this->fields).Cache;
        if ((pUVar5 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar7 = (pUVar5->fields).Transform, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
          local_78._0_4_ = (float)local_78._0_4_ * fVar9;
          UVar11 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          local_68._0_4_ = UVar11.fields.x;
          local_68._4_4_ = UVar11.fields.y;
          fStack_60 = extraout_XMM0_Dc_00;
          fStack_5c = extraout_XMM0_Dd_00;
          if (Il2CppMethodInitialized_0753e72c == '\0') {
            local_68 = (undefined1  [8])UVar11.fields._0_8_;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e72c = '\x01';
          }
          pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar1 = (pUVar8->upVector).fields.x;
          uVar2 = (pUVar8->upVector).fields.y;
          fVar10 = (float)local_78._0_4_ + 1.0;
          fVar9 = (pUVar8->upVector).fields.z;
          local_58._0_4_ = fVar10 * (float)uVar1;
          local_58._4_4_ = fVar10 * (float)uVar2;
          uStack_50._0_4_ = fVar10 * 0.0;
          uStack_50._4_4_ = fVar10 * 0.0;
          if (Il2CppMethodInitialized_075450a5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_075450a5 = '\x01';
            pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
          }
          local_68._4_4_ = (float)local_68._4_4_ + local_58._4_4_;
          local_68._0_4_ = (float)local_68._0_4_ + (float)local_58;
          fStack_60 = fStack_60 + (float)uStack_50;
          fStack_5c = fStack_5c + uStack_50._4_4_;
          UVar11.fields.z = UVar11.fields.z + fVar9 * fVar10;
          local_58._0_4_ = (pUVar8->downVector).fields.x;
          local_58._4_4_ = (pUVar8->downVector).fields.y;
          uStack_50 = 0;
          fVar9 = (pUVar8->downVector).fields.z;
          local_7c = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                               (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
          local_80 = (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                               (__this,(__this->klass->vtable)._67_get_GroundMask.method);
          layerMask = UnityEngine_LayerMask__get_value(&local_80,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
          }
          UVar11.fields.x = (float)local_68._0_4_;
          UVar11.fields.y = (float)local_68._4_4_;
          direction.fields.z = fVar9;
          direction.fields.x = (float)local_58;
          direction.fields.y = local_58._4_4_;
          bVar6 = UnityEngine_Physics__SphereCast_69daf70
                            (UVar11,(float)local_78._0_4_,direction,&local_48,local_7c + 1.0,layerMask,
                             (MethodInfo *)0x0);
          if (bVar6) {
            if ((__this->fields).Grounded == false) {
              (__this->fields).Grounded = true;
              (__this->fields).JustGrounded = true;
            }
            local_78._0_4_ = UnityEngine_RaycastHit__get_distance(&local_48,(MethodInfo *)0x0);
            local_78._4_4_ = extraout_XMM0_Db;
            local_78._8_4_ = extraout_XMM0_Dc_01;
            local_78._12_4_ = extraout_XMM0_Dd_01;
            fVar9 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                              (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
            local_78._0_4_ = (float)local_78._0_4_ + -1.0;
            if ((float)local_78._0_4_ <= fVar9) {
              fVar9 = (float)local_78._0_4_;
            }
            fVar9 = (float)(-(uint)(0.0 <= (float)local_78._0_4_) & (uint)fVar9);
          }
          else {
            (__this->fields).Grounded = false;
            fVar9 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                              (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
          }
          (__this->fields)._currentGroundDistance = fVar9;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$UpdateAttack
// il2cpp: void Characters_BaseTitan__UpdateAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2b480

void Characters_BaseTitan__UpdateAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$UpdateEat
// il2cpp: void Characters_BaseTitan__UpdateEat (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2b490

void Characters_BaseTitan__UpdateEat(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$DeactivateAllHitboxes
// il2cpp: void Characters_BaseTitan__DeactivateAllHitboxes (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2b4a0
// eh: try 0x5c2b543..0x5c2b58a -> pad 0x5c2b593 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c2b5ab..0x5c2b5b0 -> pad 0x5c2b5cf cleanup
// eh: try 0x5c2b5d2..0x5c2b5dc -> pad 0x5c2b5e4 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c2b58f: jmp 0x5c2b593
// asm:   0x5c2b591: jmp 0x5c2b593
// asm:   0x5c2b593: mov rbx, rax
// asm:   0x5c2b596: cmp edx, 1
// asm:   0x5c2b599: jne 0x5c2b5d2
// asm:   0x5c2b59b: mov rdi, rbx
// asm:   0x5c2b59e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c2b5a3: mov rbx, qword ptr [rax]
// asm:   0x5c2b5a6: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c2b5ab: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c2b5b0: lea rax, [rip + 0x1662191]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_Dispose
// asm:   0x5c2b5b7: mov rsi, qword ptr [rax]
// asm:   0x5c2b5ba: mov rdi, rsp
// asm:   0x5c2b5bd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c2b5c2: test rbx, rbx
// asm:   0x5c2b5c5: je 0x5c2b57d
// asm:   0x5c2b5c7: mov rdi, rbx
// asm:   0x5c2b5ca: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c2b5cf: mov rbx, rax
// asm:   0x5c2b5d2: lea rdi, [rsp + 0x18]
// asm:   0x5c2b5d7: call 0x2fd9340  ; il2cpp_runtime_helper_02fd9340()
// asm:   0x5c2b5dc: mov rdi, rbx
// asm:   0x5c2b5df: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c2b5e4: mov rdi, rax
// asm:   0x5c2b5e7: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_BaseTitan__DeactivateAllHitboxes(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  System_Collections_Generic_List_BaseHitbox__o *__this_00;
  bool bVar2;
  System_Collections_Generic_List_Enumerator_T__o SStack_38;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  if (Il2CppMethodInitialized_0754778d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseHitbox_GetEnumerator);
    Il2CppMethodInitialized_0754778d = '\x01';
  }
  SStack_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_38.fields._index = 0;
  SStack_38.fields._version = 0;
  SStack_38.fields._current = (Il2CppObject *)0x0;
  pCVar1 = (__this->fields).BaseTitanCache;
  if ((pCVar1 == (Characters_BaseTitanComponentCache_o *)0x0) ||
     (__this_00 = (pCVar1->fields).Hitboxes, __this_00 == (System_Collections_Generic_List_BaseHitbox__o *)0x0
     )) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_38,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseHitbox_GetEnumerator);
  uStack_20 = 0;
  puStack_18 = (undefined1 *)&SStack_38;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_MoveNext);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseHitbox_Dispose);
      return;
    }
    if (SStack_38.fields._current == (Il2CppObject *)0x0) break;
    (*(SStack_38.fields._current)->klass->vtable[6].methodPtr)
              (SStack_38.fields._current,(SStack_38.fields._current)->klass->vtable[6].method);
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$SetSizeRPC
// il2cpp: void Characters_BaseTitan__SetSizeRPC (Characters_BaseTitan_o* __this, float size, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c2b5f0

void Characters_BaseTitan__SetSizeRPC
               (Characters_BaseTitan_o *__this,float size,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Cameras_InGameCamera_o *__this_00;
  Characters_BaseCharacter_o *x;
  bool bVar4;
  UnityEngine_Transform_o *__this_01;
  float fVar5;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_0754778e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_0754778e = '\x01';
  }
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar3->fields)._Owner_k__BackingField) {
      return;
    }
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      fVar5 = 50.0;
      if (size <= 50.0) {
        fVar5 = size;
      }
      fVar5 = (float)(~-(uint)(0.1 <= size) & 0x3dcccccd | (uint)fVar5 & -(uint)(0.1 <= size));
      value.fields.y = fVar5;
      value.fields.x = fVar5;
      value.fields.z = fVar5;
      UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
      (__this->fields).Size = fVar5;
      (*(__this->klass->vtable)._191_SetSizeParticles.methodPtr)
                (__this,fVar5,(__this->klass->vtable)._191_SetSizeParticles.method);
      (*(__this->klass->vtable)._192_SetSizeAnimations.methodPtr)
                (__this,fVar5,(__this->klass->vtable)._192_SetSizeAnimations.method);
      (*(__this->klass->vtable)._193_SetSizeHead.methodPtr)
                (__this,fVar5,(__this->klass->vtable)._193_SetSizeHead.method);
      (*(__this->klass->vtable)._190_ScaleSounds.methodPtr)
                (__this,fVar5,(__this->klass->vtable)._190_ScaleSounds.method);
      __this_00 = (Cameras_InGameCamera_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
        bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
        x = (__this_00->fields)._follow;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
        if (bVar4) {
          Cameras_InGameCamera__SetFollow
                    (__this_00,(Characters_BaseCharacter_o *)__this,true,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$ScaleSounds
// il2cpp: void Characters_BaseTitan__ScaleSounds (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x5c2b7c0

void Characters_BaseTitan__ScaleSounds(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_AudioSource_o *pUVar4;
  float fVar5;
  float fVar6;
  float local_48;
  
  if (Il2CppMethodInitialized_0754778f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_0754778f = '\x01';
  }
  local_48 = size;
  if (__this != (Characters_BaseTitan_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseShifter)
       ) {
      local_48 = size * 3.5;
    }
  }
  pUVar2 = (__this->fields).Cache;
  if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar2->fields).AudioSources;
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar3,(Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->DeathFall,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
      if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
        fVar5 = local_48 * 0.3;
        fVar6 = 1.0;
        if (fVar5 <= 1.0) {
          fVar6 = fVar5;
        }
        fVar6 = (float)(~-(uint)(0.1 <= fVar5) & 0x3dcccccd | (uint)fVar6 & -(uint)(0.1 <= fVar5));
        UnityEngine_AudioSource__set_volume(pUVar4,fVar6,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).Cache;
        if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
           (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar2->fields).AudioSources,
           pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
          pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar3,(Il2CppObject *)
                                     TypeInfo_Characters_TitanSounds->static_fields->DeathNoFall,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
          if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
            UnityEngine_AudioSource__set_volume(pUVar4,fVar6,(MethodInfo *)0x0);
            pUVar2 = (__this->fields).Cache;
            if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
               (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (pUVar2->fields).AudioSources,
               pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
              pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar3,(Il2CppObject *)
                                         TypeInfo_Characters_TitanSounds->static_fields->Decapitate,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                 );
              if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                UnityEngine_AudioSource__set_volume(pUVar4,fVar6,(MethodInfo *)0x0);
                pUVar2 = (__this->fields).Cache;
                if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                   (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (pUVar2->fields).AudioSources,
                   pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                  pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                     (pSVar3,(Il2CppObject *)
                                             TypeInfo_Characters_TitanSounds->static_fields->Steam,
                                      (MethodInfo_4AAD450 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                     );
                  if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                    UnityEngine_AudioSource__set_volume(pUVar4,fVar6 * 0.5,(MethodInfo *)0x0);
                    pUVar2 = (__this->fields).Cache;
                    if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                       (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (pUVar2->fields).AudioSources,
                       pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                         (pSVar3,(Il2CppObject *)
                                                 TypeInfo_Characters_TitanSounds->static_fields->Footstep1,
                                          (MethodInfo_4AAD450 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                         );
                      if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                        local_48 = local_48 * 0.125;
                        fVar5 = 0.5;
                        if (local_48 <= 0.5) {
                          fVar5 = local_48;
                        }
                        fVar5 = (float)(~-(uint)(0.1 <= local_48) & 0x3dcccccd |
                                       (uint)fVar5 & -(uint)(0.1 <= local_48));
                        UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
                        pUVar2 = (__this->fields).Cache;
                        if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                           (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                     (pUVar2->fields).AudioSources,
                           pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                          pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                             (pSVar3,(Il2CppObject *)
                                                     TypeInfo_Characters_TitanSounds->static_fields->Footstep2
                                              ,(MethodInfo_4AAD450 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                             );
                          if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                            UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
                            pUVar2 = (__this->fields).Cache;
                            if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                               (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                         (pUVar2->fields).AudioSources,
                               pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                              pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                 (pSVar3,(Il2CppObject *)
                                                         TypeInfo_Characters_TitanSounds->static_fields->
                                                         Footstep3,
                                                  (MethodInfo_4AAD450 *)
                                                  MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                                 );
                              if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                                UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
                                pUVar2 = (__this->fields).Cache;
                                if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                                   (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                             (pUVar2->fields).AudioSources,
                                   pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0))
                                {
                                  pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                     (pSVar3,(Il2CppObject *)
                                                             TypeInfo_Characters_TitanSounds->static_fields->
                                                             RockPickup,
                                                      (MethodInfo_4AAD450 *)
                                                      MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                                     );
                                  if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                                    UnityEngine_AudioSource__set_volume(pUVar4,fVar6,(MethodInfo *)0x0);
                                    pUVar2 = (__this->fields).Cache;
                                    if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                                       (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                                                 (pUVar2->fields).AudioSources,
                                       pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)
                                                 0x0)) {
                                      pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                         (pSVar3,(Il2CppObject *)
                                                                 TypeInfo_Characters_TitanSounds->
                                                                 static_fields->RockThrow1,
                                                          (MethodInfo_4AAD450 *)
                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                                       );
                                      if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                                        UnityEngine_AudioSource__set_volume(pUVar4,fVar6,(MethodInfo *)0x0);
                                        pUVar2 = (__this->fields).Cache;
                                        if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
                                           (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o
                                                      *)(pUVar2->fields).AudioSources,
                                           pSVar3 != (System_Collections_Generic_Dictionary_object__object__o
                                                      *)0x0)) {
                                          pUVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                             (pSVar3,(Il2CppObject *)
                                                                     TypeInfo_Characters_TitanSounds->
                                                                     static_fields->RockThrow2,
                                                              (MethodInfo_4AAD450 *)
                                                                                                                            
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                                       );
                                          if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                                            UnityEngine_AudioSource__set_volume
                                                      (pUVar4,fVar6,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$SetSizeParticles
// il2cpp: void Characters_BaseTitan__SetSizeParticles (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x5c2bbe0

void Characters_BaseTitan__SetSizeParticles(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  UnityEngine_ParticleSystem_MainModule_o main;
  uint uVar3;
  
  if (Il2CppMethodInitialized_07547790 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547790 = '\x01';
  }
  pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B11B0 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem);
  if (pSVar2 == (System_Object_array *)0x0) {
label_05c2bcba:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pSVar2->max_length;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (uVar1 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if ((UnityEngine_ParticleSystem_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_ParticleSystem_o *)0x0)
      goto label_05c2bcba;
      main = UnityEngine_ParticleSystem__get_main
                       ((UnityEngine_ParticleSystem_o *)pSVar2->m_Items[(int)uVar3],(MethodInfo *)0x0);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      Utility_Util__ScaleParticleStartSize(main,size,(MethodInfo *)0x0);
      Utility_Util__ScaleParticleStartSpeed(main,size,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
      uVar1 = (uint)pSVar2->max_length;
    } while ((int)uVar3 < (int)uVar1);
  }
  return;
}


// Characters.BaseTitan$$SetSizeAnimations
// il2cpp: void Characters_BaseTitan__SetSizeAnimations (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x5c2bcc0

void Characters_BaseTitan__SetSizeAnimations(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$SetSizeHead
// il2cpp: void Characters_BaseTitan__SetSizeHead (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x5c2bcd0

void Characters_BaseTitan__SetSizeHead(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$SetSize
// il2cpp: void Characters_BaseTitan__SetSize (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x5c2bce0

void Characters_BaseTitan__SetSize(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  float local_1c;
  
  if (Il2CppMethodInitialized_07547791 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetSizeRPC");
    Il2CppMethodInitialized_07547791 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_1c = size;
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,&local_1c);
    if (parameters != (System_Object_array *)0x0) {
      if (pIVar2 != (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar2;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SetSizeRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetAnimationTime
// il2cpp: float Characters_BaseTitan__GetAnimationTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2bdf0

float Characters_BaseTitan__GetAnimationTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = Characters_AnimationHandler__GetCurrentNormalizedTime(__this_00,(MethodInfo *)0x0);
  return fVar1;
}


// Characters.BaseTitan$$GetHitboxTime
// il2cpp: float Characters_BaseTitan__GetHitboxTime (Characters_BaseTitan_o* __this, float normalizedLength, const MethodInfo* method);
// 0x5c2be10

float Characters_BaseTitan__GetHitboxTime
                (Characters_BaseTitan_o *__this,float normalizedLength,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar1 = Characters_AnimationHandler__GetLength
                    (__this_00,(__this->fields)._currentStateAnimation,(MethodInfo *)0x0);
  return (fVar1 * normalizedLength) / (__this->fields)._currentAttackSpeed;
}


// Characters.BaseTitan$$DamagedGrunt
// il2cpp: void Characters_BaseTitan__DamagedGrunt (Characters_BaseTitan_o* __this, float chance, const MethodInfo* method);
// 0x5c2be60

void Characters_BaseTitan__DamagedGrunt(Characters_BaseTitan_o *__this,float chance,MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  System_String_o *sound;
  
  if (Il2CppMethodInitialized_07547792 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547792 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).TitanVocalEffect, pSVar2 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((pSVar2->fields)._value != false) {
    bVar3 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      sound = Characters_TitanSounds__GetRandomHurt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.BaseTitan$$GrabGrunt
// il2cpp: void Characters_BaseTitan__GrabGrunt (Characters_BaseTitan_o* __this, float chance, const MethodInfo* method);
// 0x5c2bf20

void Characters_BaseTitan__GrabGrunt(Characters_BaseTitan_o *__this,float chance,MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  System_String_o *sound;
  
  if (Il2CppMethodInitialized_07547793 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547793 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).TitanVocalEffect, pSVar2 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((pSVar2->fields)._value != false) {
    bVar3 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      sound = Characters_TitanSounds__GetRandomGrabGrunt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.BaseTitan$$Start
// il2cpp: void Characters_BaseTitan__Start (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2bfe0

void Characters_BaseTitan__Start(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o *__this_01;
  Characters_BaseTitan_c *pCVar4;
  UnityEngine_Vector3_Fields UVar5;
  
  if (Il2CppMethodInitialized_07547794 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    Il2CppMethodInitialized_07547794 = '\x01';
  }
  Characters_BaseCharacter__Start((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar3) goto label_05c2c0dc;
  bVar3 = Characters_BaseCharacter__IsMainCharacter((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if (bVar3) {
    pCVar4 = __this->klass;
    bVar1 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if (((pCVar4->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter))
    goto label_05c2c060;
  }
  else {
label_05c2c060:
    if (Il2CppMethodInitialized_07547795 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Characters_BaseTitan_HandleSpawnCollisionCoroutine_d__228);
      Il2CppMethodInitialized_07547795 = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Characters_BaseTitan_HandleSpawnCollisionCoroutine_d__228);
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    (__this_01->fields).__1__state = 0;
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    (__this_01->fields).maxSpeed = 20.0;
    (__this_01->fields).time = 2.0;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
               (MethodInfo *)0x0);
    pCVar4 = __this->klass;
  }
  (*(pCVar4->vtable)._162_Idle.methodPtr)(__this,(pCVar4->vtable)._162_Idle.method);
label_05c2c0dc:
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar5 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  (__this->fields)._startPosition.fields = UVar5;
  return;
}


// Characters.BaseTitan$$HandleSpawnCollisionCoroutine
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseTitan__HandleSpawnCollisionCoroutine (Characters_BaseTitan_o* __this, float time, float maxSpeed, const MethodInfo* method);
// 0x5c2c120

System_Collections_IEnumerator_o *
Characters_BaseTitan__HandleSpawnCollisionCoroutine
          (Characters_BaseTitan_o *__this,float time,float maxSpeed,MethodInfo *method)

{
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__228_o *__this_00;
  
  if (Il2CppMethodInitialized_07547795 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Characters_BaseTitan_HandleSpawnCollisionCoroutine_d__228);
    Il2CppMethodInitialized_07547795 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseTitan_HandleSpawnCollisionCoroutine_d__228);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).time = time;
  (__this_00->fields).maxSpeed = maxSpeed;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseTitan$$ToggleSitPushbox
// il2cpp: void Characters_BaseTitan__ToggleSitPushbox (Characters_BaseTitan_o* __this, bool sit, const MethodInfo* method);
// 0x5c2c1d0

void Characters_BaseTitan__ToggleSitPushbox(Characters_BaseTitan_o *__this,bool sit,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  UnityEngine_Collider_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547796 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547796 = '\x01';
  }
  pCVar1 = (__this->fields).BaseTitanCache;
  if (pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) {
    x = (UnityEngine_Object_o *)(pCVar1->fields).SitPushbox;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pCVar1 = (__this->fields).BaseTitanCache;
    if (sit) {
      if ((pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) &&
         (pUVar3 = (pCVar1->fields).SitPushbox, pUVar3 != (UnityEngine_Collider_o *)0x0)) {
        bVar2 = UnityEngine_Collider__get_enabled(pUVar3,(MethodInfo *)0x0);
        if (bVar2) {
          return;
        }
        pCVar1 = (__this->fields).BaseTitanCache;
        if ((pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) &&
           (pUVar3 = (pCVar1->fields).SitPushbox, pUVar3 != (UnityEngine_Collider_o *)0x0)) {
          bVar2 = true;
label_05c2c2a8:
          UnityEngine_Collider__set_enabled(pUVar3,bVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ((pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) &&
            (pUVar3 = (pCVar1->fields).SitPushbox, pUVar3 != (UnityEngine_Collider_o *)0x0)) {
      bVar2 = UnityEngine_Collider__get_enabled(pUVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pCVar1 = (__this->fields).BaseTitanCache;
      if ((pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) &&
         (pUVar3 = (pCVar1->fields).SitPushbox, pUVar3 != (UnityEngine_Collider_o *)0x0)) {
        bVar2 = false;
        goto label_05c2c2a8;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$UpdateAnimationColliders
// il2cpp: void Characters_BaseTitan__UpdateAnimationColliders (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2c2c0

void Characters_BaseTitan__UpdateAnimationColliders(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_TitanDeathDissolve_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).DeathDissolve;
  if ((pCVar1 == (Characters_TitanDeathDissolve_o *)0x0) ||
     ((pCVar1->fields)._CollidersDisabled_k__BackingField == false)) {
    bVar2 = (*(__this->klass->vtable)._200_IsPlayingSitAnimation.methodPtr)
                      (__this,(__this->klass->vtable)._200_IsPlayingSitAnimation.method);
    (*(__this->klass->vtable)._198_ToggleSitPushbox.methodPtr)
              (__this,bVar2,(__this->klass->vtable)._198_ToggleSitPushbox.method);
    return;
  }
  return;
}


// Characters.BaseTitan$$OnDestroy
// il2cpp: void Characters_BaseTitan__OnDestroy (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2c310

void Characters_BaseTitan__OnDestroy(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_TitanDeathDissolve_o *__this_00;
  
  __this_00 = (__this->fields).DeathDissolve;
  if (__this_00 != (Characters_TitanDeathDissolve_o *)0x0) {
    Characters_TitanDeathDissolve__Dispose(__this_00,(MethodInfo *)0x0);
  }
  Characters_BaseCharacter__OnDestroy((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.BaseTitan$$IsPlayingSitAnimation
// il2cpp: bool Characters_BaseTitan__IsPlayingSitAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2c340

bool Characters_BaseTitan__IsPlayingSitAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool bVar3;
  System_String_o *pSVar4;
  
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar4 = (*(pCVar1->klass->vtable)._15_get_SitDown.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._15_get_SitDown.method);
    if (Il2CppMethodInitialized_0754778b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_0754778b = '\x01';
    }
    bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
    if (bVar3) {
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_05c2c5a0;
      bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
      if (bVar3) {
        return true;
      }
    }
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar4 = (*(pCVar1->klass->vtable)._17_get_SitFall.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._17_get_SitFall.method);
      if (Il2CppMethodInitialized_0754778b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"");
        Il2CppMethodInitialized_0754778b = '\x01';
      }
      bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
      if (bVar3) {
        pCVar2 = (__this->fields).Animation;
        if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_05c2c5a0;
        bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
        if (bVar3) {
          return true;
        }
      }
      pCVar1 = (__this->fields).BaseTitanAnimations;
      if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
        pSVar4 = (*(pCVar1->klass->vtable)._14_get_SitIdle.methodPtr)
                           (pCVar1,(pCVar1->klass->vtable)._14_get_SitIdle.method);
        if (Il2CppMethodInitialized_0754778b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"");
          Il2CppMethodInitialized_0754778b = '\x01';
        }
        bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
        if (bVar3) {
          pCVar2 = (__this->fields).Animation;
          if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_05c2c5a0;
          bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
          if (bVar3) {
            return true;
          }
        }
        pCVar1 = (__this->fields).BaseTitanAnimations;
        if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
          pSVar4 = (*(pCVar1->klass->vtable)._16_get_SitUp.methodPtr)
                             (pCVar1,(pCVar1->klass->vtable)._16_get_SitUp.method);
          if (Il2CppMethodInitialized_0754778b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"");
            Il2CppMethodInitialized_0754778b = '\x01';
          }
          bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
          if (bVar3) {
            pCVar2 = (__this->fields).Animation;
            if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_05c2c5a0;
            bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
            if (bVar3) {
              return true;
            }
          }
          pCVar1 = (__this->fields).BaseTitanAnimations;
          if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
            pSVar4 = (*(pCVar1->klass->vtable)._13_get_DieSit.methodPtr)
                               (pCVar1,(pCVar1->klass->vtable)._13_get_DieSit.method);
            if (Il2CppMethodInitialized_0754778b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"");
              Il2CppMethodInitialized_0754778b = '\x01';
            }
            bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
            if (!bVar3) {
              return false;
            }
            pCVar2 = (__this->fields).Animation;
            if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
              bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
              return bVar3;
            }
          }
        }
      }
    }
  }
label_05c2c5a0:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$GetFootstepAudio
// il2cpp: System_String_o* Characters_BaseTitan__GetFootstepAudio (Characters_BaseTitan_o* __this, int32_t phase, const MethodInfo* method);
// 0x5c2c5b0

System_String_o *
Characters_BaseTitan__GetFootstepAudio(Characters_BaseTitan_o *__this,int32_t phase,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547797 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_07547797 = '\x01';
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    pSVar2 = Characters_TitanSounds__GetRandomFootstep((MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = Characters_TitanSounds__GetRandomFootstep((MethodInfo *)0x0);
  return pSVar2;
}


// Characters.BaseTitan$$GetFootstepPhase
// il2cpp: int32_t Characters_BaseTitan__GetFootstepPhase (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2c610

int32_t Characters_BaseTitan__GetFootstepPhase(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanAnimations_o *pCVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Characters_AnimationHandler_o *pCVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547798 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547798 = '\x01';
  }
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c2c7b1;
  pSVar3 = (*(pCVar1->klass->vtable)._5_get_Run.methodPtr)(pCVar1,(pCVar1->klass->vtable)._5_get_Run.method);
  bVar2 = System_String__op_Inequality(pSVar3,"",(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c2c7b1;
    pCVar4 = (__this->fields).Animation;
    pSVar3 = (*(pCVar1->klass->vtable)._5_get_Run.methodPtr)(pCVar1,(pCVar1->klass->vtable)._5_get_Run.method)
    ;
    if (pCVar4 == (Characters_AnimationHandler_o *)0x0) goto label_05c2c7b1;
    bVar2 = Characters_AnimationHandler__IsPlaying(pCVar4,pSVar3,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar4 = (__this->fields).Animation;
      if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
        fVar5 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar4,(MethodInfo *)0x0);
        fVar5 = fmodf(fVar5,1.0,(MethodInfo *)pCVar4);
        if (fVar5 < 0.0) {
          return 1;
        }
        return (uint)(0.5 <= fVar5);
      }
      goto label_05c2c7b1;
    }
  }
  pCVar1 = (__this->fields).BaseTitanAnimations;
  if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
    pSVar3 = (*(pCVar1->klass->vtable)._7_get_Walk.methodPtr)
                       (pCVar1,(pCVar1->klass->vtable)._7_get_Walk.method);
    bVar2 = System_String__op_Inequality(pSVar3,"",(MethodInfo *)0x0);
    if (!bVar2) {
label_05c2c7a2:
      return (__this->fields)._stepPhase;
    }
    pCVar1 = (__this->fields).BaseTitanAnimations;
    if (pCVar1 != (Characters_BaseTitanAnimations_o *)0x0) {
      pCVar4 = (__this->fields).Animation;
      pSVar3 = (*(pCVar1->klass->vtable)._7_get_Walk.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._7_get_Walk.method);
      if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
        bVar2 = Characters_AnimationHandler__IsPlaying(pCVar4,pSVar3,(MethodInfo *)0x0);
        if (!bVar2) goto label_05c2c7a2;
        pCVar4 = (__this->fields).Animation;
        if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
          fVar5 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar4,(MethodInfo *)0x0);
          fVar5 = fmodf(fVar5,1.0,(MethodInfo *)pCVar4);
          if (fVar5 < 0.1) {
            return 0;
          }
          return (uint)(fVar5 < 0.6);
        }
      }
    }
  }
label_05c2c7b1:
  ThrowNullReferenceException();
}


// Characters.BaseTitan$$SpawnShatter
// il2cpp: void Characters_BaseTitan__SpawnShatter (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x5c2c7c0

void Characters_BaseTitan__SpawnShatter
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  System_String_o *name;
  UnityEngine_Quaternion_StaticFields *pUVar9;
  bool bVar10;
  int32_t layerMask;
  UnityEngine_Vector3_StaticFields *pUVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o direction;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  float fStack_88;
  float fStack_84;
  UnityEngine_LayerMask_o aUStack_78 [2];
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  UnityEngine_RaycastHit_o UStack_58;
  
  if (Il2CppMethodInitialized_07547799 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07547799 = '\x01';
  }
  UStack_58.fields.m_UV.fields.x = 0.0;
  UStack_58.fields.m_UV.fields.y = 0.0;
  UStack_58.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  UStack_58.fields.m_Normal.fields.y = 0.0;
  UStack_58.fields.m_Normal.fields.z = 0.0;
  UStack_58.fields.m_FaceID = 0;
  UStack_58.fields.m_Distance = 0.0;
  UStack_58.fields.m_Point.fields.x = 0.0;
  UStack_58.fields.m_Point.fields.y = 0.0;
  UStack_58.fields.m_Point.fields.z = 0.0;
  UStack_58.fields.m_Normal.fields.x = 0.0;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar11->upVector).fields.x;
  uVar5 = (pUVar11->upVector).fields.y;
  UVar15.fields.z = position.fields.z + (pUVar11->upVector).fields.z;
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
    pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
  }
  fStack_88 = position.fields.x;
  fStack_84 = position.fields.y;
  uVar2 = (pUVar11->downVector).fields.x;
  uVar6 = (pUVar11->downVector).fields.y;
  direction.fields.y = (float)uVar6;
  direction.fields.x = (float)uVar2;
  uStack_68 = CONCAT44(uStack_68._4_4_,(pUVar11->downVector).fields.z);
  aUStack_78[0] =
       (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                 (__this,(__this->klass->vtable)._67_get_GroundMask.method);
  layerMask = UnityEngine_LayerMask__get_value(aUStack_78,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  UVar15.fields.x = (float)uVar1 + fStack_88;
  UVar15.fields.y = (float)uVar5 + fStack_84;
  direction.fields.z = (float)uStack_68;
  bVar10 = UnityEngine_Physics__Raycast_69d9ca0(UVar15,direction,&UStack_58,2.0,layerMask,(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    name = TypeInfo_Effects_EffectPrefabs->static_fields->GroundShatter;
    UVar15 = UnityEngine_RaycastHit__get_point(&UStack_58,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar3 = (pUVar11->upVector).fields.x;
    uVar7 = (pUVar11->upVector).fields.y;
    fVar13 = (pUVar11->upVector).fields.z;
    uStack_68._0_4_ = (float)uVar3 * 0.1;
    uStack_68._4_4_ = (float)uVar7 * 0.1;
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      uStack_60._0_4_ = 0;
      uStack_60._4_4_ = 0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    fVar12 = UVar15.fields.x + (float)uStack_68;
    fVar14 = UVar15.fields.y + uStack_68._4_4_;
    position_00.fields.z = UVar15.fields.z + fVar13 * 0.1;
    pUVar9 = TypeInfo_UnityEngine_Quaternion->static_fields;
    uVar4 = (pUVar9->identityQuaternion).fields.x;
    uVar8 = (pUVar9->identityQuaternion).fields.y;
    rotation.fields.y = (float)uVar8;
    rotation.fields.x = (float)uVar4;
    uStack_68._0_4_ = (pUVar9->identityQuaternion).fields.z;
    uStack_68._4_4_ = (pUVar9->identityQuaternion).fields.w;
    uStack_60 = 0;
    fStack_6c = (__this->fields).Size;
    fVar13 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                       (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      fStack_70 = fVar13;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      fVar13 = fStack_70;
    }
    rotation.fields.z = (float)uStack_68;
    rotation.fields.w = uStack_68._4_4_;
    position_00.fields.x = fVar12;
    position_00.fields.y = fVar14;
    Effects_EffectSpawner__Spawn
              (name,position_00,rotation,fStack_6c * fVar13,true,(System_Object_array *)0x0,(MethodInfo *)0x0)
    ;
  }
  return;
}


// Characters.BaseTitan$$CheckNapeAngle
// il2cpp: bool Characters_BaseTitan__CheckNapeAngle (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, const MethodInfo* method);
// 0x5c2cab0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c2cca1: mulss xmm0, xmm5
// asm:   0x5c2cca5: xorps xmm5, xmm5
// asm:   0x5c2cca8: ucomiss xmm0, xmm5
// asm:   0x5c2ccab: jb 0x5c2cd7a
// asm:   0x5c2ccc6: jmp 0x5c2ce28

bool Characters_BaseTitan__CheckNapeAngle
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o hitPosition,float maxAngle,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BaseTitanComponentCache_o *pCVar3;
  undefined1 auVar4 [16];
  double dVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  Il2CppClass *klass;
  float fVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  float fStack_8c;
  float fStack_78;
  float fStack_74;
  UnityEngine_Vector3_Fields UStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [16];
  
  pCVar3 = (__this->fields).BaseTitanCache;
  if (((pCVar3 == (Characters_BaseTitanComponentCache_o *)0x0) ||
      (pUVar6 = (pCVar3->fields).Head, pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
     pUVar6 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar13 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    UStack_40.x = 0.0;
    UStack_40.y = 0.0;
  }
  else {
    UStack_40.x = 0.0;
    UStack_40.y = 0.0;
  }
  UStack_40.x = 0.0;
  UStack_40.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    UStack_40.x = 0.0;
    UStack_40.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fStack_78 = hitPosition.fields.x;
  fStack_74 = hitPosition.fields.y;
  auVar11._0_4_ = fStack_78 - UVar13.fields.x;
  auVar11._4_4_ = fStack_74 - UVar13.fields.y;
  auVar11._8_4_ = in_XMM0_Dc - extraout_XMM0_Dc;
  auVar11._12_4_ = in_XMM0_Dd - extraout_XMM0_Dd;
  fStack_8c = hitPosition.fields.z - UVar13.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar9 = 0;
  fVar8 = fStack_8c * fStack_8c + auVar11._4_4_ * auVar11._4_4_ + auVar11._0_4_ * auVar11._0_4_;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
    uVar9 = extraout_XMM0_Db;
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  if (1e-05 < fVar8) {
    fStack_8c = fStack_8c / fVar8;
    auVar4._4_4_ = fVar8;
    auVar4._0_4_ = fVar8;
    auVar4._8_4_ = uVar9;
    auVar4._12_4_ = uVar9;
    auVar11 = divps(auVar11,auVar4);
    UStack_40.x = auVar11._0_4_;
    UStack_40.y = auVar11._4_4_;
    pUVar7 = (UnityEngine_Vector3_StaticFields *)&UStack_40;
  }
  else {
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fStack_8c = (pUVar7->zeroVector).fields.z;
  }
  uVar1 = (pUVar7->zeroVector).fields.x;
  uVar2 = (pUVar7->zeroVector).fields.y;
  UVar13 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
  fVar10 = UVar13.fields.z;
  UStack_40.z = UVar13.fields.y;
  auStack_28._8_4_ = extraout_XMM0_Dc_00;
  auStack_28._0_8_ = UVar13.fields._0_8_;
  auStack_28._12_4_ = extraout_XMM0_Dd_00;
  fVar8 = UVar13.fields.x;
  fStack_34 = UStack_40.z;
  fStack_30 = UStack_40.z;
  fStack_2c = UStack_40.z;
  if (Il2CppMethodInitialized_075450a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_075450a4 = '\x01';
    fVar8 = (float)auStack_28._0_4_;
  }
  fVar12 = fVar10 * fVar10 + UStack_40.z * UStack_40.z + fVar8 * fVar8;
  fVar8 = fStack_8c * fStack_8c + (float)uVar2 * (float)uVar2 + (float)uVar1 * (float)uVar1;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  if (0.0 <= fVar8 * fVar12) {
    fVar8 = SQRT(fVar8 * fVar12);
    klass = (Il2CppClass *)TypeInfo_System_Math;
  }
  else {
    fVar8 = sqrtf(fVar8 * fVar12);
    klass = (Il2CppClass *)TypeInfo_System_Math;
  }
  fVar12 = 0.0;
  TypeInfo_System_Math = (System_Math_c *)klass;
  if (1e-15 <= fVar8) {
    fVar8 = (((float)uVar2 * -UStack_40.z - (float)uVar1 * (float)auStack_28._0_4_) - fStack_8c * fVar10) /
            fVar8;
    fVar10 = 1.0;
    if (fVar8 <= 1.0) {
      fVar10 = fVar8;
    }
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    dVar5 = acos((double)(float)(~-(uint)(-1.0 <= fVar8) & 0xbf800000 | (uint)fVar10 & -(uint)(-1.0 <= fVar8))
                 ,(MethodInfo *)klass);
    fVar12 = (float)dVar5 * 57.29578;
  }
  return fVar12 < maxAngle;
}


// Characters.BaseTitan$$GetCenterPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseTitan__GetCenterPosition (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2ce50

UnityEngine_Vector3_o
Characters_BaseTitan__GetCenterPosition(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar2;
  
  pCVar1 = (__this->fields).BaseTitanCache;
  if ((pCVar1 == (Characters_BaseTitanComponentCache_o *)0x0) ||
     (__this_00 = (pCVar1->fields).Hip, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar2 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar2;
}


// Characters.BaseTitan$$GetColliderToggleRadius
// il2cpp: float Characters_BaseTitan__GetColliderToggleRadius (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2ce80

float Characters_BaseTitan__GetColliderToggleRadius(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields).Size;
  fVar2 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                    (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
  return fVar2 * fVar1 * 20.0;
}


// Characters.BaseTitan$$.ctor
// il2cpp: void Characters_BaseTitan___ctor (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x5c2ceb0

void Characters_BaseTitan___ctor(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *layers;
  System_Collections_Generic_Dictionary_string__float__o *pSVar4;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_0754779a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_0754779a = '\x01';
  }
  (__this->fields).Size = 1.0;
  (__this->fields).ClimbCooldown = 0.5;
  (__this->fields).StunTime = 0.5;
  (__this->fields).ActionPause = 0.2;
  (__this->fields).AttackPause = 0.2;
  (__this->fields).TurnPause = 0.2;
  (__this->fields).MaxSprintStamina = 5.0;
  (__this->fields).SprintStaminaRecover = 0.7;
  (__this->fields).SprintStaminaConsumption = 0.85;
  (__this->fields).CurrentSprintStamina = 5.0;
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,5);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)layers->max_length;
  if (uVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    layers->m_Items[0] = pUVar2->TitanMovebox;
    if ((((uVar1 != 1) && (layers->m_Items[1] = pUVar2->MapObjectEntities, 2 < uVar1)) &&
        (layers->m_Items[2] = pUVar2->MapObjectTitans, uVar1 != 3)) &&
       (layers->m_Items[3] = pUVar2->MapObjectCharacters, 4 < uVar1)) {
      layers->m_Items[4] = pUVar2->MapObjectAll;
      UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (__this->fields).TitanGroundMaskLayers.fields.m_Mask = (int32_t)UVar3.fields.m_Mask;
      (__this->fields).AttackSpeedMultiplier = 1.0;
      (__this->fields).PreviousAttackSpeedMultiplier = -1.0;
      pSVar4 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
      System_Collections_Generic_Dictionary_object__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                 (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
      (__this->fields).AttackSpeeds = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSpeeds);
      (__this->fields).SizeScaledTurnSpeed = true;
      (__this->fields)._crippleEndTime = -1.0;
      pSVar4 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
      System_Collections_Generic_Dictionary_object__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                 (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
      (__this->fields)._rootMotionAnimations = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._rootMotionAnimations);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                 (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
      (__this->fields).AttackAnimations = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).AttackAnimations);
      (__this->fields).EnableAI = true;
      Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


