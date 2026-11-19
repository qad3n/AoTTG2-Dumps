// Type: Projectiles.BaseProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Projectiles/BaseProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/BaseProjectile.cs
// --------------------------------

// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$.ctor
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23___ctor (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x586f850

void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23___ctor
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$System.IDisposable.Dispose
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23__System_IDisposable_Dispose (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o* __this, const MethodInfo* method);
// 0x586ffc0

void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23__System_IDisposable_Dispose
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o *__this,MethodInfo *method)

{
  return;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$MoveNext
// il2cpp: bool Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23__MoveNext (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o* __this, const MethodInfo* method);
// 0x586ffd0

bool Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23__MoveNext
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  Projectiles_BaseProjectile_o *__this_00;
  UnityEngine_GameObject_o *targetGo;
  UnityEngine_WaitForSeconds_o *__this_01;
  
  if (Il2CppMethodInitialized_0754516c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_0754516c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).time;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Projectiles_BaseProjectile_o *)0x0) {
      ThrowNullReferenceException();
    }
    targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__Destroy_56d7e70(targetGo,(MethodInfo *)0x0);
  }
  return iVar1 == 0;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o* __this, const MethodInfo* method);
// 0x58700c0

Il2CppObject *
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$System.Collections.IEnumerator.Reset
// il2cpp: void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23__System_Collections_IEnumerator_Reset (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o* __this, const MethodInfo* method);
// 0x58700d0

void Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23__System_Collections_IEnumerator_Reset
               (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o *__this,MethodInfo *method)

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
                  MethodInfo_Projectiles_BaseProjectile_WaitAndFinishDestroyCoroutine_d__23_System_Collections_IEnumerator_Re
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Projectiles.BaseProjectile.<WaitAndFinishDestroyCoroutine>d__23$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23__System_Collections_IEnumerator_get_Current (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o* __this, const MethodInfo* method);
// 0x5870110

