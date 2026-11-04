// Type: Characters.WallColossalSteamWarningZone
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/WallColossalSteamWarningZone.cs
// Prior real C# source: none
// --------------------------------

// Characters.WallColossalSteamWarningZone.<>c$$.cctor
// il2cpp: void Characters_WallColossalSteamWarningZone___c___cctor (const MethodInfo* method);
// 0x182192f80

void Characters_WallColossalSteamWarningZone___c___cctor(MethodInfo *method)

{
  Characters_WallColossalSteamWarningZone___c_o *__this;
  
  if (Il2CppMethodInitialized_184346d94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalSteamWarningZone_c);
    Il2CppMethodInitialized_184346d94 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9,__this);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c$$.ctor
// il2cpp: void Characters_WallColossalSteamWarningZone___c___ctor (Characters_WallColossalSteamWarningZone___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Characters_WallColossalSteamWarningZone___c___ctor(Characters_WallColossalSteamWarningZone___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c$$<Update>b__16_0
// il2cpp: bool Characters_WallColossalSteamWarningZone___c___Update_b__16_0 (Characters_WallColossalSteamWarningZone___c_o* __this, Characters_Human_o* h, const MethodInfo* method);
// 0x182192e60

bool Characters_WallColossalSteamWarningZone___c___Update_b__16_0
               (Characters_WallColossalSteamWarningZone___c_o *__this,Characters_Human_o *h,MethodInfo *method
               )

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346d95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346d95 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)h,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if (h != (Characters_Human_o *)0x0) {
    return (h->fields).Dead;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalSteamWarningZone.<>c$$<Update>b__16_1
// il2cpp: bool Characters_WallColossalSteamWarningZone___c___Update_b__16_1 (Characters_WallColossalSteamWarningZone___c_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x182192ed0

bool Characters_WallColossalSteamWarningZone___c___Update_b__16_1
               (Characters_WallColossalSteamWarningZone___c_o *__this,UnityEngine_Rigidbody_o *rb,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346d96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346d96 = '\x01';
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
// 0x18054c890

void
Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___ctor(Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone.<>c__DisplayClass17_0$$<CheckForProjectiles>b__0
// il2cpp: bool Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___CheckForProjectiles_b__0 (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x182192f20

bool Characters_WallColossalSteamWarningZone___c__DisplayClass17_0___CheckForProjectiles_b__0
               (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o *__this,
               UnityEngine_Rigidbody_o *rb,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346d97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Contains);
    Il2CppMethodInitialized_184346d97 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).currentProjectiles;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)rb,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Contains)
    ;
    return !bVar1;
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalSteamWarningZone$$Initialize
// il2cpp: void Characters_WallColossalSteamWarningZone__Initialize (Characters_WallColossalSteamWarningZone_o* __this, Characters_WallColossalShifter_o* owner, const MethodInfo* method);
// 0x18219a8d0

void Characters_WallColossalSteamWarningZone__Initialize
               (Characters_WallColossalSteamWarningZone_o *__this,Characters_WallColossalShifter_o *owner,
               MethodInfo *method)

{
  UnityEngine_BoxCollider_o *value;
  
  if (Il2CppMethodInitialized_184346d8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
    Il2CppMethodInitialized_184346d8b = '\x01';
  }
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BoxCollider);
  (__this->fields)._boxCollider = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._boxCollider,value);
  return;
}


