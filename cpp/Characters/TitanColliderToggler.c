// Type: Characters.TitanColliderToggler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/TitanColliderToggler.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanColliderToggler.cs
// --------------------------------

// Characters.TitanColliderToggler$$get_CollidersEnabled
// il2cpp: bool Characters_TitanColliderToggler__get_CollidersEnabled (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x5c47ce0

bool Characters_TitanColliderToggler__get_CollidersEnabled
               (Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  return (__this->fields)._enabled;
}


// Characters.TitanColliderToggler$$Create
// il2cpp: Characters_TitanColliderToggler_o* Characters_TitanColliderToggler__Create (Characters_BaseTitan_o* owner, const MethodInfo* method);
// 0x5c47cf0

Characters_TitanColliderToggler_o *
Characters_TitanColliderToggler__Create(Characters_BaseTitan_o *owner,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *p;
  Characters_TitanColliderToggler_o *__this_01;
  Characters_TitanProjectileDetection_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547836 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TitanColliderToggler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    Il2CppMethodInitialized_07547836 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa10(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (owner != (Characters_BaseTitan_o *)0x0) {
      p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)owner,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_TitanColliderToggler);
        if (__this_01 != (Characters_TitanColliderToggler_o *)0x0) {
          (__this_01->fields).Owner = owner;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).Owner);
          pCVar1 = Characters_TitanProjectileDetection__Create(owner,(MethodInfo *)0x0);
          (__this_01->fields)._projectile = pCVar1;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._projectile);
          Characters_TitanColliderToggler__SetColliders(__this_01,false,method_00);
          return __this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanColliderToggler$$RegisterLook
// il2cpp: void Characters_TitanColliderToggler__RegisterLook (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x5c48030

void Characters_TitanColliderToggler__RegisterLook
               (Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  (__this->fields)._look = true;
  return;
}


// Characters.TitanColliderToggler$$SetNearby
// il2cpp: void Characters_TitanColliderToggler__SetNearby (Characters_TitanColliderToggler_o* __this, Characters_BaseCharacter_o* character, bool nearby, const MethodInfo* method);
// 0x5c48040

