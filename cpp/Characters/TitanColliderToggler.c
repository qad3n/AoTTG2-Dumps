// Type: Characters.TitanColliderToggler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/TitanColliderToggler.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanColliderToggler.cs
// --------------------------------

// Characters.TitanColliderToggler$$get_CollidersEnabled
// il2cpp: bool Characters_TitanColliderToggler__get_CollidersEnabled (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x180f1d4c0

bool
Characters_TitanColliderToggler__get_CollidersEnabled(Characters_TitanColliderToggler_o* __this, MethodInfo* method)

{
  return (__this->fields)._enabled;
}


// Characters.TitanColliderToggler$$Create
// il2cpp: Characters_TitanColliderToggler_o* Characters_TitanColliderToggler__Create (Characters_BaseTitan_o* owner, const MethodInfo* method);
// 0x1821ac640

Characters_TitanColliderToggler_o *
Characters_TitanColliderToggler__Create(Characters_BaseTitan_o *owner,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *p;
  Characters_TitanColliderToggler_o *__this_01;
  Characters_TitanProjectileDetection_o *value;
  
  if (Il2CppMethodInitialized_184346e50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TitanColliderToggler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    Il2CppMethodInitialized_184346e50 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (owner != (Characters_BaseTitan_o *)0x0) {
      p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)owner,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_00,p,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_TitanColliderToggler);
        if (__this_01 != (Characters_TitanColliderToggler_o *)0x0) {
          (__this_01->fields).Owner = owner;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).Owner,owner);
          value = Characters_TitanProjectileDetection__Create(owner,(MethodInfo *)0x0);
          (__this_01->fields)._projectile = value;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._projectile,value);
          Characters_TitanColliderToggler__SetColliders(__this_01,false,(MethodInfo *)0x0);
          return __this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.TitanColliderToggler$$RegisterLook
// il2cpp: void Characters_TitanColliderToggler__RegisterLook (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x180cd9be0

void
Characters_TitanColliderToggler__RegisterLook(Characters_TitanColliderToggler_o* __this, MethodInfo* method)

{
  (__this->fields)._look = true;
  return;
}


// Characters.TitanColliderToggler$$SetNearby
// il2cpp: void Characters_TitanColliderToggler__SetNearby (Characters_TitanColliderToggler_o* __this, Characters_BaseCharacter_o* character, bool nearby, const MethodInfo* method);
// 0x1821aca00

void Characters_TitanColliderToggler__SetNearby
               (Characters_TitanColliderToggler_o *__this,Characters_BaseCharacter_o *character,bool nearby,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346e51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Remove);
    Il2CppMethodInitialized_184346e51 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).NearbyCharacters;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (nearby) {
      System_Collections_Generic_HashSet_object___Add
                (pSVar1,(Il2CppObject *)character,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Add);
      return;
    }
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)character,
                       (MethodInfo_1759E40 *)
                       MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Contains);
    if (bVar2) {
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).NearbyCharacters;
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_1821acab1;
      System_Collections_Generic_HashSet_object___Remove
                (pSVar1,(Il2CppObject *)character,
                 (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_Remove);
    }
    return;
  }
label_1821acab1:
  ThrowNullReferenceException();
}


// Characters.TitanColliderToggler$$FixedUpdate
// il2cpp: void Characters_TitanColliderToggler__FixedUpdate (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x1821ac740