Il2CppObject *
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23__System_Collections_IEnumerator_get_Current
          (Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Projectiles.BaseProjectile$$get_TrailFadeMultiplier
// il2cpp: float Projectiles_BaseProjectile__get_TrailFadeMultiplier (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x586e9e0

float Projectiles_BaseProjectile__get_TrailFadeMultiplier
                (Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  return 0.6;
}


// Projectiles.BaseProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_BaseProjectile__get_DestroyDelay (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x586e9f0

float Projectiles_BaseProjectile__get_DestroyDelay(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  return 1.5;
}


// Projectiles.BaseProjectile$$Setup
// il2cpp: void Projectiles_BaseProjectile__Setup (Projectiles_BaseProjectile_o* __this, float liveTime, UnityEngine_Vector3_o velocity, UnityEngine_Vector3_o gravity, int32_t charViewId, System_String_o* team, System_Object_array* settings, const MethodInfo* method);
// 0x586ea00

void Projectiles_BaseProjectile__Setup
               (Projectiles_BaseProjectile_o *__this,float liveTime,UnityEngine_Vector3_o velocity,
               UnityEngine_Vector3_o gravity,int32_t charViewId,System_String_o *team,
               System_Object_array *settings,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_ConstantForce_o *pUVar4;
  Photon_Pun_PhotonView_o *__this_02;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar7;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  int32_t iStack_5c;
  undefined1 auStack_58 [16];
  float fStack_48;
  undefined1 auStack_38 [16];
  
  fStack_48 = gravity.fields.z;
  auStack_58._8_4_ = in_XMM3_Dc;
  auStack_58._0_8_ = gravity.fields._0_8_;
  auStack_58._12_4_ = in_XMM3_Dd;
  auStack_38._8_4_ = in_XMM1_Dc;
  auStack_38._0_8_ = velocity.fields._0_8_;
  auStack_38._12_4_ = in_XMM1_Dd;
  if (Il2CppMethodInitialized_07545162 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetupRPC");
    Il2CppMethodInitialized_07545162 = '\x01';
  }
  (__this->fields)._timeLeft = liveTime;
  __this_00 = (__this->fields)._rigidbody;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_0586ec6b;
  value.fields.z = velocity.fields.z;
  value.fields.x = (float)auStack_38._0_4_;
  value.fields.y = (float)auStack_38._4_4_;
  UnityEngine_Rigidbody__set_linearVelocity(__this_00,value,(MethodInfo *)0x0);
  (__this->fields)._team = team;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._team);
  (__this->fields)._velocity.fields.x = (float)auStack_38._0_4_;
  (__this->fields)._velocity.fields.y = (float)auStack_38._4_4_;
  (__this->fields)._velocity.fields.z = velocity.fields.z;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->zeroVector).fields.x;
  uVar2 = (pUVar3->zeroVector).fields.y;
  fVar7 = fStack_48 - (pUVar3->zeroVector).fields.z;
  if (9.9999994e-11 <=
      ((float)auStack_58._4_4_ - (float)uVar2) * ((float)auStack_58._4_4_ - (float)uVar2) +
      ((float)auStack_58._0_4_ - (float)uVar1) * ((float)auStack_58._0_4_ - (float)uVar1) + fVar7 * fVar7) {
    __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_0586ec6b;
    pUVar4 = UnityEngine_GameObject__AddComponent_object_
                       (__this_01,
                        (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_ConstantForce);
    (__this->fields)._force = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._force);
    pUVar4 = (__this->fields)._force;
    if (pUVar4 == (UnityEngine_ConstantForce_o *)0x0) goto label_0586ec6b;
    value_00.fields.z = fStack_48;
    value_00.fields.x = (float)auStack_58._0_4_;
    value_00.fields.y = (float)auStack_58._4_4_;
    UnityEngine_ConstantForce__set_force(pUVar4,value_00,(MethodInfo *)0x0);
  }
  __this_02 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  iStack_5c = charViewId;
  pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_5c);
  if (parameters == (System_Object_array *)0x0) {
label_0586ec6b:
    ThrowNullReferenceException();
  }
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_0586ec75;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar5;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (settings != (System_Object_array *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(&settings->obj,(((parameters->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) {
label_0586ec75:
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
    }
    if ((parameters->max_length & 0xfffffffe) != 0) {
      parameters->m_Items[1] = &settings->obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
      if (__this_02 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_02,"SetupRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_0586ec6b;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Projectiles.BaseProjectile$$GetOwnerName
// il2cpp: System_String_o* Projectiles_BaseProjectile__GetOwnerName (Projectiles_BaseProjectile_o* __this, System_String_o* fallback, const MethodInfo* method);
// 0x586ec90

System_String_o *
Projectiles_BaseProjectile__GetOwnerName
          (Projectiles_BaseProjectile_o *__this,System_String_o *fallback,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545163 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545163 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._owner;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    fallback = (pCVar1->fields).RichTextName;
  }
  return fallback;
}


// Projectiles.BaseProjectile$$SetupRPC
// il2cpp: void Projectiles_BaseProjectile__SetupRPC (Projectiles_BaseProjectile_o* __this, int32_t charViewId, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x586ed10
// eh: try 0x586ef94..0x586f0a3 -> pad 0x586f36a (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x586f1ad..0x586f2a7 -> pad 0x586f324 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x586f2d9..0x586f2e6 -> pad 0x586f364 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x586f2eb..0x586f2f8 -> pad 0x586f322 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x586f2fe..0x586f31a -> pad 0x586f3ca catch (...) [compiler noexcept guard]
// eh: try 0x586f33f..0x586f344 -> pad 0x586f353 cleanup
// eh: try 0x586f356..0x586f360 -> pad 0x586f3ca catch (...) [compiler noexcept guard]
// eh: try 0x586f385..0x586f38a -> pad 0x586f3b5 cleanup
// eh: try 0x586f3b8..0x586f3c2 -> pad 0x586f3ca catch (...) [compiler noexcept guard]
// asm: 99 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x586f06f: test r12d, r12d
// asm:   0x586f072: je 0x586ef90
// asm:   0x586f078: jmp 0x586f2a9
// asm:   0x586f07d: jmp 0x586f07f
// asm:   0x586f07f: mov rbp, rdx
// asm:   0x586f082: mov rbx, rax
// asm:   0x586f085: cmp ebp, 1
// asm:   0x586f088: jne 0x586f310
// asm:   0x586f08e: mov rdi, rbx
// asm:   0x586f091: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x586f096: mov rbp, qword ptr [rax]
// asm:   0x586f099: mov qword ptr [rsp + 8], rbp
// asm:   0x586f09e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586f0a3: xor r12d, r12d
// asm:   0x586f0a6: mov bl, 1
// asm:   0x586f0a8: jmp 0x586f04a
// asm:   0x586f276: test ebp, ebp
// asm:   0x586f278: je 0x586f1a9
// asm:   0x586f27e: jmp 0x586f344
// asm:   0x586f283: jmp 0x586f285
// asm:   0x586f285: mov rbp, rdx
// asm:   0x586f288: mov rbx, rax
// asm:   0x586f28b: cmp ebp, 1
// asm:   0x586f28e: jne 0x586f2fe
// asm:   0x586f290: mov rdi, rbx
// asm:   0x586f293: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x586f298: mov r12, qword ptr [rax]
// asm:   0x586f29b: mov qword ptr [rsp + 8], r12
// asm:   0x586f2a0: xor ebp, ebp
// asm:   0x586f2a2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586f2a7: jmp 0x586f24d
// asm:   0x586f2a9: lea rax, [rip + 0x1a1e690]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x586f2b0: mov rsi, qword ptr [rax]
// asm:   0x586f2b3: lea rdi, [rsp + 0x20]
// asm:   0x586f2b8: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x586f2bd: test bl, bl
// asm:   0x586f2bf: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x586f2c4: jne 0x586f0be
// asm:   0x586f2de: mov rdi, rbp
// asm:   0x586f2e1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x586f2f0: mov rdi, r12
// asm:   0x586f2f3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x586f2f8: mov rbp, rdx
// asm:   0x586f2fb: mov rbx, rax
// asm:   0x586f2fe: lea rdi, [rsp + 8]
// asm:   0x586f303: call 0x2fcf5a0  ; il2cpp_runtime_helper_02fcf5a0()
// asm:   0x586f308: jmp 0x586f32a
// asm:   0x586f30a: mov rbp, rdx
// asm:   0x586f30d: mov rbx, rax
// asm:   0x586f310: lea rdi, [rsp + 8]
// asm:   0x586f315: call 0x2fcf540  ; il2cpp_runtime_helper_02fcf540()
// asm:   0x586f31a: jmp 0x586f370
// asm:   0x586f31c: jmp 0x586f324
// asm:   0x586f31e: jmp 0x586f324
// asm:   0x586f320: jmp 0x586f324
// asm:   0x586f322: jmp 0x586f324
// asm:   0x586f324: mov rbp, rdx
// asm:   0x586f327: mov rbx, rax
// asm:   0x586f32a: cmp ebp, 1
// asm:   0x586f32d: jne 0x586f356
// asm:   0x586f32f: mov rdi, rbx
// asm:   0x586f332: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x586f337: mov rax, qword ptr [rax]
// asm:   0x586f33a: mov qword ptr [rsp + 0x40], rax
// asm:   0x586f33f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586f353: mov rbx, rax
// asm:   0x586f356: lea rdi, [rsp + 0x40]
// asm:   0x586f35b: call 0x2fcf5d0  ; il2cpp_runtime_helper_02fcf5d0()
// asm:   0x586f360: jmp 0x586f3c2
// asm:   0x586f362: jmp 0x586f36a
// asm:   0x586f364: jmp 0x586f36a
// asm:   0x586f366: jmp 0x586f36a
// asm:   0x586f368: jmp 0x586f36a
// asm:   0x586f36a: mov rbp, rdx
// asm:   0x586f36d: mov rbx, rax
// asm:   0x586f370: cmp ebp, 1
// asm:   0x586f373: jne 0x586f3b8
// asm:   0x586f375: mov rdi, rbx
// asm:   0x586f378: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x586f37d: mov rbp, qword ptr [rax]
// asm:   0x586f380: mov qword ptr [rsp + 0x40], rbp
// asm:   0x586f385: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586f38a: lea rax, [rip + 0x1a1e5af]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x586f391: mov rsi, qword ptr [rax]
// asm:   0x586f394: lea rdi, [rsp + 0x20]
// asm:   0x586f399: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x586f39e: test rbp, rbp
// asm:   0x586f3a1: jne 0x586f3ad
// asm:   0x586f3a3: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x586f3a8: jmp 0x586f0be
// asm:   0x586f3ad: mov rdi, rbp
// asm:   0x586f3b0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x586f3b5: mov rbx, rax
// asm:   0x586f3b8: lea rdi, [rsp + 0x40]
// asm:   0x586f3bd: call 0x2fcf570  ; il2cpp_runtime_helper_02fcf570()
// asm:   0x586f3c2: mov rdi, rbx
// asm:   0x586f3c5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x586f3ca: mov rdi, rax
// asm:   0x586f3cd: call 0x2ab61e0  ; __clang_call_terminate()

void Projectiles_BaseProjectile__SetupRPC
               (Projectiles_BaseProjectile_o *__this,int32_t charViewId,System_Object_array *settings,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  System_Collections_Generic_List_Collider__o *pSVar3;
  UnityEngine_Object_o *x;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_Collider_o *pUVar5;
  UnityEngine_Collider_o *pUVar6;
  bool bVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  Characters_BaseCharacter_o *pCVar9;
  Projectiles_BaseProjectile_o *pPVar10;
  MethodInfo *method_00;
  undefined1 auStack_90 [16];
  UnityEngine_Collider_o *pUStack_80;
  undefined1 auStack_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  UnityEngine_Collider_o *pUStack_68;
  Projectiles_BaseProjectile_o *pPStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined1 auStack_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  UnityEngine_Collider_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07545164 == '\0') {
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
    Il2CppMethodInitialized_07545164 = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_68 = (UnityEngine_Collider_o *)0x0;
  auStack_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pUStack_38 = (UnityEngine_Collider_o *)0x0;
  pPVar8 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar8 == (Photon_Pun_PhotonView_o *)0x0) {
label_0586f2e6:
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar8->fields)._Owner_k__BackingField) {
    if (charViewId != -1) {
      pPVar8 = Photon_Pun_PhotonView__Find(charViewId,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pPVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        if (pPVar8 == (Photon_Pun_PhotonView_o *)0x0) goto label_0586f2e6;
        pCVar9 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pPVar8,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter)
        ;
        (__this->fields)._owner = pCVar9;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._owner);
      }
      pCVar9 = (__this->fields)._owner;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        pCVar9 = (__this->fields)._owner;
        if (pCVar9 == (Characters_BaseCharacter_o *)0x0) goto label_0586f2e6;
        (__this->fields)._team = (pCVar9->fields).Team;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._team);
      }
    }
    (*(__this->klass->vtable)._14_SetupSettings.methodPtr)
              (__this,settings,(__this->klass->vtable)._14_SetupSettings.method);
    method_00 = (__this->klass->vtable)._15_RegisterObjects.method;
    (*(__this->klass->vtable)._15_RegisterObjects.methodPtr)(__this,method_00);
    Projectiles_BaseProjectile__RegisterColliders(__this,method_00);
    pCVar9 = (__this->fields)._owner;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pCVar9 = (__this->fields)._owner;
      if (((pCVar9 == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar2 = (pCVar9->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pSVar3 = (pUVar2->fields).Colliders, pPStack_60 = __this,
         pSVar3 == (System_Collections_Generic_List_Collider__o *)0x0)) goto label_0586f2e6;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,
                 (System_Collections_Generic_List_object__o *)pSVar3,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
      pUStack_68 = pUStack_80;
      auStack_78 = (undefined1  [8])auStack_90._0_8_;
      pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_90._8_8_;
      uStack_58 = 0;
      puStack_50 = auStack_78;
      while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext),
            pPVar10 = pPStack_60, pUVar5 = pUStack_68, bVar7) {
        pSVar3 = (pPStack_60->fields)._colliders;
        if (pSVar3 == (System_Collections_Generic_List_Collider__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,
                   (System_Collections_Generic_List_object__o *)pSVar3,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
        pUStack_38 = pUStack_80;
        auStack_48 = (undefined1  [8])auStack_90._0_8_;
        pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_90._8_8_;
        auStack_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
        while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext),
              pUVar6 = pUStack_38, bVar7) {
          if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
          }
          UnityEngine_Physics__IgnoreCollision_69d9330(pUVar5,pUVar6,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose)
      ;
      pCVar9 = (pPVar10->fields)._owner;
      if (pCVar9 != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if (((bVar1 <= (pCVar9->klass->_2).typeHierarchyDepth) &&
            ((pCVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human))
           && (*(int *)&(*(uint64_t *)((char *)pCVar9 + 0x138)) == 1)) {
          x = *(UnityEngine_Object_o **)&(*(uint8_t *)((char *)pCVar9 + 0x140));
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar7) {
            lVar4 = *(long *)&(*(uint8_t *)((char *)pCVar9 + 0x140));
            if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x80), lVar4 == 0)) ||
               (__this_00 = *(System_Collections_Generic_List_object__o **)(lVar4 + 0x28),
               __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto label_0586f2e6;
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,__this_00,
                       (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator
                      );
            pUStack_68 = pUStack_80;
            auStack_78 = (undefined1  [8])auStack_90._0_8_;
            pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_90._8_8_;
            uStack_58 = 0;
            puStack_50 = auStack_78;
            while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                                      (MethodInfo_4C45C50 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext)
                  , pUVar5 = pUStack_68, bVar7) {
              pSVar3 = (pPVar10->fields)._colliders;
              if (pSVar3 == (System_Collections_Generic_List_Collider__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)auStack_90,
                         (System_Collections_Generic_List_object__o *)pSVar3,
                         (MethodInfo_395E050 *)
                         MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
              pUStack_38 = pUStack_80;
              auStack_48 = (undefined1  [8])auStack_90._0_8_;
              pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_90._8_8_;
              auStack_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
              auStack_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
              while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                       ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                                        (MethodInfo_4C45C50 *)
                                        MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext
                                       ), pUVar6 = pUStack_38, bVar7) {
                if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
                }
                UnityEngine_Physics__IgnoreCollision_69d9330(pUVar5,pUVar6,(MethodInfo *)0x0);
              }
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                         (MethodInfo_4C45C40 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
              pPVar10 = pPStack_60;
            }
            il2cpp_runtime_helper_02fcf5d0(&uStack_58);
          }
        }
      }
    }
  }
  return;
}