// Characters.WallColossalSteamWarningZone$$SetActive
// il2cpp: void Characters_WallColossalSteamWarningZone__SetActive (Characters_WallColossalSteamWarningZone_o* __this, bool active, const MethodInfo* method);
// 0x18219ae30
// eh: try 0x18219af10..0x18219afe8 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219af0f: nop 
// asm:   0x18219af7f: mov rdx, qword ptr [rip + 0x1ee6fa2]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x18219af86: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18219af8b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18219af90: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18219af95: test rcx, rcx
// asm:   0x18219af98: jne 0x18219afe8
// asm:   0x18219af9a: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x18219afe8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_WallColossalSteamWarningZone__SetActive
               (Characters_WallColossalSteamWarningZone_o *__this,bool active,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar1;
  Characters_Human_o *__this_01;
  bool bVar2;
  undefined1 local_40 [16];
  Characters_Human_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Characters_Human_o *local_18;
  
  if (Il2CppMethodInitialized_184346d8c == '\0') {
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
    Il2CppMethodInitialized_184346d8c = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Characters_Human_o *)0x0;
  (__this->fields)._isActive = active;
  if (active) {
    return;
  }
  __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields)._humansInZone;
  if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while (bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_28,
                              (MethodInfo_15381F0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext),
          __this_01 = local_18, bVar2) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (__this_01 == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((__this_01->fields).Dead == false) {
          Characters_Human__ToggleFire1(__this_01,false,(MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._humansInZone;
    if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_Human_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._rigidbodiesInZone;
      if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                  (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Clear)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalSteamWarningZone$$OnTriggerEnter
// il2cpp: void Characters_WallColossalSteamWarningZone__OnTriggerEnter (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x18219ab10

void Characters_WallColossalSteamWarningZone__OnTriggerEnter
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *x;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  int32_t iVar2;
  UnityEngine_GameObject_o *__this_01;
  Characters_Human_o *__this_02;
  
  if (Il2CppMethodInitialized_184346d8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_184346d8d = '\x01';
  }
  if ((__this->fields)._isActive != false) {
    x = (__this->fields)._owner;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((other != (UnityEngine_Collider_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        iVar2 = UnityEngine_GameObject__get_layer(__this_01,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        }
        if (iVar2 != TypeInfo_Utility_PhysicsLayer->static_fields->Human) {
          return;
        }
        __this_02 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)other,
                               (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if (__this_02 != (Characters_Human_o *)0x0) {
          if ((__this_02->fields).Dead != false) {
            return;
          }
          bVar1 = (*(__this_02->klass->vtable)._74_IsMine.methodPtr)
                            (__this_02,(__this_02->klass->vtable)._74_IsMine.method);
          if (!bVar1) {
            return;
          }
          __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
          if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet_object___Add
                      (__this_00,(Il2CppObject *)__this_02,
                       (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Human_Add);
            Characters_Human__ToggleFire1(__this_02,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.WallColossalSteamWarningZone$$OnTriggerExit
// il2cpp: void Characters_WallColossalSteamWarningZone__OnTriggerExit (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x18219ac90

void Characters_WallColossalSteamWarningZone__OnTriggerExit
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Collider_o *other,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *x;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_00;
  Characters_Human_o *__this_01;
  
  if (Il2CppMethodInitialized_184346d8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_184346d8e = '\x01';
  }
  x = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((other != (UnityEngine_Collider_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    iVar3 = UnityEngine_GameObject__get_layer(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    if (iVar3 == TypeInfo_Utility_PhysicsLayer->static_fields->Human) {
      __this_01 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)other,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Human);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          bVar2 = System_Collections_Generic_HashSet_object___Contains
                            (pSVar1,(Il2CppObject *)__this_01,
                             (MethodInfo_1759E40 *)
                             MethodInfo_System_Collections_Generic_HashSet_Human_Contains);
          if (!bVar2) {
            return;
          }
          pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
          if ((pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
             (System_Collections_Generic_HashSet_object___Remove
                        (pSVar1,(Il2CppObject *)__this_01,
                         (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_Human_Remove),
             __this_01 != (Characters_Human_o *)0x0)) {
            if ((__this_01->fields).Dead != false) {
              return;
            }
            bVar2 = (*(__this_01->klass->vtable)._74_IsMine.methodPtr)
                              (__this_01,(__this_01->klass->vtable)._74_IsMine.method);
            if (!bVar2) {
              return;
            }
            Characters_Human__ToggleFire1(__this_01,false,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_18219ae1e;
      }
    }
    return;
  }
label_18219ae1e:
  ThrowNullReferenceException();
}


// Characters.WallColossalSteamWarningZone$$OnDestroy
// il2cpp: void Characters_WallColossalSteamWarningZone__OnDestroy (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x18219a940
// eh: try 0x18219aa11..0x18219ab00 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219aa97: mov rdx, qword ptr [rip + 0x1ee748a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x18219aa9e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18219aaa3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18219aaa8: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18219aaad: test rcx, rcx
// asm:   0x18219aab0: jne 0x18219ab00
// asm:   0x18219aab2: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x18219ab00: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_WallColossalSteamWarningZone__OnDestroy
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar1;
  Characters_Human_o *__this_01;
  bool bVar2;
  undefined1 local_40 [16];
  Characters_Human_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Characters_Human_o *local_18;
  
  if (Il2CppMethodInitialized_184346d8f == '\0') {
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
    Il2CppMethodInitialized_184346d8f = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Characters_Human_o *)0x0;
  __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields)._humansInZone;
  if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_28,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
      __this_01 = local_18;
      if (!bVar2) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (__this_01 == (Characters_Human_o *)0x0) {
          ThrowNullReferenceException();
        }
        if ((__this_01->fields).Dead == false) {
          bVar2 = (*(__this_01->klass->vtable)._74_IsMine.methodPtr)
                            (__this_01,(__this_01->klass->vtable)._74_IsMine.method);
          if (bVar2) {
            Characters_Human__ToggleFire1(__this_01,false,(MethodInfo *)0x0);
          }
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._humansInZone;
    if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_Human_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._rigidbodiesInZone;
      if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                  (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Clear)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.WallColossalSteamWarningZone$$Update
// il2cpp: void Characters_WallColossalSteamWarningZone__Update (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x18219aff0
// eh: try 0x18219b340..0x18219b400 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219b3b4: mov rdx, qword ptr [rip + 0x1ef9105]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Rigidbody_Dispose
// asm:   0x18219b3bb: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18219b3c0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18219b3c5: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18219b3ca: test rcx, rcx
// asm:   0x18219b3cd: jne 0x18219b400
// asm:   0x18219b3cf: mov rdi, qword ptr [rsp + 0xb0]
// asm:   0x18219b400: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_WallColossalSteamWarningZone__Update
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  Il2CppObject *pIVar3;
  Characters_WallColossalShifter_o *x;
  UnityEngine_Object_o *x_00;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  bool bVar4;
  System_Predicate_T__o *pSVar5;
  float fVar6;
  undefined1 local_80 [16];
  UnityEngine_Object_o *local_70;
  System_Collections_Generic_HashSet_Enumerator_T__o local_68 [3];
  
  if (Il2CppMethodInitialized_184346d90 == '\0') {
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
    Il2CppMethodInitialized_184346d90 = '\x01';
  }
  local_68[0].fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_68[0].fields._index = 0;
  local_68[0].fields._version = 0;
  local_68[0].fields._current = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._humansInZone;
  if ((TypeInfo_Characters_WallColossalSteamWarningZone_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c);
  }
  pSVar5 = (System_Predicate_T__o *)
           TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9__16_0;
  if (pSVar5 == (System_Predicate_T__o *)0x0) {
    if ((TypeInfo_Characters_WallColossalSteamWarningZone_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c);
    }
    pIVar3 = (Il2CppObject *)TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9;
    pSVar5 = (System_Predicate_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Human);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)pSVar5,pIVar3,
               (intptr_t)MethodInfo_Characters_WallColossalSteamWarningZone_c_Update_b__16_0,
               (MethodInfo_B61EB0 *)0x0);
    TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9__16_0 =
         (System_Predicate_Human__o *)pSVar5;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9__16_0,pSVar5);
  }
  if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              (pSVar2,pSVar5,
               (MethodInfo_1766120 *)MethodInfo_System_Collections_Generic_HashSet_Human_RemoveWhere);
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
    if ((TypeInfo_Characters_WallColossalSteamWarningZone_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c);
    }
    pSVar5 = (System_Predicate_T__o *)
             TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9__16_1;
    if (pSVar5 == (System_Predicate_T__o *)0x0) {
      if ((TypeInfo_Characters_WallColossalSteamWarningZone_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c);
      }
      pIVar3 = (Il2CppObject *)TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9;
      pSVar5 = (System_Predicate_T__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Rigidbody);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)pSVar5,pIVar3,
                 (intptr_t)MethodInfo_Characters_WallColossalSteamWarningZone_c_Update_b__16_1,
                 (MethodInfo_B61EB0 *)0x0);
      TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9__16_1 =
           (System_Predicate_Rigidbody__o *)pSVar5;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Characters_WallColossalSteamWarningZone_c->static_fields->__9__16_1,pSVar5);
    }
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___RemoveWhere
                (pSVar2,pSVar5,
                 (MethodInfo_1766120 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_RemoveWhere);
      if ((__this->fields)._isActive != false) {
        x = (__this->fields)._owner;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          x_00 = (UnityEngine_Object_o *)(__this->fields)._boxCollider;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            fVar1 = (__this->fields)._projectileCheckTimer;
            fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            (__this->fields)._projectileCheckTimer = fVar1 - fVar6;
            if (fVar1 - fVar6 <= 0.0) {
              Characters_WallColossalSteamWarningZone__CheckForProjectiles(__this,(MethodInfo *)0x0);
              (__this->fields)._projectileCheckTimer = (__this->fields)._projectileCheckInterval;
            }
            fVar1 = (__this->fields)._knockbackTimer;
            fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            (__this->fields)._knockbackTimer = fVar1 - fVar6;
            if (fVar1 - fVar6 <= 0.0) {
              __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)
                          (__this->fields)._rigidbodiesInZone;
              if (__this_00 == (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) goto label_18219b3f4;
              System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_80,__this_00,
                         (MethodInfo_175C200 *)
                         MethodInfo_System_Collections_Generic_HashSet_Rigidbody_GetEnumerator);
              local_68[0].fields._set = (System_Collections_Generic_HashSet_T__o *)local_80._0_8_;
              local_68[0].fields._index = local_80._8_4_;
              local_68[0].fields._version = local_80._12_4_;
              local_68[0].fields._current = (Il2CppObject *)local_70;
              local_80._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
              local_80._8_8_ = local_68;
              while( true ) {
                bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                  (local_68,(MethodInfo_15381F0 *)
                                            MethodInfo_System_Collections_Generic_HashSet_Enumerator_Rigidbody_MoveNext
                                  );
                pIVar3 = local_68[0].fields._current;
                if (!bVar4) break;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar4 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pIVar3,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar4) {
                  if ((UnityEngine_Object_o *)pIVar3 == (UnityEngine_Object_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar4 = UnityEngine_Rigidbody__get_isKinematic
                                    ((UnityEngine_Rigidbody_o *)pIVar3,(MethodInfo *)0x0);
                  if (!bVar4) {
                    Characters_WallColossalSteamWarningZone__ApplyKnockback
                              (__this,(UnityEngine_Rigidbody_o *)pIVar3,(MethodInfo *)0x0);
                  }
                }
              }
              System_Collections_Generic_HashSet_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68,
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Rigidbody_Dispose);
              (__this->fields)._knockbackTimer = (__this->fields).KnockbackInterval;
            }
          }
        }
      }
      return;
    }
  }
label_18219b3f4:
  ThrowNullReferenceException();
}


// Characters.WallColossalSteamWarningZone$$CheckForProjectiles
// il2cpp: void Characters_WallColossalSteamWarningZone__CheckForProjectiles (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x18219a480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18219a74e: nop 

void Characters_WallColossalSteamWarningZone__CheckForProjectiles
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  int32_t iVar9;
  UnityEngine_BoxCollider_o *pUVar10;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o *object;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Vector3_o *pUVar16;
  UnityEngine_Quaternion_o *pUVar17;
  UnityEngine_Collider_array *pUVar18;
  System_Collections_Generic_HashSet_Rigidbody__o *__this_00;
  UnityEngine_Object_o *x;
  System_Predicate_T__o *match;
  uint uVar19;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Quaternion_Fields local_68 [6];
  
  if (Il2CppMethodInitialized_184346d91 == '\0') {
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
    Il2CppMethodInitialized_184346d91 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Characters_WallColossalSteamWarningZone_c__DisplayClass17_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar10 = (__this->fields)._boxCollider;
  if (pUVar10 != (UnityEngine_BoxCollider_o *)0x0) {
    pUVar16 = UnityEngine_BoxCollider__get_center
                        ((UnityEngine_Vector3_o *)&local_78,pUVar10,(MethodInfo *)0x0);
    if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
      local_88.x = (pUVar16->fields).x;
      local_88.y = (pUVar16->fields).y;
      local_88.z = (pUVar16->fields).z;
      pUVar16 = UnityEngine_Transform__TransformPoint
                          ((UnityEngine_Vector3_o *)&local_78,pUVar15,(UnityEngine_Vector3_o *)&local_88,
                           (MethodInfo *)0x0);
      pUVar10 = (__this->fields)._boxCollider;
      if (pUVar10 != (UnityEngine_BoxCollider_o *)0x0) {
        uVar5._0_4_ = (pUVar16->fields).x;
        uVar5._4_4_ = (pUVar16->fields).y;
        fVar8 = (pUVar16->fields).z;
        pUVar16 = UnityEngine_BoxCollider__get_size
                            ((UnityEngine_Vector3_o *)&local_78,pUVar10,(MethodInfo *)0x0);
        uVar3 = (pUVar16->fields).x;
        uVar6 = (pUVar16->fields).y;
        fVar1 = (pUVar16->fields).z;
        pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          pUVar16 = UnityEngine_Transform__get_lossyScale
                              ((UnityEngine_Vector3_o *)&local_78,pUVar15,(MethodInfo *)0x0);
          uVar4 = (pUVar16->fields).x;
          uVar7 = (pUVar16->fields).y;
          fVar2 = (pUVar16->fields).z;
          pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
            pUVar17 = UnityEngine_Transform__get_rotation
                                ((UnityEngine_Quaternion_o *)local_68,pUVar15,(MethodInfo *)0x0);
            uVar12._0_4_ = (pUVar17->fields).x;
            uVar12._4_4_ = (pUVar17->fields).y;
            uVar13._0_4_ = (pUVar17->fields).z;
            uVar13._4_4_ = (pUVar17->fields).w;
            if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
            }
            iVar9 = TypeInfo_Utility_PhysicsLayer->static_fields->Projectile;
            if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
            }
            local_88.y = (float)uVar7 * (float)uVar6 * 0.5;
            local_88.x = (float)uVar4 * (float)uVar3 * 0.5;
            local_88.z = fVar2 * fVar1 * 0.5;
            local_78._0_8_ = uVar5;
            local_78.z = fVar8;
            local_68[0]._0_8_ = uVar12;
            local_68[0]._8_8_ = uVar13;
            pUVar18 = UnityEngine_Physics__OverlapBox_2fe3560
                                ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_Vector3_o *)&local_88,
                                 (UnityEngine_Quaternion_o *)local_68,1 << ((byte)iVar9 & 0x1f),
                                 (MethodInfo *)0x0);
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Rigidbody);
            System_Collections_Generic_HashSet_object____ctor
                      ((System_Collections_Generic_HashSet_object__o *)__this_00,
                       (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_ctor);
            if (object != (Characters_WallColossalSteamWarningZone___c__DisplayClass17_0_o *)0x0) {
              (object->fields).currentProjectiles = __this_00;
              Il2CppCodeGenWriteBarrier(&(object->fields).currentProjectiles,__this_00);
              if (pUVar18 != (UnityEngine_Collider_array *)0x0) {
                for (uVar19 = 0; (int)uVar19 < (int)pUVar18->max_length; uVar19 = uVar19 + 1) {
                  if ((uint)pUVar18->max_length <= uVar19) {
                    ThrowIndexOutOfRangeException();
                  }
                  if ((UnityEngine_Component_o *)pUVar18->m_Items[(int)uVar19] ==
                      (UnityEngine_Component_o *)0x0) goto label_18219a8b7;
                  x = (UnityEngine_Object_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar18->m_Items[(int)uVar19],
                                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Rigidbody)
                  ;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar14 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if (bVar14) {
                    if (x == (UnityEngine_Object_o *)0x0) goto label_18219a8b7;
                    bVar14 = UnityEngine_Rigidbody__get_isKinematic
                                       ((UnityEngine_Rigidbody_o *)x,(MethodInfo *)0x0);
                    if (!bVar14) {
                      pSVar11 = (System_Collections_Generic_HashSet_object__o *)
                                (object->fields).currentProjectiles;
                      if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18219a8b7;
                      System_Collections_Generic_HashSet_object___Add
                                (pSVar11,(Il2CppObject *)x,
                                 (MethodInfo_1757CE0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Add);
                      pSVar11 = (System_Collections_Generic_HashSet_object__o *)
                                (__this->fields)._rigidbodiesInZone;
                      if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18219a8b7;
                      bVar14 = System_Collections_Generic_HashSet_object___Contains
                                         (pSVar11,(Il2CppObject *)x,
                                          (MethodInfo_1759E40 *)
                                          MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Contains);
                      if (!bVar14) {
                        pSVar11 = (System_Collections_Generic_HashSet_object__o *)
                                  (__this->fields)._rigidbodiesInZone;
                        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0)
                        goto label_18219a8b7;
                        System_Collections_Generic_HashSet_object___Add
                                  (pSVar11,(Il2CppObject *)x,
                                   (MethodInfo_1757CE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Rigidbody_Add);
                        Characters_WallColossalSteamWarningZone__ApplyKnockback
                                  (__this,(UnityEngine_Rigidbody_o *)x,(MethodInfo *)0x0);
                      }
                    }
                  }
                }
                pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._rigidbodiesInZone;
                match = (System_Predicate_T__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_Rigidbody);
                System_Predicate_object____ctor
                          ((System_Predicate_object__o *)match,(Il2CppObject *)object,
                           (intptr_t)
                           MethodInfo_Characters_WallColossalSteamWarningZone_c__DisplayClass17_0_CheckForProjectiles_b__0
                           ,(MethodInfo_B61EB0 *)0x0);
                if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                  System_Collections_Generic_HashSet_object___RemoveWhere
                            (pSVar11,match,
                             (MethodInfo_1766120 *)
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
label_18219a8b7:
  ThrowNullReferenceException();
}


// Characters.WallColossalSteamWarningZone$$ApplyKnockback
// il2cpp: void Characters_WallColossalSteamWarningZone__ApplyKnockback (Characters_WallColossalSteamWarningZone_o* __this, UnityEngine_Rigidbody_o* rb, const MethodInfo* method);
// 0x18219a1d0

void Characters_WallColossalSteamWarningZone__ApplyKnockback
               (Characters_WallColossalSteamWarningZone_o *__this,UnityEngine_Rigidbody_o *rb,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Characters_WallColossalShifter_o *pCVar5;
  Characters_WallColossalComponentCache_o *pCVar6;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar7;
  bool bVar8;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar9;
  System_String_o *pSVar10;
  UnityEngine_Object_o *x;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_Fields local_68 [8];
  
  if (Il2CppMethodInitialized_184346d92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderSpear");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_184346d92 = '\x01';
  }
  pCVar5 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return;
  }
  pCVar5 = (__this->fields)._owner;
  if (pCVar5 == (Characters_WallColossalShifter_o *)0x0) {
label_18219a470:
    ThrowNullReferenceException();
  }
  pCVar6 = (pCVar5->fields).ColossalCache;
  if (pCVar6 == (Characters_WallColossalComponentCache_o *)0x0) {
    x = (UnityEngine_Object_o *)0x0;
  }
  else {
    x = (UnityEngine_Object_o *)(pCVar6->fields).NapeHurtbox;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return;
  }
  pCVar5 = (__this->fields)._owner;
  if ((((pCVar5 == (Characters_WallColossalShifter_o *)0x0) ||
       (pCVar6 = (pCVar5->fields).ColossalCache, pCVar6 == (Characters_WallColossalComponentCache_o *)0x0)) ||
      (__this_00 = (UnityEngine_Component_o *)(pCVar6->fields).NapeHurtbox,
      __this_00 == (UnityEngine_Component_o *)0x0)) ||
     ((__this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
      __this_01 == (UnityEngine_Transform_o *)0x0 ||
      (pUVar9 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)local_68,__this_01,(MethodInfo *)0x0),
      rb == (UnityEngine_Rigidbody_o *)0x0)))) goto label_18219a470;
  uVar1 = (pUVar9->fields).x;
  uVar3 = (pUVar9->fields).y;
  fVar13 = (pUVar9->fields).z;
  pUVar9 = UnityEngine_Rigidbody__get_position((UnityEngine_Vector3_o *)local_68,rb,(MethodInfo *)0x0);
  uVar2 = (pUVar9->fields).x;
  uVar4 = (pUVar9->fields).y;
  fVar13 = (pUVar9->fields).z - fVar13;
  local_68[0].y = (float)uVar4 - (float)uVar3;
  local_68[0].x = (float)uVar2 - (float)uVar1;
  local_68[0].z = fVar13;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar11 = (float)il2cpp_runtime_helper_180546a40(local_68);
  if (fVar11 <= 1e-05) {
    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar12 = (pUVar7->zeroVector).fields.x;
    fVar14 = (pUVar7->zeroVector).fields.y;
    fVar13 = (pUVar7->zeroVector).fields.z;
  }
  else {
    fVar12 = ((float)uVar2 - (float)uVar1) / fVar11;
    fVar14 = ((float)uVar4 - (float)uVar3) / fVar11;
    fVar13 = fVar13 / fVar11;
  }
  fVar11 = (__this->fields).KnockbackForce;
  pSVar10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)rb,(MethodInfo *)0x0);
  if (pSVar10 == (System_String_o *)0x0) goto label_18219a470;
  bVar8 = System_String__Contains(pSVar10,"Thunderspear",(MethodInfo *)0x0);
  if (!bVar8) {
    pSVar10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)rb,(MethodInfo *)0x0);
    if (pSVar10 == (System_String_o *)0x0) goto label_18219a470;
    bVar8 = System_String__Contains(pSVar10,"ThunderSpear",(MethodInfo *)0x0);
    if (!bVar8) goto label_18219a40a;
  }
  fVar11 = fVar11 * (__this->fields).ThunderspearKnockbackMultiplier;