void Characters_TitanColliderToggler__FixedUpdate
               (Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_BaseCharacter__o *pSVar1;
  Characters_TitanProjectileDetection_o *pCVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346e52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_RemoveNullOrDead_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346e52 = '\x01';
  }
  pSVar1 = (__this->fields).NearbyCharacters;
  if (pSVar1 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto label_1821ac82a;
  if (0 < ((System_Collections_Generic_HashSet_T__Fields *)&pSVar1->fields)->_count) {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    Utility_Util__RemoveNullOrDeadDetections_object_
              ((System_Collections_Generic_HashSet_T__o *)pSVar1,
               (MethodInfo_86B5C0 *)MethodInfo_Utility_Util_RemoveNullOrDead_BaseCharacter);
  }
  bVar3 = (__this->fields)._look;
  if ((__this->fields)._enabled == false) {
    if (bVar3 == false) {
      pCVar2 = (__this->fields)._projectile;
      if (pCVar2 == (Characters_TitanProjectileDetection_o *)0x0) {
label_1821ac82a:
        ThrowNullReferenceException();
      }
      if ((pCVar2->fields).Detect == false) {
        pSVar1 = (__this->fields).NearbyCharacters;
        if (pSVar1 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto label_1821ac82a;
        if ((pSVar1->fields)._count < 1) goto label_1821ac820;
      }
    }
    bVar3 = true;
  }
  else {
    if (bVar3 != false) goto label_1821ac820;
    pCVar2 = (__this->fields)._projectile;
    if (pCVar2 == (Characters_TitanProjectileDetection_o *)0x0) goto label_1821ac82a;
    if ((pCVar2->fields).Detect != false) goto label_1821ac820;
    pSVar1 = (__this->fields).NearbyCharacters;
    if (pSVar1 == (System_Collections_Generic_HashSet_BaseCharacter__o *)0x0) goto label_1821ac82a;
    if ((pSVar1->fields)._count != 0) goto label_1821ac820;
    bVar3 = false;
  }
  Characters_TitanColliderToggler__SetColliders(__this,bVar3,(MethodInfo *)0x0);
label_1821ac820:
  (__this->fields)._look = false;
  return;
}


// Characters.TitanColliderToggler$$SetColliders
// il2cpp: void Characters_TitanColliderToggler__SetColliders (Characters_TitanColliderToggler_o* __this, bool enable, const MethodInfo* method);
// 0x1821ac830
// eh: try 0x1821ac910..0x1821ac9fa -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ac90f: nop 
// asm:   0x1821ac9a7: mov rdx, qword ptr [rip + 0x1ecc522]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x1821ac9ae: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821ac9b3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ac9b8: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ac9bd: test rcx, rcx
// asm:   0x1821ac9c0: jne 0x1821ac9fa
// asm:   0x1821ac9c2: movzx r14d, byte ptr [rsp + 0x88]
// asm:   0x1821ac9cb: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x1821ac9fa: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_TitanColliderToggler__SetColliders
               (Characters_TitanColliderToggler_o *__this,bool enable,MethodInfo *method)

{
  Characters_BaseTitan_o *pCVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  System_Collections_Generic_List_Collider__o *__this_00;
  Il2CppObject *x;
  bool bVar3;
  undefined1 local_50 [16];
  MethodInfo *local_40;
  System_Collections_Generic_List_Enumerator_object__o local_38;
  
  if (Il2CppMethodInitialized_184346e53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346e53 = '\x01';
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pCVar1 = (__this->fields).Owner;
  if (((pCVar1 != (Characters_BaseTitan_o *)0x0) &&
      (pCVar2 = (pCVar1->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
     (__this_00 = (pCVar2->fields).ToggleColliders,
     __this_00 != (System_Collections_Generic_List_Collider__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
    local_38.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    local_38.fields._index = local_50._8_4_;
    local_38.fields._version = local_50._12_4_;
    local_38.fields._current = (Il2CppObject *)local_40;
    local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_50._8_8_ = &local_38;
    while( true ) {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_38,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
        x = local_38.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_38,
                     MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
          (__this->fields)._enabled = enable;
          return;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar3);
      if (enable) {
        pCVar1 = (__this->fields).Owner;
        if (pCVar1 == (Characters_BaseTitan_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = (*(pCVar1->klass->vtable)._179_IsToggleColliderActive.methodPtr)(pCVar1,(MethodInfo *)x);
      }
      else {
        bVar3 = false;
      }
      if ((MethodInfo *)x == (MethodInfo *)0x0) break;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)x,bVar3 != false,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Characters.TitanColliderToggler$$.ctor
// il2cpp: void Characters_TitanColliderToggler___ctor (Characters_TitanColliderToggler_o* __this, const MethodInfo* method);
// 0x1821acac0

void Characters_TitanColliderToggler___ctor(Characters_TitanColliderToggler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_BaseCharacter__o *__this_00;
  
  if (Il2CppMethodInitialized_184346e54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
    Il2CppMethodInitialized_184346e54 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_BaseCharacter_ctor);
  (__this->fields).NearbyCharacters = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NearbyCharacters,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


