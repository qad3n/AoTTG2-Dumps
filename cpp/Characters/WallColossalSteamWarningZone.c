// Type: Characters.WallColossalSteamWarningZone
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/WallColossalSteamWarningZone.cs
// Prior real C# source: none
// --------------------------------

// Characters.WallColossalSteamWarningZone.<>c$$.cctor
// il2cpp: void Characters_WallColossalSteamWarningZone___c___cctor (const MethodInfo* method);
// 0x5c25140

void Characters_WallColossalSteamWarningZone___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547766 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalSteamWarningZone_c);
    Il2CppMethodInitialized_07547766 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9 =
       (Characters_WallColossalSteamWarningZone___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c$$.ctor
// il2cpp: void Characters_WallColossalSteamWarningZone___c___ctor (Characters_WallColossalSteamWarningZone___c_o* __this, const MethodInfo* method);
// 0x5c251b0

void Characters_WallColossalSteamWarningZone___c___ctor
               (Characters_WallColossalSteamWarningZone___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c$$<Update>b__16_0
// il2cpp: bool Characters_WallColossalSteamWarningZone___c___Update_b__16_0 (Characters_WallColossalSteamWarningZone___c_o* __this, Characters_Human_o* h, const MethodInfo* method);
// 0x5c251c0

bool Characters_WallColossalSteamWarningZone___c___Update_b__16_0
               (Characters_WallColossalSteamWarningZone___c_o *__this,Characters_Human_o *h,MethodInfo *method
               )

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547767 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547767 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)h,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    if (h == (Characters_Human_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = (h->fields).Dead != false;
  }
  return bVar2;
}


// Characters.WallColossalSteamWarningZone.<>c$$<Update>b__16_1
// il2cpp: bool Characters_WallColossalSteamWarningZone___c___Update_b__16_1 (Characters_WallColossalSteamWarningZone___c_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x5c25220

bool Characters_WallColossalSteamWarningZone___c___Update_b__16_1
               (Characters_WallColossalSteamWarningZone___c_o *__this,UnityEngine_Rigidbody_o *rb,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547768 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547768 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rb,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Characters.WallColossalSteamWarningZone.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___ctor (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x5c25050

void Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___ctor
               (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c__DisplayClass17_0$$<CheckForProjectiles>b__0
// il2cpp: bool Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___CheckForProjectiles_b__0 (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x5c25270

bool Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___CheckForProjectiles_b__0
               (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o *__this,
               UnityEngine_Rigidbody_o *rb,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547769 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Contains);
    Il2CppMethodInitialized_07547769 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).currentProjectiles;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___Contains
                    (__this_00,(Il2CppObject *)rb,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Contains);
  return !bVar1;
}


// Characters.WallColossalSteamWarningZone$$Initialize
// il2cpp: void Characters_WallColossalSteamWarningZone__Initialize (Characters_WallColossalSteamWarningZone_o* __this, Characters_WallColossalShifter_o* owner, const MethodInfo* method);
// 0x5c21830

void Characters_WallColossalSteamWarningZone__Initialize
               (Characters_WallColossalSteamWarningZone_o *__this,Characters_WallColossalShifter_o *owner,
               MethodInfo *method)

{
  UnityEngine_BoxCollider_o *pUVar1;
  
  if (Il2CppMethodInitialized_0754775d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
    Il2CppMethodInitialized_0754775d = '\x01';
  }
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner);
  pUVar1 = (UnityEngine_BoxCollider_o *)
           UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
  (__this->fields)._boxCollider = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._boxCollider);
  return;
}


