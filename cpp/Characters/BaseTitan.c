// Type: Characters.BaseTitan
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BaseTitan.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Titan/BaseTitan.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$.ctor
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166___ctor (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4004200

void Characters_BaseTitan_<HandleSpawnCollisionCoroutine>d__166___ctor
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_IDisposable_Dispose (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, const MethodInfo* method);
// 0x4004220

void Characters_BaseTitan_<HandleSpawnCollisionCoroutine>d__166__System_IDisposable_Dispose
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this,
               MethodInfo *method)

{
  return;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$MoveNext
// il2cpp: bool Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__MoveNext (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, const MethodInfo* method);
// 0x4004230

bool_conflict
Characters_BaseTitan_<HandleSpawnCollisionCoroutine>d__166__MoveNext
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
  
  if (DAT_0570422e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForFixedUpdate);
    DAT_0570422e = '\x01';
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
  if (((pCVar2 == (Characters_BaseTitan_o *)0x0) ||
      (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 == 0)) ||
     (pUVar4 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18), pUVar4 == (UnityEngine_Rigidbody_o *)0x0
     )) {
LAB_040044fd:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar6 = UnityEngine_Rigidbody__get_isKinematic(pUVar4,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') goto LAB_04004498;
  lVar3 = *(long *)&(pCVar2->fields).Dead;
  if ((lVar3 == 0) ||
     (pUVar4 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18), pUVar4 == (UnityEngine_Rigidbody_o *)0x0
     )) goto LAB_040044fd;
  UVar14 = UnityEngine_Rigidbody__get_velocity(pUVar4,(MethodInfo *)0x0);
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    uVar10 = 0;
    uVar11 = 0;
    DAT_056fde1c = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    uVar10 = 0;
    uVar11 = 0;
  }
  fVar9 = UVar14.fields.z * UVar14.fields.z +
          UVar14.fields.y * UVar14.fields.y + UVar14.fields.x * UVar14.fields.x;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
    pfVar1 = &(__this->fields).maxSpeed;
    if (fVar9 < *pfVar1 || fVar9 == *pfVar1) goto LAB_04004498;
  }
  else {
    pfVar1 = &(__this->fields).maxSpeed;
    if (SQRT(fVar9) < *pfVar1 || SQRT(fVar9) == *pfVar1) goto LAB_04004498;
  }
  lVar3 = *(long *)&(pCVar2->fields).Dead;
  if ((lVar3 == 0) ||
     (pUVar4 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18), pUVar4 == (UnityEngine_Rigidbody_o *)0x0
     )) goto LAB_040044fd;
  UVar14 = UnityEngine_Rigidbody__get_velocity(pUVar4,(MethodInfo *)0x0);
  fVar9 = UVar14.fields.z;
  auVar12._0_8_ = UVar14.fields._0_8_;
  auVar12._8_4_ = extraout_XMM0_Dc;
  auVar12._12_4_ = extraout_XMM0_Dd;
  auVar13._8_4_ = extraout_XMM0_Dc;
  auVar13._0_8_ = auVar12._0_8_;
  auVar13._12_4_ = extraout_XMM0_Dd;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    uVar10 = 0;
    uVar11 = 0;
    DAT_056fde20 = '\x01';
    auVar12 = auVar13;
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    uVar10 = 0;
    uVar11 = 0;
    auVar12 = auVar13;
  }
  fVar8 = fVar9 * fVar9 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
    uVar10 = extraout_XMM0_Dc_00;
    uVar11 = extraout_XMM0_Dd_00;
    if (fVar8 <= 1e-05) goto LAB_04004421;
LAB_04004472:
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
    if (1e-05 < fVar8) goto LAB_04004472;
LAB_04004421:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar7 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar9 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar8 = (__this->fields).maxSpeed;
  UVar14.fields.z = fVar9 * fVar8;
  UVar14.fields.x = fVar8 * (float)uVar7;
  UVar14.fields.y = fVar8 * (float)((ulong)uVar7 >> 0x20);
  UnityEngine_Rigidbody__set_velocity(pUVar4,UVar14,(MethodInfo *)0x0);
LAB_04004498:
  fVar9 = (__this->fields).time;
  fVar8 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields).time = fVar9 - fVar8;
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForFixedUpdate);
  UnityEngine_WaitForFixedUpdate___ctor
            ((UnityEngine_WaitForFixedUpdate_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).__2__current = __this_00;
  uVar7 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, const MethodInfo* method);
// 0x4004510

Il2CppObject *
Characters_BaseTitan_<HandleSpawnCollisionCoroutine>d__166__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_Collections_IEnumerator_Reset (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, const MethodInfo* method);
// 0x4004520