void Characters_TitanColliderToggler__SetNearby
               (Characters_TitanColliderToggler_o *__this,Characters_BaseCharacter_o *character,bool nearby,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547837 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Remove);
    Il2CppMethodInitialized_07547837 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).NearbyCharacters;
  if (nearby) {
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add
                (pSVar1,(Il2CppObject *)character,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
      return;
    }
  }
  else if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)character,
                       (MethodInfo_4FB3720 *)
                       MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    if (!bVar2) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).NearbyCharacters;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Remove
                (pSVar1,(Il2CppObject *)character,
                 (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanColliderToggler$$FixedUpdate
// il2cpp: void Characters_TitanColliderToggler__FixedUpdate (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x5c480f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c48198: jmp 0x5c481bc

void Characters_TitanColliderToggler__FixedUpdate
               (Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_HashSet_BaseCharacter__o *pSVar3;
  Characters_TitanProjectileDetection_o *pCVar4;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07547838 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNullOrDead_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547838 = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar3 = (__this->fields).NearbyCharacters;
  if (pSVar3 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto label_05c481d9;
  if (0 < ((System_Collections_Generic_HashSet_T__Fields *)&pSVar3->fields)->_count) {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    Utility_Util__RemoveNullOrDead_object_
              ((System_Collections_Generic_HashSet_T__o *)pSVar3,
               (MethodInfo_377E7D0 *)MethodInfo_Utility_Util_RemoveNullOrDead_BaseCharacter);
    in_RDX = extraout_RDX_00;
  }
  bVar1 = (__this->fields)._look;
  bVar2 = (__this->fields)._enabled;
  if (bVar2 == false) {
    if (bVar1 == false) {
      pCVar4 = (__this->fields)._projectile;
      if (pCVar4 == (Characters_TitanProjectileDetection_o *)0x0) goto label_05c481d9;
      if ((pCVar4->fields).Detect == false) {
        pSVar3 = (__this->fields).NearbyCharacters;
        if (pSVar3 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto label_05c481d9;
        if ((pSVar3->fields)._count < 1) goto label_05c481cc;
      }
    }
  }
  else {
    if (bVar1 != false) goto label_05c481cc;
    pCVar4 = (__this->fields)._projectile;
    if (pCVar4 == (Characters_TitanProjectileDetection_o *)0x0) {
label_05c481d9:
      ThrowNullReferenceException();
    }
    if ((pCVar4->fields).Detect != false) goto label_05c481cc;
    pSVar3 = (__this->fields).NearbyCharacters;
    if (pSVar3 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto label_05c481d9;
    if ((pSVar3->fields)._count != 0) goto label_05c481cc;
  }
  Characters_TitanColliderToggler__SetColliders(__this,bVar2 == false,in_RDX);
label_05c481cc:
  (__this->fields)._look = false;
  return;
}


// Characters.TitanColliderToggler$$SetColliders
// il2cpp: void Characters_TitanColliderToggler__SetColliders (Characters_TitanColliderToggler_o* __this, bool enable, const MethodInfo* method);
// 0x5c47de0
// eh: try 0x5c47ec3..0x5c47fb9 -> pad 0x5c47fd0 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c47fea..0x5c47fef -> pad 0x5c4800e cleanup
// eh: try 0x5c48011..0x5c4801b -> pad 0x5c48023 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c47fbe: jmp 0x5c47fd2
// asm:   0x5c47fc0: jmp 0x5c47fd2
// asm:   0x5c47fc2: jmp 0x5c47fd2
// asm:   0x5c47fc4: jmp 0x5c47fd2
// asm:   0x5c47fc6: jmp 0x5c47fd2
// asm:   0x5c47fc8: jmp 0x5c47fd2
// asm:   0x5c47fca: jmp 0x5c47fd2
// asm:   0x5c47fcc: jmp 0x5c47fd2
// asm:   0x5c47fce: jmp 0x5c47fd2
// asm:   0x5c47fd0: jmp 0x5c47fd2
// asm:   0x5c47fd2: mov r14, rax
// asm:   0x5c47fd5: cmp edx, 1
// asm:   0x5c47fd8: jne 0x5c48011
// asm:   0x5c47fda: mov rdi, r14
// asm:   0x5c47fdd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c47fe2: mov rbx, qword ptr [rax]
// asm:   0x5c47fe5: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c47fea: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c47fef: lea rax, [rip + 0x164594a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x5c47ff6: mov rsi, qword ptr [rax]
// asm:   0x5c47ff9: mov rdi, rsp
// asm:   0x5c47ffc: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c48001: test rbx, rbx
// asm:   0x5c48004: je 0x5c47f9b
// asm:   0x5c48006: mov rdi, rbx
// asm:   0x5c48009: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c4800e: mov r14, rax
// asm:   0x5c48011: lea rdi, [rsp + 0x20]
// asm:   0x5c48016: call 0x2fd9520  ; il2cpp_runtime_helper_02fd9520()
// asm:   0x5c4801b: mov rdi, r14
// asm:   0x5c4801e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c48023: mov rdi, rax
// asm:   0x5c48026: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_TitanColliderToggler__SetColliders
               (Characters_TitanColliderToggler_o *__this,bool enable,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  System_Collections_Generic_List_Collider__o *__this_00;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_Enumerator_object__o *pSVar4;
  bool bVar5;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_07547839 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547839 = '\x01';
  }
  pCVar1 = (__this->fields).Owner;
  if (((pCVar1 == (Characters_BaseTitan_o *)0x0) ||
      (pCVar2 = (pCVar1->fields).BaseTitanCache, pCVar2 == (Characters_BaseTitanComponentCache_o *)0x0)) ||
     (__this_00 = (pCVar2->fields).ToggleColliders,
     __this_00 == (System_Collections_Generic_List_Collider__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
  local_68.fields._current = (Il2CppObject *)local_38;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = &local_68;
  pSVar4 = &local_68;
  if (enable) {
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
      pIVar3 = local_68.fields._current;
      if (!bVar5) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        pCVar1 = (__this->fields).Owner;
        if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = (*(pCVar1->klass->vtable)._179_IsToggleColliderActive.methodPtr)
                          (pCVar1,(UnityEngine_Collider_o *)pIVar3,
                           (pCVar1->klass->vtable)._179_IsToggleColliderActive.method);
        if ((UnityEngine_Object_o *)pIVar3 == (UnityEngine_Object_o *)0x0) {
label_05c47faf:
          ThrowNullReferenceException();
        }
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pIVar3,bVar5,(MethodInfo *)0x0);
      }
    }
  }
  else {
    while( true ) {
      local_48._8_8_ = pSVar4;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
      pIVar3 = local_68.fields._current;
      if (!bVar5) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar4 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
      if (bVar5) {
        if ((UnityEngine_Object_o *)pIVar3 == (UnityEngine_Object_o *)0x0) goto label_05c47faf;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)pIVar3,false,(MethodInfo *)0x0);
        pSVar4 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
  (__this->fields)._enabled = enable;
  return;
}


// Characters.TitanColliderToggler$$.ctor
// il2cpp: void Characters_TitanColliderToggler___ctor (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x5c481e0

void Characters_TitanColliderToggler___ctor(Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_BaseCharacter__o *__this_00;
  
  if (Il2CppMethodInitialized_0754783a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
    Il2CppMethodInitialized_0754783a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields).NearbyCharacters = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NearbyCharacters);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