// Projectiles.BaseProjectile$$GetHitCharacter
// il2cpp: Characters_BaseCharacter_o* Projectiles_BaseProjectile__GetHitCharacter (UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x586f550

Characters_BaseCharacter_o *
Projectiles_BaseProjectile__GetHitCharacter(UnityEngine_Collider_o *collider,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  Characters_Human_o *__this;
  Characters_Human_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545165 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    Il2CppMethodInitialized_07545165 = '\x01';
  }
  if (collider != (UnityEngine_Collider_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        __this = (Characters_Human_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter)
        ;
        if (__this == (Characters_Human_o *)0x0) {
          return (Characters_BaseCharacter_o *)0x0;
        }
        bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
        if (((__this->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Horse))
        {
          return (Characters_BaseCharacter_o *)__this;
        }
        pCVar3 = Characters_Horse__FindSaddledHuman((Characters_Horse_o *)__this,(MethodInfo *)0x0);
        if (pCVar3 != (Characters_Human_o *)0x0) {
          __this = pCVar3;
        }
        return (Characters_BaseCharacter_o *)__this;
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.BaseProjectile$$SetupSettings
// il2cpp: void Projectiles_BaseProjectile__SetupSettings (Projectiles_BaseProjectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x586f610

void Projectiles_BaseProjectile__SetupSettings
               (Projectiles_BaseProjectile_o *__this,System_Object_array *settings,MethodInfo *method)

{
  return;
}


// Projectiles.BaseProjectile$$RegisterColliders
// il2cpp: void Projectiles_BaseProjectile__RegisterColliders (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x586f3e0

void Projectiles_BaseProjectile__RegisterColliders(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Component_o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  UnityEngine_Collider_array *pUVar2;
  MethodInfo *pMVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  UnityEngine_GameObject_o *__this_02;
  uint uVar6;
  
  if (Il2CppMethodInitialized_07545166 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_07545166 = '\x01';
  }
  pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B11B0 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Collider)
  ;
  if (pSVar5 == (System_Object_array *)0x0) {
label_0586f541:
    ThrowNullReferenceException();
  }
  uVar4 = (uint)pSVar5->max_length;
  if (0 < (int)uVar4) {
    uVar6 = 0;
    do {
      while( true ) {
        if (uVar4 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar6];
        if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_0586f541;
        __this_02 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        }
        if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_0586f541;
        UnityEngine_GameObject__set_layer
                  (__this_02,TypeInfo_Utility_PhysicsLayer->static_fields->Projectile,(MethodInfo *)0x0);
        pMVar3 = MethodInfo_System_Collections_Generic_List_Collider_Add;
        __this_01 = (__this->fields)._colliders;
        if (__this_01 == (System_Collections_Generic_List_Collider__o *)0x0) goto label_0586f541;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar2 = (__this_01->fields)._items;
        if (pUVar2 == (UnityEngine_Collider_array *)0x0) goto label_0586f541;
        uVar4 = (__this_01->fields)._size;
        if ((uint)pUVar2->max_length <= uVar4) break;
        (__this_01->fields)._size = uVar4 + 1;
        pUVar2->m_Items[(int)uVar4] = (UnityEngine_Collider_o *)__this_00;
        Il2CppCodeGenWriteBarrier(pUVar2->m_Items + (int)uVar4);
        uVar6 = uVar6 + 1;
        uVar4 = (uint)pSVar5->max_length;
        if ((int)uVar4 <= (int)uVar6) {
          return;
        }
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                 (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
      uVar6 = uVar6 + 1;
      uVar4 = (uint)pSVar5->max_length;
    } while ((int)uVar6 < (int)uVar4);
  }
  return;
}


// Projectiles.BaseProjectile$$IsMine
// il2cpp: bool Projectiles_BaseProjectile__IsMine (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x586f620

bool Projectiles_BaseProjectile__IsMine(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pPVar1->fields)._IsMine_k__BackingField;
}


// Projectiles.BaseProjectile$$Update
// il2cpp: void Projectiles_BaseProjectile__Update (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x586f640

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
// 0x586f6c0

void Projectiles_BaseProjectile__RegisterObjects(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  return;
}


// Projectiles.BaseProjectile$$OnExceedLiveTime
// il2cpp: void Projectiles_BaseProjectile__OnExceedLiveTime (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x586f6d0

void Projectiles_BaseProjectile__OnExceedLiveTime(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._17_DestroySelf.methodPtr)(__this,(__this->klass->vtable)._17_DestroySelf.method);
  return;
}


// Projectiles.BaseProjectile$$DestroySelf
// il2cpp: void Projectiles_BaseProjectile__DestroySelf (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x586f6f0

void Projectiles_BaseProjectile__DestroySelf(Projectiles_BaseProjectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  System_Object_array *parameters;
  System_Collections_IEnumerator_o *routine;
  float fVar2;
  
  if (Il2CppMethodInitialized_07545167 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"DisableRPC");
    Il2CppMethodInitialized_07545167 = '\x01';
  }
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((pPVar1->fields)._IsMine_k__BackingField == false) || ((__this->fields).Disabled != false)) {
      return;
    }
    pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(pPVar1,"DisableRPC",0,parameters,(MethodInfo *)0x0);
      fVar2 = (*(__this->klass->vtable)._11_get_DestroyDelay.methodPtr)
                        (__this,(__this->klass->vtable)._11_get_DestroyDelay.method);
      routine = (*(__this->klass->vtable)._18_WaitAndFinishDestroyCoroutine.methodPtr)
                          (__this,fVar2,(__this->klass->vtable)._18_WaitAndFinishDestroyCoroutine.method);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.BaseProjectile$$WaitAndFinishDestroyCoroutine