label_18219a40a:
  local_68[0].z = fVar13 * fVar11;
  local_68[0].y = fVar14 * fVar11;
  local_68[0].x = fVar12 * fVar11;
  UnityEngine_Rigidbody__AddForce(rb,(UnityEngine_Vector3_o *)local_68,1,(MethodInfo *)0x0);
  return;
}


// Characters.WallColossalSteamWarningZone$$.ctor
// il2cpp: void Characters_WallColossalSteamWarningZone___ctor (Characters_WallColossalSteamWarningZone_o* __this, const MethodInfo* method);
// 0x18219b410

void Characters_WallColossalSteamWarningZone___ctor
               (Characters_WallColossalSteamWarningZone_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Human__o *__this_00;
  System_Collections_Generic_HashSet_Rigidbody__o *__this_01;
  
  if (Il2CppMethodInitialized_184346d93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Rigidbody_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Human_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Rigidbody);
    Il2CppMethodInitialized_184346d93 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Human);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Human_ctor);
  (__this->fields)._humansInZone = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._humansInZone,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Rigidbody);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Rigidbody_ctor);
  (__this->fields)._rigidbodiesInZone = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rigidbodiesInZone,__this_01);
  (__this->fields).KnockbackForce = 100.0;
  (__this->fields).ThunderspearKnockbackMultiplier = 5.0;
  (__this->fields).KnockbackInterval = 0.1;
  (__this->fields)._projectileCheckInterval = 0.05;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