// Characters.WallColossalSteamWarningZone$$SetActive
// il2cpp: void Characters_WallColossalSteamWarningZone__SetActive (Characters_WallColossalSteamWarningZone_o* __this, bool active, const MethodInfo* method);
// 0x5c21630
// eh: try 0x5c21714..0x5c217b7 -> pad 0x5c217c4 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c217dc..0x5c217e1 -> pad 0x5c21806 cleanup
// eh: try 0x5c21809..0x5c21813 -> pad 0x5c2181b catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c217bc: jmp 0x5c217c4
// asm:   0x5c217be: jmp 0x5c217c4
// asm:   0x5c217c0: jmp 0x5c217c4
// asm:   0x5c217c2: jmp 0x5c217c4
// asm:   0x5c217c4: mov rbx, rax
// asm:   0x5c217c7: cmp edx, 1
// asm:   0x5c217ca: jne 0x5c21809
// asm:   0x5c217cc: mov rdi, rbx
// asm:   0x5c217cf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c217d4: mov rbx, qword ptr [rax]
// asm:   0x5c217d7: mov qword ptr [rsp + 8], rbx
// asm:   0x5c217dc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c217e1: lea rax, [rip + 0x166c680]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5c217e8: mov rsi, qword ptr [rax]
// asm:   0x5c217eb: lea rdi, [rsp + 0x20]
// asm:   0x5c217f0: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c217f5: test rbx, rbx
// asm:   0x5c217f8: je 0x5c21774
// asm:   0x5c217fe: mov rdi, rbx
// asm:   0x5c21801: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c21806: mov rbx, rax
// asm:   0x5c21809: lea rdi, [rsp + 8]
// asm:   0x5c2180e: call 0x2fd92b0  ; il2cpp_runtime_helper_02fd92b0()
// asm:   0x5c21813: mov rdi, rbx
// asm:   0x5c21816: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c2181b: mov rdi, rax
// asm:   0x5c2181e: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_WallColossalSteamWarningZone__SetActive
               (Characters_WallColossalSteamWarningZone_o *__this,bool active,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_Human_o *__this_00;
  bool bVar2;
  undefined1 local_60 [16];
  Characters_Human_o *local_50;
  undefined1 local_48 [16];
  Characters_Human_o *local_38;
  
  if (Il2CppMethodInitialized_0754775e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Clear)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754775e = '\x01';
  }
  (__this->fields)._isActive = active;
  if (active) {
    return;
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,pSVar1,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_38 = local_50;
    local_48._0_8_ = local_60._0_8_;
    local_48._8_8_ = local_60._8_8_;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_48;
    while (bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                              (MethodInfo_4C456D0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext),
          __this_00 = local_38, bVar2) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (__this_00 == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((__this_00->fields).Dead == false) {
          Characters_Human__ToggleFire1(__this_00,false,(MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear
                (pSVar1,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_Human_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Clear
                  (pSVar1,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Clear)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalSteamWarningZone$$OnTriggerEnter
// il2cpp: void Characters_WallColossalSteamWarningZone__OnTriggerEnter (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5c23f40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c24010: jmp 0x5c240b9

void Characters_WallColossalSteamWarningZone__OnTriggerEnter
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  int iVar1;
  Characters_WallColossalShifter_o *x;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_01;
  Characters_Human_o *__this_02;
  
  if (Il2CppMethodInitialized_0754775f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_0754775f = '\x01';
  }
  if ((__this->fields)._isActive != false) {
    x = (__this->fields)._owner;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((other == (UnityEngine_Collider_o *)0x0) ||
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_GameObject_o *)0x0)) {
label_05c240c2:
        ThrowNullReferenceException();
      }
      iVar3 = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Human;
      }
      else {
        iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Human;
      }
      if (iVar3 == iVar1) {
        __this_02 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)other,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (__this_02 != (Characters_Human_o *)0x0) {
            if ((__this_02->fields).Dead != false) {
              return;
            }
            bVar2 = (*(__this_02->klass->vtable)._74_IsMine.methodPtr)
                              (__this_02,(__this_02->klass->vtable)._74_IsMine.method);
            if (!bVar2) {
              return;
            }
            __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
            if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
              System_Collections_Generic_HashSet_object___Add
                        (__this_00,(Il2CppObject *)__this_02,
                         (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Human_Add);
              Characters_Human__ToggleFire1(__this_02,true,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_05c240c2;
        }
      }
    }
  }
  return;
}


// Characters.WallColossalSteamWarningZone$$OnTriggerExit
// il2cpp: void Characters_WallColossalSteamWarningZone__OnTriggerExit (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x5c240d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c241a1: jmp 0x5c24264

void Characters_WallColossalSteamWarningZone__OnTriggerExit
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  int iVar1;
  Characters_WallColossalShifter_o *x;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_GameObject_o *__this_00;
  Characters_Human_o *__this_01;
  
  if (Il2CppMethodInitialized_07547760 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_07547760 = '\x01';
  }
  x = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((other == (UnityEngine_Collider_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_05c2426d;
    iVar4 = UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Human;
    }
    else {
      iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Human;
    }
    if (iVar4 == iVar1) {
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)other,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_05c2426d:
          ThrowNullReferenceException();
        }
        bVar3 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar2,(Il2CppObject *)__this_01,
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_Human_Contains)
        ;
        if (bVar3) {
          pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
          if ((pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) ||
             (System_Collections_Generic_HashSet_object___Remove
                        (pSVar2,(Il2CppObject *)__this_01,
                         (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_Human_Remove),
             __this_01 == (Characters_Human_o *)0x0)) goto label_05c2426d;
          if (((__this_01->fields).Dead == false) &&
             (bVar3 = (*(__this_01->klass->vtable)._74_IsMine.methodPtr)
                                (__this_01,(__this_01->klass->vtable)._74_IsMine.method), bVar3)) {
            Characters_Human__ToggleFire1(__this_01,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  return;
}


// Characters.WallColossalSteamWarningZone$$OnDestroy
// il2cpp: void Characters_WallColossalSteamWarningZone__OnDestroy (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x5c24280
// eh: try 0x5c24354..0x5c2440e -> pad 0x5c2441d (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c24435..0x5c2443a -> pad 0x5c2445f cleanup
// eh: try 0x5c24462..0x5c2446c -> pad 0x5c24474 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c24413: jmp 0x5c2441d
// asm:   0x5c24415: jmp 0x5c2441d
// asm:   0x5c24417: jmp 0x5c2441d
// asm:   0x5c24419: jmp 0x5c2441d
// asm:   0x5c2441b: jmp 0x5c2441d
// asm:   0x5c2441d: mov rbx, rax
// asm:   0x5c24420: cmp edx, 1
// asm:   0x5c24423: jne 0x5c24462
// asm:   0x5c24425: mov rdi, rbx
// asm:   0x5c24428: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c2442d: mov rbx, qword ptr [rax]
// asm:   0x5c24430: mov qword ptr [rsp + 8], rbx
// asm:   0x5c24435: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c2443a: lea rax, [rip + 0x1669a27]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5c24441: mov rsi, qword ptr [rax]
// asm:   0x5c24444: lea rdi, [rsp + 0x20]
// asm:   0x5c24449: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c2444e: test rbx, rbx
// asm:   0x5c24451: je 0x5c243cb
// asm:   0x5c24457: mov rdi, rbx
// asm:   0x5c2445a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c2445f: mov rbx, rax
// asm:   0x5c24462: lea rdi, [rsp + 8]
// asm:   0x5c24467: call 0x2fd92e0  ; il2cpp_runtime_helper_02fd92e0()
// asm:   0x5c2446c: mov rdi, rbx
// asm:   0x5c2446f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c24474: mov rdi, rax
// asm:   0x5c24477: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_WallColossalSteamWarningZone__OnDestroy
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Characters_Human_o *__this_00;
  bool bVar2;
  undefined1 local_60 [16];
  Characters_Human_o *local_50;
  undefined1 local_48 [16];
  Characters_Human_o *local_38;
  
  if (Il2CppMethodInitialized_07547761 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Clear)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547761 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,pSVar1,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_38 = local_50;
    local_48._0_8_ = local_60._0_8_;
    local_48._8_8_ = local_60._8_8_;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_48;
    while( true ) {
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
      __this_00 = local_38;
      if (!bVar2) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (__this_00 == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((__this_00->fields).Dead == false) {
          bVar2 = (*(__this_00->klass->vtable)._74_IsMine.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._74_IsMine.method);
          if (bVar2) {
            Characters_Human__ToggleFire1(__this_00,false,(MethodInfo *)0x0);
          }
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear
                (pSVar1,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_Human_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Clear
                  (pSVar1,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Clear)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalSteamWarningZone$$Update
// il2cpp: void Characters_WallColossalSteamWarningZone__Update (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x5c24480
// eh: try 0x5c247f4..0x5c24851 -> pad 0x5c2485b (+5 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5c24873..0x5c24878 -> pad 0x5c2489c cleanup
// eh: try 0x5c2489f..0x5c248a9 -> pad 0x5c248b1 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c2456d: test r15, r15
// asm:   0x5c24576: jmp 0x5c24847
// asm:   0x5c24633: test r15, r15
// asm:   0x5c24636: jne 0x5c246c3
// asm:   0x5c2463c: jmp 0x5c24847
// asm:   0x5c24851: jmp 0x5c2485b
// asm:   0x5c24853: jmp 0x5c2485b
// asm:   0x5c24855: jmp 0x5c2485b
// asm:   0x5c24857: jmp 0x5c2485b
// asm:   0x5c24859: jmp 0x5c2485b
// asm:   0x5c2485b: mov rbx, rax
// asm:   0x5c2485e: cmp edx, 1
// asm:   0x5c24861: jne 0x5c2489f
// asm:   0x5c24863: mov rdi, rbx
// asm:   0x5c24866: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c2486b: mov rax, qword ptr [rax]
// asm:   0x5c2486e: mov qword ptr [rsp + 0x10], rax
// asm:   0x5c24873: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c2489c: mov rbx, rax
// asm:   0x5c2489f: lea rdi, [rsp + 0x10]
// asm:   0x5c248a4: call 0x2fd9310  ; il2cpp_runtime_helper_02fd9310()
// asm:   0x5c248a9: mov rdi, rbx
// asm:   0x5c248ac: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c248b1: mov rdi, rax
// asm:   0x5c248b4: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_WallColossalSteamWarningZone__Update
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Il2CppObject *pIVar2;
  Characters_WallColossalShifter_o *x;
  UnityEngine_Object_o *x_00;
  bool bVar3;
  Characters_WallColossalSteamWarningZone___c_StaticFields *pCVar4;
  System_Predicate_T__o *pSVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar6;
  float fVar7;
  undefined8 local_58;
  System_Collections_Generic_HashSet_Enumerator_T__o *local_50;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_07547762 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Rigidbody_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Rigidbody_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Rigidbody_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Human);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_WallColossalSteamWarningZone_c_Update_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_WallColossalSteamWarningZone_c_Update_b__16_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalSteamWarningZone_c);
    Il2CppMethodInitialized_07547762 = '\x01';
  }
  local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
  if ((TypeInfo_Characters_WallColossalSteamWarningZone_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c);
    pCVar4 = TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields;
    pSVar5 = (System_Predicate_T__o *)pCVar4->__9__16_0;
  }
  else {
    pCVar4 = TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields;
    pSVar5 = (System_Predicate_T__o *)pCVar4->__9__16_0;
  }
  if (pSVar5 == (System_Predicate_T__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c);
      pCVar4 = TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields;
    }
    pIVar2 = (Il2CppObject *)pCVar4->__9;
    pSVar5 = (System_Predicate_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Human);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)pSVar5,pIVar2,
               (intptr_t)MethodInfo_Characters_WallColossalSteamWarningZone_c_Update_b__16_0,
               (MethodInfo_3DC95B0 *)0x0);
    pCVar4 = TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields;
    pCVar4->__9__16_0 = (System_Predicate_Human__o *)pSVar5;
    Il2CppCodeGenWriteBarrier(&pCVar4->__9__16_0);
  }
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              (pSVar1,pSVar5,
               (MethodInfo_4FB6160 *)MethodInfo_System_Collections_Generic_HashSet_Human_RemoveWhere);
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
    if ((TypeInfo_Characters_WallColossalSteamWarningZone_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c);
      pCVar4 = TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields;
      pSVar5 = (System_Predicate_T__o *)pCVar4->__9__16_1;
    }
    else {
      pCVar4 = TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields;
      pSVar5 = (System_Predicate_T__o *)pCVar4->__9__16_1;
    }
    if (pSVar5 == (System_Predicate_T__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c)->_2).cctor_finished_or_no_cctor
          == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c);
        pCVar4 = TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields;
      }
      pIVar2 = (Il2CppObject *)pCVar4->__9;
      pSVar5 = (System_Predicate_T__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Rigidbody);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)pSVar5,pIVar2,
                 (intptr_t)MethodInfo_Characters_WallColossalSteamWarningZone_c_Update_b__16_1,
                 (MethodInfo_3DC95B0 *)0x0);
      pCVar4 = TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields;
      pCVar4->__9__16_1 = (System_Predicate_Rigidbody__o *)pSVar5;
      Il2CppCodeGenWriteBarrier(&pCVar4->__9__16_1);
    }
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___RemoveWhere
                (pSVar1,pSVar5,
                 (MethodInfo_4FB6160 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_RemoveWhere);
      if ((__this->fields)._isActive != false) {
        x = (__this->fields)._owner;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          x_00 = (UnityEngine_Object_o *)(__this->fields)._boxCollider;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          method_01 = (MethodInfo *)0x0;
          bVar3 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            fVar7 = (__this->fields)._projectileCheckTimer;
            fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            fVar7 = fVar7 - fVar6;
            (__this->fields)._projectileCheckTimer = fVar7;
            if (fVar7 <= 0.0) {
              Characters_WallColossalSteamWarningZone__CheckForProjectiles(__this,method_01);
              (__this->fields)._projectileCheckTimer = (__this->fields)._projectileCheckInterval;
            }
            fVar7 = (__this->fields)._knockbackTimer;
            fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            fVar7 = fVar7 - fVar6;
            (__this->fields)._knockbackTimer = fVar7;
            if (fVar7 <= 0.0) {
              pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
              if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05c24847;
              System_Collections_Generic_HashSet_object___GetEnumerator
                        (&local_48,pSVar1,
                         (MethodInfo_4FB3DA0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Rigidbody_GetEnumerator);
              local_58 = 0;
              local_50 = &local_48;
              while (bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                       (&local_48,
                                        (MethodInfo_4C456D0 *)
                                        MethodInfo_System_Collections_Generic_HashSet_Enumerator_Rigidbody_MoveNext
                                       ), pIVar2 = local_48.fields._current, bVar3) {
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar3 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pIVar2,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar3) {
                  if ((UnityEngine_Object_o *)pIVar2 == (UnityEngine_Object_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar3 = UnityEngine_Rigidbody__get_isKinematic
                                    ((UnityEngine_Rigidbody_o *)pIVar2,(MethodInfo *)0x0);
                  if (!bVar3) {
                    Characters_WallColossalSteamWarningZone__ApplyKnockback
                              (__this,(UnityEngine_Rigidbody_o *)pIVar2,method_00);
                  }
                }
              }
              il2cpp_runtime_helper_02fd9310(&local_58);
              (__this->fields)._knockbackTimer = (__this->fields).KnockbackInterval;
            }
          }
        }
      }
      return;
    }
  }