// il2cpp: System_Collections_IEnumerator_o* Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine (Projectiles_BaseProjectile_o* __this, float time, const MethodInfo* method);
// 0x586f7d0

System_Collections_IEnumerator_o *
Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine
          (Projectiles_BaseProjectile_o *__this,float time,MethodInfo *method)

{
  Projectiles_BaseProjectile__WaitAndFinishDestroyCoroutine_d__23_o *__this_00;
  
  if (Il2CppMethodInitialized_07545168 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Projectiles_BaseProjectile_WaitAndFinishDestroyCoroutine_d__23);
    Il2CppMethodInitialized_07545168 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Projectiles_BaseProjectile_WaitAndFinishDestroyCoroutine_d__23);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Projectiles.BaseProjectile$$DisableRPC
// il2cpp: void Projectiles_BaseProjectile__DisableRPC (Projectiles_BaseProjectile_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x586f870
// eh: try 0x586fa03..0x586fc30 -> pad 0x586fc93 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x586fc5a..0x586fc5f -> pad 0x586fc81 cleanup
// eh: try 0x586fc84..0x586fc8e -> pad 0x586fd35 catch (...) [compiler noexcept guard]
// eh: try 0x586fcab..0x586fcb0 -> pad 0x586fccf cleanup
// eh: try 0x586fcd2..0x586fcdc -> pad 0x586fd35 catch (...) [compiler noexcept guard]
// eh: try 0x586fcf6..0x586fcfb -> pad 0x586fd20 cleanup
// eh: try 0x586fd23..0x586fd2d -> pad 0x586fd35 catch (...) [compiler noexcept guard]
// asm: 67 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x586fa8e: nop 
// asm:   0x586fc35: jmp 0x586fc42
// asm:   0x586fc37: jmp 0x586fc42
// asm:   0x586fc39: jmp 0x586fc93
// asm:   0x586fc3b: jmp 0x586fc93
// asm:   0x586fc3d: jmp 0x586fcde
// asm:   0x586fc42: mov r14, rax
// asm:   0x586fc45: cmp edx, 1
// asm:   0x586fc48: jne 0x586fc84
// asm:   0x586fc4a: mov rdi, r14
// asm:   0x586fc4d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x586fc52: mov rbx, qword ptr [rax]
// asm:   0x586fc55: mov qword ptr [rsp + 8], rbx
// asm:   0x586fc5a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586fc5f: lea rax, [rip + 0x1a1dcda]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x586fc66: mov rsi, qword ptr [rax]
// asm:   0x586fc69: lea rdi, [rsp + 0x20]
// asm:   0x586fc6e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x586fc73: test rbx, rbx
// asm:   0x586fc76: je 0x586facc
// asm:   0x586fc7c: jmp 0x586fd18
// asm:   0x586fc81: mov r14, rax
// asm:   0x586fc84: lea rdi, [rsp + 8]
// asm:   0x586fc89: call 0x2fcf630  ; il2cpp_runtime_helper_02fcf630()
// asm:   0x586fc8e: jmp 0x586fd2d
// asm:   0x586fc93: mov r14, rax
// asm:   0x586fc96: cmp edx, 1
// asm:   0x586fc99: jne 0x586fcd2
// asm:   0x586fc9b: mov rdi, r14
// asm:   0x586fc9e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x586fca3: mov rbx, qword ptr [rax]
// asm:   0x586fca6: mov qword ptr [rsp + 8], rbx
// asm:   0x586fcab: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586fcb0: lea rax, [rip + 0x1a1e0c1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x586fcb7: mov rsi, qword ptr [rax]
// asm:   0x586fcba: lea rdi, [rsp + 0x40]
// asm:   0x586fcbf: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x586fcc4: test rbx, rbx
// asm:   0x586fcc7: je 0x586fa3c
// asm:   0x586fccd: jmp 0x586fd18
// asm:   0x586fccf: mov r14, rax
// asm:   0x586fcd2: lea rdi, [rsp + 8]
// asm:   0x586fcd7: call 0x2fcf600  ; il2cpp_runtime_helper_02fcf600()
// asm:   0x586fcdc: jmp 0x586fd2d
// asm:   0x586fcde: mov r14, rax
// asm:   0x586fce1: cmp edx, 1
// asm:   0x586fce4: jne 0x586fd23
// asm:   0x586fce6: mov rdi, r14
// asm:   0x586fce9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x586fcee: mov rbx, qword ptr [rax]
// asm:   0x586fcf1: mov qword ptr [rsp + 8], rbx
// asm:   0x586fcf6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586fcfb: lea rax, [rip + 0x1a1e9a6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose
// asm:   0x586fd02: mov rsi, qword ptr [rax]
// asm:   0x586fd05: lea rdi, [rsp + 0x60]
// asm:   0x586fd0a: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x586fd0f: test rbx, rbx
// asm:   0x586fd12: je 0x586fb42
// asm:   0x586fd18: mov rdi, rbx
// asm:   0x586fd1b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x586fd20: mov r14, rax
// asm:   0x586fd23: lea rdi, [rsp + 8]
// asm:   0x586fd28: call 0x2fcf660  ; il2cpp_runtime_helper_02fcf660()
// asm:   0x586fd2d: mov rdi, r14
// asm:   0x586fd30: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x586fd35: mov rdi, rax
// asm:   0x586fd38: call 0x2ab61e0  ; __clang_call_terminate()