void Characters_BaseTitan_<HandleSpawnCollisionCoroutine>d__166__System_Collections_IEnumerator_Reset
               (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this,
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


// Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__166$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166__System_Collections_IEnumerator_get_Current (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o* __this, const MethodInfo* method);
// 0x4004560

Il2CppObject *
Characters_BaseTitan_<HandleSpawnCollisionCoroutine>d__166__System_Collections_IEnumerator_get_Current
          (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan.<WaitAndDie>d__122$$.ctor
// il2cpp: void Characters_BaseTitan__WaitAndDie_d__122___ctor (Characters_BaseTitan__WaitAndDie_d__122_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4004570

void Characters_BaseTitan_<WaitAndDie>d__122___ctor
               (Characters_BaseTitan__WaitAndDie_d__122_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseTitan.<WaitAndDie>d__122$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseTitan__WaitAndDie_d__122__System_IDisposable_Dispose (Characters_BaseTitan__WaitAndDie_d__122_o* __this, const MethodInfo* method);
// 0x4004590

void Characters_BaseTitan_<WaitAndDie>d__122__System_IDisposable_Dispose
               (Characters_BaseTitan__WaitAndDie_d__122_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan.<WaitAndDie>d__122$$MoveNext
// il2cpp: bool Characters_BaseTitan__WaitAndDie_d__122__MoveNext (Characters_BaseTitan__WaitAndDie_d__122_o* __this, const MethodInfo* method);
// 0x40045a0

bool_conflict
Characters_BaseTitan_<WaitAndDie>d__122__MoveNext
          (Characters_BaseTitan__WaitAndDie_d__122_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseTitan_o *__this_00;
  long *plVar2;
  System_Action_Hashtable__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_WaitForSeconds_o *pUVar6;
  UnityEngine_GameObject_o *targetGo;
  bool_conflict bVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Quaternion_o UVar10;
  
  if (DAT_0570422f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_0570422f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((__this_00 == (Characters_BaseTitan_o *)0x0) ||
        (pSVar3 = (__this_00->fields).OnPlayerPropertiesChanged,
        pSVar3 == (System_Action_Hashtable__o *)0x0)) ||
       (pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).interp_invoke_impl,
       pUVar4 == (UnityEngine_Transform_o *)0x0)) {
LAB_04004887:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x50);
    UVar9 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    UVar10 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    fVar8 = Characters_BaseTitan__GetSpawnEffectSize(__this_00,(MethodInfo *)0x0);
    Effects_EffectSpawner__Spawn
              (pSVar5,UVar9,UVar10,fVar8,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
    targetGo = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = 0;
    Photon_Pun_PhotonNetwork__Destroy(targetGo,(MethodInfo *)0x0);
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((__this_00 == (Characters_BaseTitan_o *)0x0) ||
        (pSVar3 = (__this_00->fields).OnPlayerPropertiesChanged,
        pSVar3 == (System_Action_Hashtable__o *)0x0)) ||
       (pUVar4 = (UnityEngine_Transform_o *)(pSVar3->fields).interp_invoke_impl,
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_04004887;
    pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x48);
    UVar9 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    UVar10 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
    fVar8 = Characters_BaseTitan__GetSpawnEffectSize(__this_00,(MethodInfo *)0x0);
    Effects_EffectSpawner__Spawn
              (pSVar5,UVar9,UVar10,fVar8,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar6,3.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar6;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar6);
    (__this->fields).__1__state = 2;
    bVar7 = (bool_conflict)CONCAT71((int7)((ulong)pUVar6 >> 8),1);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this_00 == (Characters_BaseTitan_o *)0x0) ||
       (plVar2 = *(long **)&(__this_00->fields).TurnPause, plVar2 == (long *)0x0))
    goto LAB_04004887;
    pSVar5 = (System_String_o *)
             (**(code **)(*plVar2 + 0x1f8))(plVar2,*(undefined8 *)(*plVar2 + 0x200));
    Characters_BaseTitan__StateActionWithTime(__this_00,0xf,pSVar5,0.0,0.1,1,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar6,2.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar6;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar6);
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
// 0x4004890

Il2CppObject *
Characters_BaseTitan_<WaitAndDie>d__122__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseTitan__WaitAndDie_d__122_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan.<WaitAndDie>d__122$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseTitan__WaitAndDie_d__122__System_Collections_IEnumerator_Reset (Characters_BaseTitan__WaitAndDie_d__122_o* __this, const MethodInfo* method);
// 0x40048a0

void Characters_BaseTitan_<WaitAndDie>d__122__System_Collections_IEnumerator_Reset
               (Characters_BaseTitan__WaitAndDie_d__122_o *__this,MethodInfo *method)

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


// Characters.BaseTitan.<WaitAndDie>d__122$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseTitan__WaitAndDie_d__122__System_Collections_IEnumerator_get_Current (Characters_BaseTitan__WaitAndDie_d__122_o* __this, const MethodInfo* method);
// 0x40048e0

Il2CppObject *
Characters_BaseTitan_<WaitAndDie>d__122__System_Collections_IEnumerator_get_Current
          (Characters_BaseTitan__WaitAndDie_d__122_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseTitan$$get_DefaultCrippleTime
// il2cpp: float Characters_BaseTitan__get_DefaultCrippleTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff3e0

float Characters_BaseTitan__get_DefaultCrippleTime
                (Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 8.0;
}


// Characters.BaseTitan$$get_CanWallClimb
// il2cpp: bool Characters_BaseTitan__get_CanWallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff3f0

bool_conflict
Characters_BaseTitan__get_CanWallClimb(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.BaseTitan$$get_CanSprint
// il2cpp: bool Characters_BaseTitan__get_CanSprint (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff400

bool_conflict Characters_BaseTitan__get_CanSprint(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.BaseTitan$$get_GroundDistance
// il2cpp: float Characters_BaseTitan__get_GroundDistance (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff410

float Characters_BaseTitan__get_GroundDistance(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_GroundMask
// il2cpp: UnityEngine_LayerMask_o Characters_BaseTitan__get_GroundMask (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff420

UnityEngine_LayerMask_o
Characters_BaseTitan__get_GroundMask(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return (UnityEngine_LayerMask_Fields)
         (UnityEngine_LayerMask_Fields)(__this->fields).SprintStaminaRecover;
}


// Characters.BaseTitan$$get_DefaultRunSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultRunSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff430

float Characters_BaseTitan__get_DefaultRunSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 15.0;
}


// Characters.BaseTitan$$get_DefaultWalkSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultWalkSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff440

float Characters_BaseTitan__get_DefaultWalkSpeed(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 5.0;
}


// Characters.BaseTitan$$get_DefaultJumpForce
// il2cpp: float Characters_BaseTitan__get_DefaultJumpForce (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff450

float Characters_BaseTitan__get_DefaultJumpForce(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 150.0;
}


// Characters.BaseTitan$$get_DefaultRotateSpeed
// il2cpp: float Characters_BaseTitan__get_DefaultRotateSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff460

float Characters_BaseTitan__get_DefaultRotateSpeed
                (Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_SizeMultiplier
// il2cpp: float Characters_BaseTitan__get_SizeMultiplier (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff470

float Characters_BaseTitan__get_SizeMultiplier(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Characters.BaseTitan$$get_DisableCooldown
// il2cpp: float Characters_BaseTitan__get_DisableCooldown (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff480

float Characters_BaseTitan__get_DisableCooldown(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Characters.BaseTitan$$get_Gravity
// il2cpp: UnityEngine_Vector3_o Characters_BaseTitan__get_Gravity (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff490

UnityEngine_Vector3_o
Characters_BaseTitan__get_Gravity(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (DAT_0570266b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570266b = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
  UVar2.fields.x = (float)uVar1 * 100.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 100.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) * 100.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Characters.BaseTitan$$get_CheckGroundTime
// il2cpp: float Characters_BaseTitan__get_CheckGroundTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff4e0

float Characters_BaseTitan__get_CheckGroundTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0.4;
}


// Characters.BaseTitan$$get_MapObjectMask
// il2cpp: UnityEngine_LayerMask_o Characters_BaseTitan__get_MapObjectMask (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff4f0

UnityEngine_LayerMask_o
Characters_BaseTitan__get_MapObjectMask(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Int32_array *layers;
  
  if (DAT_05704208 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_05704208 = '\x01';
  }
  layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (layers != (System_Int32_array *)0x0) {
    if ((int)layers->max_length != 0) {
      layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x38);
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)UVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Init
// il2cpp: void Characters_BaseTitan__Init (Characters_BaseTitan_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, const MethodInfo* method);
// 0x3ff3b00

void Characters_BaseTitan__Init
               (Characters_BaseTitan_o *__this,bool_conflict ai,System_String_o *team,
               SimpleJSONFixed_JSONNode_o *data,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Characters_AnimationHandler_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  char cVar3;
  bool_conflict bVar4;
  long *plVar5;
  SimpleJSONFixed_JSONNode_o *__this_05;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  undefined4 uVar8;
  int32_t iVar9;
  float fVar10;
  Il2CppMethodPointer pIVar11;
  Il2CppMethodPointer pIVar12;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar13;
  InvokerMethod pIVar14;
  char *pcVar15;
  Il2CppObject *pIVar16;
  Il2CppClass *pIVar17;
  Il2CppType *pIVar18;
  Il2CppType **ppIVar19;
  System_Collections_Generic_List_T__o *pSVar20;
  _union_13 _Var21;
  _union_14 _Var22;
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
  
  if (DAT_05704209 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"AttackPause");
    il2cpp_init_method_metadata(&"AttackSpeeds");
    il2cpp_init_method_metadata(&"RunSpeedPerLevel");
    il2cpp_init_method_metadata(&"WalkSpeedBase");
    il2cpp_init_method_metadata(&"ActionPause");
    il2cpp_init_method_metadata(&"WalkSpeedPerLevel");
    il2cpp_init_method_metadata(&"AttackSpeedMultiplier");
    il2cpp_init_method_metadata(&"Health");
    il2cpp_init_method_metadata(&"RunSpeedBase");
    il2cpp_init_method_metadata(&"JumpForce");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"RotateSpeed");
    il2cpp_init_method_metadata(&"TurnPause");
    il2cpp_init_method_metadata(&"TurnSpeed");
    DAT_05704209 = '\x01';
  }
  ppIVar19 = (Il2CppType **)0x0;
  _Var21.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar17 = (Il2CppClass *)0x0;
  pIVar18 = (Il2CppType *)0x0;
  pIVar14 = (InvokerMethod)0x0;
  pcVar15 = (char *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar12 = (Il2CppMethodPointer)0x0;
  _Var22.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  Characters_BaseCharacter__Init
            ((Characters_BaseCharacter_o *)__this,ai & 0xff,team,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(data,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  if (data != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RunSpeedBase",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"RunSpeedBase",(data->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_03ff4416;
      uVar8 = (**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      *(undefined4 *)&(__this->fields).BaseTitanAnimations = uVar8;
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RunSpeedPerLevel",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"RunSpeedPerLevel",(data->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_03ff4416;
      iVar9 = (**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      (__this->fields).TitanGroundMaskLayers.fields.m_Mask = iVar9;
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"WalkSpeedBase",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"WalkSpeedBase",(data->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_03ff4416;
      uVar8 = (**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      *(undefined4 *)((long)&(__this->fields).BaseTitanAnimations + 4) = uVar8;
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"WalkSpeedPerLevel",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"WalkSpeedPerLevel",(data->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_03ff4416;
      fVar10 = (float)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      (__this->fields).AttackSpeedMultiplier = fVar10;
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"JumpForce",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"JumpForce",(data->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_03ff4416;
      fVar10 = (float)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      (__this->fields).ConfusedTime = fVar10;
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"RotateSpeed",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"RotateSpeed",(data->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_03ff4416;
      fVar10 = (float)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      (__this->fields).PreviousAttackSpeedMultiplier = fVar10;
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"ActionPause",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"ActionPause",(data->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_03ff4416;
      bVar4 = (**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      (__this->fields).IsSit = bVar4;
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"TurnPause",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"TurnPause",(data->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_03ff4416;
      uVar8 = (**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      *(undefined4 *)&(__this->fields).HoldHuman = uVar8;
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"AttackPause",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"AttackPause",(data->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_03ff4416;
      uVar8 = (**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      *(undefined4 *)&(__this->fields).field_0x11c = uVar8;
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"Health",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"Health",(data->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_03ff4416;
      iVar9 = (**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
      Characters_BaseCharacter__SetHealth
                ((Characters_BaseCharacter_o *)__this,iVar9,(MethodInfo *)0x0);
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"AttackSpeedMultiplier",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                 (data,"AttackSpeedMultiplier",(data->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto LAB_03ff4416;
      fVar10 = (float)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      (__this->fields).SprintStaminaConsumption = fVar10;
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"AttackSpeeds",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 != '\0') {
      __this_05 = (SimpleJSONFixed_JSONNode_o *)
                  (*(data->klass->vtable)._7_get_Item.methodPtr)
                            (data,"AttackSpeeds",(data->klass->vtable)._7_get_Item.method);
      if (__this_05 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03ff4416;
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
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar12;
      __this_01.fields.m_Enumerator.fields._0_8_ = pIVar11;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar14;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
           (Il2CppObject *)pcVar15;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)pIVar17;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar18;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)ppIVar19;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var22.genericMethod;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this_01,
                 (MethodInfo *)&local_78);
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
      __this_02.fields.m_Enumerator.fields._0_8_ = local_c0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)local_a0;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
      bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
      cVar3 = (char)bVar4;
      pIVar11 = local_c0;
      pSVar13 = pSStack_b8;
      pIVar14 = local_b0;
      pIVar16 = pIStack_a8;
      pIVar17 = local_a0;
      pIVar18 = pIStack_98;
      pSVar20 = local_90;
      _Var21 = _Stack_88;
      _Var22 = local_80;
      while (cVar3 != '\0') {
        __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar13;
        __this_03.fields.m_Enumerator.fields._0_8_ = pIVar11;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar14;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar16;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)pIVar17;
        __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar18;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._list = pSVar20;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
        __this_03.fields.m_Enumerator.fields.m_Array.fields._current = _Var22.genericMethod;
        pSVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           (__this_03,(MethodInfo *)&stack0xfffffffffffffef8);
        __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                    (__this->fields).TargetEnemy;
        plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                                   (data,"AttackSpeeds",(data->klass->vtable)._7_get_Item.method);
        if (((plVar5 == (long *)0x0) ||
            (plVar5 = (long *)(**(code **)(*plVar5 + 0x1a8))
                                        (plVar5,pSVar6,*(undefined8 *)(*plVar5 + 0x1b0)),
            plVar5 == (long *)0x0)) ||
           (fVar10 = (float)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390)),
           __this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0))
        goto LAB_03ff4416;
        System_Collections_Generic_Dictionary<object__float>__Add
                  (__this_00,(Il2CppObject *)pSVar6,fVar10,MethodInfo_Void_Add);
        __this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar13;
        __this_04.fields.m_Enumerator.fields._0_8_ = pIVar11;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar14;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar16;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)pIVar17;
        __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar18;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._list = pSVar20;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
        __this_04.fields.m_Enumerator.fields.m_Array.fields._current = _Var22.genericMethod;
        bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          (__this_04,(MethodInfo *)&stack0xfffffffffffffef8);
        cVar3 = (char)bVar4;
      }
    }
    cVar3 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                      (data,"TurnSpeed",(data->klass->vtable)._28_HasKey.method);
    if (cVar3 == '\0') {
      return;
    }
    plVar5 = (long *)(*(data->klass->vtable)._7_get_Item.methodPtr)
                               (data,"TurnSpeed",(data->klass->vtable)._7_get_Item.method);
    if (plVar5 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
      *(undefined4 *)&(__this->fields).AttackSpeeds = uVar8;
      plVar5 = *(long **)&(__this->fields).TurnPause;
      if (plVar5 != (long *)0x0) {
        pSVar6 = (System_String_o *)
                 (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
        bVar4 = System_String__op_Inequality(pSVar6,"",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          plVar5 = *(long **)&(__this->fields).TurnPause;
          if (plVar5 == (long *)0x0) goto LAB_03ff4416;
          pCVar1 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          pSVar6 = (System_String_o *)
                   (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
          plVar5 = *(long **)&(__this->fields).TurnPause;
          if (plVar5 == (long *)0x0) goto LAB_03ff4416;
          pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          pSVar7 = (System_String_o *)
                   (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
          if ((pCVar2 == (Characters_AnimationHandler_o *)0x0) ||
             (fVar10 = Characters_AnimationHandler__GetSpeed(pCVar2,pSVar7,(MethodInfo *)0x0),
             pCVar1 == (Characters_AnimationHandler_o *)0x0)) goto LAB_03ff4416;
          Characters_AnimationHandler__SetSpeed
                    (pCVar1,pSVar6,fVar10 * *(float *)&(__this->fields).AttackSpeeds,
                     (MethodInfo *)0x0);
        }
        plVar5 = *(long **)&(__this->fields).TurnPause;
        if (plVar5 != (long *)0x0) {
          pSVar6 = (System_String_o *)
                   (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
          bVar4 = System_String__op_Inequality(pSVar6,"",(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return;
          }
          plVar5 = *(long **)&(__this->fields).TurnPause;
          if (plVar5 != (long *)0x0) {
            pCVar1 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
            pSVar6 = (System_String_o *)
                     (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
            plVar5 = *(long **)&(__this->fields).TurnPause;
            if (plVar5 != (long *)0x0) {
              pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
              pSVar7 = (System_String_o *)
                       (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
              if ((pCVar2 != (Characters_AnimationHandler_o *)0x0) &&
                 (fVar10 = Characters_AnimationHandler__GetSpeed(pCVar2,pSVar7,(MethodInfo *)0x0),
                 pCVar1 != (Characters_AnimationHandler_o *)0x0)) {
                Characters_AnimationHandler__SetSpeed
                          (pCVar1,pSVar6,fVar10 * *(float *)&(__this->fields).AttackSpeeds,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_03ff4416:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$CreateDetection
// il2cpp: void Characters_BaseTitan__CreateDetection (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff590

void Characters_BaseTitan__CreateDetection(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync_o *__this_00;
  
  if (DAT_0570420a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanDetection);
    DAT_0570420a = '\x01';
  }
  __this_00 = (Characters_BaseMovementSync_o *)il2cpp_runtime_glue(TypeInfo_TitanDetection);
  Characters_TitanDetection___ctor
            ((Characters_TitanDetection_o *)__this_00,(Characters_BaseCharacter_o *)__this,
             (MethodInfo *)0x0);
  (__this->fields).MovementSync = __this_00;
  il2cpp_runtime_glue(&(__this->fields).MovementSync,__this_00);
  return;
}


// Characters.BaseTitan$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_BaseTitan__GetRootMotionAnimations (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff600

System_Collections_Generic_Dictionary_string__float__o *
Characters_BaseTitan__GetRootMotionAnimations(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (DAT_0570420b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    DAT_0570420b = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_string__float__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_System_String_System_Single);
  return __this_00;
}


// Characters.BaseTitan$$IsGrabAttack
// il2cpp: bool Characters_BaseTitan__IsGrabAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff660

bool_conflict Characters_BaseTitan__IsGrabAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.BaseTitan$$GetCurrentSpeed
// il2cpp: float Characters_BaseTitan__GetCurrentSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff670

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
// 0x3fff6a0

bool_conflict Characters_BaseTitan__CanAction(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  ulong in_RAX;
  
  if ((((*(char *)&(__this->fields)._previousCoreLocalPosition.fields.y == '\0') ||
       (*(char *)&(__this->fields).FeedVictimName != '\0')) ||
      (*(int *)&(__this->fields).OutlineComponent != 0)) ||
     (0.0 < (__this->fields)._currentCrippleTime)) {
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
// 0x3fff6e0

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
// 0x3fff740

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
// 0x3fff760

void Characters_BaseTitan__Jump
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  float fVar5;
  
  if (DAT_0570420c == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_0570420c = '\x01';
  }
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    pSVar4 = (System_String_o *)
             (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    bVar3 = System_String__op_Equality(pSVar4,"",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    *(long *)&(__this->fields)._wallClimbForward.fields.z = direction.fields._0_8_;
    (__this->fields)._turnStartRotation.fields.y = direction.fields.z;
    plVar1 = *(long **)&(__this->fields).TurnPause;
    if (plVar1 != (long *)0x0) {
      pSVar4 = (System_String_o *)
               (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar5 = Characters_AnimationHandler__GetLength(pCVar2,pSVar4,(MethodInfo *)0x0);
        *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
        pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                    (__this,(__this->klass->vtable)._148_Ungrab.method);
          (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar4,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(__this->fields).OutlineComponent = 4;
          *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar4;
          il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,pSVar4);
          (__this->fields)._currentCrippleTime = fVar5;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$StartJump
// il2cpp: void Characters_BaseTitan__StartJump (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fff8c0

void Characters_BaseTitan__StartJump(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  UnityEngine_Rigidbody_o *__this_00;
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dd;
  float fVar8;
  undefined1 auVar10 [16];
  UnityEngine_Vector3_o force;
  undefined8 uVar9;
  
  Characters_BaseCharacter__SetKinematic
            ((Characters_BaseCharacter_o *)__this,0,0.0,(MethodInfo *)0x0);
  *(undefined4 *)&(__this->fields).OutlineComponent = 5;
  (__this->fields)._currentCrippleTime = 0.2;
  lVar3 = *(long *)&(__this->fields).Dead;
  if (lVar3 != 0) {
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar3 + 0x18);
    uVar1 = *(ulong *)&(__this->fields)._wallClimbForward.fields.z;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar1;
    fVar8 = (__this->fields)._turnStartRotation.fields.y;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
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
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Attack
// il2cpp: void Characters_BaseTitan__Attack (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x3fffa50

void Characters_BaseTitan__Attack
               (Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

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
// 0x3fffb60

bool_conflict Characters_BaseTitan__CanAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar1;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._123_CanAction.methodPtr;
  bVar1 = (*vtable_dispatch)
                    (__this,(__this->klass->vtable)._123_CanAction.method,in_RDX,
                     vtable_dispatch);
  return bVar1;
}


// Characters.BaseTitan$$ResetAttackState
// il2cpp: void Characters_BaseTitan__ResetAttackState (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x3fffb80

void Characters_BaseTitan__ResetAttackState
               (Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Rigidbody_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  float fVar3;
  
  if (DAT_0570420d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    DAT_0570420d = '\x01';
  }
  Characters_BaseCharacter__SetKinematic
            ((Characters_BaseCharacter_o *)__this,0,0.0,(MethodInfo *)0x0);
  if ((char)(__this->fields).CustomDamage != '\0') {
    lVar1 = *(long *)&(__this->fields).Dead;
    if (lVar1 == 0) goto LAB_03fffc83;
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar1 + 0x18);
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03fffc83;
    UnityEngine_Rigidbody__set_velocity
              (__this_00,
               (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
               (MethodInfo *)0x0);
  }
  *(System_String_o **)&(__this->fields)._disableCooldownLeft = attack;
  il2cpp_runtime_glue(&(__this->fields)._disableCooldownLeft,attack);
  __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)
               &(__this->fields)._startCoreAttackPosition.fields.z;
  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar2 = System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this_01,(Il2CppObject *)attack,MethodInfo_String_get_Item);
    *(Il2CppObject **)&(__this->fields)._currentFallTotalTime = pIVar2;
    il2cpp_runtime_glue(&(__this->fields)._currentFallTotalTime,pIVar2);
    fVar3 = Characters_BaseTitan__GetAttackSpeed(__this,attack,method_00);
    (__this->fields)._startPosition.fields.y = fVar3;
    (__this->fields)._startPosition.fields.z = 0.0;
    return;
  }
LAB_03fffc83:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GetAttackSpeed
// il2cpp: float Characters_BaseTitan__GetAttackSpeed (Characters_BaseTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x3fffc90

float Characters_BaseTitan__GetAttackSpeed
                (Characters_BaseTitan_o *__this,System_String_o *attack,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar1;
  bool_conflict bVar2;
  uint uVar3;
  float fVar4;
  
  if (DAT_0570420e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    DAT_0570420e = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(__this->fields).TargetEnemy;
  if (pSVar1 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__float>__ContainsKey
                      (pSVar1,(Il2CppObject *)attack,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      fVar4 = 1.0;
    }
    else {
      pSVar1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)(__this->fields).TargetEnemy
      ;
      if (pSVar1 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto LAB_03fffd3b;
      fVar4 = System_Collections_Generic_Dictionary<object__float>__get_Item
                        (pSVar1,(Il2CppObject *)attack,MethodInfo_Single_get_Item);
    }
    fVar4 = fVar4 * (__this->fields).SprintStaminaConsumption;
    uVar3 = -(uint)(fVar4 <= 0.0);
    return (float)(uVar3 & 0x3f800000 | ~uVar3 & (uint)fVar4);
  }
LAB_03fffd3b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Kick
// il2cpp: void Characters_BaseTitan__Kick (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fffd40

void Characters_BaseTitan__Kick(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$Stun
// il2cpp: void Characters_BaseTitan__Stun (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fffd50

void Characters_BaseTitan__Stun(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  long *plVar2;
  Characters_AnimationHandler_o *__this_00;
  char cVar3;
  System_String_o *animation;
  
  cVar3 = (*(__this->klass->vtable)._125_CanStun.methodPtr)
                    (__this,(__this->klass->vtable)._125_CanStun.method);
  if (cVar3 == '\0') {
    return;
  }
  plVar2 = *(long **)&(__this->fields).TurnPause;
  if (plVar2 != (long *)0x0) {
    animation = (System_String_o *)(**(code **)(*plVar2 + 0x1e8))();
    fVar1 = (float)(__this->fields).IsSprint;
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                (__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 0xd;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
      il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,animation);
      (__this->fields)._currentCrippleTime = fVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Run
// il2cpp: void Characters_BaseTitan__Run (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3fffe30

void Characters_BaseTitan__Run(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  (__this->fields).CurrentSpeed = 0.0;
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    animation = (System_String_o *)(**(code **)(*plVar1 + 0x188))();
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                (__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.5,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 1;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
      il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,animation);
      (__this->fields)._currentCrippleTime = 0.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Sprint
// il2cpp: void Characters_BaseTitan__Sprint (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3ffff00

void Characters_BaseTitan__Sprint(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  (__this->fields).CurrentSpeed = 0.0;
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    animation = (System_String_o *)(**(code **)(*plVar1 + 0x198))();
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                (__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.2,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 2;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
      il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,animation);
      (__this->fields)._currentCrippleTime = 0.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$WallClimb
// il2cpp: void Characters_BaseTitan__WallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3ffffd0

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
        (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                  (__this,(__this->klass->vtable)._148_Ungrab.method);
        (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
        *(undefined4 *)&(__this->fields).OutlineComponent = 0x19;
        *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
        il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,animation);
        (__this->fields)._currentCrippleTime = 0.0;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BaseTitan$$Eat
// il2cpp: void Characters_BaseTitan__Eat (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40000d0

void Characters_BaseTitan__Eat(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$Walk
// il2cpp: void Characters_BaseTitan__Walk (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40000e0

void Characters_BaseTitan__Walk(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  (__this->fields).CurrentSpeed = 0.0;
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    animation = (System_String_o *)(**(code **)(*plVar1 + 0x1a8))();
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                (__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.5,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 3;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
      il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,animation);
      (__this->fields)._currentCrippleTime = 0.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Idle
// il2cpp: void Characters_BaseTitan__Idle (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40001b0

void Characters_BaseTitan__Idle(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((char)(__this->fields).CustomDamage != '\0') {
    uVar1 = 0x3dcccccd;
  }
  (*(__this->klass->vtable)._139_Idle.methodPtr)
            (uVar1,__this,(__this->klass->vtable)._139_Idle.method);
  return;
}


// Characters.BaseTitan$$Idle
// il2cpp: void Characters_BaseTitan__Idle (Characters_BaseTitan_o* __this, float fadeTime, const MethodInfo* method);
// 0x40001e0

void Characters_BaseTitan__Idle(Characters_BaseTitan_o *__this,float fadeTime,MethodInfo *method)

{
  long *plVar1;
  System_String_o *animation;
  MethodInfo *in_R8;
  
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    animation = (System_String_o *)
                (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
    Characters_BaseTitan__StateActionWithTime(__this,0,animation,0.0,fadeTime,1,in_R8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$IdleWait
// il2cpp: void Characters_BaseTitan__IdleWait (Characters_BaseTitan_o* __this, float waitTime, const MethodInfo* method);
// 0x4000240

void Characters_BaseTitan__IdleWait
               (Characters_BaseTitan_o *__this,float waitTime,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 2.0;
  if (waitTime <= 2.0) {
    fVar1 = waitTime;
  }
  (*(__this->klass->vtable)._139_Idle.methodPtr)
            ((ulong)(~-(uint)(0.1 <= waitTime) & 0x3dcccccd | (uint)fVar1 & -(uint)(0.1 <= waitTime)
                    ),__this,(__this->klass->vtable)._139_Idle.method);
  (__this->fields)._currentCrippleTime = waitTime;
  return;
}


// Characters.BaseTitan$$Land
// il2cpp: void Characters_BaseTitan__Land (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40002a0

void Characters_BaseTitan__Land(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  long *plVar3;
  Characters_AnimationHandler_o *pCVar4;
  long lVar5;
  UnityEngine_Transform_o *__this_00;
  System_String_o *pSVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  undefined8 uStack_48;
  
  if (cRam000000000570420f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    cRam000000000570420f = '\x01';
  }
  plVar3 = *(long **)&(__this->fields).TurnPause;
  if (plVar3 != (long *)0x0) {
    pSVar6 = (System_String_o *)
             (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
    pCVar4 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
      fVar7 = Characters_AnimationHandler__GetLength(pCVar4,pSVar6,(MethodInfo *)0x0);
      *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
      pCVar4 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar4,0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                  (__this,(__this->klass->vtable)._148_Ungrab.method);
        (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,(MethodInfo *)0x0);
        *(undefined4 *)&(__this->fields).OutlineComponent = 9;
        *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar6;
        il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft);
        (__this->fields)._currentCrippleTime = fVar7;
        if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar5 = *(long *)&(__this->fields).Dead;
        if ((lVar5 != 0) &&
           (__this_00 = *(UnityEngine_Transform_o **)(lVar5 + 0x10),
           __this_00 != (UnityEngine_Transform_o *)0x0)) {
          pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
          UVar9 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          if (DAT_0570266b == '\0') {
            il2cpp_init_method_metadata();
            DAT_0570266b = '\x01';
          }
          uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
          fVar7 = (__this->fields)._turnTargetRotation.fields.x;
          position.fields.z =
               UVar9.fields.z + fVar7 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
          rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
          fVar1 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
          fVar8 = (float)(*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                                   (__this,(__this->klass->vtable)._117_get_SizeMultiplier.method);
          position.fields.x = UVar9.fields.x + fVar7 * (float)uVar2;
          position.fields.y = UVar9.fields.y + fVar7 * (float)((ulong)uVar2 >> 0x20);
          Effects_EffectSpawner__Spawn
                    (pSVar6,position,rotation,fVar1 * fVar8,1,(System_Object_array *)0x0,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Fall
// il2cpp: void Characters_BaseTitan__Fall (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40004d0

void Characters_BaseTitan__Fall(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *animation;
  
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    animation = (System_String_o *)(**(code **)(*plVar1 + 0x1c8))();
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(__this_00,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                (__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 7;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
      il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,animation);
      (__this->fields)._currentCrippleTime = 0.0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Turn
// il2cpp: void Characters_BaseTitan__Turn (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o targetDirection, const MethodInfo* method);
// 0x4000590

void Characters_BaseTitan__Turn
               (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o targetDirection,
               MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  UnityEngine_Transform_o *pUVar3;
  Characters_AnimationHandler_o *pCVar4;
  char cVar5;
  bool_conflict bVar6;
  System_String_o *a;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Quaternion_o UVar9;
  
  if (DAT_05704210 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05704210 = '\x01';
  }
  cVar5 = (*(__this->klass->vtable)._123_CanAction.methodPtr)(__this);
  if (cVar5 == '\0') {
    return;
  }
  fVar7 = Characters_BaseCharacter__GetAngleToTarget
                    ((Characters_BaseCharacter_o *)__this,targetDirection,(MethodInfo *)0x0);
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (fVar7 <= 0.0) {
      a = (System_String_o *)(**(code **)(lVar2 + 0x268))(plVar1,*(undefined8 *)(lVar2 + 0x270));
    }
    else {
      a = (System_String_o *)(**(code **)(lVar2 + 0x278))(plVar1,*(undefined8 *)(lVar2 + 0x280));
    }
    bVar6 = System_String__op_Equality(a,"",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    lVar2 = *(long *)&(__this->fields).Dead;
    if ((lVar2 != 0) &&
       (pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      UVar8 = UnityEngine_Transform__get_forward(pUVar3,(MethodInfo *)0x0);
      UVar8 = UnityEngine_Vector3__RotateTowards
                        (UVar8,targetDirection,2.0943952,3.4028235e+38,(MethodInfo *)0x0);
      lVar2 = *(long *)&(__this->fields).Dead;
      if ((lVar2 != 0) &&
         (pUVar3 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UVar9 = UnityEngine_Transform__get_rotation(pUVar3,(MethodInfo *)0x0);
        (__this->fields).TurnSpeed = UVar9.fields.x;
        (__this->fields).LeftArmDisabled = (bool_conflict)UVar9.fields.y;
        (__this->fields).RightArmDisabled = (bool_conflict)UVar9.fields.z;
        (__this->fields).LastTargetDirection.fields.x = UVar9.fields.w;
        UVar9 = UnityEngine_Quaternion__LookRotation(UVar8,(MethodInfo *)0x0);
        *(UnityEngine_Quaternion_Fields *)&(__this->fields).LastTargetDirection.fields.y =
             UVar9.fields;
        (__this->fields)._turnStartRotation.fields.w = 0.0;
        pCVar4 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
          fVar7 = Characters_AnimationHandler__GetTotalTime(pCVar4,a,(MethodInfo *)0x0);
          (__this->fields)._turnStartRotation.fields.z = fVar7;
          *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
          pCVar4 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar4,0,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                      (__this,(__this->klass->vtable)._148_Ungrab.method);
            (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                      (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this,a,0.1,0.0,(MethodInfo *)0x0);
            *(undefined4 *)&(__this->fields).OutlineComponent = 0x18;
            *(System_String_o **)&(__this->fields)._climbCooldownLeft = a;
            il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,a);
            (__this->fields)._currentCrippleTime = fVar7;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Blind
// il2cpp: void Characters_BaseTitan__Blind (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40007a0

void Characters_BaseTitan__Blind(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  long *plVar2;
  Characters_AnimationHandler_o *pCVar3;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  undefined8 extraout_RDX;
  float fVar6;
  
  if (DAT_05704211 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05704211 = '\x01';
  }
  uVar1 = *(uint *)&(__this->fields).OutlineComponent;
  if ((((uVar1 | 2) == 0x12) || ((char)(__this->fields).CustomDamage == '\0')) ||
     (0.0 < (__this->fields)._jumpDirection.fields.x)) {
    return;
  }
  if ((uVar1 == 0x16) || (uVar1 == 0x11)) {
    plVar2 = *(long **)&(__this->fields).TurnPause;
    if (plVar2 != (long *)0x0) {
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
      bVar4 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      plVar2 = *(long **)&(__this->fields).TurnPause;
      if (plVar2 != (long *)0x0) {
        pSVar5 = (System_String_o *)
                 (**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
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
            goto LAB_040009ca;
          }
        }
      }
    }
  }
  else {
    plVar2 = *(long **)&(__this->fields).TurnPause;
    if (plVar2 != (long *)0x0) {
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar2 + 0x288))(plVar2,*(undefined8 *)(*plVar2 + 0x290));
      bVar4 = System_String__op_Inequality(pSVar5,"",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      plVar2 = *(long **)&(__this->fields).TurnPause;
      if (plVar2 != (long *)0x0) {
        pSVar5 = (System_String_o *)
                 (**(code **)(*plVar2 + 0x288))(plVar2,*(undefined8 *)(*plVar2 + 0x290));
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
LAB_040009ca:
            *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar5;
            il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,pSVar5);
            (__this->fields)._currentCrippleTime = fVar6;
            vtable_dispatch = (__this->klass->vtable)._168_DamagedGrunt.methodPtr;
            (*vtable_dispatch)
                      (0x3f800000,__this,(__this->klass->vtable)._168_DamagedGrunt.method,
                       extraout_RDX,vtable_dispatch);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Cripple
// il2cpp: void Characters_BaseTitan__Cripple (Characters_BaseTitan_o* __this, float time, const MethodInfo* method);
// 0x4000a20

void Characters_BaseTitan__Cripple(Characters_BaseTitan_o *__this,float time,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  float fVar5;
  float fVar6;
  
  if (DAT_05704212 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05704212 = '\x01';
  }
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    pSVar4 = (System_String_o *)
             (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
    bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
    if (((((char)bVar3 == '\0') || (*(int *)&(__this->fields).OutlineComponent == 0x11)) ||
        ((char)(__this->fields).CustomDamage == '\0')) ||
       (0.0 < (__this->fields)._jumpDirection.fields.x)) {
      return;
    }
    if (time <= 0.0) {
      time = (float)(*(__this->klass->vtable)._110_get_DefaultCrippleTime.methodPtr)
                              (__this,(__this->klass->vtable)._110_get_DefaultCrippleTime.method);
    }
    (__this->fields)._turnTargetRotation.fields.y = time;
    plVar1 = *(long **)&(__this->fields).TurnPause;
    if (plVar1 != (long *)0x0) {
      pSVar4 = (System_String_o *)
               (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar5 = Characters_AnimationHandler__GetLength(pCVar2,pSVar4,(MethodInfo *)0x0);
        *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
        pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                    (__this,(__this->klass->vtable)._148_Ungrab.method);
          (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                    (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,pSVar4,0.1,0.0,(MethodInfo *)0x0);
          *(undefined4 *)&(__this->fields).OutlineComponent = 0x13;
          *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar4;
          il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,pSVar4);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Emote
// il2cpp: void Characters_BaseTitan__Emote (Characters_BaseTitan_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x4000c00

void Characters_BaseTitan__Emote
               (Characters_BaseTitan_o *__this,System_String_o *emote,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$ForceAnimation
// il2cpp: void Characters_BaseTitan__ForceAnimation (Characters_BaseTitan_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x4000c10

void Characters_BaseTitan__ForceAnimation
               (Characters_BaseTitan_o *__this,System_String_o *animation,float fade,
               MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  float fVar2;
  
  pCVar1 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    fVar2 = Characters_AnimationHandler__GetLength(pCVar1,animation,(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar1 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar1,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                (__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,animation,fade,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 8;
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
      il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,animation);
      (__this->fields)._currentCrippleTime = fVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseTitan__WaitAndDie (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4000cd0

System_Collections_IEnumerator_o *
Characters_BaseTitan__WaitAndDie(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitan__WaitAndDie_d__122_o *__this_00;
  
  if (DAT_05704213 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndDie_d__122);
    DAT_05704213 = '\x01';
  }
  __this_00 = (Characters_BaseTitan__WaitAndDie_d__122_o *)il2cpp_runtime_glue(TypeInfo_WaitAndDie_d__122);
  Characters_BaseTitan_<WaitAndDie>d__122___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Characters_BaseTitan__WaitAndDie_d__122_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GetSpawnEffectSize
// il2cpp: float Characters_BaseTitan__GetSpawnEffectSize (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3ff6ed0

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
// 0x4000d40

void Characters_BaseTitan__GrabRPC
               (Characters_BaseTitan_o *__this,int32_t viewId,bool_conflict left,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  bool_conflict bVar2;
  Photon_Pun_PhotonView_o *__this_00;
  Characters_BaseTitanComponentCache_o *pCVar3;
  Photon_Realtime_Player_o *pPVar4;
  
  if (DAT_05704214 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    DAT_05704214 = '\x01';
  }
  pPVar4 = (Photon_Realtime_Player_o *)0x0;
  __this_00 = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
    pPVar4 = (__this_00->fields)._Owner_k__BackingField;
  }
  if (pPVar4 != info.fields.Sender) {
    return;
  }
  if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
    pCVar3 = (Characters_BaseTitanComponentCache_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this_00,MethodInfo_Human_GetComponent_Human);
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      (__this->fields).BaseTitanCache = pCVar3;
      il2cpp_runtime_glue(&(__this->fields).BaseTitanCache,pCVar3);
    }
    if (pCVar3 != (Characters_BaseTitanComponentCache_o *)0x0) {
      pCVar3[1].fields.NapeHurtbox = (UnityEngine_Collider_o *)__this;
      il2cpp_runtime_glue(&pCVar3[1].fields.NapeHurtbox,__this);
      pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
      if (pSVar1 != (System_Action_Hashtable__o *)0x0) {
        pCVar3[1].fields.Movebox =
             (UnityEngine_Collider_o *)(&(pSVar1->fields).method_info)[(byte)((byte)left ^ 1)];
        il2cpp_runtime_glue(&pCVar3[1].fields.Movebox);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$UngrabRPC
// il2cpp: void Characters_BaseTitan__UngrabRPC (Characters_BaseTitan_o* __this, int32_t viewId, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4000e40

void Characters_BaseTitan__UngrabRPC
               (Characters_BaseTitan_o *__this,int32_t viewId,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  bool_conflict bVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Il2CppObject *pIVar2;
  Photon_Realtime_Player_o *pPVar3;
  
  if (DAT_05704215 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    DAT_05704215 = '\x01';
  }
  pPVar3 = (Photon_Realtime_Player_o *)0x0;
  __this_00 = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
    pPVar3 = (__this_00->fields)._Owner_k__BackingField;
  }
  if (pPVar3 != info.fields.Sender) {
    return;
  }
  if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
    pIVar2 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this_00,MethodInfo_Human_GetComponent_Human);
    bVar1 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 != '\0') {
      (__this->fields).BaseTitanCache = (Characters_BaseTitanComponentCache_o *)0x0;
      il2cpp_runtime_glue(&(__this->fields).BaseTitanCache,0);
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar2[0x16].monitor = (void *)0x0;
      il2cpp_runtime_glue(&pIVar2[0x16].monitor,0);
      pIVar2[0x17].klass = (Il2CppClass *)0x0;
      il2cpp_runtime_glue(pIVar2 + 0x17,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Ungrab
// il2cpp: void Characters_BaseTitan__Ungrab (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4000f30

void Characters_BaseTitan__Ungrab(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitanComponentCache_o *pCVar1;
  UnityEngine_Collider_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  bool_conflict bVar3;
  System_Object_array *parameters;
  Characters_BaseTitanComponentCache_o **ppCVar4;
  
  if (DAT_05704216 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"UngrabRPC");
    DAT_05704216 = '\x01';
  }
  pCVar1 = (__this->fields).BaseTitanCache;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    ppCVar4 = &(__this->fields).BaseTitanCache;
    if ((*ppCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) &&
       (pUVar2 = ((*ppCVar4)->fields).Movebox, pUVar2 != (UnityEngine_Collider_o *)0x0)) {
      __this_00 = pUVar2[1].monitor;
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"UngrabRPC",0,parameters,(MethodInfo *)0x0);
        pCVar1 = *ppCVar4;
        if (pCVar1 != (Characters_BaseTitanComponentCache_o *)0x0) {
          pCVar1[1].fields.Movebox = (UnityEngine_Collider_o *)0x0;
          il2cpp_runtime_glue(&pCVar1[1].fields.Movebox,0);
          *ppCVar4 = (Characters_BaseTitanComponentCache_o *)0x0;
          il2cpp_runtime_glue(ppCVar4,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BaseTitan$$DecreaseAttackSpeedRPC
// il2cpp: void Characters_BaseTitan__DecreaseAttackSpeedRPC (Characters_BaseTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4001030

void Characters_BaseTitan__DecreaseAttackSpeedRPC
               (Characters_BaseTitan_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

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
// 0x4001070

void Characters_BaseTitan__Confuse(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  
  if (DAT_05704217 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"DecreaseAttackSpeedRPC");
    DAT_05704217 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
    Photon_Pun_PhotonView__RPC(__this_00,"DecreaseAttackSpeedRPC",targetPlayer,parameters,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$ResetAttackSpeed
// il2cpp: void Characters_BaseTitan__ResetAttackSpeed (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40010f0

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
// 0x3ff9790

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
  if (DAT_05704218 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetSizeRPC");
    DAT_05704218 = '\x01';
  }
  Characters_BaseCharacter__OnPlayerEnteredRoom
            ((Characters_BaseCharacter_o *)__this,player,(MethodInfo *)0x0);
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar2 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((char)(__this_00->fields)._IsMine_k__BackingField != '\0') {
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      uStack_28 = CONCAT44(*(undefined4 *)((long)&(__this->fields).TitanColliderToggler + 4),
                           (undefined4)uStack_28);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&uStack_28 + 4);
      if (parameters == (System_Object_array *)0x0) goto LAB_03ff9892;
      if (pIVar1 != (Il2CppObject *)0x0) {
        lVar2 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class);
        if (lVar2 == 0) {
          uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar3,0);
        }
      }
      if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      parameters->m_Items[0] = pIVar1;
      il2cpp_runtime_glue(parameters->m_Items,pIVar1);
      Photon_Pun_PhotonView__RPC(__this_00,"SetSizeRPC",player,parameters,(MethodInfo *)0x0);
    }
    return;
  }
LAB_03ff9892:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$StateAction
// il2cpp: void Characters_BaseTitan__StateAction (Characters_BaseTitan_o* __this, int32_t state, System_String_o* animation, float fade, bool deactivateHitboxes, const MethodInfo* method);
// 0x3ff1690

void Characters_BaseTitan__StateAction
               (Characters_BaseTitan_o *__this,int32_t state,System_String_o *animation,float fade,
               bool_conflict deactivateHitboxes,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float stateTime;
  
  __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    stateTime = Characters_AnimationHandler__GetLength(__this_00,animation,(MethodInfo *)0x0);
    Characters_BaseTitan__StateActionWithTime
              (__this,state,animation,stateTime,fade,deactivateHitboxes & 0xff,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$StateAttack
// il2cpp: void Characters_BaseTitan__StateAttack (Characters_BaseTitan_o* __this, System_String_o* animation, float fade, bool deactivateHitboxes, const MethodInfo* method);
// 0x3fffa80

void Characters_BaseTitan__StateAttack
               (Characters_BaseTitan_o *__this,System_String_o *animation,float fade,
               bool_conflict deactivateHitboxes,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  float fVar2;
  
  *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
  pCVar1 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(pCVar1,1,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._148_Ungrab.methodPtr)
              (__this,(__this->klass->vtable)._148_Ungrab.method);
    if ((char)deactivateHitboxes != '\0') {
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
    }
    Characters_BaseCharacter__CrossFadeWithSpeed
              ((Characters_BaseCharacter_o *)__this,animation,
               (__this->fields)._startPosition.fields.y,fade,0.0,(MethodInfo *)0x0);
    *(undefined4 *)&(__this->fields).OutlineComponent = 10;
    *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
    il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,animation);
    pCVar1 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetLength(pCVar1,animation,(MethodInfo *)0x0);
      (__this->fields)._currentCrippleTime = fVar2 / (__this->fields)._startPosition.fields.y;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$StateActionWithTime
// il2cpp: void Characters_BaseTitan__StateActionWithTime (Characters_BaseTitan_o* __this, int32_t state, System_String_o* animation, float stateTime, float fade, bool deactivateHitboxes, const MethodInfo* method);
// 0x3ff3610

void Characters_BaseTitan__StateActionWithTime
               (Characters_BaseTitan_o *__this,int32_t state,System_String_o *animation,
               float stateTime,float fade,bool_conflict deactivateHitboxes,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  bool_conflict bVar1;
  
  *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
  if (__this == (Characters_BaseTitan_o *)0x0) {
LAB_03ff3701:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception(0,0);
  }
  __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) goto LAB_03ff3701;
  Characters_AnimationHandler__SetCullingType
            (__this_00,(uint)((state - 6U & 0xfffffffb) == 0),(MethodInfo *)0x0);
  if ((state != 0x17) && (state != 0x1b)) {
    (*(__this->klass->vtable)._148_Ungrab.methodPtr)
              (__this,(__this->klass->vtable)._148_Ungrab.method);
  }
  if ((char)deactivateHitboxes != '\0') {
    (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
  }
  if (state == 0) {
    bVar1 = System_String__op_Inequality
                      (*(System_String_o **)&(__this->fields)._climbCooldownLeft,animation,
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto LAB_03ff36cb;
  }
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this,animation,fade,0.0,(MethodInfo *)0x0);
LAB_03ff36cb:
  *(int32_t *)&(__this->fields).OutlineComponent = state;
  *(System_String_o **)&(__this->fields)._climbCooldownLeft = animation;
  il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,animation);
  (__this->fields)._currentCrippleTime = stateTime;
  return;
}


// Characters.BaseTitan$$SetAnimationUpdateMode
// il2cpp: void Characters_BaseTitan__SetAnimationUpdateMode (Characters_BaseTitan_o* __this, bool always, const MethodInfo* method);
// 0x4001110

void Characters_BaseTitan__SetAnimationUpdateMode
               (Characters_BaseTitan_o *__this,bool_conflict always,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  
  __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(__this_00,always & 0xff,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Awake
// il2cpp: void Characters_BaseTitan__Awake (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3ff4510

void Characters_BaseTitan__Awake(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Rigidbody_o *pUVar2;
  Characters_AnimationHandler_o *__this_00;
  System_Object_array *pSVar3;
  undefined4 uVar4;
  float fVar5;
  
  Characters_BaseCharacter__Awake((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._151_CreateAnimations.methodPtr)
            (__this,0,(__this->klass->vtable)._151_CreateAnimations.method);
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (pUVar2 = *(UnityEngine_Rigidbody_o **)(lVar1 + 0x18), pUVar2 != (UnityEngine_Rigidbody_o *)0x0
     )) {
    UnityEngine_Rigidbody__set_freezeRotation(pUVar2,1,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields).Dead;
    if ((lVar1 != 0) &&
       (pUVar2 = *(UnityEngine_Rigidbody_o **)(lVar1 + 0x18),
       pUVar2 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__set_useGravity(pUVar2,0,(MethodInfo *)0x0);
      pSVar3 = (System_Object_array *)
               Characters_TitanColliderToggler__Create(__this,(MethodInfo *)0x0);
      (__this->fields).crossfadeCache = pSVar3;
      il2cpp_runtime_glue(&(__this->fields).crossfadeCache,pSVar3);
      uVar4 = (*(__this->klass->vtable)._113_get_DefaultRunSpeed.methodPtr)
                        (__this,(__this->klass->vtable)._113_get_DefaultRunSpeed.method);
      *(undefined4 *)&(__this->fields).BaseTitanAnimations = uVar4;
      uVar4 = (*(__this->klass->vtable)._114_get_DefaultWalkSpeed.methodPtr)
                        (__this,(__this->klass->vtable)._114_get_DefaultWalkSpeed.method);
      *(undefined4 *)((long)&(__this->fields).BaseTitanAnimations + 4) = uVar4;
      fVar5 = (float)(*(__this->klass->vtable)._115_get_DefaultJumpForce.methodPtr)
                               (__this,(__this->klass->vtable)._115_get_DefaultJumpForce.method);
      (__this->fields).ConfusedTime = fVar5;
      fVar5 = (float)(*(__this->klass->vtable)._116_get_DefaultRotateSpeed.methodPtr)(__this);
      (__this->fields).PreviousAttackSpeedMultiplier = fVar5;
      __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(__this_00,0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._164_ScaleSounds.methodPtr)
                  (0x3f800000,__this,(__this->klass->vtable)._164_ScaleSounds.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$CreateCache
// il2cpp: void Characters_BaseTitan__CreateCache (Characters_BaseTitan_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x3ff10e0

void Characters_BaseTitan__CreateCache
               (Characters_BaseTitan_o *__this,Utility_BaseComponentCache_o *cache,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704219 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitanComponentCache);
    DAT_05704219 = '\x01';
    method = extraout_RDX;
  }
  pIVar2 = TypeInfo_BaseTitanComponentCache;
  if (cache == (Utility_BaseComponentCache_o *)0x0) {
    (__this->fields).OnPlayerPropertiesChanged = (System_Action_Hashtable__o *)0x0;
LAB_03ff116c:
    il2cpp_runtime_glue(&(__this->fields).OnPlayerPropertiesChanged,cache);
    Characters_BaseCharacter__CreateCache
              ((Characters_BaseCharacter_o *)__this,cache,(MethodInfo *)0x0);
    return;
  }
  bVar1 = (TypeInfo_BaseTitanComponentCache->_2).naturalAligment;
  if ((bVar1 <= (cache->klass->_2).naturalAligment) &&
     ((cache->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseTitanComponentCache)) {
    (__this->fields).OnPlayerPropertiesChanged = (System_Action_Hashtable__o *)cache;
    if ((bVar1 <= (cache->klass->_2).naturalAligment) &&
       ((cache->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar2)) goto LAB_03ff116c;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(cache,pIVar2,method);
}


// Characters.BaseTitan$$CreateAnimations
// il2cpp: void Characters_BaseTitan__CreateAnimations (Characters_BaseTitan_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x3ff1200

void Characters_BaseTitan__CreateAnimations
               (Characters_BaseTitan_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Reflection_FieldInfo_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar4;
  undefined8 uVar5;
  System_Type_o *__this_01;
  System_Reflection_FieldInfo_array *pSVar6;
  System_String_o *__this_02;
  Il2CppObject *pIVar7;
  Il2CppObject *value;
  uint uVar8;
  
  if (DAT_0570421a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitanAnimations);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"Attack");
    DAT_0570421a = '\x01';
  }
  if (animations == (Characters_BaseTitanAnimations_o *)0x0) {
    animations = (Characters_BaseTitanAnimations_o *)il2cpp_runtime_glue(TypeInfo_BaseTitanAnimations);
    Characters_BaseTitanAnimations___ctor(animations,(MethodInfo *)0x0);
  }
  *(Characters_BaseTitanAnimations_o **)&(__this->fields).TurnPause = animations;
  il2cpp_runtime_glue(&(__this->fields).TurnPause,animations);
  uVar5 = (*(__this->klass->vtable)._121_GetRootMotionAnimations.methodPtr)
                    (__this,(__this->klass->vtable)._121_GetRootMotionAnimations.method);
  (__this->fields)._startCoreAttackPosition.fields.x = (float)(int)uVar5;
  (__this->fields)._startCoreAttackPosition.fields.y = (float)(int)((ulong)uVar5 >> 0x20);
  il2cpp_runtime_glue(&(__this->fields)._startCoreAttackPosition);
  pIVar7 = *(Il2CppObject **)&(__this->fields).TurnPause;
  if (((pIVar7 != (Il2CppObject *)0x0) &&
      (__this_01 = System_Object__GetType(pIVar7,(MethodInfo *)0x0),
      __this_01 != (System_Type_o *)0x0)) &&
     (pSVar6 = System_Type__GetFields(__this_01,(MethodInfo *)0x0),
     pSVar6 != (System_Reflection_FieldInfo_array *)0x0)) {
    iVar1 = (int)pSVar6->max_length;
    if (iVar1 < 1) {
      return;
    }
    uVar8 = 0;
    if (iVar1 != 0) {
      do {
        pSVar3 = pSVar6->m_Items[(int)uVar8];
        if ((pSVar3 == (System_Reflection_FieldInfo_o *)0x0) ||
           (__this_02 = (System_String_o *)
                        (*(pSVar3->klass->vtable)._8_unknown.methodPtr)
                                  (pSVar3,(pSVar3->klass->vtable)._8_unknown.method),
           __this_02 == (System_String_o *)0x0)) goto LAB_03ff13fc;
        bVar4 = System_String__StartsWith(__this_02,"Attack",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       &(__this->fields)._startCoreAttackPosition.fields.z;
          pIVar7 = (Il2CppObject *)
                   (*(pSVar3->klass->vtable)._8_unknown.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._8_unknown.method);
          uVar5._0_4_ = (__this->fields).TurnPause;
          uVar5._4_4_ = (__this->fields).MaxSprintStamina;
          value = (Il2CppObject *)
                  (*(pSVar3->klass->vtable)._26_unknown.methodPtr)
                            (pSVar3,uVar5,(pSVar3->klass->vtable)._26_unknown.method);
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03ff13fc;
          if ((value != (Il2CppObject *)0x0) && (value->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(value);
          }
          System_Collections_Generic_Dictionary<object__object>__Add
                    (__this_00,pIVar7,value,MethodInfo_Void_Add);
        }
        uVar8 = uVar8 + 1;
        uVar2 = (uint)pSVar6->max_length;
        if ((int)uVar2 <= (int)uVar8) {
          return;
        }
      } while (uVar8 < uVar2);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ff13fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_BaseTitan__GetCameraAnchor (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4001130

UnityEngine_Transform_o *
Characters_BaseTitan__GetCameraAnchor(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if (pSVar1 != (System_Action_Hashtable__o *)0x0) {
    return (UnityEngine_Transform_o *)(pSVar1->fields).extra_arg;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$UpdateDisableArm
// il2cpp: void Characters_BaseTitan__UpdateDisableArm (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4001150

void Characters_BaseTitan__UpdateDisableArm(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$DisableArm
// il2cpp: void Characters_BaseTitan__DisableArm (Characters_BaseTitan_o* __this, bool left, const MethodInfo* method);
// 0x4001160

void Characters_BaseTitan__DisableArm
               (Characters_BaseTitan_o *__this,bool_conflict left,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$UpdateTurn
// il2cpp: void Characters_BaseTitan__UpdateTurn (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4001170

void Characters_BaseTitan__UpdateTurn(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  float fVar3;
  UnityEngine_Quaternion_o UVar4;
  
  fVar3 = (__this->fields)._turnStartRotation.fields.w;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar3;
  (__this->fields)._turnStartRotation.fields.w = fVar2;
  lVar1 = *(long *)&(__this->fields).Dead;
  if (lVar1 != 0) {
    __this_00 = *(UnityEngine_Transform_o **)(lVar1 + 0x10);
    UVar4.fields.x = (__this->fields).TurnSpeed;
    UVar4.fields.y = (float)(__this->fields).LeftArmDisabled;
    UVar4.fields.z = (float)(__this->fields).RightArmDisabled;
    UVar4.fields.w = (__this->fields).LastTargetDirection.fields.x;
    fVar2 = fVar2 / (__this->fields)._turnStartRotation.fields.z;
    fVar3 = 1.0;
    if (fVar2 <= 1.0) {
      fVar3 = fVar2;
    }
    UVar4 = UnityEngine_Quaternion__Slerp
                      (UVar4,*(UnityEngine_Quaternion_Fields *)
                              &(__this->fields).LastTargetDirection.fields.y,
                       (float)(-(uint)(0.0 <= fVar2) & (uint)fVar3),(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(__this_00,UVar4,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GetSitIdleAniamtion
// il2cpp: System_String_o* Characters_BaseTitan__GetSitIdleAniamtion (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4001210

System_String_o *
Characters_BaseTitan__GetSitIdleAniamtion(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  code *vtable_dispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    vtable_dispatch = *(code **)(*plVar1 + 0x218);
    pSVar2 = (System_String_o *)
             (*vtable_dispatch)
                       (plVar1,*(undefined8 *)(*plVar1 + 0x220),in_RDX,vtable_dispatch);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GetSitFallAnimation
// il2cpp: System_String_o* Characters_BaseTitan__GetSitFallAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4001240

System_String_o *
Characters_BaseTitan__GetSitFallAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  code *vtable_dispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    vtable_dispatch = *(code **)(*plVar1 + 0x248);
    pSVar2 = (System_String_o *)
             (*vtable_dispatch)
                       (plVar1,*(undefined8 *)(*plVar1 + 0x250),in_RDX,vtable_dispatch);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GetSitUpAnimation
// il2cpp: System_String_o* Characters_BaseTitan__GetSitUpAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4001270

System_String_o *
Characters_BaseTitan__GetSitUpAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  code *vtable_dispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    vtable_dispatch = *(code **)(*plVar1 + 0x238);
    pSVar2 = (System_String_o *)
             (*vtable_dispatch)
                       (plVar1,*(undefined8 *)(*plVar1 + 0x240),in_RDX,vtable_dispatch);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$SetDefaultVelocityLerp
// il2cpp: void Characters_BaseTitan__SetDefaultVelocityLerp (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40012a0

void Characters_BaseTitan__SetDefaultVelocityLerp(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  UnityEngine_Rigidbody_o *pUVar5;
  bool_conflict bVar6;
  float fVar7;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  float local_58;
  float fStack_54;
  float local_38;
  float local_28;
  float fStack_24;
  float fVar8;
  
  if (DAT_0570421b == '\0') {
    il2cpp_init_method_metadata(&"AttackBellyFlop");
    il2cpp_init_method_metadata(&"AttackRockThrow");
    DAT_0570421b = '\x01';
  }
  bVar6 = System_String__op_Inequality
                    (*(System_String_o **)&(__this->fields)._disableCooldownLeft,"AttackBellyFlop",
                     (MethodInfo *)0x0);
  if (((char)bVar6 == '\0') ||
     (bVar6 = System_String__op_Inequality
                        (*(System_String_o **)&(__this->fields)._disableCooldownLeft,"AttackRockThrow",
                         (MethodInfo *)0x0), (char)bVar6 == '\0')) {
    fVar1 = 1.0;
    local_38 = 1.0;
  }
  else {
    fVar1 = 1.47;
    local_38 = 1.47;
  }
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
    local_38 = fVar1;
  }
  lVar4 = *(long *)&(__this->fields).Dead;
  if ((lVar4 != 0) &&
     (pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18), pUVar5 != (UnityEngine_Rigidbody_o *)0x0
     )) {
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    UVar10 = UnityEngine_Rigidbody__get_velocity(pUVar5,(MethodInfo *)0x0);
    fVar8 = UVar10.fields.y;
    if (DAT_0570266b == '\0') {
      il2cpp_init_method_metadata(UVar10.fields.x,UVar10.fields.z,&TypeInfo_Vector3);
      DAT_0570266b = '\x01';
    }
    lVar4 = *(long *)&(__this->fields).Dead;
    if ((lVar4 != 0) &&
       (pUVar5 = *(UnityEngine_Rigidbody_o **)(lVar4 + 0x18),
       pUVar5 != (UnityEngine_Rigidbody_o *)0x0)) {
      local_58 = (float)uVar3;
      fStack_54 = (float)((ulong)uVar3 >> 0x20);
      uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
      fVar9 = (__this->fields)._turnTargetRotation.fields.x * 100.0;
      if (100.0 <= fVar9) {
        fVar9 = 100.0;
      }
      fVar2 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
      UVar10 = UnityEngine_Rigidbody__get_velocity(pUVar5,(MethodInfo *)0x0);
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      local_38 = local_38 * fVar7;
      fVar7 = 1.0;
      if (local_38 <= 1.0) {
        fVar7 = local_38;
      }
      fVar7 = (float)(-(uint)(0.0 <= local_38) & (uint)fVar7);
      local_28 = UVar10.fields.x;
      fStack_24 = UVar10.fields.y;
      UVar10.fields.z =
           UVar10.fields.z + ((fVar9 * fVar2 + fVar1 * fVar8) - UVar10.fields.z) * fVar7;
      UVar10.fields.y =
           fStack_24 +
           fVar7 * ((fVar9 * (float)((ulong)uVar3 >> 0x20) + fStack_54 * fVar8) - fStack_24);
      UVar10.fields.x = local_28 + fVar7 * ((fVar9 * (float)uVar3 + local_58 * fVar8) - local_28);
      UnityEngine_Rigidbody__set_velocity(pUVar5,UVar10,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Update
// il2cpp: void Characters_BaseTitan__Update (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3ff5120

void Characters_BaseTitan__Update(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *pCVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Action_Hashtable__o *pSVar5;
  Characters_BaseTitanComponentCache_o *x;
  undefined1 auVar6 [16];
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  int iVar10;
  int32_t iVar11;
  System_String_o *pSVar12;
  Characters_BaseTitan_c *pCVar13;
  MethodInfo *pMVar14;
  Characters_BaseTitan_o *pCVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar21;
  float fVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o origin_00;
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
  
  if (DAT_0570421c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&"");
    DAT_0570421c = '\x01';
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
  fVar21 = (__this->fields)._jumpDirection.fields.x;
  fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._jumpDirection.fields.x = fVar21 - fVar16;
  fVar21 = (__this->fields)._jumpDirection.fields.z;
  fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._jumpDirection.fields.z = fVar21 - fVar16;
  cVar7 = (char)(__this->fields).CustomDamage;
  uVar9 = *(uint *)&(__this->fields).OutlineComponent;
  if (((cVar7 == '\0') && (uVar9 - 1 < 3)) &&
     (local_98 = CONCAT44(local_98._4_4_,(float)local_98),
     *(char *)((long)&(__this->fields).State + 2) != '\0')) {
LAB_03ff5253:
    plVar1 = *(long **)&(__this->fields).TurnPause;
    if (plVar1 == (long *)0x0) goto LAB_03ff5f73;
    pSVar12 = (System_String_o *)
              (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto LAB_03ff5f73;
    local_e8._0_4_ = Characters_AnimationHandler__GetLength(pCVar2,pSVar12,(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto LAB_03ff5f73;
    Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._148_Ungrab.methodPtr)
              (__this,(__this->klass->vtable)._148_Ungrab.method);
    (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,pSVar12,0.1,0.0,(MethodInfo *)0x0);
    *(undefined4 *)&(__this->fields).OutlineComponent = 0x14;
    goto LAB_03ff52fd;
  }
  if ((uVar9 & 0xfffffffe) == 6) {
    if (((cVar7 == '\0') && (*(char *)((long)&(__this->fields).Detection + 4) != '\0')) &&
       ((*(char *)((long)&(__this->fields).State + 1) != '\0' &&
        (1.0 < (__this->fields).ClimbCooldown)))) {
      lVar3 = *(long *)&(__this->fields).Dead;
      local_98 = CONCAT44(local_98._4_4_,(float)local_98);
      if ((lVar3 == 0) ||
         (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
         local_98 = CONCAT44(local_98._4_4_,(float)local_98),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff5f73;
      UVar23 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      fVar21 = UVar23.fields.z;
      if (DAT_056fde1f == '\0') {
        local_c8._0_4_ = UVar23.fields.z;
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
        fVar21 = (float)local_c8._0_4_;
      }
      lVar3 = *(long *)&(__this->fields).Dead;
      local_98 = CONCAT44(local_98._4_4_,(float)local_98);
      if ((lVar3 == 0) ||
         (pCVar15 = *(Characters_BaseTitan_o **)(lVar3 + 0x10),
         local_98 = CONCAT44(local_98._4_4_,(float)local_98),
         pCVar15 == (Characters_BaseTitan_o *)0x0)) goto LAB_03ff5f73;
      uVar18 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar16 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
      local_c8._0_4_ = fVar21 + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 3.0 * fVar16;
      pMVar14 = (MethodInfo *)0x0;
      UVar24 = UnityEngine_Transform__get_forward
                         ((UnityEngine_Transform_o *)pCVar15,(MethodInfo *)0x0);
      uStack_a0 = extraout_XMM0_Dc;
      local_a8 = (undefined1  [8])UVar24.fields._0_8_;
      uStack_9c = extraout_XMM0_Dd;
      local_b8._0_4_ = *(undefined4 *)((long)&(__this->fields).TitanColliderToggler + 4);
      local_d0[0].m_Mask = (int32_t)Characters_BaseTitan__get_MapObjectMask(pCVar15,pMVar14);
      iVar11 = UnityEngine_LayerMask__get_value
                         ((UnityEngine_LayerMask_Fields)(int32_t)local_d0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      auVar6 = _local_a8;
      origin.fields.z = (float)local_c8._0_4_;
      origin.fields.x = UVar23.fields.x + fVar16 * (float)uVar18 * 3.0;
      origin.fields.y = UVar23.fields.y + fVar16 * (float)((ulong)uVar18 >> 0x20) * 3.0;
      UVar23.fields.z = UVar24.fields.z;
      UVar23.fields.x = (float)local_a8._0_4_;
      UVar23.fields.y = (float)local_a8._4_4_;
      _local_a8 = auVar6;
      bVar8 = UnityEngine_Physics__Raycast
                        (origin,UVar23,&local_48,(float)local_b8._0_4_ * 5.0,iVar11,
                         (MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        (*(__this->klass->vtable)._135_WallClimb.methodPtr)();
      }
    }
    uVar9 = *(uint *)&(__this->fields).OutlineComponent;
  }
  if ((uVar9 == 0x19) || (uVar9 == 2)) {
    fVar21 = (__this->fields).Size;
    local_c8 = ZEXT416((uint)(__this->fields).ClimbCooldown);
    fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar21 = (float)local_c8._0_4_ - fVar16 * fVar21;
  }
  else {
    local_c8._0_4_ = (__this->fields).HoldHumanLeft;
    fVar21 = (__this->fields).ClimbCooldown;
    fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar21 = fVar16 * (float)local_c8._0_4_ + fVar21;
  }
  (__this->fields).ClimbCooldown = fVar21;
  fVar16 = *(float *)((long)&(__this->fields).HoldHuman + 4);
  if (fVar21 <= fVar16) {
    fVar16 = fVar21;
  }
  fVar21 = (float)(-(uint)(0.0 <= fVar21) & (uint)fVar16);
  (__this->fields).ClimbCooldown = fVar21;
  iVar10 = *(int *)&(__this->fields).OutlineComponent;
  if (iVar10 == 0x19) {
    if ((0.0 < fVar21) && (*(char *)((long)&(__this->fields).State + 1) != '\0')) {
      return;
    }
    (*(__this->klass->vtable)._139_Idle.methodPtr)(0x3e4ccccd);
    iVar10 = *(int *)&(__this->fields).OutlineComponent;
  }
  local_98 = CONCAT44(local_98._4_4_,(float)local_98);
  switch(iVar10) {
  case 4:
    local_98 = CONCAT44(local_98._4_4_,(float)local_98);
    if ((char)(__this->fields).CustomDamage == '\0') {
      uVar18 = (*(__this->klass->vtable)._66_GetAimPoint.methodPtr)(__this);
      fVar21 = (float)((ulong)uVar18 >> 0x20);
      pSVar5 = (__this->fields).OnPlayerPropertiesChanged;
      local_98 = CONCAT44(local_98._4_4_,(float)local_98);
      if (pSVar5 == (System_Action_Hashtable__o *)0x0) goto LAB_03ff5f73;
      local_c8._0_4_ = fVar16;
      pUVar4 = (UnityEngine_Transform_o *)(pSVar5->fields).extra_arg;
      local_98 = CONCAT44(local_98._4_4_,(float)local_98);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03ff5f73;
      UVar23 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      fVar17 = UVar23.fields.y;
      fVar16 = UVar23.fields.x;
      local_a8._0_4_ = fVar21;
      local_a8._4_4_ = fVar21;
      uStack_a0 = extraout_XMM0_Dc_00;
      uStack_9c = extraout_XMM0_Dd_00;
      if (DAT_056fde1c == '\0') {
        local_b8._8_4_ = extraout_XMM0_Dc_01;
        local_b8._0_8_ = UVar23.fields._0_8_;
        local_b8._12_4_ = extraout_XMM0_Dd_01;
        local_98._0_4_ = fVar17;
        local_98._4_4_ = fVar17;
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
        fVar16 = (float)local_b8._0_4_;
        fVar17 = (float)local_98;
      }
      fVar16 = (float)uVar18 - fVar16;
      local_a8._0_4_ = (float)local_a8._0_4_ - fVar17;
      fVar21 = (float)local_c8._0_4_ - UVar23.fields.z;
      local_c8._0_4_ = fVar21;
      fVar17 = (float)local_a8._0_4_;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
        fVar21 = (float)local_c8._0_4_;
        fVar17 = (float)local_a8._0_4_;
      }
      fVar17 = fVar21 * fVar21 + fVar17 * fVar17 + fVar16 * fVar16;
      fVar21 = 0.0;
      if (fVar17 < 0.0) {
        fVar17 = sqrtf(fVar17);
      }
      else {
        fVar17 = SQRT(fVar17);
      }
      fVar17 = fVar17 / (__this->fields).ConfusedTime;
      uVar19 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)(__this);
      uVar18 = CONCAT44(local_98._4_4_,(float)local_98);
      local_98 = uVar19;
      if (DAT_056fde1c == '\0') {
        local_b8._0_4_ = fVar21;
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
        fVar21 = (float)local_b8._0_4_;
        uVar18 = local_98;
      }
      uVar20 = (undefined4)((ulong)local_98 >> 0x20);
      uVar19 = local_98;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        local_b8._0_4_ = fVar21;
        local_88 = uVar20;
        uStack_84 = uVar20;
        il2cpp_init_class();
        uVar19 = CONCAT44(local_88,(float)local_98);
        fVar21 = (float)local_b8._0_4_;
        uVar18 = local_98;
      }
      fVar22 = (float)((ulong)uVar19 >> 0x20);
      fVar21 = fVar21 * fVar21 + fVar22 * fVar22 + (float)uVar19 * (float)uVar19;
      local_98 = uVar18;
      if (fVar21 < 0.0) {
        fVar21 = sqrtf(fVar21);
      }
      else {
        fVar21 = SQRT(fVar21);
      }
      *(ulong *)&(__this->fields)._wallClimbForward.fields.z =
           CONCAT44((float)local_a8._0_4_ + fVar21 * 0.5 * fVar17 * fVar17,fVar16);
      (__this->fields)._turnStartRotation.fields.y = (float)local_c8._0_4_;
    }
    break;
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
  fVar21 = (__this->fields)._currentCrippleTime;
  fVar16 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar21 = fVar21 - fVar16;
  (__this->fields)._currentCrippleTime = fVar21;
  if (0.0 < fVar21) {
    return;
  }
  iVar10 = *(int *)&(__this->fields).OutlineComponent;
  if (iVar10 == 10) {
    x = (__this->fields).BaseTitanCache;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      (*(__this->klass->vtable)._136_Eat.methodPtr)(__this,(__this->klass->vtable)._136_Eat.method);
      return;
    }
    iVar10 = *(int *)&(__this->fields).OutlineComponent;
  }
  switch(iVar10) {
  case 0:
    if (*(char *)((long)&(__this->fields).Detection + 4) == '\0') {
      if (*(char *)((long)&(__this->fields).State + 2) == '\0') {
        return;
      }
      plVar1 = *(long **)&(__this->fields).TurnPause;
      if (plVar1 == (long *)0x0) goto LAB_03ff5f73;
      pSVar12 = (System_String_o *)
                (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
      bVar8 = System_String__op_Inequality(pSVar12,"",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      goto LAB_03ff5253;
    }
    cVar7 = *(char *)((long)&(__this->fields).State + 1);
    if ((char)(__this->fields).State == '\0') {
      if (cVar7 == '\0') goto LAB_03ff5f5b;
    }
    else if (cVar7 == '\0') goto LAB_03ff5f28;
    if (1.0 < (__this->fields).ClimbCooldown) {
      cVar7 = (*(__this->klass->vtable)._112_get_CanSprint.methodPtr)
                        (__this,(__this->klass->vtable)._112_get_CanSprint.method);
      if (cVar7 != '\0') {
LAB_03ff5f03:
        (*(__this->klass->vtable)._134_Sprint.methodPtr)
                  (__this,(__this->klass->vtable)._134_Sprint.method);
        return;
      }
    }
    goto LAB_03ff5f5b;
  case 1:
    if (*(char *)((long)&(__this->fields).Detection + 4) != '\0') {
      if (*(char *)((long)&(__this->fields).State + 1) != '\0') {
        cVar7 = (*(__this->klass->vtable)._112_get_CanSprint.methodPtr)
                          (__this,(__this->klass->vtable)._112_get_CanSprint.method);
        if (cVar7 == '\0') {
          return;
        }
        if ((__this->fields).ClimbCooldown <= 1.0) {
          return;
        }
        goto LAB_03ff5f03;
      }
      if ((char)(__this->fields).State == '\0') {
        return;
      }
LAB_03ff5f28:
      pCVar13 = __this->klass;
LAB_03ff5f39:
      (*(pCVar13->vtable)._137_Walk.methodPtr)(__this,(pCVar13->vtable)._137_Walk.method);
      return;
    }
LAB_03ff5c46:
    (*(__this->klass->vtable)._139_Idle.methodPtr)
              (0x3e4ccccd,__this,(__this->klass->vtable)._139_Idle.method);
    break;
  case 2:
    if ((char)(__this->fields).CustomDamage == '\0') {
      lVar3 = *(long *)&(__this->fields).Dead;
      if ((lVar3 == 0) ||
         (pUVar4 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
         pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff5f73;
      UVar23 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      fVar21 = UVar23.fields.z;
      if (DAT_056fde1f == '\0') {
        local_c8._0_4_ = UVar23.fields.z;
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fde1f = '\x01';
        fVar21 = (float)local_c8._0_4_;
      }
      lVar3 = *(long *)&(__this->fields).Dead;
      if ((lVar3 == 0) ||
         (pCVar15 = *(Characters_BaseTitan_o **)(lVar3 + 0x10),
         pCVar15 == (Characters_BaseTitan_o *)0x0)) goto LAB_03ff5f73;
      uVar18 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar16 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
      local_c8._0_4_ = fVar21 + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 3.0 * fVar16;
      pMVar14 = (MethodInfo *)0x0;
      UVar24 = UnityEngine_Transform__get_forward
                         ((UnityEngine_Transform_o *)pCVar15,(MethodInfo *)0x0);
      uStack_a0 = extraout_XMM0_Dc_02;
      local_a8 = (undefined1  [8])UVar24.fields._0_8_;
      uStack_9c = extraout_XMM0_Dd_02;
      local_b8._0_4_ = *(undefined4 *)((long)&(__this->fields).TitanColliderToggler + 4);
      local_d0[0].m_Mask = (int32_t)Characters_BaseTitan__get_MapObjectMask(pCVar15,pMVar14);
      iVar11 = UnityEngine_LayerMask__get_value
                         ((UnityEngine_LayerMask_Fields)(int32_t)local_d0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
        il2cpp_init_class();
      }
      auVar6 = _local_a8;
      origin_00.fields.z = (float)local_c8._0_4_;
      origin_00.fields.x = UVar23.fields.x + fVar16 * (float)uVar18 * 3.0;
      origin_00.fields.y = UVar23.fields.y + fVar16 * (float)((ulong)uVar18 >> 0x20) * 3.0;
      UVar24.fields.z = UVar24.fields.z;
      UVar24.fields.x = (float)local_a8._0_4_;
      UVar24.fields.y = (float)local_a8._4_4_;
      _local_a8 = auVar6;
      bVar8 = UnityEngine_Physics__Raycast
                        (origin_00,UVar24,&local_78,(float)local_b8._0_4_ * 5.0,iVar11,
                         (MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        (*(__this->klass->vtable)._135_WallClimb.methodPtr)
                  (__this,(__this->klass->vtable)._135_WallClimb.method);
      }
    }
    if (*(char *)((long)&(__this->fields).Detection + 4) == '\0') goto LAB_03ff5c46;
    if (*(char *)((long)&(__this->fields).State + 1) != '\0') {
      if (0.0 < (__this->fields).ClimbCooldown) {
        return;
      }
      goto LAB_03ff5f5b;
    }
    pCVar13 = __this->klass;
    if ((char)(__this->fields).State != '\0') goto LAB_03ff5f39;
    goto LAB_03ff5f5e;
  case 3:
    if (*(char *)((long)&(__this->fields).Detection + 4) == '\0') goto LAB_03ff5c46;
    if (*(char *)((long)&(__this->fields).State + 1) != '\0') {
      if ((__this->fields).ClimbCooldown <= 1.0) {
        return;
      }
      cVar7 = (*(__this->klass->vtable)._112_get_CanSprint.methodPtr)
                        (__this,(__this->klass->vtable)._112_get_CanSprint.method);
      if (cVar7 == '\0') {
        return;
      }
      goto LAB_03ff5f03;
    }
    if ((char)(__this->fields).State != '\0') {
      return;
    }
LAB_03ff5f5b:
    pCVar13 = __this->klass;
LAB_03ff5f5e:
    (*(pCVar13->vtable)._133_Run.methodPtr)(__this,(pCVar13->vtable)._133_Run.method);
    break;
  case 4:
    (*(__this->klass->vtable)._127_StartJump.methodPtr)
              (__this,(__this->klass->vtable)._127_StartJump.method);
    break;
  case 5:
    *(undefined4 *)&(__this->fields).OutlineComponent = 6;
    break;
  default:
    (*(__this->klass->vtable)._138_Idle.methodPtr)(__this,(__this->klass->vtable)._138_Idle.method);
    break;
  case 8:
  case 0x10:
  case 0x15:
    pCVar13 = __this->klass;
    pMVar14 = (pCVar13->vtable)._140_IdleWait.method;
    bVar8 = 0x3e99999a;
    goto LAB_03ff5bee;
  case 9:
  case 0x1a:
    bVar8 = (__this->fields).IsSit;
    goto LAB_03ff5be4;
  case 10:
  case 0x17:
    bVar8 = *(bool_conflict *)&(__this->fields).field_0x11c;
    goto LAB_03ff5be4;
  case 0xb:
    pCVar13 = __this->klass;
    pMVar14 = (pCVar13->vtable)._140_IdleWait.method;
    bVar8 = 0x3e4ccccd;
    goto LAB_03ff5bee;
  case 0x11:
    goto switchD_03ff58b7_caseD_11;
  case 0x12:
    plVar1 = *(long **)&(__this->fields).TurnPause;
    if (plVar1 != (long *)0x0) {
      pSVar12 = (System_String_o *)(**(code **)(*plVar1 + 0x218))();
      *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                  (__this,(__this->klass->vtable)._148_Ungrab.method);
        (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar12,0.3,0.0,(MethodInfo *)0x0);
        *(undefined4 *)&(__this->fields).OutlineComponent = 0x16;
        *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar12;
        il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,pSVar12);
        (__this->fields)._currentCrippleTime = 0.3;
        return;
      }
    }
    goto LAB_03ff5f73;
  case 0x13:
    pSVar12 = (System_String_o *)
              (*(__this->klass->vtable)._155_GetSitIdleAniamtion.methodPtr)(__this);
    fVar21 = (__this->fields)._turnTargetRotation.fields.y;
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto LAB_03ff5f73;
    Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._148_Ungrab.methodPtr)
              (__this,(__this->klass->vtable)._148_Ungrab.method);
    (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,pSVar12,0.1,0.0,(MethodInfo *)0x0);
    *(undefined4 *)&(__this->fields).OutlineComponent = 0x11;
    *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar12;
    il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,pSVar12);
    (__this->fields)._currentCrippleTime = fVar21;
    break;
  case 0x14:
    pSVar12 = (System_String_o *)
              (*(__this->klass->vtable)._155_GetSitIdleAniamtion.methodPtr)(__this);
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto LAB_03ff5f73;
    Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._148_Ungrab.methodPtr)
              (__this,(__this->klass->vtable)._148_Ungrab.method);
    (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,pSVar12,0.1,0.0,(MethodInfo *)0x0);
    *(undefined4 *)&(__this->fields).OutlineComponent = 0x16;
    *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar12;
    il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,pSVar12);
    (__this->fields)._currentCrippleTime = 0.0;
    break;
  case 0x16:
    if ((*(char *)((long)&(__this->fields).Detection + 4) == '\0') &&
       (*(char *)((long)&(__this->fields).State + 2) != '\0')) {
      return;
    }
    goto switchD_03ff58b7_caseD_11;
  case 0x18:
    bVar8 = *(bool_conflict *)&(__this->fields).HoldHuman;
LAB_03ff5be4:
    pCVar13 = __this->klass;
    pMVar14 = (pCVar13->vtable)._140_IdleWait.method;
LAB_03ff5bee:
    (*(pCVar13->vtable)._140_IdleWait.methodPtr)(bVar8,__this,pMVar14);
  }
  return;
switchD_03ff58b7_caseD_11:
  pSVar12 = (System_String_o *)
            (*(__this->klass->vtable)._157_GetSitUpAnimation.methodPtr)
                      (__this,(__this->klass->vtable)._157_GetSitUpAnimation.method);
  pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
    local_e8._0_4_ = Characters_AnimationHandler__GetLength(pCVar2,pSVar12,(MethodInfo *)0x0);
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 1;
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar2,0,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._148_Ungrab.methodPtr)
                (__this,(__this->klass->vtable)._148_Ungrab.method);
      (*(__this->klass->vtable)._163_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._163_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade
                ((Characters_BaseCharacter_o *)__this,pSVar12,0.1,0.0,(MethodInfo *)0x0);
      *(undefined4 *)&(__this->fields).OutlineComponent = 0x15;
LAB_03ff52fd:
      *(System_String_o **)&(__this->fields)._climbCooldownLeft = pSVar12;
      il2cpp_runtime_glue(&(__this->fields)._climbCooldownLeft,pSVar12);
      (__this->fields)._currentCrippleTime = (float)local_e8;
      return;
    }
  }
LAB_03ff5f73:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$StopWallClimb
// il2cpp: void Characters_BaseTitan__StopWallClimb (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40014d0

void Characters_BaseTitan__StopWallClimb(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  vtable_dispatch = (__this->klass->vtable)._139_Idle.methodPtr;
  (*vtable_dispatch)
            (0x3e4ccccd,__this,(__this->klass->vtable)._139_Idle.method,in_RDX,vtable_dispatch
            );
  return;
}


// Characters.BaseTitan$$FixedUpdate
// il2cpp: void Characters_BaseTitan__FixedUpdate (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40014f0

void Characters_BaseTitan__FixedUpdate(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  System_Action_Hashtable__o *pSVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar9;
  Characters_AnimationHandler_o *pCVar10;
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar11 [16];
  double dVar12;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  bool bVar13;
  bool_conflict bVar14;
  uint uVar15;
  int32_t layerMask;
  MethodInfo *pMVar16;
  UnityEngine_Rigidbody_o *pUVar17;
  Characters_BaseTitan_o *__this_03;
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
  undefined8 extraout_XMM1_Qa_00;
  int32_t extraout_XMM1_Dc;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_o UVar31;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o force;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 in_stack_ffffffffffffff48 [12];
  undefined4 uVar34;
  int32_t iVar35;
  undefined1 auStack_98 [8];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  UnityEngine_LayerMask_Fields aUStack_78 [2];
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [16];
  Il2CppMethodPointer pIStack_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod pIStack_48;
  uint32_t uStack_40;
  float fStack_3c;
  float fStack_38;
  undefined8 uStack_34;
  
  if (DAT_0570421d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&"Gravity");
    DAT_0570421d = '\x01';
  }
  fStack_38 = 0.0;
  uStack_34 = 0;
  pIStack_48 = (InvokerMethod)0x0;
  uStack_40 = 0;
  fStack_3c = 0.0;
  pIStack_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  aUStack_78[0].m_Mask = 0;
  Characters_BaseCharacter__FixedUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar14 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    return;
  }
  fVar19 = (__this->fields)._jumpDirection.fields.y;
  fVar18 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  (__this->fields)._jumpDirection.fields.y = fVar19 - fVar18;
  lVar6 = *(long *)&(__this->fields).Dead;
  if ((lVar6 == 0) ||
     (pUVar17 = *(UnityEngine_Rigidbody_o **)(lVar6 + 0x18),
     pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
  bVar14 = UnityEngine_Rigidbody__get_isKinematic(pUVar17,(MethodInfo *)0x0);
  iVar5 = *(int *)&(__this->fields).OutlineComponent;
  if (((iVar5 == 0x16) || (iVar5 == 0)) &&
     (((((char)(__this->fields).CustomDamage != '\0' &&
        (*(char *)((long)&(__this->fields).Animation + 4) != '\0')) &&
       (*(float *)&(__this->fields).Animation <= 0.1)) && ((__this->fields).MaxSoundDistance <= 0.0)
      ))) {
    if ((char)bVar14 != '\0') {
      return;
    }
    Characters_BaseCharacter__SetKinematic
              ((Characters_BaseCharacter_o *)__this,1,0.0,(MethodInfo *)0x0);
    return;
  }
  pbVar1 = &(__this->fields).Dead;
  if ((char)bVar14 != '\0') {
    Characters_BaseCharacter__SetKinematic
              ((Characters_BaseCharacter_o *)__this,0,0.0,(MethodInfo *)0x0);
  }
  if ((*(long *)pbVar1 == 0) ||
     (pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18),
     pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
  pMVar16 = (MethodInfo *)0x0;
  UVar31 = UnityEngine_Rigidbody__get_velocity(pUVar17,(MethodInfo *)0x0);
  auVar26._4_4_ = UVar31.fields.y;
  auVar26._0_4_ = auVar26._4_4_;
  auVar26._8_4_ = extraout_XMM0_Dc;
  auVar26._12_4_ = extraout_XMM0_Dd;
  fVar19 = 0.0;
  if (auVar26._4_4_ < 0.0) {
    fVar18 = (__this->fields)._turnTargetRotation.fields.z;
    fVar19 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
    fVar19 = fVar19 + fVar18;
  }
  (__this->fields)._turnTargetRotation.fields.z = fVar19;
  if (((byte)(__this->fields).CustomDamage & 10.0 <= fVar19) != 0) {
    if ((*(long *)pbVar1 == 0) ||
       (pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18),
       pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
    UVar31 = UnityEngine_Rigidbody__get_velocity(pUVar17,(MethodInfo *)0x0);
    auVar25._4_12_ = auVar26._4_12_;
    auVar25._0_4_ = UVar31.fields.z;
    fVar19 = UVar31.fields.y;
    pMVar16 = (__this->klass->vtable)._58_get_Gravity.method;
    (*(__this->klass->vtable)._58_get_Gravity.methodPtr)(fVar19,auVar25._0_8_,__this);
    if (fVar19 <= extraout_XMM0_Db * 10.0) {
      pMVar16 = "Gravity";
      (*(__this->klass->vtable)._82_GetKilledRPC.methodPtr)
                (__this,"Gravity",(__this->klass->vtable)._82_GetKilledRPC.method);
    }
  }
  if (((0.0 < (__this->fields)._jumpDirection.fields.y) &&
      ((char)(__this->fields).CustomDamage != '\0')) &&
     (uVar15 = *(uint *)&(__this->fields).OutlineComponent, (uVar15 | 2) != 7)) {
LAB_04001775:
    (__this->fields)._turnTargetRotation.fields.w = 0.0;
    bVar13 = false;
    if ((char)(__this->fields).CustomDamage == '\0') goto LAB_0400174f;
LAB_04001787:
    if (uVar15 != 10) {
      if (uVar15 == 6) goto LAB_04001795;
      goto LAB_04001820;
    }
LAB_040017e8:
    pMVar16 = (__this->klass->vtable)._160_FixedUpdateAttack.method;
    (*(__this->klass->vtable)._160_FixedUpdateAttack.methodPtr)(__this);
    if (*(char *)((long)&(__this->fields).Animation + 4) != '\0') {
      if ((char)(__this->fields).CustomDamage == '\0') goto LAB_0400180a;
      goto LAB_04001833;
    }
    goto LAB_0400183b;
  }
  (*(__this->klass->vtable)._96_CheckGround.methodPtr)
            (__this,(__this->klass->vtable)._96_CheckGround.method);
  pMVar16 = (__this->klass->vtable)._119_get_CheckGroundTime.method;
  fVar19 = (float)(*(__this->klass->vtable)._119_get_CheckGroundTime.methodPtr)(__this);
  (__this->fields)._jumpDirection.fields.y = fVar19;
  uVar15 = *(uint *)&(__this->fields).OutlineComponent;
  if (uVar15 != 7) goto LAB_04001775;
  uVar15 = 7;
  bVar13 = true;
  if ((char)(__this->fields).CustomDamage != '\0') goto LAB_04001787;
LAB_0400174f:
  if (uVar15 < 0x1b) {
    if ((0x4108010U >> (uVar15 & 0x1f) & 1) == 0) {
      if (uVar15 != 6) {
        if (uVar15 == 10) goto LAB_040017e8;
        goto LAB_04001820;
      }
LAB_04001795:
      if ((*(long *)pbVar1 == 0) ||
         (pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18),
         pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
      UVar31 = UnityEngine_Rigidbody__get_velocity(pUVar17,(MethodInfo *)0x0);
      if (1.0 < UVar31.fields.y) goto LAB_0400183b;
      (*(__this->klass->vtable)._142_Fall.methodPtr)(__this);
      cVar4 = *(char *)&(__this->fields)._stateTimeLeft;
    }
    else {
LAB_0400180a:
      Characters_BaseTitan__SetDefaultVelocityLerp(__this,pMVar16);
      cVar4 = *(char *)&(__this->fields)._stateTimeLeft;
    }
  }
  else {
LAB_04001820:
    cVar4 = *(char *)((long)&(__this->fields).Animation + 4);
    if (uVar15 == 0xf) {
      if (cVar4 != '\0') {
LAB_04001833:
        Characters_BaseTitan__SetDefaultVelocity(__this,pMVar16);
      }
      goto LAB_0400183b;
    }
    if (((cVar4 == '\0') || (uVar15 == 5)) || (uVar15 == 0x19)) {
      if (bVar13) {
        if ((*(long *)pbVar1 == 0) ||
           (pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18),
           pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
        UVar31 = UnityEngine_Rigidbody__get_velocity(pUVar17,(MethodInfo *)0x0);
        if (-1.0 <= UVar31.fields.y) {
          fVar19 = (__this->fields)._turnTargetRotation.fields.w;
          fVar18 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          (__this->fields)._turnTargetRotation.fields.w = fVar18 + fVar19;
          if (0.5 < fVar18 + fVar19) goto LAB_04001e94;
        }
      }
      else if (uVar15 == 0x19) {
        if (*(long *)pbVar1 == 0) goto LAB_0400266c;
        pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18);
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        if (pUVar17 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_0400266c;
        UnityEngine_Rigidbody__set_velocity
                  (pUVar17,(UnityEngine_Vector3_o)
                           **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0)
        ;
        uVar21 = (*(__this->klass->vtable)._95_GetTargetDirection.methodPtr)(__this);
        fVar19 = (float)((ulong)uVar21 >> 0x20);
        fVar18 = (float)uVar21;
        if (*(char *)((long)&(__this->fields).Detection + 4) == '\0') {
LAB_04002527:
          (*(__this->klass->vtable)._159_StopWallClimb.methodPtr)(__this);
          cVar4 = *(char *)&(__this->fields)._stateTimeLeft;
          goto joined_r0x04002541;
        }
        if (*(long *)pbVar1 == 0) goto LAB_0400266c;
        fVar27 = (float)extraout_XMM1_Qa;
        uVar34 = (undefined4)((ulong)extraout_XMM1_Qa >> 0x20);
        pUVar8 = *(UnityEngine_Transform_o **)(*(long *)pbVar1 + 0x10);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0400266c;
        iVar35 = extraout_XMM1_Dc;
        UVar31 = UnityEngine_Transform__get_forward(pUVar8,(MethodInfo *)0x0);
        fVar22 = UVar31.fields.z;
        fVar29 = UVar31.fields.y;
        auStack_68._8_4_ = extraout_XMM0_Dc_03;
        auStack_68._0_8_ = UVar31.fields._0_8_;
        auStack_68._12_4_ = extraout_XMM0_Dd_03;
        fVar28 = UVar31.fields.x;
        if (DAT_0570266a == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_0570266a = '\x01';
          fVar28 = (float)auStack_68._0_4_;
        }
        fVar20 = fVar27 * fVar27 + fVar19 * fVar19 + fVar18 * fVar18;
        fVar28 = fVar22 * fVar22 + fVar29 * fVar29 + fVar28 * fVar28;
        if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
          fStack_70 = fVar28;
          fStack_6c = fVar20;
          il2cpp_init_class();
          fVar20 = fStack_6c;
          fVar28 = fStack_70;
        }
        fVar20 = fVar20 * fVar28;
        if (fVar20 < 0.0) {
          fVar20 = sqrtf(fVar20);
          pMVar16 = TypeInfo_Math;
        }
        else {
          fVar20 = SQRT(fVar20);
          pMVar16 = TypeInfo_Math;
        }
        TypeInfo_Math = pMVar16;
        if (1e-15 <= fVar20) {
          fVar20 = (fVar27 * fVar22 + fVar29 * fVar19 + (float)auStack_68._0_4_ * fVar18) / fVar20;
          fVar19 = 1.0;
          if (fVar20 <= 1.0) {
            fVar19 = fVar20;
          }
          fVar19 = (float)(~-(uint)(-1.0 <= fVar20) & 0xbf800000 |
                          (uint)fVar19 & -(uint)(-1.0 <= fVar20));
          if (*(int *)((long)&pMVar16[2].parameters + 4) == 0) {
            uVar34 = 0;
            iVar35 = 0;
            il2cpp_init_class();
          }
          dVar12 = acos((double)fVar19,pMVar16);
          if (135.0 <= (float)dVar12 * 57.29578) goto LAB_04002527;
        }
        if ((*(long *)pbVar1 == 0) ||
           (pUVar8 = *(UnityEngine_Transform_o **)(*(long *)pbVar1 + 0x10),
           pUVar8 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400266c;
        UVar31 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
        fVar28 = UVar31.fields.z;
        fVar27 = UVar31.fields.x;
        fVar22 = UVar31.fields.y;
        fVar19 = extraout_XMM0_Dc_04;
        fVar18 = extraout_XMM0_Dd_04;
        if (DAT_056fde1f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
        }
        lVar6 = *(long *)&(__this->fields).Dead;
        if ((lVar6 == 0) ||
           (__this_03 = *(Characters_BaseTitan_o **)(lVar6 + 0x10),
           __this_03 == (Characters_BaseTitan_o *)0x0)) goto LAB_0400266c;
        uVar21 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar29 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
        fVar27 = fVar27 + fVar29 * (float)uVar21 * 3.0;
        fVar22 = fVar22 + fVar29 * (float)((ulong)uVar21 >> 0x20) * 3.0;
        fVar19 = fVar19 + 0.0;
        fVar18 = fVar18 + 0.0;
        fVar28 = fVar28 + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 3.0 * fVar29;
        pMVar16 = (MethodInfo *)0x0;
        UVar31 = UnityEngine_Transform__get_forward
                           ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
        fVar29 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
        aUStack_78[0].m_Mask = (int32_t)Characters_BaseTitan__get_MapObjectMask(__this_03,pMVar16);
        layerMask = UnityEngine_LayerMask__get_value
                              ((UnityEngine_LayerMask_Fields)(int32_t)aUStack_78,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        origin.fields.y = fVar22;
        origin.fields.x = fVar27;
        origin.fields.z = fVar28;
        bVar14 = UnityEngine_Physics__Raycast
                           (origin,UVar31,(UnityEngine_RaycastHit_o *)&pIStack_58,fVar29 * 5.0,
                            layerMask,(MethodInfo *)0x0);
        lVar6 = *(long *)pbVar1;
        if (lVar6 == 0) goto LAB_0400266c;
        if ((char)bVar14 == '\0') {
          pUVar8 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0400266c;
          UVar31 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
          fVar19 = UVar31.fields.z;
          fVar18 = UVar31.fields.x;
          fVar27 = UVar31.fields.y;
          if (DAT_056fde1f == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fde1f = '\x01';
          }
          lVar6 = *(long *)&(__this->fields).Dead;
          if ((lVar6 == 0) ||
             (__this_00 = *(UnityEngine_Transform_o **)(lVar6 + 0x10),
             __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400266c;
          uVar21 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          fVar22 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
          fVar28 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
          UVar31 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
          fVar29 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
          value_00.fields.x =
               fVar18 + fVar29 * (UVar31.fields.x + UVar31.fields.x) + fVar28 * (float)uVar21 * 3.0;
          value_00.fields.y =
               fVar27 + fVar29 * (UVar31.fields.y + UVar31.fields.y) +
                        fVar28 * (float)((ulong)uVar21 >> 0x20) * 3.0;
          value_00.fields.z =
               (UVar31.fields.z + UVar31.fields.z) * fVar29 + fVar22 * 3.0 * fVar28 + fVar19;
          UnityEngine_Transform__set_position(pUVar8,value_00,(MethodInfo *)0x0);
          goto LAB_04002527;
        }
        pUVar17 = *(UnityEngine_Rigidbody_o **)(lVar6 + 0x18);
        if (pUVar17 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_0400266c;
        UVar31 = UnityEngine_Rigidbody__get_velocity(pUVar17,(MethodInfo *)0x0);
        fVar24 = UVar31.fields.z;
        fVar20 = UVar31.fields.x;
        fVar23 = UVar31.fields.y;
        if (DAT_056fde1f == '\0') {
          fVar19 = extraout_XMM0_Dc_05;
          fVar18 = extraout_XMM0_Dd_05;
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fde1f = '\x01';
          fVar27 = fVar20;
          fVar22 = fVar23;
          fVar28 = fVar24;
        }
        uVar21 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
        fVar30 = (float)(__this->fields).TitanGroundMaskLayers.fields.m_Mask *
                 *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 0.5 +
                 *(float *)&(__this->fields).BaseTitanAnimations;
        UVar31.fields.x = fVar20 + fVar30 * (float)uVar21;
        UVar31.fields.y = fVar23 + fVar30 * (float)((ulong)uVar21 >> 0x20);
        UVar31.fields.z = fVar24 + fVar30 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
        UnityEngine_Rigidbody__set_velocity(pUVar17,UVar31,(MethodInfo *)0x0);
        __this_01.fields.m_Point.fields.y = fVar22;
        __this_01.fields.m_Point.fields.x = fVar27;
        __this_01.fields.m_Point.fields.z = fVar19;
        __this_01.fields.m_Normal.fields.x = fVar18;
        __this_01.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffff48._0_4_;
        __this_01.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff48._4_4_;
        __this_01.fields.m_FaceID = in_stack_ffffffffffffff48._8_4_;
        __this_01.fields.m_Distance = fVar29;
        __this_01.fields.m_UV.fields.x = fVar28;
        __this_01.fields.m_UV.fields.y = (float)uVar34;
        __this_01.fields.m_Collider = iVar35;
        fVar19 = UnityEngine_RaycastHit__get_distance(__this_01,(MethodInfo *)&pIStack_58);
        if (fVar19 <= *(float *)((long)&(__this->fields).TitanColliderToggler + 4) * 3.5)
        goto LAB_0400183b;
        if ((*(long *)pbVar1 == 0) ||
           (pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18),
           pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
        UVar31 = UnityEngine_Rigidbody__get_velocity(pUVar17,(MethodInfo *)0x0);
        fVar19 = UVar31.fields.z;
        if (*(long *)pbVar1 == 0) goto LAB_0400266c;
        fVar18 = UVar31.fields.x;
        fVar27 = UVar31.fields.y;
        pUVar8 = *(UnityEngine_Transform_o **)(*(long *)pbVar1 + 0x10);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0400266c;
        uVar32 = extraout_XMM0_Dc_06;
        uVar33 = extraout_XMM0_Dd_06;
        UVar31 = UnityEngine_Transform__get_forward(pUVar8,(MethodInfo *)0x0);
        __this_02.fields.m_Point.fields.y = fVar27;
        __this_02.fields.m_Point.fields.x = fVar18;
        __this_02.fields.m_Point.fields.z = (float)uVar32;
        __this_02.fields.m_Normal.fields.x = (float)uVar33;
        __this_02.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffff48._0_4_;
        __this_02.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff48._4_4_;
        __this_02.fields.m_FaceID = in_stack_ffffffffffffff48._8_4_;
        __this_02.fields.m_Distance = fVar29;
        __this_02.fields.m_UV.fields.x = fVar19;
        __this_02.fields.m_UV.fields.y = (float)uVar34;
        __this_02.fields.m_Collider = iVar35;
        fVar22 = UnityEngine_RaycastHit__get_distance(__this_02,(MethodInfo *)&pIStack_58);
        auStack_68 = ZEXT416(*(uint *)((long)&(__this->fields).TitanColliderToggler + 4));
        fVar28 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
        fVar28 = ((float)auStack_68._0_4_ * -3.5 + fVar22) / fVar28;
        if (10.0 <= fVar28) {
          fVar28 = 10.0;
        }
        fStack_88 = UVar31.fields.x;
        fStack_84 = UVar31.fields.y;
        fVar22 = fVar28 * UVar31.fields.z;
        fVar18 = fVar18 + fVar28 * fStack_88;
        fVar27 = fVar27 + fVar28 * fStack_84;
        goto LAB_04002646;
      }
LAB_0400183b:
      cVar4 = *(char *)&(__this->fields)._stateTimeLeft;
    }
    else {
      Characters_BaseTitan__SetDefaultVelocity(__this,pMVar16);
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      (__this->fields).RunSpeedBase = (float)(int)uVar21;
      (__this->fields).WalkSpeedBase = (float)(int)((ulong)uVar21 >> 0x20);
      (__this->fields).RunSpeedPerLevel = fVar19;
      iVar5 = *(int *)&(__this->fields).OutlineComponent;
      if (iVar5 == 7) {
LAB_04001e94:
        (*(__this->klass->vtable)._141_Land.methodPtr)(__this);
        cVar4 = *(char *)&(__this->fields)._stateTimeLeft;
        goto joined_r0x04002541;
      }
      if ((2 < iVar5 - 1U) || (*(char *)((long)&(__this->fields).Detection + 4) == '\0'))
      goto LAB_0400183b;
      uVar21 = (*(__this->klass->vtable)._95_GetTargetDirection.methodPtr)(__this);
      (__this->fields).RunSpeedBase = (float)(int)uVar21;
      (__this->fields).WalkSpeedBase = (float)(int)((ulong)uVar21 >> 0x20);
      (__this->fields).RunSpeedPerLevel = extraout_XMM1_Da;
      iVar5 = *(int *)&(__this->fields).OutlineComponent;
      if (iVar5 == 3) {
        if ((*(long *)pbVar1 == 0) ||
           (pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18),
           pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
        UVar31 = UnityEngine_Rigidbody__get_velocity(pUVar17,(MethodInfo *)0x0);
        fVar19 = UVar31.fields.z;
        if (*(long *)pbVar1 == 0) goto LAB_0400266c;
        fVar18 = UVar31.fields.x;
        fVar27 = UVar31.fields.y;
        pUVar8 = *(UnityEngine_Transform_o **)(*(long *)pbVar1 + 0x10);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0400266c;
        UVar31 = UnityEngine_Transform__get_forward(pUVar8,(MethodInfo *)0x0);
        fVar20 = UVar31.fields.z;
        fVar28 = UVar31.fields.x;
        fVar29 = UVar31.fields.y;
        fVar22 = (__this->fields).AttackSpeedMultiplier *
                 *(float *)((long)&(__this->fields).TitanColliderToggler + 4) +
                 *(float *)((long)&(__this->fields).BaseTitanAnimations + 4);
LAB_040025b3:
        fVar28 = fVar22 * fVar28;
        fVar29 = fVar22 * fVar29;
        fVar22 = fVar22 * fVar20;
      }
      else {
        if (iVar5 != 2) {
          if (iVar5 != 1) goto LAB_0400183b;
          if ((*(long *)pbVar1 == 0) ||
             (pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18),
             pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
          UVar31 = UnityEngine_Rigidbody__get_velocity(pUVar17,(MethodInfo *)0x0);
          fVar19 = UVar31.fields.z;
          if (*(long *)pbVar1 == 0) goto LAB_0400266c;
          fVar18 = UVar31.fields.x;
          fVar27 = UVar31.fields.y;
          pUVar8 = *(UnityEngine_Transform_o **)(*(long *)pbVar1 + 0x10);
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0400266c;
          UVar31 = UnityEngine_Transform__get_forward(pUVar8,(MethodInfo *)0x0);
          fVar20 = UVar31.fields.z;
          fVar28 = UVar31.fields.x;
          fVar29 = UVar31.fields.y;
          fVar22 = (float)(__this->fields).TitanGroundMaskLayers.fields.m_Mask *
                   *(float *)((long)&(__this->fields).TitanColliderToggler + 4) +
                   *(float *)&(__this->fields).BaseTitanAnimations;
          goto LAB_040025b3;
        }
        if ((*(long *)pbVar1 == 0) ||
           (pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18),
           pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
        UVar31 = UnityEngine_Rigidbody__get_velocity(pUVar17,(MethodInfo *)0x0);
        fVar19 = UVar31.fields.z;
        if (*(long *)pbVar1 == 0) goto LAB_0400266c;
        fVar18 = UVar31.fields.x;
        fVar27 = UVar31.fields.y;
        pUVar8 = *(UnityEngine_Transform_o **)(*(long *)pbVar1 + 0x10);
        if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0400266c;
        UVar31 = UnityEngine_Transform__get_forward(pUVar8,(MethodInfo *)0x0);
        fVar22 = (float)(__this->fields).TitanGroundMaskLayers.fields.m_Mask *
                 *(float *)((long)&(__this->fields).TitanColliderToggler + 4) +
                 *(float *)&(__this->fields).BaseTitanAnimations;
        fVar28 = fVar22 * UVar31.fields.x * 1.5;
        fVar29 = fVar22 * UVar31.fields.y * 1.5;
        fVar22 = fVar22 * UVar31.fields.z * 1.5;
      }
      fVar18 = fVar18 + fVar28;
      fVar27 = fVar27 + fVar29;
LAB_04002646:
      value_01.fields.z = fVar19 + fVar22;
      value_01.fields.y = fVar27;
      value_01.fields.x = fVar18;
      UnityEngine_Rigidbody__set_velocity(pUVar17,value_01,(MethodInfo *)0x0);
      cVar4 = *(char *)&(__this->fields)._stateTimeLeft;
    }
  }
joined_r0x04002541:
  if (cVar4 != '\0') {
    pSVar7 = (__this->fields).OnPlayerPropertiesChanged;
    if ((pSVar7 == (System_Action_Hashtable__o *)0x0) ||
       (pUVar8 = (UnityEngine_Transform_o *)(pSVar7->fields).interp_method,
       pUVar8 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400266c;
    UVar31 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    fVar19 = UVar31.fields.z;
    pSVar7 = (__this->fields).OnPlayerPropertiesChanged;
    if (pSVar7 == (System_Action_Hashtable__o *)0x0) goto LAB_0400266c;
    fVar18 = UVar31.fields.x;
    fVar27 = UVar31.fields.y;
    pUVar8 = (UnityEngine_Transform_o *)(pSVar7->fields).method_ptr;
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto LAB_0400266c;
    UVar31 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    (__this->fields)._needFreshCore = (bool_conflict)(fVar18 - UVar31.fields.x);
    (__this->fields)._attackVelocity.fields.x = fVar27 - UVar31.fields.y;
    (__this->fields)._attackVelocity.fields.y = fVar19 - UVar31.fields.z;
    *(undefined8 *)((long)&(__this->fields)._currentStateAnimation + 4) =
         *(undefined8 *)&(__this->fields)._needFreshCore;
    (__this->fields)._currentAttackStage = (int32_t)(__this->fields)._attackVelocity.fields.y;
    *(undefined1 *)&(__this->fields)._stateTimeLeft = 0;
  }
  pSVar9 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
            &(__this->fields)._startCoreAttackPosition.fields;
  if (pSVar9 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto LAB_0400266c;
  bVar14 = System_Collections_Generic_Dictionary<object__float>__ContainsKey
                     (pSVar9,*(Il2CppObject **)&(__this->fields)._climbCooldownLeft,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar14 != '\0') {
    pCVar10 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar10 == (Characters_AnimationHandler_o *)0x0) goto LAB_0400266c;
    bVar14 = Characters_AnimationHandler__IsPlaying
                       (pCVar10,*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                        (MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pCVar10 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar10 == (Characters_AnimationHandler_o *)0x0) goto LAB_0400266c;
      fVar19 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar10,(MethodInfo *)0x0);
      pSVar9 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                &(__this->fields)._startCoreAttackPosition.fields;
      if (pSVar9 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto LAB_0400266c;
      fVar18 = System_Collections_Generic_Dictionary<object__float>__get_Item
                         (pSVar9,*(Il2CppObject **)&(__this->fields)._climbCooldownLeft,MethodInfo_Single_get_Item
                         );
      if (fVar19 < fVar18) {
        pSVar7 = (__this->fields).OnPlayerPropertiesChanged;
        if ((pSVar7 == (System_Action_Hashtable__o *)0x0) ||
           (pUVar8 = (UnityEngine_Transform_o *)(pSVar7->fields).interp_method,
           pUVar8 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400266c;
        UVar31 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
        fVar18 = UVar31.fields.z;
        fVar19 = UVar31.fields.x;
        fVar27 = UVar31.fields.y;
        pSVar7 = (__this->fields).OnPlayerPropertiesChanged;
        if ((pSVar7 == (System_Action_Hashtable__o *)0x0) ||
           (pUVar8 = (UnityEngine_Transform_o *)(pSVar7->fields).method_ptr,
           pUVar8 == (UnityEngine_Transform_o *)0x0)) goto LAB_0400266c;
        fVar28 = extraout_XMM0_Dc_00;
        fVar29 = extraout_XMM0_Dd_00;
        UVar31 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
        fVar19 = fVar19 - UVar31.fields.x;
        fVar27 = fVar27 - UVar31.fields.y;
        fVar28 = fVar28 - extraout_XMM0_Dc_01;
        fVar29 = fVar29 - extraout_XMM0_Dd_01;
        fVar22 = fVar27;
        if (DAT_056fde1c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde1c = '\x01';
        }
        fVar18 = fVar18 - UVar31.fields.z;
        if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        fVar27 = fVar18 * fVar18 + fVar27 * fVar27 + fVar19 * fVar19;
        if (fVar27 < 0.0) {
          fVar27 = sqrtf(fVar27);
        }
        else {
          fVar27 = SQRT(fVar27);
        }
        if (DAT_056fde1c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde1c = '\x01';
        }
        fVar20 = (float)(__this->fields)._needFreshCore;
        uVar2 = (__this->fields)._attackVelocity.fields.x;
        uVar3 = (__this->fields)._attackVelocity.fields.y;
        if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        fVar20 = (float)uVar3 * (float)uVar3 + fVar20 * fVar20 + (float)uVar2 * (float)uVar2;
        if (fVar20 < 0.0) {
          fVar20 = sqrtf(fVar20);
        }
        else {
          fVar20 = SQRT(fVar20);
        }
        if (fVar20 <= fVar27) {
          uVar21 = *(undefined8 *)((long)&(__this->fields)._currentStateAnimation + 4);
          fVar20 = fVar18 - (float)(__this->fields)._currentAttackStage;
          auStack_98 = (undefined1  [8])
                       (CONCAT44(fVar22 - (float)((ulong)uVar21 >> 0x20),fVar19 - (float)uVar21) ^
                       0x8000000080000000);
          fStack_90 = -(fVar28 - 0.0);
          fStack_8c = -(fVar29 - 0.0);
          fVar27 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
          fVar28 = -fVar20 / fVar27;
          auVar11._4_4_ = fVar27;
          auVar11._0_4_ = fVar27;
          auVar11._8_4_ = extraout_XMM0_Dc_02;
          auVar11._12_4_ = extraout_XMM0_Dd_02;
          auVar26 = divps(_auStack_98,auVar11);
          (__this->fields)._needFreshCore = (bool_conflict)fVar19;
          (__this->fields)._attackVelocity.fields.x = fVar22;
          (__this->fields)._attackVelocity.fields.y = fVar18;
          *(float *)((long)&(__this->fields)._currentStateAnimation + 4) = fVar19;
          (__this->fields)._currentAttackSpeed = fVar22;
          (__this->fields)._currentAttackStage = (int32_t)fVar18;
          auStack_98._0_4_ = auVar26._0_4_;
          auStack_98._4_4_ = auVar26._4_4_;
          if ((char)(__this->fields).CustomDamage == '\0') {
            if (DAT_056fdd15 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fdd15 = '\x01';
            }
            if ((*(long *)pbVar1 == 0) ||
               (pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18),
               pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
            uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar18 = (float)uVar21;
            fVar27 = (float)((ulong)uVar21 >> 0x20);
            fVar19 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            UVar31 = UnityEngine_Rigidbody__get_velocity(pUVar17,(MethodInfo *)0x0);
            if ((*(long *)pbVar1 == 0) ||
               (pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18),
               pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
            auStack_98._0_4_ =
                 ((float)auStack_98._0_4_ - fVar18) * 0.0435 + fVar18 + UVar31.fields.x;
            auStack_98._4_4_ =
                 ((float)auStack_98._4_4_ - fVar27) * 0.0435 + fVar27 + UVar31.fields.y;
            fVar28 = (fVar28 - fVar19) * 0.0435 + fVar19 + UVar31.fields.z;
          }
          else if ((*(long *)pbVar1 == 0) ||
                  (pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18),
                  pUVar17 == (UnityEngine_Rigidbody_o *)0x0)) goto LAB_0400266c;
          value.fields.y = (float)auStack_98._4_4_;
          value.fields.x = (float)auStack_98._0_4_;
          value.fields.z = fVar28;
          UnityEngine_Rigidbody__set_velocity(pUVar17,value,(MethodInfo *)0x0);
        }
      }
    }
  }
  if (*(int *)&(__this->fields).OutlineComponent == 0x19) {
LAB_04001fbe:
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
    pUVar17 = *(UnityEngine_Rigidbody_o **)(*(long *)pbVar1 + 0x18);
    uVar21 = (*(__this->klass->vtable)._58_get_Gravity.methodPtr)
                       (__this,(__this->klass->vtable)._58_get_Gravity.method);
    if (pUVar17 != (UnityEngine_Rigidbody_o *)0x0) {
      force.fields.z = (float)extraout_XMM1_Qa_00;
      force.fields.x = (float)(int)uVar21;
      force.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
      UnityEngine_Rigidbody__AddForce(pUVar17,force,5,(MethodInfo *)0x0);
      goto LAB_04001fbe;
    }
  }
LAB_0400266c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$FixedUpdateAttack
// il2cpp: void Characters_BaseTitan__FixedUpdateAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40027a0

void Characters_BaseTitan__FixedUpdateAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$SetDefaultVelocity
// il2cpp: void Characters_BaseTitan__SetDefaultVelocity (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4002680

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
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
      lVar3._0_4_ = (__this->fields).Dead;
      lVar3._4_4_ = (__this->fields).CustomDamageEnabled;
    }
    if ((lVar3 != 0) &&
       (*(UnityEngine_Rigidbody_o **)(lVar3 + 0x18) != (UnityEngine_Rigidbody_o *)0x0)) {
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
      fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
      UVar6 = UnityEngine_Rigidbody__get_velocity
                        (*(UnityEngine_Rigidbody_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
      fVar4 = UVar6.fields.y;
      if (DAT_0570266b == '\0') {
        il2cpp_init_method_metadata(UVar6.fields.x,UVar6.fields.z,&TypeInfo_Vector3);
        DAT_0570266b = '\x01';
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$LateUpdate
// il2cpp: void Characters_BaseTitan__LateUpdate (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3ff2ec0

void Characters_BaseTitan__LateUpdate(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  undefined8 uVar3;
  bool_conflict bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Quaternion_o UVar8;
  UnityEngine_Quaternion_o b;
  
  Characters_BaseCharacter__LateUpdate((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if (((((char)bVar4 != '\0') && (uVar1 = *(uint *)&(__this->fields).OutlineComponent, uVar1 < 8))
      && ((0xceU >> (uVar1 & 0x1f) & 1) != 0)) &&
     (*(char *)((long)&(__this->fields).Detection + 4) != '\0')) {
    lVar2 = *(long *)&(__this->fields).Dead;
    if ((lVar2 != 0) &&
       (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar8 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
      fVar6 = UVar8.fields.z;
      fVar7 = UVar8.fields.w;
      uVar3 = (*(__this->klass->vtable)._94_GetTargetRotation.methodPtr)();
      fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      b.fields.w = fVar7;
      b.fields.z = fVar6;
      b.fields.x = (float)(int)uVar3;
      b.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
      UVar8 = UnityEngine_Quaternion__Lerp
                        (UVar8,b,fVar5 * (__this->fields).PreviousAttackSpeedMultiplier,
                         (MethodInfo *)0x0);
      UnityEngine_Transform__set_rotation(__this_00,UVar8,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BaseTitan$$IsPlayingClip
// il2cpp: bool Characters_BaseTitan__IsPlayingClip (Characters_BaseTitan_o* __this, System_String_o* clip, const MethodInfo* method);
// 0x40027b0

bool_conflict
Characters_BaseTitan__IsPlayingClip
          (Characters_BaseTitan_o *__this,System_String_o *clip,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_0570421e == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_0570421e = '\x01';
  }
  bVar1 = System_String__op_Inequality(clip,"",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      bVar1 = Characters_AnimationHandler__IsPlaying(__this_00,clip,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// Characters.BaseTitan$$CheckGround
// il2cpp: void Characters_BaseTitan__CheckGround (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4002820

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
  
  if (DAT_0570421f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CapsuleCollider);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_0570421f = '\x01';
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
      fVar13 = UVar16.fields.x;
      pSVar3 = (__this->fields).OnPlayerPropertiesChanged;
      if ((pSVar3 != (System_Action_Hashtable__o *)0x0) &&
         (__this_01 = *(UnityEngine_CapsuleCollider_o **)&(pSVar3->fields).method_is_virtual,
         __this_01 != (UnityEngine_CapsuleCollider_o *)0x0)) {
        fVar11 = UVar16.fields.y;
        bVar2 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
        if (((__this_01->klass->_2).naturalAligment < bVar2) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CapsuleCollider)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(fVar13,UVar16.fields.z);
        }
        uVar17 = extraout_XMM0_Dc;
        uVar18 = extraout_XMM0_Dd;
        fVar8 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
        *(undefined1 *)((long)&(__this->fields).Animation + 5) = 0;
        lVar7 = *(long *)&(__this->fields).Dead;
        if ((lVar7 != 0) &&
           (pUVar6 = *(UnityEngine_Transform_o **)(lVar7 + 0x10),
           pUVar6 != (UnityEngine_Transform_o *)0x0)) {
          fVar13 = fVar13 * fVar8;
          UVar16 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          fVar14 = UVar16.fields.z;
          fVar9 = UVar16.fields.x;
          fVar12 = UVar16.fields.y;
          fVar8 = extraout_XMM0_Dc_00;
          if (DAT_056fde1f == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fde1f = '\x01';
          }
          lVar7 = *(long *)(TypeInfo_Vector3 + 0xb8);
          uVar1 = *(undefined8 *)(lVar7 + 0x18);
          fVar15 = fVar13 + 1.0;
          fVar10 = *(float *)(lVar7 + 0x20);
          if (DAT_0570266b == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_0570266b = '\x01';
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
            il2cpp_init_class();
          }
          UVar16.fields.y = fVar12;
          UVar16.fields.x = fVar9;
          UVar16.fields.z = fVar14;
          bVar5 = UnityEngine_Physics__SphereCast
                            (UVar16,fVar13,(UnityEngine_Vector3_o)direction,
                             (UnityEngine_RaycastHit_o *)local_48,fVar10 + 1.0,layerMask,
                             (MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            *(undefined1 *)((long)&(__this->fields).Animation + 4) = 0;
            fVar13 = (float)(*(__this->klass->vtable)._61_get_GroundDistance.methodPtr)
                                      (__this,(__this->klass->vtable)._61_get_GroundDistance.method)
            ;
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
                                      (__this,(__this->klass->vtable)._61_get_GroundDistance.method)
            ;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$UpdateAttack
// il2cpp: void Characters_BaseTitan__UpdateAttack (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4002b30

void Characters_BaseTitan__UpdateAttack(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$UpdateEat
// il2cpp: void Characters_BaseTitan__UpdateEat (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4002b40

void Characters_BaseTitan__UpdateEat(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseTitan$$DeactivateAllHitboxes
// il2cpp: void Characters_BaseTitan__DeactivateAllHitboxes (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4002b50

void Characters_BaseTitan__DeactivateAllHitboxes(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  Characters_BaseHitbox_o *__this_03;
  
  if (DAT_05704220 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseHitbox_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Characters_BaseHitbox__GetE);
    DAT_05704220 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  __this_03 = (Characters_BaseHitbox_o *)0x0;
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
     (__this_00 = *(System_Collections_Generic_List_object__o **)&pSVar1[1].fields.method_is_virtual
     , __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,__this_00
               ,MethodInfo_List_1_T__Enumerator_Characters_BaseHitbox__GetE);
    while( true ) {
      __this_01.fields._8_8_ = pIVar4;
      __this_01.fields._list = pSVar3;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffd8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar4;
        __this_02.fields._list = pSVar3;
        __this_02.fields._current = (Il2CppObject *)__this_03;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffd8);
        return;
      }
      if (__this_03 == (Characters_BaseHitbox_o *)0x0) break;
      Characters_BaseHitbox__Deactivate(__this_03,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$SetSizeRPC
// il2cpp: void Characters_BaseTitan__SetSizeRPC (Characters_BaseTitan_o* __this, float size, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4002cb0

void Characters_BaseTitan__SetSizeRPC
               (Characters_BaseTitan_o *__this,float size,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Cameras_InGameCamera_o *__this_00;
  Characters_BaseCharacter_o *x;
  bool_conflict bVar3;
  UnityEngine_Transform_o *__this_01;
  float fVar4;
  UnityEngine_Vector3_o value;
  
  if (DAT_05704221 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05704221 = '\x01';
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar2 + 0x80)) {
      return;
    }
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      fVar4 = 50.0;
      if (size <= 50.0) {
        fVar4 = size;
      }
      fVar4 = (float)(~-(uint)(0.1 <= size) & 0x3dcccccd | (uint)fVar4 & -(uint)(0.1 <= size));
      value.fields.y = fVar4;
      value.fields.x = fVar4;
      value.fields.z = fVar4;
      UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
      *(float *)((long)&(__this->fields).TitanColliderToggler + 4) = fVar4;
      (*(__this->klass->vtable)._165_SetSizeParticles.methodPtr)
                (__this,(__this->klass->vtable)._165_SetSizeParticles.method);
      (*(__this->klass->vtable)._164_ScaleSounds.methodPtr)
                (fVar4,__this,(__this->klass->vtable)._164_ScaleSounds.method);
      __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
        bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_00);
        }
        x = (__this_00->fields)._follow;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,
                           (MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return;
        }
        Cameras_InGameCamera__SetFollow
                  (__this_00,(Characters_BaseCharacter_o *)__this,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$ScaleSounds
// il2cpp: void Characters_BaseTitan__ScaleSounds (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x4002e50

void Characters_BaseTitan__ScaleSounds(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_AudioSource_o *pUVar4;
  float fVar5;
  float fVar6;
  float local_48;
  
  if (DAT_05704222 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_05704222 = '\x01';
  }
  local_48 = size;
  if (__this != (Characters_BaseTitan_o *)0x0) {
    bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseShifter)) {
      local_48 = size * 3.5;
    }
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if (lVar2 != 0) {
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x30);
    if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pUVar4 = (UnityEngine_AudioSource_o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar3,*(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xd8),
                          MethodInfo_AudioSource_get_Item);
      if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
        fVar5 = local_48 * 0.3;
        fVar6 = 1.0;
        if (fVar5 <= 1.0) {
          fVar6 = fVar5;
        }
        fVar6 = (float)(~-(uint)(0.1 <= fVar5) & 0x3dcccccd | (uint)fVar6 & -(uint)(0.1 <= fVar5));
        UnityEngine_AudioSource__set_volume(pUVar4,fVar6,(MethodInfo *)0x0);
        lVar2 = *(long *)&(__this->fields).Dead;
        if ((lVar2 != 0) &&
           (pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x30),
           pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
          pUVar4 = (UnityEngine_AudioSource_o *)
                   System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar3,*(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 0xe0),
                              MethodInfo_AudioSource_get_Item);
          if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
            UnityEngine_AudioSource__set_volume(pUVar4,fVar6,(MethodInfo *)0x0);
            lVar2 = *(long *)&(__this->fields).Dead;
            if ((lVar2 != 0) &&
               (pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x30)
               , pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
              pUVar4 = (UnityEngine_AudioSource_o *)
                       System_Collections_Generic_Dictionary<object__object>__get_Item
                                 (pSVar3,(Il2CppObject *)**(undefined8 **)(TypeInfo_TitanSounds + 0xb8),
                                  MethodInfo_AudioSource_get_Item);
              if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                local_48 = local_48 * 0.125;
                fVar5 = 0.5;
                if (local_48 <= 0.5) {
                  fVar5 = local_48;
                }
                fVar5 = (float)(~-(uint)(0.1 <= local_48) & 0x3dcccccd |
                               (uint)fVar5 & -(uint)(0.1 <= local_48));
                UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
                lVar2 = *(long *)&(__this->fields).Dead;
                if ((lVar2 != 0) &&
                   (pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                              (lVar2 + 0x30),
                   pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                  pUVar4 = (UnityEngine_AudioSource_o *)
                           System_Collections_Generic_Dictionary<object__object>__get_Item
                                     (pSVar3,*(Il2CppObject **)(*(long *)(TypeInfo_TitanSounds + 0xb8) + 8),
                                      MethodInfo_AudioSource_get_Item);
                  if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                    UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
                    lVar2 = *(long *)&(__this->fields).Dead;
                    if ((lVar2 != 0) &&
                       (pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                  (lVar2 + 0x30),
                       pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                      pUVar4 = (UnityEngine_AudioSource_o *)
                               System_Collections_Generic_Dictionary<object__object>__get_Item
                                         (pSVar3,*(Il2CppObject **)
                                                  (*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x10),
                                          MethodInfo_AudioSource_get_Item);
                      if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                        UnityEngine_AudioSource__set_volume(pUVar4,fVar5,(MethodInfo *)0x0);
                        lVar2 = *(long *)&(__this->fields).Dead;
                        if ((lVar2 != 0) &&
                           (pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                                      (lVar2 + 0x30),
                           pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                           ) {
                          pUVar4 = (UnityEngine_AudioSource_o *)
                                   System_Collections_Generic_Dictionary<object__object>__get_Item
                                             (pSVar3,*(Il2CppObject **)
                                                      (*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x140),
                                              MethodInfo_AudioSource_get_Item);
                          if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                            UnityEngine_AudioSource__set_volume(pUVar4,fVar6,(MethodInfo *)0x0);
                            lVar2 = *(long *)&(__this->fields).Dead;
                            if ((lVar2 != 0) &&
                               (pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o
                                           **)(lVar2 + 0x30),
                               pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)
                                         0x0)) {
                              pUVar4 = (UnityEngine_AudioSource_o *)
                                       System_Collections_Generic_Dictionary<object__object>__get_Item
                                                 (pSVar3,*(Il2CppObject **)
                                                          (*(long *)(TypeInfo_TitanSounds + 0xb8) + 0x148),
                                                  MethodInfo_AudioSource_get_Item);
                              if (pUVar4 != (UnityEngine_AudioSource_o *)0x0) {
                                UnityEngine_AudioSource__set_volume(pUVar4,fVar6,(MethodInfo *)0x0);
                                lVar2 = *(long *)&(__this->fields).Dead;
                                if ((lVar2 != 0) &&
                                   (pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o
                                               **)(lVar2 + 0x30),
                                   pSVar3 != (System_Collections_Generic_Dictionary_object__object__o
                                              *)0x0)) {
                                  pUVar4 = (UnityEngine_AudioSource_o *)
                                           System_Collections_Generic_Dictionary<object__object>__get_Item
                                                     (pSVar3,*(Il2CppObject **)
                                                              (*(long *)(TypeInfo_TitanSounds + 0xb8) +
                                                              0x150),MethodInfo_AudioSource_get_Item);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$SetSizeParticles
// il2cpp: void Characters_BaseTitan__SetSizeParticles (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x40031b0

void Characters_BaseTitan__SetSizeParticles
               (Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_ParticleSystem_MainModule_o main;
  uint uVar4;
  
  if (DAT_05704223 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem___GetComponentsInChildren_Particl);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704223 = '\x01';
  }
  pSVar3 = UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_ParticleSystem___GetComponentsInChildren_Particl);
  if (pSVar3 != (System_Object_array *)0x0) {
    iVar1 = (int)pSVar3->max_length;
    if (iVar1 < 1) {
      return;
    }
    uVar4 = 0;
    if (iVar1 != 0) {
      do {
        if ((UnityEngine_ParticleSystem_o *)pSVar3->m_Items[(int)uVar4] ==
            (UnityEngine_ParticleSystem_o *)0x0) goto LAB_0400328b;
        main = UnityEngine_ParticleSystem__get_main
                         ((UnityEngine_ParticleSystem_o *)pSVar3->m_Items[(int)uVar4],
                          (MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Utility_Util__ScaleParticleStartSize(main,size,(MethodInfo *)0x0);
        Utility_Util__ScaleParticleStartSpeed(main,size,(MethodInfo *)0x0);
        uVar4 = uVar4 + 1;
        uVar2 = (uint)pSVar3->max_length;
        if ((int)uVar2 <= (int)uVar4) {
          return;
        }
      } while (uVar4 < uVar2);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0400328b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$SetSize
// il2cpp: void Characters_BaseTitan__SetSize (Characters_BaseTitan_o* __this, float size, const MethodInfo* method);
// 0x4003290

void Characters_BaseTitan__SetSize(Characters_BaseTitan_o *__this,float size,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  float local_1c;
  
  if (DAT_05704224 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetSizeRPC");
    DAT_05704224 = '\x01';
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if (lVar2 != 0) {
    __this_00 = *(Photon_Pun_PhotonView_o **)(lVar2 + 0x20);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    local_1c = size;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_1c);
    if (parameters != (System_Object_array *)0x0) {
      if (pIVar1 != (Il2CppObject *)0x0) {
        lVar2 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class);
        if (lVar2 == 0) {
          uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar3,0);
        }
      }
      if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      parameters->m_Items[0] = pIVar1;
      il2cpp_runtime_glue(parameters->m_Items,pIVar1);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SetSizeRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GetAnimationTime
// il2cpp: float Characters_BaseTitan__GetAnimationTime (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4003390

float Characters_BaseTitan__GetAnimationTime(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  
  __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    fVar1 = Characters_AnimationHandler__GetCurrentNormalizedTime(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GetHitboxTime
// il2cpp: float Characters_BaseTitan__GetHitboxTime (Characters_BaseTitan_o* __this, float normalizedLength, const MethodInfo* method);
// 0x40033b0

float Characters_BaseTitan__GetHitboxTime
                (Characters_BaseTitan_o *__this,float normalizedLength,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  
  __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    fVar1 = Characters_AnimationHandler__GetLength
                      (__this_00,*(System_String_o **)&(__this->fields)._climbCooldownLeft,
                       (MethodInfo *)0x0);
    return (fVar1 * normalizedLength) / (__this->fields)._startPosition.fields.y;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$DamagedGrunt
// il2cpp: void Characters_BaseTitan__DamagedGrunt (Characters_BaseTitan_o* __this, float chance, const MethodInfo* method);
// 0x4003400

void Characters_BaseTitan__DamagedGrunt
               (Characters_BaseTitan_o *__this,float chance,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_o *sound;
  
  if (DAT_05704225 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    il2cpp_init_method_metadata();
    DAT_05704225 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x11) != '\0') {
      bVar2 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_init_class();
        }
        sound = Characters_TitanSounds__GetRandomHurt((MethodInfo *)0x0);
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GrabGrunt
// il2cpp: void Characters_BaseTitan__GrabGrunt (Characters_BaseTitan_o* __this, float chance, const MethodInfo* method);
// 0x40034c0

void Characters_BaseTitan__GrabGrunt(Characters_BaseTitan_o *__this,float chance,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_o *sound;
  
  if (DAT_05704226 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    il2cpp_init_method_metadata();
    DAT_05704226 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x11) != '\0') {
      bVar2 = Utility_RandomGen__Roll(chance,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_TitanSounds + 0xe4) == 0) {
          il2cpp_init_class();
        }
        sound = Characters_TitanSounds__GetRandomGrabGrunt((MethodInfo *)0x0);
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$Start
// il2cpp: void Characters_BaseTitan__Start (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x3ff3310

void Characters_BaseTitan__Start(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar3;
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_01;
  Characters_BaseTitan_c *pCVar4;
  UnityEngine_Vector3_o UVar5;
  
  if (DAT_05704227 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    DAT_05704227 = '\x01';
  }
  Characters_BaseCharacter__Start((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    bVar3 = Characters_BaseCharacter__IsMainCharacter
                      ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if (((char)bVar3 == '\0') || (__this == (Characters_BaseTitan_o *)0x0)) {
LAB_03ff338c:
      if (DAT_05704228 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
        DAT_05704228 = '\x01';
      }
      __this_01 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)
                  il2cpp_runtime_glue(TypeInfo_HandleSpawnCollisionCoroutine_d__166);
      Characters_BaseTitan_<HandleSpawnCollisionCoroutine>d__166___ctor
                (__this_01,0,(MethodInfo *)0x0);
      if (__this_01 == (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0)
      goto LAB_03ff343e;
      (__this_01->fields).__4__this = __this;
      il2cpp_runtime_glue(&(__this_01->fields).__4__this,__this);
      (__this_01->fields).maxSpeed = 20.0;
      (__this_01->fields).time = 2.0;
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01
                 ,(MethodInfo *)0x0);
      pCVar4 = __this->klass;
    }
    else {
      pCVar4 = __this->klass;
      bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
      if (((pCVar4->_2).naturalAligment < bVar1) ||
         ((pCVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseShifter)) goto LAB_03ff338c;
    }
    (*(pCVar4->vtable)._138_Idle.methodPtr)(__this);
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    (__this->fields)._maxTurnTime = UVar5.fields.x;
    (__this->fields)._currentTurnTime = UVar5.fields.y;
    (__this->fields)._currentGroundDistance = UVar5.fields.z;
    return;
  }
LAB_03ff343e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$HandleSpawnCollisionCoroutine
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseTitan__HandleSpawnCollisionCoroutine (Characters_BaseTitan_o* __this, float time, float maxSpeed, const MethodInfo* method);
// 0x4003580

System_Collections_IEnumerator_o *
Characters_BaseTitan__HandleSpawnCollisionCoroutine
          (Characters_BaseTitan_o *__this,float time,float maxSpeed,MethodInfo *method)

{
  Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *__this_00;
  
  if (DAT_05704228 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HandleSpawnCollisionCoroutine_d__166);
    DAT_05704228 = '\x01';
  }
  __this_00 = (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)
              il2cpp_runtime_glue(TypeInfo_HandleSpawnCollisionCoroutine_d__166);
  Characters_BaseTitan_<HandleSpawnCollisionCoroutine>d__166___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Characters_BaseTitan__HandleSpawnCollisionCoroutine_d__166_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).time = time;
    (__this_00->fields).maxSpeed = maxSpeed;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$ToggleSitPushbox
// il2cpp: void Characters_BaseTitan__ToggleSitPushbox (Characters_BaseTitan_o* __this, bool sit, const MethodInfo* method);
// 0x4003610

void Characters_BaseTitan__ToggleSitPushbox
               (Characters_BaseTitan_o *__this,bool_conflict sit,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  bool_conflict bVar2;
  System_Delegate_array *pSVar3;
  
  if (DAT_05704229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704229 = '\x01';
  }
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if (pSVar1 != (System_Action_Hashtable__o *)0x0) {
    pSVar3 = (pSVar1->fields).delegates;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      return;
    }
    pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
    if ((char)sit == '\0') {
      if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
         (pSVar3 = (pSVar1->fields).delegates, pSVar3 != (System_Delegate_array *)0x0)) {
        bVar2 = UnityEngine_Collider__get_enabled
                          ((UnityEngine_Collider_o *)pSVar3,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
        if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
           (pSVar3 = (pSVar1->fields).delegates, pSVar3 != (System_Delegate_array *)0x0)) {
          bVar2 = 0;
          goto LAB_040036e8;
        }
      }
    }
    else if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
            (pSVar3 = (pSVar1->fields).delegates, pSVar3 != (System_Delegate_array *)0x0)) {
      bVar2 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)pSVar3,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return;
      }
      pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
      if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
         (pSVar3 = (pSVar1->fields).delegates, pSVar3 != (System_Delegate_array *)0x0)) {
        bVar2 = 1;
LAB_040036e8:
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pSVar3,bVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$UpdateAnimationColliders
// il2cpp: void Characters_BaseTitan__UpdateAnimationColliders (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4003700

void Characters_BaseTitan__UpdateAnimationColliders
               (Characters_BaseTitan_o *__this,MethodInfo *method)

{
  Characters_BaseTitan_c *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  byte bVar2;
  
  bVar2 = (*(__this->klass->vtable)._172_IsPlayingSitAnimation.methodPtr)
                    (__this,(__this->klass->vtable)._172_IsPlayingSitAnimation.method);
  pCVar1 = __this->klass;
  vtable_dispatch = (pCVar1->vtable)._170_ToggleSitPushbox.methodPtr;
  (*vtable_dispatch)
            (__this,(ulong)bVar2,(pCVar1->vtable)._170_ToggleSitPushbox.method,pCVar1,
             vtable_dispatch);
  return;
}


// Characters.BaseTitan$$IsPlayingSitAnimation
// il2cpp: bool Characters_BaseTitan__IsPlayingSitAnimation (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4003730

bool_conflict
Characters_BaseTitan__IsPlayingSitAnimation(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    pSVar4 = (System_String_o *)
             (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
    if (DAT_0570421e == '\0') {
      il2cpp_init_method_metadata(&"");
      DAT_0570421e = '\x01';
    }
    bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto LAB_04003990;
      bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar4 >> 8),1);
      }
    }
    plVar1 = *(long **)&(__this->fields).TurnPause;
    if (plVar1 != (long *)0x0) {
      pSVar4 = (System_String_o *)
               (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
      if (DAT_0570421e == '\0') {
        il2cpp_init_method_metadata(&"");
        DAT_0570421e = '\x01';
      }
      bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
        if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto LAB_04003990;
        bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          return (bool_conflict)CONCAT71((int7)((ulong)pSVar4 >> 8),1);
        }
      }
      plVar1 = *(long **)&(__this->fields).TurnPause;
      if (plVar1 != (long *)0x0) {
        pSVar4 = (System_String_o *)
                 (**(code **)(*plVar1 + 0x218))(plVar1,*(undefined8 *)(*plVar1 + 0x220));
        if (DAT_0570421e == '\0') {
          il2cpp_init_method_metadata(&"");
          DAT_0570421e = '\x01';
        }
        bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
          if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto LAB_04003990;
          bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            return (bool_conflict)CONCAT71((int7)((ulong)pSVar4 >> 8),1);
          }
        }
        plVar1 = *(long **)&(__this->fields).TurnPause;
        if (plVar1 != (long *)0x0) {
          pSVar4 = (System_String_o *)
                   (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
          if (DAT_0570421e == '\0') {
            il2cpp_init_method_metadata(&"");
            DAT_0570421e = '\x01';
          }
          bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
            if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto LAB_04003990;
            bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return (bool_conflict)CONCAT71((int7)((ulong)pSVar4 >> 8),1);
            }
          }
          plVar1 = *(long **)&(__this->fields).TurnPause;
          if (plVar1 != (long *)0x0) {
            pSVar4 = (System_String_o *)
                     (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(*plVar1 + 0x210));
            if (DAT_0570421e == '\0') {
              il2cpp_init_method_metadata(&"");
              DAT_0570421e = '\x01';
            }
            bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              return 0;
            }
            pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
            if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
              bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
              return bVar3;
            }
          }
        }
      }
    }
  }
LAB_04003990:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GetFootstepAudio
// il2cpp: System_String_o* Characters_BaseTitan__GetFootstepAudio (Characters_BaseTitan_o* __this, int32_t phase, const MethodInfo* method);
// 0x40039a0

System_String_o *
Characters_BaseTitan__GetFootstepAudio
          (Characters_BaseTitan_o *__this,int32_t phase,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (DAT_0570422a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TitanSounds);
    DAT_0570422a = '\x01';
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_TitanSounds + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = Characters_TitanSounds__GetRandomFootstep((MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_init_class();
  pSVar2 = Characters_TitanSounds__GetRandomFootstep((MethodInfo *)0x0);
  return pSVar2;
}


// Characters.BaseTitan$$GetFootstepPhase
// il2cpp: int32_t Characters_BaseTitan__GetFootstepPhase (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x4003a00

int32_t Characters_BaseTitan__GetFootstepPhase(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  long *plVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  float fVar6;
  
  if (DAT_0570422b == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_0570422b = '\x01';
  }
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 == (long *)0x0) goto LAB_04003ba2;
  pSVar4 = (System_String_o *)(**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
  bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    plVar1 = *(long **)&(__this->fields).TurnPause;
    if (plVar1 == (long *)0x0) goto LAB_04003ba2;
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    pSVar4 = (System_String_o *)
             (**(code **)(*plVar1 + 0x188))(plVar1,*(undefined8 *)(*plVar1 + 400));
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto LAB_04003ba2;
    bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pMVar5 = *(MethodInfo **)&(__this->fields)._cameraFPS;
      if (pMVar5 != (MethodInfo *)0x0) {
        fVar6 = Characters_AnimationHandler__GetCurrentNormalizedTime
                          ((Characters_AnimationHandler_o *)pMVar5,(MethodInfo *)0x0);
        fVar6 = fmodf(fVar6,1.0,pMVar5);
        if (fVar6 < 0.0) {
          return 1;
        }
        return (int32_t)(0.5 <= fVar6);
      }
      goto LAB_04003ba2;
    }
  }
  plVar1 = *(long **)&(__this->fields).TurnPause;
  if (plVar1 != (long *)0x0) {
    pSVar4 = (System_String_o *)
             (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
    bVar3 = System_String__op_Inequality(pSVar4,"",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
LAB_04003b93:
      return (int32_t)(__this->fields).CurrentSpeed;
    }
    plVar1 = *(long **)&(__this->fields).TurnPause;
    if (plVar1 != (long *)0x0) {
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      pSVar4 = (System_String_o *)
               (**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,pSVar4,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') goto LAB_04003b93;
        pMVar5 = *(MethodInfo **)&(__this->fields)._cameraFPS;
        if (pMVar5 != (MethodInfo *)0x0) {
          fVar6 = Characters_AnimationHandler__GetCurrentNormalizedTime
                            ((Characters_AnimationHandler_o *)pMVar5,(MethodInfo *)0x0);
          fVar6 = fmodf(fVar6,1.0,pMVar5);
          if (fVar6 < 0.1) {
            return 0;
          }
          return (uint)(fVar6 < 0.6);
        }
      }
    }
  }
LAB_04003ba2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$SpawnShatter
// il2cpp: void Characters_BaseTitan__SpawnShatter (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x4003bb0

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
  if (DAT_0570422c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_0570422c = '\x01';
  }
  fStack_38 = 0.0;
  uStack_34 = 0;
  pIStack_48 = (InvokerMethod)0x0;
  uStack_40 = 0;
  fStack_3c = 0.0;
  pIStack_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  lVar4 = *(long *)(TypeInfo_Vector3 + 0xb8);
  fVar5 = (float)*(undefined8 *)(lVar4 + 0x18);
  fVar7 = (float)((ulong)*(undefined8 *)(lVar4 + 0x18) >> 0x20);
  fVar8 = 0.0;
  fVar9 = fVar9 + *(float *)(lVar4 + 0x20);
  if (DAT_0570266b == '\0') {
    fVar8 = 0.0;
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570266b = '\x01';
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
                        ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff50,
                         (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar10.fields.y = fVar7;
  UVar10.fields.x = fVar5;
  UVar10.fields.z = fVar9;
  bVar3 = UnityEngine_Physics__Raycast
                    (UVar10,(UnityEngine_Vector3_o)direction,(UnityEngine_RaycastHit_o *)&pIStack_58
                     ,2.0,layerMask,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
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
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar9 = fVar9 + (float)uVar1 * 0.1;
    fVar5 = fVar5 + (float)((ulong)uVar1 >> 0x20) * 0.1;
    fVar7 = fVar7 + *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 0.1;
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    fVar8 = *(float *)((long)&(__this->fields).TitanColliderToggler + 4);
    fVar6 = (float)(*(__this->klass->vtable)._117_get_SizeMultiplier.methodPtr)
                             (__this,(__this->klass->vtable)._117_get_SizeMultiplier.method);
    position_00.fields.y = fVar5;
    position_00.fields.x = fVar9;
    position_00.fields.z = fVar7;
    Effects_EffectSpawner__Spawn
              (name,position_00,(UnityEngine_Quaternion_o)rotation,fVar8 * fVar6,1,
               (System_Object_array *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BaseTitan$$CheckNapeAngle
// il2cpp: bool Characters_BaseTitan__CheckNapeAngle (Characters_BaseTitan_o* __this, UnityEngine_Vector3_o hitPosition, float maxAngle, const MethodInfo* method);
// 0x4003e60

bool_conflict
Characters_BaseTitan__CheckNapeAngle
          (Characters_BaseTitan_o *__this,UnityEngine_Vector3_o hitPosition,float maxAngle,
          MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  UnityEngine_Component_o *__this_00;
  float fVar2;
  undefined1 auVar3 [16];
  double dVar4;
  UnityEngine_Transform_o *__this_01;
  undefined8 extraout_RAX;
  undefined8 uVar5;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  MethodInfo *method_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dd_00;
  float fVar11;
  float fVar13;
  undefined1 auVar12 [16];
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  float fStack_7c;
  undefined8 uStack_78;
  
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if (((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
      (__this_00 = (UnityEngine_Component_o *)(pSVar1->fields).extra_arg,
      __this_00 != (UnityEngine_Component_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar15 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    uStack_78._0_4_ = hitPosition.fields.x;
    uStack_78._4_4_ = hitPosition.fields.y;
    auVar12._0_4_ = (float)uStack_78 - UVar15.fields.x;
    auVar12._4_4_ = uStack_78._4_4_ - UVar15.fields.y;
    auVar12._8_4_ = in_XMM0_Dc - extraout_XMM0_Dc;
    auVar12._12_4_ = in_XMM0_Dd - extraout_XMM0_Dd;
    fStack_7c = hitPosition.fields.z - UVar15.fields.z;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    uVar9 = 0;
    uVar10 = 0;
    fVar6 = fStack_7c * fStack_7c + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
    if (fVar6 < 0.0) {
      fVar6 = sqrtf(fVar6);
      uVar9 = extraout_XMM0_Dc_00;
      uVar10 = extraout_XMM0_Dd_00;
    }
    else {
      fVar6 = SQRT(fVar6);
    }
    if (fVar6 <= 1e-05) {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uStack_78 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fStack_7c = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fStack_7c = fStack_7c / fVar6;
      auVar3._4_4_ = fVar6;
      auVar3._0_4_ = fVar6;
      auVar3._8_4_ = uVar9;
      auVar3._12_4_ = uVar10;
      auVar12 = divps(auVar12,auVar3);
      uStack_78 = auVar12._0_8_;
    }
    UVar15 = UnityEngine_Transform__get_forward(__this_01,(MethodInfo *)0x0);
    fVar11 = UVar15.fields.z;
    fVar6 = UVar15.fields.x;
    fVar8 = UVar15.fields.y;
    uVar5 = extraout_RAX;
    if (DAT_0570266a == '\0') {
      uVar5 = il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_0570266a = '\x01';
    }
    fVar14 = fVar11 * fVar11 + fVar8 * fVar8 + fVar6 * fVar6;
    fVar2 = (float)uStack_78;
    fVar13 = (float)((ulong)uStack_78 >> 0x20);
    fVar7 = fStack_7c * fStack_7c + fVar13 * fVar13 + fVar2 * fVar2;
    if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
      uVar5 = il2cpp_init_class();
    }
    if (fVar7 * fVar14 < 0.0) {
      fVar7 = sqrtf(fVar7 * fVar14);
      uVar5 = extraout_RAX_00;
      method_00 = TypeInfo_Math;
    }
    else {
      fVar7 = SQRT(fVar7 * fVar14);
      method_00 = TypeInfo_Math;
    }
    fVar14 = 0.0;
    TypeInfo_Math = method_00;
    if (1e-15 <= fVar7) {
      fVar7 = ((-(fVar13 * fVar8) - fVar2 * fVar6) - fStack_7c * fVar11) / fVar7;
      fVar6 = 1.0;
      if (fVar7 <= 1.0) {
        fVar6 = fVar7;
      }
      if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      dVar4 = acos((double)(float)(~-(uint)(-1.0 <= fVar7) & 0xbf800000 |
                                  (uint)fVar6 & -(uint)(-1.0 <= fVar7)),method_00);
      fVar14 = (float)dVar4 * 57.29578;
      uVar5 = extraout_RAX_01;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),fVar14 < maxAngle);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GetCenterPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseTitan__GetCenterPosition (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40041a0

UnityEngine_Vector3_o
Characters_BaseTitan__GetCenterPosition(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar2;
  
  pSVar1 = (__this->fields).OnPlayerPropertiesChanged;
  if ((pSVar1 != (System_Action_Hashtable__o *)0x0) &&
     (__this_00 = (UnityEngine_Transform_o *)(pSVar1->fields).interp_invoke_impl,
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar2 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseTitan$$GetColliderToggleRadius
// il2cpp: float Characters_BaseTitan__GetColliderToggleRadius (Characters_BaseTitan_o* __this, const MethodInfo* method);
// 0x40041d0

float Characters_BaseTitan__GetColliderToggleRadius
                (Characters_BaseTitan_o *__this,MethodInfo *method)

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
// 0x3ff6430

void Characters_BaseTitan___ctor(Characters_BaseTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Int32_array *layers;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_0570422d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    DAT_0570422d = '\x01';
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
  layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
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
                       il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
              System_Collections_Generic_Dictionary<object__float>___ctor(pSVar4,MethodInfo_Dictionary_2_System_String_System_Single);
              (__this->fields).TargetEnemy = (Characters_ITargetable_o *)pSVar4;
              il2cpp_runtime_glue(&(__this->fields).TargetEnemy,pSVar4);
              pSVar4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
              System_Collections_Generic_Dictionary<object__float>___ctor(pSVar4,MethodInfo_Dictionary_2_System_String_System_Single);
              *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
               &(__this->fields)._startCoreAttackPosition.fields = pSVar4;
              il2cpp_runtime_glue(&(__this->fields)._startCoreAttackPosition,pSVar4);
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                          il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
              System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
              *(System_Collections_Generic_Dictionary_object__object__o **)
               &(__this->fields)._startCoreAttackPosition.fields.z = __this_00;
              il2cpp_runtime_glue(&(__this->fields)._startCoreAttackPosition.fields.z);
              *(undefined1 *)&(__this->fields)._previousCoreLocalPosition.fields.y = 1;
              Characters_BaseCharacter___ctor
                        ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