label_05c24847:
  ThrowNullReferenceException();
}


// Characters.WallColossalSteamWarningZone$$CheckForProjectiles
// il2cpp: void Characters_WallColossalSteamWarningZone__CheckForProjectiles (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x5c248c0

void Characters_WallColossalSteamWarningZone__CheckForProjectiles
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_BoxCollider_o *pUVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  bool bVar4;
  uint uVar5;
  Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Collider_array *pUVar7;
  System_Collections_Generic_HashSet_Rigidbody__o *__this_01;
  UnityEngine_Object_o *x;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  uint uVar8;
  UnityEngine_Quaternion_o orientation;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o halfExtents;
  float local_98;
  float fStack_94;
  float local_58;
  float fStack_54;
  
  if (Il2CppMethodInitialized_07547763 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Characters_WallColossalSteamWarningZone_c__DisplayClass17_0_CheckForProjectiles_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Characters_WallColossalSteamWarningZone_c__DisplayClass17_0);
    Il2CppMethodInitialized_07547763 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c__DisplayClass17_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._boxCollider;
  if (pUVar2 != (UnityEngine_BoxCollider_o *)0x0) {
    UVar9 = UnityEngine_BoxCollider__get_center(pUVar2,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UVar9 = UnityEngine_Transform__TransformPoint(pUVar6,UVar9,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._boxCollider;
      if (pUVar2 != (UnityEngine_BoxCollider_o *)0x0) {
        UVar10 = UnityEngine_BoxCollider__get_size(pUVar2,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UVar11 = UnityEngine_Transform__get_lossyScale(pUVar6,(MethodInfo *)0x0);
          pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            local_98 = UVar10.fields.x;
            fStack_94 = UVar10.fields.y;
            orientation = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
            if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
            }
            local_58 = UVar11.fields.x;
            fStack_54 = UVar11.fields.y;
            halfExtents.fields.x = local_98 * 0.5 * local_58;
            halfExtents.fields.y = fStack_94 * 0.5 * fStack_54;
            halfExtents.fields.z = UVar10.fields.z * 0.5 * UVar11.fields.z;
            iVar1 = TypeInfo_Utility_PhysicsLayer->static_fields->Projectile;
            if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
            }
            pUVar7 = UnityEngine_Physics__OverlapBox_69dd8d0
                               (UVar9,halfExtents,orientation,1 << ((byte)iVar1 & 0x1f),(MethodInfo *)0x0);
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Rigidbody);
            System_Collections_Generic_HashSet_object____ctor
                      ((System_Collections_Generic_HashSet_object__o *)__this_01,
                       (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_ctor);
            if (__this_00 != (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o *)0x0) {
              (__this_00->fields).currentProjectiles = __this_01;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields).currentProjectiles);
              if (pUVar7 != (UnityEngine_Collider_array *)0x0) {
                uVar5 = (uint)pUVar7->max_length;
                if (0 < (int)uVar5) {
                  uVar8 = 0;
                  do {
                    if (uVar5 <= uVar8) {
                      ThrowIndexOutOfRangeException();
                    }
                    if ((UnityEngine_Component_o *)pUVar7->m_Items[(int)uVar8] ==
                        (UnityEngine_Component_o *)0x0) goto label_05c24ce9;
                    x = (UnityEngine_Object_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar7->m_Items[(int)uVar8],
                                   (MethodInfo_34B0830 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
                    ;
                    if (bVar4) {
                      if (x == (UnityEngine_Object_o *)0x0) goto label_05c24ce9;
                      bVar4 = UnityEngine_Rigidbody__get_isKinematic
                                        ((UnityEngine_Rigidbody_o *)x,(MethodInfo *)0x0);
                      if (!bVar4) {
                        pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                 (__this_00->fields).currentProjectiles;
                        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05c24ce9;
                        System_Collections_Generic_HashSet_object___Add
                                  (pSVar3,(Il2CppObject *)x,
                                   (MethodInfo_4FB4450 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Add);
                        pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                 (__this->fields)._rigidbodiesInZone;
                        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05c24ce9;
                        bVar4 = System_Collections_Generic_HashSet_object___Contains
                                          (pSVar3,(Il2CppObject *)x,
                                           (MethodInfo_4FB3720 *)
                                           MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Contains);
                        if (!bVar4) {
                          pSVar3 = (System_Collections_Generic_HashSet_object__o *)
                                   (__this->fields)._rigidbodiesInZone;
                          if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0)
                          goto label_05c24ce9;
                          System_Collections_Generic_HashSet_object___Add
                                    (pSVar3,(Il2CppObject *)x,
                                     (MethodInfo_4FB4450 *)
                                     MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Add);
                          Characters_WallColossalSteamWarningZone__ApplyKnockback
                                    (__this,(UnityEngine_Rigidbody_o *)x,method_00);
                        }
                      }
                    }
                    uVar8 = uVar8 + 1;
                    uVar5 = (uint)pUVar7->max_length;
                  } while ((int)uVar8 < (int)uVar5);
                }
                pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
                match = (System_Predicate_T__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Rigidbody);
                System_Predicate_object____ctor
                          ((System_Predicate_object__o *)match,(Il2CppObject *)__this_00,
                           (intptr_t)
                           MethodInfo_Characters_WallColossalSteamWarningZone_c__DisplayClass17_0_CheckForProjectiles_b__0
                           ,(MethodInfo_3DC95B0 *)0x0);
                if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  System_Collections_Generic_HashSet_object___RemoveWhere
                            (pSVar3,match,
                             (MethodInfo_4FB6160 *)
                             MethodInfo_System_Collections_Generic_HashSet_Rigidbody_RemoveWhere);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_05c24ce9:
  ThrowNullReferenceException();
}


// Characters.WallColossalSteamWarningZone$$ApplyKnockback
// il2cpp: void Characters_WallColossalSteamWarningZone__ApplyKnockback (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x5c24d00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c24ee4: jmp 0x5c24da0

void Characters_WallColossalSteamWarningZone__ApplyKnockback
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Rigidbody_o *rb,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  Characters_WallColossalShifter_o *pCVar4;
  Characters_WallColossalComponentCache_o *pCVar5;
  UnityEngine_Component_o *__this_00;
  undefined1 auVar6 [16];
  bool bVar7;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_Object_o *x;
  float fVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Db;
  undefined1 auVar11 [16];
  UnityEngine_Vector3_o UVar12;
  float local_6c;
  float local_68;
  float fStack_64;
  undefined1 local_50 [24];
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  
  if (Il2CppMethodInitialized_07547764 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderSpear");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_07547764 = '\x01';
  }
  pCVar4 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  pCVar4 = (__this->fields)._owner;
  if (pCVar4 == (Characters_WallColossalShifter_o *)0x0) goto label_05c25040;
  pCVar5 = (pCVar4->fields).ColossalCache;
  if (pCVar5 == (Characters_WallColossalComponentCache_o *)0x0) {
    x = (UnityEngine_Object_o *)0x0;
    uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    x = (UnityEngine_Object_o *)(pCVar5->fields).NapeHurtbox;
    uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  pCVar4 = (__this->fields)._owner;
  if ((((pCVar4 == (Characters_WallColossalShifter_o *)0x0) ||
       (pCVar5 = (pCVar4->fields).ColossalCache, pCVar5 == (Characters_WallColossalComponentCache_o *)0x0)) ||
      (__this_00 = (UnityEngine_Component_o *)(pCVar5->fields).NapeHurtbox,
      __this_00 == (UnityEngine_Component_o *)0x0)) ||
     (__this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 == (UnityEngine_Transform_o *)0x0)) goto label_05c25040;
  UVar12 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
  fStack_30 = (float)extraout_XMM0_Dc;
  local_38 = UVar12.fields._0_8_;
  fStack_2c = (float)extraout_XMM0_Dd;
  local_50._8_4_ = UVar12.fields.z;
  if (rb == (UnityEngine_Rigidbody_o *)0x0) goto label_05c25040;
  UVar12 = UnityEngine_Rigidbody__get_position(rb,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_50._0_4_ = 0.0;
    local_50._4_4_ = 0.0;
  }
  else {
    local_50._0_4_ = 0.0;
    local_50._4_4_ = 0.0;
  }
  local_50._0_4_ = 0.0;
  local_50._4_4_ = 0.0;
  if (g_data_0753e729 == '\0') {
    local_50._0_4_ = 0.0;
    local_50._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    in_XMM1_Db = 0;
    g_data_0753e729 = '\x01';
  }
  auVar11._0_4_ = UVar12.fields.x - (float)local_38._0_4_;
  auVar11._4_4_ = UVar12.fields.y - (float)local_38._4_4_;
  auVar11._8_4_ = extraout_XMM0_Dc_00 - fStack_30;
  auVar11._12_4_ = extraout_XMM0_Dd_00 - fStack_2c;
  local_6c = UVar12.fields.z - (float)local_50._8_4_;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    in_XMM1_Db = 0;
  }
  fVar10 = local_6c * local_6c + auVar11._4_4_ * auVar11._4_4_ + auVar11._0_4_ * auVar11._0_4_;
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
    in_XMM1_Db = extraout_XMM0_Db;
    if (1e-05 < fVar10) goto label_05c24f0d;
label_05c24eb3:
    pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_6c = (pUVar8->zeroVector).fields.z;
  }
  else {
    fVar10 = SQRT(fVar10);
    if (fVar10 <= 1e-05) goto label_05c24eb3;
label_05c24f0d:
    local_6c = local_6c / fVar10;
    auVar6._4_4_ = fVar10;
    auVar6._0_4_ = fVar10;
    auVar6._8_4_ = in_XMM1_Db;
    auVar6._12_4_ = in_XMM1_Db;
    auVar11 = divps(auVar11,auVar6);
    local_50._0_4_ = auVar11._0_4_;
    local_50._4_4_ = auVar11._4_4_;
    pUVar8 = (UnityEngine_Vector3_StaticFields *)local_50;
  }
  uVar1 = (pUVar8->zeroVector).fields.x;
  uVar2 = (pUVar8->zeroVector).fields.y;
  local_50._8_16_ = ZEXT416((uint)(__this->fields).KnockbackForce);
  pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)rb,(MethodInfo *)0x0);
  if (pSVar9 == (System_String_o *)0x0) {
label_05c25040:
    ThrowNullReferenceException();
  }
  bVar7 = System_String__Contains(pSVar9,"Thunderspear",(MethodInfo *)0x0);
  if (!bVar7) {
    pSVar9 = UnityEngine_Object__get_name((UnityEngine_Object_o *)rb,(MethodInfo *)0x0);
    if (pSVar9 == (System_String_o *)0x0) goto label_05c25040;
    bVar7 = System_String__Contains(pSVar9,"ThunderSpear",(MethodInfo *)0x0);
    if (!bVar7) {
      fVar10 = (float)local_50._8_4_;
      goto label_05c25010;
    }
  }
  fVar10 = (float)local_50._8_4_ * (__this->fields).ThunderspearKnockbackMultiplier;
label_05c25010:
  UVar12.fields.z = local_6c * fVar10;
  UVar12.fields.x = (float)uVar1 * fVar10;
  UVar12.fields.y = (float)uVar2 * fVar10;
  UnityEngine_Rigidbody__AddForce(rb,UVar12,1,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone$$.ctor
// il2cpp: void Characters_WallColossalSteamWarningZone___ctor (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x5c25060

void Characters_WallColossalSteamWarningZone___ctor
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Human__o *__this_00;
  System_Collections_Generic_HashSet_Rigidbody__o *__this_01;
  
  if (Il2CppMethodInitialized_07547765 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Rigidbody);
    Il2CppMethodInitialized_07547765 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Human);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_ctor);
  (__this->fields)._humansInZone = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._humansInZone);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Rigidbody);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_ctor);
  (__this->fields)._rigidbodiesInZone = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rigidbodiesInZone);
  (__this->fields).KnockbackForce = 100.0;
  (__this->fields).ThunderspearKnockbackMultiplier = 5.0;
  (__this->fields).KnockbackInterval = 0.1;
  (__this->fields)._projectileCheckInterval = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