void Projectiles_BaseProjectile__DisableRPC
               (Projectiles_BaseProjectile_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  UnityEngine_Object_o *x;
  UnityEngine_ConstantForce_o *__this_03;
  bool bVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  UnityEngine_Rigidbody_o *__this_04;
  MethodInfo *method_00;
  undefined1 local_90 [16];
  UnityEngine_Collider_o *local_80;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  UnityEngine_Collider_o *local_68;
  undefined1 local_58 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_50;
  UnityEngine_GameObject_o *local_48;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if (Il2CppMethodInitialized_07545169 == '\0') {
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
    Il2CppMethodInitialized_07545169 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_48 = (UnityEngine_GameObject_o *)0x0;
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_68 = (UnityEngine_Collider_o *)0x0;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).Disabled != false) {
    return;
  }
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_00 = (__this->fields)._hideObjects;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
      local_48 = (UnityEngine_GameObject_o *)local_80;
      local_58 = (undefined1  [8])local_90._0_8_;
      pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)local_90._8_8_;
      local_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_58;
      while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
            bVar1) {
        if (local_48 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_GameObject__SetActive(local_48,false,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
      __this_01 = (__this->fields)._colliders;
      if (__this_01 != (System_Collections_Generic_List_Collider__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
                   (System_Collections_Generic_List_object__o *)__this_01,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
        local_68 = local_80;
        local_78 = (undefined1  [8])local_90._0_8_;
        pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_90._8_8_;
        local_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_90._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_78;
        while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext),
              bVar1) {
          if (local_68 == (UnityEngine_Collider_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Collider__set_enabled(local_68,false,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
        __this_02 = (__this->fields)._fadeTrails;
        if (__this_02 != (System_Collections_Generic_List_ParticleSystem__o *)0x0) {
          System_Collections_Generic_List_object___GetEnumerator
                    (&local_38,(System_Collections_Generic_List_object__o *)__this_02,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_ParticleSystem_GetEnumerator);
          local_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_90._8_8_ = &local_38;
          while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
                                    (MethodInfo_4C45C50 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_MoveNext
                                   ), bVar1) {
            Projectiles_BaseProjectile__SetDisabledTrailFade
                      (__this,(UnityEngine_ParticleSystem_o *)local_38.fields._current,method_00);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&local_38,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_ParticleSystem_Dispose);
          __this_04 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this,
                                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Rigidbody
                                );
          if (Il2CppMethodInitialized_0753e4b6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b6 = '\x01';
          }
          if (__this_04 != (UnityEngine_Rigidbody_o *)0x0) {
            UnityEngine_Rigidbody__set_linearVelocity
                      (__this_04,
                       (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            x = (UnityEngine_Object_o *)(__this->fields)._force;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
              __this_03 = (__this->fields)._force;
              if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_0753e4b6 = '\x01';
              }
              if (__this_03 == (UnityEngine_ConstantForce_o *)0x0) goto label_0586fc30;
              UnityEngine_ConstantForce__set_force
                        (__this_03,
                         (UnityEngine_Vector3_o)
                         (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0);
            }
            (__this->fields).Disabled = true;
            return;
          }
        }
      }
    }
  }
label_0586fc30:
  ThrowNullReferenceException();
}


// Projectiles.BaseProjectile$$SetDisabledTrailFade
// il2cpp: void Projectiles_BaseProjectile__SetDisabledTrailFade (Projectiles_BaseProjectile_o* __this, UnityEngine_ParticleSystem_o* particleSystem, const MethodInfo* method);
// 0x586fd40

void Projectiles_BaseProjectile__SetDisabledTrailFade
               (Projectiles_BaseProjectile_o *__this,UnityEngine_ParticleSystem_o *particleSystem,
               MethodInfo *method)

{
  uint32_t length;
  UnityEngine_ParticleSystem_Particle_array *particles;
  UnityEngine_ParticleSystem_Particle_o *__this_00;
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_0754516a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_ParticleSystem_Particle_array);
    Il2CppMethodInitialized_0754516a = '\x01';
  }
  if (particleSystem == (UnityEngine_ParticleSystem_o *)0x0) {
label_0586fe97:
    ThrowNullReferenceException();
  }
  length = UnityEngine_ParticleSystem__get_particleCount(particleSystem,(MethodInfo *)0x0);
  fVar2 = UnityEngine_ParticleSystem__get_startLifetime(particleSystem,(MethodInfo *)0x0);
  fVar3 = (*(__this->klass->vtable)._10_get_TrailFadeMultiplier.methodPtr)
                    (__this,(__this->klass->vtable)._10_get_TrailFadeMultiplier.method);
  particles = (UnityEngine_ParticleSystem_Particle_array *)
              SZArrayNew(TypeInfo_UnityEngine_ParticleSystem_Particle_array,length);
  UnityEngine_ParticleSystem__GetParticles_69c2560(particleSystem,particles,(MethodInfo *)0x0);
  if (0 < (int)length) {
    if (particles == (UnityEngine_ParticleSystem_Particle_array *)0x0) goto label_0586fe97;
    __this_00 = particles->m_Items;
    uVar1 = 0;
    do {
      if ((uint)particles->max_length <= uVar1) {
label_0586fe92:
        ThrowIndexOutOfRangeException();
      }
      fVar4 = UnityEngine_ParticleSystem_Particle__get_remainingLifetime(__this_00,(MethodInfo *)0x0);
      fVar5 = (*(__this->klass->vtable)._10_get_TrailFadeMultiplier.methodPtr)
                        (__this,(__this->klass->vtable)._10_get_TrailFadeMultiplier.method);
      UnityEngine_ParticleSystem_Particle__set_remainingLifetime(__this_00,fVar5 * fVar4,(MethodInfo *)0x0);
      if ((uint)particles->max_length <= uVar1) goto label_0586fe92;
      UnityEngine_ParticleSystem_Particle__set_startLifetime(__this_00,fVar2 * fVar3,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      __this_00 = __this_00 + 1;
    } while (length != uVar1);
  }
  UnityEngine_ParticleSystem__SetParticles_69c2330(particleSystem,particles,length,(MethodInfo *)0x0);
  return;
}


// Projectiles.BaseProjectile$$.ctor
// il2cpp: void Projectiles_BaseProjectile___ctor (Projectiles_BaseProjectile_o* __this, const MethodInfo* method);
// 0x586fea0

void Projectiles_BaseProjectile___ctor(Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  
  if (Il2CppMethodInitialized_0754516b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_0754516b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._hideObjects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hideObjects);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Collider_ctor);
  (__this->fields)._colliders = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._colliders);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_ParticleSystem_ctor);
  (__this->fields)._fadeTrails = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


