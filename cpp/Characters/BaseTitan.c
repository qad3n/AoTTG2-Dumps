// Type: Characters.BaseTitan
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseTitan.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BaseTitan.cs
// --------------------------------

// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$.ctor
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4310ac0

void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_IDisposable_Dispose (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, const MethodInfo* method);
// 0x4310ae0

void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_IDisposable_Dispose
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$MoveNext
// il2cpp: bool Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__MoveNext (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, const MethodInfo* method);
// 0x4310af0

bool_conflict
Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__MoveNext
          (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this,MethodInfo *method)

{
  float *pfVar1;
  Characters_BaseTitan_o *pCVar2;
  long lVar3;
  UnityEngine_Rigidbody_o *pUVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  Il2CppObject *__this_00;
  undefined8 uVar7;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_01;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  UnityEngine_Vector3_o UVar14;
  
  __this_01 = __this;
  if (g_data_057adf9c == '\0') {
    __this_01 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)&TypeInfo_WaitForFixedUpdate;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf9c = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return 0;
  }
  pCVar2 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  uVar10 = 0;
  uVar11 = 0;
  if ((__this->fields).time <= 0.0) {
    return 0;
  }
  if (((pCVar2 == (Characters_BaseTitan_o *)0x0) || (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 == 0)) ||
     (__this_01 = *(Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o **)(lVar3 + 0x18),
     __this_01 == (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) goto label_04310dbd;
  bVar6 = UnityEngine_Rigidbody__get_isKinematic((UnityEngine_Rigidbody_o *)__this_01,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') goto label_04310d58;
  lVar3 = *(long *)&(pCVar2->fields).Dead;
  if (lVar3 == 0) {
label_04310dbd:
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)(__this_01->fields).__2__current;
  }
  pUVar4 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18);
  __this_01 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0;
  if (pUVar4 == (UnityEngine_Rigidbody_o *)0x0) goto label_04310dbd;
  UVar14 = UnityEngine_Rigidbody__get_velocity(pUVar4,(MethodInfo *)0x0);
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    uVar10 = 0;
    uVar11 = 0;
    g_data_057a6841 = '\x01';
  }
  __this_01 = TypeInfo_Math;
  if (*(int *)((long)&TypeInfo_Math[4].fields.__4__this + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar10 = 0;
    uVar11 = 0;
  }
  fVar9 = UVar14.fields.z * UVar14.fields.z +
          UVar14.fields.y * UVar14.fields.y + UVar14.fields.x * UVar14.fields.x;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
    pfVar1 = &(__this->fields).maxSpeed;
    if (fVar9 < *pfVar1 || fVar9 == *pfVar1) goto label_04310d58;
  }
  else {
    pfVar1 = &(__this->fields).maxSpeed;
    if (SQRT(fVar9) < *pfVar1 || SQRT(fVar9) == *pfVar1) goto label_04310d58;
  }
  lVar3 = *(long *)&(pCVar2->fields).Dead;
  if ((lVar3 == 0) ||
     (pUVar4 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18), pUVar4 == (UnityEngine_Rigidbody_o *)0x0))
  goto label_04310dbd;
  UVar14 = UnityEngine_Rigidbody__get_velocity(pUVar4,(MethodInfo *)0x0);
  fVar9 = UVar14.fields.z;
  auVar12._0_8_ = UVar14.fields._0_8_;
  auVar12._8_4_ = extraout_XMM0_Dc;
  auVar12._12_4_ = extraout_XMM0_Dd;
  auVar13._8_4_ = extraout_XMM0_Dc;
  auVar13._0_8_ = auVar12._0_8_;
  auVar13._12_4_ = extraout_XMM0_Dd;
  if (g_data_057a6845 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    uVar10 = 0;
    uVar11 = 0;
    g_data_057a6845 = '\x01';
    auVar12 = auVar13;
  }
  if (*(int *)((long)&TypeInfo_Math[4].fields.__4__this + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar10 = 0;
    uVar11 = 0;
    auVar12 = auVar13;
  }
  fVar8 = fVar9 * fVar9 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
    uVar10 = extraout_XMM0_Dc_00;
    uVar11 = extraout_XMM0_Dd_00;
    if (fVar8 <= 1e-05) goto label_04310ce1;
label_04310d32:
    fVar9 = fVar9 / fVar8;
    auVar5._4_4_ = fVar8;
    auVar5._0_4_ = fVar8;
    auVar5._8_4_ = uVar10;
    auVar5._12_4_ = uVar11;
    auVar13 = divps(auVar13,auVar5);
    uVar7 = auVar13._0_8_;
  }
  else {
    fVar8 = SQRT(fVar8);
    auVar13 = auVar12;
    if (1e-05 < fVar8) goto label_04310d32;
label_04310ce1:
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    uVar7 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar8 = (__this->fields).maxSpeed;
  UVar14.fields.z = fVar9 * fVar8;
  UVar14.fields.x = fVar8 * (float)uVar7;
  UVar14.fields.y = fVar8 * (float)((ulong)uVar7 >> 0x20);
  UnityEngine_Rigidbody__set_velocity(pUVar4,UVar14,(MethodInfo *)0x0);
label_04310d58:
  fVar9 = (__this->fields).time;
  fVar8 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields).time = fVar9 - fVar8;
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForFixedUpdate);
  UnityEngine_WaitForFixedUpdate___ctor((UnityEngine_WaitForFixedUpdate_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).__2__current = __this_00;
  uVar7 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, const MethodInfo* method);
// 0x4310dd0

Il2CppObject *
Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_Collections_IEnumerator_Reset (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, const MethodInfo* method);
// 0x4310de0

void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_Collections_IEnumerator_Reset
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this,MethodInfo *method)

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


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_Collections_IEnumerator_get_Current (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, const MethodInfo* method);
// 0x4310e20

Il2CppObject *
Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_Collections_IEnumerator_get_Current
          (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan.<WaitAndDie>d__122$$.ctor
// il2cpp: void Characters_BaseTitan__WaitAndDie_d__122___ctor (Characters_BaseTitan__WaitAndDie_d__122_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4310e30

void Characters_BaseTitan__WaitAndDie_d__122___ctor
               (Characters_BaseTitan__WaitAndDie_d__122_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseTitan.<WaitAndDie>d__122$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseTitan__WaitAndDie_d__122__System_IDisposable_Dispose (Characters_BaseTitan__WaitAndDie_d__122_o* __this, const MethodInfo* method);
// 0x4310e50

void Characters_BaseTitan__WaitAndDie_d__122__System_IDisposable_Dispose
               (Characters_BaseTitan__WaitAndDie_d__122_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan.<WaitAndDie>d__122$$MoveNext
// il2cpp: bool Characters_BaseTitan__WaitAndDie_d__122__MoveNext (Characters_BaseTitan__WaitAndDie_d__122_o* __this, const MethodInfo* method);
// 0x4310e60

bool_conflict
Characters_BaseTitan__WaitAndDie_d__122__MoveNext
          (Characters_BaseTitan__WaitAndDie_d__122_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseTitan_o *__this_00;
  long *plVar2;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  Il2CppClass *name;
  System_String_o *pSVar5;
  UnityEngine_WaitForSeconds_o *pUVar6;
  UnityEngine_GameObject_o *targetGo;
  bool_conflict bVar7;
  Characters_BaseTitan__WaitAndDie_d__122_o *pCVar8;
  float fVar9;
  UnityEngine_Quaternion_o UVar10;
  UnityEngine_Vector3_o UVar11;
  
  pCVar8 = __this;
  if (g_data_057adf9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pCVar8 = (Characters_BaseTitan__WaitAndDie_d__122_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf9d = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (*(int *)((long)&TypeInfo_EffectPrefabs[5].fields.__2__current + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar8 = TypeInfo_EffectPrefabs;
    if (((__this_00 == (Characters_BaseTitan_o *)0x0) ||
        (pSVar3 = (__this_00->fields).OnPlayerPropertiesChanged, pSVar3 == (System_Action_Hashtable__o *)0x0))
       || (pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).interp_invoke_impl,
          pUVar4 == (UnityEngine_Transform_o *)0x0)) {
label_04311147:
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(pCVar8->fields).__2__current;
    }
    name = TypeInfo_EffectPrefabs[4].fields.__2__current[5].klass;
    UVar11 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    UVar10 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    fVar9 = Characters_BaseTitan__GetSpawnEffectSize(__this_00,(MethodInfo *)0x0);
    Effects_EffectSpawner__Spawn
              ((System_String_o *)name,UVar11,UVar10,fVar9,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
    targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = 0;
    Photon_Pun_PhotonNetwork__Destroy_3eec3a0(targetGo,(MethodInfo *)0x0);
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)((long)&TypeInfo_EffectPrefabs[5].fields.__2__current + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar8 = TypeInfo_EffectPrefabs;
    if (((__this_00 == (Characters_BaseTitan_o *)0x0) ||
        (pSVar3 = (__this_00->fields).OnPlayerPropertiesChanged, pSVar3 == (System_Action_Hashtable__o *)0x0))
       || (pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).interp_invoke_impl,
          pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_04311147;
    pSVar5 = TypeInfo_EffectPrefabs[4].fields.__2__current[4].monitor;
    UVar11 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    UVar10 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    fVar9 = Characters_BaseTitan__GetSpawnEffectSize(__this_00,(MethodInfo *)0x0);
    Effects_EffectSpawner__Spawn(pSVar5,UVar11,UVar10,fVar9,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar6,3.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar6);
    (__this->fields).__1__state = 2;
    bVar7 = (bool_conflict)CONCAT71((int7)((ulong)pUVar6 >> 8),1);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this_00 == (Characters_BaseTitan_o *)0x0) ||
       (plVar2 = *(long **)&(__this_00->fields).TurnPause,
       pCVar8 = (Characters_BaseTitan__WaitAndDie_d__122_o *)0x0, plVar2 == (long *)0x0)) goto label_04311147;
    pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 0x1f8))(plVar2,*(undefined8 *)(*plVar2 + 0x200));
    Characters_BaseTitan__StateActionWithTime(__this_00,0xf,pSVar5,0.0,0.1,1,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar6,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar6);
    (__this->fields).__1__state = 1;
    bVar7 = (bool_conflict)CONCAT71((int7)((ulong)pUVar6 >> 8),1);
  }
  else {
    bVar7 = 0;
  }
  return bVar7;
}


// Characters.BaseTitan.<WaitAndDie>d__122$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__WaitAndDie_d__122__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseTitan__WaitAndDie_d__122_o* __this, const MethodInfo* method);
// 0x4311150

Il2CppObject *
Characters_BaseTitan__WaitAndDie_d__122__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseTitan__WaitAndDie_d__122_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan.<WaitAndDie>d__122$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseTitan__WaitAndDie_d__122__System_Collections_IEnumerator_Reset (Characters_BaseTitan__WaitAndDie_d__122_o* __this, const MethodInfo* method);
// 0x4311160

void Characters_BaseTitan__WaitAndDie_d__122__System_Collections_IEnumerator_Reset
               (Characters_BaseTitan__WaitAndDie_d__122_o *__this,MethodInfo *method)

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


// Characters.BaseTitan.<WaitAndDie>d__122$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__WaitAndDie_d__122__System_Collections_IEnumerator_get_Current (Characters_BaseTitan__WaitAndDie_d__122_o* __this, const MethodInfo* method);
// 0x43111a0

Il2CppObject *
Characters_BaseTitan__WaitAndDie_d__122__System_Collections_IEnumerator_get_Current
          (Characters_BaseTitan__WaitAndDie_d__122_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan$$get_DefaultCrippleTime
// il2cpp: float Characters_BaseTitan__get_DefaultCrippleTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bca0

float Characters_BaseTitan__get_DefaultCrippleTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 8.0;
}


// Characters.BaseTitan$$get_CanWallClimb
// il2cpp: bool Characters_BaseTitan__get_CanWallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bcb0

bool_conflict Characters_BaseTitan__get_CanWallClimb(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.BaseTitan$$get_CanSprint
// il2cpp: bool Characters_BaseTitan__get_CanSprint (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bcc0

bool_conflict Characters_BaseTitan__get_CanSprint(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.BaseTitan$$get_GroundDistance
// il2cpp: float Characters_BaseTitan__get_GroundDistance (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bcd0

float Characters_BaseTitan__get_GroundDistance(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_GroundMask
// il2cpp: UnityEngine_LayerMask_o Characters_BaseTitan__get_GroundMask (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bce0

UnityEngine_LayerMask_o
Characters_BaseTitan__get_GroundMask(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)(__this->fields).SprintStaminaRecover;
}


// Characters.BaseTitan$$get_DefaultRunSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultRunSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bcf0

float Characters_BaseTitan__get_DefaultRunSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 15.0;
}


// Characters.BaseTitan$$get_DefaultWalkSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultWalkSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bd00

float Characters_BaseTitan__get_DefaultWalkSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 5.0;
}


// Characters.BaseTitan$$get_DefaultJumpForce
// il2cpp: float Characters_BaseTitan__get_DefaultJumpForce (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bd10

float Characters_BaseTitan__get_DefaultJumpForce(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 150.0;
}


// Characters.BaseTitan$$get_DefaultRotateSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultRotateSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bd20

float Characters_BaseTitan__get_DefaultRotateSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_SizeMultiplier
// il2cpp: float Characters_BaseTitan__get_SizeMultiplier (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bd30

float Characters_BaseTitan__get_SizeMultiplier(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_DisableCooldown
// il2cpp: float Characters_BaseTitan__get_DisableCooldown (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bd40

float Characters_BaseTitan__get_DisableCooldown(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Characters.BaseTitan$$get_Gravity
// il2cpp: UnityEngine_Vector3_o Characters_BaseTitan__get_Gravity (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bd50

UnityEngine_Vector3_o Characters_BaseTitan__get_Gravity(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (g_data_057ac31b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ac31b = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
  UVar2.fields.x = (float)uVar1 * 100.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 100.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) * 100.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Characters.BaseTitan$$get_CheckGroundTime
// il2cpp: float Characters_BaseTitan__get_CheckGroundTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bda0

float Characters_BaseTitan__get_CheckGroundTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0.4;
}


// Characters.BaseTitan$$get_MapObjectMask
// il2cpp: UnityEngine_LayerMask_o Characters_BaseTitan__get_MapObjectMask (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bdb0

UnityEngine_LayerMask_o
Characters_BaseTitan__get_MapObjectMask(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  UnityEngine_LayerMask_Fields UVar2;
  System_Int32_array *layers;
  Characters_BaseMovementSync_o *__this_00;
  Characters_BaseCharacter_o *pCVar3;
  
  if (g_data_057adf76 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057adf76 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if ((TypeInfo_PhysicsLayer->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar3 = TypeInfo_PhysicsLayer;
  if (layers == (System_Int32_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if ((int)layers->max_length != 0) {
    layers->m_Items[0] = (int32_t)(((TypeInfo_PhysicsLayer->fields).MovementSync)->fields)._correctRotation.fields.x;
    UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
    return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar1;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adf78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanDetection);
    g_data_057adf78 = '\x01';
  }
  __this_00 = (Characters_BaseMovementSync_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TitanDetection);
  Characters_TitanDetection___ctor((Characters_TitanDetection_o *)__this_00,pCVar3,(MethodInfo *)0x0);
  (pCVar3->fields).MovementSync = __this_00;
  UVar2.m_Mask = il2cpp_runtime_helper_022b4080(&(pCVar3->fields).MovementSync,__this_00);
  return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar2.m_Mask;
}


// Characters.BaseTitan$$Init
// il2cpp: void Characters_BaseTitan__Init (Characters_BaseTitan_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x43003c0

void Characters_BaseTitan__Init
               (Characters_BaseTitan_o *__this,bool_conflict ai,System_String_o *team,
               SimpleJSONFixed_JSONNode_o *data,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  long lVar3;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  char cVar4;
  bool_conflict bVar5;
  long *plVar6;
  SimpleJSONFixed_JSONNode_o *__this_05;
  System_String_o *pSVar7;
  Characters_AnimationHandler_o *pCVar8;
  Characters_AnimationHandler_o *pCVar9;
  System_String_o *pSVar10;
  undefined8 uVar11;
  Characters_AnimationHandler_o *__this_06;
  int32_t iVar12;
  float fVar13;
  undefined4 uVar14;
  Il2CppMethodPointer pIVar15;
  Il2CppMethodPointer pIVar16;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar17;
  InvokerMethod pIVar18;
  char *pcVar19;
  Il2CppObject *pIVar20;
  Il2CppClass *pIVar21;
  Il2CppType *pIVar22;
  Il2CppType **ppIVar23;
  System_Collections_Generic_List_T__o *pSVar24;
  _union_13 _Var25;
  _union_14 _Var26;
  Il2CppMethodPointer local_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_b8;
  InvokerMethod local_b0;
  Il2CppObject *pIStack_a8;
  Il2CppClass *local_a0;
  Il2CppType *pIStack_98;
  System_Collections_Generic_List_T__o *local_90;
  _union_13 _Stack_88;
  _union_14 local_80;
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057adf77 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"AttackPause");
    il2cpp_runtime_helper_023445d0(&"AttackSpeeds");
    il2cpp_runtime_helper_023445d0(&"RunSpeedPerLevel");
    il2cpp_runtime_helper_023445d0(&"WalkSpeedBase");
    il2cpp_runtime_helper_023445d0(&"ActionPause");
    il2cpp_runtime_helper_023445d0(&"WalkSpeedPerLevel");
    il2cpp_runtime_helper_023445d0(&"AttackSpeedMultiplier");
    il2cpp_runtime_helper_023445d0(&"Health");
    il2cpp_runtime_helper_023445d0(&"RunSpeedBase");
    il2cpp_runtime_helper_023445d0(&"JumpForce");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"RotateSpeed");
    il2cpp_runtime_helper_023445d0(&"TurnPause");
    il2cpp_runtime_helper_023445d0(&"TurnSpeed");
    g_data_057adf77 = '\x01';
  }
  ppIVar23 = (Il2CppType **)0x0;
  _Var25.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar21 = (Il2CppClass *)0x0;
  pIVar22 = (Il2CppType *)0x0;
  pIVar18 = (InvokerMethod)0x0;
  pcVar19 = (char *)0x0;
  pIVar15 = (Il2CppMethodPointer)0x0;
  pIVar16 = (Il2CppMethodPointer)0x0;
  _Var26.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  Characters_BaseCharacter__Init((Characters_BaseCharacter_o *)__this,ai & 0xff,team,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar1 = 0;
  __this_06 = (Characters_AnimationHandler_o *)data;
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(data,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RunSpeedBase",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "RunSpeedBase";
      __this_06 = (Characters_AnimationHandler_o *)data;
      plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"RunSpeedBase",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      uVar1 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      *(undefined4 *)&(__this->fields).BaseTitanAnimations = uVar1;
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RunSpeedPerLevel",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "RunSpeedPerLevel";
      __this_06 = (Characters_AnimationHandler_o *)data;
      plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"RunSpeedPerLevel",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      iVar12 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      (__this->fields).TitanGroundMaskLayers.fields.m_Mask = iVar12;
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"WalkSpeedBase",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "WalkSpeedBase";
      __this_06 = (Characters_AnimationHandler_o *)data;
      plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"WalkSpeedBase",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      uVar1 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      *(undefined4 *)((long)&(__this->fields).BaseTitanAnimations + 4) = uVar1;
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"WalkSpeedPerLevel",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "WalkSpeedPerLevel";
      __this_06 = (Characters_AnimationHandler_o *)data;
      plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"WalkSpeedPerLevel",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      fVar13 = (float)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      (__this->fields).AttackSpeedMultiplier = fVar13;
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"JumpForce",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "JumpForce";
      __this_06 = (Characters_AnimationHandler_o *)data;
      plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"JumpForce",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      fVar13 = (float)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      (__this->fields).ConfusedTime = fVar13;
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RotateSpeed",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "RotateSpeed";
      __this_06 = (Characters_AnimationHandler_o *)data;
      plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"RotateSpeed",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      fVar13 = (float)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      (__this->fields).PreviousAttackSpeedMultiplier = fVar13;
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"ActionPause",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "ActionPause";
      __this_06 = (Characters_AnimationHandler_o *)data;
      plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"ActionPause",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      bVar5 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      (__this->fields).IsSit = bVar5;
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"TurnPause",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "TurnPause";
      __this_06 = (Characters_AnimationHandler_o *)data;
      plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"TurnPause",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      uVar1 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      *(undefined4 *)&(__this->fields).HoldHuman = uVar1;
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"AttackPause",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "AttackPause";
      __this_06 = (Characters_AnimationHandler_o *)data;
      plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"AttackPause",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      uVar1 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      *(undefined4 *)&(__this->fields).field_0x11c = uVar1;
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"Health",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "Health";
      __this_06 = (Characters_AnimationHandler_o *)data;
      plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"Health",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      iVar12 = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
      Characters_BaseCharacter__SetHealth((Characters_BaseCharacter_o *)__this,iVar12,(MethodInfo *)0x0);
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"AttackSpeedMultiplier",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "AttackSpeedMultiplier";
      __this_06 = (Characters_AnimationHandler_o *)data;
      plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"AttackSpeedMultiplier",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (plVar6 == (long *)0x0) goto label_04300cd6;
      fVar13 = (float)(**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      (__this->fields).SprintStaminaConsumption = fVar13;
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"AttackSpeeds",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 != '\0') {
      uVar11 = "AttackSpeeds";
      __this_06 = (Characters_AnimationHandler_o *)data;
      __this_05 = (SimpleJSONFixed_JSONNode_o *)
                  (*(data->klass->vtable)._7_get_Item.methodPtr)
                            (data,"AttackSpeeds",(data->klass->vtable)._7_get_Item.method);
      uVar1 = (undefined4)uVar11;
      if (__this_05 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04300cd6;
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this_05,(MethodInfo *)0x0);
      local_38.genericMethod = local_80.genericMethod;
      local_48 = local_90;
      _Stack_40.methodMetadataHandle = _Stack_88.methodMetadataHandle;
      local_58 = local_a0;
      pIStack_50 = pIStack_98;
      local_68 = local_b0;
      pIStack_60 = pIStack_a8;
      local_78 = local_c0;
      pSStack_70 = pSStack_b8;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar16;
      __this_01.fields.m_Enumerator.fields._0_8_ = pIVar15;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar18;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar19;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar22;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)ppIVar23;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var25.rgctx_data;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var26.genericMethod;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this_01,(MethodInfo *)&local_78);
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
      __this_02.fields.m_Enumerator.fields._0_8_ = local_c0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_a0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
      bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
      cVar4 = (char)bVar5;
      pIVar15 = local_c0;
      pSVar17 = pSStack_b8;
      pIVar18 = local_b0;
      pIVar20 = pIStack_a8;
      pIVar21 = local_a0;
      pIVar22 = pIStack_98;
      pSVar24 = local_90;
      _Var25 = _Stack_88;
      _Var26 = local_80;
      while (cVar4 != '\0') {
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar17;
        __this_03.fields.m_Enumerator.fields._0_8_ = pIVar15;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar18;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar20;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar22;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._list = pSVar24;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var25.rgctx_data;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._current = _Var26.genericMethod;
        pSVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           (__this_03,(MethodInfo *)&stack0xfffffffffffffef8);
        __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(__this->fields).TargetEnemy;
        uVar11 = "AttackSpeeds";
        __this_06 = (Characters_AnimationHandler_o *)data;
        pCVar8 = (Characters_AnimationHandler_o *)
                 (*(data->klass->vtable)._7_get_Item.methodPtr)
                           (data,"AttackSpeeds",(data->klass->vtable)._7_get_Item.method);
        uVar1 = (undefined4)uVar11;
        if (pCVar8 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
        pSVar10 = pSVar7;
        pCVar9 = (Characters_AnimationHandler_o *)
                 (*pCVar8->klass[1]._1.this_arg.data)
                           (pCVar8,pSVar7,*(undefined8 *)&pCVar8->klass[1]._1.this_arg.bits);
        uVar1 = SUB84(pSVar10,0);
        __this_06 = pCVar8;
        if (pCVar9 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
        uVar1 = SUB84(pCVar9->klass[2]._1.nestedTypes,0);
        fVar13 = (float)(*pCVar9->klass[2]._1.methods)();
        __this_06 = pCVar9;
        if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04300cd6;
        System_Collections_Generic_Dictionary_object__float___Add
                  (__this_00,(Il2CppObject *)pSVar7,fVar13,MethodInfo_Void_Add);
        __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar17;
        __this_04.fields.m_Enumerator.fields._0_8_ = pIVar15;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar18;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar20;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar21;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar22;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._list = pSVar24;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var25.rgctx_data;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._current = _Var26.genericMethod;
        bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          (__this_04,(MethodInfo *)&stack0xfffffffffffffef8);
        cVar4 = (char)bVar5;
      }
    }
    cVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"TurnSpeed",(data->klass->vtable)._28_HasKey.method);
    if (cVar4 == '\0') {
      return;
    }
    uVar11 = "TurnSpeed";
    plVar6 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                               (data,"TurnSpeed",(data->klass->vtable)._7_get_Item.method);
    uVar1 = (undefined4)uVar11;
    __this_06 = (Characters_AnimationHandler_o *)data;
    if (plVar6 != (long *)0x0) {
      uVar1 = (undefined4)*(undefined8 *)(*plVar6 + 0x390);
      uVar14 = (**(code **)(*plVar6 + 0x388))(plVar6);
      *(undefined4 *)&(__this->fields).AttackSpeeds = uVar14;
      plVar6 = *(long **)&(__this->fields).TurnPause;
      __this_06 = (Characters_AnimationHandler_o *)0x0;
      if (plVar6 != (long *)0x0) {
        pSVar10 = (System_String_o *)(**(code **)(*plVar6 + 0x268))(plVar6,*(undefined8 *)(*plVar6 + 0x270));
        pSVar7 = "";
        bVar5 = System_String__op_Inequality(pSVar10,"",(MethodInfo *)0x0);
        uVar1 = SUB84(pSVar7,0);
        if ((char)bVar5 != '\0') {
          plVar6 = *(long **)&(__this->fields).TurnPause;
          __this_06 = (Characters_AnimationHandler_o *)0x0;
          if (plVar6 == (long *)0x0) goto label_04300cd6;
          pCVar8 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          lVar3 = *plVar6;
          uVar1 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
          pSVar7 = (System_String_o *)(**(code **)(lVar3 + 0x268))();
          __this_06 = *(Characters_AnimationHandler_o **)&(__this->fields).TurnPause;
          if (__this_06 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
          pCVar9 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          uVar1 = __this_06->klass[1]._2.instance_size;
          pSVar10 = (System_String_o *)(*__this_06->klass[1]._2.genericContainerHandle)();
          if (pCVar9 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
          fVar13 = Characters_AnimationHandler__GetSpeed(pCVar9,pSVar10,(MethodInfo *)0x0);
          uVar1 = SUB84(pSVar10,0);
          __this_06 = pCVar9;
          if (pCVar8 == (Characters_AnimationHandler_o *)0x0) goto label_04300cd6;
          Characters_AnimationHandler__SetSpeed
                    (pCVar8,pSVar7,fVar13 * *(float *)&(__this->fields).AttackSpeeds,(MethodInfo *)0x0);
          uVar1 = SUB84(pSVar7,0);
        }
        plVar6 = *(long **)&(__this->fields).TurnPause;
        __this_06 = (Characters_AnimationHandler_o *)0x0;
        if (plVar6 != (long *)0x0) {
          pSVar10 = (System_String_o *)(**(code **)(*plVar6 + 0x278))(plVar6,*(undefined8 *)(*plVar6 + 0x280))
          ;
          pSVar7 = "";
          bVar5 = System_String__op_Inequality(pSVar10,"",(MethodInfo *)0x0);
          uVar1 = SUB84(pSVar7,0);
          if ((char)bVar5 == '\0') {
            return;
          }
          plVar6 = *(long **)&(__this->fields).TurnPause;
          __this_06 = (Characters_AnimationHandler_o *)0x0;
          if (plVar6 != (long *)0x0) {
            pCVar8 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
            lVar3 = *plVar6;
            uVar1 = (undefined4)*(undefined8 *)(lVar3 + 0x280);
            pSVar7 = (System_String_o *)(**(code **)(lVar3 + 0x278))();
            __this_06 = *(Characters_AnimationHandler_o **)&(__this->fields).TurnPause;
            if (__this_06 != (Characters_AnimationHandler_o *)0x0) {
              pCVar9 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
              uVar2 = __this_06->klass[1]._2.static_fields_size;
              uVar1 = uVar2;
              pSVar10 = (System_String_o *)(**(code **)&__this_06->klass[1]._2.element_size)();
              if (pCVar9 != (Characters_AnimationHandler_o *)0x0) {
                fVar13 = Characters_AnimationHandler__GetSpeed(pCVar9,pSVar10,(MethodInfo *)0x0);
                uVar1 = SUB84(pSVar10,0);
                __this_06 = pCVar9;
                if (pCVar8 != (Characters_AnimationHandler_o *)0x0) {
                  Characters_AnimationHandler__SetSpeed
                            (pCVar8,pSVar7,fVar13 * *(float *)&(__this->fields).AttackSpeeds,(MethodInfo *)0x0
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
label_04300cd6:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_06->fields).Animation = uVar1;
  return;
}


// Characters.BaseTitan$$CreateDetection
// il2cpp: void Characters_BaseTitan__CreateDetection (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430be50

void Characters_BaseTitan__CreateDetection(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync_o *__this_00;
  
  if (g_data_057adf78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanDetection);
    g_data_057adf78 = '\x01';
  }
  __this_00 = (Characters_BaseMovementSync_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TitanDetection);
  Characters_TitanDetection___ctor
            ((Characters_TitanDetection_o *)__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  (__this->fields).MovementSync = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MovementSync,__this_00);
  return;
}


// Characters.BaseTitan$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_BaseTitan__GetRootMotionAnimations (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bec0

System_Collections_Generic_Dictionary_string__float__o *
Characters_BaseTitan__GetRootMotionAnimations(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (g_data_057adf79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf79 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_string__float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_System_String_System_Single);
  return __this_00;
}


// Characters.BaseTitan$$IsGrabAttack
// il2cpp: bool Characters_BaseTitan__IsGrabAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bf20

bool_conflict Characters_BaseTitan__IsGrabAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.BaseTitan$$GetCurrentSpeed
// il2cpp: float Characters_BaseTitan__GetCurrentSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bf30

float Characters_BaseTitan__GetCurrentSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  ulong uVar1;
  
  uVar1 = (ulong)(byte)(__this->fields).State;
  return (float)(&(__this->fields).TitanGroundMaskLayers)[uVar1 != 0].fields.m_Mask *
         *(float *)((long)&(__this->fields).TitanColliderToggler + 4) +
         *(float *)((long)&(__this->fields).BaseTitanAnimations + uVar1 * 4);
}


// Characters.BaseTitan$$CanAction
// il2cpp: bool Characters_BaseTitan__CanAction (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bf60

bool_conflict Characters_BaseTitan__CanAction(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  ulong in_RAX;
  
  if ((((*(char *)&(__this->fields)._previousCoreLocalPosition.fields.y == '\0') ||
       (*(char *)&(__this->fields).FeedVictimName != '\0')) ||
      (*(int *)&(__this->fields).OutlineComponent != 0)) || (0.0 < (__this->fields)._currentCrippleTime)) {
    uVar1 = *(uint *)&(__this->fields).OutlineComponent;
    in_RAX = (ulong)uVar1;
    if (uVar1 != 1) {
      return CONCAT31((int3)(uVar1 >> 8),(uVar1 | 1) == 3);
    }
  }
  return (bool_conflict)CONCAT71((int7)(in_RAX >> 8),1);
}


// Characters.BaseTitan$$CanEmote
// il2cpp: bool Characters_BaseTitan__CanEmote (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430bfa0

bool_conflict Characters_BaseTitan__CanEmote(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  char cVar1;
  uint uVar2;
  bool_conflict bVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  undefined7 uVar5;
  
  cVar1 = *(char *)&(__this->fields)._previousCoreLocalPosition.fields.y;
  uVar5 = (undefined7)((ulong)in_RAX >> 8);
  uVar4 = CONCAT71(uVar5,cVar1);
  if ((char)(__this->fields).CustomDamage == '\0') {
    if (((cVar1 != '\0') && (*(char *)&(__this->fields).FeedVictimName == '\0')) &&
       (*(int *)&(__this->fields).OutlineComponent == 0)) {
      uVar4 = CONCAT71(uVar5,1);
      if ((__this->fields)._currentCrippleTime <= 0.0) {
        return (bool_conflict)uVar4;
      }
    }
    uVar2 = *(uint *)&(__this->fields).OutlineComponent;
    uVar5 = (undefined7)((ulong)uVar4 >> 8);
    bVar3 = (bool_conflict)CONCAT71(uVar5,1);
    if (uVar2 != 1) {
      return (bool_conflict)CONCAT71(uVar5,(uVar2 | 1) == 3);
    }
  }
  else {
    if ((cVar1 == '\0') || (*(char *)&(__this->fields).FeedVictimName != '\0')) {
      return 0;
    }
    bVar3 = (bool_conflict)CONCAT71(uVar5,*(int *)&(__this->fields).OutlineComponent != 0xf);
  }
  return bVar3;
}


// Characters.BaseTitan$$CanStun
// il2cpp: bool Characters_BaseTitan__CanStun (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430c000

bool_conflict Characters_BaseTitan__CanStun(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined8 in_RAX;
  
  if (*(int *)&(__this->fields).OutlineComponent == 0xd) {
    return 0;
  }
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return 0;
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)in_RAX >> 8),
                  *(char *)&(__this->fields)._previousCoreLocalPosition.fields.y != '\0');
}


// Characters.BaseTitan$$Jump
// il2cpp: void Characters_BaseTitan__Jump (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x430c020

void Characters_BaseTitan__Jump
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  ulong uVar1;
  int iVar2;
  Characters_AnimationHandler_o *pCVar3;
  long lVar4;
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_o **in_RCX;
  Characters_BaseTitan_o *__this_01;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar14 [16];
  UnityEngine_Vector3_o force;
  undefined8 uVar13;
  
  if (g_data_057adf7a == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf7a = '\x01';
  }
  plVar8 = *(long **)&(__this->fields).TurnPause;
  if (plVar8 != (long *)0x0) {
    pSVar7 = (System_String_o *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    in_RCX = &"";
    bVar6 = System_String__op_Equality(pSVar7,"",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    *(long *)&(__this->fields)._wallClimbForward.fields.z = direction.fields._0_8_;
    (__this->fields)._turnStartRotation.fields.y = direction.fields.z;
    plVar8 = *(long **)&(__this->fields).TurnPause;
    if (plVar8 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar8 + 0x1b8))();
      pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
        fVar9 = Characters_AnimationHandler__GetLength(pCVar3,pSVar7,(MethodInfo *)0x0);
        *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
        pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
          (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar7,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(__this->fields).OutlineComponent = 4;
          *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar7;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar7);
          (__this->fields)._currentCrippleTime = fVar9;
          return;
        }
      }
    }
  }
  __this_01 = (Characters_BaseTitan_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  plVar8 = (long *)__this_01;
  Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this_01,0,0.0,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_01->fields).OutlineComponent = 5;
  (__this_01->fields)._currentCrippleTime = 0.2;
  lVar4 = *(long *)&(__this_01->fields).Dead;
  if (lVar4 != 0) {
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18);
    uVar1 = *(ulong *)&(__this_01->fields)._wallClimbForward.fields.z;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar1;
    fVar9 = (__this_01->fields)._turnStartRotation.fields.y;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      iVar2 = (TypeInfo_Math->fields)._stepPhase;
      plVar8 = (long *)TypeInfo_Math;
    }
    else {
      iVar2 = (TypeInfo_Math->fields)._stepPhase;
      plVar8 = (long *)TypeInfo_Math;
    }
    TypeInfo_Math = (Characters_BaseTitan_o *)plVar8;
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar10 = (float)(uVar1 >> 0x20);
    uVar11 = 0;
    uVar12 = 0;
    fVar10 = fVar9 * fVar9 + fVar10 * fVar10 + (float)uVar1 * (float)uVar1;
    if (fVar10 < 0.0) {
      fVar10 = sqrtf(fVar10);
      uVar11 = extraout_XMM0_Dc;
      uVar12 = extraout_XMM0_Dd;
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    if (1e-05 < fVar10) {
      fVar9 = fVar9 / fVar10;
      auVar5._4_4_ = fVar10;
      auVar5._0_4_ = fVar10;
      auVar5._8_4_ = uVar11;
      auVar5._12_4_ = uVar12;
      auVar14 = divps(auVar14,auVar5);
      uVar13 = auVar14._0_8_;
    }
    else {
      if (g_data_057a65d5 == '\0') {
        plVar8 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      uVar13 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      fVar10 = (__this_01->fields).ConfusedTime;
      force.fields.z = fVar9 * fVar10;
      force.fields.y = (float)((ulong)uVar13 >> 0x20) * fVar10;
      force.fields.x = (float)uVar13 * fVar10;
      UnityEngine_Rigidbody__AddForce(__this_00,force,2,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (*(((Characters_BaseTitan_o *)plVar8)->klass->vtable)._130_ResetAttackState.methodPtr)();
  Characters_BaseTitan__StateAttack
            ((Characters_BaseTitan_o *)plVar8,
             *(System_String_o **)&(((Characters_BaseTitan_o *)plVar8)->fields)._currentFallTotalTime,0.1,1,
             (MethodInfo *)in_RCX);
  return;
}


// Characters.BaseTitan$$StartJump
// il2cpp: void Characters_BaseTitan__StartJump (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430c180

void Characters_BaseTitan__StartJump(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar4 [16];
  MethodInfo *in_RCX;
  long *__this_01;
  float fVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dd;
  float fVar8;
  undefined1 auVar10 [16];
  UnityEngine_Vector3_o force;
  undefined8 uVar9;
  
  __this_01 = (long *)__this;
  Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,0,0.0,(MethodInfo *)0x0);
  *(undefined4 *)&(__this->fields).OutlineComponent = 5;
  (__this->fields)._currentCrippleTime = 0.2;
  lVar3 = *(long *)&(__this->fields).Dead;
  if (lVar3 != 0) {
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18);
    uVar1 = *(ulong *)&(__this->fields)._wallClimbForward.fields.z;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar1;
    fVar8 = (__this->fields)._turnStartRotation.fields.y;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      iVar2 = (TypeInfo_Math->fields)._stepPhase;
      __this_01 = (long *)TypeInfo_Math;
    }
    else {
      iVar2 = (TypeInfo_Math->fields)._stepPhase;
      __this_01 = (long *)TypeInfo_Math;
    }
    TypeInfo_Math = (Characters_BaseTitan_o *)__this_01;
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar5 = (float)(uVar1 >> 0x20);
    uVar6 = 0;
    uVar7 = 0;
    fVar5 = fVar8 * fVar8 + fVar5 * fVar5 + (float)uVar1 * (float)uVar1;
    if (fVar5 < 0.0) {
      fVar5 = sqrtf(fVar5);
      uVar6 = extraout_XMM0_Dc;
      uVar7 = extraout_XMM0_Dd;
    }
    else {
      fVar5 = SQRT(fVar5);
    }
    if (1e-05 < fVar5) {
      fVar8 = fVar8 / fVar5;
      auVar4._4_4_ = fVar5;
      auVar4._0_4_ = fVar5;
      auVar4._8_4_ = uVar6;
      auVar4._12_4_ = uVar7;
      auVar10 = divps(auVar10,auVar4);
      uVar9 = auVar10._0_8_;
    }
    else {
      if (g_data_057a65d5 == '\0') {
        __this_01 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      uVar9 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar8 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      fVar5 = (__this->fields).ConfusedTime;
      force.fields.z = fVar8 * fVar5;
      force.fields.y = (float)((ulong)uVar9 >> 0x20) * fVar5;
      force.fields.x = (float)uVar9 * fVar5;
      UnityEngine_Rigidbody__AddForce(__this_00,force,2,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (*(((Characters_BaseTitan_o *)__this_01)->klass->vtable)._130_ResetAttackState.methodPtr)();
  Characters_BaseTitan__StateAttack
            ((Characters_BaseTitan_o *)__this_01,
             *(System_String_o **)&(((Characters_BaseTitan_o *)__this_01)->fields)._currentFallTotalTime,0.1,1
             ,in_RCX);
  return;
}


// Characters.BaseTitan$$Attack
// il2cpp: void Characters_BaseTitan__Attack (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x430c310

void Characters_BaseTitan__Attack(Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  (*(__this->klass->vtable)._130_ResetAttackState.methodPtr)
            (__this,attack,(__this->klass->vtable)._130_ResetAttackState.method);
  Characters_BaseTitan__StateAttack
            (__this,*(System_String_o **)&(__this->fields)._currentFallTotalTime,0.1,1,in_RCX);
  return;
}


// Characters.BaseTitan$$CanAttack
// il2cpp: bool Characters_BaseTitan__CanAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430c420

bool_conflict Characters_BaseTitan__CanAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._123_CanAction.methodPtr;
  bVar1 = (*vtableDispatch)
                    (__this,(__this->klass->vtable)._123_CanAction.method,in_RDX,vtableDispatch);
  return bVar1;
}


// Characters.BaseTitan$$ResetAttackState
// il2cpp: void Characters_BaseTitan__ResetAttackState (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x430c440

void Characters_BaseTitan__ResetAttackState
               (Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Rigidbody_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  System_String_o *key;
  Characters_BaseTitan_o *pCVar5;
  float fVar6;
  
  if (g_data_057adf7b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    g_data_057adf7b = '\x01';
  }
  key = (System_String_o *)0x0;
  pCVar5 = __this;
  Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,0,0.0,(MethodInfo *)0x0);
  if ((char)(__this->fields).CustomDamage == '\0') {
label_0430c4d6:
    *(System_String_o **)&(__this->fields)._disableCooldownLeft = attack;
    key = attack;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._disableCooldownLeft);
    __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 &(__this->fields)._startCoreAttackPosition.fields.z;
    pCVar5 = (Characters_BaseTitan_o *)0x0;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this_01,(Il2CppObject *)attack,MethodInfo_String_get_Item);
      *(Il2CppObject **)&(__this->fields)._currentFallTotalTime = pIVar4;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._currentFallTotalTime,pIVar4);
      fVar6 = Characters_BaseTitan__GetAttackSpeed(__this,attack,method_00);
      (__this->fields)._startPosition.fields.y = fVar6;
      (__this->fields)._startPosition.fields.z = 0.0;
      return;
    }
  }
  else {
    lVar1 = *(long *)&(__this->fields).Dead;
    if (lVar1 != 0) {
      __this_00 = *(UnityEngine_Rigidbody_o **)(lVar1 + 0x18);
      if (g_data_057a65d5 == '\0') {
        pCVar5 = (Characters_BaseTitan_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        UnityEngine_Rigidbody__set_velocity
                  (__this_00,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                   (MethodInfo *)0x0);
        goto label_0430c4d6;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    g_data_057adf7c = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar5->fields).TargetEnemy;
  if (pSVar2 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
label_0430c5fb:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  bVar3 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                    (pSVar2,(Il2CppObject *)key,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 != '\0') {
    pSVar2 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(pCVar5->fields).TargetEnemy;
    if (pSVar2 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0430c5fb;
    System_Collections_Generic_Dictionary_object__float___get_Item(pSVar2,(Il2CppObject *)key,MethodInfo_Single_get_Item);
  }
  return;
}


// Characters.BaseTitan$$GetAttackSpeed
// il2cpp: float Characters_BaseTitan__GetAttackSpeed (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x430c550

float Characters_BaseTitan__GetAttackSpeed
                (Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar1;
  bool_conflict bVar2;
  uint uVar3;
  float fVar4;
  
  if (g_data_057adf7c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    g_data_057adf7c = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(__this->fields).TargetEnemy;
  if (pSVar1 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                      (pSVar1,(Il2CppObject *)attack,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      fVar4 = 1.0;
    }
    else {
      pSVar1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(__this->fields).TargetEnemy;
      if (pSVar1 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0430c5fb;
      fVar4 = System_Collections_Generic_Dictionary_object__float___get_Item
                        (pSVar1,(Il2CppObject *)attack,MethodInfo_Single_get_Item);
    }
    fVar4 = fVar4 * (__this->fields).SprintStaminaConsumption;
    uVar3 = -(uint)(fVar4 <= 0.0);
    return (float)(uVar3 & 0x3f800000 | ~uVar3 & (uint)fVar4);
  }
label_0430c5fb:
  fVar4 = (float)il2cpp_runtime_helper_022b2c90();
  return fVar4;
}


// Characters.BaseTitan$$Kick
// il2cpp: void Characters_BaseTitan__Kick (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430c600

void Characters_BaseTitan__Kick(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$Stun
// il2cpp: void Characters_BaseTitan__Stun (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430c610

void Characters_BaseTitan__Stun(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  long *plVar2;
  Characters_AnimationHandler_o *pCVar3;
  char cVar4;
  System_String_o *pSVar5;
  Characters_BaseCharacter_o *pCVar6;
  
  cVar4 = (*(__this->klass->vtable)._125_CanStun.methodPtr)
                    (__this,(__this->klass->vtable)._125_CanStun.method);
  if (cVar4 == '\0') {
    return;
  }
  plVar2 = *(long **)&(__this->fields).TurnPause;
  if (plVar2 != (long *)0x0) {
    pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 0x1e8))();
    fVar1 = (float)(__this->fields).IsSprint;
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,pSVar5,0.1,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 0xd;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar5;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar5);
      (__this->fields)._currentCrippleTime = fVar1;
      return;
    }
  }
  pCVar6 = (Characters_BaseCharacter_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  (pCVar6->fields).CurrentSpeed = 0.0;
  pSVar5 = pCVar6[1].fields.VisibleName;
  if (pSVar5 != (System_String_o *)0x0) {
    pSVar5 = (System_String_o *)
             (*(pSVar5->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)();
    *(undefined1 *)&pCVar6[2].fields.m_CancellationTokenSource = 1;
    pCVar3 = *(Characters_AnimationHandler_o **)&(pCVar6->fields)._cameraFPS;
    if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
      (*(code *)pCVar6->klass[1].vtable._18_unknown.method)
                (pCVar6,pCVar6->klass[1].vtable._19_unknown.methodPtr);
      (*(code *)pCVar6->klass[1].vtable._33_OnCreateRoomFailed.method)
                (pCVar6,pCVar6->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
      Characters_BaseCharacter__CrossFade(pCVar6,pSVar5,0.5,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(pCVar6->fields).OutlineComponent = 1;
      pCVar6[2].monitor = pSVar5;
      il2cpp_runtime_helper_022b4080(&pCVar6[2].monitor,pSVar5);
      *(undefined4 *)((long)&pCVar6[1].fields.OnPlayerPropertiesChanged + 4) = 0;
      return;
    }
  }
  pCVar6 = (Characters_BaseCharacter_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  (pCVar6->fields).CurrentSpeed = 0.0;
  pSVar5 = pCVar6[1].fields.VisibleName;
  if (pSVar5 != (System_String_o *)0x0) {
    pSVar5 = (System_String_o *)
             (*(pSVar5->klass->vtable)._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.
               methodPtr)();
    *(undefined1 *)&pCVar6[2].fields.m_CancellationTokenSource = 1;
    pCVar3 = *(Characters_AnimationHandler_o **)&(pCVar6->fields)._cameraFPS;
    if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
      (*(code *)pCVar6->klass[1].vtable._18_unknown.method)
                (pCVar6,pCVar6->klass[1].vtable._19_unknown.methodPtr);
      (*(code *)pCVar6->klass[1].vtable._33_OnCreateRoomFailed.method)
                (pCVar6,pCVar6->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
      Characters_BaseCharacter__CrossFade(pCVar6,pSVar5,0.2,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(pCVar6->fields).OutlineComponent = 2;
      pCVar6[2].monitor = pSVar5;
      il2cpp_runtime_helper_022b4080(&pCVar6[2].monitor,pSVar5);
      *(undefined4 *)((long)&pCVar6[1].fields.OnPlayerPropertiesChanged + 4) = 0;
      return;
    }
  }
  pCVar6 = (Characters_BaseCharacter_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  cVar4 = (*(code *)pCVar6->klass[1]._1.name)();
  if ((cVar4 != '\0') && (*(float *)&pCVar6[1].fields.field_0xdc <= 0.0)) {
    *(undefined4 *)&pCVar6[1].fields.field_0xdc = *(undefined4 *)&pCVar6[1].fields.m_CancellationTokenSource;
    (pCVar6->fields).CurrentSpeed = 0.0;
    pSVar5 = pCVar6[1].fields.VisibleName;
    if (pSVar5 != (System_String_o *)0x0) {
      pSVar5 = (System_String_o *)
               (*(pSVar5->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)();
      *(undefined1 *)&pCVar6[2].fields.m_CancellationTokenSource = 1;
      pCVar3 = *(Characters_AnimationHandler_o **)&(pCVar6->fields)._cameraFPS;
      if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
        (*(code *)pCVar6->klass[1].vtable._18_unknown.method)
                  (pCVar6,pCVar6->klass[1].vtable._19_unknown.methodPtr);
        (*(code *)pCVar6->klass[1].vtable._33_OnCreateRoomFailed.method)
                  (pCVar6,pCVar6->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
        Characters_BaseCharacter__CrossFade(pCVar6,pSVar5,0.1,0.0,(MethodInfo *)0x0);
        *(undefined4 *)&(pCVar6->fields).OutlineComponent = 0x19;
        pCVar6[2].monitor = pSVar5;
        il2cpp_runtime_helper_022b4080(&pCVar6[2].monitor,pSVar5);
        *(undefined4 *)((long)&pCVar6[1].fields.OnPlayerPropertiesChanged + 4) = 0;
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  return;
}


// Characters.BaseTitan$$Run
// il2cpp: void Characters_BaseTitan__Run (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430c6f0

void Characters_BaseTitan__Run(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *pCVar2;
  char cVar3;
  System_String_o *pSVar4;
  Characters_BaseCharacter_o *pCVar5;
  
  (__this->fields).CurrentSpeed = 0.0;
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    pSVar4 = (System_String_o *)(**(code **)(*plVar1 + 0x188))();
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,pSVar4,0.5,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 1;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar4;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar4);
      (__this->fields)._currentCrippleTime = 0.0;
      return;
    }
  }
  pCVar5 = (Characters_BaseCharacter_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  (pCVar5->fields).CurrentSpeed = 0.0;
  pSVar4 = pCVar5[1].fields.VisibleName;
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar4 = (System_String_o *)
             (*(pSVar4->klass->vtable)._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.
               methodPtr)();
    *(undefined1 *)&pCVar5[2].fields.m_CancellationTokenSource = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(pCVar5->fields)._cameraFPS;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
      (*(code *)pCVar5->klass[1].vtable._18_unknown.method)
                (pCVar5,pCVar5->klass[1].vtable._19_unknown.methodPtr);
      (*(code *)pCVar5->klass[1].vtable._33_OnCreateRoomFailed.method)
                (pCVar5,pCVar5->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
      Characters_BaseCharacter__CrossFade(pCVar5,pSVar4,0.2,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(pCVar5->fields).OutlineComponent = 2;
      pCVar5[2].monitor = pSVar4;
      il2cpp_runtime_helper_022b4080(&pCVar5[2].monitor,pSVar4);
      *(undefined4 *)((long)&pCVar5[1].fields.OnPlayerPropertiesChanged + 4) = 0;
      return;
    }
  }
  pCVar5 = (Characters_BaseCharacter_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  cVar3 = (*(code *)pCVar5->klass[1]._1.name)();
  if ((cVar3 != '\0') && (*(float *)&pCVar5[1].fields.field_0xdc <= 0.0)) {
    *(undefined4 *)&pCVar5[1].fields.field_0xdc = *(undefined4 *)&pCVar5[1].fields.m_CancellationTokenSource;
    (pCVar5->fields).CurrentSpeed = 0.0;
    pSVar4 = pCVar5[1].fields.VisibleName;
    if (pSVar4 != (System_String_o *)0x0) {
      pSVar4 = (System_String_o *)
               (*(pSVar4->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)();
      *(undefined1 *)&pCVar5[2].fields.m_CancellationTokenSource = 1;
      pCVar2 = *(Characters_AnimationHandler_o **)&(pCVar5->fields)._cameraFPS;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
        (*(code *)pCVar5->klass[1].vtable._18_unknown.method)
                  (pCVar5,pCVar5->klass[1].vtable._19_unknown.methodPtr);
        (*(code *)pCVar5->klass[1].vtable._33_OnCreateRoomFailed.method)
                  (pCVar5,pCVar5->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
        Characters_BaseCharacter__CrossFade(pCVar5,pSVar4,0.1,0.0,(MethodInfo *)0x0);
        *(undefined4 *)&(pCVar5->fields).OutlineComponent = 0x19;
        pCVar5[2].monitor = pSVar4;
        il2cpp_runtime_helper_022b4080(&pCVar5[2].monitor,pSVar4);
        *(undefined4 *)((long)&pCVar5[1].fields.OnPlayerPropertiesChanged + 4) = 0;
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  return;
}


// Characters.BaseTitan$$Sprint
// il2cpp: void Characters_BaseTitan__Sprint (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430c7c0

void Characters_BaseTitan__Sprint(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *pCVar2;
  char cVar3;
  System_String_o *pSVar4;
  Characters_BaseCharacter_o *__this_00;
  
  (__this->fields).CurrentSpeed = 0.0;
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    pSVar4 = (System_String_o *)(**(code **)(*plVar1 + 0x198))();
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,pSVar4,0.2,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 2;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar4;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar4);
      (__this->fields)._currentCrippleTime = 0.0;
      return;
    }
  }
  __this_00 = (Characters_BaseCharacter_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  cVar3 = (*(code *)__this_00->klass[1]._1.name)();
  if ((cVar3 != '\0') && (*(float *)&__this_00[1].fields.field_0xdc <= 0.0)) {
    *(undefined4 *)&__this_00[1].fields.field_0xdc =
         *(undefined4 *)&__this_00[1].fields.m_CancellationTokenSource;
    (__this_00->fields).CurrentSpeed = 0.0;
    pSVar4 = __this_00[1].fields.VisibleName;
    if (pSVar4 != (System_String_o *)0x0) {
      pSVar4 = (System_String_o *)
               (*(pSVar4->klass->vtable)._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)();
      *(undefined1 *)&__this_00[2].fields.m_CancellationTokenSource = 1;
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
        (*(code *)__this_00->klass[1].vtable._18_unknown.method)
                  (__this_00,__this_00->klass[1].vtable._19_unknown.methodPtr);
        (*(code *)__this_00->klass[1].vtable._33_OnCreateRoomFailed.method)
                  (__this_00,__this_00->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
        Characters_BaseCharacter__CrossFade(__this_00,pSVar4,0.1,0.0,(MethodInfo *)0x0);
        *(undefined4 *)&(__this_00->fields).OutlineComponent = 0x19;
        __this_00[2].monitor = pSVar4;
        il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pSVar4);
        *(undefined4 *)((long)&__this_00[1].fields.OnPlayerPropertiesChanged + 4) = 0;
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  return;
}


// Characters.BaseTitan$$WallClimb
// il2cpp: void Characters_BaseTitan__WallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430c890

void Characters_BaseTitan__WallClimb(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *__this_00;
  char cVar2;
  System_String_o *animation;
  
  cVar2 = (*(__this->klass->vtable)._111_get_CanWallClimb.methodPtr)
                    (__this,(__this->klass->vtable)._111_get_CanWallClimb.method);
  if ((cVar2 != '\0') && ((__this->fields)._jumpDirection.fields.z <= 0.0)) {
    (__this->fields)._jumpDirection.fields.z = (float)(__this->fields).IsWalk;
    (__this->fields).CurrentSpeed = 0.0;
    plVar1 = *(long **)&(__this->fields).TurnPause;
    if (plVar1 != (long *)0x0) {
      animation = (System_String_o *)(**(code **)(*plVar1 + 0x188))();
      *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
      __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(__this_00,0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
        (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
        *(undefined4 *)&(__this->fields).OutlineComponent = 0x19;
        *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,animation);
        (__this->fields)._currentCrippleTime = 0.0;
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  return;
}


// Characters.BaseTitan$$Eat
// il2cpp: void Characters_BaseTitan__Eat (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430c990

void Characters_BaseTitan__Eat(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$Walk
// il2cpp: void Characters_BaseTitan__Walk (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430c9a0

void Characters_BaseTitan__Walk(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  long *plVar1;
  undefined4 uVar2;
  
  (__this->fields).CurrentSpeed = 0.0;
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    animation = (System_String_o *)(**(code **)(*plVar1 + 0x1a8))();
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.5,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 3;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,animation);
      (__this->fields)._currentCrippleTime = 0.0;
      return;
    }
  }
  plVar1 = (long *)0x0;
  il2cpp_runtime_helper_022b2c90();
  uVar2 = 0;
  if ((char)plVar1[0xf] != '\0') {
    uVar2 = 0x3dcccccd;
  }
  (**(code **)(*plVar1 + 0x9e8))(uVar2);
  return;
}


// Characters.BaseTitan$$Idle
// il2cpp: void Characters_BaseTitan__Idle (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430ca70

void Characters_BaseTitan__Idle(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((char)(__this->fields).CustomDamage != '\0') {
    uVar1 = 0x3dcccccd;
  }
  (*(__this->klass->vtable)._139_Idle.methodPtr)(uVar1,__this,(__this->klass->vtable)._139_Idle.method);
  return;
}


// Characters.BaseTitan$$Idle
// il2cpp: void Characters_BaseTitan__Idle (Characters_BaseTitan_o* __this, float fadeTime, const MethodInfo* method);
// 0x430caa0

void Characters_BaseTitan__Idle_420caa0(Characters_BaseTitan_o *__this,float fadeTime,MethodInfo *method)

{
  System_String_o *animation;
  long *plVar1;
  MethodInfo *in_R8;
  float fVar2;
  float fVar3;
  
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    animation = (System_String_o *)(**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
    Characters_BaseTitan__StateActionWithTime(__this,0,animation,0.0,fadeTime,1,in_R8);
    return;
  }
  fVar2 = (float)il2cpp_runtime_helper_022b2c90();
  fVar3 = 2.0;
  if (fVar2 <= 2.0) {
    fVar3 = fVar2;
  }
  (**(code **)(*plVar1 + 0x9e8))(~-(uint)(0.1 <= fVar2) & 0x3dcccccd | (uint)fVar3 & -(uint)(0.1 <= fVar2));
  *(float *)((long)plVar1 + 0x204) = fVar2;
  return;
}


// Characters.BaseTitan$$IdleWait
// il2cpp: void Characters_BaseTitan__IdleWait (Characters_BaseTitan_o* __this, float waitTime, const MethodInfo* method);
// 0x430cb00

void Characters_BaseTitan__IdleWait(Characters_BaseTitan_o *__this,float waitTime,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 2.0;
  if (waitTime <= 2.0) {
    fVar1 = waitTime;
  }
  (*(__this->klass->vtable)._139_Idle.methodPtr)
            ((ulong)(~-(uint)(0.1 <= waitTime) & 0x3dcccccd | (uint)fVar1 & -(uint)(0.1 <= waitTime)),__this,
             (__this->klass->vtable)._139_Idle.method);
  (__this->fields)._currentCrippleTime = waitTime;
  return;
}


// Characters.BaseTitan$$Land
// il2cpp: void Characters_BaseTitan__Land (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430cb60

void Characters_BaseTitan__Land(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  Characters_AnimationHandler_o *pCVar4;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  System_String_c *pSVar7;
  MethodInfo *vtableDispatch;
  char cVar8;
  bool_conflict bVar9;
  System_String_o *pSVar10;
  Characters_BaseCharacter_o *a;
  undefined8 extraout_RDX;
  Characters_BaseCharacter_o *pCVar11;
  Characters_BaseCharacter_o *__this_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_XMM1_Da;
  UnityEngine_Quaternion_o UVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o target;
  float fStack_bc;
  undefined8 uStack_48;
  
  if (g_data_057adf7d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    g_data_057adf7d = '\x01';
  }
  plVar3 = *(long **)&(__this->fields).TurnPause;
  pCVar11 = (Characters_BaseCharacter_o *)0x0;
  if (plVar3 != (long *)0x0) {
    pSVar10 = (System_String_o *)(**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
    pCVar4 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    pCVar11 = (Characters_BaseCharacter_o *)0x0;
    if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
      fVar12 = Characters_AnimationHandler__GetLength(pCVar4,pSVar10,(MethodInfo *)0x0);
      *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
      pCVar4 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      pCVar11 = (Characters_BaseCharacter_o *)0x0;
      if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar4,0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
        (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
        in_XMM1_Da = 0.0;
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar10,0.1,0.0,(MethodInfo *)0x0);
        *(undefined4 *)&(__this->fields).OutlineComponent = 9;
        *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar10;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft);
        (__this->fields)._currentCrippleTime = fVar12;
        if ((TypeInfo_EffectPrefabs->fields)._stepPhase == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar5 = *(long *)&(__this->fields).Dead;
        pCVar11 = TypeInfo_EffectPrefabs;
        if ((lVar5 != 0) &&
           (pUVar6 = *(UnityEngine_Transform_o **)(lVar5 + 0x10), pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          pSVar10 = *(System_String_o **)
                     &(((TypeInfo_EffectPrefabs->fields).MovementSync)->fields)._correctCamera.fields.w;
          UVar16 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          if (g_data_057ac31b == '\0') {
            il2cpp_runtime_helper_023445d0();
            g_data_057ac31b = '\x01';
          }
          uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
          fVar12 = (__this->fields)._turnTargetRotation.fields.x;
          UVar17.fields.z = UVar16.fields.z + fVar12 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
          UVar15 = UnityEngine_Quaternion__Internal_FromEulerRad
                             ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
          fVar14 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
          fVar13 = (float)(*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                                    (__this,(__this->klass->vtable)._117_get_SizeMultiplier.method);
          UVar17.fields.x = UVar16.fields.x + fVar12 * (float)uVar1;
          UVar17.fields.y = UVar16.fields.y + fVar12 * (float)((ulong)uVar1 >> 0x20);
          Effects_EffectSpawner__Spawn
                    (pSVar10,UVar17,UVar15,fVar14 * fVar13,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = pCVar11[1].fields.VisibleName;
  if (pSVar10 != (System_String_o *)0x0) {
    pSVar10 = (System_String_o *)(*(pSVar10->klass->vtable)._9_GetTypeCode.methodPtr)();
    *(undefined1 *)&pCVar11[2].fields.m_CancellationTokenSource = 1;
    pCVar4 = *(Characters_AnimationHandler_o **)&(pCVar11->fields)._cameraFPS;
    if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar4,0,(MethodInfo *)0x0);
      (*(code *)pCVar11->klass[1].vtable._18_unknown.method)
                (pCVar11,pCVar11->klass[1].vtable._19_unknown.methodPtr);
      (*(code *)pCVar11->klass[1].vtable._33_OnCreateRoomFailed.method)
                (pCVar11,pCVar11->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
      Characters_BaseCharacter__CrossFade(pCVar11,pSVar10,0.1,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(pCVar11->fields).OutlineComponent = 7;
      pCVar11[2].monitor = pSVar10;
      il2cpp_runtime_helper_022b4080(&pCVar11[2].monitor,pSVar10);
      *(undefined4 *)((long)&pCVar11[1].fields.OnPlayerPropertiesChanged + 4) = 0;
      return;
    }
  }
  pCVar11 = (Characters_BaseCharacter_o *)0x0;
  UVar16.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf7e = '\x01';
  }
  cVar8 = (*pCVar11->klass[1]._2.unity_user_data)(pCVar11);
  if (cVar8 == '\0') {
    return;
  }
  UVar16.fields.z = in_XMM1_Da;
  fVar12 = Characters_BaseCharacter__GetAngleToTarget(pCVar11,UVar16,(MethodInfo *)0x0);
  pSVar10 = pCVar11[1].fields.VisibleName;
  __this_00 = (Characters_BaseCharacter_o *)0x0;
  if (pSVar10 != (System_String_o *)0x0) {
    pSVar7 = pSVar10->klass;
    if (fVar12 <= 0.0) {
      a = (Characters_BaseCharacter_o *)
          (*(pSVar7->vtable)._19_System_IConvertible_ToUInt64.methodPtr)
                    (pSVar10,(pSVar7->vtable)._19_System_IConvertible_ToUInt64.method);
    }
    else {
      a = (Characters_BaseCharacter_o *)
          (*(pSVar7->vtable)._20_System_IConvertible_ToSingle.methodPtr)
                    (pSVar10,(pSVar7->vtable)._20_System_IConvertible_ToSingle.method);
    }
    __this_00 = a;
    bVar9 = System_String__op_Equality((System_String_o *)a,"",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    lVar5 = *(long *)&(pCVar11->fields).Dead;
    if (lVar5 != 0) {
      pUVar6 = *(UnityEngine_Transform_o **)(lVar5 + 0x10);
      __this_00 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        UVar17 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
        __this_00 = (Characters_BaseCharacter_o *)0x0;
        target.fields.z = in_XMM1_Da;
        target.fields.x = (float)(int)UVar16.fields._0_8_;
        target.fields.y = (float)(int)((ulong)UVar16.fields._0_8_ >> 0x20);
        UVar16 = UnityEngine_Vector3__RotateTowards(UVar17,target,2.0943952,3.4028235e+38,(MethodInfo *)0x0);
        lVar5 = *(long *)&(pCVar11->fields).Dead;
        if (lVar5 != 0) {
          pUVar6 = *(UnityEngine_Transform_o **)(lVar5 + 0x10);
          __this_00 = (Characters_BaseCharacter_o *)0x0;
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UVar15 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
            *(UnityEngine_Quaternion_Fields *)&pCVar11[1].fields.Items = UVar15.fields;
            UVar15 = UnityEngine_Quaternion__LookRotation_4debb20(UVar16,(MethodInfo *)0x0);
            *(UnityEngine_Quaternion_Fields *)&pCVar11[1].fields._cameraFPS = UVar15.fields;
            pCVar11[1].fields.CurrentSpeed = 0.0;
            pCVar4 = *(Characters_AnimationHandler_o **)&(pCVar11->fields)._cameraFPS;
            __this_00 = (Characters_BaseCharacter_o *)0x0;
            if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
              fVar12 = Characters_AnimationHandler__GetTotalTime
                                 (pCVar4,(System_String_o *)a,(MethodInfo *)0x0);
              *(float *)((long)&pCVar11[1].fields.Detection + 4) = fVar12;
              *(undefined1 *)&pCVar11[2].fields.m_CancellationTokenSource = 1;
              pCVar4 = *(Characters_AnimationHandler_o **)&(pCVar11->fields)._cameraFPS;
              __this_00 = (Characters_BaseCharacter_o *)0x0;
              if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
                Characters_AnimationHandler__SetCullingType(pCVar4,0,(MethodInfo *)0x0);
                (*(code *)pCVar11->klass[1].vtable._18_unknown.method)
                          (pCVar11,pCVar11->klass[1].vtable._19_unknown.methodPtr);
                (*(code *)pCVar11->klass[1].vtable._33_OnCreateRoomFailed.method)
                          (pCVar11,pCVar11->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
                Characters_BaseCharacter__CrossFade(pCVar11,(System_String_o *)a,0.1,0.0,(MethodInfo *)0x0);
                *(undefined4 *)&(pCVar11->fields).OutlineComponent = 0x18;
                pCVar11[2].monitor = a;
                il2cpp_runtime_helper_022b4080(&pCVar11[2].monitor,a);
                *(float *)((long)&pCVar11[1].fields.OnPlayerPropertiesChanged + 4) = fVar12;
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf7f == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf7f = '\x01';
  }
  uVar2 = *(uint *)&(__this_00->fields).OutlineComponent;
  if ((((uVar2 | 2) == 0x12) || ((char)(__this_00->fields).CustomDamage == '\0')) ||
     (0.0 < (float)__this_00[1].fields._stepPhase)) {
    return;
  }
  if ((uVar2 == 0x16) || (uVar2 == 0x11)) {
    pSVar10 = __this_00[1].fields.VisibleName;
    if (pSVar10 != (System_String_o *)0x0) {
      pSVar10 = (System_String_o *)
                (*(pSVar10->klass->vtable)._18_System_IConvertible_ToInt64.methodPtr)
                          (pSVar10,(pSVar10->klass->vtable)._18_System_IConvertible_ToInt64.method);
      bVar9 = System_String__op_Inequality(pSVar10,"",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pSVar10 = __this_00[1].fields.VisibleName;
      if (pSVar10 != (System_String_o *)0x0) {
        pSVar10 = (System_String_o *)
                  (*(pSVar10->klass->vtable)._18_System_IConvertible_ToInt64.methodPtr)
                            (pSVar10,(pSVar10->klass->vtable)._18_System_IConvertible_ToInt64.method);
        pCVar4 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
        if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
          fStack_bc = Characters_AnimationHandler__GetLength(pCVar4,pSVar10,(MethodInfo *)0x0);
          *(undefined1 *)&__this_00[2].fields.m_CancellationTokenSource = 1;
          pCVar4 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
          if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar4,0,(MethodInfo *)0x0);
            (*(code *)__this_00->klass[1].vtable._18_unknown.method)
                      (__this_00,__this_00->klass[1].vtable._19_unknown.methodPtr);
            (*(code *)__this_00->klass[1].vtable._33_OnCreateRoomFailed.method)
                      (__this_00,__this_00->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
            Characters_BaseCharacter__CrossFade(__this_00,pSVar10,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(__this_00->fields).OutlineComponent = 0x12;
            goto label_0430d28a;
          }
        }
      }
    }
  }
  else {
    pSVar10 = __this_00[1].fields.VisibleName;
    if (pSVar10 != (System_String_o *)0x0) {
      pSVar10 = (System_String_o *)
                (*(pSVar10->klass->vtable)._21_System_IConvertible_ToDouble.methodPtr)
                          (pSVar10,(pSVar10->klass->vtable)._21_System_IConvertible_ToDouble.method);
      bVar9 = System_String__op_Inequality(pSVar10,"",(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      pSVar10 = __this_00[1].fields.VisibleName;
      if (pSVar10 != (System_String_o *)0x0) {
        pSVar10 = (System_String_o *)
                  (*(pSVar10->klass->vtable)._21_System_IConvertible_ToDouble.methodPtr)
                            (pSVar10,(pSVar10->klass->vtable)._21_System_IConvertible_ToDouble.method);
        pCVar4 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
        if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
          fStack_bc = Characters_AnimationHandler__GetLength(pCVar4,pSVar10,(MethodInfo *)0x0);
          *(undefined1 *)&__this_00[2].fields.m_CancellationTokenSource = 1;
          pCVar4 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
          if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar4,0,(MethodInfo *)0x0);
            (*(code *)__this_00->klass[1].vtable._18_unknown.method)
                      (__this_00,__this_00->klass[1].vtable._19_unknown.methodPtr);
            (*(code *)__this_00->klass[1].vtable._33_OnCreateRoomFailed.method)
                      (__this_00,__this_00->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
            Characters_BaseCharacter__CrossFade(__this_00,pSVar10,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(__this_00->fields).OutlineComponent = 0x10;
label_0430d28a:
            __this_00[2].monitor = pSVar10;
            il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pSVar10);
            *(float *)((long)&__this_00[1].fields.OnPlayerPropertiesChanged + 4) = fStack_bc;
            vtableDispatch = __this_00->klass[1].vtable._38_OnDisconnected.method;
            (*(code *)vtableDispatch)
                      (0x3f800000,__this_00,__this_00->klass[1].vtable._39_OnRegionListReceived.methodPtr,
                       extraout_RDX,vtableDispatch);
            return;
          }
        }
      }
    }
  }
  pCVar11 = (Characters_BaseCharacter_o *)0x0;
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf80 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf80 = '\x01';
  }
  pSVar10 = pCVar11[1].fields.VisibleName;
  if (pSVar10 != (System_String_o *)0x0) {
    pSVar10 = (System_String_o *)
              (*(pSVar10->klass->vtable)._17_System_IConvertible_ToUInt32.methodPtr)
                        (pSVar10,(pSVar10->klass->vtable)._17_System_IConvertible_ToUInt32.method);
    bVar9 = System_String__op_Inequality(pSVar10,"",(MethodInfo *)0x0);
    if ((((char)bVar9 == '\0') || (*(int *)&(pCVar11->fields).OutlineComponent == 0x11)) ||
       (((char)(pCVar11->fields).CustomDamage == '\0' || (0.0 < (float)pCVar11[1].fields._stepPhase)))) {
      return;
    }
    if (fVar12 <= 0.0) {
      fVar12 = (float)(*pCVar11->klass[1]._1.image)(pCVar11,pCVar11->klass[1]._1.gc_desc);
    }
    pCVar11[1].fields.JustGrounded = (bool_conflict)fVar12;
    pSVar10 = pCVar11[1].fields.VisibleName;
    if (pSVar10 != (System_String_o *)0x0) {
      pSVar10 = (System_String_o *)
                (*(pSVar10->klass->vtable)._17_System_IConvertible_ToUInt32.methodPtr)
                          (pSVar10,(pSVar10->klass->vtable)._17_System_IConvertible_ToUInt32.method);
      pCVar4 = *(Characters_AnimationHandler_o **)&(pCVar11->fields)._cameraFPS;
      if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
        fVar12 = Characters_AnimationHandler__GetLength(pCVar4,pSVar10,(MethodInfo *)0x0);
        *(undefined1 *)&pCVar11[2].fields.m_CancellationTokenSource = 1;
        pCVar4 = *(Characters_AnimationHandler_o **)&(pCVar11->fields)._cameraFPS;
        if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar4,0,(MethodInfo *)0x0);
          (*(code *)pCVar11->klass[1].vtable._18_unknown.method)
                    (pCVar11,pCVar11->klass[1].vtable._19_unknown.methodPtr);
          (*(code *)pCVar11->klass[1].vtable._33_OnCreateRoomFailed.method)
                    (pCVar11,pCVar11->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
          Characters_BaseCharacter__CrossFade(pCVar11,pSVar10,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(pCVar11->fields).OutlineComponent = 0x13;
          pCVar11[2].monitor = pSVar10;
          il2cpp_runtime_helper_022b4080(&pCVar11[2].monitor,pSVar10);
          *(float *)((long)&pCVar11[1].fields.OnPlayerPropertiesChanged + 4) = fVar12;
          (*(code *)pCVar11->klass[1].vtable._38_OnDisconnected.method)
                    (0x3f800000,pCVar11,pCVar11->klass[1].vtable._39_OnRegionListReceived.methodPtr);
          fVar12 = (float)pCVar11[1].fields.JustGrounded;
          fVar14 = (float)(*pCVar11->klass[1]._1.fields)(pCVar11,pCVar11->klass[1]._1.events);
          pCVar11[1].fields._stepPhase = (int32_t)(fVar14 + fVar12);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.BaseTitan$$Fall
// il2cpp: void Characters_BaseTitan__Fall (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430cd90

void Characters_BaseTitan__Fall(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  long *plVar2;
  Characters_AnimationHandler_o *pCVar3;
  System_String_c *pSVar4;
  long lVar5;
  UnityEngine_Transform_o *pUVar6;
  MethodInfo *vtableDispatch;
  char cVar7;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  Characters_BaseCharacter_o *a;
  undefined8 extraout_RDX;
  Characters_BaseCharacter_o *pCVar10;
  Characters_BaseCharacter_o *__this_00;
  float fVar11;
  float fVar12;
  float in_XMM1_Da;
  UnityEngine_Quaternion_o UVar13;
  UnityEngine_Vector3_o current;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o target;
  float fStack_64;
  
  plVar2 = *(long **)&(__this->fields).TurnPause;
  if (plVar2 != (long *)0x0) {
    pSVar9 = (System_String_o *)(**(code **)(*plVar2 + 0x1c8))();
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,pSVar9,0.1,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 7;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar9;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar9);
      (__this->fields)._currentCrippleTime = 0.0;
      return;
    }
  }
  pCVar10 = (Characters_BaseCharacter_o *)0x0;
  UVar14.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf7e = '\x01';
  }
  cVar7 = (*pCVar10->klass[1]._2.unity_user_data)(pCVar10);
  if (cVar7 == '\0') {
    return;
  }
  UVar14.fields.z = in_XMM1_Da;
  fVar11 = Characters_BaseCharacter__GetAngleToTarget(pCVar10,UVar14,(MethodInfo *)0x0);
  pSVar9 = pCVar10[1].fields.VisibleName;
  __this_00 = (Characters_BaseCharacter_o *)0x0;
  if (pSVar9 != (System_String_o *)0x0) {
    pSVar4 = pSVar9->klass;
    if (fVar11 <= 0.0) {
      a = (Characters_BaseCharacter_o *)
          (*(pSVar4->vtable)._19_System_IConvertible_ToUInt64.methodPtr)
                    (pSVar9,(pSVar4->vtable)._19_System_IConvertible_ToUInt64.method);
    }
    else {
      a = (Characters_BaseCharacter_o *)
          (*(pSVar4->vtable)._20_System_IConvertible_ToSingle.methodPtr)
                    (pSVar9,(pSVar4->vtable)._20_System_IConvertible_ToSingle.method);
    }
    __this_00 = a;
    bVar8 = System_String__op_Equality((System_String_o *)a,"",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    lVar5 = *(long *)&(pCVar10->fields).Dead;
    if (lVar5 != 0) {
      pUVar6 = *(UnityEngine_Transform_o **)(lVar5 + 0x10);
      __this_00 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        current = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
        __this_00 = (Characters_BaseCharacter_o *)0x0;
        target.fields.z = in_XMM1_Da;
        target.fields.x = (float)(int)UVar14.fields._0_8_;
        target.fields.y = (float)(int)((ulong)UVar14.fields._0_8_ >> 0x20);
        UVar14 = UnityEngine_Vector3__RotateTowards(current,target,2.0943952,3.4028235e+38,(MethodInfo *)0x0);
        lVar5 = *(long *)&(pCVar10->fields).Dead;
        if (lVar5 != 0) {
          pUVar6 = *(UnityEngine_Transform_o **)(lVar5 + 0x10);
          __this_00 = (Characters_BaseCharacter_o *)0x0;
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UVar13 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
            *(UnityEngine_Quaternion_Fields *)&pCVar10[1].fields.Items = UVar13.fields;
            UVar13 = UnityEngine_Quaternion__LookRotation_4debb20(UVar14,(MethodInfo *)0x0);
            *(UnityEngine_Quaternion_Fields *)&pCVar10[1].fields._cameraFPS = UVar13.fields;
            pCVar10[1].fields.CurrentSpeed = 0.0;
            pCVar3 = *(Characters_AnimationHandler_o **)&(pCVar10->fields)._cameraFPS;
            __this_00 = (Characters_BaseCharacter_o *)0x0;
            if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
              fVar11 = Characters_AnimationHandler__GetTotalTime
                                 (pCVar3,(System_String_o *)a,(MethodInfo *)0x0);
              *(float *)((long)&pCVar10[1].fields.Detection + 4) = fVar11;
              *(undefined1 *)&pCVar10[2].fields.m_CancellationTokenSource = 1;
              pCVar3 = *(Characters_AnimationHandler_o **)&(pCVar10->fields)._cameraFPS;
              __this_00 = (Characters_BaseCharacter_o *)0x0;
              if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
                Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
                (*(code *)pCVar10->klass[1].vtable._18_unknown.method)
                          (pCVar10,pCVar10->klass[1].vtable._19_unknown.methodPtr);
                (*(code *)pCVar10->klass[1].vtable._33_OnCreateRoomFailed.method)
                          (pCVar10,pCVar10->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
                Characters_BaseCharacter__CrossFade(pCVar10,(System_String_o *)a,0.1,0.0,(MethodInfo *)0x0);
                *(undefined4 *)&(pCVar10->fields).OutlineComponent = 0x18;
                pCVar10[2].monitor = a;
                il2cpp_runtime_helper_022b4080(&pCVar10[2].monitor,a);
                *(float *)((long)&pCVar10[1].fields.OnPlayerPropertiesChanged + 4) = fVar11;
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf7f == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf7f = '\x01';
  }
  uVar1 = *(uint *)&(__this_00->fields).OutlineComponent;
  if ((((uVar1 | 2) == 0x12) || ((char)(__this_00->fields).CustomDamage == '\0')) ||
     (0.0 < (float)__this_00[1].fields._stepPhase)) {
    return;
  }
  if ((uVar1 == 0x16) || (uVar1 == 0x11)) {
    pSVar9 = __this_00[1].fields.VisibleName;
    if (pSVar9 != (System_String_o *)0x0) {
      pSVar9 = (System_String_o *)
               (*(pSVar9->klass->vtable)._18_System_IConvertible_ToInt64.methodPtr)
                         (pSVar9,(pSVar9->klass->vtable)._18_System_IConvertible_ToInt64.method);
      bVar8 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      pSVar9 = __this_00[1].fields.VisibleName;
      if (pSVar9 != (System_String_o *)0x0) {
        pSVar9 = (System_String_o *)
                 (*(pSVar9->klass->vtable)._18_System_IConvertible_ToInt64.methodPtr)
                           (pSVar9,(pSVar9->klass->vtable)._18_System_IConvertible_ToInt64.method);
        pCVar3 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
        if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
          fStack_64 = Characters_AnimationHandler__GetLength(pCVar3,pSVar9,(MethodInfo *)0x0);
          *(undefined1 *)&__this_00[2].fields.m_CancellationTokenSource = 1;
          pCVar3 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
          if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
            (*(code *)__this_00->klass[1].vtable._18_unknown.method)
                      (__this_00,__this_00->klass[1].vtable._19_unknown.methodPtr);
            (*(code *)__this_00->klass[1].vtable._33_OnCreateRoomFailed.method)
                      (__this_00,__this_00->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
            Characters_BaseCharacter__CrossFade(__this_00,pSVar9,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(__this_00->fields).OutlineComponent = 0x12;
            goto label_0430d28a;
          }
        }
      }
    }
  }
  else {
    pSVar9 = __this_00[1].fields.VisibleName;
    if (pSVar9 != (System_String_o *)0x0) {
      pSVar9 = (System_String_o *)
               (*(pSVar9->klass->vtable)._21_System_IConvertible_ToDouble.methodPtr)
                         (pSVar9,(pSVar9->klass->vtable)._21_System_IConvertible_ToDouble.method);
      bVar8 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      pSVar9 = __this_00[1].fields.VisibleName;
      if (pSVar9 != (System_String_o *)0x0) {
        pSVar9 = (System_String_o *)
                 (*(pSVar9->klass->vtable)._21_System_IConvertible_ToDouble.methodPtr)
                           (pSVar9,(pSVar9->klass->vtable)._21_System_IConvertible_ToDouble.method);
        pCVar3 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
        if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
          fStack_64 = Characters_AnimationHandler__GetLength(pCVar3,pSVar9,(MethodInfo *)0x0);
          *(undefined1 *)&__this_00[2].fields.m_CancellationTokenSource = 1;
          pCVar3 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
          if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
            (*(code *)__this_00->klass[1].vtable._18_unknown.method)
                      (__this_00,__this_00->klass[1].vtable._19_unknown.methodPtr);
            (*(code *)__this_00->klass[1].vtable._33_OnCreateRoomFailed.method)
                      (__this_00,__this_00->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
            Characters_BaseCharacter__CrossFade(__this_00,pSVar9,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(__this_00->fields).OutlineComponent = 0x10;
label_0430d28a:
            __this_00[2].monitor = pSVar9;
            il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pSVar9);
            *(float *)((long)&__this_00[1].fields.OnPlayerPropertiesChanged + 4) = fStack_64;
            vtableDispatch = __this_00->klass[1].vtable._38_OnDisconnected.method;
            (*(code *)vtableDispatch)
                      (0x3f800000,__this_00,__this_00->klass[1].vtable._39_OnRegionListReceived.methodPtr,
                       extraout_RDX,vtableDispatch);
            return;
          }
        }
      }
    }
  }
  pCVar10 = (Characters_BaseCharacter_o *)0x0;
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf80 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf80 = '\x01';
  }
  pSVar9 = pCVar10[1].fields.VisibleName;
  if (pSVar9 != (System_String_o *)0x0) {
    pSVar9 = (System_String_o *)
             (*(pSVar9->klass->vtable)._17_System_IConvertible_ToUInt32.methodPtr)
                       (pSVar9,(pSVar9->klass->vtable)._17_System_IConvertible_ToUInt32.method);
    bVar8 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
    if ((((char)bVar8 == '\0') || (*(int *)&(pCVar10->fields).OutlineComponent == 0x11)) ||
       (((char)(pCVar10->fields).CustomDamage == '\0' || (0.0 < (float)pCVar10[1].fields._stepPhase)))) {
      return;
    }
    if (fVar11 <= 0.0) {
      fVar11 = (float)(*pCVar10->klass[1]._1.image)(pCVar10,pCVar10->klass[1]._1.gc_desc);
    }
    pCVar10[1].fields.JustGrounded = (bool_conflict)fVar11;
    pSVar9 = pCVar10[1].fields.VisibleName;
    if (pSVar9 != (System_String_o *)0x0) {
      pSVar9 = (System_String_o *)
               (*(pSVar9->klass->vtable)._17_System_IConvertible_ToUInt32.methodPtr)
                         (pSVar9,(pSVar9->klass->vtable)._17_System_IConvertible_ToUInt32.method);
      pCVar3 = *(Characters_AnimationHandler_o **)&(pCVar10->fields)._cameraFPS;
      if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
        fVar11 = Characters_AnimationHandler__GetLength(pCVar3,pSVar9,(MethodInfo *)0x0);
        *(undefined1 *)&pCVar10[2].fields.m_CancellationTokenSource = 1;
        pCVar3 = *(Characters_AnimationHandler_o **)&(pCVar10->fields)._cameraFPS;
        if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
          (*(code *)pCVar10->klass[1].vtable._18_unknown.method)
                    (pCVar10,pCVar10->klass[1].vtable._19_unknown.methodPtr);
          (*(code *)pCVar10->klass[1].vtable._33_OnCreateRoomFailed.method)
                    (pCVar10,pCVar10->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
          Characters_BaseCharacter__CrossFade(pCVar10,pSVar9,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(pCVar10->fields).OutlineComponent = 0x13;
          pCVar10[2].monitor = pSVar9;
          il2cpp_runtime_helper_022b4080(&pCVar10[2].monitor,pSVar9);
          *(float *)((long)&pCVar10[1].fields.OnPlayerPropertiesChanged + 4) = fVar11;
          (*(code *)pCVar10->klass[1].vtable._38_OnDisconnected.method)
                    (0x3f800000,pCVar10,pCVar10->klass[1].vtable._39_OnRegionListReceived.methodPtr);
          fVar11 = (float)pCVar10[1].fields.JustGrounded;
          fVar12 = (float)(*pCVar10->klass[1]._1.fields)(pCVar10,pCVar10->klass[1]._1.events);
          pCVar10[1].fields._stepPhase = (int32_t)(fVar12 + fVar11);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.BaseTitan$$Turn
// il2cpp: void Characters_BaseTitan__Turn (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o targetDirection, const MethodInfo* method);
// 0x430ce50

void Characters_BaseTitan__Turn
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o targetDirection,MethodInfo *method)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  Characters_AnimationHandler_o *pCVar5;
  MethodInfo *vtableDispatch;
  char cVar6;
  bool_conflict bVar7;
  Characters_BaseCharacter_o *a;
  System_String_o *pSVar8;
  undefined8 extraout_RDX;
  Characters_BaseCharacter_o *pCVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Quaternion_o UVar12;
  UnityEngine_Vector3_o UVar13;
  float fStack_4c;
  
  if (g_data_057adf7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf7e = '\x01';
  }
  cVar6 = (*(__this->klass->vtable)._123_CanAction.methodPtr)(__this);
  if (cVar6 == '\0') {
    return;
  }
  fVar10 = Characters_BaseCharacter__GetAngleToTarget
                     ((Characters_BaseCharacter_o *)__this,targetDirection,(MethodInfo *)0x0);
  plVar2 = *(long **)&(__this->fields).TurnPause;
  pCVar9 = (Characters_BaseCharacter_o *)0x0;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if (fVar10 <= 0.0) {
      a = (Characters_BaseCharacter_o *)(**(code **)(lVar3 + 0x268))(plVar2,*(undefined8 *)(lVar3 + 0x270));
    }
    else {
      a = (Characters_BaseCharacter_o *)(**(code **)(lVar3 + 0x278))(plVar2,*(undefined8 *)(lVar3 + 0x280));
    }
    pCVar9 = a;
    bVar7 = System_String__op_Equality((System_String_o *)a,"",(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    lVar3 = *(long *)&(__this->fields).Dead;
    if (lVar3 != 0) {
      pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
      pCVar9 = (Characters_BaseCharacter_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UVar13 = UnityEngine_Transform__get_forward(pUVar4,(MethodInfo *)0x0);
        pCVar9 = (Characters_BaseCharacter_o *)0x0;
        UVar13 = UnityEngine_Vector3__RotateTowards
                           (UVar13,targetDirection,2.0943952,3.4028235e+38,(MethodInfo *)0x0);
        lVar3 = *(long *)&(__this->fields).Dead;
        if (lVar3 != 0) {
          pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
          pCVar9 = (Characters_BaseCharacter_o *)0x0;
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UVar12 = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
            (__this->fields).TurnSpeed = UVar12.fields.x;
            (__this->fields).LeftArmDisabled = (bool_conflict)UVar12.fields.y;
            (__this->fields).RightArmDisabled = (bool_conflict)UVar12.fields.z;
            (__this->fields).LastTargetDirection.fields.x = UVar12.fields.w;
            UVar12 = UnityEngine_Quaternion__LookRotation_4debb20(UVar13,(MethodInfo *)0x0);
            *(UnityEngine_Quaternion_Fields *)&(__this->fields).LastTargetDirection.fields.y = UVar12.fields;
            (__this->fields)._turnStartRotation.fields.w = 0.0;
            pCVar5 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
            pCVar9 = (Characters_BaseCharacter_o *)0x0;
            if (pCVar5 != (Characters_AnimationHandler_o *)0x0) {
              fVar10 = Characters_AnimationHandler__GetTotalTime
                                 (pCVar5,(System_String_o *)a,(MethodInfo *)0x0);
              (__this->fields)._turnStartRotation.fields.z = fVar10;
              *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
              pCVar5 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
              pCVar9 = (Characters_BaseCharacter_o *)0x0;
              if (pCVar5 != (Characters_AnimationHandler_o *)0x0) {
                Characters_AnimationHandler__SetCullingType(pCVar5,0,(MethodInfo *)0x0);
                (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                          (__this,(__this->klass->vtable)._148_Ungrab.method);
                (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                          (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
                Characters_BaseCharacter__CrossFade
                          ((Characters_BaseCharacter_o *)__this,(System_String_o *)a,0.1,0.0,(MethodInfo *)0x0
                          );
                *(undefined4 *)&(__this->fields).OutlineComponent = 0x18;
                *(Characters_BaseCharacter_o **)&(__this->fields)._climbCooldownLeft = a;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,a);
                (__this->fields)._currentCrippleTime = fVar10;
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf7f == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf7f = '\x01';
  }
  uVar1 = *(uint *)&(pCVar9->fields).OutlineComponent;
  if ((((uVar1 | 2) == 0x12) || ((char)(pCVar9->fields).CustomDamage == '\0')) ||
     (0.0 < (float)pCVar9[1].fields._stepPhase)) {
    return;
  }
  if ((uVar1 == 0x16) || (uVar1 == 0x11)) {
    pSVar8 = pCVar9[1].fields.VisibleName;
    if (pSVar8 != (System_String_o *)0x0) {
      pSVar8 = (System_String_o *)
               (*(pSVar8->klass->vtable)._18_System_IConvertible_ToInt64.methodPtr)
                         (pSVar8,(pSVar8->klass->vtable)._18_System_IConvertible_ToInt64.method);
      bVar7 = System_String__op_Inequality(pSVar8,"",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      pSVar8 = pCVar9[1].fields.VisibleName;
      if (pSVar8 != (System_String_o *)0x0) {
        pSVar8 = (System_String_o *)
                 (*(pSVar8->klass->vtable)._18_System_IConvertible_ToInt64.methodPtr)
                           (pSVar8,(pSVar8->klass->vtable)._18_System_IConvertible_ToInt64.method);
        pCVar5 = *(Characters_AnimationHandler_o **)&(pCVar9->fields)._cameraFPS;
        if (pCVar5 != (Characters_AnimationHandler_o *)0x0) {
          fStack_4c = Characters_AnimationHandler__GetLength(pCVar5,pSVar8,(MethodInfo *)0x0);
          *(undefined1 *)&pCVar9[2].fields.m_CancellationTokenSource = 1;
          pCVar5 = *(Characters_AnimationHandler_o **)&(pCVar9->fields)._cameraFPS;
          if (pCVar5 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar5,0,(MethodInfo *)0x0);
            (*(code *)pCVar9->klass[1].vtable._18_unknown.method)
                      (pCVar9,pCVar9->klass[1].vtable._19_unknown.methodPtr);
            (*(code *)pCVar9->klass[1].vtable._33_OnCreateRoomFailed.method)
                      (pCVar9,pCVar9->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
            Characters_BaseCharacter__CrossFade(pCVar9,pSVar8,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(pCVar9->fields).OutlineComponent = 0x12;
            goto label_0430d28a;
          }
        }
      }
    }
  }
  else {
    pSVar8 = pCVar9[1].fields.VisibleName;
    if (pSVar8 != (System_String_o *)0x0) {
      pSVar8 = (System_String_o *)
               (*(pSVar8->klass->vtable)._21_System_IConvertible_ToDouble.methodPtr)
                         (pSVar8,(pSVar8->klass->vtable)._21_System_IConvertible_ToDouble.method);
      bVar7 = System_String__op_Inequality(pSVar8,"",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      pSVar8 = pCVar9[1].fields.VisibleName;
      if (pSVar8 != (System_String_o *)0x0) {
        pSVar8 = (System_String_o *)
                 (*(pSVar8->klass->vtable)._21_System_IConvertible_ToDouble.methodPtr)
                           (pSVar8,(pSVar8->klass->vtable)._21_System_IConvertible_ToDouble.method);
        pCVar5 = *(Characters_AnimationHandler_o **)&(pCVar9->fields)._cameraFPS;
        if (pCVar5 != (Characters_AnimationHandler_o *)0x0) {
          fStack_4c = Characters_AnimationHandler__GetLength(pCVar5,pSVar8,(MethodInfo *)0x0);
          *(undefined1 *)&pCVar9[2].fields.m_CancellationTokenSource = 1;
          pCVar5 = *(Characters_AnimationHandler_o **)&(pCVar9->fields)._cameraFPS;
          if (pCVar5 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar5,0,(MethodInfo *)0x0);
            (*(code *)pCVar9->klass[1].vtable._18_unknown.method)
                      (pCVar9,pCVar9->klass[1].vtable._19_unknown.methodPtr);
            (*(code *)pCVar9->klass[1].vtable._33_OnCreateRoomFailed.method)
                      (pCVar9,pCVar9->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
            Characters_BaseCharacter__CrossFade(pCVar9,pSVar8,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(pCVar9->fields).OutlineComponent = 0x10;
label_0430d28a:
            pCVar9[2].monitor = pSVar8;
            il2cpp_runtime_helper_022b4080(&pCVar9[2].monitor,pSVar8);
            *(float *)((long)&pCVar9[1].fields.OnPlayerPropertiesChanged + 4) = fStack_4c;
            vtableDispatch = pCVar9->klass[1].vtable._38_OnDisconnected.method;
            (*(code *)vtableDispatch)
                      (0x3f800000,pCVar9,pCVar9->klass[1].vtable._39_OnRegionListReceived.methodPtr,
                       extraout_RDX,vtableDispatch);
            return;
          }
        }
      }
    }
  }
  pCVar9 = (Characters_BaseCharacter_o *)0x0;
  fVar10 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf80 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf80 = '\x01';
  }
  pSVar8 = pCVar9[1].fields.VisibleName;
  if (pSVar8 != (System_String_o *)0x0) {
    pSVar8 = (System_String_o *)
             (*(pSVar8->klass->vtable)._17_System_IConvertible_ToUInt32.methodPtr)
                       (pSVar8,(pSVar8->klass->vtable)._17_System_IConvertible_ToUInt32.method);
    bVar7 = System_String__op_Inequality(pSVar8,"",(MethodInfo *)0x0);
    if ((((char)bVar7 == '\0') || (*(int *)&(pCVar9->fields).OutlineComponent == 0x11)) ||
       (((char)(pCVar9->fields).CustomDamage == '\0' || (0.0 < (float)pCVar9[1].fields._stepPhase)))) {
      return;
    }
    if (fVar10 <= 0.0) {
      fVar10 = (float)(*pCVar9->klass[1]._1.image)(pCVar9,pCVar9->klass[1]._1.gc_desc);
    }
    pCVar9[1].fields.JustGrounded = (bool_conflict)fVar10;
    pSVar8 = pCVar9[1].fields.VisibleName;
    if (pSVar8 != (System_String_o *)0x0) {
      pSVar8 = (System_String_o *)
               (*(pSVar8->klass->vtable)._17_System_IConvertible_ToUInt32.methodPtr)
                         (pSVar8,(pSVar8->klass->vtable)._17_System_IConvertible_ToUInt32.method);
      pCVar5 = *(Characters_AnimationHandler_o **)&(pCVar9->fields)._cameraFPS;
      if (pCVar5 != (Characters_AnimationHandler_o *)0x0) {
        fVar10 = Characters_AnimationHandler__GetLength(pCVar5,pSVar8,(MethodInfo *)0x0);
        *(undefined1 *)&pCVar9[2].fields.m_CancellationTokenSource = 1;
        pCVar5 = *(Characters_AnimationHandler_o **)&(pCVar9->fields)._cameraFPS;
        if (pCVar5 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar5,0,(MethodInfo *)0x0);
          (*(code *)pCVar9->klass[1].vtable._18_unknown.method)
                    (pCVar9,pCVar9->klass[1].vtable._19_unknown.methodPtr);
          (*(code *)pCVar9->klass[1].vtable._33_OnCreateRoomFailed.method)
                    (pCVar9,pCVar9->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
          Characters_BaseCharacter__CrossFade(pCVar9,pSVar8,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(pCVar9->fields).OutlineComponent = 0x13;
          pCVar9[2].monitor = pSVar8;
          il2cpp_runtime_helper_022b4080(&pCVar9[2].monitor,pSVar8);
          *(float *)((long)&pCVar9[1].fields.OnPlayerPropertiesChanged + 4) = fVar10;
          (*(code *)pCVar9->klass[1].vtable._38_OnDisconnected.method)
                    (0x3f800000,pCVar9,pCVar9->klass[1].vtable._39_OnRegionListReceived.methodPtr);
          fVar10 = (float)pCVar9[1].fields.JustGrounded;
          fVar11 = (float)(*pCVar9->klass[1]._1.fields)(pCVar9,pCVar9->klass[1]._1.events);
          pCVar9[1].fields._stepPhase = (int32_t)(fVar11 + fVar10);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.BaseTitan$$Blind
// il2cpp: void Characters_BaseTitan__Blind (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430d060

void Characters_BaseTitan__Blind(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  long *plVar2;
  Characters_AnimationHandler_o *pCVar3;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  undefined8 extraout_RDX;
  Characters_BaseCharacter_o *__this_00;
  float fVar6;
  float fVar7;
  
  if (g_data_057adf7f == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf7f = '\x01';
  }
  uVar1 = *(uint *)&(__this->fields).OutlineComponent;
  if ((((uVar1 | 2) == 0x12) || ((char)(__this->fields).CustomDamage == '\0')) ||
     (0.0 < (__this->fields)._jumpDirection.fields.x)) {
    return;
  }
  if ((uVar1 == 0x16) || (uVar1 == 0x11)) {
    plVar2 = *(long **)&(__this->fields).TurnPause;
    if (plVar2 != (long *)0x0) {
      pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
      bVar4 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      plVar2 = *(long **)&(__this->fields).TurnPause;
      if (plVar2 != (long *)0x0) {
        pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
        pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
          fVar6 = Characters_AnimationHandler__GetLength(pCVar3,pSVar5,(MethodInfo *)0x0);
          *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
          pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                      (__this,(__this->klass->vtable)._148_Ungrab.method);
            (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                      (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this,pSVar5,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(__this->fields).OutlineComponent = 0x12;
            goto label_0430d28a;
          }
        }
      }
    }
  }
  else {
    plVar2 = *(long **)&(__this->fields).TurnPause;
    if (plVar2 != (long *)0x0) {
      pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 0x288))(plVar2,*(undefined8 *)(*plVar2 + 0x290));
      bVar4 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      plVar2 = *(long **)&(__this->fields).TurnPause;
      if (plVar2 != (long *)0x0) {
        pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 0x288))(plVar2,*(undefined8 *)(*plVar2 + 0x290));
        pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
          fVar6 = Characters_AnimationHandler__GetLength(pCVar3,pSVar5,(MethodInfo *)0x0);
          *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
          pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                      (__this,(__this->klass->vtable)._148_Ungrab.method);
            (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                      (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this,pSVar5,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(__this->fields).OutlineComponent = 0x10;
label_0430d28a:
            *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar5;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar5);
            (__this->fields)._currentCrippleTime = fVar6;
            vtableDispatch = (__this->klass->vtable)._168_DamagedGrunt.methodPtr;
            (*vtableDispatch)
                      (0x3f800000,__this,(__this->klass->vtable)._168_DamagedGrunt.method,extraout_RDX,
                       vtableDispatch);
            return;
          }
        }
      }
    }
  }
  __this_00 = (Characters_BaseCharacter_o *)0x0;
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf80 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf80 = '\x01';
  }
  pSVar5 = __this_00[1].fields.VisibleName;
  if (pSVar5 != (System_String_o *)0x0) {
    pSVar5 = (System_String_o *)
             (*(pSVar5->klass->vtable)._17_System_IConvertible_ToUInt32.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._17_System_IConvertible_ToUInt32.method);
    bVar4 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
    if ((((char)bVar4 == '\0') || (*(int *)&(__this_00->fields).OutlineComponent == 0x11)) ||
       (((char)(__this_00->fields).CustomDamage == '\0' || (0.0 < (float)__this_00[1].fields._stepPhase)))) {
      return;
    }
    if (fVar6 <= 0.0) {
      fVar6 = (float)(*__this_00->klass[1]._1.image)(__this_00,__this_00->klass[1]._1.gc_desc);
    }
    __this_00[1].fields.JustGrounded = (bool_conflict)fVar6;
    pSVar5 = __this_00[1].fields.VisibleName;
    if (pSVar5 != (System_String_o *)0x0) {
      pSVar5 = (System_String_o *)
               (*(pSVar5->klass->vtable)._17_System_IConvertible_ToUInt32.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._17_System_IConvertible_ToUInt32.method);
      pCVar3 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
      if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
        fVar6 = Characters_AnimationHandler__GetLength(pCVar3,pSVar5,(MethodInfo *)0x0);
        *(undefined1 *)&__this_00[2].fields.m_CancellationTokenSource = 1;
        pCVar3 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
        if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar3,0,(MethodInfo *)0x0);
          (*(code *)__this_00->klass[1].vtable._18_unknown.method)
                    (__this_00,__this_00->klass[1].vtable._19_unknown.methodPtr);
          (*(code *)__this_00->klass[1].vtable._33_OnCreateRoomFailed.method)
                    (__this_00,__this_00->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
          Characters_BaseCharacter__CrossFade(__this_00,pSVar5,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(__this_00->fields).OutlineComponent = 0x13;
          __this_00[2].monitor = pSVar5;
          il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pSVar5);
          *(float *)((long)&__this_00[1].fields.OnPlayerPropertiesChanged + 4) = fVar6;
          (*(code *)__this_00->klass[1].vtable._38_OnDisconnected.method)
                    (0x3f800000,__this_00,__this_00->klass[1].vtable._39_OnRegionListReceived.methodPtr);
          fVar6 = (float)__this_00[1].fields.JustGrounded;
          fVar7 = (float)(*__this_00->klass[1]._1.fields)(__this_00,__this_00->klass[1]._1.events);
          __this_00[1].fields._stepPhase = (int32_t)(fVar7 + fVar6);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.BaseTitan$$Cripple
// il2cpp: void Characters_BaseTitan__Cripple (Characters_BaseTitan_o* __this, float time, const MethodInfo* method);
// 0x430d2e0

void Characters_BaseTitan__Cripple(Characters_BaseTitan_o *__this,float time,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  float fVar5;
  float fVar6;
  
  if (g_data_057adf80 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf80 = '\x01';
  }
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    pSVar4 = (System_String_o *)(**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
    bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
    if (((((char)bVar3 == '\0') || (*(int *)&(__this->fields).OutlineComponent == 0x11)) ||
        ((char)(__this->fields).CustomDamage == '\0')) || (0.0 < (__this->fields)._jumpDirection.fields.x)) {
      return;
    }
    if (time <= 0.0) {
      time = (float)(*(__this->klass->vtable)._110_get_DefaultCrippleTime.methodPtr)
                              (__this,(__this->klass->vtable)._110_get_DefaultCrippleTime.method);
    }
    (__this->fields)._turnTargetRotation.fields.y = time;
    plVar1 = *(long **)&(__this->fields).TurnPause;
    if (plVar1 != (long *)0x0) {
      pSVar4 = (System_String_o *)(**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar5 = Characters_AnimationHandler__GetLength(pCVar2,pSVar4,(MethodInfo *)0x0);
        *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
        pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
          (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar4,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(__this->fields).OutlineComponent = 0x13;
          *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar4;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar4);
          (__this->fields)._currentCrippleTime = fVar5;
          (*(__this->klass->vtable)._168_DamagedGrunt.methodPtr)
                    (0x3f800000,__this,(__this->klass->vtable)._168_DamagedGrunt.method);
          fVar5 = (__this->fields)._turnTargetRotation.fields.y;
          fVar6 = (float)(*(__this->klass->vtable)._118_get_DisableCooldown.methodPtr)
                                   (__this,(__this->klass->vtable)._118_get_DisableCooldown.method);
          (__this->fields)._jumpDirection.fields.x = fVar6 + fVar5;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.BaseTitan$$Emote
// il2cpp: void Characters_BaseTitan__Emote (Characters_BaseTitan_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x430d4c0

void Characters_BaseTitan__Emote(Characters_BaseTitan_o *__this,System_String_o *emote,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$ForceAnimation
// il2cpp: void Characters_BaseTitan__ForceAnimation (Characters_BaseTitan_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x430d4d0

void Characters_BaseTitan__ForceAnimation
               (Characters_BaseTitan_o *__this,System_String_o *animation,float fade,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  System_Action_Hashtable__o *pSVar2;
  long lVar3;
  void *pvVar4;
  bool_conflict bVar5;
  Characters_BaseCharacter_o *pCVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  Characters_BaseCharacter_o *pCVar8;
  Il2CppObject *pIVar9;
  System_Object_array *parameters;
  byte extraout_DL;
  Photon_Realtime_Player_o *pPVar10;
  Characters_BaseTitan_o *pCVar11;
  ulong uVar12;
  Characters_BaseCharacter_o *pCVar13;
  Characters_BaseTitan_o *pCVar14;
  Characters_BaseCharacter_o *pCVar15;
  UnityEngine_Object_o *x;
  Photon_Realtime_Player_o *unaff_R14;
  void **ppvVar16;
  float fVar17;
  
  pCVar1 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    fVar17 = Characters_AnimationHandler__GetLength(pCVar1,animation,(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar1 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    unaff_R14 = (Photon_Realtime_Player_o *)animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar1,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,fade,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 8;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,animation);
      (__this->fields)._currentCrippleTime = fVar17;
      return;
    }
  }
  pCVar14 = (Characters_BaseTitan_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDie_d__122);
    g_data_057adf81 = '\x01';
  }
  pCVar6 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDie_d__122);
  uVar12 = 0;
  pCVar15 = pCVar6;
  Characters_BaseTitan__WaitAndDie_d__122___ctor
            ((Characters_BaseTitan__WaitAndDie_d__122_o *)pCVar6,0,(MethodInfo *)0x0);
  if (pCVar6 != (Characters_BaseCharacter_o *)0x0) {
    (pCVar6->fields).pvCache = (Photon_Pun_PhotonView_o *)pCVar14;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields).pvCache,pCVar14);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    g_data_057adf82 = '\x01';
  }
  pPVar10 = (Photon_Realtime_Player_o *)0x0;
  pCVar6 = (Characters_BaseCharacter_o *)(uVar12 & 0xffffffff);
  pCVar13 = (Characters_BaseCharacter_o *)0x0;
  pPVar7 = Photon_Pun_PhotonView__Find((int32_t)uVar12,(MethodInfo *)0x0);
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    pPVar10 = (pPVar7->fields)._Owner_k__BackingField;
  }
  if (pPVar10 != unaff_R14) {
    return;
  }
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    pCVar8 = (Characters_BaseCharacter_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar7,MethodInfo_Human_GetComponent_Human);
    pCVar13 = (Characters_BaseCharacter_o *)0x0;
    pCVar6 = pCVar15;
    bVar5 = Characters_BaseCharacter__IsMine(pCVar15,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pCVar6 = (Characters_BaseCharacter_o *)&pCVar15[1].monitor;
      pCVar15[1].monitor = pCVar8;
      pCVar13 = pCVar8;
      il2cpp_runtime_helper_022b4080();
    }
    if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
      pCVar6 = (Characters_BaseCharacter_o *)&pCVar8[1].fields.FeedKillerName;
      pCVar8[1].fields.FeedKillerName = (System_String_o *)pCVar15;
      pCVar13 = pCVar15;
      il2cpp_runtime_helper_022b4080();
      pSVar2 = (pCVar15->fields).OnPlayerPropertiesChanged;
      if (pSVar2 != (System_Action_Hashtable__o *)0x0) {
        pCVar8[1].fields.FeedVictimName = (System_String_o *)(&(pSVar2->fields).method_info)[extraout_DL ^ 1];
        il2cpp_runtime_helper_022b4080(&pCVar8[1].fields.FeedVictimName);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    g_data_057adf83 = '\x01';
  }
  pCVar11 = (Characters_BaseTitan_o *)0x0;
  pCVar15 = (Characters_BaseCharacter_o *)((ulong)pCVar13 & 0xffffffff);
  pPVar7 = Photon_Pun_PhotonView__Find((int32_t)pCVar13,(MethodInfo *)0x0);
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    pCVar11 = (Characters_BaseTitan_o *)(pPVar7->fields)._Owner_k__BackingField;
  }
  if (pCVar11 != pCVar14) {
    return;
  }
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar7,MethodInfo_Human_GetComponent_Human);
    pCVar15 = pCVar6;
    bVar5 = Characters_BaseCharacter__IsMine(pCVar6,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pCVar6[1].monitor = (void *)0x0;
      pCVar15 = (Characters_BaseCharacter_o *)&pCVar6[1].monitor;
      il2cpp_runtime_helper_022b4080();
    }
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar9[0x16].monitor = (void *)0x0;
      il2cpp_runtime_helper_022b4080(&pIVar9[0x16].monitor,0);
      pIVar9[0x17].klass = (Il2CppClass *)0x0;
      il2cpp_runtime_helper_022b4080(pIVar9 + 0x17,0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"UngrabRPC");
    g_data_057adf84 = '\x01';
  }
  x = pCVar15[1].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ppvVar16 = &pCVar15[1].monitor;
    if ((*ppvVar16 != (void *)0x0) && (lVar3 = *(long *)((long)*ppvVar16 + 0x70), lVar3 != 0)) {
      pPVar7 = *(Photon_Pun_PhotonView_o **)(lVar3 + 0x20);
      x = TypeInfo_object;
      parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,0);
      if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar7,"UngrabRPC",0,parameters,(MethodInfo *)0x0);
        pvVar4 = *ppvVar16;
        x = (UnityEngine_Object_o *)0x0;
        if (pvVar4 != (void *)0x0) {
          *(undefined8 *)((long)pvVar4 + 0x170) = 0;
          il2cpp_runtime_helper_022b4080((long)pvVar4 + 0x170,0);
          *ppvVar16 = (void *)0x0;
          il2cpp_runtime_helper_022b4080(ppvVar16,0);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (*(float *)&x[0xe].fields.m_CachedPtr <= 0.0) {
      fVar17 = *(float *)((long)&x[0xe].monitor + 4);
      *(float *)((long)&x[0xe].fields.m_CachedPtr + 4) = fVar17;
      *(float *)((long)&x[0xe].monitor + 4) = fVar17 * 0.67;
    }
    *(undefined4 *)&x[0xe].fields.m_CachedPtr = 0x41200000;
    return;
  }
  return;
}


// Characters.BaseTitan$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseTitan__WaitAndDie (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430d590

System_Collections_IEnumerator_o *
Characters_BaseTitan__WaitAndDie(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  System_Action_Hashtable__o *pSVar2;
  long lVar3;
  void *pvVar4;
  bool_conflict bVar5;
  Characters_BaseCharacter_o *pCVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  Characters_BaseCharacter_o *pCVar8;
  System_Collections_IEnumerator_o *pSVar9;
  Il2CppObject *pIVar10;
  undefined4 extraout_var;
  System_Object_array *parameters;
  byte extraout_DL;
  Photon_Realtime_Player_o *pPVar11;
  Characters_BaseTitan_o *pCVar12;
  ulong uVar13;
  Characters_BaseCharacter_o *pCVar14;
  Characters_BaseCharacter_o *pCVar15;
  UnityEngine_Object_o *x;
  Photon_Realtime_Player_o *unaff_R14;
  void **ppvVar16;
  
  if (g_data_057adf81 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDie_d__122);
    g_data_057adf81 = '\x01';
  }
  pCVar6 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDie_d__122);
  uVar13 = 0;
  pCVar15 = pCVar6;
  Characters_BaseTitan__WaitAndDie_d__122___ctor
            ((Characters_BaseTitan__WaitAndDie_d__122_o *)pCVar6,0,(MethodInfo *)0x0);
  if (pCVar6 != (Characters_BaseCharacter_o *)0x0) {
    (pCVar6->fields).pvCache = (Photon_Pun_PhotonView_o *)__this;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields).pvCache,__this);
    return (System_Collections_IEnumerator_o *)pCVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    g_data_057adf82 = '\x01';
  }
  pPVar11 = (Photon_Realtime_Player_o *)0x0;
  pCVar6 = (Characters_BaseCharacter_o *)(uVar13 & 0xffffffff);
  pCVar14 = (Characters_BaseCharacter_o *)0x0;
  pPVar7 = Photon_Pun_PhotonView__Find((int32_t)uVar13,(MethodInfo *)0x0);
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    pPVar11 = (pPVar7->fields)._Owner_k__BackingField;
  }
  if (pPVar11 != unaff_R14) {
    return (System_Collections_IEnumerator_o *)pPVar7;
  }
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    pCVar8 = (Characters_BaseCharacter_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar7,MethodInfo_Human_GetComponent_Human);
    pCVar14 = (Characters_BaseCharacter_o *)0x0;
    pCVar6 = pCVar15;
    bVar5 = Characters_BaseCharacter__IsMine(pCVar15,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pCVar6 = (Characters_BaseCharacter_o *)&pCVar15[1].monitor;
      pCVar15[1].monitor = pCVar8;
      pCVar14 = pCVar8;
      il2cpp_runtime_helper_022b4080();
    }
    if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
      pCVar6 = (Characters_BaseCharacter_o *)&pCVar8[1].fields.FeedKillerName;
      pCVar8[1].fields.FeedKillerName = (System_String_o *)pCVar15;
      pCVar14 = pCVar15;
      il2cpp_runtime_helper_022b4080();
      pSVar2 = (pCVar15->fields).OnPlayerPropertiesChanged;
      if (pSVar2 != (System_Action_Hashtable__o *)0x0) {
        pCVar8[1].fields.FeedVictimName = (System_String_o *)(&(pSVar2->fields).method_info)[extraout_DL ^ 1];
        pSVar9 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b4080(&pCVar8[1].fields.FeedVictimName);
        return pSVar9;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    g_data_057adf83 = '\x01';
  }
  pCVar12 = (Characters_BaseTitan_o *)0x0;
  pCVar15 = (Characters_BaseCharacter_o *)((ulong)pCVar14 & 0xffffffff);
  pPVar7 = Photon_Pun_PhotonView__Find((int32_t)pCVar14,(MethodInfo *)0x0);
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    pCVar12 = (Characters_BaseTitan_o *)(pPVar7->fields)._Owner_k__BackingField;
  }
  if (pCVar12 != __this) {
    return (System_Collections_IEnumerator_o *)pPVar7;
  }
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    pIVar10 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar7,MethodInfo_Human_GetComponent_Human);
    pCVar15 = pCVar6;
    bVar5 = Characters_BaseCharacter__IsMine(pCVar6,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pCVar6[1].monitor = (void *)0x0;
      pCVar15 = (Characters_BaseCharacter_o *)&pCVar6[1].monitor;
      il2cpp_runtime_helper_022b4080();
    }
    if (pIVar10 != (Il2CppObject *)0x0) {
      pIVar10[0x16].monitor = (void *)0x0;
      il2cpp_runtime_helper_022b4080(&pIVar10[0x16].monitor,0);
      pIVar10[0x17].klass = (Il2CppClass *)0x0;
      pSVar9 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b4080(pIVar10 + 0x17,0);
      return pSVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"UngrabRPC");
    g_data_057adf84 = '\x01';
  }
  x = pCVar15[1].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ppvVar16 = &pCVar15[1].monitor;
    if ((*ppvVar16 != (void *)0x0) && (lVar3 = *(long *)((long)*ppvVar16 + 0x70), lVar3 != 0)) {
      pPVar7 = *(Photon_Pun_PhotonView_o **)(lVar3 + 0x20);
      x = TypeInfo_object;
      parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,0);
      if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar7,"UngrabRPC",0,parameters,(MethodInfo *)0x0);
        pvVar4 = *ppvVar16;
        x = (UnityEngine_Object_o *)0x0;
        if (pvVar4 != (void *)0x0) {
          *(undefined8 *)((long)pvVar4 + 0x170) = 0;
          il2cpp_runtime_helper_022b4080((long)pvVar4 + 0x170,0);
          *ppvVar16 = (void *)0x0;
          pSVar9 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b4080(ppvVar16,0);
          return pSVar9;
        }
      }
    }
    pSVar9 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b2c90();
    if (*(float *)&x[0xe].fields.m_CachedPtr <= 0.0) {
      fVar1 = *(float *)((long)&x[0xe].monitor + 4);
      pSVar9 = (System_Collections_IEnumerator_o *)(ulong)(uint)fVar1;
      *(float *)((long)&x[0xe].fields.m_CachedPtr + 4) = fVar1;
      *(float *)((long)&x[0xe].monitor + 4) = fVar1 * 0.67;
    }
    *(undefined4 *)&x[0xe].fields.m_CachedPtr = 0x41200000;
    return pSVar9;
  }
  return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar5);
}


// Characters.BaseTitan$$GetSpawnEffectSize
// il2cpp: float Characters_BaseTitan__GetSpawnEffectSize (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4303790

float Characters_BaseTitan__GetSpawnEffectSize(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
  fVar2 = (float)(*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                           (__this,(__this->klass->vtable)._117_get_SizeMultiplier.method);
  return fVar2 * fVar1;
}


// Characters.BaseTitan$$GrabRPC
// il2cpp: void Characters_BaseTitan__GrabRPC (Characters_BaseTitan_o* __this, int32_t viewId, bool left, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x430d600

void Characters_BaseTitan__GrabRPC
               (Characters_BaseTitan_o *__this,int32_t viewId,bool_conflict left,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  float fVar1;
  System_Action_Hashtable__o *pSVar2;
  UnityEngine_Collider_o *pUVar3;
  Characters_BaseTitanComponentCache_o *pCVar4;
  bool_conflict bVar5;
  Photon_Pun_PhotonView_o *pPVar6;
  Characters_BaseTitan_o *pCVar7;
  Il2CppObject *pIVar8;
  System_Object_array *parameters;
  Photon_Realtime_Player_o *pPVar9;
  Characters_BaseTitan_o *pCVar10;
  Characters_BaseTitan_o *__this_00;
  Characters_BaseTitanComponentCache_o *x;
  Photon_Realtime_Player_o *unaff_R14;
  Characters_BaseTitanComponentCache_o **ppCVar11;
  
  __this_00 = (Characters_BaseTitan_o *)(ulong)(uint)viewId;
  if (g_data_057adf82 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    g_data_057adf82 = '\x01';
  }
  pPVar9 = (Photon_Realtime_Player_o *)0x0;
  pCVar10 = (Characters_BaseTitan_o *)0x0;
  pPVar6 = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
  if (pPVar6 != (Photon_Pun_PhotonView_o *)0x0) {
    pPVar9 = (pPVar6->fields)._Owner_k__BackingField;
  }
  if (pPVar9 != info.fields.Sender) {
    return;
  }
  if (pPVar6 != (Photon_Pun_PhotonView_o *)0x0) {
    pCVar7 = (Characters_BaseTitan_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar6,MethodInfo_Human_GetComponent_Human);
    pCVar10 = (Characters_BaseTitan_o *)0x0;
    __this_00 = __this;
    bVar5 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      __this_00 = (Characters_BaseTitan_o *)&(__this->fields).BaseTitanCache;
      (__this->fields).BaseTitanCache = (Characters_BaseTitanComponentCache_o *)pCVar7;
      pCVar10 = pCVar7;
      il2cpp_runtime_helper_022b4080();
    }
    if (pCVar7 != (Characters_BaseTitan_o *)0x0) {
      __this_00 = (Characters_BaseTitan_o *)&(pCVar7->fields).TargetEnemy;
      (pCVar7->fields).TargetEnemy = (Characters_ITargetable_o *)__this;
      pCVar10 = __this;
      il2cpp_runtime_helper_022b4080();
      pSVar2 = (__this->fields).OnPlayerPropertiesChanged;
      if (pSVar2 != (System_Action_Hashtable__o *)0x0) {
        (pCVar7->fields).BaseTitanAnimations =
             (Characters_BaseTitanAnimations_o *)(&(pSVar2->fields).method_info)[(byte)((byte)left ^ 1)];
        il2cpp_runtime_helper_022b4080(&(pCVar7->fields).BaseTitanAnimations);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    g_data_057adf83 = '\x01';
  }
  pPVar9 = (Photon_Realtime_Player_o *)0x0;
  pCVar7 = (Characters_BaseTitan_o *)((ulong)pCVar10 & 0xffffffff);
  pPVar6 = Photon_Pun_PhotonView__Find((int32_t)pCVar10,(MethodInfo *)0x0);
  if (pPVar6 != (Photon_Pun_PhotonView_o *)0x0) {
    pPVar9 = (pPVar6->fields)._Owner_k__BackingField;
  }
  if (pPVar9 != unaff_R14) {
    return;
  }
  if (pPVar6 != (Photon_Pun_PhotonView_o *)0x0) {
    pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar6,MethodInfo_Human_GetComponent_Human);
    pCVar7 = __this_00;
    bVar5 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_00,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      (__this_00->fields).BaseTitanCache = (Characters_BaseTitanComponentCache_o *)0x0;
      pCVar7 = (Characters_BaseTitan_o *)&(__this_00->fields).BaseTitanCache;
      il2cpp_runtime_helper_022b4080();
    }
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar8[0x16].monitor = (void *)0x0;
      il2cpp_runtime_helper_022b4080(&pIVar8[0x16].monitor,0);
      pIVar8[0x17].klass = (Il2CppClass *)0x0;
      il2cpp_runtime_helper_022b4080(pIVar8 + 0x17,0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"UngrabRPC");
    g_data_057adf84 = '\x01';
  }
  x = (pCVar7->fields).BaseTitanCache;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    ppCVar11 = &(pCVar7->fields).BaseTitanCache;
    if ((*ppCVar11 != (Characters_BaseTitanComponentCache_o *)0x0) &&
       (pUVar3 = ((*ppCVar11)->fields).Movebox, pUVar3 != (UnityEngine_Collider_o *)0x0)) {
      pPVar6 = pUVar3[1].monitor;
      x = TypeInfo_object;
      parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,0);
      if (pPVar6 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar6,"UngrabRPC",0,parameters,(MethodInfo *)0x0);
        pCVar4 = *ppCVar11;
        x = (Characters_BaseTitanComponentCache_o *)0x0;
        if (pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) {
          pCVar4[1].fields.Movebox = (UnityEngine_Collider_o *)0x0;
          il2cpp_runtime_helper_022b4080(&pCVar4[1].fields.Movebox,0);
          *ppCVar11 = (Characters_BaseTitanComponentCache_o *)0x0;
          il2cpp_runtime_helper_022b4080(ppCVar11,0);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (*(float *)&x[1].fields.GrabRSocket <= 0.0) {
      fVar1 = *(float *)((long)&x[1].fields.GrabLSocket + 4);
      *(float *)((long)&x[1].fields.GrabRSocket + 4) = fVar1;
      *(float *)((long)&x[1].fields.GrabLSocket + 4) = fVar1 * 0.67;
    }
    *(undefined4 *)&x[1].fields.GrabRSocket = 0x41200000;
    return;
  }
  return;
}


// Characters.BaseTitan$$UngrabRPC
// il2cpp: void Characters_BaseTitan__UngrabRPC (Characters_BaseTitan_o* __this, int32_t viewId, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x430d700

void Characters_BaseTitan__UngrabRPC
               (Characters_BaseTitan_o *__this,int32_t viewId,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_Collider_o *pUVar2;
  Characters_BaseTitanComponentCache_o *pCVar3;
  bool_conflict bVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  Il2CppObject *pIVar6;
  System_Object_array *parameters;
  Photon_Realtime_Player_o *pPVar7;
  Characters_BaseTitan_o *pCVar8;
  Characters_BaseTitanComponentCache_o *x;
  Characters_BaseTitanComponentCache_o **ppCVar9;
  
  pCVar8 = (Characters_BaseTitan_o *)(ulong)(uint)viewId;
  if (g_data_057adf83 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    g_data_057adf83 = '\x01';
  }
  pPVar7 = (Photon_Realtime_Player_o *)0x0;
  pPVar5 = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
  if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
    pPVar7 = (pPVar5->fields)._Owner_k__BackingField;
  }
  if (pPVar7 != info.fields.Sender) {
    return;
  }
  if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
    pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pPVar5,MethodInfo_Human_GetComponent_Human);
    pCVar8 = __this;
    bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      (__this->fields).BaseTitanCache = (Characters_BaseTitanComponentCache_o *)0x0;
      pCVar8 = (Characters_BaseTitan_o *)&(__this->fields).BaseTitanCache;
      il2cpp_runtime_helper_022b4080();
    }
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar6[0x16].monitor = (void *)0x0;
      il2cpp_runtime_helper_022b4080(&pIVar6[0x16].monitor,0);
      pIVar6[0x17].klass = (Il2CppClass *)0x0;
      il2cpp_runtime_helper_022b4080(pIVar6 + 0x17,0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"UngrabRPC");
    g_data_057adf84 = '\x01';
  }
  x = (pCVar8->fields).BaseTitanCache;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    ppCVar9 = &(pCVar8->fields).BaseTitanCache;
    if ((*ppCVar9 != (Characters_BaseTitanComponentCache_o *)0x0) &&
       (pUVar2 = ((*ppCVar9)->fields).Movebox, pUVar2 != (UnityEngine_Collider_o *)0x0)) {
      pPVar5 = pUVar2[1].monitor;
      x = TypeInfo_object;
      parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,0);
      if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar5,"UngrabRPC",0,parameters,(MethodInfo *)0x0);
        pCVar3 = *ppCVar9;
        x = (Characters_BaseTitanComponentCache_o *)0x0;
        if (pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0) {
          pCVar3[1].fields.Movebox = (UnityEngine_Collider_o *)0x0;
          il2cpp_runtime_helper_022b4080(&pCVar3[1].fields.Movebox,0);
          *ppCVar9 = (Characters_BaseTitanComponentCache_o *)0x0;
          il2cpp_runtime_helper_022b4080(ppCVar9,0);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (*(float *)&x[1].fields.GrabRSocket <= 0.0) {
      fVar1 = *(float *)((long)&x[1].fields.GrabLSocket + 4);
      *(float *)((long)&x[1].fields.GrabRSocket + 4) = fVar1;
      *(float *)((long)&x[1].fields.GrabLSocket + 4) = fVar1 * 0.67;
    }
    *(undefined4 *)&x[1].fields.GrabRSocket = 0x41200000;
    return;
  }
  return;
}


// Characters.BaseTitan$$Ungrab
// il2cpp: void Characters_BaseTitan__Ungrab (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430d7f0

void Characters_BaseTitan__Ungrab(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Collider_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  Characters_BaseTitanComponentCache_o *pCVar3;
  bool_conflict bVar4;
  System_Object_array *parameters;
  Characters_BaseTitanComponentCache_o *x;
  Characters_BaseTitanComponentCache_o **ppCVar5;
  
  if (g_data_057adf84 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"UngrabRPC");
    g_data_057adf84 = '\x01';
  }
  x = (__this->fields).BaseTitanCache;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    ppCVar5 = &(__this->fields).BaseTitanCache;
    if ((*ppCVar5 != (Characters_BaseTitanComponentCache_o *)0x0) &&
       (pUVar2 = ((*ppCVar5)->fields).Movebox, pUVar2 != (UnityEngine_Collider_o *)0x0)) {
      __this_00 = pUVar2[1].monitor;
      x = TypeInfo_object;
      parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,0);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"UngrabRPC",0,parameters,(MethodInfo *)0x0);
        pCVar3 = *ppCVar5;
        x = (Characters_BaseTitanComponentCache_o *)0x0;
        if (pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0) {
          pCVar3[1].fields.Movebox = (UnityEngine_Collider_o *)0x0;
          il2cpp_runtime_helper_022b4080(&pCVar3[1].fields.Movebox,0);
          *ppCVar5 = (Characters_BaseTitanComponentCache_o *)0x0;
          il2cpp_runtime_helper_022b4080(ppCVar5,0);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (*(float *)&x[1].fields.GrabRSocket <= 0.0) {
      fVar1 = *(float *)((long)&x[1].fields.GrabLSocket + 4);
      *(float *)((long)&x[1].fields.GrabRSocket + 4) = fVar1;
      *(float *)((long)&x[1].fields.GrabLSocket + 4) = fVar1 * 0.67;
    }
    *(undefined4 *)&x[1].fields.GrabRSocket = 0x41200000;
    return;
  }
  return;
}


// Characters.BaseTitan$$DecreaseAttackSpeedRPC
// il2cpp: void Characters_BaseTitan__DecreaseAttackSpeedRPC (Characters_BaseTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x430d8f0

void Characters_BaseTitan__DecreaseAttackSpeedRPC
               (Characters_BaseTitan_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  float fVar1;
  
  if ((__this->fields).CurrentSprintStamina <= 0.0) {
    fVar1 = (__this->fields).SprintStaminaConsumption;
    *(float *)&(__this->fields).field_0x154 = fVar1;
    (__this->fields).SprintStaminaConsumption = fVar1 * 0.67;
  }
  (__this->fields).CurrentSprintStamina = 10.0;
  return;
}


// Characters.BaseTitan$$Confuse
// il2cpp: void Characters_BaseTitan__Confuse (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430d930

void Characters_BaseTitan__Confuse(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  long lVar2;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Characters_BaseTitan_o *pCVar3;
  
  pCVar3 = __this;
  if (g_data_057adf85 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pCVar3 = (Characters_BaseTitan_o *)&"DecreaseAttackSpeedRPC";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf85 = '\x01';
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar2 + 0x20), __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,0);
    Photon_Pun_PhotonView__RPC_3efa220(__this_00,"DecreaseAttackSpeedRPC",targetPlayer,parameters,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  fVar1 = *(float *)&(pCVar3->fields).field_0x154;
  if (0.0 <= fVar1) {
    (pCVar3->fields).SprintStaminaConsumption = fVar1;
  }
  return;
}


// Characters.BaseTitan$$ResetAttackSpeed
// il2cpp: void Characters_BaseTitan__ResetAttackSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430d9b0

void Characters_BaseTitan__ResetAttackSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = *(float *)&(__this->fields).field_0x154;
  if (0.0 <= fVar1) {
    (__this->fields).SprintStaminaConsumption = fVar1;
  }
  return;
}


// Characters.BaseTitan$$OnPlayerEnteredRoom
// il2cpp: void Characters_BaseTitan__OnPlayerEnteredRoom (Characters_BaseTitan_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4306050

void Characters_BaseTitan__OnPlayerEnteredRoom
               (Characters_BaseTitan_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  undefined8 in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (g_data_057adf86 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SetSizeRPC");
    g_data_057adf86 = '\x01';
  }
  Characters_BaseCharacter__OnPlayerEnteredRoom((Characters_BaseCharacter_o *)__this,player,(MethodInfo *)0x0)
  ;
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 == 0) ||
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar2 + 0x20), __this_00 == (Photon_Pun_PhotonView_o *)0x0)) {
label_04306152:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((char)(__this_00->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
    uStack_28 = CONCAT44(*(undefined4 *)((long)&(__this->fields).TitanColliderToggler + 4),
                         (undefined4)uStack_28);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,(long)&uStack_28 + 4);
    if (parameters == (System_Object_array *)0x0) goto label_04306152;
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = il2cpp_runtime_helper_023051f0(pIVar1,(((parameters->obj).klass)->_1).element_class), lVar2 == 0))
    goto label_0430615c;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar1;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pIVar1);
      Photon_Pun_PhotonView__RPC_3efa220(__this_00,"SetSizeRPC",player,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0430615c:
  uVar3 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar3,0);
  return;
}


// Characters.BaseTitan$$StateAction
// il2cpp: void Characters_BaseTitan__StateAction (Characters_BaseTitan_o* __this, int32_t state, System_String_o* animation, float fade, bool deactivateHitboxes, const MethodInfo* method);
// 0x42fdf50

void Characters_BaseTitan__StateAction
               (Characters_BaseTitan_o *__this,int32_t state,System_String_o *animation,float fade,
               bool_conflict deactivateHitboxes,MethodInfo *method)

{
  UnityEngine_Animator_o *pUVar1;
  System_Collections_Generic_Dictionary_string__string__o *pSVar2;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *__this_00;
  Characters_BaseTitan_o *pCVar6;
  Characters_BaseTitan_o *pCVar7;
  System_Collections_Generic_Dictionary_string__string__c *pSVar8;
  Characters_BaseHitbox_o *pCVar9;
  long lVar10;
  System_String_o *pSVar11;
  MethodInfo *method_00;
  Characters_AnimationHandler_o *__this_01;
  Characters_BaseTitan_o *pCVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  undefined8 uStack_a8;
  float fStack_88;
  
  __this_01 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_01 != (Characters_AnimationHandler_o *)0x0) {
    fVar13 = Characters_AnimationHandler__GetLength(__this_01,animation,(MethodInfo *)0x0);
    Characters_BaseTitan__StateActionWithTime
              (__this,state,animation,fVar13,fade,deactivateHitboxes & 0xff,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf14 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSkinLoader);
    g_data_057adf14 = '\x01';
  }
  lVar10 = 0;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSkinLoader);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf15 == '\0') {
    __this_01 = (Characters_AnimationHandler_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf15 = '\x01';
  }
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x40) != 0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf16 = '\x01';
  }
  pCVar6 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  pCVar12 = pCVar6;
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar6,MethodInfo_Dictionary_2_System_String_System_Single);
  pUVar1 = __this_01[8].fields.Animator;
  if ((pUVar1 != (UnityEngine_Animator_o *)0x0) && (pCVar6 != (Characters_BaseTitan_o *)0x0)) {
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar6,
               (Il2CppObject *)(pUVar1->fields).m_CachedPtr,0.95,MethodInfo_Void_Add);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf17 = '\x01';
  }
  method_00 = (pCVar12->klass->vtable)._166_GetAnimationTime.method;
  pCVar6 = pCVar12;
  fVar13 = (float)(*(pCVar12->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar10 = *(long *)&(pCVar12->fields).EnableAI;
  if (lVar10 == 0) goto label_042fee19;
  pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
  method_00 = *(MethodInfo **)(lVar10 + 0x10);
  bVar5 = System_String__op_Equality((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0)
  ;
  if ((char)bVar5 == '\0') {
    lVar10 = *(long *)&(pCVar12->fields).EnableAI;
    if (lVar10 == 0) goto label_042fee19;
    pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
    method_00 = *(MethodInfo **)(lVar10 + 0x18);
    bVar5 = System_String__op_Equality
                      ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      lVar10 = *(long *)&(pCVar12->fields).EnableAI;
      if (lVar10 == 0) goto label_042fee19;
      pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
      method_00 = *(MethodInfo **)(lVar10 + 0x88);
      bVar5 = System_String__op_Equality
                        ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        lVar10 = *(long *)&(pCVar12->fields).EnableAI;
        if (lVar10 == 0) goto label_042fee19;
        pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
        method_00 = *(MethodInfo **)(lVar10 + 0x20);
        bVar5 = System_String__op_Equality
                          ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          lVar10 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar10 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar10 + 0x90);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            fVar14 = (pCVar12->fields)._startPosition.fields.z;
            if ((0.24 < fVar13) && (fVar14 == 0.0)) {
              (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
              pSVar2 = (pCVar12->fields).AttackAnimations;
              if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
              pCVar9 = (Characters_BaseHitbox_o *)pSVar2[1].fields._syncRoot;
              method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
              fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
              pCVar6 = pCVar12;
              if (pCVar9 == (Characters_BaseHitbox_o *)0x0) goto label_042fee19;
              goto label_042fe641;
            }
            if (fVar13 <= 0.33) {
              return;
            }
            if (fVar14 != 1.4013e-45) {
              return;
            }
            pSVar3 = (pCVar12->fields).OnPlayerPropertiesChanged;
            if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
               (pCVar6 = (Characters_BaseTitan_o *)pSVar3[1].fields.invoke_impl,
               pCVar6 != (Characters_BaseTitan_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              pCVar7 = (Characters_BaseTitan_o *)
                       UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pCVar6,(MethodInfo *)0x0);
              if (pCVar7 != (Characters_BaseTitan_o *)0x0) {
                method_00 = (MethodInfo *)0x0;
                UVar15 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar7,(MethodInfo *)0x0);
                pSVar3 = (pCVar12->fields).OnPlayerPropertiesChanged;
                pCVar6 = pCVar7;
                if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
                  pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).method_ptr;
                  pCVar6 = (Characters_BaseTitan_o *)0x0;
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    method_00 = (MethodInfo *)0x0;
                    UVar16 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
                    if ((TypeInfo_EffectPrefabs->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0(UVar16.fields.x,UVar16.fields.z);
                    }
                    pSVar3 = (pCVar12->fields).OnPlayerPropertiesChanged;
                    pCVar6 = TypeInfo_EffectPrefabs;
                    if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
                       (pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).method_ptr,
                       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                      fStack_88 = UVar15.fields.x;
                      pSVar11 = (System_String_o *)(((TypeInfo_EffectPrefabs->fields).MovementSync)->fields)._rigidbody;
                      rotation = UnityEngine_Transform__get_rotation(pUVar4,(MethodInfo *)0x0);
                      fVar13 = *(float *)((long)&(pCVar12->fields).TitanColliderToggler + 4);
                      fVar14 = (float)(*(pCVar12->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                                                (pCVar12,(pCVar12->klass->vtable)._117_get_SizeMultiplier.
                                                         method);
                      UVar15.fields.x = fStack_88;
                      UVar15.fields.y = UVar16.fields.y;
                      Effects_EffectSpawner__Spawn
                                (pSVar11,UVar15,rotation,fVar13 * fVar14,1,(System_Object_array *)0x0,
                                 (MethodInfo *)0x0);
                      (*(pCVar12->klass->vtable)._173_SpawnShatter.methodPtr)
                                (fStack_88,UVar15.fields.z,pCVar12,
                                 (pCVar12->klass->vtable)._173_SpawnShatter.method);
                      (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
                      return;
                    }
                  }
                }
              }
            }
            goto label_042fee19;
          }
          lVar10 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar10 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar10 + 0x98);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (fVar13 <= 0.26) {
              return;
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar12->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar7 = (Characters_BaseTitan_o *)pSVar2[1].fields._keys;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            pCVar6 = pCVar12;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            if (pCVar7 == (Characters_BaseTitan_o *)0x0) goto label_042fee19;
            method_00 = (MethodInfo *)0x0;
            Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pCVar7,0.0,fVar13,(MethodInfo *)0x0);
            pSVar2 = (pCVar12->fields).AttackAnimations;
            pCVar6 = pCVar7;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            pCVar6 = pCVar12;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            goto joined_r0x042fe9fe;
          }
          lVar10 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar10 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar10 + 0xa0);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (fVar13 <= 0.27) {
              return;
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar12->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar9 = (Characters_BaseHitbox_o *)pSVar2[1].fields._comparer;
            method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
            fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
            pCVar6 = pCVar12;
joined_r0x042fed9c:
            if (pCVar9 != (Characters_BaseHitbox_o *)0x0) {
label_042fe641:
              Characters_BaseHitbox__Activate(pCVar9,0.0,fVar13,(MethodInfo *)0x0);
              return;
            }
            goto label_042fee19;
          }
          lVar10 = *(long *)&(pCVar12->fields).EnableAI;
          if (lVar10 == 0) goto label_042fee19;
          pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar10 + 0x28);
          bVar5 = System_String__op_Equality
                            ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            lVar10 = *(long *)&(pCVar12->fields).EnableAI;
            if (lVar10 == 0) goto label_042fee19;
            pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar10 + 0x30);
            bVar5 = System_String__op_Equality
                              ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              if (fVar13 <= 0.45) {
                return;
              }
              goto label_042fe9b0;
            }
            lVar10 = *(long *)&(pCVar12->fields).EnableAI;
            if (lVar10 == 0) goto label_042fee19;
            pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar10 + 0x38);
            bVar5 = System_String__op_Equality
                              ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              lVar10 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar10 == 0) goto label_042fee19;
              pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar10 + 0x40);
              bVar5 = System_String__op_Equality
                                ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') {
                if (fVar13 <= 0.42) {
                  return;
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (pCVar12->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._keys;
                goto label_042fe4af;
              }
              lVar10 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar10 == 0) goto label_042fee19;
              pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar10 + 0x48);
              bVar5 = System_String__op_Equality
                                ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') {
                if (fVar13 <= 0.42) {
                  return;
                }
                goto label_042fe47f;
              }
              lVar10 = *(long *)&(pCVar12->fields).EnableAI;
              if (lVar10 == 0) goto label_042fee19;
              pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar10 + 0x50);
              bVar5 = System_String__op_Equality
                                ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                if (lVar10 == 0) goto label_042fee19;
                pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                method_00 = *(MethodInfo **)(lVar10 + 0x58);
                bVar5 = System_String__op_Equality
                                  ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') {
                  lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                  if (lVar10 == 0) goto label_042fee19;
                  pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                  method_00 = *(MethodInfo **)(lVar10 + 0x60);
                  bVar5 = System_String__op_Equality
                                    ((System_String_o *)pCVar6,(System_String_o *)method_00,(MethodInfo *)0x0)
                  ;
                  if ((char)bVar5 == '\0') {
                    lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                    if (lVar10 == 0) goto label_042fee19;
                    pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                    method_00 = *(MethodInfo **)(lVar10 + 0x68);
                    bVar5 = System_String__op_Equality
                                      ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                       (MethodInfo *)0x0);
                    if ((char)bVar5 == '\0') {
                      lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                      if (lVar10 == 0) goto label_042fee19;
                      pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar10 + 0x70);
                      bVar5 = System_String__op_Equality
                                        ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      if ((char)bVar5 != '\0') {
                        if (fVar13 <= 0.27) {
                          return;
                        }
                        if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                          return;
                        }
                        (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                        pSVar2 = (pCVar12->fields).AttackAnimations;
                        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                        goto label_042fee19;
                        pCVar9 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
                        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
                        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3dcccccd);
                        pCVar6 = pCVar12;
                        goto joined_r0x042fed9c;
                      }
                      lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                      if (lVar10 == 0) goto label_042fee19;
                      pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar10 + 0x78);
                      bVar5 = System_String__op_Equality
                                        ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      if ((char)bVar5 == '\0') {
                        lVar10 = *(long *)&(pCVar12->fields).EnableAI;
                        if (lVar10 == 0) goto label_042fee19;
                        pCVar6 = *(Characters_BaseTitan_o **)&(pCVar12->fields)._currentFallTotalTime;
                        method_00 = *(MethodInfo **)(lVar10 + 0x80);
                        bVar5 = System_String__op_Equality
                                          ((System_String_o *)pCVar6,(System_String_o *)method_00,
                                           (MethodInfo *)0x0);
                        if ((char)bVar5 == '\0') {
                          return;
                        }
                        if (fVar13 <= 0.28) {
                          return;
                        }
                        goto label_042fec53;
                      }
                      if (fVar13 <= 0.28) {
                        return;
                      }
                    }
                    else if (fVar13 <= 0.31) {
                      return;
                    }
                    if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                      return;
                    }
                    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar2 = (pCVar12->fields).AttackAnimations;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar9 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
                  }
                  else {
                    if (fVar13 <= 0.31) {
                      return;
                    }
label_042fec53:
                    if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                      return;
                    }
                    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar2 = (pCVar12->fields).AttackAnimations;
                    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar9 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
                  }
                  method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
                  fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
                  pCVar6 = pCVar12;
                  goto joined_r0x042fed9c;
                }
                if (fVar13 <= 0.31) {
                  return;
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (pCVar12->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar9 = (Characters_BaseHitbox_o *)pSVar2[1].fields._keys;
              }
              else {
                if (fVar13 <= 0.31) {
                  return;
                }
                if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar2 = (pCVar12->fields).AttackAnimations;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar9 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
              }
              method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
              fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
              pCVar6 = pCVar12;
              goto joined_r0x042fed9c;
            }
            if (fVar13 <= 0.45) {
              return;
            }
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar12->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._keys;
          }
          else {
            if (fVar13 <= 0.41) {
              return;
            }
label_042fe9b0:
            if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar2 = (pCVar12->fields).AttackAnimations;
            if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
          }
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar6 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e3851ec);
        }
        else {
          if (fVar13 <= 0.47) {
            return;
          }
label_042fe47f:
          if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
            return;
          }
          (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
          pSVar2 = (pCVar12->fields).AttackAnimations;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
label_042fe4af:
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar6 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
        }
      }
      else {
        if (fVar13 <= 0.395) {
          return;
        }
        if ((pCVar12->fields)._startPosition.fields.z != 0.0) {
          return;
        }
        (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
        pSVar2 = (pCVar12->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar8 = pSVar2[2].klass;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar6 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
      }
    }
    else {
      fVar14 = (pCVar12->fields)._startPosition.fields.z;
      if ((fVar13 <= 0.222) || (fVar14 != 0.0)) {
        if ((fVar13 <= 0.386) || (fVar14 != 1.4013e-45)) {
          if (fVar13 <= 0.612) {
            return;
          }
          if (fVar14 != 2.8026e-45) {
            return;
          }
          (pCVar12->fields)._startPosition.fields.z = 4.2039e-45;
          pSVar2 = (pCVar12->fields).AttackAnimations;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar8 = pSVar2[2].klass;
          method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
          pCVar6 = pCVar12;
          fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
          goto joined_r0x042fe570;
        }
        (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
        pSVar2 = (pCVar12->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pCVar9 = (Characters_BaseHitbox_o *)pSVar2[1].fields._values;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar6 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
        goto joined_r0x042fe402;
      }
      (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
      pSVar2 = (pCVar12->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pSVar8 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar2[1].fields._values;
      method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
      pCVar6 = pCVar12;
      fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
    }
  }
  else {
    fVar14 = (pCVar12->fields)._startPosition.fields.z;
    if ((fVar13 <= 0.155) || (fVar14 != 0.0)) {
      if ((fVar13 <= 0.32) || (fVar14 != 1.4013e-45)) {
        if (fVar13 <= 0.59) {
          return;
        }
        if (fVar14 != 2.8026e-45) {
          return;
        }
        (pCVar12->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar2 = (pCVar12->fields).AttackAnimations;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar8 = pSVar2[2].klass;
        method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
        pCVar6 = pCVar12;
        fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
joined_r0x042fe570:
        if (pSVar8 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
          Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar8,0.0,fVar13,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
          goto label_042fe509;
        }
        goto label_042fee19;
      }
      (pCVar12->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar2 = (pCVar12->fields).AttackAnimations;
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pCVar9 = (Characters_BaseHitbox_o *)pSVar2[1].fields._syncRoot;
      method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
      pCVar6 = pCVar12;
      fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d75c28f);
joined_r0x042fe402:
      if (pCVar9 != (Characters_BaseHitbox_o *)0x0) {
        Characters_BaseHitbox__Activate(pCVar9,0.0,fVar13,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
        goto label_042fe509;
      }
      goto label_042fee19;
    }
    (pCVar12->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar2 = (pCVar12->fields).AttackAnimations;
    if (pSVar2 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
    pSVar8 = pSVar2[2].klass;
    method_00 = (pCVar12->klass->vtable)._167_GetHitboxTime.method;
    pCVar6 = pCVar12;
    fVar13 = (float)(*(pCVar12->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
  }
joined_r0x042fe9fe:
  if (pSVar8 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
    Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar8,0.0,fVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_042fe509:
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar12,pSVar11,(MethodInfo *)0x0);
    return;
  }
label_042fee19:
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar12 = pCVar6;
  if (g_data_057adf18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    pCVar12 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf18 = '\x01';
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x40), lVar10 != 0)) {
    if ((*(char *)(lVar10 + 0x11) != '\0') &&
       (bVar5 = Utility_RandomGen__Roll(fVar13,(MethodInfo *)0x0), (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)pCVar6,
                 *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar6 = pCVar12;
  if (g_data_057adf19 == '\0') {
    pCVar6 = (Characters_BaseTitan_o *)&"AttackComboBlind";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf19 = '\x01';
  }
  lVar10 = *(long *)&(pCVar12->fields).EnableAI;
  if (lVar10 != 0) {
    bVar5 = System_String__op_Inequality
                      (*(System_String_o **)&(pCVar12->fields)._currentFallTotalTime,
                       *(System_String_o **)(lVar10 + 0x18),(MethodInfo *)0x0);
    if (((char)bVar5 != '\0') && ((pCVar12->fields)._jumpDirection.fields.x <= 0.0)) {
      (*(pCVar12->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,pCVar12,(pCVar12->klass->vtable)._168_DamagedGrunt.method);
      (*(pCVar12->klass->vtable)._128_Attack.methodPtr)
                (pCVar12,"AttackComboBlind",(pCVar12->klass->vtable)._128_Attack.method);
      fVar13 = (float)(*(pCVar12->klass->vtable)._118_get_DisableCooldown.methodPtr)
                                (pCVar12,(pCVar12->klass->vtable)._118_get_DisableCooldown.method);
      (pCVar12->fields)._jumpDirection.fields.x = fVar13 + 2.0;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pCVar6->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (pCVar6->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor(pCVar6,method_00);
  return;
}


// Characters.BaseTitan$$StateAttack
// il2cpp: void Characters_BaseTitan__StateAttack (Characters_BaseTitan_o* __this, System_String_o* animation, float fade, bool deactivateHitboxes, const MethodInfo* method);
// 0x430c340

void Characters_BaseTitan__StateAttack
               (Characters_BaseTitan_o *__this,System_String_o *animation,float fade,
               bool_conflict deactivateHitboxes,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  long *plVar2;
  float fVar3;
  
  *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
  pCVar1 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(pCVar1,1,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
    if ((char)deactivateHitboxes != '\0') {
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
    }
    Characters_BaseCharacter__CrossFadeWithSpeed
              ((Characters_BaseCharacter_o *)__this,animation,(__this->fields)._startPosition.fields.y,fade,
               0.0,(MethodInfo *)0x0);
    *(undefined4 *)&(__this->fields).OutlineComponent = 10;
    *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,animation);
    pCVar1 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      fVar3 = Characters_AnimationHandler__GetLength(pCVar1,animation,(MethodInfo *)0x0);
      (__this->fields)._currentCrippleTime = fVar3 / (__this->fields)._startPosition.fields.y;
      return;
    }
  }
  plVar2 = (long *)0x0;
  il2cpp_runtime_helper_022b2c90();
  (**(code **)(*plVar2 + 0x8e8))();
  return;
}


// Characters.BaseTitan$$StateActionWithTime
// il2cpp: void Characters_BaseTitan__StateActionWithTime (Characters_BaseTitan_o* __this, int32_t state, System_String_o* animation, float stateTime, float fade, bool deactivateHitboxes, const MethodInfo* method);
// 0x42ffed0

void Characters_BaseTitan__StateActionWithTime
               (Characters_BaseTitan_o *__this,int32_t state,System_String_o *animation,float stateTime,
               float fade,bool_conflict deactivateHitboxes,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  code *vtableDispatch;
  bool_conflict bVar1;
  long *plVar2;
  
  *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
  if (__this == (Characters_BaseTitan_o *)0x0) {
label_042fffc1:
    plVar2 = (long *)0x0;
    il2cpp_runtime_helper_022b2c90(0,0);
    if (g_data_057adf2b == '\0') {
      il2cpp_runtime_helper_023445d0(&"AttackKick");
      g_data_057adf2b = '\x01';
    }
    vtableDispatch = *(code **)(*plVar2 + 0x938);
    (*vtableDispatch)(plVar2,"AttackKick",*(undefined8 *)(*plVar2 + 0x940),vtableDispatch);
    return;
  }
  __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) goto label_042fffc1;
  Characters_AnimationHandler__SetCullingType
            (__this_00,(uint)((state - 6U & 0xfffffffb) == 0),(MethodInfo *)0x0);
  if ((state != 0x17) && (state != 0x1b)) {
    (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
  }
  if ((char)deactivateHitboxes != '\0') {
    (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
  }
  if (state == 0) {
    bVar1 = System_String__op_Inequality
                      (*(System_String_o **)&(__this->fields)._climbCooldownLeft,animation,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto label_042fff8b;
  }
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this,animation,fade,0.0,(MethodInfo *)0x0);
label_042fff8b:
  *(int32_t *)&(__this->fields).OutlineComponent = state;
  *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,animation);
  (__this->fields)._currentCrippleTime = stateTime;
  return;
}


// Characters.BaseTitan$$SetAnimationUpdateMode
// il2cpp: void Characters_BaseTitan__SetAnimationUpdateMode (Characters_BaseTitan_o* __this, bool always, const MethodInfo* method);
// 0x430d9d0

void Characters_BaseTitan__SetAnimationUpdateMode
               (Characters_BaseTitan_o *__this,bool_conflict always,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  
  __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(__this_00,always & 0xff,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_00[3].monitor != (void *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.BaseTitan$$Awake
// il2cpp: void Characters_BaseTitan__Awake (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4300dd0

void Characters_BaseTitan__Awake(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_AnimationHandler_o *__this_01;
  UI_ImportPopup_o *pUVar4;
  System_Action_Hashtable__o *pSVar5;
  UnityEngine_Object_o *pUVar6;
  System_DelegateData_o *__this_02;
  Il2CppClass **ppIVar7;
  UI_InGameMenu_c *pUVar8;
  UI_ConfirmPopup_o *name;
  void *pvVar9;
  undefined1 auVar10 [16];
  char cVar11;
  bool_conflict bVar12;
  System_Object_array *pSVar13;
  Il2CppClass *pIVar14;
  Il2CppClass *pIVar15;
  System_String_o *pSVar16;
  UnityEngine_Transform_o *pUVar17;
  int32_t damage;
  Il2CppClass *in_RCX;
  System_String_o *name_00;
  Il2CppClass *__this_03;
  Il2CppClass *pIVar18;
  uint damage_00;
  int32_t viewId;
  Characters_BaseTitan_o *__this_04;
  long *character;
  Il2CppClass **ppIVar19;
  Il2CppClass *pIVar20;
  Il2CppClass *in_R8;
  Il2CppClass *in_R9;
  Il2CppMethodPointer pIVar21;
  MethodInfo *vtableDispatch;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined1 extraout_var [12];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o UVar28;
  float fStack_60;
  
  Characters_BaseCharacter__Awake((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  viewId = 0;
  __this_04 = __this;
  (*(__this->klass->vtable)._151_CreateAnimations.methodPtr)
            (__this,0,(__this->klass->vtable)._151_CreateAnimations.method);
  lVar3 = *(long *)&(__this->fields).Dead;
  if ((lVar3 != 0) &&
     (__this_04 = *(Characters_BaseTitan_o **)(lVar3 + 0x18), __this_04 != (Characters_BaseTitan_o *)0x0)) {
    viewId = 1;
    UnityEngine_Rigidbody__set_freezeRotation((UnityEngine_Rigidbody_o *)__this_04,1,(MethodInfo *)0x0);
    lVar3 = *(long *)&(__this->fields).Dead;
    if (lVar3 != 0) {
      __this_00 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18);
      __this_04 = (Characters_BaseTitan_o *)0x0;
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        UnityEngine_Rigidbody__set_useGravity(__this_00,0,(MethodInfo *)0x0);
        pSVar13 = (System_Object_array *)Characters_TitanColliderToggler__Create(__this,(MethodInfo *)0x0);
        (__this->fields).crossfadeCache = pSVar13;
        il2cpp_runtime_helper_022b4080(&(__this->fields).crossfadeCache,pSVar13);
        uVar22 = (*(__this->klass->vtable)._113_get_DefaultRunSpeed.methodPtr)
                           (__this,(__this->klass->vtable)._113_get_DefaultRunSpeed.method);
        *(undefined4 *)&(__this->fields).BaseTitanAnimations = uVar22;
        uVar22 = (*(__this->klass->vtable)._114_get_DefaultWalkSpeed.methodPtr)
                           (__this,(__this->klass->vtable)._114_get_DefaultWalkSpeed.method);
        *(undefined4 *)((long)&(__this->fields).BaseTitanAnimations + 4) = uVar22;
        fVar23 = (float)(*(__this->klass->vtable)._115_get_DefaultJumpForce.methodPtr)
                                  (__this,(__this->klass->vtable)._115_get_DefaultJumpForce.method);
        (__this->fields).ConfusedTime = fVar23;
        viewId = (int32_t)(__this->klass->vtable)._116_get_DefaultRotateSpeed.method;
        fVar23 = (float)(*(__this->klass->vtable)._116_get_DefaultRotateSpeed.methodPtr)(__this);
        (__this->fields).PreviousAttackSpeedMultiplier = fVar23;
        __this_01 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        __this_04 = (Characters_BaseTitan_o *)0x0;
        if (__this_01 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(__this_01,0,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._164_ScaleSounds.methodPtr)
                    (__this,(__this->klass->vtable)._164_ScaleSounds.method);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  damage = (int32_t)in_RCX;
  pIVar18 = in_R8;
  pIVar15 = in_R9;
  if (g_data_057adf2f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"Rock");
    il2cpp_runtime_helper_023445d0(&"TitanStun");
    il2cpp_runtime_helper_023445d0(&"CannonBall");
    il2cpp_runtime_helper_023445d0(&"ShifterStun");
    g_data_057adf2f = '\x01';
  }
  cVar11 = (char)pIVar15;
  if (*(char *)&(__this_04->fields).FeedVictimName != '\0') {
    return;
  }
  bVar12 = System_String__op_Equality((System_String_o *)in_R8,"CannonBall",(MethodInfo *)0x0);
  if (((char)bVar12 != '\0') ||
     (pIVar15 = "Rock", character = (long *)in_R8,
     bVar12 = System_String__op_Equality
                        ((System_String_o *)in_R8,(System_String_o *)"Rock",(MethodInfo *)0x0),
     (char)bVar12 != '\0')) goto label_04300fed;
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if ((lVar3 != 0) &&
     ((lVar3 = *(long *)(lVar3 + 0x50), lVar3 != 0 &&
      (in_RCX = *(Il2CppClass **)(lVar3 + 0x88), in_RCX != (Il2CppClass *)0x0)))) {
    if (*(char *)((long)&((UI_InGameMenu_Fields *)&(in_RCX->_1).name)->m_CachedPtr + 1) != '\0') {
      if (*(long *)(lVar3 + 0x98) == 0) goto label_043014b7;
      in_RCX = (Il2CppClass *)0x0;
      if (damage < *(int *)(*(long *)(lVar3 + 0x98) + 0x14)) {
        damage = 0;
      }
    }
    bVar12 = System_String__op_Equality((System_String_o *)in_R8,"TitanStun",(MethodInfo *)0x0);
    if (((char)bVar12 == '\0') &&
       (pIVar15 = "ShifterStun", character = (long *)in_R8,
       bVar12 = System_String__op_Equality
                          ((System_String_o *)in_R8,(System_String_o *)"ShifterStun",(MethodInfo *)0x0),
       (char)bVar12 == '\0')) {
      pSVar5 = (__this_04->fields).OnPlayerPropertiesChanged;
      if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
        character = (long *)pSVar5[1].fields.method_code;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar15 = (Il2CppClass *)0x0;
        bVar12 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
label_043012e1:
          pSVar5 = (__this_04->fields).OnPlayerPropertiesChanged;
          if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
            character = (long *)pSVar5[1].fields.interp_method;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar15 = (Il2CppClass *)0x0;
            bVar12 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if ((char)bVar12 == '\0') {
label_043013c2:
              pSVar5 = (__this_04->fields).OnPlayerPropertiesChanged;
              if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
                __this_02 = (pSVar5->fields).data;
                character = (long *)0x0;
                if (__this_02 != (System_DelegateData_o *)0x0) {
                  pSVar16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
                  bVar12 = System_String__op_Equality((System_String_o *)in_R9,pSVar16,(MethodInfo *)0x0);
                  if ((char)bVar12 == '\0') {
                    return;
                  }
                  goto label_04300fed;
                }
              }
            }
            else {
              pSVar5 = (__this_04->fields).OnPlayerPropertiesChanged;
              if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
                pUVar6 = (UnityEngine_Object_o *)pSVar5[1].fields.interp_method;
                character = (long *)0x0;
                if (pUVar6 != (UnityEngine_Object_o *)0x0) {
                  pIVar15 = (Il2CppClass *)UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
                  character = (long *)in_R9;
                  bVar12 = System_String__op_Equality
                                     ((System_String_o *)in_R9,(System_String_o *)pIVar15,(MethodInfo *)0x0);
                  if ((char)bVar12 != '\0') {
label_0430139a:
                    (*(__this_04->klass->vtable)._145_Cripple.methodPtr)
                              (__this_04,(__this_04->klass->vtable)._145_Cripple.method);
                    return;
                  }
                  pSVar5 = (__this_04->fields).OnPlayerPropertiesChanged;
                  if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
                    pUVar6 = (UnityEngine_Object_o *)pSVar5[1].fields.interp_invoke_impl;
                    character = (long *)0x0;
                    if (pUVar6 != (UnityEngine_Object_o *)0x0) {
                      pIVar15 = (Il2CppClass *)UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
                      character = (long *)in_R9;
                      bVar12 = System_String__op_Equality
                                         ((System_String_o *)in_R9,(System_String_o *)pIVar15,
                                          (MethodInfo *)0x0);
                      if ((char)bVar12 != '\0') goto label_0430139a;
                      goto label_043013c2;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pSVar5 = (__this_04->fields).OnPlayerPropertiesChanged;
          if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
            pUVar6 = (UnityEngine_Object_o *)pSVar5[1].fields.method_code;
            character = (long *)0x0;
            if (pUVar6 != (UnityEngine_Object_o *)0x0) {
              pIVar15 = (Il2CppClass *)UnityEngine_Object__get_name(pUVar6,(MethodInfo *)0x0);
              character = (long *)in_R9;
              bVar12 = System_String__op_Equality
                                 ((System_String_o *)in_R9,(System_String_o *)pIVar15,(MethodInfo *)0x0);
              if ((char)bVar12 != '\0') {
                (*(__this_04->klass->vtable)._144_Blind.methodPtr)
                          (__this_04,(__this_04->klass->vtable)._144_Blind.method);
                return;
              }
              goto label_043012e1;
            }
          }
        }
      }
    }
    else {
      (*(__this_04->klass->vtable)._132_Stun.methodPtr)(__this_04);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar14 = (Il2CppClass *)Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar15 = (Il2CppClass *)0x0;
      character = (long *)pIVar14;
      bVar12 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pIVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar12 == '\0') ||
         (*(char *)&(__this_04->fields)._previousCoreLocalPosition.fields.y == '\0')) goto label_04300fed;
      if ((pIVar14 != (Il2CppClass *)0x0) &&
         ((pUVar4 = (pIVar14->_1).interopData, pUVar4 != (UI_ImportPopup_o *)0x0 &&
          (character = (long *)(pUVar4->fields).m_CachedPtr, (Il2CppClass *)character != (Il2CppClass *)0x0)))
         ) {
        pIVar15 = (Il2CppClass *)0x0;
        UVar27 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)character,(MethodInfo *)0x0);
        lVar3 = *(long *)&(__this_04->fields).Dead;
        if ((lVar3 != 0) &&
           (character = *(long **)(lVar3 + 0x10), (Il2CppClass *)character != (Il2CppClass *)0x0)) {
          pIVar15 = (Il2CppClass *)0x0;
          UVar28 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)character,(MethodInfo *)0x0)
          ;
          lVar3 = *(long *)&(__this_04->fields).Dead;
          if (lVar3 != 0) {
            pUVar17 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
            fStack_60 = UVar27.fields.x;
            if (g_data_057a6845 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
            }
            fStack_60 = fStack_60 - UVar28.fields.x;
            fVar23 = UVar27.fields.z - UVar28.fields.z;
            character = (long *)TypeInfo_Math;
            if (*(int *)&(TypeInfo_Math->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            fVar24 = fVar23 * fVar23 + fStack_60 * fStack_60 + 0.0;
            if (fVar24 < 0.0) {
              fVar24 = sqrtf(fVar24);
              uVar22 = extraout_var._4_4_;
              uVar26 = extraout_var._8_4_;
              if (fVar24 <= 1e-05) goto label_04301450;
label_04301437:
              fVar23 = fVar23 / fVar24;
              auVar10._4_4_ = fVar24;
              auVar10._0_4_ = fVar24;
              auVar10._8_4_ = uVar22;
              auVar10._12_4_ = uVar26;
              auVar25 = divps(ZEXT416((uint)fStack_60),auVar10);
            }
            else {
              uVar22 = 0;
              uVar26 = 0;
              fVar24 = SQRT(fVar24);
              if (1e-05 < fVar24) goto label_04301437;
label_04301450:
              if (g_data_057a65d5 == '\0') {
                character = &TypeInfo_Vector3;
                il2cpp_runtime_helper_023445d0();
                g_data_057a65d5 = '\x01';
              }
              auVar25._8_8_ = 0;
              auVar25._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
              fVar23 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
            }
            if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
              UVar27.fields._0_8_ = auVar25._0_8_;
              UVar27.fields.z = fVar23;
              UnityEngine_Transform__set_forward(pUVar17,UVar27,(MethodInfo *)0x0);
label_04300fed:
              Characters_BaseCharacter__GetHitRPC
                        ((Characters_BaseCharacter_o *)__this_04,viewId,name_00,damage,
                         (System_String_o *)in_R8,(System_String_o *)in_R9,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_043014b7:
  il2cpp_runtime_helper_022b2c90();
  pIVar14 = pIVar15;
  ppIVar19 = (Il2CppClass **)character;
  if (g_data_057adf30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Shifter");
    ppIVar19 = &"ShifterStun";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf30 = '\x01';
  }
  if (*(char *)((long)&(((Il2CppClass *)character)->_1).typeMetadataHandle + 1) == '\0') {
    damage_00 = 100;
    if (__this_03 != (Il2CppClass *)0x0) goto label_04301580;
label_043015fe:
    if (cVar11 == '\0') {
      return;
    }
    pIVar20 = (Il2CppClass *)ppIVar19;
    if (__this_03 == (Il2CppClass *)0x0) goto label_0430193f;
    if (*(char *)&(__this_03->_1).typeMetadataHandle != '\0') {
      return;
    }
    pIVar18 = (Il2CppClass *)(ulong)damage_00;
    pIVar14 = (Il2CppClass *)0x0;
    bVar12 = Characters_BaseCharacter__IsMainCharacter
                       ((Characters_BaseCharacter_o *)character,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar20 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pIVar20 == (Il2CppClass *)0x0) goto label_0430193f;
      pUVar8 = (pIVar20->_1).image;
      bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
      pIVar14 = TypeInfo_InGameMenu;
      if (((pUVar8->_2).naturalAligment < bVar2) ||
         ((pUVar8->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu)) goto label_0430193a;
      pIVar14 = pIVar18;
      UI_InGameMenu__ShowKillScore((UI_InGameMenu_o *)pIVar20,damage_00,0,(MethodInfo *)0x0);
    }
    pIVar20 = in_RCX;
    if (in_RCX != (Il2CppClass *)0x0) {
      pSVar16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)in_RCX,(MethodInfo *)0x0);
      pUVar8 = (__this_03->_1).image;
      vtableDispatch = pUVar8[3].vtable._4_Setup.method;
      pIVar21 = pUVar8[3].vtable._5_SetupPopups.methodPtr;
      pIVar15 = "Shifter";
label_043016dd:
      (*(code *)vtableDispatch)(__this_03,character,pIVar18,pIVar15,pSVar16,pIVar21);
      return;
    }
  }
  else {
    damage_00 = *(uint *)((long)&(((Il2CppClass *)character)->_1).typeMetadataHandle + 4);
    if (__this_03 == (Il2CppClass *)0x0) goto label_043015fe;
label_04301580:
    pUVar8 = (__this_03->_1).image;
    bVar2 = (pUVar8->_2).naturalAligment;
    bVar1 = (TypeInfo_CustomLogicCollisionHandler->_2).naturalAligment;
    pIVar14 = (Il2CppClass *)(ulong)bVar1;
    pIVar20 = __this_03;
    if ((bVar2 < bVar1) ||
       (ppIVar19 = (pUVar8->_2).typeHierarchy,
       *(Il2CppClass **)((long)ppIVar19 + (long)pIVar14 * 8 + -8) != TypeInfo_CustomLogicCollisionHandler)) {
      bVar1 = (TypeInfo_BaseCharacter->_2).naturalAligment;
      pIVar14 = TypeInfo_BaseCharacter;
      if ((bVar1 <= bVar2) &&
         (ppIVar7 = (pUVar8->_2).typeHierarchy, ppIVar7[(ulong)bVar1 - 1] == TypeInfo_BaseCharacter)) {
        bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
        pIVar14 = (Il2CppClass *)(ulong)bVar1;
        if ((bVar1 <= bVar2) && (ppIVar7[(long)((long)&pIVar14[-1].vtable[0xfe].method + 7)] == TypeInfo_BaseTitan))
        {
          if ((*(char *)&(__this_03->_1).klass == '\0') && (*(int *)((long)&(__this_03->_1).klass + 4) == 10))
          {
            damage_00 = 2;
          }
          if (cVar11 == '\0') {
            return;
          }
          pIVar18 = (Il2CppClass *)(ulong)damage_00;
          if (*(int *)&(TypeInfo_EffectPrefabs->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar20 = TypeInfo_EffectPrefabs;
          if (pIVar15 == (Il2CppClass *)0x0) goto label_0430193f;
          pSVar16 = *(System_String_o **)((long)TypeInfo_EffectPrefabs->static_fields + 0x28);
          pIVar14 = (Il2CppClass *)0x0;
          pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar15,(MethodInfo *)0x0)
          ;
          pIVar20 = pIVar15;
          if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_0430193f;
          UVar27 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
          if (g_data_057a6843 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
            g_data_057a6843 = '\x01';
          }
          Effects_EffectSpawner__Spawn
                    (pSVar16,UVar27,
                     (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),1.0,1
                     ,(System_Object_array *)0x0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_BaseCharacter__PlaySound
                    ((Characters_BaseCharacter_o *)character,
                     *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xc0),(MethodInfo *)0x0);
          if (*(char *)&(__this_03->_1).typeMetadataHandle != '\0') {
            return;
          }
          pIVar14 = (Il2CppClass *)0x0;
          bVar12 = Characters_BaseCharacter__IsMainCharacter
                             ((Characters_BaseCharacter_o *)character,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar20 = *(Il2CppClass **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (pIVar20 == (Il2CppClass *)0x0) goto label_0430193f;
            pUVar8 = (pIVar20->_1).image;
            bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
            pIVar14 = TypeInfo_InGameMenu;
            if (((pUVar8->_2).naturalAligment < bVar2) ||
               ((pUVar8->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu)) goto label_0430193a;
            pIVar14 = pIVar18;
            UI_InGameMenu__ShowKillScore((UI_InGameMenu_o *)pIVar20,damage_00,0,(MethodInfo *)0x0);
          }
          pIVar20 = in_RCX;
          if (in_RCX != (Il2CppClass *)0x0) {
            pSVar16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)in_RCX,(MethodInfo *)0x0);
            pUVar8 = (__this_03->_1).image;
            vtableDispatch = pUVar8[3].vtable._4_Setup.method;
            pIVar21 = pUVar8[3].vtable._5_SetupPopups.methodPtr;
            pIVar15 = "ShifterStun";
            goto label_043016dd;
          }
          goto label_0430193f;
        }
        goto label_043015fe;
      }
    }
    else {
      pIVar20 = (Il2CppClass *)ppIVar19;
      if (pIVar15 == (Il2CppClass *)0x0) goto label_0430193f;
      name = *(UI_ConfirmPopup_o **)&(((Il2CppClass *)character)->_1).this_arg.bits;
      pIVar14 = (Il2CppClass *)0x0;
      pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar15,(MethodInfo *)0x0);
      pIVar20 = pIVar15;
      if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_0430193f;
      UVar27 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      pUVar8 = (__this_03->_1).image;
      bVar2 = (TypeInfo_CustomLogicCollisionHandler->_2).naturalAligment;
      pIVar14 = TypeInfo_CustomLogicCollisionHandler;
      pIVar20 = __this_03;
      if ((bVar2 <= (pUVar8->_2).naturalAligment) &&
         ((pUVar8->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicCollisionHandler)) {
        CustomLogic_CustomLogicCollisionHandler__GetHit
                  ((CustomLogic_CustomLogicCollisionHandler_o *)__this_03,
                   (Characters_BaseCharacter_o *)character,(System_String_o *)name,damage_00,
                   (System_String_o *)pIVar18,UVar27,(MethodInfo *)0x0);
        return;
      }
    }
label_0430193a:
    il2cpp_runtime_helper_022b2fd0();
  }
label_0430193f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf31 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Roar");
    g_data_057adf31 = '\x01';
  }
  Characters_BaseTitan__Update((Characters_BaseTitan_o *)pIVar20,(MethodInfo *)pIVar14);
  bVar12 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pIVar20,(MethodInfo *)0x0);
  if (((((char)bVar12 != '\0') && (*(char *)((long)&pIVar20->vtable[0x13].method + 1) != '\0')) &&
      (*(char *)((long)&pIVar20->rgctx_data + 4) != '\0')) &&
     (pvVar9 = (pIVar20->_1).image,
     cVar11 = (**(code **)((long)pvVar9 + 0x8e8))(pIVar20,*(undefined8 *)((long)pvVar9 + 0x8f0)),
     cVar11 != '\0')) {
    pvVar9 = (pIVar20->_1).image;
    (**(code **)((long)pvVar9 + 0x598))(pIVar20,"Roar",*(undefined8 *)((long)pvVar9 + 0x5a0));
    *(undefined1 *)((long)&pIVar20->vtable[0x13].method + 1) = 0;
  }
  return;
}


// Characters.BaseTitan$$CreateCache
// il2cpp: void Characters_BaseTitan__CreateCache (Characters_BaseTitan_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x42fd9a0

void Characters_BaseTitan__CreateCache
               (Characters_BaseTitan_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  bool_conflict *pbVar1;
  byte bVar2;
  UnityEngine_GameObject_o *owner;
  Utility_BaseComponentCache_o *__this_00;
  Characters_AnnieAnimations_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  Il2CppClass *method_01;
  
  if (g_data_057adf87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitanComponentCache);
    g_data_057adf87 = '\x01';
    method = extraout_RDX;
  }
  method_01 = TypeInfo_BaseTitanComponentCache;
  if (cache == (Utility_BaseComponentCache_o *)0x0) {
    (__this->fields).OnPlayerPropertiesChanged = (System_Action_Hashtable__o *)0x0;
Characters_BaseCharacter__CreateCache:
    il2cpp_runtime_helper_022b4080(&(__this->fields).OnPlayerPropertiesChanged,cache);
    if (g_data_057add3a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BaseComponentCache,cache,0);
      g_data_057add3a = '\x01';
    }
    pbVar1 = &(__this->fields).Dead;
    *(Utility_BaseComponentCache_o **)&(__this->fields).Dead = cache;
    il2cpp_runtime_helper_022b4080(pbVar1);
    if (cache == (Utility_BaseComponentCache_o *)0x0) {
      owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      __this_00 = (Utility_BaseComponentCache_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseComponentCache);
      Utility_BaseComponentCache___ctor(__this_00,owner,(MethodInfo *)0x0);
      *(Utility_BaseComponentCache_o **)&(__this->fields).Dead = __this_00;
      il2cpp_runtime_helper_022b4080(pbVar1,__this_00);
      return;
    }
    return;
  }
  bVar2 = (TypeInfo_BaseTitanComponentCache->_2).naturalAligment;
  if ((bVar2 <= (cache->klass->_2).naturalAligment) &&
     ((cache->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseTitanComponentCache)) {
    (__this->fields).OnPlayerPropertiesChanged = (System_Action_Hashtable__o *)cache;
    if ((bVar2 <= (cache->klass->_2).naturalAligment) &&
       ((cache->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == method_01))
    goto Characters_BaseCharacter__CreateCache;
  }
  il2cpp_runtime_helper_022b2fd0(cache,method_01,method);
  if (g_data_057adf12 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnnieAnimations);
    g_data_057adf12 = '\x01';
  }
  __this_01 = (Characters_AnnieAnimations_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnnieAnimations);
  Characters_AnnieAnimations___ctor(__this_01,(MethodInfo *)method_01);
  *(Characters_AnnieAnimations_o **)&(((Characters_BaseTitan_o *)cache)->fields).EnableAI = __this_01;
  il2cpp_runtime_helper_022b4080(&(((Characters_BaseTitan_o *)cache)->fields).EnableAI,__this_01);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)cache,
             *(Characters_BaseTitanAnimations_o **)&(((Characters_BaseTitan_o *)cache)->fields).EnableAI,
             method_00);
  return;
}


// Characters.BaseTitan$$CreateAnimations
// il2cpp: void Characters_BaseTitan__CreateAnimations (Characters_BaseTitan_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x42fdac0

void Characters_BaseTitan__CreateAnimations
               (Characters_BaseTitan_o *__this,Characters_BaseTitanAnimations_o *animations,MethodInfo *method
               )

{
  int iVar1;
  uint uVar2;
  UnityEngine_Animator_o *pUVar3;
  System_Collections_Generic_Dictionary_string__string__o *pSVar4;
  System_Action_Hashtable__o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  char cVar7;
  bool_conflict bVar8;
  Characters_BaseTitan_o *pCVar9;
  Characters_BaseCharacter_o *__this_00;
  System_Reflection_FieldInfo_array *pSVar10;
  Il2CppObject *value;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_GameObject_o *__this_01;
  Characters_BaseTitan_o *pCVar11;
  Characters_BaseTitan_o *pCVar12;
  uint uVar13;
  MethodInfo_3104E10 *in_RCX;
  System_String_o *name;
  System_Collections_Generic_Dictionary_string__string__c *pSVar14;
  Characters_BaseHitbox_o *pCVar15;
  uint uVar16;
  int32_t state;
  System_String_o *pSVar17;
  long lVar18;
  System_String_o *pSVar19;
  MethodInfo *method_00;
  Characters_BaseCharacter_o *__this_02;
  Characters_BaseCharacter_o *pCVar20;
  Characters_AnimationHandler_o *pCVar21;
  MethodInfo *in_R8;
  float fVar22;
  float fVar23;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o UVar25;
  undefined8 uStack_118;
  float fStack_f8;
  
  if (g_data_057adf88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitanAnimations);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Attack");
    g_data_057adf88 = '\x01';
  }
  if (animations == (Characters_BaseTitanAnimations_o *)0x0) {
    animations = (Characters_BaseTitanAnimations_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseTitanAnimations);
    Characters_BaseTitanAnimations___ctor(animations,(MethodInfo *)0x0);
  }
  *(Characters_BaseTitanAnimations_o **)&(__this->fields).TurnPause = animations;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TurnPause,animations);
  pCVar9 = (Characters_BaseTitan_o *)
           (*(__this->klass->vtable)._121_GetRootMotionAnimations.methodPtr)
                     (__this,(__this->klass->vtable)._121_GetRootMotionAnimations.method);
  *(Characters_BaseTitan_o **)&(__this->fields)._startCoreAttackPosition.fields = pCVar9;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._startCoreAttackPosition);
  uVar13 = (uint)in_RCX;
  __this_02 = *(Characters_BaseCharacter_o **)&(__this->fields).TurnPause;
  if (__this_02 == (Characters_BaseCharacter_o *)0x0) {
label_042fdcbc:
    __this_00 = __this_02;
    pCVar11 = pCVar9;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar9 = (Characters_BaseTitan_o *)0x0;
    __this_00 = (Characters_BaseCharacter_o *)
                System_Object__GetType((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    uVar13 = (uint)in_RCX;
    if (__this_00 == (Characters_BaseCharacter_o *)0x0) goto label_042fdcbc;
    pCVar11 = (Characters_BaseTitan_o *)0x0;
    pSVar10 = System_Type__GetFields((System_Type_o *)__this_00,(MethodInfo *)0x0);
    uVar13 = (uint)in_RCX;
    pCVar9 = pCVar11;
    __this_02 = __this_00;
    if (pSVar10 == (System_Reflection_FieldInfo_array *)0x0) goto label_042fdcbc;
    iVar1 = (int)pSVar10->max_length;
    if (iVar1 < 1) {
      return;
    }
    uVar16 = 0;
    if (iVar1 != 0) {
      do {
        uVar13 = (uint)in_RCX;
        pCVar20 = (Characters_BaseCharacter_o *)pSVar10->m_Items[(int)uVar16];
        pCVar9 = pCVar11;
        __this_02 = __this_00;
        if (pCVar20 == (Characters_BaseCharacter_o *)0x0) goto label_042fdcbc;
        pCVar9 = (Characters_BaseTitan_o *)((Il2CppClass *)pCVar20->klass)->vtable[8].method;
        __this_02 = pCVar20;
        __this_00 = (Characters_BaseCharacter_o *)(*((Il2CppClass *)pCVar20->klass)->vtable[8].methodPtr)();
        uVar13 = (uint)in_RCX;
        if (__this_00 == (Characters_BaseCharacter_o *)0x0) goto label_042fdcbc;
        pCVar11 = "Attack";
        bVar8 = System_String__StartsWith
                          ((System_String_o *)__this_00,(System_String_o *)"Attack",(MethodInfo *)0x0);
        uVar13 = (uint)in_RCX;
        if ((char)bVar8 != '\0') {
          __this_00 = *(Characters_BaseCharacter_o **)&(__this->fields)._startCoreAttackPosition.fields.z;
          pCVar11 = (Characters_BaseTitan_o *)
                    (*((Il2CppClass *)pCVar20->klass)->vtable[8].methodPtr)
                              (pCVar20,((Il2CppClass *)pCVar20->klass)->vtable[8].method);
          pCVar9 = *(Characters_BaseTitan_o **)&(__this->fields).TurnPause;
          value = (Il2CppObject *)
                  (*((Il2CppClass *)pCVar20->klass)->vtable[0x1a].methodPtr)
                            (pCVar20,pCVar9,((Il2CppClass *)pCVar20->klass)->vtable[0x1a].method);
          __this_02 = pCVar20;
          if (__this_00 == (Characters_BaseCharacter_o *)0x0) goto label_042fdcbc;
          if ((value != (Il2CppObject *)0x0) && (value->klass != g_data_057b9c00)) {
            il2cpp_runtime_helper_022b2fd0(value);
            return;
          }
          in_RCX = MethodInfo_Void_Add;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                     (Il2CppObject *)pCVar11,value,MethodInfo_Void_Add);
        }
        uVar13 = (uint)in_RCX;
        uVar16 = uVar16 + 1;
        uVar2 = (uint)pSVar10->max_length;
        if ((int)uVar2 <= (int)uVar16) {
          return;
        }
      } while (uVar16 < uVar2);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adf13 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    il2cpp_runtime_helper_023445d0(&"Wave");
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Salute");
    il2cpp_runtime_helper_023445d0(&"Taunt");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf13 = '\x01';
  }
  cVar7 = (**(code **)&__this_00->klass[1]._2.cctor_finished)(__this_00,__this_00->klass[1]._2.cctor_thread);
  if (cVar7 == '\0') {
    return;
  }
  pSVar19 = *(System_String_o **)g_data_057b9c00->static_fields;
  pSVar17 = "Salute";
  pCVar9 = pCVar11;
  bVar8 = System_String__op_Equality((System_String_o *)pCVar11,"Salute",(MethodInfo *)0x0);
  state = (int32_t)pSVar17;
  if ((char)bVar8 == '\0') {
    pSVar17 = "Roar";
    pCVar9 = pCVar11;
    bVar8 = System_String__op_Equality((System_String_o *)pCVar11,"Roar",(MethodInfo *)0x0);
    state = (int32_t)pSVar17;
    if ((char)bVar8 == '\0') {
      pSVar17 = "Taunt";
      pCVar9 = pCVar11;
      bVar8 = System_String__op_Equality((System_String_o *)pCVar11,"Taunt",(MethodInfo *)0x0);
      state = (int32_t)pSVar17;
      if ((char)bVar8 == '\0') {
        pSVar17 = "Wave";
        bVar8 = System_String__op_Equality((System_String_o *)pCVar11,"Wave",(MethodInfo *)0x0);
        state = (int32_t)pSVar17;
        if ((char)bVar8 != '\0') {
          lVar18 = *(long *)&__this_00[2].fields.AI;
          if (lVar18 == 0) goto label_042fdf42;
          pSVar19 = *(System_String_o **)(lVar18 + 0xb8);
        }
      }
      else {
        lVar18 = *(long *)&__this_00[2].fields.AI;
        pCVar11 = pCVar9;
        if (lVar18 == 0) goto label_042fdf42;
        pSVar19 = *(System_String_o **)(lVar18 + 0xb0);
      }
    }
    else {
      lVar18 = *(long *)&__this_00[2].fields.AI;
      pCVar11 = pCVar9;
      if (lVar18 == 0) goto label_042fdf42;
      pSVar19 = *(System_String_o **)(lVar18 + 0xc0);
      if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      routine = Characters_BaseCharacter__WaitAndPlaySound
                          (__this_00,*(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x10),0.1,
                           (MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
    }
label_042fde74:
    pSVar17 = "";
    bVar8 = System_String__op_Inequality(pSVar19,"",(MethodInfo *)0x0);
    state = (int32_t)pSVar17;
    if ((char)bVar8 == '\0') {
      return;
    }
    pCVar21 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
    pCVar11 = (Characters_BaseTitan_o *)0x0;
    if (pCVar21 != (Characters_AnimationHandler_o *)0x0) {
      pSVar17 = pSVar19;
      fVar22 = Characters_AnimationHandler__GetLength(pCVar21,pSVar19,(MethodInfo *)0x0);
      state = (int32_t)pSVar17;
      *(undefined1 *)&__this_00[2].fields.m_CancellationTokenSource = 1;
      pCVar21 = *(Characters_AnimationHandler_o **)&(__this_00->fields)._cameraFPS;
      pCVar11 = (Characters_BaseTitan_o *)0x0;
      if (pCVar21 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar21,0,(MethodInfo *)0x0);
        (*(code *)__this_00->klass[1].vtable._18_unknown.method)
                  (__this_00,__this_00->klass[1].vtable._19_unknown.methodPtr);
        (*(code *)__this_00->klass[1].vtable._33_OnCreateRoomFailed.method)
                  (__this_00,__this_00->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
        Characters_BaseCharacter__CrossFade(__this_00,pSVar19,0.1,0.0,(MethodInfo *)0x0);
        *(undefined4 *)&(__this_00->fields).OutlineComponent = 8;
        __this_00[2].monitor = pSVar19;
        il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pSVar19);
        *(float *)((long)&__this_00[1].fields.OnPlayerPropertiesChanged + 4) = fVar22;
        return;
      }
    }
  }
  else {
    lVar18 = *(long *)&__this_00[2].fields.AI;
    pCVar11 = pCVar9;
    if (lVar18 != 0) {
      pSVar19 = *(System_String_o **)(lVar18 + 0xa8);
      goto label_042fde74;
    }
  }
label_042fdf42:
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar21 = *(Characters_AnimationHandler_o **)&(pCVar11->fields)._cameraFPS;
  if (pCVar21 != (Characters_AnimationHandler_o *)0x0) {
    fVar23 = Characters_AnimationHandler__GetLength(pCVar21,name,(MethodInfo *)0x0);
    Characters_BaseTitan__StateActionWithTime(pCVar11,state,name,fVar23,fVar22,uVar13 & 0xff,in_R8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf14 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSkinLoader);
    g_data_057adf14 = '\x01';
  }
  lVar18 = 0;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar21,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_(__this_01,MethodInfo_AnnieCustomSkinLoader_AddComponent_AnnieCustomSkinLoader);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf15 == '\0') {
    pCVar21 = (Characters_AnimationHandler_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf15 = '\x01';
  }
  if ((lVar18 != 0) && (*(long *)(lVar18 + 0x40) != 0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf16 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    g_data_057adf16 = '\x01';
  }
  pCVar11 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
  pCVar9 = pCVar11;
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar11,MethodInfo_Dictionary_2_System_String_System_Single);
  pUVar3 = pCVar21[8].fields.Animator;
  if ((pUVar3 != (UnityEngine_Animator_o *)0x0) && (pCVar11 != (Characters_BaseTitan_o *)0x0)) {
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar11,
               (Il2CppObject *)(pUVar3->fields).m_CachedPtr,0.95,MethodInfo_Void_Add);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf17 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf17 = '\x01';
  }
  method_00 = (pCVar9->klass->vtable)._166_GetAnimationTime.method;
  pCVar11 = pCVar9;
  fVar22 = (float)(*(pCVar9->klass->vtable)._166_GetAnimationTime.methodPtr)();
  lVar18 = *(long *)&(pCVar9->fields).EnableAI;
  if (lVar18 == 0) goto label_042fee19;
  pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
  method_00 = *(MethodInfo **)(lVar18 + 0x10);
  bVar8 = System_String__op_Equality
                    ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    lVar18 = *(long *)&(pCVar9->fields).EnableAI;
    if (lVar18 == 0) goto label_042fee19;
    pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
    method_00 = *(MethodInfo **)(lVar18 + 0x18);
    bVar8 = System_String__op_Equality
                      ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      lVar18 = *(long *)&(pCVar9->fields).EnableAI;
      if (lVar18 == 0) goto label_042fee19;
      pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
      method_00 = *(MethodInfo **)(lVar18 + 0x88);
      bVar8 = System_String__op_Equality
                        ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        lVar18 = *(long *)&(pCVar9->fields).EnableAI;
        if (lVar18 == 0) goto label_042fee19;
        pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
        method_00 = *(MethodInfo **)(lVar18 + 0x20);
        bVar8 = System_String__op_Equality
                          ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          lVar18 = *(long *)&(pCVar9->fields).EnableAI;
          if (lVar18 == 0) goto label_042fee19;
          pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar18 + 0x90);
          bVar8 = System_String__op_Equality
                            ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            fVar23 = (pCVar9->fields)._startPosition.fields.z;
            if ((0.24 < fVar22) && (fVar23 == 0.0)) {
              (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
              pSVar4 = (pCVar9->fields).AttackAnimations;
              if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
              pCVar15 = (Characters_BaseHitbox_o *)pSVar4[1].fields._syncRoot;
              method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
              fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
              pCVar11 = pCVar9;
              if (pCVar15 == (Characters_BaseHitbox_o *)0x0) goto label_042fee19;
              goto label_042fe641;
            }
            if (fVar22 <= 0.33) {
              return;
            }
            if (fVar23 != 1.4013e-45) {
              return;
            }
            pSVar5 = (pCVar9->fields).OnPlayerPropertiesChanged;
            if ((pSVar5 != (System_Action_Hashtable__o *)0x0) &&
               (pCVar11 = (Characters_BaseTitan_o *)pSVar5[1].fields.invoke_impl,
               pCVar11 != (Characters_BaseTitan_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              pCVar12 = (Characters_BaseTitan_o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0);
              if (pCVar12 != (Characters_BaseTitan_o *)0x0) {
                method_00 = (MethodInfo *)0x0;
                UVar24 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pCVar12,(MethodInfo *)0x0);
                pSVar5 = (pCVar9->fields).OnPlayerPropertiesChanged;
                pCVar11 = pCVar12;
                if (pSVar5 != (System_Action_Hashtable__o *)0x0) {
                  pUVar6 = (UnityEngine_Transform_o *)(pSVar5->fields).method_ptr;
                  pCVar11 = (Characters_BaseTitan_o *)0x0;
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    method_00 = (MethodInfo *)0x0;
                    UVar25 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                    if ((TypeInfo_EffectPrefabs->fields)._stepPhase == 0) {
                      il2cpp_runtime_helper_02337ed0(UVar25.fields.x,UVar25.fields.z);
                    }
                    pSVar5 = (pCVar9->fields).OnPlayerPropertiesChanged;
                    pCVar11 = TypeInfo_EffectPrefabs;
                    if ((pSVar5 != (System_Action_Hashtable__o *)0x0) &&
                       (pUVar6 = (UnityEngine_Transform_o *)(pSVar5->fields).method_ptr,
                       pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                      fStack_f8 = UVar24.fields.x;
                      pSVar19 = (System_String_o *)(((TypeInfo_EffectPrefabs->fields).MovementSync)->fields)._rigidbody;
                      rotation = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
                      fVar22 = *(float *)((long)&(pCVar9->fields).TitanColliderToggler + 4);
                      fVar23 = (float)(*(pCVar9->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                                                (pCVar9,(pCVar9->klass->vtable)._117_get_SizeMultiplier.method
                                                );
                      UVar24.fields.x = fStack_f8;
                      UVar24.fields.y = UVar25.fields.y;
                      Effects_EffectSpawner__Spawn
                                (pSVar19,UVar24,rotation,fVar22 * fVar23,1,(System_Object_array *)0x0,
                                 (MethodInfo *)0x0);
                      (*(pCVar9->klass->vtable)._173_SpawnShatter.methodPtr)
                                (fStack_f8,UVar24.fields.z,pCVar9,
                                 (pCVar9->klass->vtable)._173_SpawnShatter.method);
                      (pCVar9->fields)._startPosition.fields.z = 2.8026e-45;
                      return;
                    }
                  }
                }
              }
            }
            goto label_042fee19;
          }
          lVar18 = *(long *)&(pCVar9->fields).EnableAI;
          if (lVar18 == 0) goto label_042fee19;
          pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar18 + 0x98);
          bVar8 = System_String__op_Equality
                            ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            if (fVar22 <= 0.26) {
              return;
            }
            if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar4 = (pCVar9->fields).AttackAnimations;
            if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar12 = (Characters_BaseTitan_o *)pSVar4[1].fields._keys;
            method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
            pCVar11 = pCVar9;
            fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            if (pCVar12 == (Characters_BaseTitan_o *)0x0) goto label_042fee19;
            method_00 = (MethodInfo *)0x0;
            Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pCVar12,0.0,fVar22,(MethodInfo *)0x0);
            pSVar4 = (pCVar9->fields).AttackAnimations;
            pCVar11 = pCVar12;
            if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar14 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar4[1].fields._values;
            method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
            pCVar11 = pCVar9;
            fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3da3d70a);
            goto joined_r0x042fe9fe;
          }
          lVar18 = *(long *)&(pCVar9->fields).EnableAI;
          if (lVar18 == 0) goto label_042fee19;
          pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar18 + 0xa0);
          bVar8 = System_String__op_Equality
                            ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            if (fVar22 <= 0.27) {
              return;
            }
            if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar4 = (pCVar9->fields).AttackAnimations;
            if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pCVar15 = (Characters_BaseHitbox_o *)pSVar4[1].fields._comparer;
            method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
            fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
            pCVar11 = pCVar9;
joined_r0x042fed9c:
            if (pCVar15 != (Characters_BaseHitbox_o *)0x0) {
label_042fe641:
              Characters_BaseHitbox__Activate(pCVar15,0.0,fVar22,(MethodInfo *)0x0);
              return;
            }
            goto label_042fee19;
          }
          lVar18 = *(long *)&(pCVar9->fields).EnableAI;
          if (lVar18 == 0) goto label_042fee19;
          pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
          method_00 = *(MethodInfo **)(lVar18 + 0x28);
          bVar8 = System_String__op_Equality
                            ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            lVar18 = *(long *)&(pCVar9->fields).EnableAI;
            if (lVar18 == 0) goto label_042fee19;
            pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar18 + 0x30);
            bVar8 = System_String__op_Equality
                              ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar8 != '\0') {
              if (fVar22 <= 0.45) {
                return;
              }
              goto label_042fe9b0;
            }
            lVar18 = *(long *)&(pCVar9->fields).EnableAI;
            if (lVar18 == 0) goto label_042fee19;
            pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
            method_00 = *(MethodInfo **)(lVar18 + 0x38);
            bVar8 = System_String__op_Equality
                              ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              lVar18 = *(long *)&(pCVar9->fields).EnableAI;
              if (lVar18 == 0) goto label_042fee19;
              pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar18 + 0x40);
              bVar8 = System_String__op_Equality
                                ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                if (fVar22 <= 0.42) {
                  return;
                }
                if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar4 = (pCVar9->fields).AttackAnimations;
                if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pSVar14 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar4[1].fields._keys;
                goto label_042fe4af;
              }
              lVar18 = *(long *)&(pCVar9->fields).EnableAI;
              if (lVar18 == 0) goto label_042fee19;
              pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar18 + 0x48);
              bVar8 = System_String__op_Equality
                                ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                if (fVar22 <= 0.42) {
                  return;
                }
                goto label_042fe47f;
              }
              lVar18 = *(long *)&(pCVar9->fields).EnableAI;
              if (lVar18 == 0) goto label_042fee19;
              pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
              method_00 = *(MethodInfo **)(lVar18 + 0x50);
              bVar8 = System_String__op_Equality
                                ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                lVar18 = *(long *)&(pCVar9->fields).EnableAI;
                if (lVar18 == 0) goto label_042fee19;
                pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
                method_00 = *(MethodInfo **)(lVar18 + 0x58);
                bVar8 = System_String__op_Equality
                                  ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  lVar18 = *(long *)&(pCVar9->fields).EnableAI;
                  if (lVar18 == 0) goto label_042fee19;
                  pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
                  method_00 = *(MethodInfo **)(lVar18 + 0x60);
                  bVar8 = System_String__op_Equality
                                    ((System_String_o *)pCVar11,(System_String_o *)method_00,(MethodInfo *)0x0
                                    );
                  if ((char)bVar8 == '\0') {
                    lVar18 = *(long *)&(pCVar9->fields).EnableAI;
                    if (lVar18 == 0) goto label_042fee19;
                    pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
                    method_00 = *(MethodInfo **)(lVar18 + 0x68);
                    bVar8 = System_String__op_Equality
                                      ((System_String_o *)pCVar11,(System_String_o *)method_00,
                                       (MethodInfo *)0x0);
                    if ((char)bVar8 == '\0') {
                      lVar18 = *(long *)&(pCVar9->fields).EnableAI;
                      if (lVar18 == 0) goto label_042fee19;
                      pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar18 + 0x70);
                      bVar8 = System_String__op_Equality
                                        ((System_String_o *)pCVar11,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      if ((char)bVar8 != '\0') {
                        if (fVar22 <= 0.27) {
                          return;
                        }
                        if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
                          return;
                        }
                        (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
                        pSVar4 = (pCVar9->fields).AttackAnimations;
                        if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                        goto label_042fee19;
                        pCVar15 = (Characters_BaseHitbox_o *)pSVar4[1].fields._keys;
                        method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
                        fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3dcccccd);
                        pCVar11 = pCVar9;
                        goto joined_r0x042fed9c;
                      }
                      lVar18 = *(long *)&(pCVar9->fields).EnableAI;
                      if (lVar18 == 0) goto label_042fee19;
                      pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
                      method_00 = *(MethodInfo **)(lVar18 + 0x78);
                      bVar8 = System_String__op_Equality
                                        ((System_String_o *)pCVar11,(System_String_o *)method_00,
                                         (MethodInfo *)0x0);
                      if ((char)bVar8 == '\0') {
                        lVar18 = *(long *)&(pCVar9->fields).EnableAI;
                        if (lVar18 == 0) goto label_042fee19;
                        pCVar11 = *(Characters_BaseTitan_o **)&(pCVar9->fields)._currentFallTotalTime;
                        method_00 = *(MethodInfo **)(lVar18 + 0x80);
                        bVar8 = System_String__op_Equality
                                          ((System_String_o *)pCVar11,(System_String_o *)method_00,
                                           (MethodInfo *)0x0);
                        if ((char)bVar8 == '\0') {
                          return;
                        }
                        if (fVar22 <= 0.28) {
                          return;
                        }
                        goto label_042fec53;
                      }
                      if (fVar22 <= 0.28) {
                        return;
                      }
                    }
                    else if (fVar22 <= 0.31) {
                      return;
                    }
                    if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
                      return;
                    }
                    (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar4 = (pCVar9->fields).AttackAnimations;
                    if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar15 = (Characters_BaseHitbox_o *)pSVar4[1].fields._keys;
                  }
                  else {
                    if (fVar22 <= 0.31) {
                      return;
                    }
label_042fec53:
                    if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
                      return;
                    }
                    (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
                    pSVar4 = (pCVar9->fields).AttackAnimations;
                    if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                    goto label_042fee19;
                    pCVar15 = (Characters_BaseHitbox_o *)pSVar4[1].fields._values;
                  }
                  method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
                  fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
                  pCVar11 = pCVar9;
                  goto joined_r0x042fed9c;
                }
                if (fVar22 <= 0.31) {
                  return;
                }
                if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar4 = (pCVar9->fields).AttackAnimations;
                if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar15 = (Characters_BaseHitbox_o *)pSVar4[1].fields._keys;
              }
              else {
                if (fVar22 <= 0.31) {
                  return;
                }
                if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
                  return;
                }
                (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
                pSVar4 = (pCVar9->fields).AttackAnimations;
                if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0)
                goto label_042fee19;
                pCVar15 = (Characters_BaseHitbox_o *)pSVar4[1].fields._values;
              }
              method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
              fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
              pCVar11 = pCVar9;
              goto joined_r0x042fed9c;
            }
            if (fVar22 <= 0.45) {
              return;
            }
            if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar4 = (pCVar9->fields).AttackAnimations;
            if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar14 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar4[1].fields._keys;
          }
          else {
            if (fVar22 <= 0.41) {
              return;
            }
label_042fe9b0:
            if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
              return;
            }
            (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
            pSVar4 = (pCVar9->fields).AttackAnimations;
            if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
            pSVar14 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar4[1].fields._values;
          }
          method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
          pCVar11 = pCVar9;
          fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3e3851ec);
        }
        else {
          if (fVar22 <= 0.47) {
            return;
          }
label_042fe47f:
          if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
            return;
          }
          (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
          pSVar4 = (pCVar9->fields).AttackAnimations;
          if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar14 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar4[1].fields._values;
label_042fe4af:
          method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
          pCVar11 = pCVar9;
          fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3db851ec);
        }
      }
      else {
        if (fVar22 <= 0.395) {
          return;
        }
        if ((pCVar9->fields)._startPosition.fields.z != 0.0) {
          return;
        }
        (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
        pSVar4 = (pCVar9->fields).AttackAnimations;
        if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar14 = pSVar4[2].klass;
        method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
        pCVar11 = pCVar9;
        fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3df5c28f);
      }
    }
    else {
      fVar23 = (pCVar9->fields)._startPosition.fields.z;
      if ((fVar22 <= 0.222) || (fVar23 != 0.0)) {
        if ((fVar22 <= 0.386) || (fVar23 != 1.4013e-45)) {
          if (fVar22 <= 0.612) {
            return;
          }
          if (fVar23 != 2.8026e-45) {
            return;
          }
          (pCVar9->fields)._startPosition.fields.z = 4.2039e-45;
          pSVar4 = (pCVar9->fields).AttackAnimations;
          if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
          pSVar14 = pSVar4[2].klass;
          method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
          pCVar11 = pCVar9;
          fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
          goto joined_r0x042fe570;
        }
        (pCVar9->fields)._startPosition.fields.z = 2.8026e-45;
        pSVar4 = (pCVar9->fields).AttackAnimations;
        if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pCVar15 = (Characters_BaseHitbox_o *)pSVar4[1].fields._values;
        method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
        pCVar11 = pCVar9;
        fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
        goto joined_r0x042fe402;
      }
      (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
      pSVar4 = (pCVar9->fields).AttackAnimations;
      if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pSVar14 = (System_Collections_Generic_Dictionary_string__string__c *)pSVar4[1].fields._values;
      method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
      pCVar11 = pCVar9;
      fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d23d70a);
    }
  }
  else {
    fVar23 = (pCVar9->fields)._startPosition.fields.z;
    if ((fVar22 <= 0.155) || (fVar23 != 0.0)) {
      if ((fVar22 <= 0.32) || (fVar23 != 1.4013e-45)) {
        if (fVar22 <= 0.59) {
          return;
        }
        if (fVar23 != 2.8026e-45) {
          return;
        }
        (pCVar9->fields)._startPosition.fields.z = 4.2039e-45;
        pSVar4 = (pCVar9->fields).AttackAnimations;
        if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
        pSVar14 = pSVar4[2].klass;
        method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
        pCVar11 = pCVar9;
        fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d4ccccd);
joined_r0x042fe570:
        if (pSVar14 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
          Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar14,0.0,fVar22,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x28);
          goto label_042fe509;
        }
        goto label_042fee19;
      }
      (pCVar9->fields)._startPosition.fields.z = 2.8026e-45;
      pSVar4 = (pCVar9->fields).AttackAnimations;
      if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
      pCVar15 = (Characters_BaseHitbox_o *)pSVar4[1].fields._syncRoot;
      method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
      pCVar11 = pCVar9;
      fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d75c28f);
joined_r0x042fe402:
      if (pCVar15 != (Characters_BaseHitbox_o *)0x0) {
        Characters_BaseHitbox__Activate(pCVar15,0.0,fVar22,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x20);
        goto label_042fe509;
      }
      goto label_042fee19;
    }
    (pCVar9->fields)._startPosition.fields.z = 1.4013e-45;
    pSVar4 = (pCVar9->fields).AttackAnimations;
    if (pSVar4 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_042fee19;
    pSVar14 = pSVar4[2].klass;
    method_00 = (pCVar9->klass->vtable)._167_GetHitboxTime.method;
    pCVar11 = pCVar9;
    fVar22 = (float)(*(pCVar9->klass->vtable)._167_GetHitboxTime.methodPtr)(0x3d8f5c29);
  }
joined_r0x042fe9fe:
  if (pSVar14 != (System_Collections_Generic_Dictionary_string__string__c *)0x0) {
    Characters_BaseHitbox__Activate((Characters_BaseHitbox_o *)pSVar14,0.0,fVar22,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x18);
label_042fe509:
    Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar9,pSVar19,(MethodInfo *)0x0);
    return;
  }
label_042fee19:
  fVar22 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar9 = pCVar11;
  if (g_data_057adf18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterSounds);
    pCVar9 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf18 = '\x01';
  }
  lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x40), lVar18 != 0)) {
    if ((*(char *)(lVar18 + 0x11) != '\0') &&
       (bVar8 = Utility_RandomGen__Roll(fVar22,(MethodInfo *)0x0), (char)bVar8 != '\0')) {
      if (*(int *)(TypeInfo_ShifterSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)pCVar11,
                 *(System_String_o **)(*(long *)(TypeInfo_ShifterSounds + 0xb8) + 0x18),(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar11 = pCVar9;
  if (g_data_057adf19 == '\0') {
    pCVar11 = (Characters_BaseTitan_o *)&"AttackComboBlind";
    il2cpp_runtime_helper_023445d0();
    g_data_057adf19 = '\x01';
  }
  lVar18 = *(long *)&(pCVar9->fields).EnableAI;
  if (lVar18 != 0) {
    bVar8 = System_String__op_Inequality
                      (*(System_String_o **)&(pCVar9->fields)._currentFallTotalTime,
                       *(System_String_o **)(lVar18 + 0x18),(MethodInfo *)0x0);
    if (((char)bVar8 != '\0') && ((pCVar9->fields)._jumpDirection.fields.x <= 0.0)) {
      (*(pCVar9->klass->vtable)._168_DamagedGrunt.methodPtr)
                (0x3f800000,pCVar9,(pCVar9->klass->vtable)._168_DamagedGrunt.method);
      (*(pCVar9->klass->vtable)._128_Attack.methodPtr)
                (pCVar9,"AttackComboBlind",(pCVar9->klass->vtable)._128_Attack.method);
      fVar22 = (float)(*(pCVar9->klass->vtable)._118_get_DisableCooldown.methodPtr)
                                (pCVar9,(pCVar9->klass->vtable)._118_get_DisableCooldown.method);
      (pCVar9->fields)._jumpDirection.fields.x = fVar22 + 2.0;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pCVar11->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (pCVar11->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor(pCVar11,method_00);
  return;
}


// Characters.BaseTitan$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_BaseTitan__GetCameraAnchor (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430d9f0

UnityEngine_Transform_o *
Characters_BaseTitan__GetCameraAnchor(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  UnityEngine_Transform_o *pUVar2;
  
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if (pSVar1 != (System_Action_Hashtable__o *)0x0) {
    return (UnityEngine_Transform_o *)(pSVar1->fields).extra_arg;
  }
  pUVar2 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_022b2c90();
  return pUVar2;
}


// Characters.BaseTitan$$UpdateDisableArm
// il2cpp: void Characters_BaseTitan__UpdateDisableArm (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430da10

void Characters_BaseTitan__UpdateDisableArm(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$DisableArm
// il2cpp: void Characters_BaseTitan__DisableArm (Characters_BaseTitan_o* __this, bool left, const MethodInfo* method);
// 0x430da20

void Characters_BaseTitan__DisableArm(Characters_BaseTitan_o *__this,bool_conflict left,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$UpdateTurn
// il2cpp: void Characters_BaseTitan__UpdateTurn (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430da30

void Characters_BaseTitan__UpdateTurn(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  code *vtableDispatch;
  UnityEngine_Rigidbody_o *__this_01;
  bool_conflict bVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar4;
  long *plVar5;
  System_String_o *a;
  undefined8 in_R8;
  undefined8 in_R9;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Quaternion_o UVar10;
  UnityEngine_Vector3_o UVar11;
  undefined1 auVar12 [16];
  float fStackY_88;
  float fStackY_84;
  float fStackY_68;
  float fStackY_58;
  float fStackY_54;
  undefined8 uVar13;
  
  fVar9 = (__this->fields)._turnStartRotation.fields.w;
  lVar4 = 0;
  fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar6 = fVar6 + fVar9;
  (__this->fields)._turnStartRotation.fields.w = fVar6;
  lVar2 = *(long *)&(__this->fields).Dead;
  if (lVar2 != 0) {
    __this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
    UVar10.fields.x = (__this->fields).TurnSpeed;
    UVar10.fields.y = (float)(__this->fields).LeftArmDisabled;
    UVar10.fields.z = (float)(__this->fields).RightArmDisabled;
    UVar10.fields.w = (__this->fields).LastTargetDirection.fields.x;
    fVar6 = fVar6 / (__this->fields)._turnStartRotation.fields.z;
    fVar9 = 1.0;
    if (fVar6 <= 1.0) {
      fVar9 = fVar6;
    }
    lVar4 = 0;
    UVar10 = UnityEngine_Quaternion__Slerp
                       (UVar10,*(UnityEngine_Quaternion_Fields *)
                                &(__this->fields).LastTargetDirection.fields.y,
                        (float)(-(uint)(0.0 <= fVar6) & (uint)fVar9),(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(__this_00,UVar10,(MethodInfo *)0x0);
      return;
    }
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  uVar13 = auVar12._0_8_;
  plVar5 = *(long **)(lVar4 + 0x150);
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x218);
    (*vtableDispatch)(plVar5,*(undefined8 *)(*plVar5 + 0x220),auVar12._8_8_,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar5 = (long *)plVar5[0x2a];
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x248);
    (*vtableDispatch)(plVar5,*(undefined8 *)(*plVar5 + 0x250),extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar5 = (long *)plVar5[0x2a];
  if (plVar5 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar5 + 0x238);
    (*vtableDispatch)
              (plVar5,*(undefined8 *)(*plVar5 + 0x240),extraout_RDX_00,vtableDispatch,in_R8,in_R9,
               uVar13);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf89 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    g_data_057adf89 = '\x01';
  }
  a = (System_String_o *)plVar5[0x42];
  bVar3 = System_String__op_Inequality(a,"AttackBellyFlop",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    a = (System_String_o *)plVar5[0x42];
    bVar3 = System_String__op_Inequality(a,"AttackRockThrow",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      fVar9 = 1.47;
      fStackY_68 = 1.47;
      goto joined_r0x0430dbe4;
    }
  }
  fVar9 = 1.0;
  fStackY_68 = 1.0;
joined_r0x0430dbe4:
  if (g_data_057a6844 == '\0') {
    a = (System_String_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6844 = '\x01';
    fStackY_68 = fVar9;
  }
  if ((plVar5[0xe] != 0) && (a = *(System_String_o **)(plVar5[0xe] + 0x18), a != (System_String_o *)0x0)) {
    uVar13 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar9 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    UVar11 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)a,(MethodInfo *)0x0);
    fVar6 = UVar11.fields.y;
    if (g_data_057ac31b == '\0') {
      a = (System_String_o *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0(UVar11.fields.x,UVar11.fields.z);
      g_data_057ac31b = '\x01';
    }
    if ((plVar5[0xe] != 0) &&
       (__this_01 = *(UnityEngine_Rigidbody_o **)(plVar5[0xe] + 0x18),
       __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
      fStackY_88 = (float)uVar13;
      fStackY_84 = (float)((ulong)uVar13 >> 0x20);
      uVar13 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
      fVar8 = *(float *)((long)plVar5 + 0x1dc) * 100.0;
      if (100.0 <= fVar8) {
        fVar8 = 100.0;
      }
      fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
      UVar11 = UnityEngine_Rigidbody__get_velocity(__this_01,(MethodInfo *)0x0);
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fStackY_68 = fStackY_68 * fVar7;
      fVar7 = 1.0;
      if (fStackY_68 <= 1.0) {
        fVar7 = fStackY_68;
      }
      fVar7 = (float)(-(uint)(0.0 <= fStackY_68) & (uint)fVar7);
      fStackY_58 = UVar11.fields.x;
      fStackY_54 = UVar11.fields.y;
      UVar11.fields.z = UVar11.fields.z + ((fVar8 * fVar1 + fVar9 * fVar6) - UVar11.fields.z) * fVar7;
      UVar11.fields.y =
           fStackY_54 + fVar7 * ((fVar8 * (float)((ulong)uVar13 >> 0x20) + fStackY_84 * fVar6) - fStackY_54);
      UVar11.fields.x = fStackY_58 + fVar7 * ((fVar8 * (float)uVar13 + fStackY_88 * fVar6) - fStackY_58);
      UnityEngine_Rigidbody__set_velocity(__this_01,UVar11,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (**(code **)&a->klass[3]._2.naturalAligment)(0x3e4ccccd);
  return;
}


// Characters.BaseTitan$$GetSitIdleAniamtion
// il2cpp: System_String_o* Characters_BaseTitan__GetSitIdleAniamtion (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430dad0

System_String_o * Characters_BaseTitan__GetSitIdleAniamtion(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  code *vtableDispatch;
  UnityEngine_Rigidbody_o *__this_00;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *extraout_RAX;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar6;
  float fVar7;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  float fStack_70;
  float fStack_6c;
  float fStack_50;
  float fStack_40;
  float fStack_3c;
  float fVar8;
  
  plVar6 = *(long **)&(__this->fields).TurnPause;
  if (plVar6 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar6 + 0x218);
    pSVar5 = (System_String_o *)
             (*vtableDispatch)(plVar6,*(undefined8 *)(*plVar6 + 0x220),in_RDX,vtableDispatch);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar6 = (long *)plVar6[0x2a];
  if (plVar6 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar6 + 0x248);
    pSVar5 = (System_String_o *)
             (*vtableDispatch)
                       (plVar6,*(undefined8 *)(*plVar6 + 0x250),extraout_RDX,vtableDispatch);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar6 = (long *)plVar6[0x2a];
  if (plVar6 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar6 + 0x238);
    pSVar5 = (System_String_o *)
             (*vtableDispatch)
                       (plVar6,*(undefined8 *)(*plVar6 + 0x240),extraout_RDX_00,vtableDispatch);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf89 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    g_data_057adf89 = '\x01';
  }
  pSVar5 = (System_String_o *)plVar6[0x42];
  bVar4 = System_String__op_Inequality(pSVar5,"AttackBellyFlop",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pSVar5 = (System_String_o *)plVar6[0x42];
    bVar4 = System_String__op_Inequality(pSVar5,"AttackRockThrow",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      fVar1 = 1.47;
      fStack_50 = 1.47;
      goto joined_r0x0430dbe4;
    }
  }
  fVar1 = 1.0;
  fStack_50 = 1.0;
joined_r0x0430dbe4:
  if (g_data_057a6844 == '\0') {
    pSVar5 = (System_String_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6844 = '\x01';
    fStack_50 = fVar1;
  }
  if ((plVar6[0xe] != 0) &&
     (pSVar5 = *(System_String_o **)(plVar6[0xe] + 0x18), pSVar5 != (System_String_o *)0x0)) {
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    UVar10 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)pSVar5,(MethodInfo *)0x0);
    fVar8 = UVar10.fields.y;
    if (g_data_057ac31b == '\0') {
      pSVar5 = (System_String_o *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0(UVar10.fields.x,UVar10.fields.z);
      g_data_057ac31b = '\x01';
    }
    if ((plVar6[0xe] != 0) &&
       (__this_00 = *(UnityEngine_Rigidbody_o **)(plVar6[0xe] + 0x18),
       __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      fStack_70 = (float)uVar3;
      fStack_6c = (float)((ulong)uVar3 >> 0x20);
      uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
      fVar9 = *(float *)((long)plVar6 + 0x1dc) * 100.0;
      if (100.0 <= fVar9) {
        fVar9 = 100.0;
      }
      fVar2 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
      UVar10 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fStack_50 = fStack_50 * fVar7;
      fVar7 = 1.0;
      if (fStack_50 <= 1.0) {
        fVar7 = fStack_50;
      }
      fVar7 = (float)(-(uint)(0.0 <= fStack_50) & (uint)fVar7);
      fStack_40 = UVar10.fields.x;
      fStack_3c = UVar10.fields.y;
      UVar10.fields.z = UVar10.fields.z + ((fVar9 * fVar2 + fVar1 * fVar8) - UVar10.fields.z) * fVar7;
      UVar10.fields.y =
           fStack_3c + fVar7 * ((fVar9 * (float)((ulong)uVar3 >> 0x20) + fStack_6c * fVar8) - fStack_3c);
      UVar10.fields.x = fStack_40 + fVar7 * ((fVar9 * (float)uVar3 + fStack_70 * fVar8) - fStack_40);
      UnityEngine_Rigidbody__set_velocity(__this_00,UVar10,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar5 = (System_String_o *)(**(code **)&pSVar5->klass[3]._2.naturalAligment)(0x3e4ccccd);
  return pSVar5;
}


// Characters.BaseTitan$$GetSitFallAnimation
// il2cpp: System_String_o* Characters_BaseTitan__GetSitFallAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430db00

System_String_o * Characters_BaseTitan__GetSitFallAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  UnityEngine_Rigidbody_o *__this_00;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *extraout_RAX;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  long *plVar6;
  float fVar7;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  float fStack_68;
  float fStack_64;
  float fStack_48;
  float fStack_38;
  float fStack_34;
  float fVar8;
  
  plVar6 = *(long **)&(__this->fields).TurnPause;
  if (plVar6 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x248);
    pSVar5 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar6,*(undefined8 *)(*plVar6 + 0x250),in_RDX,UNRECOVERED_JUMPTABLE_00);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar6 = (long *)plVar6[0x2a];
  if (plVar6 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar6 + 0x238);
    pSVar5 = (System_String_o *)
             (*UNRECOVERED_JUMPTABLE_00)
                       (plVar6,*(undefined8 *)(*plVar6 + 0x240),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf89 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    g_data_057adf89 = '\x01';
  }
  pSVar5 = (System_String_o *)plVar6[0x42];
  bVar4 = System_String__op_Inequality(pSVar5,"AttackBellyFlop",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pSVar5 = (System_String_o *)plVar6[0x42];
    bVar4 = System_String__op_Inequality(pSVar5,"AttackRockThrow",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      fVar1 = 1.47;
      fStack_48 = 1.47;
      goto joined_r0x0430dbe4;
    }
  }
  fVar1 = 1.0;
  fStack_48 = 1.0;
joined_r0x0430dbe4:
  if (g_data_057a6844 == '\0') {
    pSVar5 = (System_String_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6844 = '\x01';
    fStack_48 = fVar1;
  }
  if ((plVar6[0xe] != 0) &&
     (pSVar5 = *(System_String_o **)(plVar6[0xe] + 0x18), pSVar5 != (System_String_o *)0x0)) {
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    UVar10 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)pSVar5,(MethodInfo *)0x0);
    fVar8 = UVar10.fields.y;
    if (g_data_057ac31b == '\0') {
      pSVar5 = (System_String_o *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0(UVar10.fields.x,UVar10.fields.z);
      g_data_057ac31b = '\x01';
    }
    if ((plVar6[0xe] != 0) &&
       (__this_00 = *(UnityEngine_Rigidbody_o **)(plVar6[0xe] + 0x18),
       __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      fStack_68 = (float)uVar3;
      fStack_64 = (float)((ulong)uVar3 >> 0x20);
      uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
      fVar9 = *(float *)((long)plVar6 + 0x1dc) * 100.0;
      if (100.0 <= fVar9) {
        fVar9 = 100.0;
      }
      fVar2 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
      UVar10 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fStack_48 = fStack_48 * fVar7;
      fVar7 = 1.0;
      if (fStack_48 <= 1.0) {
        fVar7 = fStack_48;
      }
      fVar7 = (float)(-(uint)(0.0 <= fStack_48) & (uint)fVar7);
      fStack_38 = UVar10.fields.x;
      fStack_34 = UVar10.fields.y;
      UVar10.fields.z = UVar10.fields.z + ((fVar9 * fVar2 + fVar1 * fVar8) - UVar10.fields.z) * fVar7;
      UVar10.fields.y =
           fStack_34 + fVar7 * ((fVar9 * (float)((ulong)uVar3 >> 0x20) + fStack_64 * fVar8) - fStack_34);
      UVar10.fields.x = fStack_38 + fVar7 * ((fVar9 * (float)uVar3 + fStack_68 * fVar8) - fStack_38);
      UnityEngine_Rigidbody__set_velocity(__this_00,UVar10,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar5 = (System_String_o *)(**(code **)&pSVar5->klass[3]._2.naturalAligment)(0x3e4ccccd);
  return pSVar5;
}


// Characters.BaseTitan$$GetSitUpAnimation
// il2cpp: System_String_o* Characters_BaseTitan__GetSitUpAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430db30

System_String_o * Characters_BaseTitan__GetSitUpAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  code *vtableDispatch;
  UnityEngine_Rigidbody_o *__this_00;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *extraout_RAX;
  undefined8 in_RDX;
  long *plVar6;
  float fVar7;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  float fStack_60;
  float fStack_5c;
  float fStack_40;
  float fStack_30;
  float fStack_2c;
  float fVar8;
  
  plVar6 = *(long **)&(__this->fields).TurnPause;
  if (plVar6 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar6 + 0x238);
    pSVar5 = (System_String_o *)
             (*vtableDispatch)(plVar6,*(undefined8 *)(*plVar6 + 0x240),in_RDX,vtableDispatch);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf89 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    g_data_057adf89 = '\x01';
  }
  pSVar5 = (System_String_o *)plVar6[0x42];
  bVar4 = System_String__op_Inequality(pSVar5,"AttackBellyFlop",(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pSVar5 = (System_String_o *)plVar6[0x42];
    bVar4 = System_String__op_Inequality(pSVar5,"AttackRockThrow",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      fVar1 = 1.47;
      fStack_40 = 1.47;
      goto joined_r0x0430dbe4;
    }
  }
  fVar1 = 1.0;
  fStack_40 = 1.0;
joined_r0x0430dbe4:
  if (g_data_057a6844 == '\0') {
    pSVar5 = (System_String_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6844 = '\x01';
    fStack_40 = fVar1;
  }
  if ((plVar6[0xe] != 0) &&
     (pSVar5 = *(System_String_o **)(plVar6[0xe] + 0x18), pSVar5 != (System_String_o *)0x0)) {
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    UVar10 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)pSVar5,(MethodInfo *)0x0);
    fVar8 = UVar10.fields.y;
    if (g_data_057ac31b == '\0') {
      pSVar5 = (System_String_o *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0(UVar10.fields.x,UVar10.fields.z);
      g_data_057ac31b = '\x01';
    }
    if ((plVar6[0xe] != 0) &&
       (__this_00 = *(UnityEngine_Rigidbody_o **)(plVar6[0xe] + 0x18),
       __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      fStack_60 = (float)uVar3;
      fStack_5c = (float)((ulong)uVar3 >> 0x20);
      uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
      fVar9 = *(float *)((long)plVar6 + 0x1dc) * 100.0;
      if (100.0 <= fVar9) {
        fVar9 = 100.0;
      }
      fVar2 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
      UVar10 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fStack_40 = fStack_40 * fVar7;
      fVar7 = 1.0;
      if (fStack_40 <= 1.0) {
        fVar7 = fStack_40;
      }
      fVar7 = (float)(-(uint)(0.0 <= fStack_40) & (uint)fVar7);
      fStack_30 = UVar10.fields.x;
      fStack_2c = UVar10.fields.y;
      UVar10.fields.z = UVar10.fields.z + ((fVar9 * fVar2 + fVar1 * fVar8) - UVar10.fields.z) * fVar7;
      UVar10.fields.y =
           fStack_2c + fVar7 * ((fVar9 * (float)((ulong)uVar3 >> 0x20) + fStack_5c * fVar8) - fStack_2c);
      UVar10.fields.x = fStack_30 + fVar7 * ((fVar9 * (float)uVar3 + fStack_60 * fVar8) - fStack_30);
      UnityEngine_Rigidbody__set_velocity(__this_00,UVar10,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar5 = (System_String_o *)(**(code **)&pSVar5->klass[3]._2.naturalAligment)(0x3e4ccccd);
  return pSVar5;
}


// Characters.BaseTitan$$SetDefaultVelocityLerp
// il2cpp: void Characters_BaseTitan__SetDefaultVelocityLerp (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430db60

void Characters_BaseTitan__SetDefaultVelocityLerp(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  UnityEngine_Rigidbody_o *__this_00;
  bool_conflict bVar5;
  System_String_o *a;
  float fVar6;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  float local_58;
  float fStack_54;
  float local_38;
  float local_28;
  float fStack_24;
  float fVar7;
  
  if (g_data_057adf89 == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackBellyFlop");
    il2cpp_runtime_helper_023445d0(&"AttackRockThrow");
    g_data_057adf89 = '\x01';
  }
  a = *(System_String_o **)&(__this->fields)._disableCooldownLeft;
  bVar5 = System_String__op_Inequality(a,"AttackBellyFlop",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    a = *(System_String_o **)&(__this->fields)._disableCooldownLeft;
    bVar5 = System_String__op_Inequality(a,"AttackRockThrow",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      fVar1 = 1.47;
      local_38 = 1.47;
      goto joined_r0x0430dbe4;
    }
  }
  fVar1 = 1.0;
  local_38 = 1.0;
joined_r0x0430dbe4:
  if (g_data_057a6844 == '\0') {
    a = (System_String_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a6844 = '\x01';
    local_38 = fVar1;
  }
  lVar4 = *(long *)&(__this->fields).Dead;
  if ((lVar4 != 0) && (a = *(System_String_o **)(lVar4 + 0x18), a != (System_String_o *)0x0)) {
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    UVar9 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)a,(MethodInfo *)0x0);
    fVar7 = UVar9.fields.y;
    if (g_data_057ac31b == '\0') {
      a = (System_String_o *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0(UVar9.fields.x,UVar9.fields.z);
      g_data_057ac31b = '\x01';
    }
    lVar4 = *(long *)&(__this->fields).Dead;
    if ((lVar4 != 0) &&
       (__this_00 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18), __this_00 != (UnityEngine_Rigidbody_o *)0x0))
    {
      local_58 = (float)uVar3;
      fStack_54 = (float)((ulong)uVar3 >> 0x20);
      uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
      fVar8 = (__this->fields)._turnTargetRotation.fields.x * 100.0;
      if (100.0 <= fVar8) {
        fVar8 = 100.0;
      }
      fVar2 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
      UVar9 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
      fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      local_38 = local_38 * fVar6;
      fVar6 = 1.0;
      if (local_38 <= 1.0) {
        fVar6 = local_38;
      }
      fVar6 = (float)(-(uint)(0.0 <= local_38) & (uint)fVar6);
      local_28 = UVar9.fields.x;
      fStack_24 = UVar9.fields.y;
      UVar9.fields.z = UVar9.fields.z + ((fVar8 * fVar2 + fVar1 * fVar7) - UVar9.fields.z) * fVar6;
      UVar9.fields.y =
           fStack_24 + fVar6 * ((fVar8 * (float)((ulong)uVar3 >> 0x20) + fStack_54 * fVar7) - fStack_24);
      UVar9.fields.x = local_28 + fVar6 * ((fVar8 * (float)uVar3 + local_58 * fVar7) - local_28);
      UnityEngine_Rigidbody__set_velocity(__this_00,UVar9,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (**(code **)&a->klass[3]._2.naturalAligment)(0x3e4ccccd);
  return;
}


// Characters.BaseTitan$$Update
// il2cpp: void Characters_BaseTitan__Update (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x43019e0

void Characters_BaseTitan__Update(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *pCVar2;
  System_Action_Hashtable__o *pSVar3;
  long lVar4;
  UnityEngine_Transform_o *pUVar5;
  undefined1 auVar6 [16];
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  int iVar10;
  int32_t iVar11;
  System_String_o *pSVar12;
  Characters_BaseTitan_c *pCVar13;
  MethodInfo *pMVar14;
  long *__this_00;
  Characters_BaseTitan_o *pCVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar22;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o origin_00;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o position;
  undefined8 local_130;
  undefined8 local_e8;
  UnityEngine_LayerMask_Fields local_d0 [2];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  UnityEngine_RaycastHit_o local_78;
  UnityEngine_RaycastHit_o local_48;
  
  if (g_data_057adf8a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf8a = '\x01';
  }
  local_48.fields.m_UV.fields.x = 0.0;
  local_48.fields.m_UV.fields.y = 0.0;
  local_48.fields.m_Collider = 0;
  local_48.fields.m_Normal.fields.y = 0.0;
  local_48.fields.m_Normal.fields.z = 0.0;
  local_48.fields.m_FaceID = 0;
  local_48.fields.m_Distance = 0.0;
  local_48.fields.m_Point.fields.x = 0.0;
  local_48.fields.m_Point.fields.y = 0.0;
  local_48.fields.m_Point.fields.z = 0.0;
  local_48.fields.m_Normal.fields.x = 0.0;
  local_d0[0].m_Mask = 0;
  local_78.fields.m_UV.fields.x = 0.0;
  local_78.fields.m_UV.fields.y = 0.0;
  local_78.fields.m_Collider = 0;
  local_78.fields.m_Normal.fields.y = 0.0;
  local_78.fields.m_Normal.fields.z = 0.0;
  local_78.fields.m_FaceID = 0;
  local_78.fields.m_Distance = 0.0;
  local_78.fields.m_Point.fields.x = 0.0;
  local_78.fields.m_Point.fields.y = 0.0;
  local_78.fields.m_Point.fields.z = 0.0;
  local_78.fields.m_Normal.fields.x = 0.0;
  (*(__this->klass->vtable)._152_UpdateDisableArm.methodPtr)
            (__this,(__this->klass->vtable)._152_UpdateDisableArm.method);
  (*(__this->klass->vtable)._171_UpdateAnimationColliders.methodPtr)(__this);
  bVar8 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  if (*(char *)&(__this->fields)._previousCoreLocalPosition.fields.y == '\0') {
    return;
  }
  fVar18 = (__this->fields)._jumpDirection.fields.x;
  fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._jumpDirection.fields.x = fVar18 - fVar16;
  fVar18 = (__this->fields)._jumpDirection.fields.z;
  __this_00 = (long *)0x0;
  fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._jumpDirection.fields.z = fVar18 - fVar16;
  cVar7 = (char)(__this->fields).CustomDamage;
  uVar9 = *(uint *)&(__this->fields).OutlineComponent;
  if (((cVar7 == '\0') && (uVar9 - 1 < 3)) &&
     (local_98 = CONCAT44(local_98._4_4_,(float)local_98),
     *(char *)((long)&(__this->fields).State + 2) != '\0')) {
label_04301b13:
    plVar1 = *(long **)&(__this->fields).TurnPause;
    __this_00 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      pSVar12 = (System_String_o *)(**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      __this_00 = (long *)0x0;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        local_e8._0_4_ = Characters_AnimationHandler__GetLength(pCVar2,pSVar12,(MethodInfo *)0x0);
        *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
        pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        __this_00 = (long *)0x0;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
          (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar12,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(__this->fields).OutlineComponent = 0x14;
          goto label_04301bbd;
        }
      }
    }
    goto label_04302833;
  }
  if ((uVar9 & 0xfffffffe) == 6) {
    if (((cVar7 != '\0') || (*(char *)((long)&(__this->fields).Detection + 4) == '\0')) ||
       ((*(char *)((long)&(__this->fields).State + 1) == '\0' || ((__this->fields).ClimbCooldown <= 1.0)))) {
label_04301bf7:
      uVar9 = *(uint *)&(__this->fields).OutlineComponent;
      goto label_04301bfd;
    }
    lVar4 = *(long *)&(__this->fields).Dead;
    local_98 = CONCAT44(local_98._4_4_,(float)local_98);
    if ((lVar4 != 0) &&
       (__this_00 = *(long **)(lVar4 + 0x10), local_98 = CONCAT44(local_98._4_4_,(float)local_98),
       (Characters_BaseTitan_o *)__this_00 != (Characters_BaseTitan_o *)0x0)) {
      UVar24 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
      fVar18 = UVar24.fields.z;
      if (g_data_057a6844 == '\0') {
        __this_00 = &TypeInfo_Vector3;
        local_c8._0_4_ = UVar24.fields.z;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6844 = '\x01';
        fVar18 = (float)local_c8._0_4_;
      }
      lVar4 = *(long *)&(__this->fields).Dead;
      local_98 = CONCAT44(local_98._4_4_,(float)local_98);
      if (lVar4 != 0) {
        pCVar15 = *(Characters_BaseTitan_o **)(lVar4 + 0x10);
        __this_00 = (long *)0x0;
        local_98 = CONCAT44(local_98._4_4_,(float)local_98);
        if (pCVar15 != (Characters_BaseTitan_o *)0x0) {
          uVar19 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar16 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
          local_c8._0_4_ = fVar18 + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 3.0 * fVar16;
          pMVar14 = (MethodInfo *)0x0;
          UVar23 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)pCVar15,(MethodInfo *)0x0);
          uStack_a0 = extraout_XMM0_Dc;
          local_a8 = (undefined1  [8])UVar23.fields._0_8_;
          uStack_9c = extraout_XMM0_Dd;
          local_b8._0_4_ = *(undefined4 *)((long)&(__this->fields).TitanColliderToggler + 4);
          local_d0[0].m_Mask = (int32_t)Characters_BaseTitan__get_MapObjectMask(pCVar15,pMVar14);
          iVar11 = UnityEngine_LayerMask__get_value
                             ((UnityEngine_LayerMask_Fields)(int32_t)local_d0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          auVar6 = _local_a8;
          origin.fields.z = (float)local_c8._0_4_;
          origin.fields.x = UVar24.fields.x + fVar16 * (float)uVar19 * 3.0;
          origin.fields.y = UVar24.fields.y + fVar16 * (float)((ulong)uVar19 >> 0x20) * 3.0;
          UVar24.fields.z = UVar23.fields.z;
          UVar24.fields.x = (float)local_a8._0_4_;
          UVar24.fields.y = (float)local_a8._4_4_;
          _local_a8 = auVar6;
          bVar8 = UnityEngine_Physics__Raycast_4e776c0
                            (origin,UVar24,&local_48,(float)local_b8._0_4_ * 5.0,iVar11,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            (*(__this->klass->vtable)._135_WallClimb.methodPtr)();
          }
          goto label_04301bf7;
        }
      }
    }
    goto label_04302833;
  }
label_04301bfd:
  if ((uVar9 == 0x19) || (uVar9 == 2)) {
    fVar18 = (__this->fields).Size;
    local_c8 = ZEXT416((uint)(__this->fields).ClimbCooldown);
    fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar18 = (float)local_c8._0_4_ - fVar16 * fVar18;
  }
  else {
    local_c8._0_4_ = (__this->fields).HoldHumanLeft;
    fVar18 = (__this->fields).ClimbCooldown;
    fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar18 = fVar16 * (float)local_c8._0_4_ + fVar18;
  }
  (__this->fields).ClimbCooldown = fVar18;
  fVar16 = *(float *)((long)&(__this->fields).HoldHuman + 4);
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  fVar18 = (float)(-(uint)(0.0 <= fVar18) & (uint)fVar16);
  (__this->fields).ClimbCooldown = fVar18;
  iVar10 = *(int *)&(__this->fields).OutlineComponent;
  if (iVar10 == 0x19) {
    if ((0.0 < fVar18) && (*(char *)((long)&(__this->fields).State + 1) != '\0')) {
      return;
    }
    (*(__this->klass->vtable)._139_Idle.methodPtr)(0x3e4ccccd);
    iVar10 = *(int *)&(__this->fields).OutlineComponent;
  }
  local_98 = CONCAT44(local_98._4_4_,(float)local_98);
  switch(iVar10) {
  case 4:
    local_98 = CONCAT44(local_98._4_4_,(float)local_98);
    if ((char)(__this->fields).CustomDamage != '\0') break;
    __this_00 = (long *)__this;
    uVar19 = (*(__this->klass->vtable)._66_GetAimPoint.methodPtr)();
    fVar18 = (float)((ulong)uVar19 >> 0x20);
    pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
    local_98 = CONCAT44(local_98._4_4_,(float)local_98);
    if (pSVar3 != (System_Action_Hashtable__o *)0x0) {
      local_c8._0_4_ = fVar16;
      pUVar5 = (UnityEngine_Transform_o *)(pSVar3->fields).extra_arg;
      __this_00 = (long *)0x0;
      local_98 = CONCAT44(local_98._4_4_,(float)local_98);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        UVar24 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        fVar17 = UVar24.fields.y;
        fVar16 = UVar24.fields.x;
        local_a8._0_4_ = fVar18;
        local_a8._4_4_ = fVar18;
        uStack_a0 = extraout_XMM0_Dc_00;
        uStack_9c = extraout_XMM0_Dd_00;
        if (g_data_057a6841 == '\0') {
          local_b8._8_4_ = extraout_XMM0_Dc_01;
          local_b8._0_8_ = UVar24.fields._0_8_;
          local_b8._12_4_ = extraout_XMM0_Dd_01;
          local_98._0_4_ = fVar17;
          local_98._4_4_ = fVar17;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          fVar16 = (float)local_b8._0_4_;
          fVar17 = (float)local_98;
        }
        fVar16 = (float)uVar19 - fVar16;
        local_a8._0_4_ = (float)local_a8._0_4_ - fVar17;
        fVar18 = (float)local_c8._0_4_ - UVar24.fields.z;
        local_c8._0_4_ = fVar18;
        fVar17 = (float)local_a8._0_4_;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          fVar18 = (float)local_c8._0_4_;
          fVar17 = (float)local_a8._0_4_;
        }
        fVar17 = fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16;
        fVar18 = 0.0;
        if (fVar17 < 0.0) {
          fVar17 = sqrtf(fVar17);
        }
        else {
          fVar17 = SQRT(fVar17);
        }
        fVar17 = fVar17 / (__this->fields).ConfusedTime;
        uVar20 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)(__this);
        uVar19 = CONCAT44(local_98._4_4_,(float)local_98);
        local_98 = uVar20;
        if (g_data_057a6841 == '\0') {
          local_b8._0_4_ = fVar18;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          fVar18 = (float)local_b8._0_4_;
          uVar19 = local_98;
        }
        uVar21 = (undefined4)((ulong)local_98 >> 0x20);
        uVar20 = local_98;
        if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
          local_b8._0_4_ = fVar18;
          local_88 = uVar21;
          uStack_84 = uVar21;
          il2cpp_runtime_helper_02337ed0();
          uVar20 = CONCAT44(local_88,(float)local_98);
          fVar18 = (float)local_b8._0_4_;
          uVar19 = local_98;
        }
        fVar22 = (float)((ulong)uVar20 >> 0x20);
        fVar18 = fVar18 * fVar18 + fVar22 * fVar22 + (float)uVar20 * (float)uVar20;
        local_98 = uVar19;
        if (fVar18 < 0.0) {
          fVar18 = sqrtf(fVar18);
        }
        else {
          fVar18 = SQRT(fVar18);
        }
        *(ulong *)&(__this->fields)._wallClimbForward.fields.z =
             CONCAT44((float)local_a8._0_4_ + fVar18 * 0.5 * fVar17 * fVar17,fVar16);
        (__this->fields)._turnStartRotation.fields.y = (float)local_c8._0_4_;
        break;
      }
    }
    goto label_04302833;
  case 6:
  case 7:
  case 0xf:
  case 0x19:
    return;
  case 10:
    (*(__this->klass->vtable)._161_UpdateAttack.methodPtr)();
    local_98 = CONCAT44(local_98._4_4_,(float)local_98);
    break;
  case 0x17:
  case 0x1b:
    (*(__this->klass->vtable)._162_UpdateEat.methodPtr)();
    local_98 = CONCAT44(local_98._4_4_,(float)local_98);
    break;
  case 0x18:
    (*(__this->klass->vtable)._154_UpdateTurn.methodPtr)();
    local_98 = CONCAT44(local_98._4_4_,(float)local_98);
  }
  fVar18 = (__this->fields)._currentCrippleTime;
  __this_00 = (long *)0x0;
  fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar18 = fVar18 - fVar16;
  (__this->fields)._currentCrippleTime = fVar18;
  if (0.0 < fVar18) {
    return;
  }
  iVar10 = *(int *)&(__this->fields).OutlineComponent;
  if (iVar10 == 10) {
    __this_00 = (long *)(__this->fields).BaseTitanCache;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      (*(__this->klass->vtable)._136_Eat.methodPtr)(__this,(__this->klass->vtable)._136_Eat.method);
      return;
    }
    iVar10 = *(int *)&(__this->fields).OutlineComponent;
  }
  switch(iVar10) {
  case 0:
    if (*(char *)((long)&(__this->fields).Detection + 4) != '\0') {
      cVar7 = *(char *)((long)&(__this->fields).State + 1);
      if ((char)(__this->fields).State == '\0') {
        if (cVar7 == '\0') goto label_0430281b;
      }
      else if (cVar7 == '\0') goto label_043027e8;
      if (1.0 < (__this->fields).ClimbCooldown) {
        cVar7 = (*(__this->klass->vtable)._112_get_CanSprint.methodPtr)
                          (__this,(__this->klass->vtable)._112_get_CanSprint.method);
        if (cVar7 != '\0') {
label_043027c3:
          (*(__this->klass->vtable)._134_Sprint.methodPtr)(__this,(__this->klass->vtable)._134_Sprint.method);
          return;
        }
      }
      goto label_0430281b;
    }
    if (*(char *)((long)&(__this->fields).State + 2) == '\0') {
      return;
    }
    plVar1 = *(long **)&(__this->fields).TurnPause;
    __this_00 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      pSVar12 = (System_String_o *)(**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
      bVar8 = System_String__op_Inequality(pSVar12,"",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      goto label_04301b13;
    }
    break;
  case 1:
    if (*(char *)((long)&(__this->fields).Detection + 4) == '\0') goto label_04302506;
    if (*(char *)((long)&(__this->fields).State + 1) != '\0') {
      cVar7 = (*(__this->klass->vtable)._112_get_CanSprint.methodPtr)
                        (__this,(__this->klass->vtable)._112_get_CanSprint.method);
      if (cVar7 == '\0') {
        return;
      }
      if ((__this->fields).ClimbCooldown <= 1.0) {
        return;
      }
      goto label_043027c3;
    }
    if ((char)(__this->fields).State == '\0') {
      return;
    }
label_043027e8:
    pCVar13 = __this->klass;
label_043027f9:
    (*(pCVar13->vtable)._137_Walk.methodPtr)(__this,(pCVar13->vtable)._137_Walk.method);
    return;
  case 2:
    if ((char)(__this->fields).CustomDamage != '\0') {
label_04302380:
      if (*(char *)((long)&(__this->fields).Detection + 4) == '\0') {
label_04302506:
        (*(__this->klass->vtable)._139_Idle.methodPtr)
                  (0x3e4ccccd,__this,(__this->klass->vtable)._139_Idle.method);
        return;
      }
      if (*(char *)((long)&(__this->fields).State + 1) == '\0') {
        pCVar13 = __this->klass;
        if ((char)(__this->fields).State != '\0') goto label_043027f9;
        goto label_0430281e;
      }
      if (0.0 < (__this->fields).ClimbCooldown) {
        return;
      }
      goto label_0430281b;
    }
    lVar4 = *(long *)&(__this->fields).Dead;
    if ((lVar4 != 0) &&
       (__this_00 = *(long **)(lVar4 + 0x10),
       (Characters_BaseTitan_o *)__this_00 != (Characters_BaseTitan_o *)0x0)) {
      UVar24 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
      fVar18 = UVar24.fields.z;
      if (g_data_057a6844 == '\0') {
        __this_00 = &TypeInfo_Vector3;
        local_c8._0_4_ = UVar24.fields.z;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6844 = '\x01';
        fVar18 = (float)local_c8._0_4_;
      }
      lVar4 = *(long *)&(__this->fields).Dead;
      if (lVar4 != 0) {
        pCVar15 = *(Characters_BaseTitan_o **)(lVar4 + 0x10);
        __this_00 = (long *)0x0;
        if (pCVar15 != (Characters_BaseTitan_o *)0x0) {
          uVar19 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar16 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
          local_c8._0_4_ = fVar18 + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 3.0 * fVar16;
          pMVar14 = (MethodInfo *)0x0;
          UVar23 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)pCVar15,(MethodInfo *)0x0);
          uStack_a0 = extraout_XMM0_Dc_02;
          local_a8 = (undefined1  [8])UVar23.fields._0_8_;
          uStack_9c = extraout_XMM0_Dd_02;
          local_b8._0_4_ = *(undefined4 *)((long)&(__this->fields).TitanColliderToggler + 4);
          local_d0[0].m_Mask = (int32_t)Characters_BaseTitan__get_MapObjectMask(pCVar15,pMVar14);
          iVar11 = UnityEngine_LayerMask__get_value
                             ((UnityEngine_LayerMask_Fields)(int32_t)local_d0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          auVar6 = _local_a8;
          origin_00.fields.z = (float)local_c8._0_4_;
          origin_00.fields.x = UVar24.fields.x + fVar16 * (float)uVar19 * 3.0;
          origin_00.fields.y = UVar24.fields.y + fVar16 * (float)((ulong)uVar19 >> 0x20) * 3.0;
          UVar23.fields.z = UVar23.fields.z;
          UVar23.fields.x = (float)local_a8._0_4_;
          UVar23.fields.y = (float)local_a8._4_4_;
          _local_a8 = auVar6;
          bVar8 = UnityEngine_Physics__Raycast_4e776c0
                            (origin_00,UVar23,&local_78,(float)local_b8._0_4_ * 5.0,iVar11,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            (*(__this->klass->vtable)._135_WallClimb.methodPtr)
                      (__this,(__this->klass->vtable)._135_WallClimb.method);
          }
          goto label_04302380;
        }
      }
    }
    break;
  case 3:
    if (*(char *)((long)&(__this->fields).Detection + 4) == '\0') goto label_04302506;
    if (*(char *)((long)&(__this->fields).State + 1) != '\0') {
      if ((__this->fields).ClimbCooldown <= 1.0) {
        return;
      }
      cVar7 = (*(__this->klass->vtable)._112_get_CanSprint.methodPtr)
                        (__this,(__this->klass->vtable)._112_get_CanSprint.method);
      if (cVar7 == '\0') {
        return;
      }
      goto label_043027c3;
    }
    if ((char)(__this->fields).State != '\0') {
      return;
    }
label_0430281b:
    pCVar13 = __this->klass;
label_0430281e:
    (*(pCVar13->vtable)._133_Run.methodPtr)(__this,(pCVar13->vtable)._133_Run.method);
    return;
  case 4:
    (*(__this->klass->vtable)._127_StartJump.methodPtr)(__this,(__this->klass->vtable)._127_StartJump.method);
    return;
  case 5:
    *(undefined4 *)&(__this->fields).OutlineComponent = 6;
    return;
  default:
    (*(__this->klass->vtable)._138_Idle.methodPtr)(__this,(__this->klass->vtable)._138_Idle.method);
    return;
  case 8:
  case 0x10:
  case 0x15:
    pCVar13 = __this->klass;
    pMVar14 = (pCVar13->vtable)._140_IdleWait.method;
    bVar8 = 0x3e99999a;
    goto label_043024ae;
  case 9:
  case 0x1a:
    bVar8 = (__this->fields).IsSit;
    goto label_043024a4;
  case 10:
  case 0x17:
    bVar8 = *(bool_conflict *)&(__this->fields).field_0x11c;
    goto label_043024a4;
  case 0xb:
    pCVar13 = __this->klass;
    pMVar14 = (pCVar13->vtable)._140_IdleWait.method;
    bVar8 = 0x3e4ccccd;
    goto label_043024ae;
  case 0x11:
    goto switchD_04302177_caseD_11;
  case 0x12:
    plVar1 = *(long **)&(__this->fields).TurnPause;
    __this_00 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      pSVar12 = (System_String_o *)(**(code **)(*plVar1 + 0x218))();
      *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      __this_00 = (long *)0x0;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
        (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar12,0.3,0.0,(MethodInfo *)0x0);
        *(undefined4 *)&(__this->fields).OutlineComponent = 0x16;
        *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar12;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar12);
        (__this->fields)._currentCrippleTime = 0.3;
        return;
      }
    }
    break;
  case 0x13:
    pSVar12 = (System_String_o *)(*(__this->klass->vtable)._155_GetSitIdleAniamtion.methodPtr)(__this);
    fVar18 = (__this->fields)._turnTargetRotation.fields.y;
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    __this_00 = (long *)0x0;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,pSVar12,0.1,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 0x11;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar12;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar12);
      (__this->fields)._currentCrippleTime = fVar18;
      return;
    }
    break;
  case 0x14:
    pSVar12 = (System_String_o *)(*(__this->klass->vtable)._155_GetSitIdleAniamtion.methodPtr)(__this);
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    __this_00 = (long *)0x0;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,pSVar12,0.1,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 0x16;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar12;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar12);
      (__this->fields)._currentCrippleTime = 0.0;
      return;
    }
    break;
  case 0x16:
    if ((*(char *)((long)&(__this->fields).Detection + 4) == '\0') &&
       (*(char *)((long)&(__this->fields).State + 2) != '\0')) {
      return;
    }
    goto switchD_04302177_caseD_11;
  case 0x18:
    bVar8 = *(bool_conflict *)&(__this->fields).HoldHuman;
label_043024a4:
    pCVar13 = __this->klass;
    pMVar14 = (pCVar13->vtable)._140_IdleWait.method;
label_043024ae:
    (*(pCVar13->vtable)._140_IdleWait.methodPtr)(bVar8,__this,pMVar14);
    return;
  }
label_04302833:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&"Roar");
    g_data_057adf32 = '\x01';
  }
  if (*(char *)((long)&(((Characters_BaseTitan_o *)__this_00)->fields)._previousCoreLocalPosition.fields.y + 1
               ) == '\0') {
    plVar1 = *(long **)&(((Characters_BaseTitan_o *)__this_00)->fields).TurnPause;
    if (plVar1 == (long *)0x0) goto label_04302abd;
    pSVar12 = (System_String_o *)(**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
    pCVar2 = *(Characters_AnimationHandler_o **)&(((Characters_BaseTitan_o *)__this_00)->fields)._cameraFPS;
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_04302abd;
    fVar18 = Characters_AnimationHandler__GetLength(pCVar2,pSVar12,(MethodInfo *)0x0);
    *(undefined1 *)&(((Characters_BaseTitan_o *)__this_00)->fields)._stateTimeLeft = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(((Characters_BaseTitan_o *)__this_00)->fields)._cameraFPS;
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_04302abd;
    Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
    (*(((Characters_BaseTitan_o *)__this_00)->klass->vtable)._148_Ungrab.methodPtr)
              (__this_00,(((Characters_BaseTitan_o *)__this_00)->klass->vtable)._148_Ungrab.method);
    (*(((Characters_BaseTitan_o *)__this_00)->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
              (__this_00,
               (((Characters_BaseTitan_o *)__this_00)->klass->vtable)._163_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this_00,pSVar12,0.1,0.0,(MethodInfo *)0x0);
    *(undefined4 *)&(((Characters_BaseTitan_o *)__this_00)->fields).OutlineComponent = 9;
    *(System_String_o **)&(((Characters_BaseTitan_o *)__this_00)->fields)._climbCooldownLeft = pSVar12;
    il2cpp_runtime_helper_022b4080(&(((Characters_BaseTitan_o *)__this_00)->fields)._climbCooldownLeft);
    (((Characters_BaseTitan_o *)__this_00)->fields)._currentCrippleTime = fVar18;
    iVar10 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    (*(((Characters_BaseTitan_o *)__this_00)->klass->vtable)._70_Emote.methodPtr)
              (__this_00,"Roar",(((Characters_BaseTitan_o *)__this_00)->klass->vtable)._70_Emote.method)
    ;
    *(undefined1 *)
     ((long)&(((Characters_BaseTitan_o *)__this_00)->fields)._previousCoreLocalPosition.fields.y + 1) = 0;
    iVar10 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar4 = *(long *)&(((Characters_BaseTitan_o *)__this_00)->fields).Dead;
  if ((lVar4 != 0) &&
     (pUVar5 = *(UnityEngine_Transform_o **)(lVar4 + 0x10), pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
    UVar24 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    if (g_data_057ac31b == '\0') {
      il2cpp_runtime_helper_023445d0();
      g_data_057ac31b = '\x01';
    }
    uVar19 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
    fVar18 = (((Characters_BaseTitan_o *)__this_00)->fields)._turnTargetRotation.fields.x;
    position.fields.z = UVar24.fields.z + fVar18 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
    rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
    fVar16 = *(float *)((long)&(((Characters_BaseTitan_o *)__this_00)->fields).TitanColliderToggler + 4);
    fVar17 = (float)(*(((Characters_BaseTitan_o *)__this_00)->klass->vtable)._117_get_SizeMultiplier.methodPtr
                    )(__this_00,
                      (((Characters_BaseTitan_o *)__this_00)->klass->vtable)._117_get_SizeMultiplier.method);
    position.fields.x = UVar24.fields.x + fVar18 * (float)uVar19;
    position.fields.y = UVar24.fields.y + fVar18 * (float)((ulong)uVar19 >> 0x20);
    Effects_EffectSpawner__Spawn
              (pSVar12,position,rotation,fVar16 * fVar17,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
    return;
  }
label_04302abd:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf34 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf34 = '\x01';
  }
  return;
switchD_04302177_caseD_11:
  pSVar12 = (System_String_o *)
            (*(__this->klass->vtable)._157_GetSitUpAnimation.methodPtr)
                      (__this,(__this->klass->vtable)._157_GetSitUpAnimation.method);
  pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  __this_00 = (long *)0x0;
  if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
    local_e8._0_4_ = Characters_AnimationHandler__GetLength(pCVar2,pSVar12,(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    __this_00 = (long *)0x0;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)(__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,pSVar12,0.1,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 0x15;
label_04301bbd:
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar12;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._climbCooldownLeft,pSVar12);
      (__this->fields)._currentCrippleTime = (float)local_e8;
      return;
    }
  }
  goto label_04302833;
}


// Characters.BaseTitan$$StopWallClimb
// il2cpp: void Characters_BaseTitan__StopWallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430dd90

void Characters_BaseTitan__StopWallClimb(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  
  vtableDispatch = (__this->klass->vtable)._139_Idle.methodPtr;
  (*vtableDispatch)
            (0x3e4ccccd,__this,(__this->klass->vtable)._139_Idle.method,in_RDX,vtableDispatch);
  return;
}


// Characters.BaseTitan$$FixedUpdate
// il2cpp: void Characters_BaseTitan__FixedUpdate (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430ddb0

void Characters_BaseTitan__FixedUpdate(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  char cVar5;
  int iVar6;
  UnityEngine_Rigidbody_o *pUVar7;
  System_Action_Hashtable__o *pSVar8;
  UnityEngine_Transform_o *pUVar9;
  Characters_AnimationHandler_o *__this_00;
  undefined1 auVar10 [16];
  double dVar11;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  bool bVar12;
  bool_conflict bVar13;
  uint uVar14;
  int32_t layerMask;
  long lVar15;
  MethodInfo *pMVar16;
  long *method_00;
  Characters_BaseTitan_o *pCVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float extraout_XMM0_Db;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  float extraout_XMM0_Dc_04;
  float extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  float extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  float extraout_XMM1_Da;
  float fVar24;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_03;
  int32_t extraout_XMM1_Dc;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  float fStackY_f0;
  float fStackY_ec;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 in_stack_ffffffffffffff48 [12];
  undefined4 uVar36;
  int32_t iVar37;
  undefined1 auStack_98 [8];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  UnityEngine_LayerMask_Fields aUStack_78 [2];
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [16];
  Characters_BaseTitan_c *pCStack_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod pIStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined1 auVar27 [16];
  
  if (g_data_057adf8b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&"Gravity");
    g_data_057adf8b = '\x01';
  }
  uStack_38 = 0;
  uStack_34 = 0;
  pIStack_48 = (InvokerMethod)0x0;
  uStack_40 = 0;
  uStack_3c = 0;
  pCStack_58 = (Characters_BaseTitan_c *)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  aUStack_78[0].m_Mask = 0;
  Characters_BaseCharacter__FixedUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar13 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return;
  }
  fVar19 = (__this->fields)._jumpDirection.fields.y;
  method_00 = (long *)0x0;
  fVar18 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields)._jumpDirection.fields.y = fVar19 - fVar18;
  lVar15 = *(long *)&(__this->fields).Dead;
  if ((lVar15 == 0) ||
     (method_00 = *(long **)(lVar15 + 0x18),
     (Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
  bVar13 = UnityEngine_Rigidbody__get_isKinematic((UnityEngine_Rigidbody_o *)method_00,(MethodInfo *)0x0);
  iVar6 = *(int *)&(__this->fields).OutlineComponent;
  if (((iVar6 == 0x16) || (iVar6 == 0)) &&
     (((((char)(__this->fields).CustomDamage != '\0' &&
        (*(char *)((long)&(__this->fields).Animation + 4) != '\0')) &&
       (*(float *)&(__this->fields).Animation <= 0.1)) && ((__this->fields).MaxSoundDistance <= 0.0)))) {
    if ((char)bVar13 != '\0') {
      return;
    }
    Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,1,0.0,(MethodInfo *)0x0);
    return;
  }
  pbVar1 = &(__this->fields).Dead;
  if ((char)bVar13 != '\0') {
    method_00 = (long *)__this;
    Characters_BaseCharacter__SetKinematic((Characters_BaseCharacter_o *)__this,0,0.0,(MethodInfo *)0x0);
  }
  if ((*(long *)pbVar1 == 0) ||
     (method_00 = *(long **)(*(long *)pbVar1 + 0x18),
     (Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
  pMVar16 = (MethodInfo *)0x0;
  UVar33 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)method_00,(MethodInfo *)0x0);
  auVar26._4_4_ = UVar33.fields.y;
  auVar26._0_4_ = auVar26._4_4_;
  auVar26._8_4_ = extraout_XMM0_Dc;
  auVar26._12_4_ = extraout_XMM0_Dd;
  fVar19 = 0.0;
  if (auVar26._4_4_ < 0.0) {
    fVar18 = (__this->fields)._turnTargetRotation.fields.z;
    method_00 = (long *)0x0;
    fVar19 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    fVar19 = fVar19 + fVar18;
  }
  (__this->fields)._turnTargetRotation.fields.z = fVar19;
  if (((byte)(__this->fields).CustomDamage & 10.0 <= fVar19) != 0) {
    if (*(long *)pbVar1 == 0) goto label_0430ef2c;
    pUVar7 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18);
    method_00 = (long *)0x0;
    if (pUVar7 == (UnityEngine_Rigidbody_o *)0x0) goto label_0430ef2c;
    UVar33 = UnityEngine_Rigidbody__get_velocity(pUVar7,(MethodInfo *)0x0);
    auVar25._4_12_ = auVar26._4_12_;
    auVar25._0_4_ = UVar33.fields.z;
    fVar19 = UVar33.fields.y;
    pMVar16 = (__this->klass->vtable)._58_get_Gravity.method;
    method_00 = (long *)__this;
    (*(__this->klass->vtable)._58_get_Gravity.methodPtr)(fVar19,auVar25._0_8_);
    if (fVar19 <= extraout_XMM0_Db * 10.0) {
      pMVar16 = "Gravity";
      method_00 = (long *)__this;
      (*(__this->klass->vtable)._82_GetKilledRPC.methodPtr)
                (__this,"Gravity",(__this->klass->vtable)._82_GetKilledRPC.method);
    }
  }
  if (((0.0 < (__this->fields)._jumpDirection.fields.y) && ((char)(__this->fields).CustomDamage != '\0')) &&
     (uVar14 = *(uint *)&(__this->fields).OutlineComponent, (uVar14 | 2) != 7)) {
label_0430e035:
    (__this->fields)._turnTargetRotation.fields.w = 0.0;
    bVar12 = false;
    if ((char)(__this->fields).CustomDamage == '\0') goto label_0430e00f;
label_0430e047:
    if (uVar14 != 10) {
      if (uVar14 == 6) goto label_0430e055;
      goto label_0430e0e0;
    }
label_0430e0a8:
    pMVar16 = (__this->klass->vtable)._160_FixedUpdateAttack.method;
    method_00 = (long *)__this;
    (*(__this->klass->vtable)._160_FixedUpdateAttack.methodPtr)();
    if (*(char *)((long)&(__this->fields).Animation + 4) != '\0') {
      if ((char)(__this->fields).CustomDamage == '\0') goto label_0430e0ca;
      goto label_0430e0f3;
    }
    goto label_0430e0fb;
  }
  (*(__this->klass->vtable)._96_CheckGround.methodPtr)(__this,(__this->klass->vtable)._96_CheckGround.method);
  pMVar16 = (__this->klass->vtable)._119_get_CheckGroundTime.method;
  method_00 = (long *)__this;
  fVar19 = (float)(*(__this->klass->vtable)._119_get_CheckGroundTime.methodPtr)();
  (__this->fields)._jumpDirection.fields.y = fVar19;
  uVar14 = *(uint *)&(__this->fields).OutlineComponent;
  if (uVar14 != 7) goto label_0430e035;
  uVar14 = 7;
  bVar12 = true;
  if ((char)(__this->fields).CustomDamage != '\0') goto label_0430e047;
label_0430e00f:
  if (uVar14 < 0x1b) {
    if ((0x4108010U >> (uVar14 & 0x1f) & 1) == 0) {
      if (uVar14 != 6) {
        if (uVar14 == 10) goto label_0430e0a8;
        goto label_0430e0e0;
      }
label_0430e055:
      if ((*(long *)pbVar1 == 0) ||
         (method_00 = *(long **)(*(long *)pbVar1 + 0x18),
         (Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
      UVar33 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)method_00,(MethodInfo *)0x0);
      if (1.0 < UVar33.fields.y) goto label_0430e0fb;
      method_00 = (long *)__this;
      (*(__this->klass->vtable)._142_Fall.methodPtr)();
      cVar5 = *(char *)&(__this->fields)._stateTimeLeft;
    }
    else {
label_0430e0ca:
      method_00 = (long *)__this;
      Characters_BaseTitan__SetDefaultVelocityLerp(__this,pMVar16);
      cVar5 = *(char *)&(__this->fields)._stateTimeLeft;
    }
  }
  else {
label_0430e0e0:
    cVar5 = *(char *)((long)&(__this->fields).Animation + 4);
    if (uVar14 == 0xf) {
      if (cVar5 != '\0') {
label_0430e0f3:
        method_00 = (long *)__this;
        Characters_BaseTitan__SetDefaultVelocity(__this,pMVar16);
      }
      goto label_0430e0fb;
    }
    if (((cVar5 == '\0') || (uVar14 == 5)) || (uVar14 == 0x19)) {
      if (bVar12) {
        if ((*(long *)pbVar1 == 0) ||
           (method_00 = *(long **)(*(long *)pbVar1 + 0x18),
           (Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
        UVar33 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)method_00,(MethodInfo *)0x0);
        if (-1.0 <= UVar33.fields.y) {
          fVar19 = (__this->fields)._turnTargetRotation.fields.w;
          method_00 = (long *)0x0;
          fVar18 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          (__this->fields)._turnTargetRotation.fields.w = fVar18 + fVar19;
          if (0.5 < fVar18 + fVar19) goto label_0430e754;
        }
      }
      else if (uVar14 == 0x19) {
        if (*(long *)pbVar1 == 0) goto label_0430ef2c;
        pUVar7 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18);
        if (g_data_057a65d5 == '\0') {
          method_00 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        if (pUVar7 == (UnityEngine_Rigidbody_o *)0x0) goto label_0430ef2c;
        UnityEngine_Rigidbody__set_velocity
                  (pUVar7,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                   (MethodInfo *)0x0);
        method_00 = (long *)__this;
        uVar21 = (*(__this->klass->vtable)._95_GetTargetDirection.methodPtr)();
        fVar19 = (float)((ulong)uVar21 >> 0x20);
        fVar18 = (float)uVar21;
        if (*(char *)((long)&(__this->fields).Detection + 4) == '\0') {
label_0430ede7:
          method_00 = (long *)__this;
          (*(__this->klass->vtable)._159_StopWallClimb.methodPtr)();
          cVar5 = *(char *)&(__this->fields)._stateTimeLeft;
          goto joined_r0x0430ee01;
        }
        if (*(long *)pbVar1 == 0) goto label_0430ef2c;
        fVar29 = (float)extraout_XMM1_Qa;
        uVar36 = (undefined4)((ulong)extraout_XMM1_Qa >> 0x20);
        pUVar9 = *(UnityEngine_Transform_o **)(*(long *)pbVar1 + 0x10);
        method_00 = (long *)0x0;
        if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0430ef2c;
        iVar37 = extraout_XMM1_Dc;
        UVar33 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
        fVar22 = UVar33.fields.z;
        fVar31 = UVar33.fields.y;
        auStack_68._8_4_ = extraout_XMM0_Dc_03;
        auStack_68._0_8_ = UVar33.fields._0_8_;
        auStack_68._12_4_ = extraout_XMM0_Dd_03;
        fVar30 = UVar33.fields.x;
        if (g_data_057ac31a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057ac31a = '\x01';
          fVar30 = (float)auStack_68._0_4_;
        }
        fVar20 = fVar29 * fVar29 + fVar19 * fVar19 + fVar18 * fVar18;
        fVar30 = fVar22 * fVar22 + fVar31 * fVar31 + fVar30 * fVar30;
        method_00 = (long *)TypeInfo_Math;
        if ((TypeInfo_Math->fields)._stepPhase == 0) {
          fStack_70 = fVar30;
          fStack_6c = fVar20;
          il2cpp_runtime_helper_02337ed0();
          fVar20 = fStack_6c;
          fVar30 = fStack_70;
        }
        fVar20 = fVar20 * fVar30;
        if (fVar20 < 0.0) {
          fVar20 = sqrtf(fVar20);
          pCVar17 = TypeInfo_Math;
        }
        else {
          fVar20 = SQRT(fVar20);
          pCVar17 = TypeInfo_Math;
        }
        TypeInfo_Math = pCVar17;
        if (1e-15 <= fVar20) {
          fVar20 = (fVar29 * fVar22 + fVar31 * fVar19 + (float)auStack_68._0_4_ * fVar18) / fVar20;
          fVar19 = 1.0;
          if (fVar20 <= 1.0) {
            fVar19 = fVar20;
          }
          fVar19 = (float)(~-(uint)(-1.0 <= fVar20) & 0xbf800000 | (uint)fVar19 & -(uint)(-1.0 <= fVar20));
          method_00 = (long *)pCVar17;
          if ((pCVar17->fields)._stepPhase == 0) {
            uVar36 = 0;
            iVar37 = 0;
            il2cpp_runtime_helper_02337ed0();
            method_00 = (long *)pCVar17;
          }
          dVar11 = acos((double)fVar19,(MethodInfo *)method_00);
          if (135.0 <= (float)dVar11 * 57.29578) goto label_0430ede7;
        }
        if ((*(long *)pbVar1 == 0) ||
           (method_00 = *(long **)(*(long *)pbVar1 + 0x10),
           (Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
        UVar33 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)method_00,(MethodInfo *)0x0);
        fVar30 = UVar33.fields.z;
        fVar29 = UVar33.fields.x;
        fVar22 = UVar33.fields.y;
        fVar19 = extraout_XMM0_Dc_04;
        fVar18 = extraout_XMM0_Dd_04;
        if (g_data_057a6844 == '\0') {
          method_00 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6844 = '\x01';
        }
        lVar15 = *(long *)&(__this->fields).Dead;
        if (lVar15 == 0) goto label_0430ef2c;
        pCVar17 = *(Characters_BaseTitan_o **)(lVar15 + 0x10);
        method_00 = (long *)0x0;
        if (pCVar17 == (Characters_BaseTitan_o *)0x0) goto label_0430ef2c;
        uVar21 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar31 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
        fVar29 = fVar29 + fVar31 * (float)uVar21 * 3.0;
        fVar22 = fVar22 + fVar31 * (float)((ulong)uVar21 >> 0x20) * 3.0;
        fVar19 = fVar19 + 0.0;
        fVar18 = fVar18 + 0.0;
        fVar30 = fVar30 + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 3.0 * fVar31;
        pMVar16 = (MethodInfo *)0x0;
        UVar33 = UnityEngine_Transform__get_forward((UnityEngine_Transform_o *)pCVar17,(MethodInfo *)0x0);
        fVar31 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
        aUStack_78[0].m_Mask = (int32_t)Characters_BaseTitan__get_MapObjectMask(pCVar17,pMVar16);
        layerMask = UnityEngine_LayerMask__get_value
                              ((UnityEngine_LayerMask_Fields)(int32_t)aUStack_78,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (long *)&stack0xffffffffffffffa8;
        origin.fields.y = fVar22;
        origin.fields.x = fVar29;
        origin.fields.z = fVar30;
        bVar13 = UnityEngine_Physics__Raycast_4e776c0
                           (origin,UVar33,(UnityEngine_RaycastHit_o *)method_00,fVar31 * 5.0,layerMask,
                            (MethodInfo *)0x0);
        lVar15 = *(long *)pbVar1;
        if (lVar15 == 0) goto label_0430ef2c;
        if ((char)bVar13 == '\0') {
          pCVar17 = *(Characters_BaseTitan_o **)(lVar15 + 0x10);
          if (pCVar17 == (Characters_BaseTitan_o *)0x0) goto label_0430ef2c;
          method_00 = (long *)pCVar17;
          UVar33 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)pCVar17,(MethodInfo *)0x0);
          fVar19 = UVar33.fields.z;
          fVar18 = UVar33.fields.x;
          fVar29 = UVar33.fields.y;
          if (g_data_057a6844 == '\0') {
            method_00 = &TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6844 = '\x01';
          }
          lVar15 = *(long *)&(__this->fields).Dead;
          if (lVar15 == 0) goto label_0430ef2c;
          pUVar9 = *(UnityEngine_Transform_o **)(lVar15 + 0x10);
          method_00 = (long *)0x0;
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0430ef2c;
          uVar21 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar22 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          fVar30 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
          UVar33 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
          fVar31 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
          value_00.fields.x =
               fVar18 + fVar31 * (UVar33.fields.x + UVar33.fields.x) + fVar30 * (float)uVar21 * 3.0;
          value_00.fields.y =
               fVar29 + fVar31 * (UVar33.fields.y + UVar33.fields.y) +
                        fVar30 * (float)((ulong)uVar21 >> 0x20) * 3.0;
          value_00.fields.z = (UVar33.fields.z + UVar33.fields.z) * fVar31 + fVar22 * 3.0 * fVar30 + fVar19;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)pCVar17,value_00,(MethodInfo *)0x0);
          goto label_0430ede7;
        }
        pUVar7 = *(UnityEngine_Rigidbody_o **)(lVar15 + 0x18);
        if (pUVar7 == (UnityEngine_Rigidbody_o *)0x0) goto label_0430ef2c;
        UVar33 = UnityEngine_Rigidbody__get_velocity(pUVar7,(MethodInfo *)0x0);
        fVar24 = UVar33.fields.z;
        fVar20 = UVar33.fields.x;
        fVar23 = UVar33.fields.y;
        if (g_data_057a6844 == '\0') {
          fVar19 = extraout_XMM0_Dc_05;
          fVar18 = extraout_XMM0_Dd_05;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
          fVar29 = fVar20;
          fVar22 = fVar23;
          fVar30 = fVar24;
        }
        uVar21 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar32 = (float)(__this->fields).TitanGroundMaskLayers.fields.m_Mask *
                 *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 0.5 +
                 *(float *)&(__this->fields).BaseTitanAnimations;
        UVar33.fields.x = fVar20 + fVar32 * (float)uVar21;
        UVar33.fields.y = fVar23 + fVar32 * (float)((ulong)uVar21 >> 0x20);
        UVar33.fields.z = fVar24 + fVar32 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
        UnityEngine_Rigidbody__set_velocity(pUVar7,UVar33,(MethodInfo *)0x0);
        method_00 = (long *)&stack0xffffffffffffffa8;
        __this_01.fields.m_Point.fields.y = fVar22;
        __this_01.fields.m_Point.fields.x = fVar29;
        __this_01.fields.m_Point.fields.z = fVar19;
        __this_01.fields.m_Normal.fields.x = fVar18;
        __this_01.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffff48._0_4_;
        __this_01.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff48._4_4_;
        __this_01.fields.m_FaceID = in_stack_ffffffffffffff48._8_4_;
        __this_01.fields.m_Distance = fVar31;
        __this_01.fields.m_UV.fields.x = fVar30;
        __this_01.fields.m_UV.fields.y = (float)uVar36;
        __this_01.fields.m_Collider = iVar37;
        fVar19 = UnityEngine_RaycastHit__get_distance(__this_01,(MethodInfo *)method_00);
        if (fVar19 <= *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 3.5) goto label_0430e0fb;
        if ((*(long *)pbVar1 == 0) ||
           (pCVar17 = *(Characters_BaseTitan_o **)(*(long *)pbVar1 + 0x18),
           pCVar17 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
        method_00 = (long *)pCVar17;
        UVar33 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)pCVar17,(MethodInfo *)0x0);
        fVar19 = UVar33.fields.z;
        if (*(long *)pbVar1 == 0) goto label_0430ef2c;
        fVar18 = UVar33.fields.x;
        fVar29 = UVar33.fields.y;
        pUVar9 = *(UnityEngine_Transform_o **)(*(long *)pbVar1 + 0x10);
        method_00 = (long *)0x0;
        if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0430ef2c;
        uVar34 = extraout_XMM0_Dc_06;
        uVar35 = extraout_XMM0_Dd_06;
        UVar33 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
        __this_02.fields.m_Point.fields.y = fVar29;
        __this_02.fields.m_Point.fields.x = fVar18;
        __this_02.fields.m_Point.fields.z = (float)uVar34;
        __this_02.fields.m_Normal.fields.x = (float)uVar35;
        __this_02.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffff48._0_4_;
        __this_02.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff48._4_4_;
        __this_02.fields.m_FaceID = in_stack_ffffffffffffff48._8_4_;
        __this_02.fields.m_Distance = fVar31;
        __this_02.fields.m_UV.fields.x = fVar19;
        __this_02.fields.m_UV.fields.y = (float)uVar36;
        __this_02.fields.m_Collider = iVar37;
        fVar22 = UnityEngine_RaycastHit__get_distance(__this_02,(MethodInfo *)&stack0xffffffffffffffa8);
        auStack_68 = ZEXT416(*(uint *)((long)&(__this->fields).TitanColliderToggler + 4));
        fVar30 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
        fVar30 = ((float)auStack_68._0_4_ * -3.5 + fVar22) / fVar30;
        if (10.0 <= fVar30) {
          fVar30 = 10.0;
        }
        fStack_88 = UVar33.fields.x;
        fStack_84 = UVar33.fields.y;
        fVar22 = fVar30 * UVar33.fields.z;
        fVar18 = fVar18 + fVar30 * fStack_88;
        fVar29 = fVar29 + fVar30 * fStack_84;
        goto label_0430ef06;
      }
label_0430e0fb:
      cVar5 = *(char *)&(__this->fields)._stateTimeLeft;
    }
    else {
      method_00 = (long *)__this;
      Characters_BaseTitan__SetDefaultVelocity(__this,pMVar16);
      if (g_data_057a65d5 == '\0') {
        method_00 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      (__this->fields).RunSpeedBase = (float)(int)uVar21;
      (__this->fields).WalkSpeedBase = (float)(int)((ulong)uVar21 >> 0x20);
      (__this->fields).RunSpeedPerLevel = fVar19;
      iVar6 = *(int *)&(__this->fields).OutlineComponent;
      if (iVar6 == 7) {
label_0430e754:
        method_00 = (long *)__this;
        (*(__this->klass->vtable)._141_Land.methodPtr)();
        cVar5 = *(char *)&(__this->fields)._stateTimeLeft;
        goto joined_r0x0430ee01;
      }
      if ((2 < iVar6 - 1U) || (*(char *)((long)&(__this->fields).Detection + 4) == '\0')) goto label_0430e0fb;
      method_00 = (long *)__this;
      uVar21 = (*(__this->klass->vtable)._95_GetTargetDirection.methodPtr)();
      (__this->fields).RunSpeedBase = (float)(int)uVar21;
      (__this->fields).WalkSpeedBase = (float)(int)((ulong)uVar21 >> 0x20);
      (__this->fields).RunSpeedPerLevel = extraout_XMM1_Da;
      iVar6 = *(int *)&(__this->fields).OutlineComponent;
      if (iVar6 == 3) {
        if ((*(long *)pbVar1 == 0) ||
           (pCVar17 = *(Characters_BaseTitan_o **)(*(long *)pbVar1 + 0x18),
           pCVar17 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
        method_00 = (long *)pCVar17;
        UVar33 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)pCVar17,(MethodInfo *)0x0);
        fVar19 = UVar33.fields.z;
        if (*(long *)pbVar1 == 0) goto label_0430ef2c;
        fVar18 = UVar33.fields.x;
        fVar29 = UVar33.fields.y;
        pUVar9 = *(UnityEngine_Transform_o **)(*(long *)pbVar1 + 0x10);
        method_00 = (long *)0x0;
        if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0430ef2c;
        UVar33 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
        fVar20 = UVar33.fields.z;
        fVar30 = UVar33.fields.x;
        fVar31 = UVar33.fields.y;
        fVar22 = (__this->fields).AttackSpeedMultiplier *
                 *(float *)((long)&(__this->fields).TitanColliderToggler + 4) +
                 *(float *)((long)&(__this->fields).BaseTitanAnimations + 4);
label_0430ee73:
        fVar30 = fVar22 * fVar30;
        fVar31 = fVar22 * fVar31;
        fVar22 = fVar22 * fVar20;
      }
      else {
        if (iVar6 != 2) {
          if (iVar6 != 1) goto label_0430e0fb;
          if ((*(long *)pbVar1 == 0) ||
             (pCVar17 = *(Characters_BaseTitan_o **)(*(long *)pbVar1 + 0x18),
             pCVar17 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
          method_00 = (long *)pCVar17;
          UVar33 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)pCVar17,(MethodInfo *)0x0);
          fVar19 = UVar33.fields.z;
          if (*(long *)pbVar1 == 0) goto label_0430ef2c;
          fVar18 = UVar33.fields.x;
          fVar29 = UVar33.fields.y;
          pUVar9 = *(UnityEngine_Transform_o **)(*(long *)pbVar1 + 0x10);
          method_00 = (long *)0x0;
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0430ef2c;
          UVar33 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
          fVar20 = UVar33.fields.z;
          fVar30 = UVar33.fields.x;
          fVar31 = UVar33.fields.y;
          fVar22 = (float)(__this->fields).TitanGroundMaskLayers.fields.m_Mask *
                   *(float *)((long)&(__this->fields).TitanColliderToggler + 4) +
                   *(float *)&(__this->fields).BaseTitanAnimations;
          goto label_0430ee73;
        }
        if ((*(long *)pbVar1 == 0) ||
           (pCVar17 = *(Characters_BaseTitan_o **)(*(long *)pbVar1 + 0x18),
           pCVar17 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
        method_00 = (long *)pCVar17;
        UVar33 = UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)pCVar17,(MethodInfo *)0x0);
        fVar19 = UVar33.fields.z;
        if (*(long *)pbVar1 == 0) goto label_0430ef2c;
        fVar18 = UVar33.fields.x;
        fVar29 = UVar33.fields.y;
        pUVar9 = *(UnityEngine_Transform_o **)(*(long *)pbVar1 + 0x10);
        method_00 = (long *)0x0;
        if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0430ef2c;
        UVar33 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
        fVar22 = (float)(__this->fields).TitanGroundMaskLayers.fields.m_Mask *
                 *(float *)((long)&(__this->fields).TitanColliderToggler + 4) +
                 *(float *)&(__this->fields).BaseTitanAnimations;
        fVar30 = fVar22 * UVar33.fields.x * 1.5;
        fVar31 = fVar22 * UVar33.fields.y * 1.5;
        fVar22 = fVar22 * UVar33.fields.z * 1.5;
      }
      fVar18 = fVar18 + fVar30;
      fVar29 = fVar29 + fVar31;
label_0430ef06:
      value_01.fields.z = fVar19 + fVar22;
      value_01.fields.y = fVar29;
      value_01.fields.x = fVar18;
      UnityEngine_Rigidbody__set_velocity((UnityEngine_Rigidbody_o *)pCVar17,value_01,(MethodInfo *)0x0);
      cVar5 = *(char *)&(__this->fields)._stateTimeLeft;
      method_00 = (long *)pCVar17;
    }
  }
joined_r0x0430ee01:
  if (cVar5 != '\0') {
    pSVar8 = (__this->fields).OnPlayerPropertiesChanged;
    if ((pSVar8 == (System_Action_Hashtable__o *)0x0) ||
       (method_00 = (long *)(pSVar8->fields).interp_method,
       (Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
    UVar33 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)method_00,(MethodInfo *)0x0);
    fVar19 = UVar33.fields.z;
    pSVar8 = (__this->fields).OnPlayerPropertiesChanged;
    if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_0430ef2c;
    fVar18 = UVar33.fields.x;
    fVar29 = UVar33.fields.y;
    pUVar9 = (UnityEngine_Transform_o *)(pSVar8->fields).method_ptr;
    method_00 = (long *)0x0;
    if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0430ef2c;
    UVar33 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
    (__this->fields)._needFreshCore = (bool_conflict)(fVar18 - UVar33.fields.x);
    (__this->fields)._attackVelocity.fields.x = fVar29 - UVar33.fields.y;
    (__this->fields)._attackVelocity.fields.y = fVar19 - UVar33.fields.z;
    *(undefined8 *)((long)&(__this->fields)._currentStateAnimation + 4) =
         *(undefined8 *)&(__this->fields)._needFreshCore;
    (__this->fields)._currentAttackStage = (int32_t)(__this->fields)._attackVelocity.fields.y;
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 0;
  }
  method_00 = *(long **)&(__this->fields)._startCoreAttackPosition.fields;
  if ((Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0) goto label_0430ef2c;
  bVar13 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,
                      *(Il2CppObject **)&(__this->fields)._climbCooldownLeft,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar13 != '\0') {
    method_00 = *(long **)&(__this->fields)._cameraFPS;
    if ((Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0) goto label_0430ef2c;
    bVar13 = Characters_AnimationHandler__IsPlaying
                       ((Characters_AnimationHandler_o *)method_00,
                        *(System_String_o **)&(__this->fields)._climbCooldownLeft,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      method_00 = (long *)0x0;
      if (__this_00 == (Characters_AnimationHandler_o *)0x0) goto label_0430ef2c;
      fVar19 = Characters_AnimationHandler__GetCurrentNormalizedTime(__this_00,(MethodInfo *)0x0);
      method_00 = *(long **)&(__this->fields)._startCoreAttackPosition.fields;
      if ((Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0) goto label_0430ef2c;
      fVar18 = System_Collections_Generic_Dictionary_object__float___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,
                          *(Il2CppObject **)&(__this->fields)._climbCooldownLeft,MethodInfo_Single_get_Item);
      if (fVar19 < fVar18) {
        pSVar8 = (__this->fields).OnPlayerPropertiesChanged;
        if ((pSVar8 == (System_Action_Hashtable__o *)0x0) ||
           (method_00 = (long *)(pSVar8->fields).interp_method,
           (Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
        UVar33 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)method_00,(MethodInfo *)0x0);
        fVar18 = UVar33.fields.z;
        fVar19 = UVar33.fields.x;
        fVar29 = UVar33.fields.y;
        pSVar8 = (__this->fields).OnPlayerPropertiesChanged;
        if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_0430ef2c;
        pUVar9 = (UnityEngine_Transform_o *)(pSVar8->fields).method_ptr;
        method_00 = (long *)0x0;
        if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_0430ef2c;
        fVar30 = extraout_XMM0_Dc_00;
        fVar31 = extraout_XMM0_Dd_00;
        UVar33 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
        fVar19 = fVar19 - UVar33.fields.x;
        fVar29 = fVar29 - UVar33.fields.y;
        fVar30 = fVar30 - extraout_XMM0_Dc_01;
        fVar31 = fVar31 - extraout_XMM0_Dd_01;
        fVar22 = fVar29;
        if (g_data_057a6841 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
        }
        fVar18 = fVar18 - UVar33.fields.z;
        if ((TypeInfo_Math->fields)._stepPhase == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        fVar29 = fVar18 * fVar18 + fVar29 * fVar29 + fVar19 * fVar19;
        if (fVar29 < 0.0) {
          fVar29 = sqrtf(fVar29);
        }
        else {
          fVar29 = SQRT(fVar29);
        }
        if (g_data_057a6841 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
        }
        fVar20 = (float)(__this->fields)._needFreshCore;
        uVar2 = (__this->fields)._attackVelocity.fields.x;
        uVar4 = (__this->fields)._attackVelocity.fields.y;
        method_00 = (long *)TypeInfo_Math;
        if ((TypeInfo_Math->fields)._stepPhase == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        fVar20 = (float)uVar4 * (float)uVar4 + fVar20 * fVar20 + (float)uVar2 * (float)uVar2;
        if (fVar20 < 0.0) {
          fVar20 = sqrtf(fVar20);
        }
        else {
          fVar20 = SQRT(fVar20);
        }
        if (fVar20 <= fVar29) {
          uVar21 = *(undefined8 *)((long)&(__this->fields)._currentStateAnimation + 4);
          fVar20 = fVar18 - (float)(__this->fields)._currentAttackStage;
          auStack_98 = (undefined1  [8])
                       (CONCAT44(fVar22 - (float)((ulong)uVar21 >> 0x20),fVar19 - (float)uVar21) ^
                       0x8000000080000000);
          fStack_90 = -(fVar30 - 0.0);
          fStack_8c = -(fVar31 - 0.0);
          method_00 = (long *)0x0;
          fVar29 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          fVar30 = -fVar20 / fVar29;
          auVar10._4_4_ = fVar29;
          auVar10._0_4_ = fVar29;
          auVar10._8_4_ = extraout_XMM0_Dc_02;
          auVar10._12_4_ = extraout_XMM0_Dd_02;
          auVar26 = divps(_auStack_98,auVar10);
          (__this->fields)._needFreshCore = (bool_conflict)fVar19;
          (__this->fields)._attackVelocity.fields.x = fVar22;
          (__this->fields)._attackVelocity.fields.y = fVar18;
          *(float *)((long)&(__this->fields)._currentStateAnimation + 4) = fVar19;
          (__this->fields)._currentAttackSpeed = fVar22;
          (__this->fields)._currentAttackStage = (int32_t)fVar18;
          auStack_98._0_4_ = auVar26._0_4_;
          auStack_98._4_4_ = auVar26._4_4_;
          if ((char)(__this->fields).CustomDamage == '\0') {
            if (g_data_057a65d5 == '\0') {
              method_00 = &TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a65d5 = '\x01';
            }
            if ((*(long *)pbVar1 == 0) ||
               (method_00 = *(long **)(*(long *)pbVar1 + 0x18),
               (Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
            uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar18 = (float)uVar21;
            fVar29 = (float)((ulong)uVar21 >> 0x20);
            fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            UVar33 = UnityEngine_Rigidbody__get_velocity
                               ((UnityEngine_Rigidbody_o *)method_00,(MethodInfo *)0x0);
            if ((*(long *)pbVar1 == 0) ||
               (method_00 = *(long **)(*(long *)pbVar1 + 0x18),
               (Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
            auStack_98._0_4_ = ((float)auStack_98._0_4_ - fVar18) * 0.0435 + fVar18 + UVar33.fields.x;
            auStack_98._4_4_ = ((float)auStack_98._4_4_ - fVar29) * 0.0435 + fVar29 + UVar33.fields.y;
            fVar30 = (fVar30 - fVar19) * 0.0435 + fVar19 + UVar33.fields.z;
          }
          else if ((*(long *)pbVar1 == 0) ||
                  (method_00 = *(long **)(*(long *)pbVar1 + 0x18),
                  (Characters_BaseTitan_o *)method_00 == (Characters_BaseTitan_o *)0x0)) goto label_0430ef2c;
          value.fields.y = (float)auStack_98._4_4_;
          value.fields.x = (float)auStack_98._0_4_;
          value.fields.z = fVar30;
          UnityEngine_Rigidbody__set_velocity((UnityEngine_Rigidbody_o *)method_00,value,(MethodInfo *)0x0);
        }
      }
    }
  }
  if (*(int *)&(__this->fields).OutlineComponent == 0x19) {
label_0430e87e:
    fVar19 = (__this->fields).CurrentSprintStamina;
    if (fVar19 <= 0.0) {
      fVar19 = *(float *)&(__this->fields).field_0x154;
      if (0.0 <= fVar19) {
        (__this->fields).SprintStaminaConsumption = fVar19;
      }
    }
    else {
      fVar18 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      (__this->fields).CurrentSprintStamina = fVar19 - fVar18;
    }
    return;
  }
  if (*(long *)pbVar1 != 0) {
    pUVar7 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18);
    method_00 = (long *)__this;
    uVar21 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)();
    if (pUVar7 != (UnityEngine_Rigidbody_o *)0x0) {
      force.fields.z = (float)extraout_XMM1_Qa_00;
      force.fields.x = (float)(int)uVar21;
      force.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
      UnityEngine_Rigidbody__AddForce(pUVar7,force,5,(MethodInfo *)0x0);
      goto label_0430e87e;
    }
  }
label_0430ef2c:
  fVar19 = (float)il2cpp_runtime_helper_022b2c90();
  auVar27._8_8_ = extraout_XMM1_Qb;
  auVar27._0_8_ = extraout_XMM1_Qa_01;
  lVar15 = *(long *)&(((Characters_BaseTitan_o *)method_00)->fields).Dead;
  uVar21 = extraout_XMM1_Qa_01;
  if (lVar15 != 0) {
    pUVar7 = *(UnityEngine_Rigidbody_o **)(lVar15 + 0x18);
    if (g_data_057a6844 == '\0') {
      fVar19 = (float)il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      auVar27._8_8_ = extraout_XMM1_Qb_00;
      auVar27._0_8_ = extraout_XMM1_Qa_02;
      g_data_057a6844 = '\x01';
      lVar15._0_4_ = (((Characters_BaseTitan_o *)method_00)->fields).Dead;
      lVar15._4_4_ = (((Characters_BaseTitan_o *)method_00)->fields).CustomDamageEnabled;
    }
    uVar21 = auVar27._0_8_;
    if ((lVar15 != 0) && (*(UnityEngine_Rigidbody_o **)(lVar15 + 0x18) != (UnityEngine_Rigidbody_o *)0x0)) {
      uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar18 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      UVar33 = UnityEngine_Rigidbody__get_velocity
                         (*(UnityEngine_Rigidbody_o **)(lVar15 + 0x18),(MethodInfo *)0x0);
      auVar28._4_12_ = auVar27._4_12_;
      auVar28._0_4_ = UVar33.fields.z;
      uVar21 = auVar28._0_8_;
      fVar19 = UVar33.fields.x;
      fVar29 = UVar33.fields.y;
      if (g_data_057ac31b == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057ac31b = '\x01';
        uVar21 = extraout_XMM1_Qa_03;
      }
      if (pUVar7 != (UnityEngine_Rigidbody_o *)0x0) {
        fStackY_f0 = (float)uVar3;
        fStackY_ec = (float)((ulong)uVar3 >> 0x20);
        fVar19 = (((Characters_BaseTitan_o *)method_00)->fields)._turnTargetRotation.fields.x * 100.0;
        if (100.0 <= fVar19) {
          fVar19 = 100.0;
        }
        uVar21 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
        value_02.fields.x = fVar19 * (float)uVar21 + fStackY_f0 * fVar29;
        value_02.fields.y = fVar19 * (float)((ulong)uVar21 >> 0x20) + fStackY_ec * fVar29;
        value_02.fields.z = fVar19 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) + fVar18 * fVar29;
        UnityEngine_Rigidbody__set_velocity(pUVar7,value_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90(fVar19,uVar21);
  return;
}


// Characters.BaseTitan$$FixedUpdateAttack
// il2cpp: void Characters_BaseTitan__FixedUpdateAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430f060

void Characters_BaseTitan__FixedUpdateAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$SetDefaultVelocity
// il2cpp: void Characters_BaseTitan__SetDefaultVelocity (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430ef40

void Characters_BaseTitan__SetDefaultVelocity(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  UnityEngine_Rigidbody_o *__this_00;
  long lVar3;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  float local_28;
  float fStack_24;
  float fVar4;
  
  lVar3 = *(long *)&(__this->fields).Dead;
  if (lVar3 != 0) {
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18);
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
      lVar3._0_4_ = (__this->fields).Dead;
      lVar3._4_4_ = (__this->fields).CustomDamageEnabled;
    }
    if ((lVar3 != 0) && (*(UnityEngine_Rigidbody_o **)(lVar3 + 0x18) != (UnityEngine_Rigidbody_o *)0x0)) {
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      UVar6 = UnityEngine_Rigidbody__get_velocity
                        (*(UnityEngine_Rigidbody_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
      fVar4 = UVar6.fields.y;
      if (g_data_057ac31b == '\0') {
        il2cpp_runtime_helper_023445d0(UVar6.fields.x,UVar6.fields.z,&TypeInfo_Vector3);
        g_data_057ac31b = '\x01';
      }
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        local_28 = (float)uVar2;
        fStack_24 = (float)((ulong)uVar2 >> 0x20);
        fVar5 = (__this->fields)._turnTargetRotation.fields.x * 100.0;
        if (100.0 <= fVar5) {
          fVar5 = 100.0;
        }
        uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
        UVar6.fields.x = fVar5 * (float)uVar2 + local_28 * fVar4;
        UVar6.fields.y = fVar5 * (float)((ulong)uVar2 >> 0x20) + fStack_24 * fVar4;
        UVar6.fields.z = fVar5 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) + fVar1 * fVar4;
        UnityEngine_Rigidbody__set_velocity(__this_00,UVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Characters.BaseTitan$$LateUpdate
// il2cpp: void Characters_BaseTitan__LateUpdate (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x42ff780

void Characters_BaseTitan__LateUpdate(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  MethodInfo *method_00;
  Characters_BaseTitan_o *__this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Quaternion_o UVar9;
  UnityEngine_Quaternion_o b;
  
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  __this_00 = __this;
  bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if (((((char)bVar4 == '\0') || (uVar1 = *(uint *)&(__this->fields).OutlineComponent, 7 < uVar1)) ||
      ((0xceU >> (uVar1 & 0x1f) & 1) == 0)) || (*(char *)((long)&(__this->fields).Detection + 4) == '\0')) {
    return;
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) &&
     (pUVar5 = *(UnityEngine_Transform_o **)(lVar2 + 0x10), pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    UVar9 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
    fVar7 = UVar9.fields.z;
    fVar8 = UVar9.fields.w;
    uVar3 = (*(__this->klass->vtable)._94_GetTargetRotation.methodPtr)();
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    b.fields.w = fVar8;
    b.fields.z = fVar7;
    b.fields.x = (float)(int)uVar3;
    b.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
    UVar9 = UnityEngine_Quaternion__Lerp
                      (UVar9,b,fVar6 * (__this->fields).PreviousAttackSpeedMultiplier,(MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation(pUVar5,UVar9,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf29 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Anchor");
    g_data_057adf29 = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__Find(pUVar5,"Anchor",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(__this_00->fields)._previousCoreLocalPosition.fields.y + 1) = 1;
  (__this_00->fields)._furthestCoreLocalPosition.fields.z = 2.0;
  Characters_BaseTitan___ctor(__this_00,method_00);
  return;
}


// Characters.BaseTitan$$IsPlayingClip
// il2cpp: bool Characters_BaseTitan__IsPlayingClip (Characters_BaseTitan_o* __this, System_String_o* clip, const MethodInfo* method);
// 0x430f070

bool_conflict
Characters_BaseTitan__IsPlayingClip(Characters_BaseTitan_o *__this,System_String_o *clip,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_CapsuleCollider_o *__this_01;
  UnityEngine_SkinnedMeshRenderer_o *pUVar3;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_Vector3_Fields direction;
  bool_conflict bVar4;
  undefined4 uVar5;
  int32_t layerMask;
  UnityEngine_Transform_o *pUVar6;
  long lVar7;
  Characters_AnimationHandler_o *__this_03;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  float fVar12;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 uVar18;
  undefined4 uVar19;
  Il2CppMethodPointer pIStack_60;
  Il2CppMethodPointer pIStack_58;
  InvokerMethod pIStack_50;
  uint32_t uStack_48;
  float fStack_44;
  float fStack_40;
  undefined8 uStack_3c;
  _union_13 _Stack_28;
  
  if (g_data_057adf8c == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf8c = '\x01';
  }
  bVar4 = System_String__op_Inequality(clip,"",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return 0;
  }
  __this_03 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_03 != (Characters_AnimationHandler_o *)0x0) {
    bVar4 = Characters_AnimationHandler__IsPlaying(__this_03,clip,(MethodInfo *)0x0);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  _Stack_28 = (_union_13)clip;
  if (g_data_057adf8d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057adf8d = '\x01';
  }
  fStack_40 = 0.0;
  uStack_3c = 0;
  pIStack_50 = (InvokerMethod)0x0;
  uStack_48 = 0;
  fStack_44 = 0.0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  pIStack_58 = (Il2CppMethodPointer)0x0;
  if ((__this_03[3].monitor != (void *)0x0) &&
     (__this_00 = *(UnityEngine_Component_o **)((long)__this_03[3].monitor + 0x70),
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    pUVar6 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UVar17 = UnityEngine_Transform__get_lossyScale(pUVar6,(MethodInfo *)0x0);
      if ((__this_03[3].monitor != (void *)0x0) &&
         (__this_01 = *(UnityEngine_CapsuleCollider_o **)((long)__this_03[3].monitor + 0x70),
         __this_01 != (UnityEngine_CapsuleCollider_o *)0x0)) {
        fVar13 = UVar17.fields.x;
        fVar11 = UVar17.fields.y;
        bVar2 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar2) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CapsuleCollider)) goto label_0430f3e9;
        uVar18 = extraout_XMM0_Dc;
        uVar19 = extraout_XMM0_Dd;
        fVar8 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
        *(undefined1 *)((long)&__this_03[2].fields.Renderer + 5) = 0;
        pUVar3 = __this_03[1].fields.Renderer;
        if ((pUVar3 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) &&
           (pUVar6 = (UnityEngine_Transform_o *)(pUVar3->fields).m_CachedPtr,
           pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          fVar13 = fVar13 * fVar8;
          UVar17 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          fVar14 = UVar17.fields.z;
          fVar9 = UVar17.fields.x;
          fVar12 = UVar17.fields.y;
          fVar8 = extraout_XMM0_Dc_00;
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          lVar7 = *(long *)(TypeInfo_Vector3 + 0xb8);
          uVar1 = *(undefined8 *)(lVar7 + 0x18);
          fVar16 = fVar13 + 1.0;
          fVar10 = *(float *)(lVar7 + 0x20);
          if (g_data_057ac31b == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057ac31b = '\x01';
            lVar7 = *(long *)(TypeInfo_Vector3 + 0xb8);
          }
          fVar9 = fVar9 + fVar16 * (float)uVar1;
          fVar12 = fVar12 + fVar16 * (float)((ulong)uVar1 >> 0x20);
          fVar8 = fVar8 + 0.0;
          fVar14 = fVar14 + fVar16 * fVar10;
          direction = *(UnityEngine_Vector3_Fields *)(lVar7 + 0x24);
          fVar10 = (float)(*(code *)__this_03->klass[3]._1.nestedTypes)
                                    (__this_03,__this_03->klass[3]._1.implementedInterfaces);
          uVar5 = (*__this_03->klass[3]._1.properties)(__this_03);
          layerMask = UnityEngine_LayerMask__get_value
                                ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff58,
                                 (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar17.fields.y = fVar12;
          UVar17.fields.x = fVar9;
          UVar17.fields.z = fVar14;
          bVar4 = UnityEngine_Physics__SphereCast_4e78cf0
                            (UVar17,fVar13,(UnityEngine_Vector3_o)direction,
                             (UnityEngine_RaycastHit_o *)&pIStack_60,fVar10 + 1.0,layerMask,(MethodInfo *)0x0)
          ;
          if ((char)bVar4 == '\0') {
            *(undefined1 *)((long)&__this_03[2].fields.Renderer + 4) = 0;
            bVar4 = (*(code *)__this_03->klass[3]._1.nestedTypes)
                              (__this_03,__this_03->klass[3]._1.implementedInterfaces);
            uVar15 = extraout_XMM0_Da_00;
          }
          else {
            if (*(char *)((long)&__this_03[2].fields.Renderer + 4) == '\0') {
              *(undefined2 *)((long)&__this_03[2].fields.Renderer + 4) = 0x101;
            }
            __this_02.fields.m_Point.fields.y = fVar14;
            __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff50;
            __this_02.fields.m_Point.fields.z = (float)uVar5;
            __this_02.fields.m_Normal.fields.x = fVar10;
            __this_02.fields.m_Normal.fields.y = fVar13;
            __this_02.fields.m_Normal.fields.z = fVar11;
            __this_02.fields.m_FaceID = uVar18;
            __this_02.fields.m_Distance = (float)uVar19;
            __this_02.fields.m_UV.fields.x = fVar9;
            __this_02.fields.m_UV.fields.y = fVar12;
            __this_02.fields.m_Collider = (int32_t)fVar8;
            fVar11 = UnityEngine_RaycastHit__get_distance(__this_02,(MethodInfo *)&pIStack_60);
            bVar4 = (*(code *)__this_03->klass[3]._1.nestedTypes)
                              (__this_03,__this_03->klass[3]._1.implementedInterfaces);
            fVar11 = fVar11 + -1.0;
            fVar13 = extraout_XMM0_Da;
            if (fVar11 <= extraout_XMM0_Da) {
              fVar13 = fVar11;
            }
            uVar15 = -(uint)(0.0 <= fVar11) & (uint)fVar13;
          }
          *(uint *)((long)&__this_03[5].fields._animatorStateNames + 4) = uVar15;
          return bVar4;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0430f3e9:
  bVar4 = il2cpp_runtime_helper_022b2fd0();
  return bVar4;
}


// Characters.BaseTitan$$CheckGround
// il2cpp: void Characters_BaseTitan__CheckGround (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430f0e0

void Characters_BaseTitan__CheckGround(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_Component_o *__this_00;
  UnityEngine_CapsuleCollider_o *__this_01;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_Vector3_Fields direction;
  undefined4 uVar4;
  int32_t layerMask;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 local_48 [32];
  float fStack_28;
  undefined8 uStack_24;
  
  if (g_data_057adf8d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057adf8d = '\x01';
  }
  fStack_28 = 0.0;
  uStack_24 = 0;
  local_48._16_8_ = (InvokerMethod)0x0;
  local_48._24_4_ = 0;
  local_48._28_4_ = 0.0;
  local_48._0_8_ = (Il2CppMethodPointer)0x0;
  local_48._8_8_ = (Il2CppMethodPointer)0x0;
  pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
  if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
     (__this_00 = *(UnityEngine_Component_o **)&(pSVar3->fields).method_is_virtual,
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    pUVar6 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UVar16 = UnityEngine_Transform__get_lossyScale(pUVar6,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
      if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
         (__this_01 = *(UnityEngine_CapsuleCollider_o **)&(pSVar3->fields).method_is_virtual,
         __this_01 != (UnityEngine_CapsuleCollider_o *)0x0)) {
        fVar13 = UVar16.fields.x;
        fVar11 = UVar16.fields.y;
        bVar2 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar2) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CapsuleCollider)) goto label_0430f3e9;
        uVar17 = extraout_XMM0_Dc;
        uVar18 = extraout_XMM0_Dd;
        fVar8 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
        *(undefined1 *)((long)&(__this->fields).Animation + 5) = 0;
        lVar7 = *(long *)&(__this->fields).Dead;
        if ((lVar7 != 0) &&
           (pUVar6 = *(UnityEngine_Transform_o **)(lVar7 + 0x10), pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          fVar13 = fVar13 * fVar8;
          UVar16 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          fVar14 = UVar16.fields.z;
          fVar9 = UVar16.fields.x;
          fVar12 = UVar16.fields.y;
          fVar8 = extraout_XMM0_Dc_00;
          if (g_data_057a6844 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6844 = '\x01';
          }
          lVar7 = *(long *)(TypeInfo_Vector3 + 0xb8);
          uVar1 = *(undefined8 *)(lVar7 + 0x18);
          fVar15 = fVar13 + 1.0;
          fVar10 = *(float *)(lVar7 + 0x20);
          if (g_data_057ac31b == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057ac31b = '\x01';
            lVar7 = *(long *)(TypeInfo_Vector3 + 0xb8);
          }
          fVar9 = fVar9 + fVar15 * (float)uVar1;
          fVar12 = fVar12 + fVar15 * (float)((ulong)uVar1 >> 0x20);
          fVar8 = fVar8 + 0.0;
          fVar14 = fVar14 + fVar15 * fVar10;
          direction = *(UnityEngine_Vector3_Fields *)(lVar7 + 0x24);
          fVar10 = (float)(*(__this->klass->vtable)._61_get_GroundDistance.methodPtr)
                                    (__this,(__this->klass->vtable)._61_get_GroundDistance.method);
          uVar4 = (*(__this->klass->vtable)._60_get_GroundMask.methodPtr)(__this);
          layerMask = UnityEngine_LayerMask__get_value
                                ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff70,
                                 (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UVar16.fields.y = fVar12;
          UVar16.fields.x = fVar9;
          UVar16.fields.z = fVar14;
          bVar5 = UnityEngine_Physics__SphereCast_4e78cf0
                            (UVar16,fVar13,(UnityEngine_Vector3_o)direction,
                             (UnityEngine_RaycastHit_o *)local_48,fVar10 + 1.0,layerMask,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            *(undefined1 *)((long)&(__this->fields).Animation + 4) = 0;
            fVar13 = (float)(*(__this->klass->vtable)._61_get_GroundDistance.methodPtr)
                                      (__this,(__this->klass->vtable)._61_get_GroundDistance.method);
          }
          else {
            if (*(char *)((long)&(__this->fields).Animation + 4) == '\0') {
              *(undefined2 *)((long)&(__this->fields).Animation + 4) = 0x101;
            }
            __this_02.fields.m_Point.fields.y = fVar14;
            __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68;
            __this_02.fields.m_Point.fields.z = (float)uVar4;
            __this_02.fields.m_Normal.fields.x = fVar10;
            __this_02.fields.m_Normal.fields.y = fVar13;
            __this_02.fields.m_Normal.fields.z = fVar11;
            __this_02.fields.m_FaceID = uVar17;
            __this_02.fields.m_Distance = (float)uVar18;
            __this_02.fields.m_UV.fields.x = fVar9;
            __this_02.fields.m_UV.fields.y = fVar12;
            __this_02.fields.m_Collider = (int32_t)fVar8;
            fVar11 = UnityEngine_RaycastHit__get_distance(__this_02,(MethodInfo *)local_48);
            fVar13 = (float)(*(__this->klass->vtable)._61_get_GroundDistance.methodPtr)
                                      (__this,(__this->klass->vtable)._61_get_GroundDistance.method);
            fVar11 = fVar11 + -1.0;
            if (fVar11 <= fVar13) {
              fVar13 = fVar11;
            }
            fVar13 = (float)(-(uint)(0.0 <= fVar11) & (uint)fVar13);
          }
          (__this->fields)._turnTargetRotation.fields.x = fVar13;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0430f3e9:
  il2cpp_runtime_helper_022b2fd0();
  return;
}


// Characters.BaseTitan$$UpdateAttack
// il2cpp: void Characters_BaseTitan__UpdateAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430f3f0

void Characters_BaseTitan__UpdateAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$UpdateEat
// il2cpp: void Characters_BaseTitan__UpdateEat (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430f400

void Characters_BaseTitan__UpdateEat(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$DeactivateAllHitboxes
// il2cpp: void Characters_BaseTitan__DeactivateAllHitboxes (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430f410

void Characters_BaseTitan__DeactivateAllHitboxes(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Characters_BaseHitbox_o *__this_05;
  
  if (g_data_057adf8e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseHitbox_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Characters_BaseHitbox_GetEnumerator);
    g_data_057adf8e = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  __this_05 = (Characters_BaseHitbox_o *)0x0;
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
     (__this_00 = *(System_Collections_Generic_List_object__o **)&pSVar1[1].fields.method_is_virtual,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,__this_00,
               MethodInfo_List_1_T_Enumerator_Characters_BaseHitbox_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._list = pSVar6;
      __this_01.fields._current = (Il2CppObject *)__this_05;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd8);
      if ((char)bVar3 == '\0') {
        __this_02.fields._8_8_ = pIVar7;
        __this_02.fields._list = pSVar6;
        __this_02.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
        return;
      }
      if (__this_05 == (Characters_BaseHitbox_o *)0x0) break;
      Characters_BaseHitbox__Deactivate(__this_05,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._list = pSVar6;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._list = pSVar6;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
  _Unwind_Resume(auVar5._0_8_);
}


// Characters.BaseTitan$$SetSizeRPC
// il2cpp: void Characters_BaseTitan__SetSizeRPC (Characters_BaseTitan_o* __this, float size, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x430f570

void Characters_BaseTitan__SetSizeRPC
               (Characters_BaseTitan_o *__this,float size,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Characters_BaseCharacter_o *x;
  Photon_Pun_PhotonView_o *__this_00;
  void *pvVar4;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_c *pCVar5;
  code *vtableDispatch;
  float value;
  undefined1 uVar6;
  bool_conflict bVar7;
  UnityEngine_Transform_o *__this_01;
  Cameras_InGameCamera_o *__this_02;
  Cameras_InGameCamera_o *pCVar8;
  UnityEngine_AudioSource_o *__this_03;
  System_Object_array *pSVar9;
  Il2CppObject *pIVar10;
  long lVar11;
  System_String_o *pSVar12;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_04;
  uint uVar13;
  char cVar14;
  Cameras_InGameCamera_o **main;
  Characters_AnimationHandler_o *__this_05;
  Characters_BaseTitan_o *__this_06;
  Characters_BaseTitan_o *pCVar15;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *pCVar16;
  long *x_00;
  UnityEngine_Collider_o *__this_07;
  undefined8 in_R9;
  Cameras_InGameCamera_o *unaff_R14;
  float fVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qb;
  float in_XMM1_Da;
  UnityEngine_Vector3_o value_00;
  undefined1 auStack_70 [16];
  
  if (g_data_057adf8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057adf8f = '\x01';
  }
  lVar11 = *(long *)&(__this->fields).Dead;
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x20), lVar11 == 0)) {
label_0430f701:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar11 + 0x80)) {
      return;
    }
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_0430f701;
    fVar17 = 50.0;
    if (size <= 50.0) {
      fVar17 = size;
    }
    fVar17 = (float)(~-(uint)(0.1 <= size) & 0x3dcccccd | (uint)fVar17 & -(uint)(0.1 <= size));
    value_00.fields.y = fVar17;
    value_00.fields.x = fVar17;
    value_00.fields.z = fVar17;
    in_XMM1_Da = fVar17;
    UnityEngine_Transform__set_localScale(__this_01,value_00,(MethodInfo *)0x0);
    *(float *)((long)&(__this->fields).TitanColliderToggler + 4) = fVar17;
    (*(__this->klass->vtable)._165_SetSizeParticles.methodPtr)
              (__this,(__this->klass->vtable)._165_SetSizeParticles.method);
    (*(__this->klass->vtable)._164_ScaleSounds.methodPtr)
              (__this,(__this->klass->vtable)._164_ScaleSounds.method);
    unaff_R14 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (unaff_R14 == (Cameras_InGameCamera_o *)0x0) goto label_0430f701;
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (unaff_R14->klass->_2).naturalAligment) &&
       ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      x = (unaff_R14->fields)._follow;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      Cameras_InGameCamera__SetFollow(unaff_R14,(Characters_BaseCharacter_o *)__this,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar18 = il2cpp_runtime_helper_022b2fd0();
  auStack_70._8_8_ = extraout_XMM0_Qb;
  auStack_70._0_8_ = uVar18;
  main = (Cameras_InGameCamera_o **)unaff_R14;
  if (g_data_057adf90 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    main = &TypeInfo_TitanSounds;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf90 = '\x01';
  }
  if (unaff_R14 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
    if ((bVar1 <= (unaff_R14->klass->_2).naturalAligment) &&
       ((unaff_R14->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseShifter)) {
      auStack_70._0_4_ = (float)uVar18 * 3.5;
    }
  }
  lVar11 = *(long *)&(unaff_R14->fields)._heightDistance;
  if (lVar11 != 0) {
    pCVar8 = *(Cameras_InGameCamera_o **)(lVar11 + 0x30);
    main = (Cameras_InGameCamera_o **)TypeInfo_TitanSounds;
    if (*(int *)((long)&TypeInfo_TitanSounds[1].fields._follow + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((pCVar8 != (Cameras_InGameCamera_o *)0x0) &&
       (__this_02 = (Cameras_InGameCamera_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)pCVar8,
                               *(Il2CppObject **)(TypeInfo_TitanSounds[1].fields.m_CachedPtr + 0xd8),MethodInfo_AudioSource_get_Item),
       main = (Cameras_InGameCamera_o **)pCVar8, __this_02 != (Cameras_InGameCamera_o *)0x0)) {
      fVar17 = (float)auStack_70._0_4_ * 0.3;
      in_XMM1_Da = 1.0;
      if (fVar17 <= 1.0) {
        in_XMM1_Da = fVar17;
      }
      in_XMM1_Da = (float)((uint)in_XMM1_Da & -(uint)(0.1 <= fVar17));
      fVar17 = (float)(~-(uint)(0.1 <= fVar17) & 0x3dcccccd | (uint)in_XMM1_Da);
      UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)__this_02,fVar17,(MethodInfo *)0x0);
      lVar11 = *(long *)&(unaff_R14->fields)._heightDistance;
      main = (Cameras_InGameCamera_o **)__this_02;
      if (((lVar11 != 0) &&
          (main = *(Cameras_InGameCamera_o ***)(lVar11 + 0x30),
          (Cameras_InGameCamera_o *)main != (Cameras_InGameCamera_o *)0x0)) &&
         (pCVar8 = (Cameras_InGameCamera_o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)main,
                              *(Il2CppObject **)(TypeInfo_TitanSounds[1].fields.m_CachedPtr + 0xe0),MethodInfo_AudioSource_get_Item),
         pCVar8 != (Cameras_InGameCamera_o *)0x0)) {
        UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)pCVar8,fVar17,(MethodInfo *)0x0);
        lVar11 = *(long *)&(unaff_R14->fields)._heightDistance;
        main = (Cameras_InGameCamera_o **)pCVar8;
        if (((lVar11 != 0) &&
            (main = *(Cameras_InGameCamera_o ***)(lVar11 + 0x30),
            (Cameras_InGameCamera_o *)main != (Cameras_InGameCamera_o *)0x0)) &&
           (pCVar8 = (Cameras_InGameCamera_o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                *(Il2CppObject **)TypeInfo_TitanSounds[1].fields.m_CachedPtr,MethodInfo_AudioSource_get_Item),
           pCVar8 != (Cameras_InGameCamera_o *)0x0)) {
          auStack_70._0_4_ = (float)auStack_70._0_4_ * 0.125;
          in_XMM1_Da = 0.5;
          if ((float)auStack_70._0_4_ <= 0.5) {
            in_XMM1_Da = (float)auStack_70._0_4_;
          }
          in_XMM1_Da = (float)((uint)in_XMM1_Da & -(uint)(0.1 <= (float)auStack_70._0_4_));
          value = (float)(~-(uint)(0.1 <= (float)auStack_70._0_4_) & 0x3dcccccd | (uint)in_XMM1_Da);
          UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)pCVar8,value,(MethodInfo *)0x0);
          lVar11 = *(long *)&(unaff_R14->fields)._heightDistance;
          main = (Cameras_InGameCamera_o **)pCVar8;
          if (((lVar11 != 0) &&
              (main = *(Cameras_InGameCamera_o ***)(lVar11 + 0x30),
              (Cameras_InGameCamera_o *)main != (Cameras_InGameCamera_o *)0x0)) &&
             (pCVar8 = (Cameras_InGameCamera_o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                  *(Il2CppObject **)(TypeInfo_TitanSounds[1].fields.m_CachedPtr + 8),MethodInfo_AudioSource_get_Item),
             pCVar8 != (Cameras_InGameCamera_o *)0x0)) {
            UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)pCVar8,value,(MethodInfo *)0x0);
            lVar11 = *(long *)&(unaff_R14->fields)._heightDistance;
            main = (Cameras_InGameCamera_o **)pCVar8;
            if (((lVar11 != 0) &&
                (main = *(Cameras_InGameCamera_o ***)(lVar11 + 0x30),
                (Cameras_InGameCamera_o *)main != (Cameras_InGameCamera_o *)0x0)) &&
               (pCVar8 = (Cameras_InGameCamera_o *)
                         System_Collections_Generic_Dictionary_object__object___get_Item
                                   ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                    *(Il2CppObject **)(TypeInfo_TitanSounds[1].fields.m_CachedPtr + 0x10),MethodInfo_AudioSource_get_Item
                                   ), pCVar8 != (Cameras_InGameCamera_o *)0x0)) {
              UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)pCVar8,value,(MethodInfo *)0x0)
              ;
              lVar11 = *(long *)&(unaff_R14->fields)._heightDistance;
              main = (Cameras_InGameCamera_o **)pCVar8;
              if (((lVar11 != 0) &&
                  (main = *(Cameras_InGameCamera_o ***)(lVar11 + 0x30),
                  (Cameras_InGameCamera_o *)main != (Cameras_InGameCamera_o *)0x0)) &&
                 (pCVar8 = (Cameras_InGameCamera_o *)
                           System_Collections_Generic_Dictionary_object__object___get_Item
                                     ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                      *(Il2CppObject **)(TypeInfo_TitanSounds[1].fields.m_CachedPtr + 0x140),
                                      MethodInfo_AudioSource_get_Item), pCVar8 != (Cameras_InGameCamera_o *)0x0)) {
                UnityEngine_AudioSource__set_volume
                          ((UnityEngine_AudioSource_o *)pCVar8,fVar17,(MethodInfo *)0x0);
                lVar11 = *(long *)&(unaff_R14->fields)._heightDistance;
                main = (Cameras_InGameCamera_o **)pCVar8;
                if (((lVar11 != 0) &&
                    (main = *(Cameras_InGameCamera_o ***)(lVar11 + 0x30),
                    (Cameras_InGameCamera_o *)main != (Cameras_InGameCamera_o *)0x0)) &&
                   (pCVar8 = (Cameras_InGameCamera_o *)
                             System_Collections_Generic_Dictionary_object__object___get_Item
                                       ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                        *(Il2CppObject **)(TypeInfo_TitanSounds[1].fields.m_CachedPtr + 0x148),
                                        MethodInfo_AudioSource_get_Item), pCVar8 != (Cameras_InGameCamera_o *)0x0)) {
                  UnityEngine_AudioSource__set_volume
                            ((UnityEngine_AudioSource_o *)pCVar8,fVar17,(MethodInfo *)0x0);
                  lVar11 = *(long *)&(unaff_R14->fields)._heightDistance;
                  main = (Cameras_InGameCamera_o **)pCVar8;
                  if (((lVar11 != 0) &&
                      (main = *(Cameras_InGameCamera_o ***)(lVar11 + 0x30),
                      (Cameras_InGameCamera_o *)main != (Cameras_InGameCamera_o *)0x0)) &&
                     (__this_03 = (UnityEngine_AudioSource_o *)
                                  System_Collections_Generic_Dictionary_object__object___get_Item
                                            ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                             *(Il2CppObject **)(TypeInfo_TitanSounds[1].fields.m_CachedPtr + 0x150),
                                             MethodInfo_AudioSource_get_Item), __this_03 != (UnityEngine_AudioSource_o *)0x0)) {
                    UnityEngine_AudioSource__set_volume(__this_03,fVar17,(MethodInfo *)0x0);
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
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf91 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057adf91 = '\x01';
  }
  pSVar9 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)main,MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
  if (pSVar9 != (System_Object_array *)0x0) {
    iVar2 = (int)pSVar9->max_length;
    if (iVar2 < 1) {
      return;
    }
    uVar13 = 0;
    if (iVar2 != 0) {
      do {
        main = (Cameras_InGameCamera_o **)0x0;
        if ((UnityEngine_ParticleSystem_o *)pSVar9->m_Items[(int)uVar13] ==
            (UnityEngine_ParticleSystem_o *)0x0) goto label_0430fb4b;
        main = (Cameras_InGameCamera_o **)
               UnityEngine_ParticleSystem__get_main
                         ((UnityEngine_ParticleSystem_o *)pSVar9->m_Items[(int)uVar13],(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Utility_Util__ScaleParticleStartSize
                  ((UnityEngine_ParticleSystem_MainModule_o)main,fVar17,(MethodInfo *)0x0);
        Utility_Util__ScaleParticleStartSpeed
                  ((UnityEngine_ParticleSystem_MainModule_o)main,fVar17,(MethodInfo *)0x0);
        uVar13 = uVar13 + 1;
        uVar3 = (uint)pSVar9->max_length;
        if ((int)uVar3 <= (int)uVar13) {
          return;
        }
      } while (uVar13 < uVar3);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0430fb4b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SetSizeRPC");
    g_data_057adf92 = '\x01';
  }
  lVar11 = *(long *)&(((Cameras_InGameCamera_o *)main)->fields)._heightDistance;
  if (lVar11 == 0) {
label_0430fc37:
    il2cpp_runtime_helper_022b2c90();
label_0430fc3c:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    __this_00 = *(Photon_Pun_PhotonView_o **)(lVar11 + 0x20);
    pSVar9 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
    if (pSVar9 == (System_Object_array *)0x0) goto label_0430fc37;
    if ((pIVar10 == (Il2CppObject *)0x0) || (lVar11 = il2cpp_runtime_helper_023051f0(pIVar10), lVar11 != 0)) {
      if ((int)pSVar9->max_length != 0) {
        pSVar9->m_Items[0] = pIVar10;
        il2cpp_runtime_helper_022b4080(pSVar9->m_Items);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetSizeRPC",0,pSVar9,(MethodInfo *)0x0);
          return;
        }
        goto label_0430fc37;
      }
      goto label_0430fc3c;
    }
  }
  lVar11 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_05 = *(Characters_AnimationHandler_o **)(lVar11 + 0xb0);
  if (__this_05 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__GetCurrentNormalizedTime(__this_05,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar15 = (Characters_BaseTitan_o *)__this_05[2].fields.Animation;
  if (pCVar15 != (Characters_BaseTitan_o *)0x0) {
    Characters_AnimationHandler__GetLength
              ((Characters_AnimationHandler_o *)pCVar15,
               *(System_String_o **)&__this_05[6].fields._currentAnimationStartTime,(MethodInfo *)0x0);
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  __this_06 = pCVar15;
  if (g_data_057adf93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    __this_06 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf93 = '\x01';
  }
  lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x40), lVar11 != 0)) {
    if ((*(char *)(lVar11 + 0x11) != '\0') &&
       (bVar7 = Utility_RandomGen__Roll(fVar17,(MethodInfo *)0x0), (char)bVar7 != '\0')) {
      if (*(int *)((long)&TypeInfo_TitanSounds[1].fields._follow + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = Characters_TitanSounds__GetRandomHurt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar15,pSVar12,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar15 = __this_06;
  if (g_data_057adf94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    pCVar15 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf94 = '\x01';
  }
  lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x40), lVar11 != 0)) {
    if ((*(char *)(lVar11 + 0x11) != '\0') &&
       (bVar7 = Utility_RandomGen__Roll(fVar17,(MethodInfo *)0x0), (char)bVar7 != '\0')) {
      if (*(int *)((long)&TypeInfo_TitanSounds[1].fields._follow + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = Characters_TitanSounds__GetRandomGrabGrunt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_06,pSVar12,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    g_data_057adf96 = '\x01';
  }
  __this_04 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HandleSpawnCollisionCoroutine_d__166)
  ;
  cVar14 = '\0';
  pCVar16 = __this_04;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor(__this_04,0,(MethodInfo *)0x0);
  if (__this_04 != (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0) {
    (__this_04->fields).__4__this = pCVar15;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).__4__this,pCVar15);
    (__this_04->fields).time = fVar17;
    (__this_04->fields).maxSpeed = in_XMM1_Da;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  x_00 = (long *)pCVar16;
  if (g_data_057adf97 == '\0') {
    x_00 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf97 = '\x01';
  }
  if (pCVar16[5].monitor != (void *)0x0) {
    x_00 = *(long **)((long)pCVar16[5].monitor + 0x78);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    pvVar4 = pCVar16[5].monitor;
    if (cVar14 == '\0') {
      if ((pvVar4 != (void *)0x0) &&
         (x_00 = *(long **)((long)pvVar4 + 0x78),
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x_00 !=
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
        bVar7 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x_00,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return;
        }
        if (pCVar16[5].monitor != (void *)0x0) {
          __this_07 = *(UnityEngine_Collider_o **)((long)pCVar16[5].monitor + 0x78);
          x_00 = (long *)0x0;
          if (__this_07 != (UnityEngine_Collider_o *)0x0) {
            bVar7 = 0;
            goto label_0430ffa8;
          }
        }
      }
    }
    else if ((pvVar4 != (void *)0x0) &&
            (x_00 = *(long **)((long)pvVar4 + 0x78),
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x_00 !=
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
      bVar7 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x_00,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return;
      }
      if (pCVar16[5].monitor != (void *)0x0) {
        __this_07 = *(UnityEngine_Collider_o **)((long)pCVar16[5].monitor + 0x78);
        x_00 = (long *)0x0;
        if (__this_07 != (UnityEngine_Collider_o *)0x0) {
          bVar7 = 1;
label_0430ffa8:
          UnityEngine_Collider__set_enabled(__this_07,bVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar6 = (*((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x_00)->klass[6].vtable.
            _1_Finalize.methodPtr)();
  pCVar5 = ((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x_00)->klass;
  vtableDispatch = *(code **)&pCVar5[6]._2.interfaces_count;
  uVar18._0_1_ = pCVar5[6]._2.naturalAligment;
  uVar18._1_1_ = pCVar5[6]._2.packingSize;
  uVar18._2_1_ = pCVar5[6]._2.bitflags1;
  uVar18._3_1_ = pCVar5[6]._2.bitflags2;
  uVar18._4_4_ = *(undefined4 *)&pCVar5[6]._2.field_0x6c;
  (*vtableDispatch)(x_00,uVar6,uVar18,pCVar5,vtableDispatch,in_R9,pCVar15);
  return;
}


// Characters.BaseTitan$$ScaleSounds
// il2cpp: void Characters_BaseTitan__ScaleSounds (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x430f710

void Characters_BaseTitan__ScaleSounds(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Photon_Pun_PhotonView_o *__this_00;
  void *pvVar4;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_c *pCVar5;
  code *vtableDispatch;
  undefined8 uVar6;
  float value;
  undefined1 uVar7;
  bool_conflict bVar8;
  Characters_BaseTitan_o *pCVar9;
  Characters_BaseTitan_o *pCVar10;
  UnityEngine_AudioSource_o *__this_01;
  System_Object_array *pSVar11;
  Il2CppObject *pIVar12;
  long lVar13;
  System_String_o *pSVar14;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_02;
  uint uVar15;
  char cVar16;
  Characters_BaseTitan_o **main;
  Characters_AnimationHandler_o *__this_03;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *pCVar17;
  long *x;
  UnityEngine_Collider_o *__this_04;
  undefined8 in_R9;
  float fVar18;
  float in_XMM1_Da;
  float fStack_48;
  
  main = (Characters_BaseTitan_o **)__this;
  if (g_data_057adf90 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    main = &TypeInfo_TitanSounds;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf90 = '\x01';
  }
  fStack_48 = size;
  if (__this != (Characters_BaseTitan_o *)0x0) {
    bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseShifter)) {
      fStack_48 = size * 3.5;
    }
  }
  lVar13 = *(long *)&(__this->fields).Dead;
  if (lVar13 != 0) {
    pCVar10 = *(Characters_BaseTitan_o **)(lVar13 + 0x30);
    main = (Characters_BaseTitan_o **)TypeInfo_TitanSounds;
    if ((TypeInfo_TitanSounds->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((pCVar10 != (Characters_BaseTitan_o *)0x0) &&
       (pCVar9 = (Characters_BaseTitan_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)pCVar10,
                            *(Il2CppObject **)
                             &(TypeInfo_TitanSounds->fields).MovementSync[1].fields._correctRotation.fields.z,
                            MethodInfo_AudioSource_get_Item), main = (Characters_BaseTitan_o **)pCVar10,
       pCVar9 != (Characters_BaseTitan_o *)0x0)) {
      fVar18 = fStack_48 * 0.3;
      in_XMM1_Da = 1.0;
      if (fVar18 <= 1.0) {
        in_XMM1_Da = fVar18;
      }
      in_XMM1_Da = (float)((uint)in_XMM1_Da & -(uint)(0.1 <= fVar18));
      fVar18 = (float)(~-(uint)(0.1 <= fVar18) & 0x3dcccccd | (uint)in_XMM1_Da);
      UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)pCVar9,fVar18,(MethodInfo *)0x0);
      lVar13 = *(long *)&(__this->fields).Dead;
      main = (Characters_BaseTitan_o **)pCVar9;
      if (((lVar13 != 0) &&
          (main = *(Characters_BaseTitan_o ***)(lVar13 + 0x30),
          (Characters_BaseTitan_o *)main != (Characters_BaseTitan_o *)0x0)) &&
         (pCVar10 = (Characters_BaseTitan_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)main,
                               *(Il2CppObject **)
                                &(TypeInfo_TitanSounds->fields).MovementSync[1].fields._correctVelocity.fields,
                               MethodInfo_AudioSource_get_Item), pCVar10 != (Characters_BaseTitan_o *)0x0)) {
        UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)pCVar10,fVar18,(MethodInfo *)0x0);
        lVar13 = *(long *)&(__this->fields).Dead;
        main = (Characters_BaseTitan_o **)pCVar10;
        if (((lVar13 != 0) &&
            (main = *(Characters_BaseTitan_o ***)(lVar13 + 0x30),
            (Characters_BaseTitan_o *)main != (Characters_BaseTitan_o *)0x0)) &&
           (pCVar10 = (Characters_BaseTitan_o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                 (Il2CppObject *)((TypeInfo_TitanSounds->fields).MovementSync)->klass,MethodInfo_AudioSource_get_Item),
           pCVar10 != (Characters_BaseTitan_o *)0x0)) {
          fStack_48 = fStack_48 * 0.125;
          in_XMM1_Da = 0.5;
          if (fStack_48 <= 0.5) {
            in_XMM1_Da = fStack_48;
          }
          in_XMM1_Da = (float)((uint)in_XMM1_Da & -(uint)(0.1 <= fStack_48));
          value = (float)(~-(uint)(0.1 <= fStack_48) & 0x3dcccccd | (uint)in_XMM1_Da);
          UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)pCVar10,value,(MethodInfo *)0x0);
          lVar13 = *(long *)&(__this->fields).Dead;
          main = (Characters_BaseTitan_o **)pCVar10;
          if (((lVar13 != 0) &&
              (main = *(Characters_BaseTitan_o ***)(lVar13 + 0x30),
              (Characters_BaseTitan_o *)main != (Characters_BaseTitan_o *)0x0)) &&
             (pCVar10 = (Characters_BaseTitan_o *)
                        System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                   ((TypeInfo_TitanSounds->fields).MovementSync)->monitor,MethodInfo_AudioSource_get_Item),
             pCVar10 != (Characters_BaseTitan_o *)0x0)) {
            UnityEngine_AudioSource__set_volume((UnityEngine_AudioSource_o *)pCVar10,value,(MethodInfo *)0x0);
            lVar13 = *(long *)&(__this->fields).Dead;
            main = (Characters_BaseTitan_o **)pCVar10;
            if (((lVar13 != 0) &&
                (main = *(Characters_BaseTitan_o ***)(lVar13 + 0x30),
                (Characters_BaseTitan_o *)main != (Characters_BaseTitan_o *)0x0)) &&
               (pCVar10 = (Characters_BaseTitan_o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                     (Il2CppObject *)
                                     (((TypeInfo_TitanSounds->fields).MovementSync)->fields).m_CachedPtr,MethodInfo_AudioSource_get_Item)
               , pCVar10 != (Characters_BaseTitan_o *)0x0)) {
              UnityEngine_AudioSource__set_volume
                        ((UnityEngine_AudioSource_o *)pCVar10,value,(MethodInfo *)0x0);
              lVar13 = *(long *)&(__this->fields).Dead;
              main = (Characters_BaseTitan_o **)pCVar10;
              if (((lVar13 != 0) &&
                  (main = *(Characters_BaseTitan_o ***)(lVar13 + 0x30),
                  (Characters_BaseTitan_o *)main != (Characters_BaseTitan_o *)0x0)) &&
                 (pCVar10 = (Characters_BaseTitan_o *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                       (Il2CppObject *)
                                       (TypeInfo_TitanSounds->fields).MovementSync[2].fields.m_CachedPtr,MethodInfo_AudioSource_get_Item)
                 , pCVar10 != (Characters_BaseTitan_o *)0x0)) {
                UnityEngine_AudioSource__set_volume
                          ((UnityEngine_AudioSource_o *)pCVar10,fVar18,(MethodInfo *)0x0);
                lVar13 = *(long *)&(__this->fields).Dead;
                main = (Characters_BaseTitan_o **)pCVar10;
                if (((lVar13 != 0) &&
                    (main = *(Characters_BaseTitan_o ***)(lVar13 + 0x30),
                    (Characters_BaseTitan_o *)main != (Characters_BaseTitan_o *)0x0)) &&
                   (pCVar10 = (Characters_BaseTitan_o *)
                              System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                         (Il2CppObject *)
                                         (TypeInfo_TitanSounds->fields).MovementSync[2].fields.
                                         m_CancellationTokenSource,MethodInfo_AudioSource_get_Item),
                   pCVar10 != (Characters_BaseTitan_o *)0x0)) {
                  UnityEngine_AudioSource__set_volume
                            ((UnityEngine_AudioSource_o *)pCVar10,fVar18,(MethodInfo *)0x0);
                  lVar13 = *(long *)&(__this->fields).Dead;
                  main = (Characters_BaseTitan_o **)pCVar10;
                  if (((lVar13 != 0) &&
                      (main = *(Characters_BaseTitan_o ***)(lVar13 + 0x30),
                      (Characters_BaseTitan_o *)main != (Characters_BaseTitan_o *)0x0)) &&
                     (__this_01 = (UnityEngine_AudioSource_o *)
                                  System_Collections_Generic_Dictionary_object__object___get_Item
                                            ((System_Collections_Generic_Dictionary_object__object__o *)main,
                                             (Il2CppObject *)
                                             (TypeInfo_TitanSounds->fields).MovementSync[2].fields.pvCache,
                                             MethodInfo_AudioSource_get_Item), __this_01 != (UnityEngine_AudioSource_o *)0x0)) {
                    UnityEngine_AudioSource__set_volume(__this_01,fVar18,(MethodInfo *)0x0);
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
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf91 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057adf91 = '\x01';
  }
  pSVar11 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                      ((UnityEngine_Component_o *)main,MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
  if (pSVar11 != (System_Object_array *)0x0) {
    iVar2 = (int)pSVar11->max_length;
    if (iVar2 < 1) {
      return;
    }
    uVar15 = 0;
    if (iVar2 != 0) {
      do {
        main = (Characters_BaseTitan_o **)0x0;
        if ((UnityEngine_ParticleSystem_o *)pSVar11->m_Items[(int)uVar15] ==
            (UnityEngine_ParticleSystem_o *)0x0) goto label_0430fb4b;
        main = (Characters_BaseTitan_o **)
               UnityEngine_ParticleSystem__get_main
                         ((UnityEngine_ParticleSystem_o *)pSVar11->m_Items[(int)uVar15],(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Utility_Util__ScaleParticleStartSize
                  ((UnityEngine_ParticleSystem_MainModule_o)main,fVar18,(MethodInfo *)0x0);
        Utility_Util__ScaleParticleStartSpeed
                  ((UnityEngine_ParticleSystem_MainModule_o)main,fVar18,(MethodInfo *)0x0);
        uVar15 = uVar15 + 1;
        uVar3 = (uint)pSVar11->max_length;
        if ((int)uVar3 <= (int)uVar15) {
          return;
        }
      } while (uVar15 < uVar3);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0430fb4b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SetSizeRPC");
    g_data_057adf92 = '\x01';
  }
  lVar13 = *(long *)&(((Characters_BaseTitan_o *)main)->fields).Dead;
  if (lVar13 == 0) {
label_0430fc37:
    il2cpp_runtime_helper_022b2c90();
label_0430fc3c:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    __this_00 = *(Photon_Pun_PhotonView_o **)(lVar13 + 0x20);
    pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
    if (pSVar11 == (System_Object_array *)0x0) goto label_0430fc37;
    if ((pIVar12 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar12), lVar13 != 0)) {
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pIVar12;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetSizeRPC",0,pSVar11,(MethodInfo *)0x0);
          return;
        }
        goto label_0430fc37;
      }
      goto label_0430fc3c;
    }
  }
  lVar13 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_03 = *(Characters_AnimationHandler_o **)(lVar13 + 0xb0);
  if (__this_03 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__GetCurrentNormalizedTime(__this_03,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar10 = (Characters_BaseTitan_o *)__this_03[2].fields.Animation;
  if (pCVar10 != (Characters_BaseTitan_o *)0x0) {
    Characters_AnimationHandler__GetLength
              ((Characters_AnimationHandler_o *)pCVar10,
               *(System_String_o **)&__this_03[6].fields._currentAnimationStartTime,(MethodInfo *)0x0);
    return;
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar9 = pCVar10;
  if (g_data_057adf93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    pCVar9 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf93 = '\x01';
  }
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x40), lVar13 != 0)) {
    if ((*(char *)(lVar13 + 0x11) != '\0') &&
       (bVar8 = Utility_RandomGen__Roll(fVar18,(MethodInfo *)0x0), (char)bVar8 != '\0')) {
      if ((TypeInfo_TitanSounds->fields)._stepPhase == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = Characters_TitanSounds__GetRandomHurt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar10,pSVar14,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar10 = pCVar9;
  if (g_data_057adf94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    pCVar10 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf94 = '\x01';
  }
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x40), lVar13 != 0)) {
    if ((*(char *)(lVar13 + 0x11) != '\0') &&
       (bVar8 = Utility_RandomGen__Roll(fVar18,(MethodInfo *)0x0), (char)bVar8 != '\0')) {
      if ((TypeInfo_TitanSounds->fields)._stepPhase == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = Characters_TitanSounds__GetRandomGrabGrunt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar9,pSVar14,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar18 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    g_data_057adf96 = '\x01';
  }
  __this_02 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HandleSpawnCollisionCoroutine_d__166)
  ;
  cVar16 = '\0';
  pCVar17 = __this_02;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor(__this_02,0,(MethodInfo *)0x0);
  if (__this_02 != (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0) {
    (__this_02->fields).__4__this = pCVar10;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).__4__this,pCVar10);
    (__this_02->fields).time = fVar18;
    (__this_02->fields).maxSpeed = in_XMM1_Da;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  x = (long *)pCVar17;
  if (g_data_057adf97 == '\0') {
    x = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf97 = '\x01';
  }
  if (pCVar17[5].monitor != (void *)0x0) {
    x = *(long **)((long)pCVar17[5].monitor + 0x78);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    pvVar4 = pCVar17[5].monitor;
    if (cVar16 == '\0') {
      if ((pvVar4 != (void *)0x0) &&
         (x = *(long **)((long)pvVar4 + 0x78),
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
        bVar8 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          return;
        }
        if (pCVar17[5].monitor != (void *)0x0) {
          __this_04 = *(UnityEngine_Collider_o **)((long)pCVar17[5].monitor + 0x78);
          x = (long *)0x0;
          if (__this_04 != (UnityEngine_Collider_o *)0x0) {
            bVar8 = 0;
            goto label_0430ffa8;
          }
        }
      }
    }
    else if ((pvVar4 != (void *)0x0) &&
            (x = *(long **)((long)pvVar4 + 0x78),
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
      bVar8 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return;
      }
      if (pCVar17[5].monitor != (void *)0x0) {
        __this_04 = *(UnityEngine_Collider_o **)((long)pCVar17[5].monitor + 0x78);
        x = (long *)0x0;
        if (__this_04 != (UnityEngine_Collider_o *)0x0) {
          bVar8 = 1;
label_0430ffa8:
          UnityEngine_Collider__set_enabled(__this_04,bVar8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar7 = (*((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass[6].vtable._1_Finalize.
            methodPtr)();
  pCVar5 = ((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass;
  vtableDispatch = *(code **)&pCVar5[6]._2.interfaces_count;
  uVar6._0_1_ = pCVar5[6]._2.naturalAligment;
  uVar6._1_1_ = pCVar5[6]._2.packingSize;
  uVar6._2_1_ = pCVar5[6]._2.bitflags1;
  uVar6._3_1_ = pCVar5[6]._2.bitflags2;
  uVar6._4_4_ = *(undefined4 *)&pCVar5[6]._2.field_0x6c;
  (*vtableDispatch)(x,uVar7,uVar6,pCVar5,vtableDispatch,in_R9,pCVar10);
  return;
}


// Characters.BaseTitan$$SetSizeParticles
// il2cpp: void Characters_BaseTitan__SetSizeParticles (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x430fa70

void Characters_BaseTitan__SetSizeParticles(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Photon_Pun_PhotonView_o *__this_00;
  void *pvVar3;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_c *pCVar4;
  code *vtableDispatch;
  undefined8 uVar5;
  undefined1 uVar6;
  bool_conflict bVar7;
  System_Object_array *pSVar8;
  Il2CppObject *pIVar9;
  long lVar10;
  System_String_o *pSVar11;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_01;
  uint uVar12;
  char cVar13;
  Characters_AnimationHandler_o *__this_02;
  Characters_BaseTitan_o *__this_03;
  Characters_BaseTitan_o *pCVar14;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *pCVar15;
  long *x;
  UnityEngine_Collider_o *__this_04;
  undefined8 in_R9;
  float fVar16;
  float in_XMM1_Da;
  
  if (g_data_057adf91 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057adf91 = '\x01';
  }
  pSVar8 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                     ((UnityEngine_Component_o *)__this,MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
  if (pSVar8 != (System_Object_array *)0x0) {
    iVar1 = (int)pSVar8->max_length;
    if (iVar1 < 1) {
      return;
    }
    uVar12 = 0;
    if (iVar1 != 0) {
      do {
        __this = (Characters_BaseTitan_o *)0x0;
        if ((UnityEngine_ParticleSystem_o *)pSVar8->m_Items[(int)uVar12] ==
            (UnityEngine_ParticleSystem_o *)0x0) goto label_0430fb4b;
        __this = (Characters_BaseTitan_o *)
                 UnityEngine_ParticleSystem__get_main
                           ((UnityEngine_ParticleSystem_o *)pSVar8->m_Items[(int)uVar12],(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Utility_Util__ScaleParticleStartSize
                  ((UnityEngine_ParticleSystem_MainModule_o)__this,size,(MethodInfo *)0x0);
        Utility_Util__ScaleParticleStartSpeed
                  ((UnityEngine_ParticleSystem_MainModule_o)__this,size,(MethodInfo *)0x0);
        uVar12 = uVar12 + 1;
        uVar2 = (uint)pSVar8->max_length;
        if ((int)uVar2 <= (int)uVar12) {
          return;
        }
      } while (uVar12 < uVar2);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0430fb4b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SetSizeRPC");
    g_data_057adf92 = '\x01';
  }
  lVar10 = *(long *)&(__this->fields).Dead;
  if (lVar10 == 0) {
label_0430fc37:
    il2cpp_runtime_helper_022b2c90();
label_0430fc3c:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    __this_00 = *(Photon_Pun_PhotonView_o **)(lVar10 + 0x20);
    pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
    if (pSVar8 == (System_Object_array *)0x0) goto label_0430fc37;
    if ((pIVar9 == (Il2CppObject *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pIVar9), lVar10 != 0)) {
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = pIVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetSizeRPC",0,pSVar8,(MethodInfo *)0x0);
          return;
        }
        goto label_0430fc37;
      }
      goto label_0430fc3c;
    }
  }
  lVar10 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_02 = *(Characters_AnimationHandler_o **)(lVar10 + 0xb0);
  if (__this_02 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__GetCurrentNormalizedTime(__this_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar14 = (Characters_BaseTitan_o *)__this_02[2].fields.Animation;
  if (pCVar14 != (Characters_BaseTitan_o *)0x0) {
    Characters_AnimationHandler__GetLength
              ((Characters_AnimationHandler_o *)pCVar14,
               *(System_String_o **)&__this_02[6].fields._currentAnimationStartTime,(MethodInfo *)0x0);
    return;
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  __this_03 = pCVar14;
  if (g_data_057adf93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    __this_03 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf93 = '\x01';
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x40), lVar10 != 0)) {
    if ((*(char *)(lVar10 + 0x11) != '\0') &&
       (bVar7 = Utility_RandomGen__Roll(fVar16,(MethodInfo *)0x0), (char)bVar7 != '\0')) {
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = Characters_TitanSounds__GetRandomHurt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar14,pSVar11,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar14 = __this_03;
  if (g_data_057adf94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    pCVar14 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf94 = '\x01';
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x40), lVar10 != 0)) {
    if ((*(char *)(lVar10 + 0x11) != '\0') &&
       (bVar7 = Utility_RandomGen__Roll(fVar16,(MethodInfo *)0x0), (char)bVar7 != '\0')) {
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = Characters_TitanSounds__GetRandomGrabGrunt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_03,pSVar11,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    g_data_057adf96 = '\x01';
  }
  __this_01 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HandleSpawnCollisionCoroutine_d__166)
  ;
  cVar13 = '\0';
  pCVar15 = __this_01;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor(__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0) {
    (__this_01->fields).__4__this = pCVar14;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).__4__this,pCVar14);
    (__this_01->fields).time = fVar16;
    (__this_01->fields).maxSpeed = in_XMM1_Da;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  x = (long *)pCVar15;
  if (g_data_057adf97 == '\0') {
    x = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf97 = '\x01';
  }
  if (pCVar15[5].monitor != (void *)0x0) {
    x = *(long **)((long)pCVar15[5].monitor + 0x78);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    pvVar3 = pCVar15[5].monitor;
    if (cVar13 == '\0') {
      if ((pvVar3 != (void *)0x0) &&
         (x = *(long **)((long)pvVar3 + 0x78),
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
        bVar7 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          return;
        }
        if (pCVar15[5].monitor != (void *)0x0) {
          __this_04 = *(UnityEngine_Collider_o **)((long)pCVar15[5].monitor + 0x78);
          x = (long *)0x0;
          if (__this_04 != (UnityEngine_Collider_o *)0x0) {
            bVar7 = 0;
            goto label_0430ffa8;
          }
        }
      }
    }
    else if ((pvVar3 != (void *)0x0) &&
            (x = *(long **)((long)pvVar3 + 0x78),
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
      bVar7 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return;
      }
      if (pCVar15[5].monitor != (void *)0x0) {
        __this_04 = *(UnityEngine_Collider_o **)((long)pCVar15[5].monitor + 0x78);
        x = (long *)0x0;
        if (__this_04 != (UnityEngine_Collider_o *)0x0) {
          bVar7 = 1;
label_0430ffa8:
          UnityEngine_Collider__set_enabled(__this_04,bVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar6 = (*((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass[6].vtable._1_Finalize.
            methodPtr)();
  pCVar4 = ((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass;
  vtableDispatch = *(code **)&pCVar4[6]._2.interfaces_count;
  uVar5._0_1_ = pCVar4[6]._2.naturalAligment;
  uVar5._1_1_ = pCVar4[6]._2.packingSize;
  uVar5._2_1_ = pCVar4[6]._2.bitflags1;
  uVar5._3_1_ = pCVar4[6]._2.bitflags2;
  uVar5._4_4_ = *(undefined4 *)&pCVar4[6]._2.field_0x6c;
  (*vtableDispatch)(x,uVar6,uVar5,pCVar4,vtableDispatch,in_R9,pCVar14);
  return;
}


// Characters.BaseTitan$$SetSize
// il2cpp: void Characters_BaseTitan__SetSize (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x430fb50

void Characters_BaseTitan__SetSize(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  void *pvVar1;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_c *pCVar2;
  code *vtableDispatch;
  undefined8 uVar3;
  undefined1 uVar4;
  bool_conflict bVar5;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  long lVar7;
  System_String_o *pSVar8;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_01;
  char cVar9;
  Characters_AnimationHandler_o *__this_02;
  Characters_BaseTitan_o *__this_03;
  Characters_BaseTitan_o *pCVar10;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *pCVar11;
  long *x;
  UnityEngine_Collider_o *__this_04;
  undefined8 in_R9;
  float fVar12;
  float in_XMM1_Da;
  
  if (g_data_057adf92 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SetSizeRPC");
    g_data_057adf92 = '\x01';
  }
  lVar7 = *(long *)&(__this->fields).Dead;
  if (lVar7 == 0) {
label_0430fc37:
    il2cpp_runtime_helper_022b2c90();
label_0430fc3c:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    __this_00 = *(Photon_Pun_PhotonView_o **)(lVar7 + 0x20);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9be8);
    if (parameters == (System_Object_array *)0x0) goto label_0430fc37;
    if ((pIVar6 == (Il2CppObject *)0x0) || (lVar7 = il2cpp_runtime_helper_023051f0(pIVar6), lVar7 != 0)) {
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar6;
        il2cpp_runtime_helper_022b4080(parameters->m_Items);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_00,"SetSizeRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto label_0430fc37;
      }
      goto label_0430fc3c;
    }
  }
  lVar7 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_02 = *(Characters_AnimationHandler_o **)(lVar7 + 0xb0);
  if (__this_02 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__GetCurrentNormalizedTime(__this_02,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar10 = (Characters_BaseTitan_o *)__this_02[2].fields.Animation;
  if (pCVar10 != (Characters_BaseTitan_o *)0x0) {
    Characters_AnimationHandler__GetLength
              ((Characters_AnimationHandler_o *)pCVar10,
               *(System_String_o **)&__this_02[6].fields._currentAnimationStartTime,(MethodInfo *)0x0);
    return;
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  __this_03 = pCVar10;
  if (g_data_057adf93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    __this_03 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf93 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x40), lVar7 != 0)) {
    if ((*(char *)(lVar7 + 0x11) != '\0') &&
       (bVar5 = Utility_RandomGen__Roll(fVar12,(MethodInfo *)0x0), (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = Characters_TitanSounds__GetRandomHurt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar10,pSVar8,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar10 = __this_03;
  if (g_data_057adf94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    pCVar10 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf94 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x40), lVar7 != 0)) {
    if ((*(char *)(lVar7 + 0x11) != '\0') &&
       (bVar5 = Utility_RandomGen__Roll(fVar12,(MethodInfo *)0x0), (char)bVar5 != '\0')) {
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = Characters_TitanSounds__GetRandomGrabGrunt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_03,pSVar8,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    g_data_057adf96 = '\x01';
  }
  __this_01 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HandleSpawnCollisionCoroutine_d__166)
  ;
  cVar9 = '\0';
  pCVar11 = __this_01;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor(__this_01,0,(MethodInfo *)0x0);
  if (__this_01 != (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0) {
    (__this_01->fields).__4__this = pCVar10;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).__4__this,pCVar10);
    (__this_01->fields).time = fVar12;
    (__this_01->fields).maxSpeed = in_XMM1_Da;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  x = (long *)pCVar11;
  if (g_data_057adf97 == '\0') {
    x = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf97 = '\x01';
  }
  if (pCVar11[5].monitor != (void *)0x0) {
    x = *(long **)((long)pCVar11[5].monitor + 0x78);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    pvVar1 = pCVar11[5].monitor;
    if (cVar9 == '\0') {
      if ((pvVar1 != (void *)0x0) &&
         (x = *(long **)((long)pvVar1 + 0x78),
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
        bVar5 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        if (pCVar11[5].monitor != (void *)0x0) {
          __this_04 = *(UnityEngine_Collider_o **)((long)pCVar11[5].monitor + 0x78);
          x = (long *)0x0;
          if (__this_04 != (UnityEngine_Collider_o *)0x0) {
            bVar5 = 0;
            goto label_0430ffa8;
          }
        }
      }
    }
    else if ((pvVar1 != (void *)0x0) &&
            (x = *(long **)((long)pvVar1 + 0x78),
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
      bVar5 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      if (pCVar11[5].monitor != (void *)0x0) {
        __this_04 = *(UnityEngine_Collider_o **)((long)pCVar11[5].monitor + 0x78);
        x = (long *)0x0;
        if (__this_04 != (UnityEngine_Collider_o *)0x0) {
          bVar5 = 1;
label_0430ffa8:
          UnityEngine_Collider__set_enabled(__this_04,bVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar4 = (*((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass[6].vtable._1_Finalize.
            methodPtr)();
  pCVar2 = ((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass;
  vtableDispatch = *(code **)&pCVar2[6]._2.interfaces_count;
  uVar3._0_1_ = pCVar2[6]._2.naturalAligment;
  uVar3._1_1_ = pCVar2[6]._2.packingSize;
  uVar3._2_1_ = pCVar2[6]._2.bitflags1;
  uVar3._3_1_ = pCVar2[6]._2.bitflags2;
  uVar3._4_4_ = *(undefined4 *)&pCVar2[6]._2.field_0x6c;
  (*vtableDispatch)(x,uVar4,uVar3,pCVar2,vtableDispatch,in_R9,pCVar10);
  return;
}


// Characters.BaseTitan$$GetAnimationTime
// il2cpp: float Characters_BaseTitan__GetAnimationTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430fc50

float Characters_BaseTitan__GetAnimationTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  void *pvVar2;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_c *pCVar3;
  code *vtableDispatch;
  undefined8 uVar4;
  undefined1 uVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_00;
  char cVar8;
  Characters_AnimationHandler_o *__this_01;
  Characters_BaseTitan_o *__this_02;
  Characters_BaseTitan_o *pCVar9;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *pCVar10;
  long *x;
  UnityEngine_Collider_o *__this_03;
  undefined8 in_R9;
  float fVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float in_XMM1_Da;
  
  __this_01 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_01 != (Characters_AnimationHandler_o *)0x0) {
    fVar11 = Characters_AnimationHandler__GetCurrentNormalizedTime(__this_01,(MethodInfo *)0x0);
    return fVar11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar9 = (Characters_BaseTitan_o *)__this_01[2].fields.Animation;
  if (pCVar9 != (Characters_BaseTitan_o *)0x0) {
    fVar12 = Characters_AnimationHandler__GetLength
                       ((Characters_AnimationHandler_o *)pCVar9,
                        *(System_String_o **)&__this_01[6].fields._currentAnimationStartTime,(MethodInfo *)0x0
                       );
    return (fVar12 * fVar11) / *(float *)&__this_01[6].fields._animatorClips;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  __this_02 = pCVar9;
  if (g_data_057adf93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    __this_02 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf93 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if ((*(char *)(lVar1 + 0x11) != '\0') &&
       (bVar6 = Utility_RandomGen__Roll(fVar11,(MethodInfo *)0x0), fVar11 = extraout_XMM0_Da,
       (char)bVar6 != '\0')) {
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Characters_TitanSounds__GetRandomHurt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar9,pSVar7,(MethodInfo *)0x0);
      return extraout_XMM0_Da_00;
    }
    return fVar11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar9 = __this_02;
  if (g_data_057adf94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    pCVar9 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf94 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if ((*(char *)(lVar1 + 0x11) != '\0') &&
       (bVar6 = Utility_RandomGen__Roll(fVar11,(MethodInfo *)0x0), fVar11 = extraout_XMM0_Da_01,
       (char)bVar6 != '\0')) {
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Characters_TitanSounds__GetRandomGrabGrunt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_02,pSVar7,(MethodInfo *)0x0);
      return extraout_XMM0_Da_02;
    }
    return fVar11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    g_data_057adf96 = '\x01';
  }
  __this_00 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HandleSpawnCollisionCoroutine_d__166)
  ;
  cVar8 = '\0';
  pCVar10 = __this_00;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0) {
    (__this_00->fields).__4__this = pCVar9;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pCVar9);
    (__this_00->fields).time = fVar11;
    (__this_00->fields).maxSpeed = in_XMM1_Da;
    return in_XMM1_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  x = (long *)pCVar10;
  if (g_data_057adf97 == '\0') {
    x = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf97 = '\x01';
  }
  if (pCVar10[5].monitor != (void *)0x0) {
    x = *(long **)((long)pCVar10[5].monitor + 0x78);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return extraout_XMM0_Da_03;
    }
    pvVar2 = pCVar10[5].monitor;
    if (cVar8 == '\0') {
      if ((pvVar2 != (void *)0x0) &&
         (x = *(long **)((long)pvVar2 + 0x78),
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
        bVar6 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return extraout_XMM0_Da_05;
        }
        if (pCVar10[5].monitor != (void *)0x0) {
          __this_03 = *(UnityEngine_Collider_o **)((long)pCVar10[5].monitor + 0x78);
          x = (long *)0x0;
          if (__this_03 != (UnityEngine_Collider_o *)0x0) {
            bVar6 = 0;
            goto label_0430ffa8;
          }
        }
      }
    }
    else if ((pvVar2 != (void *)0x0) &&
            (x = *(long **)((long)pvVar2 + 0x78),
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
      bVar6 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return extraout_XMM0_Da_04;
      }
      if (pCVar10[5].monitor != (void *)0x0) {
        __this_03 = *(UnityEngine_Collider_o **)((long)pCVar10[5].monitor + 0x78);
        x = (long *)0x0;
        if (__this_03 != (UnityEngine_Collider_o *)0x0) {
          bVar6 = 1;
label_0430ffa8:
          UnityEngine_Collider__set_enabled(__this_03,bVar6,(MethodInfo *)0x0);
          return extraout_XMM0_Da_06;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar5 = (*((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass[6].vtable._1_Finalize.
            methodPtr)();
  pCVar3 = ((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass;
  vtableDispatch = *(code **)&pCVar3[6]._2.interfaces_count;
  uVar4._0_1_ = pCVar3[6]._2.naturalAligment;
  uVar4._1_1_ = pCVar3[6]._2.packingSize;
  uVar4._2_1_ = pCVar3[6]._2.bitflags1;
  uVar4._3_1_ = pCVar3[6]._2.bitflags2;
  uVar4._4_4_ = *(undefined4 *)&pCVar3[6]._2.field_0x6c;
  fVar11 = (float)(*vtableDispatch)(x,uVar5,uVar4,pCVar3,vtableDispatch,in_R9,pCVar9);
  return fVar11;
}


// Characters.BaseTitan$$GetHitboxTime
// il2cpp: float Characters_BaseTitan__GetHitboxTime (Characters_BaseTitan_o* __this, float normalizedLength, const MethodInfo* method);
// 0x430fc70

float Characters_BaseTitan__GetHitboxTime
                (Characters_BaseTitan_o *__this,float normalizedLength,MethodInfo *method)

{
  long lVar1;
  void *pvVar2;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_c *pCVar3;
  code *vtableDispatch;
  undefined8 uVar4;
  undefined1 uVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_00;
  char cVar8;
  Characters_BaseTitan_o *__this_01;
  Characters_BaseTitan_o *pCVar9;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *pCVar10;
  long *x;
  UnityEngine_Collider_o *__this_02;
  undefined8 in_R9;
  float fVar11;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float in_XMM1_Da;
  
  pCVar9 = *(Characters_BaseTitan_o **)&(__this->fields)._cameraFPS;
  if (pCVar9 != (Characters_BaseTitan_o *)0x0) {
    fVar11 = Characters_AnimationHandler__GetLength
                       ((Characters_AnimationHandler_o *)pCVar9,
                        *(System_String_o **)&(__this->fields)._climbCooldownLeft,(MethodInfo *)0x0);
    return (fVar11 * normalizedLength) / (__this->fields)._startPosition.fields.y;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  __this_01 = pCVar9;
  if (g_data_057adf93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    __this_01 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf93 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if ((*(char *)(lVar1 + 0x11) != '\0') &&
       (bVar6 = Utility_RandomGen__Roll(fVar11,(MethodInfo *)0x0), fVar11 = extraout_XMM0_Da,
       (char)bVar6 != '\0')) {
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Characters_TitanSounds__GetRandomHurt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)pCVar9,pSVar7,(MethodInfo *)0x0);
      return extraout_XMM0_Da_00;
    }
    return fVar11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar9 = __this_01;
  if (g_data_057adf94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    pCVar9 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf94 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if ((*(char *)(lVar1 + 0x11) != '\0') &&
       (bVar6 = Utility_RandomGen__Roll(fVar11,(MethodInfo *)0x0), fVar11 = extraout_XMM0_Da_01,
       (char)bVar6 != '\0')) {
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Characters_TitanSounds__GetRandomGrabGrunt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_01,pSVar7,(MethodInfo *)0x0);
      return extraout_XMM0_Da_02;
    }
    return fVar11;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    g_data_057adf96 = '\x01';
  }
  __this_00 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HandleSpawnCollisionCoroutine_d__166)
  ;
  cVar8 = '\0';
  pCVar10 = __this_00;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0) {
    (__this_00->fields).__4__this = pCVar9;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pCVar9);
    (__this_00->fields).time = fVar11;
    (__this_00->fields).maxSpeed = in_XMM1_Da;
    return in_XMM1_Da;
  }
  il2cpp_runtime_helper_022b2c90();
  x = (long *)pCVar10;
  if (g_data_057adf97 == '\0') {
    x = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf97 = '\x01';
  }
  if (pCVar10[5].monitor != (void *)0x0) {
    x = *(long **)((long)pCVar10[5].monitor + 0x78);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return extraout_XMM0_Da_03;
    }
    pvVar2 = pCVar10[5].monitor;
    if (cVar8 == '\0') {
      if ((pvVar2 != (void *)0x0) &&
         (x = *(long **)((long)pvVar2 + 0x78),
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
        bVar6 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return extraout_XMM0_Da_05;
        }
        if (pCVar10[5].monitor != (void *)0x0) {
          __this_02 = *(UnityEngine_Collider_o **)((long)pCVar10[5].monitor + 0x78);
          x = (long *)0x0;
          if (__this_02 != (UnityEngine_Collider_o *)0x0) {
            bVar6 = 0;
            goto label_0430ffa8;
          }
        }
      }
    }
    else if ((pvVar2 != (void *)0x0) &&
            (x = *(long **)((long)pvVar2 + 0x78),
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
      bVar6 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return extraout_XMM0_Da_04;
      }
      if (pCVar10[5].monitor != (void *)0x0) {
        __this_02 = *(UnityEngine_Collider_o **)((long)pCVar10[5].monitor + 0x78);
        x = (long *)0x0;
        if (__this_02 != (UnityEngine_Collider_o *)0x0) {
          bVar6 = 1;
label_0430ffa8:
          UnityEngine_Collider__set_enabled(__this_02,bVar6,(MethodInfo *)0x0);
          return extraout_XMM0_Da_06;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar5 = (*((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass[6].vtable._1_Finalize.
            methodPtr)();
  pCVar3 = ((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass;
  vtableDispatch = *(code **)&pCVar3[6]._2.interfaces_count;
  uVar4._0_1_ = pCVar3[6]._2.naturalAligment;
  uVar4._1_1_ = pCVar3[6]._2.packingSize;
  uVar4._2_1_ = pCVar3[6]._2.bitflags1;
  uVar4._3_1_ = pCVar3[6]._2.bitflags2;
  uVar4._4_4_ = *(undefined4 *)&pCVar3[6]._2.field_0x6c;
  fVar11 = (float)(*vtableDispatch)(x,uVar5,uVar4,pCVar3,vtableDispatch,in_R9,pCVar9);
  return fVar11;
}


// Characters.BaseTitan$$DamagedGrunt
// il2cpp: void Characters_BaseTitan__DamagedGrunt (Characters_BaseTitan_o* __this, float chance, const MethodInfo* method);
// 0x430fcc0

void Characters_BaseTitan__DamagedGrunt(Characters_BaseTitan_o *__this,float chance,MethodInfo *method)

{
  long lVar1;
  void *pvVar2;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_c *pCVar3;
  code *vtableDispatch;
  undefined8 uVar4;
  undefined1 uVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_00;
  char cVar8;
  Characters_BaseTitan_o *__this_01;
  Characters_BaseTitan_o *pCVar9;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *pCVar10;
  long *x;
  UnityEngine_Collider_o *__this_02;
  undefined8 in_R9;
  float fVar11;
  float in_XMM1_Da;
  
  __this_01 = __this;
  if (g_data_057adf93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    __this_01 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf93 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if ((*(char *)(lVar1 + 0x11) != '\0') &&
       (bVar6 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0), (char)bVar6 != '\0')) {
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Characters_TitanSounds__GetRandomHurt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,pSVar7,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pCVar9 = __this_01;
  if (g_data_057adf94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    pCVar9 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf94 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if ((*(char *)(lVar1 + 0x11) != '\0') &&
       (bVar6 = Utility_RandomGen__Roll(fVar11,(MethodInfo *)0x0), (char)bVar6 != '\0')) {
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Characters_TitanSounds__GetRandomGrabGrunt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this_01,pSVar7,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    g_data_057adf96 = '\x01';
  }
  __this_00 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HandleSpawnCollisionCoroutine_d__166)
  ;
  cVar8 = '\0';
  pCVar10 = __this_00;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0) {
    (__this_00->fields).__4__this = pCVar9;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pCVar9);
    (__this_00->fields).time = fVar11;
    (__this_00->fields).maxSpeed = in_XMM1_Da;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  x = (long *)pCVar10;
  if (g_data_057adf97 == '\0') {
    x = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf97 = '\x01';
  }
  if (pCVar10[5].monitor != (void *)0x0) {
    x = *(long **)((long)pCVar10[5].monitor + 0x78);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    pvVar2 = pCVar10[5].monitor;
    if (cVar8 == '\0') {
      if ((pvVar2 != (void *)0x0) &&
         (x = *(long **)((long)pvVar2 + 0x78),
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
        bVar6 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        if (pCVar10[5].monitor != (void *)0x0) {
          __this_02 = *(UnityEngine_Collider_o **)((long)pCVar10[5].monitor + 0x78);
          x = (long *)0x0;
          if (__this_02 != (UnityEngine_Collider_o *)0x0) {
            bVar6 = 0;
            goto label_0430ffa8;
          }
        }
      }
    }
    else if ((pvVar2 != (void *)0x0) &&
            (x = *(long **)((long)pvVar2 + 0x78),
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
      bVar6 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return;
      }
      if (pCVar10[5].monitor != (void *)0x0) {
        __this_02 = *(UnityEngine_Collider_o **)((long)pCVar10[5].monitor + 0x78);
        x = (long *)0x0;
        if (__this_02 != (UnityEngine_Collider_o *)0x0) {
          bVar6 = 1;
label_0430ffa8:
          UnityEngine_Collider__set_enabled(__this_02,bVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar5 = (*((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass[6].vtable._1_Finalize.
            methodPtr)();
  pCVar3 = ((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass;
  vtableDispatch = *(code **)&pCVar3[6]._2.interfaces_count;
  uVar4._0_1_ = pCVar3[6]._2.naturalAligment;
  uVar4._1_1_ = pCVar3[6]._2.packingSize;
  uVar4._2_1_ = pCVar3[6]._2.bitflags1;
  uVar4._3_1_ = pCVar3[6]._2.bitflags2;
  uVar4._4_4_ = *(undefined4 *)&pCVar3[6]._2.field_0x6c;
  (*vtableDispatch)(x,uVar5,uVar4,pCVar3,vtableDispatch,in_R9,pCVar9);
  return;
}


// Characters.BaseTitan$$GrabGrunt
// il2cpp: void Characters_BaseTitan__GrabGrunt (Characters_BaseTitan_o* __this, float chance, const MethodInfo* method);
// 0x430fd80

void Characters_BaseTitan__GrabGrunt(Characters_BaseTitan_o *__this,float chance,MethodInfo *method)

{
  long lVar1;
  void *pvVar2;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_c *pCVar3;
  code *vtableDispatch;
  undefined8 uVar4;
  undefined1 uVar5;
  bool_conflict bVar6;
  System_String_o *sound;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_00;
  char cVar7;
  Characters_BaseTitan_o *pCVar8;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *pCVar9;
  long *x;
  UnityEngine_Collider_o *__this_01;
  undefined8 in_R9;
  float fVar10;
  float in_XMM1_Da;
  
  pCVar8 = __this;
  if (g_data_057adf94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    pCVar8 = (Characters_BaseTitan_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf94 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if ((*(char *)(lVar1 + 0x11) != '\0') &&
       (bVar6 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0), (char)bVar6 != '\0')) {
      if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      sound = Characters_TitanSounds__GetRandomGrabGrunt((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  fVar10 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    g_data_057adf96 = '\x01';
  }
  __this_00 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HandleSpawnCollisionCoroutine_d__166)
  ;
  cVar7 = '\0';
  pCVar9 = __this_00;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0) {
    (__this_00->fields).__4__this = pCVar8;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pCVar8);
    (__this_00->fields).time = fVar10;
    (__this_00->fields).maxSpeed = in_XMM1_Da;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  x = (long *)pCVar9;
  if (g_data_057adf97 == '\0') {
    x = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf97 = '\x01';
  }
  if (pCVar9[5].monitor != (void *)0x0) {
    x = *(long **)((long)pCVar9[5].monitor + 0x78);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    pvVar2 = pCVar9[5].monitor;
    if (cVar7 == '\0') {
      if ((pvVar2 != (void *)0x0) &&
         (x = *(long **)((long)pvVar2 + 0x78),
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
        bVar6 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        if (pCVar9[5].monitor != (void *)0x0) {
          __this_01 = *(UnityEngine_Collider_o **)((long)pCVar9[5].monitor + 0x78);
          x = (long *)0x0;
          if (__this_01 != (UnityEngine_Collider_o *)0x0) {
            bVar6 = 0;
            goto label_0430ffa8;
          }
        }
      }
    }
    else if ((pvVar2 != (void *)0x0) &&
            (x = *(long **)((long)pvVar2 + 0x78),
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
      bVar6 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return;
      }
      if (pCVar9[5].monitor != (void *)0x0) {
        __this_01 = *(UnityEngine_Collider_o **)((long)pCVar9[5].monitor + 0x78);
        x = (long *)0x0;
        if (__this_01 != (UnityEngine_Collider_o *)0x0) {
          bVar6 = 1;
label_0430ffa8:
          UnityEngine_Collider__set_enabled(__this_01,bVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar5 = (*((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass[6].vtable._1_Finalize.
            methodPtr)();
  pCVar3 = ((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass;
  vtableDispatch = *(code **)&pCVar3[6]._2.interfaces_count;
  uVar4._0_1_ = pCVar3[6]._2.naturalAligment;
  uVar4._1_1_ = pCVar3[6]._2.packingSize;
  uVar4._2_1_ = pCVar3[6]._2.bitflags1;
  uVar4._3_1_ = pCVar3[6]._2.bitflags2;
  uVar4._4_4_ = *(undefined4 *)&pCVar3[6]._2.field_0x6c;
  (*vtableDispatch)(x,uVar5,uVar4,pCVar3,vtableDispatch,in_R9,pCVar8);
  return;
}


// Characters.BaseTitan$$Start
// il2cpp: void Characters_BaseTitan__Start (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x42ffbd0

void Characters_BaseTitan__Start(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *__this_00;
  Settings_SetSettingsContainer_T__o *__this_01;
  Photon_Pun_PhotonView_o *__this_02;
  Characters_AnimationHandler_o *__this_03;
  code *vtableDispatch;
  bool_conflict bVar2;
  Characters_BaseTitan_o *__this_04;
  Characters_BaseTitan_c *pCVar3;
  Settings_BaseSetSetting_o *pSVar4;
  Il2CppObject *pIVar5;
  System_Object_array *parameters;
  long lVar6;
  Characters_BaseCharacter_o *__this_05;
  char cVar7;
  Il2CppClass *in_RCX;
  System_String_o *b;
  int iVar8;
  Characters_BaseTitan_o *__this_06;
  long *plVar9;
  undefined4 uVar10;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar11;
  
  if (g_data_057adf95 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseShifter);
    g_data_057adf95 = '\x01';
  }
  Characters_BaseCharacter__Start((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  __this_06 = __this;
  bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
label_042ffccc:
    lVar6 = *(long *)&(__this->fields).Dead;
    if (lVar6 != 0) {
      __this_00 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
      __this_06 = (Characters_BaseTitan_o *)0x0;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar11 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        (__this->fields)._maxTurnTime = UVar11.fields.x;
        (__this->fields)._currentTurnTime = UVar11.fields.y;
        (__this->fields)._currentGroundDistance = UVar11.fields.z;
        return;
      }
    }
  }
  else {
    bVar2 = Characters_BaseCharacter__IsMainCharacter((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if (((char)bVar2 != '\0') && (__this != (Characters_BaseTitan_o *)0x0)) {
      pCVar3 = __this->klass;
      bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
      in_RCX = TypeInfo_BaseShifter;
      if (((pCVar3->_2).naturalAligment < bVar1) ||
         ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseShifter)) goto label_042ffc4c;
label_042ffcbc:
      __this_06 = __this;
      (*(pCVar3->vtable)._138_Idle.methodPtr)();
      goto label_042ffccc;
    }
label_042ffc4c:
    if (g_data_057adf96 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
      g_data_057adf96 = '\x01';
    }
    __this_04 = (Characters_BaseTitan_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    __this_06 = __this_04;
    Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor
              ((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)__this_04,0,(MethodInfo *)0x0);
    if (__this_04 != (Characters_BaseTitan_o *)0x0) {
      (__this_04->fields).pvCache = (Photon_Pun_PhotonView_o *)__this;
      il2cpp_runtime_helper_022b4080(&(__this_04->fields).pvCache,__this);
      *(undefined8 *)&(__this_04->fields).FootstepsEnabled = 0x4000000041a00000;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_04,
                 (MethodInfo *)0x0);
      pCVar3 = __this->klass;
      goto label_042ffcbc;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ShifterCustomSkinSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"LoadSkinRPC");
    g_data_057adf33 = '\x01';
  }
  bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this_06,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (((lVar6 == 0) ||
      (__this_01 = *(Settings_SetSettingsContainer_T__o **)(lVar6 + 0x30),
      __this_01 == (Settings_SetSettingsContainer_T__o *)0x0)) || (__this_01[1].monitor == (void *)0x0))
  goto label_042ffeab;
  if (*(char *)((long)__this_01[1].monitor + 0x11) == '\0') {
    return;
  }
  pSVar4 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_01,MethodInfo_BaseSetSetting_GetSelectedSet);
  if (pSVar4 == (Settings_BaseSetSetting_o *)0x0) {
label_042ffe0a:
    in_RCX = (Il2CppClass *)__this_06->klass;
    pIVar5 = (Il2CppObject *)(*in_RCX->vtable[0xb1].methodPtr)(__this_06,pSVar4,in_RCX->vtable[0xb1].method);
    lVar6 = *(long *)&(__this_06->fields).Dead;
    if (lVar6 == 0) {
label_042ffeab:
      pSVar4 = (Settings_BaseSetSetting_o *)il2cpp_runtime_helper_022b2c90();
      goto label_042ffeb0;
    }
    __this_02 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x20);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (parameters == (System_Object_array *)0x0) goto label_042ffeab;
    if (pIVar5 != (Il2CppObject *)0x0) {
      lVar6 = il2cpp_runtime_helper_023051f0(pIVar5);
      cVar7 = (char)in_RCX;
      if (lVar6 == 0) goto label_042ffebd;
    }
    cVar7 = (char)in_RCX;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar5;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (__this_02 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_02,"LoadSkinRPC",3,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_042ffeab;
    }
  }
  else {
    in_RCX = (Il2CppClass *)pSVar4->klass;
    if ((*(byte *)(TypeInfo_ShifterCustomSkinSet + 0x130) <= (in_RCX->_2).naturalAligment) &&
       (in_RCX = (Il2CppClass *)(in_RCX->_2).typeHierarchy,
       *(long *)((long)in_RCX + (ulong)*(byte *)(TypeInfo_ShifterCustomSkinSet + 0x130) * 8 + -8) == TypeInfo_ShifterCustomSkinSet))
    goto label_042ffe0a;
label_042ffeb0:
    cVar7 = (char)in_RCX;
    il2cpp_runtime_helper_022b2fd0(pSVar4);
  }
  il2cpp_runtime_helper_022b2ca0();
label_042ffebd:
  __this_05 = (Characters_BaseCharacter_o *)il2cpp_runtime_helper_0231b270();
  iVar8 = 0;
  uVar10 = il2cpp_runtime_helper_022b2b10();
  *(undefined1 *)&__this_05[2].fields.m_CancellationTokenSource = 1;
  if ((__this_05 != (Characters_BaseCharacter_o *)0x0) &&
     (__this_03 = *(Characters_AnimationHandler_o **)&(__this_05->fields)._cameraFPS,
     __this_03 != (Characters_AnimationHandler_o *)0x0)) {
    Characters_AnimationHandler__SetCullingType
              (__this_03,(uint)((iVar8 - 6U & 0xfffffffb) == 0),(MethodInfo *)0x0);
    if ((iVar8 != 0x17) && (iVar8 != 0x1b)) {
      (*(code *)__this_05->klass[1].vtable._18_unknown.method)
                (__this_05,__this_05->klass[1].vtable._19_unknown.methodPtr);
    }
    if (cVar7 != '\0') {
      (*(code *)__this_05->klass[1].vtable._33_OnCreateRoomFailed.method)
                (__this_05,__this_05->klass[1].vtable._34_OnJoinRoomFailed.methodPtr);
    }
    if ((iVar8 != 0) ||
       (bVar2 = System_String__op_Inequality(__this_05[2].monitor,b,(MethodInfo *)0x0), (char)bVar2 != '\0'))
    {
      Characters_BaseCharacter__CrossFade(__this_05,b,in_XMM1_Da,0.0,(MethodInfo *)0x0);
    }
    *(int *)&(__this_05->fields).OutlineComponent = iVar8;
    __this_05[2].monitor = b;
    il2cpp_runtime_helper_022b4080(&__this_05[2].monitor,b);
    *(undefined4 *)((long)&__this_05[1].fields.OnPlayerPropertiesChanged + 4) = uVar10;
    return;
  }
  plVar9 = (long *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf2b == '\0') {
    il2cpp_runtime_helper_023445d0(&"AttackKick");
    g_data_057adf2b = '\x01';
  }
  vtableDispatch = *(code **)(*plVar9 + 0x938);
  (*vtableDispatch)(plVar9,"AttackKick",*(undefined8 *)(*plVar9 + 0x940),vtableDispatch);
  return;
}


// Characters.BaseTitan$$HandleSpawnCollisionCoroutine
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseTitan__HandleSpawnCollisionCoroutine (Characters_BaseTitan_o* __this, float time, float maxSpeed, const MethodInfo* method);
// 0x430fe40

System_Collections_IEnumerator_o *
Characters_BaseTitan__HandleSpawnCollisionCoroutine
          (Characters_BaseTitan_o *__this,float time,float maxSpeed,MethodInfo *method)

{
  void *pvVar1;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_c *pCVar2;
  code *vtableDispatch;
  undefined8 uVar3;
  undefined1 uVar4;
  bool_conflict bVar5;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_IEnumerator_o *pSVar6;
  char cVar7;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *pCVar8;
  long *x;
  UnityEngine_Collider_o *__this_01;
  undefined8 in_R9;
  
  if (g_data_057adf96 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    g_data_057adf96 = '\x01';
  }
  __this_00 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HandleSpawnCollisionCoroutine_d__166)
  ;
  cVar7 = '\0';
  pCVar8 = __this_00;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).time = time;
    (__this_00->fields).maxSpeed = maxSpeed;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  x = (long *)pCVar8;
  if (g_data_057adf97 == '\0') {
    x = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf97 = '\x01';
  }
  if (pCVar8[5].monitor != (void *)0x0) {
    x = *(long **)((long)pCVar8[5].monitor + 0x78);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar5);
    }
    pvVar1 = pCVar8[5].monitor;
    if (cVar7 == '\0') {
      if ((pvVar1 != (void *)0x0) &&
         (x = *(long **)((long)pvVar1 + 0x78),
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
         (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
        bVar5 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_01,bVar5);
        }
        if (pCVar8[5].monitor != (void *)0x0) {
          __this_01 = *(UnityEngine_Collider_o **)((long)pCVar8[5].monitor + 0x78);
          x = (long *)0x0;
          if (__this_01 != (UnityEngine_Collider_o *)0x0) {
            bVar5 = 0;
            goto label_0430ffa8;
          }
        }
      }
    }
    else if ((pvVar1 != (void *)0x0) &&
            (x = *(long **)((long)pvVar1 + 0x78),
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x !=
            (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)) {
      bVar5 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_00,bVar5);
      }
      if (pCVar8[5].monitor != (void *)0x0) {
        __this_01 = *(UnityEngine_Collider_o **)((long)pCVar8[5].monitor + 0x78);
        x = (long *)0x0;
        if (__this_01 != (UnityEngine_Collider_o *)0x0) {
          bVar5 = 1;
label_0430ffa8:
          UnityEngine_Collider__set_enabled(__this_01,bVar5,(MethodInfo *)0x0);
          return extraout_RAX;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar4 = (*((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass[6].vtable._1_Finalize.
            methodPtr)();
  pCVar2 = ((Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)x)->klass;
  vtableDispatch = *(code **)&pCVar2[6]._2.interfaces_count;
  uVar3._0_1_ = pCVar2[6]._2.naturalAligment;
  uVar3._1_1_ = pCVar2[6]._2.packingSize;
  uVar3._2_1_ = pCVar2[6]._2.bitflags1;
  uVar3._3_1_ = pCVar2[6]._2.bitflags2;
  uVar3._4_4_ = *(undefined4 *)&pCVar2[6]._2.field_0x6c;
  pSVar6 = (System_Collections_IEnumerator_o *)
           (*vtableDispatch)(x,uVar4,uVar3,pCVar2,vtableDispatch,in_R9,__this);
  return pSVar6;
}


// Characters.BaseTitan$$ToggleSitPushbox
// il2cpp: void Characters_BaseTitan__ToggleSitPushbox (Characters_BaseTitan_o* __this, bool sit, const MethodInfo* method);
// 0x430fed0

void Characters_BaseTitan__ToggleSitPushbox
               (Characters_BaseTitan_o *__this,bool_conflict sit,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer vtableDispatch;
  byte bVar3;
  bool_conflict bVar4;
  long *x;
  System_Delegate_array *__this_00;
  
  x = (long *)__this;
  if (g_data_057adf97 == '\0') {
    x = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adf97 = '\x01';
  }
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if (pSVar1 != (System_Action_Hashtable__o *)0x0) {
    x = (long *)(pSVar1->fields).delegates;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
    if ((char)sit == '\0') {
      if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
         (x = (long *)(pSVar1->fields).delegates, (System_Delegate_array *)x != (System_Delegate_array *)0x0))
      {
        bVar4 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          return;
        }
        pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
        if (pSVar1 != (System_Action_Hashtable__o *)0x0) {
          __this_00 = (pSVar1->fields).delegates;
          x = (long *)0x0;
          if (__this_00 != (System_Delegate_array *)0x0) {
            bVar4 = 0;
            goto label_0430ffa8;
          }
        }
      }
    }
    else if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
            (x = (long *)(pSVar1->fields).delegates,
            (System_Delegate_array *)x != (System_Delegate_array *)0x0)) {
      bVar4 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)x,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
      if (pSVar1 != (System_Action_Hashtable__o *)0x0) {
        __this_00 = (pSVar1->fields).delegates;
        x = (long *)0x0;
        if (__this_00 != (System_Delegate_array *)0x0) {
          bVar4 = 1;
label_0430ffa8:
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)__this_00,bVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  bVar3 = (*(((Characters_BaseTitan_VTable *)((((System_Delegate_array *)x)->obj).klass)->vtable)->
            _172_IsPlayingSitAnimation).methodPtr)();
  pIVar2 = (((System_Delegate_array *)x)->obj).klass;
  vtableDispatch = (((Characters_BaseTitan_VTable *)pIVar2->vtable)->_170_ToggleSitPushbox).methodPtr;
  (*vtableDispatch)
            (x,(ulong)bVar3,(((Characters_BaseTitan_VTable *)pIVar2->vtable)->_170_ToggleSitPushbox).method,
             pIVar2,vtableDispatch);
  return;
}


// Characters.BaseTitan$$UpdateAnimationColliders
// il2cpp: void Characters_BaseTitan__UpdateAnimationColliders (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430ffc0

void Characters_BaseTitan__UpdateAnimationColliders(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_c *pCVar1;
  Il2CppMethodPointer vtableDispatch;
  byte bVar2;
  
  bVar2 = (*(__this->klass->vtable)._172_IsPlayingSitAnimation.methodPtr)
                    (__this,(__this->klass->vtable)._172_IsPlayingSitAnimation.method);
  pCVar1 = __this->klass;
  vtableDispatch = (pCVar1->vtable)._170_ToggleSitPushbox.methodPtr;
  (*vtableDispatch)
            (__this,(ulong)bVar2,(pCVar1->vtable)._170_ToggleSitPushbox.method,pCVar1,vtableDispatch);
  return;
}


// Characters.BaseTitan$$IsPlayingSitAnimation
// il2cpp: bool Characters_BaseTitan__IsPlayingSitAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x430fff0

bool_conflict Characters_BaseTitan__IsPlayingSitAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  Characters_AnimationHandler_o *pCVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  
  plVar2 = *(long **)&(__this->fields).TurnPause;
  if (plVar2 != (long *)0x0) {
    pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
    if (g_data_057adf8c == '\0') {
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057adf8c = '\x01';
    }
    bVar4 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar3 == (Characters_AnimationHandler_o *)0x0) goto label_04310250;
      bVar4 = Characters_AnimationHandler__IsPlaying(pCVar3,pSVar5,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar5 >> 8),1);
      }
    }
    plVar2 = *(long **)&(__this->fields).TurnPause;
    if (plVar2 != (long *)0x0) {
      pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
      if (g_data_057adf8c == '\0') {
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057adf8c = '\x01';
      }
      bVar4 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar3 == (Characters_AnimationHandler_o *)0x0) goto label_04310250;
        bVar4 = Characters_AnimationHandler__IsPlaying(pCVar3,pSVar5,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return (bool_conflict)CONCAT71((int7)((ulong)pSVar5 >> 8),1);
        }
      }
      plVar2 = *(long **)&(__this->fields).TurnPause;
      if (plVar2 != (long *)0x0) {
        pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 0x218))(plVar2,*(undefined8 *)(*plVar2 + 0x220));
        if (g_data_057adf8c == '\0') {
          il2cpp_runtime_helper_023445d0(&"");
          g_data_057adf8c = '\x01';
        }
        bVar4 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          if (pCVar3 == (Characters_AnimationHandler_o *)0x0) goto label_04310250;
          bVar4 = Characters_AnimationHandler__IsPlaying(pCVar3,pSVar5,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            return (bool_conflict)CONCAT71((int7)((ulong)pSVar5 >> 8),1);
          }
        }
        plVar2 = *(long **)&(__this->fields).TurnPause;
        if (plVar2 != (long *)0x0) {
          pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
          if (g_data_057adf8c == '\0') {
            il2cpp_runtime_helper_023445d0(&"");
            g_data_057adf8c = '\x01';
          }
          bVar4 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
            if (pCVar3 == (Characters_AnimationHandler_o *)0x0) goto label_04310250;
            bVar4 = Characters_AnimationHandler__IsPlaying(pCVar3,pSVar5,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              return (bool_conflict)CONCAT71((int7)((ulong)pSVar5 >> 8),1);
            }
          }
          plVar2 = *(long **)&(__this->fields).TurnPause;
          if (plVar2 != (long *)0x0) {
            pSVar5 = (System_String_o *)
                     (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
            if (g_data_057adf8c == '\0') {
              il2cpp_runtime_helper_023445d0(&"");
              g_data_057adf8c = '\x01';
            }
            bVar4 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              return 0;
            }
            pCVar3 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
            if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
              bVar4 = Characters_AnimationHandler__IsPlaying(pCVar3,pSVar5,(MethodInfo *)0x0);
              return bVar4;
            }
          }
        }
      }
    }
  }
label_04310250:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf98 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf98 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar5 = Characters_TitanSounds__GetRandomFootstep((MethodInfo *)0x0);
    return (bool_conflict)pSVar5;
  }
  pSVar5 = Characters_TitanSounds__GetRandomFootstep((MethodInfo *)0x0);
  return (bool_conflict)pSVar5;
}


// Characters.BaseTitan$$GetFootstepAudio
// il2cpp: System_String_o* Characters_BaseTitan__GetFootstepAudio (Characters_BaseTitan_o* __this, int32_t phase, const MethodInfo* method);
// 0x4310260

System_String_o *
Characters_BaseTitan__GetFootstepAudio(Characters_BaseTitan_o *__this,int32_t phase,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (g_data_057adf98 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanSounds);
    g_data_057adf98 = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = Characters_TitanSounds__GetRandomFootstep((MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_02337ed0();
  pSVar2 = Characters_TitanSounds__GetRandomFootstep((MethodInfo *)0x0);
  return pSVar2;
}


// Characters.BaseTitan$$GetFootstepPhase
// il2cpp: int32_t Characters_BaseTitan__GetFootstepPhase (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x43102c0

int32_t Characters_BaseTitan__GetFootstepPhase(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  long *plVar2;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_Quaternion_Fields rotation;
  UnityEngine_Vector3_Fields direction;
  bool_conflict bVar3;
  undefined4 uVar4;
  int32_t layerMask;
  bool_conflict extraout_EAX;
  System_String_o *pSVar5;
  long lVar6;
  _union_13 unaff_RBX;
  long *plVar7;
  MethodInfo *pMVar8;
  undefined8 *unaff_R15;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float extraout_XMM0_Dc;
  float fVar13;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o position;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  Il2CppMethodPointer local_70;
  Il2CppMethodPointer pIStack_68;
  InvokerMethod pIStack_60;
  uint32_t uStack_58;
  float local_54;
  float fStack_50;
  undefined8 uStack_4c;
  _union_13 _Stack_38;
  _union_14 _Stack_30;
  undefined8 *puStack_28;
  
  if (g_data_057adf99 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adf99 = '\x01';
  }
  plVar2 = *(long **)&(__this->fields).TurnPause;
  plVar7 = (long *)0x0;
  if (plVar2 == (long *)0x0) goto label_04310462;
  pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
  unaff_R15 = &"";
  bVar3 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    plVar7 = *(long **)&(__this->fields).TurnPause;
    if (plVar7 == (long *)0x0) goto label_04310462;
    unaff_RBX = (_union_13)*(_union_13 *)&(__this->fields)._cameraFPS;
    pSVar5 = (System_String_o *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    if (unaff_RBX.rgctx_data == (Il2CppRGCTXData *)0x0) goto label_04310462;
    bVar3 = Characters_AnimationHandler__IsPlaying
                      ((Characters_AnimationHandler_o *)unaff_RBX.rgctx_data,pSVar5,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pMVar8 = *(MethodInfo **)&(__this->fields)._cameraFPS;
      plVar7 = (long *)0x0;
      if (pMVar8 != (MethodInfo *)0x0) {
        fVar9 = Characters_AnimationHandler__GetCurrentNormalizedTime
                          ((Characters_AnimationHandler_o *)pMVar8,(MethodInfo *)0x0);
        fVar9 = fmodf(fVar9,1.0,pMVar8);
        if (fVar9 < 0.0) {
          return 1;
        }
        return (int32_t)(0.5 <= fVar9);
      }
      goto label_04310462;
    }
  }
  plVar2 = *(long **)&(__this->fields).TurnPause;
  plVar7 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    pSVar5 = (System_String_o *)(**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    bVar3 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
label_04310453:
      return (int32_t)(__this->fields).CurrentSpeed;
    }
    plVar7 = *(long **)&(__this->fields).TurnPause;
    if (plVar7 != (long *)0x0) {
      unaff_RBX = (_union_13)*(_union_13 *)&(__this->fields)._cameraFPS;
      pSVar5 = (System_String_o *)(**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
      if (unaff_RBX.rgctx_data != (Il2CppRGCTXData *)0x0) {
        bVar3 = Characters_AnimationHandler__IsPlaying
                          ((Characters_AnimationHandler_o *)unaff_RBX.rgctx_data,pSVar5,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') goto label_04310453;
        pMVar8 = *(MethodInfo **)&(__this->fields)._cameraFPS;
        plVar7 = (long *)0x0;
        if (pMVar8 != (MethodInfo *)0x0) {
          fVar9 = Characters_AnimationHandler__GetCurrentNormalizedTime
                            ((Characters_AnimationHandler_o *)pMVar8,(MethodInfo *)0x0);
          fVar9 = fmodf(fVar9,1.0,pMVar8);
          if (fVar9 < 0.1) {
            return 0;
          }
          return (uint)(fVar9 < 0.6);
        }
      }
    }
  }
label_04310462:
  uVar11 = il2cpp_runtime_helper_022b2c90();
  _Stack_38 = unaff_RBX;
  _Stack_30 = (_union_14)__this;
  puStack_28 = unaff_R15;
  if (g_data_057adf9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057adf9a = '\x01';
  }
  fStack_50 = 0.0;
  uStack_4c = 0;
  pIStack_60 = (InvokerMethod)0x0;
  uStack_58 = 0;
  local_54 = 0.0;
  local_70 = (Il2CppMethodPointer)0x0;
  pIStack_68 = (Il2CppMethodPointer)0x0;
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  lVar6 = *(long *)(TypeInfo_Vector3 + 0xb8);
  fVar9 = (float)*(undefined8 *)(lVar6 + 0x18);
  fVar12 = (float)((ulong)*(undefined8 *)(lVar6 + 0x18) >> 0x20);
  fVar13 = 0.0;
  in_XMM1_Da = in_XMM1_Da + *(float *)(lVar6 + 0x20);
  if (g_data_057ac31b == '\0') {
    fVar13 = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ac31b = '\x01';
    lVar6 = *(long *)(TypeInfo_Vector3 + 0xb8);
  }
  fVar9 = fVar9 + (float)uVar11;
  fVar12 = fVar12 + (float)((ulong)uVar11 >> 0x20);
  fVar13 = fVar13 + extraout_XMM0_Dc;
  direction = *(UnityEngine_Vector3_Fields *)(lVar6 + 0x24);
  uVar4 = (**(code **)(*plVar7 + 0x4f8))(plVar7);
  layerMask = UnityEngine_LayerMask__get_value
                        ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff38,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar14.fields.y = fVar12;
  UVar14.fields.x = fVar9;
  UVar14.fields.z = in_XMM1_Da;
  bVar3 = UnityEngine_Physics__Raycast_4e776c0
                    (UVar14,(UnityEngine_Vector3_o)direction,(UnityEngine_RaycastHit_o *)&local_70,2.0,
                     layerMask,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x10);
    __this_00.fields.m_Point.fields.z = (float)uVar4;
    __this_00.fields.m_Point.fields.x = (float)(int)in_stack_ffffffffffffff30;
    __this_00.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff30 >> 0x20);
    __this_00.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff3c;
    __this_00.fields.m_Normal.fields.y = in_XMM1_Da;
    __this_00.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff44;
    __this_00.fields.m_FaceID = in_stack_ffffffffffffff48;
    __this_00.fields.m_Distance = (float)in_stack_ffffffffffffff4c;
    __this_00.fields.m_UV.fields.x = fVar9;
    __this_00.fields.m_UV.fields.y = fVar12;
    __this_00.fields.m_Collider = (int32_t)fVar13;
    UVar14 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)&local_70);
    fVar13 = UVar14.fields.z;
    fVar9 = UVar14.fields.x;
    fVar12 = UVar14.fields.y;
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    uVar11 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar9 = fVar9 + (float)uVar11 * 0.1;
    fVar12 = fVar12 + (float)((ulong)uVar11 >> 0x20) * 0.1;
    fVar13 = fVar13 + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 0.1;
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar1 = *(float *)((long)plVar7 + 0x11c);
    fVar10 = (float)(**(code **)(*plVar7 + 0x888))(plVar7,*(undefined8 *)(*plVar7 + 0x890));
    position.fields.y = fVar12;
    position.fields.x = fVar9;
    position.fields.z = fVar13;
    Effects_EffectSpawner__Spawn
              (pSVar5,position,(UnityEngine_Quaternion_o)rotation,fVar1 * fVar10,1,(System_Object_array *)0x0,
               (MethodInfo *)0x0);
    bVar3 = extraout_EAX;
  }
  return bVar3;
}


// Characters.BaseTitan$$SpawnShatter
// il2cpp: void Characters_BaseTitan__SpawnShatter (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x4310470

void Characters_BaseTitan__SpawnShatter
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  undefined8 uVar1;
  System_String_o *name;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_Quaternion_Fields rotation;
  UnityEngine_Vector3_Fields direction;
  undefined4 uVar2;
  int32_t layerMask;
  bool_conflict bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float in_XMM0_Dc;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o position_00;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff54;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  float fStack_78;
  float fStack_74;
  Il2CppMethodPointer pIStack_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod pIStack_48;
  uint32_t uStack_40;
  float fStack_3c;
  float fStack_38;
  undefined8 uStack_34;
  
  fVar9 = position.fields.z;
  if (g_data_057adf9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    g_data_057adf9a = '\x01';
  }
  fStack_38 = 0.0;
  uStack_34 = 0;
  pIStack_48 = (InvokerMethod)0x0;
  uStack_40 = 0;
  fStack_3c = 0.0;
  pIStack_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  if (g_data_057a6844 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  lVar4 = *(long *)(TypeInfo_Vector3 + 0xb8);
  fVar5 = (float)*(undefined8 *)(lVar4 + 0x18);
  fVar7 = (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20);
  fVar8 = 0.0;
  fVar9 = fVar9 + *(float *)(lVar4 + 0x20);
  if (g_data_057ac31b == '\0') {
    fVar8 = 0.0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057ac31b = '\x01';
    lVar4 = *(long *)(TypeInfo_Vector3 + 0xb8);
  }
  fStack_78 = position.fields.x;
  fStack_74 = position.fields.y;
  fVar5 = fVar5 + fStack_78;
  fVar7 = fVar7 + fStack_74;
  fVar8 = fVar8 + in_XMM0_Dc;
  direction = *(UnityEngine_Vector3_Fields *)(lVar4 + 0x24);
  uVar2 = (*(__this->klass->vtable)._60_get_GroundMask.methodPtr)(__this);
  layerMask = UnityEngine_LayerMask__get_value
                        ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff50,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar10.fields.y = fVar7;
  UVar10.fields.x = fVar5;
  UVar10.fields.z = fVar9;
  bVar3 = UnityEngine_Physics__Raycast_4e776c0
                    (UVar10,(UnityEngine_Vector3_o)direction,(UnityEngine_RaycastHit_o *)&pIStack_58,2.0,
                     layerMask,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    name = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x10);
    __this_00.fields.m_Point.fields.z = (float)uVar2;
    __this_00.fields.m_Point.fields.x = (float)(int)in_stack_ffffffffffffff48;
    __this_00.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff48 >> 0x20);
    __this_00.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff54;
    __this_00.fields.m_Normal.fields.y = fVar9;
    __this_00.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
    __this_00.fields.m_FaceID = in_stack_ffffffffffffff60;
    __this_00.fields.m_Distance = (float)in_stack_ffffffffffffff64;
    __this_00.fields.m_UV.fields.x = fVar5;
    __this_00.fields.m_UV.fields.y = fVar7;
    __this_00.fields.m_Collider = (int32_t)fVar8;
    UVar10 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)&pIStack_58);
    fVar7 = UVar10.fields.z;
    fVar9 = UVar10.fields.x;
    fVar5 = UVar10.fields.y;
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar9 = fVar9 + (float)uVar1 * 0.1;
    fVar5 = fVar5 + (float)((ulong)uVar1 >> 0x20) * 0.1;
    fVar7 = fVar7 + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 0.1;
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar8 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
    fVar6 = (float)(*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                             (__this,(__this->klass->vtable)._117_get_SizeMultiplier.method);
    position_00.fields.y = fVar5;
    position_00.fields.x = fVar9;
    position_00.fields.z = fVar7;
    Effects_EffectSpawner__Spawn
              (name,position_00,(UnityEngine_Quaternion_o)rotation,fVar8 * fVar6,1,(System_Object_array *)0x0,
               (MethodInfo *)0x0);
  }
  return;
}


// Characters.BaseTitan$$CheckNapeAngle
// il2cpp: bool Characters_BaseTitan__CheckNapeAngle (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, const MethodInfo* method);
// 0x4310720

bool_conflict
Characters_BaseTitan__CheckNapeAngle
          (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o hitPosition,float maxAngle,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  float fVar2;
  undefined1 auVar3 [16];
  double dVar4;
  bool_conflict extraout_EAX;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  undefined8 extraout_RAX;
  undefined8 uVar7;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  MethodInfo *method_00;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Dd_00;
  float fVar13;
  float fVar15;
  undefined1 auVar14 [16];
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  float fStack_7c;
  undefined8 uStack_78;
  
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if (((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
      (__this = (Characters_BaseTitan_o *)(pSVar1->fields).extra_arg, __this != (Characters_BaseTitan_o *)0x0)
      ) && (pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
           , pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    UVar17 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    uStack_78._0_4_ = hitPosition.fields.x;
    uStack_78._4_4_ = hitPosition.fields.y;
    auVar14._0_4_ = (float)uStack_78 - UVar17.fields.x;
    auVar14._4_4_ = uStack_78._4_4_ - UVar17.fields.y;
    auVar14._8_4_ = in_XMM0_Dc - extraout_XMM0_Dc;
    auVar14._12_4_ = in_XMM0_Dd - extraout_XMM0_Dd;
    fStack_7c = hitPosition.fields.z - UVar17.fields.z;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar11 = 0;
    uVar12 = 0;
    fVar8 = fStack_7c * fStack_7c + auVar14._4_4_ * auVar14._4_4_ + auVar14._0_4_ * auVar14._0_4_;
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
      uVar11 = extraout_XMM0_Dc_00;
      uVar12 = extraout_XMM0_Dd_00;
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    if (fVar8 <= 1e-05) {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uStack_78 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fStack_7c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fStack_7c = fStack_7c / fVar8;
      auVar3._4_4_ = fVar8;
      auVar3._0_4_ = fVar8;
      auVar3._8_4_ = uVar11;
      auVar3._12_4_ = uVar12;
      auVar14 = divps(auVar14,auVar3);
      uStack_78 = auVar14._0_8_;
    }
    UVar17 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0);
    fVar13 = UVar17.fields.z;
    fVar8 = UVar17.fields.x;
    fVar10 = UVar17.fields.y;
    uVar7 = extraout_RAX;
    if (g_data_057ac31a == '\0') {
      uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057ac31a = '\x01';
    }
    fVar16 = fVar13 * fVar13 + fVar10 * fVar10 + fVar8 * fVar8;
    fVar2 = (float)uStack_78;
    fVar15 = (float)((ulong)uStack_78 >> 0x20);
    fVar9 = fStack_7c * fStack_7c + fVar15 * fVar15 + fVar2 * fVar2;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      uVar7 = il2cpp_runtime_helper_02337ed0();
    }
    if (fVar9 * fVar16 < 0.0) {
      fVar9 = sqrtf(fVar9 * fVar16);
      uVar7 = extraout_RAX_00;
      method_00 = TypeInfo_Math;
    }
    else {
      fVar9 = SQRT(fVar9 * fVar16);
      method_00 = TypeInfo_Math;
    }
    fVar16 = 0.0;
    TypeInfo_Math = method_00;
    if (1e-15 <= fVar9) {
      fVar9 = ((-(fVar15 * fVar10) - fVar2 * fVar8) - fStack_7c * fVar13) / fVar9;
      fVar8 = 1.0;
      if (fVar9 <= 1.0) {
        fVar8 = fVar9;
      }
      if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      dVar4 = acos((double)(float)(~-(uint)(-1.0 <= fVar9) & 0xbf800000 | (uint)fVar8 & -(uint)(-1.0 <= fVar9)
                                  ),method_00);
      fVar16 = (float)dVar4 * 57.29578;
      uVar7 = extraout_RAX_01;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),fVar16 < maxAngle);
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if (pSVar1 != (System_Action_Hashtable__o *)0x0) {
    pUVar6 = (UnityEngine_Transform_o *)(pSVar1->fields).interp_invoke_impl;
    __this = (Characters_BaseTitan_o *)0x0;
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
      return extraout_EAX;
    }
  }
  bVar5 = il2cpp_runtime_helper_022b2c90();
  (*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)();
  return bVar5;
}


// Characters.BaseTitan$$GetCenterPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseTitan__GetCenterPosition (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4310a60

UnityEngine_Vector3_o
Characters_BaseTitan__GetCenterPosition(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  System_Action_Hashtable__o *pSVar2;
  UnityEngine_Transform_o *__this_00;
  undefined8 uVar3;
  float in_XMM1_Da;
  UnityEngine_Vector3_Fields UVar4;
  UnityEngine_Vector3_o UVar5;
  
  pSVar2 = (__this->fields).OnPlayerPropertiesChanged;
  if ((pSVar2 != (System_Action_Hashtable__o *)0x0) &&
     (__this_00 = (UnityEngine_Transform_o *)(pSVar2->fields).interp_invoke_impl,
     __this = (Characters_BaseTitan_o *)0x0, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar4 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  fVar1 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
  uVar3 = (*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)();
  UVar5.fields.y = (undefined4)((ulong)uVar3 >> 0x20);
  UVar5.fields.x = (float)uVar3 * fVar1 * 20.0;
  UVar5.fields.z = in_XMM1_Da;
  return (UnityEngine_Vector3_o)UVar5.fields;
}


// Characters.BaseTitan$$GetColliderToggleRadius
// il2cpp: float Characters_BaseTitan__GetColliderToggleRadius (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4310a90

float Characters_BaseTitan__GetColliderToggleRadius(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
  fVar2 = (float)(*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                           (__this,(__this->klass->vtable)._117_get_SizeMultiplier.method);
  return fVar2 * fVar1 * 20.0;
}


// Characters.BaseTitan$$.ctor
// il2cpp: void Characters_BaseTitan___ctor (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4302cf0

void Characters_BaseTitan___ctor(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *layers;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057adf9b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    g_data_057adf9b = '\x01';
  }
  *(undefined8 *)((long)&(__this->fields).TitanColliderToggler + 4) = 0x3f0000003f800000;
  (__this->fields).IsSprint = 0x3e99999a;
  (__this->fields).IsSit = 0x3e4ccccd;
  *(undefined4 *)&(__this->fields).field_0x11c = 0x3e4ccccd;
  *(undefined4 *)&(__this->fields).HoldHuman = 0x3e4ccccd;
  *(undefined4 *)((long)&(__this->fields).HoldHuman + 4) = 0x40a00000;
  (__this->fields).HoldHumanLeft = 0x3f333333;
  (__this->fields).Size = 0.85;
  (__this->fields).ClimbCooldown = 5.0;
  layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x38);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x50);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x34);
            if (4 < uVar1) {
              layers->m_Items[4] = *(int32_t *)(lVar2 + 0x3c);
              UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              (__this->fields).SprintStaminaRecover = (float)UVar3.fields.m_Mask;
              (__this->fields).SprintStaminaConsumption = 1.0;
              *(undefined4 *)&(__this->fields).field_0x154 = 0xbf800000;
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
              System_Collections_Generic_Dictionary_object__float____ctor(pSVar4,MethodInfo_Dictionary_2_System_String_System_Single);
              (__this->fields).TargetEnemy = (Characters_ITargetable_o *)pSVar4;
              il2cpp_runtime_helper_022b4080(&(__this->fields).TargetEnemy,pSVar4);
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_float);
              System_Collections_Generic_Dictionary_object__float____ctor(pSVar4,MethodInfo_Dictionary_2_System_String_System_Single);
              *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
               &(__this->fields)._startCoreAttackPosition.fields = pSVar4;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._startCoreAttackPosition,pSVar4);
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
              System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
              *(System_Collections_Generic_Dictionary_object__object__o **)
               &(__this->fields)._startCoreAttackPosition.fields.z = __this_00;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._startCoreAttackPosition.fields.z);
              *(undefined1 *)&(__this->fields)._previousCoreLocalPosition.fields.y = 1;
              Characters_BaseCharacter___ctor((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


