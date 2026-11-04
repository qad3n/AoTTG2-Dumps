// Type: Projectiles.BaseProjectile
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/BaseProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/BaseProjectile.cs
// --------------------------------

// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$.ctor
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21___ctor (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21___ctor(Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$System.IDisposable.Dispose
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_IDisposable_Dispose (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x180547020

void
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_IDisposable_Dispose(Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, MethodInfo* method)

{
  return;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$MoveNext
// il2cpp: bool Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__MoveNext (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x181f2a520

bool Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__MoveNext
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,MethodInfo *method)

{
  float amplificationFactor;
  int iVar1;
  Projectiles_BaseProjectile_o *__this_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  UnityEngine_GameObject_o *targetGo;
  
  if (Il2CppMethodInitialized_1843454e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_1843454e0 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    amplificationFactor = (__this->fields).time;
    (__this->fields).__1__state = -1;
    __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor
              (__this_01,amplificationFactor,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Projectiles_BaseProjectile_o *)0x0) {
      ThrowNullReferenceException();
    }
    targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__Destroy_1d35aa0(targetGo,(MethodInfo *)0x0);
  }
  return false;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_IEnumerator_Reset (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x181f2a610

void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_IEnumerator_Reset
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this,MethodInfo *method)

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
                  MethodInfo_Projectiles_BaseProjectile_WaitAndFinishDestroyCoroutine_d__21_System_Collections_IEnumerator_Re
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_IEnumerator_get_Current (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21__System_Collections_IEnumerator_get_Current(Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Projectiles.BaseProjectile$$get_TrailFadeMultiplier
// il2cpp: float Projectiles_BaseProjectile__get_TrailFadeMultiplier (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x181f0e9d0

float Projectiles_BaseProjectile__get_TrailFadeMultiplier
                (Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  return 0.6;
}


// Projectiles.BaseProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_BaseProjectile__get_DestroyDelay (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x181f0e9c0

float
Projectiles_BaseProjectile__get_DestroyDelay(Projectiles_BaseProjectile_o* __this, MethodInfo* method)

{
  return 1.5;
}


// Projectiles.BaseProjectile$$Setup
// il2cpp: void Projectiles_BaseProjectile__Setup (Projectiles_BaseProjectile_o* __this, float liveTime, UnityEngine_Vector3_o velocity, UnityEngine_Vector3_o gravity, int32_t charViewId, System_String_o* team, System_Object_array* settings, const MethodInfo* method);
// 0x181f0e4e0

void Projectiles_BaseProjectile__Setup
               (Projectiles_BaseProjectile_o *__this,float liveTime,UnityEngine_Vector3_o *velocity,
               UnityEngine_Vector3_o *gravity,int32_t charViewId,System_String_o *team,
               System_Object_array *settings,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar2;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_ConstantForce_o *pUVar3;
  Photon_Pun_PhotonView_o *__this_02;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int32_t local_res10 [2];
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843454d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetupRPC");
    Il2CppMethodInitialized_1843454d8 = '\x01';
  }
  __this_00 = (__this->fields)._rigidbody;
  (__this->fields)._timeLeft = liveTime;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_181f0e761;
  local_28[0].x = (velocity->fields).x;
  local_28[0].y = (velocity->fields).y;
  local_28[0].z = (velocity->fields).z;
  UnityEngine_Rigidbody__set_linearVelocity(__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
  (__this->fields)._team = team;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._team,team);
  fVar7 = (velocity->fields).y;
  fVar6 = (velocity->fields).z;
  uVar1._0_4_ = (gravity->fields).x;
  uVar1._4_4_ = (gravity->fields).y;
  (__this->fields)._velocity.fields.x = (velocity->fields).x;
  (__this->fields)._velocity.fields.y = fVar7;
  (__this->fields)._velocity.fields.z = fVar6;
  local_28[0]._0_8_ = uVar1;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar8 = (float)uVar1 - (pUVar2->zeroVector).fields.x;
  fVar7 = local_28[0].y - (pUVar2->zeroVector).fields.y;
  fVar6 = (gravity->fields).z - (pUVar2->zeroVector).fields.z;
  if (9.9999994e-11 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6) {
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
label_181f0e761:
      ThrowNullReferenceException();
    }
    pUVar3 = UnityEngine_GameObject__AddComponent_object_
                       (__this_01,
                        (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce);
    (__this->fields)._force = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._force,pUVar3);
    pUVar3 = (__this->fields)._force;
    if (pUVar3 == (UnityEngine_ConstantForce_o *)0x0) goto label_181f0e761;
    local_28[0].x = (gravity->fields).x;
    local_28[0].y = (gravity->fields).y;
    local_28[0].z = (gravity->fields).z;
    UnityEngine_ConstantForce__set_force(pUVar3,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
  }
  __this_02 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  local_res10[0] = charViewId;
  pIVar4 = il2cpp_value_box(g_data_184354e08,local_res10);
  if (parameters != (System_Object_array *)0x0) {
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
    }
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar4;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar4);
      if (settings != (System_Object_array *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(&settings->obj,(((parameters->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
      }
      if (1 < (uint)parameters->max_length) {
        parameters->m_Items[1] = &settings->obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,settings);
        if (__this_02 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_02,"SetupRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
        goto label_181f0e78d;
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181f0e78d:
  ThrowNullReferenceException();
}


// Projectiles.BaseProjectile$$SetupRPC
// il2cpp: void Projectiles_BaseProjectile__SetupRPC (Projectiles_BaseProjectile_o* __this, int32_t charViewId, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181f0de30
// eh: try 0x181f0e170..0x181f0e4d0 -> pad 0x1833245a0 (+7 call sites) catch Il2CppExceptionWrapper
// asm: 80 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f0e233: mov rdx, qword ptr [rip + 0x216ac96]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x181f0e23a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181f0e23f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f0e244: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f0e249: test rcx, rcx
// asm:   0x181f0e24c: jne 0x181f0e4b3
// asm:   0x181f0e252: xor r12d, r12d
// asm:   0x181f0e255: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x181f0e25d: jmp 0x181f0e170
// asm:   0x181f0e275: mov rdx, qword ptr [rip + 0x216ac54]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x181f0e27c: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f0e281: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f0e286: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181f0e28b: test rcx, rcx
// asm:   0x181f0e28e: jne 0x181f0e4bf
// asm:   0x181f0e294: xor r12d, r12d
// asm:   0x181f0e297: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x181f0e443: mov rdx, qword ptr [rip + 0x216aa86]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x181f0e44a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181f0e44f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f0e454: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f0e459: test rcx, rcx
// asm:   0x181f0e45c: jne 0x181f0e4c5
// asm:   0x181f0e45e: xor r12d, r12d
// asm:   0x181f0e461: mov rsi, qword ptr [rsp + 0xf0]
// asm:   0x181f0e469: jmp 0x181f0e383
// asm:   0x181f0e481: mov rdx, qword ptr [rip + 0x216aa48]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x181f0e488: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f0e48d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f0e492: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181f0e497: test rcx, rcx
// asm:   0x181f0e49a: jne 0x181f0e4d0
// asm:   0x181f0e4b3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181f0e4bf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181f0e4c5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181f0e4d0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833245a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245a5: push rbp
// asm:   0x1833245a6: sub rsp, 0x20
// asm:   0x1833245aa: mov rbp, rdx
// asm:   0x1833245ad: mov rax, qword ptr [rbp + 0x98]
// asm:   0x1833245b4: mov rcx, qword ptr [rax]
// asm:   0x1833245b7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245bb: movabs rax, 0
// asm:   0x1833245c5: add rsp, 0x20
// asm:   0x1833245c9: pop rbp
// asm:   0x1833245ca: ret 
// asm:   0x183324f50: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324f55: push rbp
// asm:   0x183324f56: sub rsp, 0x20
// asm:   0x183324f5a: mov rbp, rdx
// asm:   0x183324f5d: mov rax, qword ptr [rbp + 0xa0]
// asm:   0x183324f64: mov rcx, qword ptr [rax]
// asm:   0x183324f67: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183324f6b: movabs rax, 0
// asm:   0x183324f75: add rsp, 0x20
// asm:   0x183324f79: pop rbp
// asm:   0x183324f7a: ret 
// asm:   0x1833316f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833316f5: push rbp
// asm:   0x1833316f6: sub rsp, 0x20
// asm:   0x1833316fa: mov rbp, rdx
// asm:   0x1833316fd: mov rax, qword ptr [rbp + 0xa8]
// asm:   0x183331704: mov rcx, qword ptr [rax]
// asm:   0x183331707: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333170b: movabs rax, 0
// asm:   0x183331715: add rsp, 0x20
// asm:   0x183331719: pop rbp
// asm:   0x18333171a: ret 
// asm:   0x18333c7d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c7d5: push rbp
// asm:   0x18333c7d6: sub rsp, 0x20
// asm:   0x18333c7da: mov rbp, rdx
// asm:   0x18333c7dd: mov rax, qword ptr [rbp + 0x90]
// asm:   0x18333c7e4: mov rcx, qword ptr [rax]
// asm:   0x18333c7e7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333c7eb: movabs rax, 0
// asm:   0x18333c7f5: add rsp, 0x20
// asm:   0x18333c7f9: pop rbp
// asm:   0x18333c7fa: ret 

void Projectiles_BaseProjectile__SetupRPC
               (Projectiles_BaseProjectile_o *__this,int32_t charViewId,System_Object_array *settings,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_String_o *pSVar4;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_List_Collider__o *pSVar5;
  UnityEngine_Collider_array *pUVar6;
  Utility_BaseComponentCache_o *pUVar7;
  System_String_c *pSVar8;
  System_Collections_Generic_List_T__o *__this_01;
  UnityEngine_Collider_o *pUVar9;
  Il2CppObject *pIVar10;
  bool bVar11;
  Photon_Pun_PhotonView_o *pPVar12;
  Characters_BaseCharacter_o *pCVar13;
  System_Object_array *pSVar14;
  UnityEngine_GameObject_o *__this_02;
  uint uVar15;
  MethodInfo *pMVar16;
  undefined1 local_b8 [16];
  UnityEngine_Collider_o *local_a8;
  undefined1 local_a0 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_98;
  UnityEngine_Collider_o *local_90;
  System_Collections_Generic_List_Enumerator_object__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70 [2];
  
  if (Il2CppMethodInitialized_1843454d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_1843454d9 = '\x01';
  }
  local_a0 = (undefined1  [8])0x0;
  pSStack_98 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_90 = (UnityEngine_Collider_o *)0x0;
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  pPVar12 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar12 == (Photon_Pun_PhotonView_o *)0x0) goto label_181f0e4d6;
  if ((info->fields).Sender == (pPVar12->fields)._Owner_k__BackingField) {
    if (charViewId != -1) {
      pPVar12 = Photon_Pun_PhotonView__Find(charViewId,(MethodInfo *)0x0);
      if (pPVar12 == (Photon_Pun_PhotonView_o *)0x0) goto label_181f0e4d6;
      pCVar13 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pPVar12,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
      (__this->fields)._owner = pCVar13;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,pCVar13);
      pCVar13 = (__this->fields)._owner;
      if (pCVar13 == (Characters_BaseCharacter_o *)0x0) goto label_181f0e4d6;
      pSVar4 = (pCVar13->fields).Team;
      (__this->fields)._team = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._team,pSVar4);
    }
    pMVar16 = (__this->klass->vtable)._14_SetupSettings.method;
    (*(__this->klass->vtable)._14_SetupSettings.methodPtr)(__this,(System_Type_o *)settings,pMVar16);
    (*(__this->klass->vtable)._15_RegisterObjects.methodPtr)
              (__this,(System_Type_o *)(__this->klass->vtable)._15_RegisterObjects.method,pMVar16);
    if (Il2CppMethodInitialized_1843454da == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_Add);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
      Il2CppMethodInitialized_1843454da = '\x01';
    }
    pSVar14 = UnityEngine_Component__GetComponentsInChildren_object__665370
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_665370 *)
                         MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider);
    if (pSVar14 == (System_Object_array *)0x0) {
label_181f0e4d6:
      ThrowNullReferenceException();
    }
    uVar15 = 0;
    while ((int)uVar15 < (int)pSVar14->max_length) {
      if ((uint)pSVar14->max_length <= uVar15) {
label_181f0e4ad:
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_Component_o *)pSVar14->m_Items[(int)uVar15];
      if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_181f0e4d6;
      __this_02 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_181f0e4d6;
      UnityEngine_GameObject__set_layer
                (__this_02,TypeInfo_Utility_PhysicsLayer->static_fields->Projectile,(MethodInfo *)0x0);
      pMVar16 = MethodInfo_System_Collections_Generic_List_Collider_Add;
      pSVar5 = (__this->fields)._colliders;
      if (pSVar5 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_181f0e4d6;
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar6 = (pSVar5->fields)._items;
      if (pUVar6 == (UnityEngine_Collider_array *)0x0) goto label_181f0e4d6;
      uVar3 = (pSVar5->fields)._size;
      if (uVar3 < (uint)pUVar6->max_length) {
        (pSVar5->fields)._size = uVar3 + 1;
        if ((uint)pUVar6->max_length <= uVar3) goto label_181f0e4ad;
        pUVar6->m_Items[(int)uVar3] = (UnityEngine_Collider_o *)__this_00;
        Il2CppCodeGenWriteBarrier(pUVar6->m_Items + (int)uVar3,__this_00);
        uVar15 = uVar15 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                   (MethodInfo_93DD50 *)pMVar16->klass->rgctx_data[0xe].method);
        uVar15 = uVar15 + 1;
      }
    }
    pCVar13 = (__this->fields)._owner;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar11) {
      pCVar13 = (__this->fields)._owner;
      if (((pCVar13 == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar7 = (pCVar13->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pSVar5 = (pUVar7->fields).Colliders, pSVar5 == (System_Collections_Generic_List_Collider__o *)0x0))
      goto label_181f0e4d6;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
                 (System_Collections_Generic_List_T__o *)pSVar5,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
      local_a0 = (undefined1  [8])local_b8._0_8_;
      pSStack_98 = (System_Collections_Generic_List_Enumerator_object__o *)local_b8._8_8_;
      local_90 = local_a8;
      while( true ) {
        bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_a0,
                            (MethodInfo_153A2A0 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
        pUVar9 = local_90;
        if (!bVar11) break;
        pSVar5 = (__this->fields)._colliders;
        if (pSVar5 == (System_Collections_Generic_List_Collider__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  (local_70,(System_Collections_Generic_List_T__o *)pSVar5,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
        local_88.fields._list = local_70[0].fields._list;
        local_88.fields._index = local_70[0].fields._index;
        local_88.fields._version = local_70[0].fields._version;
        local_88.fields._current = local_70[0].fields._current;
        local_b8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_b8._8_8_ = &local_88;
        while( true ) {
          bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_88,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
          pIVar10 = local_88.fields._current;
          if (!bVar11) break;
          if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
          }
          UnityEngine_Physics__IgnoreCollision_2fe2870
                    (pUVar9,(UnityEngine_Collider_o *)pIVar10,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_88,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
      pCVar13 = (__this->fields)._owner;
      if (pCVar13 != (Characters_BaseCharacter_o *)0x0) {
        bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if (((bVar2 <= (pCVar13->klass->_2).typeHierarchyDepth) &&
            ((pCVar13->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
             (Il2CppClass *)TypeInfo_Characters_Human)) && (*(int *)&(*(uint8_t *)((char *)pCVar13 + 0x130)) == 1)) {
          pSVar4 = (*(uint64_t *)((char *)pCVar13 + 0x138));
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar11) {
            pSVar4 = (*(uint64_t *)((char *)pCVar13 + 0x138));
            if (((pSVar4 == (System_String_o *)0x0) ||
                (pSVar8 = (*(uint64_t *)((char *)pSVar4 + 0x78)), pSVar8 == (System_String_c *)0x0)) ||
               (__this_01 = *(System_Collections_Generic_List_T__o **)&(pSVar8->_1).byval_arg.bits,
               __this_01 == (System_Collections_Generic_List_T__o *)0x0)) goto label_181f0e4d6;
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      (local_70,__this_01,
                       (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator)
            ;
            local_a0 = (undefined1  [8])local_70[0].fields._list;
            pSStack_98 = (System_Collections_Generic_List_Enumerator_object__o *)local_70[0].fields._8_8_;
            local_90 = (UnityEngine_Collider_o *)local_70[0].fields._current;
            while( true ) {
              bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_a0,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
              pUVar9 = local_90;
              if (!bVar11) break;
              pSVar5 = (__this->fields)._colliders;
              if (pSVar5 == (System_Collections_Generic_List_Collider__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                        (local_70,(System_Collections_Generic_List_T__o *)pSVar5,
                         (MethodInfo_91F180 *)
                         MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
              local_88.fields._list = local_70[0].fields._list;
              local_88.fields._index = local_70[0].fields._index;
              local_88.fields._version = local_70[0].fields._version;
              local_88.fields._current = local_70[0].fields._current;
              local_b8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
              local_b8._8_8_ = &local_88;
              while( true ) {
                bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (&local_88,
                                    (MethodInfo_153A2A0 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
                pIVar10 = local_88.fields._current;
                if (!bVar11) break;
                if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
                }
                UnityEngine_Physics__IgnoreCollision_2fe2870
                          (pUVar9,(UnityEngine_Collider_o *)pIVar10,(MethodInfo *)0x0);
              }
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_88,
                         MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0,
                       MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
          }
        }
      }
    }
  }
  return;
}


// Projectiles.BaseProjectile$$SetupSettings
// il2cpp: void Projectiles_BaseProjectile__SetupSettings (Projectiles_BaseProjectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x180547020

void
Projectiles_BaseProjectile__SetupSettings(Projectiles_BaseProjectile_o* __this, System_Object_array* settings, MethodInfo* method)

{
  return;
}


// Projectiles.BaseProjectile$$RegisterColliders
// il2cpp: void Projectiles_BaseProjectile__RegisterColliders (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x181f0db30

void Projectiles_BaseProjectile__RegisterColliders(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  UnityEngine_Collider_array *pUVar3;
  MethodInfo *pMVar4;
  System_Object_array *pSVar5;
  UnityEngine_GameObject_o *__this_02;
  uint uVar6;
  
  if (Il2CppMethodInitialized_1843454da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_1843454da = '\x01';
  }
  pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__665370
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_665370 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider);
  if (pSVar5 != (System_Object_array *)0x0) {
    uVar6 = 0;
    do {
      if ((int)pSVar5->max_length <= (int)uVar6) {
        return;
      }
      if ((uint)pSVar5->max_length <= uVar6) {
label_181f0dca0:
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar6];
      if (__this_00 == (UnityEngine_Component_o *)0x0) break;
      __this_02 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      if (__this_02 == (UnityEngine_GameObject_o *)0x0) break;
      UnityEngine_GameObject__set_layer
                (__this_02,TypeInfo_Utility_PhysicsLayer->static_fields->Projectile,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_Collider_Add;
      __this_01 = (__this->fields)._colliders;
      if (__this_01 == (System_Collections_Generic_List_Collider__o *)0x0) break;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_01->fields)._items;
      if (pUVar3 == (UnityEngine_Collider_array *)0x0) break;
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        if ((uint)pUVar3->max_length <= uVar2) goto label_181f0dca0;
        pUVar3->m_Items[(int)uVar2] = (UnityEngine_Collider_o *)__this_00;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,__this_00);
        uVar6 = uVar6 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        uVar6 = uVar6 + 1;
      }
    } while( true );
  }
  ThrowNullReferenceException();
}


// Projectiles.BaseProjectile$$IsMine
// il2cpp: bool Projectiles_BaseProjectile__IsMine (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x181f0daf0

bool Projectiles_BaseProjectile__IsMine(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    return (pPVar1->fields)._IsMine_k__BackingField;
  }
  ThrowNullReferenceException();
}


// Projectiles.BaseProjectile$$Update
// il2cpp: void Projectiles_BaseProjectile__Update (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x181f0e7a0

void Projectiles_BaseProjectile__Update(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  float fVar2;
  float fVar3;
  
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar1 = (__this->fields)._photonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pPVar1->fields)._IsMine_k__BackingField != false) {
    fVar3 = (__this->fields)._timeLeft;
    fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar3 = fVar3 - fVar2;
    (__this->fields)._timeLeft = fVar3;
    if (fVar3 <= 0.0) {
      (*(__this->klass->vtable)._16_OnExceedLiveTime.methodPtr)
                (__this,(__this->klass->vtable)._16_OnExceedLiveTime.method);
      return;
    }
  }
  return;
}


// Projectiles.BaseProjectile$$RegisterObjects
// il2cpp: void Projectiles_BaseProjectile__RegisterObjects (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x180547020

void
Projectiles_BaseProjectile__RegisterObjects(Projectiles_BaseProjectile_o* __this, MethodInfo* method)

{
  return;
}


// Projectiles.BaseProjectile$$OnExceedLiveTime
// il2cpp: void Projectiles_BaseProjectile__OnExceedLiveTime (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x181f0db10

void
Projectiles_BaseProjectile__OnExceedLiveTime(Projectiles_BaseProjectile_o* __this, MethodInfo* method)

{
  (*(__this->klass->vtable)._17_Handle.methodPtr)(__this,(__this->klass->vtable)._17_Handle.method);
  return;
}


// Projectiles.BaseProjectile$$DestroySelf
// il2cpp: void Projectiles_BaseProjectile__DestroySelf (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x181f0d440

void Projectiles_BaseProjectile__DestroySelf(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  System_Object_array *parameters;
  System_Collections_IEnumerator_o *routine;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843454db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"DisableRPC");
    Il2CppMethodInitialized_1843454db = '\x01';
  }
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((pPVar1->fields)._IsMine_k__BackingField != false) && ((__this->fields).Disabled == false)) {
      pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
      if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) goto label_181f0d515;
      Photon_Pun_PhotonView__RPC(pPVar1,"DisableRPC",0,parameters,(MethodInfo *)0x0);
      fVar2 = (*(__this->klass->vtable)._11_get_DestroyDelay.methodPtr)
                        (__this,(__this->klass->vtable)._11_get_DestroyDelay.method);
      routine = (*(__this->klass->vtable)._18_WaitAndFinishDestroyCoroutine.methodPtr)
                          (__this,fVar2,(__this->klass->vtable)._18_WaitAndFinishDestroyCoroutine.method);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    }
    return;
  }
label_181f0d515:
  ThrowNullReferenceException();
}


// Projectiles.BaseProjectile$$WaitAndFinishDestroyCoroutine
// il2cpp: System_Collections_IEnumerator_o* Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine (Projectiles_BaseProjectile_o* __this, float time, const MethodInfo* method);
// 0x181f0e820

System_Collections_IEnumerator_o *
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine
          (Projectiles_BaseProjectile_o *__this,float time,MethodInfo *method)

{
  Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__21_o *__this_00;
  
  if (Il2CppMethodInitialized_1843454dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Projectiles_BaseProjectile_WaitAndFinishDestroyCoroutine_d__21);
    Il2CppMethodInitialized_1843454dc = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Projectiles_BaseProjectile_WaitAndFinishDestroyCoroutine_d__21);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Projectiles.BaseProjectile$$DisableRPC
// il2cpp: void Projectiles_BaseProjectile__DisableRPC (Projectiles_BaseProjectile_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181f0d520
// eh: try 0x181f0d6b0..0x181f0dae2 -> pad 0x183320de0 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 58 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f0d6f0: mov rdx, qword ptr [rip + 0x2172df1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x181f0d6f7: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f0d6fc: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f0d701: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181f0d706: test rcx, rcx
// asm:   0x181f0d709: jne 0x181f0dabb
// asm:   0x181f0d70f: mov r15, qword ptr [rsp + 0xf0]
// asm:   0x181f0d7a1: mov rdx, qword ptr [rip + 0x216b728]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x181f0d7a8: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f0d7ad: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f0d7b2: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181f0d7b7: test rcx, rcx
// asm:   0x181f0d7ba: jne 0x181f0dac7
// asm:   0x181f0d7c0: mov r15, qword ptr [rsp + 0xf0]
// asm:   0x181f0d8bc: nop dword ptr [rax]
// asm:   0x181f0d972: mov rdx, qword ptr [rip + 0x21824cf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x181f0d979: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f0d97e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f0d983: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181f0d988: test rcx, rcx
// asm:   0x181f0d98b: jne 0x181f0dae2
// asm:   0x181f0d991: mov r15, qword ptr [rsp + 0xf0]
// asm:   0x181f0dabb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181f0dac7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181f0dae2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320de5: push rbp
// asm:   0x183320de6: sub rsp, 0x20
// asm:   0x183320dea: mov rbp, rdx
// asm:   0x183320ded: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320df4: mov rcx, qword ptr [rax]
// asm:   0x183320df7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183320dfb: movabs rax, 0
// asm:   0x183320e05: add rsp, 0x20
// asm:   0x183320e09: pop rbp
// asm:   0x183320e0a: ret 
// asm:   0x183324460: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324465: push rbp
// asm:   0x183324466: sub rsp, 0x20
// asm:   0x18332446a: mov rbp, rdx
// asm:   0x18332446d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183324474: mov rcx, qword ptr [rax]
// asm:   0x183324477: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18332447b: movabs rax, 0
// asm:   0x183324485: add rsp, 0x20
// asm:   0x183324489: pop rbp
// asm:   0x18332448a: ret 
// asm:   0x1833245a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245a5: push rbp
// asm:   0x1833245a6: sub rsp, 0x20
// asm:   0x1833245aa: mov rbp, rdx
// asm:   0x1833245ad: mov rax, qword ptr [rbp + 0x98]
// asm:   0x1833245b4: mov rcx, qword ptr [rax]
// asm:   0x1833245b7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245bb: movabs rax, 0
// asm:   0x1833245c5: add rsp, 0x20
// asm:   0x1833245c9: pop rbp
// asm:   0x1833245ca: ret 

void Projectiles_BaseProjectile__DisableRPC
               (Projectiles_BaseProjectile_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  UnityEngine_Object_o *x;
  UnityEngine_ConstantForce_o *__this_03;
  UnityEngine_ParticleSystem_o *__this_04;
  bool bVar1;
  uint32_t length;
  Photon_Pun_PhotonView_o *pPVar2;
  UnityEngine_ParticleSystem_Particle_array *particles;
  UnityEngine_Rigidbody_o *__this_05;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_c8 [16];
  UnityEngine_ParticleSystem_o *local_b8;
  undefined1 local_a8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_a0;
  UnityEngine_ParticleSystem_o *local_98;
  undefined1 local_90 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_88;
  UnityEngine_ParticleSystem_o *local_80;
  undefined1 local_78 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_70;
  UnityEngine_ParticleSystem_o *local_68;
  
  if (Il2CppMethodInitialized_1843454dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843454dd = '\x01';
  }
  local_a8 = (undefined1  [8])0x0;
  pUStack_a0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_98 = (UnityEngine_ParticleSystem_o *)0x0;
  local_90 = (undefined1  [8])0x0;
  pUStack_88 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_80 = (UnityEngine_ParticleSystem_o *)0x0;
  local_78 = (undefined1  [8])0x0;
  pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_68 = (UnityEngine_ParticleSystem_o *)0x0;
  if ((__this->fields).Disabled != false) {
    return;
  }
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_00 = (__this->fields)._hideObjects;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_c8,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
      local_a8 = (undefined1  [8])local_c8._0_8_;
      pUStack_a0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_c8._8_8_;
      local_98 = local_b8;
      local_c8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_c8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8;
      while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_a8,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
            bVar1) {
        if (local_98 == (UnityEngine_ParticleSystem_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)local_98,false,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a8,
                 MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
      __this_01 = (__this->fields)._colliders;
      if (__this_01 != (System_Collections_Generic_List_Collider__o *)0x0) {
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_c8,
                   (System_Collections_Generic_List_T__o *)__this_01,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
        local_90 = (undefined1  [8])local_c8._0_8_;
        pUStack_88 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_c8._8_8_;
        local_80 = local_b8;
        local_c8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_c8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90;
        while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_90,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext),
              bVar1) {
          if (local_80 == (UnityEngine_ParticleSystem_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)local_80,false,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_90,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
        __this_02 = (__this->fields)._fadeTrails;
        if (__this_02 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_c8,
                     (System_Collections_Generic_List_T__o *)__this_02,
                     (MethodInfo_91F180 *)
                     MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
          local_78 = (undefined1  [8])local_c8._0_8_;
          pUStack_70 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_c8._8_8_;
          local_68 = local_b8;
          local_c8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_c8._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78;
          while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                    (MethodInfo_153A2A0 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext
                                   ), __this_04 = local_68, bVar1) {
            if (Il2CppMethodInitialized_1843454de == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_ParticleSystem_Particle_array);
              Il2CppMethodInitialized_1843454de = '\x01';
            }
            if (__this_04 == (UnityEngine_ParticleSystem_o *)0x0) {
              ThrowNullReferenceException();
            }
            length = UnityEngine_ParticleSystem__get_particleCount(__this_04,(MethodInfo *)0x0);
            fVar4 = UnityEngine_ParticleSystem__get_startLifetime(__this_04,(MethodInfo *)0x0);
            fVar5 = (*(__this->klass->vtable)._10_get_TrailFadeMultiplier.methodPtr)
                              (__this,(__this->klass->vtable)._10_get_TrailFadeMultiplier.method);
            particles = (UnityEngine_ParticleSystem_Particle_array *)
                        SZArrayNew(TypeInfo_UnityEngine_ParticleSystem_Particle_array,length);
            UnityEngine_ParticleSystem__GetParticles_2fca1d0(__this_04,particles,(MethodInfo *)0x0);
            for (uVar3 = 0; (int)uVar3 < (int)length; uVar3 = uVar3 + 1) {
              if (particles == (UnityEngine_ParticleSystem_Particle_array *)0x0) {
                ThrowNullReferenceException();
              }
              if ((uint)particles->max_length <= uVar3) {
                ThrowIndexOutOfRangeException();
              }
              fVar6 = UnityEngine_ParticleSystem_Particle__get_remainingLifetime
                                (particles->m_Items + (int)uVar3,(MethodInfo *)0x0);
              fVar7 = (*(__this->klass->vtable)._10_get_TrailFadeMultiplier.methodPtr)
                                (__this,(__this->klass->vtable)._10_get_TrailFadeMultiplier.method);
              UnityEngine_ParticleSystem_Particle__set_remainingLifetime
                        (particles->m_Items + (int)uVar3,fVar7 * fVar6,(MethodInfo *)0x0);
              if ((uint)particles->max_length <= uVar3) {
                ThrowIndexOutOfRangeException();
              }
              UnityEngine_ParticleSystem_Particle__set_startLifetime
                        (particles->m_Items + (int)uVar3,fVar5 * fVar4,(MethodInfo *)0x0);
            }
            UnityEngine_ParticleSystem__SetParticles_2fca640(__this_04,particles,length,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                     MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
          __this_05 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this,
                                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Rigidbody)
          ;
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          if (__this_05 != (UnityEngine_Rigidbody_o *)0x0) {
            local_c8._0_8_ = *(undefined8 *)&(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
            local_c8._8_4_ = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields.z;
            UnityEngine_Rigidbody__set_linearVelocity
                      (__this_05,(UnityEngine_Vector3_o *)local_c8,(MethodInfo *)0x0);
            x = (UnityEngine_Object_o *)(__this->fields)._force;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
              __this_03 = (__this->fields)._force;
              if (Il2CppMethodInitialized_18433dbea == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433dbea = '\x01';
              }
              if (__this_03 == (UnityEngine_ConstantForce_o *)0x0) goto label_181f0daaf;
              local_c8._0_8_ =
                   *(undefined8 *)&(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
              local_c8._8_4_ = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields.z;
              UnityEngine_ConstantForce__set_force
                        (__this_03,(UnityEngine_Vector3_o *)local_c8,(MethodInfo *)0x0);
            }
            (__this->fields).Disabled = true;
            return;
          }
        }
      }
    }
  }
label_181f0daaf:
  ThrowNullReferenceException();
}


// Projectiles.BaseProjectile$$SetDisabledTrailFade
// il2cpp: void Projectiles_BaseProjectile__SetDisabledTrailFade (Projectiles_BaseProjectile_o* __this, UnityEngine_ParticleSystem_o* particleSystem, const MethodInfo* method);
// 0x181f0dcb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f0dd6b: nop dword ptr [rax + rax]

void Projectiles_BaseProjectile__SetDisabledTrailFade
               (Projectiles_BaseProjectile_o *__this,UnityEngine_ParticleSystem_o *particleSystem,
               MethodInfo *method)

{
  uint32_t length;
  UnityEngine_ParticleSystem_Particle_array *particles;
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_1843454de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_ParticleSystem_Particle_array);
    Il2CppMethodInitialized_1843454de = '\x01';
  }
  if (particleSystem == (UnityEngine_ParticleSystem_o *)0x0) {
label_181f0de1b:
    ThrowNullReferenceException();
  }
  length = UnityEngine_ParticleSystem__get_particleCount(particleSystem,(MethodInfo *)0x0);
  fVar2 = UnityEngine_ParticleSystem__get_startLifetime(particleSystem,(MethodInfo *)0x0);
  fVar3 = (*(__this->klass->vtable)._10_get_TrailFadeMultiplier.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_TrailFadeMultiplier.method);
  particles = (UnityEngine_ParticleSystem_Particle_array *)
              SZArrayNew(TypeInfo_UnityEngine_ParticleSystem_Particle_array,length);
  UnityEngine_ParticleSystem__GetParticles_2fca1d0(particleSystem,particles,(MethodInfo *)0x0);
  if (0 < (int)length) {
    uVar1 = 0;
    if (particles == (UnityEngine_ParticleSystem_Particle_array *)0x0) goto label_181f0de1b;
    do {
      if ((uint)particles->max_length <= uVar1) {
label_181f0de21:
        ThrowIndexOutOfRangeException();
      }
      fVar4 = UnityEngine_ParticleSystem_Particle__get_remainingLifetime
                        (particles->m_Items + (int)uVar1,(MethodInfo *)0x0);
      fVar5 = (*(__this->klass->vtable)._10_get_TrailFadeMultiplier.methodPtr)
                        (__this,(__this->klass->vtable)._10_get_TrailFadeMultiplier.method);
      UnityEngine_ParticleSystem_Particle__set_remainingLifetime
                (particles->m_Items + (int)uVar1,fVar5 * fVar4,(MethodInfo *)0x0);
      if ((uint)particles->max_length <= uVar1) goto label_181f0de21;
      UnityEngine_ParticleSystem_Particle__set_startLifetime
                (particles->m_Items + (int)uVar1,fVar3 * fVar2,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)length);
  }
  UnityEngine_ParticleSystem__SetParticles_2fca640(particleSystem,particles,length,(MethodInfo *)0x0);
  return;
}


// Projectiles.BaseProjectile$$.ctor
// il2cpp: void Projectiles_BaseProjectile___ctor (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x181f0e8a0

void
Projectiles_BaseProjectile___ctor(Projectiles_BaseProjectile_o* __this, MethodInfo* method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  
  if (Il2CppMethodInitialized_1843454df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_1843454df = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._hideObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hideObjects,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  (__this->fields)._colliders = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colliders,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
  (__this->fields)._fadeTrails = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fadeTrails,__this_02);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


