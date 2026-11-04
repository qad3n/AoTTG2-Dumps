// Type: Characters.HookUseable
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/HookUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HookUseable.cs
// --------------------------------

// Characters.HookUseable$$.ctor
// il2cpp: void Characters_HookUseable___ctor (Characters_HookUseable_o* __this, Characters_BaseCharacter_o* owner, bool left, bool gun, const MethodInfo* method);
// 0x1821484c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182148589: nop dword ptr [rax]
// asm:   0x1821485e5: mov rdi, r15

void Characters_HookUseable___ctor
               (Characters_HookUseable_o *__this,Characters_BaseCharacter_o *owner,bool left,bool gun,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Characters_HumanComponentCache_o *pCVar4;
  Characters_Hook_array *pCVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_Hook__o *pSVar7;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *p;
  Characters_Hook_o *item;
  Characters_Human_o *__this_01;
  int iVar9;
  
  if (Il2CppMethodInitialized_184346c33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Hook);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Hook);
    Il2CppMethodInitialized_184346c33 = '\x01';
  }
  (__this->fields).Enabled = true;
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Hook);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Hook_ctor);
  (__this->fields).Hooks = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hooks,pSVar7);
  Characters_HoldUseable___ctor((Characters_SimpleUseable_o *)__this,owner,(MethodInfo *)0x0);
  iVar9 = 0;
  (__this->fields)._left = left;
  (__this->fields)._hookSpeed = 3.0;
  while( true ) {
    pSVar7 = (__this->fields).Hooks;
    if ((TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
    }
    if (owner == (Characters_BaseCharacter_o *)0x0) {
      __this_01 = (Characters_Human_o *)0x0;
    }
    else {
      bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((owner->klass->_2).typeHierarchyDepth < bVar2) ||
         (__this_01 = (Characters_Human_o *)owner,
         (owner->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
      {
        il2cpp_codegen_raise_invalid_cast_exception(owner);
      }
    }
    if (Il2CppMethodInitialized_184346c21 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Hook);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
      Il2CppMethodInitialized_184346c21 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1ad20(__this_00,(MethodInfo *)0x0);
    if (((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar8 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
        __this_01 == (Characters_Human_o *)0x0)) ||
       (p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar8 == (UnityEngine_Transform_o *)0x0)) break;
    UnityEngine_Transform__SetParent(pUVar8,p,(MethodInfo *)0x0);
    item = UnityEngine_GameObject__AddComponent_object_
                     (__this_00,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Hook);
    if (item == (Characters_Hook_o *)0x0) break;
    (item->fields)._left = left;
    (item->fields)._owner = __this_01;
    Il2CppCodeGenWriteBarrier(&(item->fields)._owner,__this_01);
    (item->fields)._maxLiveTime = 0.8;
    (item->fields)._id = iVar9;
    pCVar4 = (__this_01->fields).HumanCache;
    if (pCVar4 == (Characters_HumanComponentCache_o *)0x0) break;
    if (left) {
      if (gun) {
        pUVar8 = (pCVar4->fields).HookLeftAnchorGun;
      }
      else {
        pUVar8 = (pCVar4->fields).HookLeftAnchorDefault;
      }
    }
    else if (gun) {
      pUVar8 = (pCVar4->fields).HookRightAnchorGun;
    }
    else {
      pUVar8 = (pCVar4->fields).HookRightAnchorDefault;
    }
    (item->fields).Anchor = pUVar8;
    Il2CppCodeGenWriteBarrier(&(item->fields).Anchor,pUVar8);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Hook_Add;
    if (pSVar7 == (System_Collections_Generic_List_Hook__o *)0x0) break;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar5 = (pSVar7->fields)._items;
    if (pCVar5 == (Characters_Hook_array *)0x0) break;
    uVar3 = (pSVar7->fields)._size;
    if (uVar3 < (uint)pCVar5->max_length) {
      (pSVar7->fields)._size = uVar3 + 1;
      if ((uint)pCVar5->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pCVar5->m_Items[(int)uVar3] = item;
      Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar3,item);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)item,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    iVar9 = iVar9 + 1;
    if (2 < iVar9) {
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$GetRenderers
// il2cpp: System_Collections_Generic_List_Renderer__o* Characters_HookUseable__GetRenderers (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182147900
// eh: try 0x1821479f0..0x182147ad8 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182147a8e: mov rdx, qword ptr [rip + 0x1f39f53]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose
// asm:   0x182147a95: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182147a9a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182147a9f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182147aa4: test rcx, rcx
// asm:   0x182147aa7: jne 0x182147ad8
// asm:   0x182147aa9: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x182147ad8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_Collections_Generic_List_Renderer__o *
Characters_HookUseable__GetRenderers(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Hook__o *__this_00;
  UnityEngine_Renderer_o *item;
  UnityEngine_Renderer_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_Renderer__o *__this_01;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184346c34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    Il2CppMethodInitialized_184346c34 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  __this_00 = (__this->fields).Hooks;
  if (__this_00 == (System_Collections_Generic_List_Hook__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
             (System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator);
  local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
  local_28.fields._index = local_40._8_4_;
  local_28.fields._version = local_40._12_4_;
  local_28.fields._current = local_30;
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_8_ = &local_28;
  while( true ) {
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_28,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
    if (!bVar5) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
      return __this_01;
    }
    if (local_28.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    if (__this_01 == (System_Collections_Generic_List_Renderer__o *)0x0) {
      ThrowNullReferenceException();
    }
    item = local_28.fields._current[4].monitor;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_01->fields)._items;
    if (pUVar3 == (UnityEngine_Renderer_array *)0x0) break;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pUVar3->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      if ((uint)pUVar3->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      pUVar3->m_Items[(int)uVar2] = item;
      Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$IsHooked
// il2cpp: bool Characters_HookUseable__IsHooked (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182147be0

bool Characters_HookUseable__IsHooked(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346c35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c35 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 != (Characters_Hook_o *)0x0) {
    return (pCVar1->fields).State == 2;
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$HasHook
// il2cpp: bool Characters_HookUseable__HasHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182147ae0

bool Characters_HookUseable__HasHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346c36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c36 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 != (Characters_Hook_o *)0x0) {
    return (pCVar1->fields).State != 0;
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$IsHooking
// il2cpp: bool Characters_HookUseable__IsHooking (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182147c60

bool Characters_HookUseable__IsHooking(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346c37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c37 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 != (Characters_Hook_o *)0x0) {
    return (pCVar1->fields).State == 1;
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$IsReady
// il2cpp: bool Characters_HookUseable__IsReady (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182147ce0

bool Characters_HookUseable__IsReady(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346c38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c38 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 != (Characters_Hook_o *)0x0) {
    return (pCVar1->fields).State == 0;
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$GetHookState
// il2cpp: int32_t Characters_HookUseable__GetHookState (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x1821478e0

int32_t Characters_HookUseable__GetHookState(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 != (Characters_Hook_o *)0x0) {
    return (pCVar1->fields).State;
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$GetHookPosition
// il2cpp: UnityEngine_Vector3_o Characters_HookUseable__GetHookPosition (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182147810

UnityEngine_Vector3_o *
Characters_HookUseable__GetHookPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_HookUseable_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_Hook_o *pCVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346c39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c39 = '\x01';
  }
  pCVar2 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar2 = (__this->fields)._activeHook;
    if (pCVar2 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar5 = (UnityEngine_Vector3_StaticFields *)
             Characters_Hook__GetHookPosition(&local_18,pCVar2,(MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_18433dbea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433dbea = '\x01';
    }
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
  }
  fVar3 = (pUVar5->zeroVector).fields.y;
  fVar1 = (pUVar5->zeroVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar5->zeroVector).fields.x;
  (__return_storage_ptr__->fields).y = fVar3;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// Characters.HookUseable$$GetCLHookPosition
// il2cpp: System_Nullable_Vector3__o Characters_HookUseable__GetCLHookPosition (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x1821476f0

System_Nullable_Vector3__o *
Characters_HookUseable__GetCLHookPosition
          (System_Nullable_Vector3__o *__return_storage_ptr__,Characters_HookUseable_o *__this,
          MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_Fields local_28;
  System_Nullable_Vector3__Fields local_18;
  
  if (Il2CppMethodInitialized_184346c3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c3a = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = Characters_Hook__GetHookPosition((UnityEngine_Vector3_o *)&local_28,pCVar1,(MethodInfo *)0x0);
    local_28.z = (pUVar3->fields).z;
    local_28.x = (pUVar3->fields).x;
    local_28.y = (pUVar3->fields).y;
    local_18.hasValue = false;
    local_18._1_3_ = 0;
    local_18.value.fields.x = 0.0;
    local_18.value.fields.y = 0.0;
    local_18.value.fields.z = 0.0;
    System_Nullable_Vector3____ctor
              ((System_Nullable_Vector3__o *)&local_18,(UnityEngine_Vector3_o *)&local_28,
               (MethodInfo_AE2790 *)MethodInfo_System_Nullable_Vector3_ctor);
  }
  else {
    local_18.hasValue = false;
    local_18._1_3_ = 0;
    local_18.value.fields.x = 0.0;
    local_18.value.fields.y = 0.0;
    local_18.value.fields.z = 0.0;
  }
  (__return_storage_ptr__->fields).hasValue = local_18.hasValue;
  *(int3 *)&(__return_storage_ptr__->fields).field_0x1 = local_18._1_3_;
  (__return_storage_ptr__->fields).value.fields.x = local_18.value.fields.x;
  (__return_storage_ptr__->fields).value.fields.y = local_18.value.fields.y;
  (__return_storage_ptr__->fields).value.fields.z = local_18.value.fields.z;
  return __return_storage_ptr__;
}


// Characters.HookUseable$$IsHookOffset
// il2cpp: bool Characters_HookUseable__IsHookOffset (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182147b60

bool Characters_HookUseable__IsHookOffset(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346c3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c3b = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 != (Characters_Hook_o *)0x0) {
    return (pCVar1->fields).HasOffset;
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$GetHookParent
// il2cpp: UnityEngine_Transform_o* Characters_HookUseable__GetHookParent (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x1821477f0

UnityEngine_Transform_o*
Characters_HookUseable__GetHookParent(Characters_HookUseable_o* __this, MethodInfo* method)

{
  System_Xml_Serialization_TypeData_o *pSVar1;
  
  pSVar1 = (__this->fields)._activeHook;
  if (pSVar1 != (System_Xml_Serialization_TypeData_o *)0x0) {
    return (pSVar1->fields).fullTypeName;
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$GetHookCharacter
// il2cpp: Characters_BaseCharacter_o* Characters_HookUseable__GetHookCharacter (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x1821477d0

Characters_BaseCharacter_o *
Characters_HookUseable__GetHookCharacter(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 != (Characters_Hook_o *)0x0) {
    return (pCVar1->fields).HookCharacter;
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$DisableActiveHook
// il2cpp: void Characters_HookUseable__DisableActiveHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182147160

void Characters_HookUseable__DisableActiveHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346c3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c3c = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pCVar1->fields).State == 2) {
      Characters_Hook__SetHookState(pCVar1,4,(MethodInfo *)0x0);
      (__this->fields)._activeHook = (Characters_Hook_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._activeHook,(void *)0x0);
    }
  }
  return;
}


// Characters.HookUseable$$DisableAnyHook
// il2cpp: void Characters_HookUseable__DisableAnyHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182147200

void Characters_HookUseable__DisableAnyHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  int32_t state;
  
  if (Il2CppMethodInitialized_184346c3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c3d = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pCVar1->fields).State == 2) {
      state = 4;
    }
    else {
      if ((pCVar1->fields).State != 1) goto label_182147278;
      state = 3;
    }
    Characters_Hook__SetHookState(pCVar1,state,(MethodInfo *)0x0);
  }
label_182147278:
  (__this->fields)._activeHook = (Characters_Hook_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeHook,(void *)0x0);
  return;
}


// Characters.HookUseable$$DestroyHooks
// il2cpp: void Characters_HookUseable__DestroyHooks (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182146f90
// eh: try 0x182147060..0x182147151 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821470e2: mov rdx, qword ptr [rip + 0x1f3a8ff]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose
// asm:   0x1821470e9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821470ee: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821470f3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821470f8: test rcx, rcx
// asm:   0x1821470fb: jne 0x182147151
// asm:   0x1821470fd: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x182147151: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_HookUseable__DestroyHooks(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Hook__o *pSVar2;
  UnityEngine_Component_o *__this_00;
  bool bVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Object_o *obj;
  undefined1 local_40 [16];
  UnityEngine_Component_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Component_o *local_18;
  
  if (Il2CppMethodInitialized_184346c3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c3e = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Component_o *)0x0;
  pSVar2 = (__this->fields).Hooks;
  if (pSVar2 != (System_Collections_Generic_List_Hook__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)pSVar2,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
      __this_00 = local_18;
      if (!bVar3) break;
      if (local_18 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = UnityEngine_Component__get_gameObject(local_18,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    pSVar2 = (__this->fields).Hooks;
    if (pSVar2 != (System_Collections_Generic_List_Hook__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$Activate
// il2cpp: void Characters_HookUseable__Activate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182146f80

void
Characters_HookUseable__Activate(Characters_HookUseable_o* __this, MethodInfo* method)

{
  Characters_HookUseable__StartHook(__this,(MethodInfo *)0x0);
  return;
}


// Characters.HookUseable$$ActiveFixedUpdate
// il2cpp: void Characters_HookUseable__ActiveFixedUpdate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182146f80

void Characters_HookUseable__ActiveFixedUpdate(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_HookUseable__StartHook(__this,(MethodInfo *)0x0);
  return;
}


// Characters.HookUseable$$FixedUpdateMock
// il2cpp: void Characters_HookUseable__FixedUpdateMock (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182147500

void Characters_HookUseable__FixedUpdateMock(Characters_HookUseable_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Hook_o *pCVar2;
  UnityEngine_ParticleSystem_o *__this_00;
  Characters_Human_o *pCVar3;
  Characters_BaseCharacter_o *pCVar4;
  bool bVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346c3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c3f = '\x01';
  }
  pCVar2 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pCVar2 = (__this->fields)._activeHook;
  if (pCVar2 != (Characters_Hook_o *)0x0) {
    if ((((pCVar2->fields).State != 1) ||
        (Characters_Hook__FixedUpdateHooking(pCVar2,(MethodInfo *)0x0), (pCVar2->fields).State != 1)) &&
       ((pCVar2->fields).State != 2)) {
      return;
    }
    __this_00 = (pCVar2->fields)._particles;
    if (__this_00 != (UnityEngine_ParticleSystem_o *)0x0) {
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      pUVar7 = Characters_Hook__GetHookPosition(&local_18,pCVar2,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        local_28.z = (pUVar7->fields).z;
        local_28.x = (pUVar7->fields).x;
        local_28.y = (pUVar7->fields).y;
        UnityEngine_Transform__set_position(pUVar6,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
        if ((pCVar2->fields).State != 2) {
          return;
        }
        if (Il2CppMethodInitialized_184346c2e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_184346c2e = '\x01';
        }
        pCVar3 = (pCVar2->fields)._owner;
        if (pCVar3 != (Characters_Human_o *)0x0) {
          bVar5 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)
                            (pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
          if (!bVar5) {
            return;
          }
          if ((pCVar2->fields)._hasHookParent == false) {
            return;
          }
          pUVar6 = (pCVar2->fields).HookParent;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar5) {
            pCVar4 = (pCVar2->fields).HookCharacter;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar5) {
              return;
            }
            pCVar4 = (pCVar2->fields).HookCharacter;
            if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_1821476e2;
            if ((pCVar4->fields).Dead == false) {
              return;
            }
            bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
            if ((pCVar4->klass->_2).typeHierarchyDepth < bVar1) {
              return;
            }
            if ((pCVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_Human) {
              return;
            }
          }
          Characters_Hook__SetHookState(pCVar2,4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1821476e2:
  ThrowNullReferenceException();
}


// Characters.HookUseable$$StartHook
// il2cpp: void Characters_HookUseable__StartHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x182147d70
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182148061: movaps xmm8, xmm10
// asm:   0x182148065: movaps xmm6, xmm11
// asm:   0x182148069: movaps xmm7, xmm9
// asm:   0x1821483b0: movd edi, xmm1
// asm:   0x1821483b4: unpcklps xmm9, xmm0

void Characters_HookUseable__StartHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  Characters_BaseCharacter_o *pCVar4;
  Characters_BaseCharacter_c *pCVar5;
  Cameras_BaseCamera_o *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar9;
  System_String_o *pSVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  Characters_Hook_o *pCVar15;
  UnityEngine_Vector3_o *pUVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  UnityEngine_Vector3_Fields local_d8;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_o local_b8 [14];
  
  if (Il2CppMethodInitialized_184346c40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346c40 = '\x01';
  }
  pCVar15 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar14) {
    pCVar15 = (__this->fields)._activeHook;
    if (pCVar15 == (Characters_Hook_o *)0x0) goto label_18214849f;
    if ((pCVar15->fields).State == 0) {
      (__this->fields)._activeHook = (Characters_Hook_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._activeHook,(void *)0x0);
    }
  }
  if ((__this->fields).Enabled == false) {
    return;
  }
  pCVar15 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar14) {
    return;
  }
  pCVar15 = Characters_HookUseable__FindAvailableHook(__this,(MethodInfo *)0x0);
  (__this->fields)._activeHook = pCVar15;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeHook,pCVar15);
  pCVar4 = (__this->fields)._owner;
  if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_18214849f;
  pCVar5 = pCVar4->klass;
  bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar5->_2).typeHierarchyDepth < bVar3) ||
     ((pCVar5->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    il2cpp_codegen_raise_invalid_cast_exception(pCVar4);
  }
  pUVar16 = (*(pCVar5->vtable)._76_GetAimPoint.methodPtr)
                      ((UnityEngine_Vector3_o *)&local_c8,pCVar4,(pCVar5->vtable)._76_GetAimPoint.method);
  fVar23 = (pUVar16->fields).x;
  fVar25 = (pUVar16->fields).y;
  fVar22 = (pUVar16->fields).z;
  if ((__this->fields).HookBoth != false) {
    pCVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (((pCVar6 == (Cameras_BaseCamera_o *)0x0) ||
        (pUVar7 = (pCVar6->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar8 = (pUVar7->fields).Transform, pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_18214849f;
    pUVar16 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_c8,pUVar8,(MethodInfo *)0x0)
    ;
    fVar1 = (pUVar16->fields).x;
    fVar2 = (pUVar16->fields).y;
    fVar24 = (pUVar16->fields).z;
    if (Il2CppMethodInitialized_18433dee7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433dee7 = '\x01';
    }
    fVar1 = fVar1 - fVar23;
    fVar2 = fVar2 - fVar25;
    fVar24 = fVar24 - fVar22;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar20 = (double)(fVar2 * fVar2 + fVar1 * fVar1 + fVar24 * fVar24);
    if (dVar20 < 0.0) {
      dVar20 = sqrt(dVar20);
    }
    else {
      dVar20 = SQRT(dVar20);
    }
    if (50.0 < (float)dVar20) {
      fVar1 = 0.3;
    }
    else {
      fVar1 = 0.05;
    }
    fVar1 = fVar1 * (float)dVar20;
    if ((__this->fields)._left != false) {
      fVar1 = fVar1 * -1.0;
    }
    pCVar4 = (__this->fields)._owner;
    if (((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar7 = (pCVar4->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar8 = (pUVar7->fields).Transform, pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_18214849f;
    pUVar16 = UnityEngine_Transform__get_right((UnityEngine_Vector3_o *)&local_c8,pUVar8,(MethodInfo *)0x0);
    fVar23 = fVar1 * (pUVar16->fields).x + fVar23;
    fVar25 = fVar1 * (pUVar16->fields).y + fVar25;
    fVar22 = fVar1 * (pUVar16->fields).z + fVar22;
  }
  pCVar15 = (__this->fields)._activeHook;
  if ((pCVar15 != (Characters_Hook_o *)0x0) &&
     (pUVar8 = (pCVar15->fields).Anchor, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    pUVar16 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)&local_c8,pUVar8,(MethodInfo *)0x0)
    ;
    fVar23 = fVar23 - (pUVar16->fields).x;
    fVar25 = fVar25 - (pUVar16->fields).y;
    fVar22 = fVar22 - (pUVar16->fields).z;
    local_d8.y = fVar25;
    local_d8.x = fVar23;
    local_d8.z = fVar22;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar1 = (float)il2cpp_runtime_helper_180546a40(&local_d8,0);
    if (fVar1 <= 1e-05) {
      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar23 = (pUVar9->zeroVector).fields.x;
      fVar25 = (pUVar9->zeroVector).fields.y;
      fVar22 = (pUVar9->zeroVector).fields.z;
    }
    else {
      fVar23 = fVar23 / fVar1;
      fVar25 = fVar25 / fVar1;
      fVar22 = fVar22 / fVar1;
    }
    fVar1 = (__this->fields)._hookSpeed;
    pCVar4 = (__this->fields)._owner;
    fVar23 = fVar23 * fVar1;
    fVar25 = fVar25 * fVar1;
    fVar22 = fVar22 * fVar1;
    local_c8.y = fVar25;
    local_c8.x = fVar23;
    local_c8.z = fVar22;
    if (((pCVar4 != (Characters_BaseCharacter_o *)0x0) &&
        (pUVar7 = (pCVar4->fields).Cache, pUVar7 != (Utility_BaseComponentCache_o *)0x0)) &&
       (__this_00 = (pUVar7->fields).Rigidbody, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      pUVar16 = UnityEngine_Rigidbody__get_linearVelocity(local_b8,__this_00,(MethodInfo *)0x0);
      local_d8.x = (pUVar16->fields).x;
      local_d8.y = (pUVar16->fields).y;
      local_d8.z = (pUVar16->fields).z;
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar1 = (pUVar9->zeroVector).fields.x;
      fVar2 = (pUVar9->zeroVector).fields.y;
      fVar24 = (pUVar9->zeroVector).fields.z;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar17 = (float)il2cpp_runtime_helper_180546a40(&local_c8,0);
      if (fVar17 <= 1e-05) {
        pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar26 = (pUVar9->zeroVector).fields.x;
        fVar27 = (pUVar9->zeroVector).fields.y;
        fVar17 = (pUVar9->zeroVector).fields.z;
      }
      else {
        fVar26 = fVar23 / fVar17;
        fVar27 = fVar25 / fVar17;
        fVar17 = fVar22 / fVar17;
      }
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar18 = (float)il2cpp_runtime_helper_180546a40(&local_d8,0);
      fVar13 = local_d8.z;
      fVar12 = local_d8.y;
      fVar11 = local_d8.x;
      if (fVar18 <= 1e-05) {
        pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar21 = (pUVar9->zeroVector).fields.x;
        fVar19 = (pUVar9->zeroVector).fields.y;
        fVar18 = (pUVar9->zeroVector).fields.z;
      }
      else {
        fVar21 = local_d8.x / fVar18;
        fVar19 = local_d8.y / fVar18;
        fVar18 = local_d8.z / fVar18;
      }
      fVar17 = (float)il2cpp_runtime_helper_1804f6310(fVar19 * fVar27 + fVar21 * fVar26 + fVar18 * fVar17);
      if (ABS(fVar17 * 57.29578) <= 90.0) {
        if (Il2CppMethodInitialized_18433df4c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
          Il2CppMethodInitialized_18433df4c = '\x01';
        }
        fVar24 = fVar25 * fVar25 + fVar23 * fVar23 + fVar22 * fVar22;
        if (fVar24 < TypeInfo_UnityEngine_Mathf->static_fields->Epsilon) {
          if (Il2CppMethodInitialized_18433dbea == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbea = '\x01';
          }
          pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar1 = (pUVar9->zeroVector).fields.x;
          fVar2 = (pUVar9->zeroVector).fields.y;
          fVar24 = (pUVar9->zeroVector).fields.z;
        }
        else {
          fVar24 = (fVar12 * fVar25 + fVar11 * fVar23 + fVar13 * fVar22) / fVar24;
          fVar1 = fVar23 * fVar24;
          fVar2 = fVar25 * fVar24;
          fVar24 = fVar22 * fVar24;
        }
      }
      pCVar15 = (__this->fields)._activeHook;
      if (pCVar15 != (Characters_Hook_o *)0x0) {
        local_d8.y = fVar25;
        local_d8.x = fVar23;
        local_c8.y = fVar2;
        local_c8.x = fVar1;
        local_d8.z = fVar22;
        local_c8.z = fVar24;
        Characters_Hook__SetHooking
                  (pCVar15,(UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Vector3_o *)&local_c8,
                   (MethodInfo *)0x0);
        pCVar4 = (__this->fields)._owner;
        if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
          bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if (((pCVar4->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pCVar4->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_Human)) {
            il2cpp_codegen_raise_invalid_cast_exception(pCVar4);
          }
          pSVar10 = (*(uint64_t *)((char *)pCVar4 + 0x150));
          if (pSVar10 != (System_String_o *)0x0) {
            fVar23 = (float)(*(uint32_t *)((char *)pSVar10 + 0x28)) - *(float *)&(*(uint64_t *)((char *)pSVar10 + 0x30));
            if (fVar23 <= 0.0) {
              fVar23 = 0.0;
            }
            (*(uint32_t *)((char *)pSVar10 + 0x28)) = (int32_t)fVar23;
            return;
          }
        }
      }
    }
  }
label_18214849f:
  ThrowNullReferenceException();
}


// Characters.HookUseable$$Deactivate
// il2cpp: void Characters_HookUseable__Deactivate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_HookUseable__Deactivate(Characters_HookUseable_o* __this, MethodInfo* method)

{
  return;
}


// Characters.HookUseable$$FindAvailableHook
// il2cpp: Characters_Hook_o* Characters_HookUseable__FindAvailableHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x1821472b0
// eh: try 0x182147370..0x1821474f7 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182147369: nop dword ptr [rax]
// asm:   0x1821473be: mov rdx, qword ptr [rip + 0x1f3a623]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose
// asm:   0x1821473c5: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821473ca: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821473cf: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821473d4: test rcx, rcx
// asm:   0x1821473d7: jne 0x1821474eb
// asm:   0x1821473dd: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x182147429: nop dword ptr [rax]
// asm:   0x182147495: mov rdx, qword ptr [rip + 0x1f3a54c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose
// asm:   0x18214749c: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821474a1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821474a6: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821474ab: test rcx, rcx
// asm:   0x1821474ae: jne 0x1821474f7
// asm:   0x1821474b0: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x1821474eb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821474f7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

Characters_Hook_o *
Characters_HookUseable__FindAvailableHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o *pSVar1;
  bool bVar2;
  Characters_Hook_o *pCVar3;
  undefined1 local_38 [16];
  Characters_Hook_o *local_28;
  undefined1 local_20 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_18;
  Characters_Hook_o *local_10;
  
  if (Il2CppMethodInitialized_184346c41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_get_Item);
    Il2CppMethodInitialized_184346c41 = '\x01';
  }
  local_20 = (undefined1  [8])0x0;
  pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_10 = (Characters_Hook_o *)0x0;
  pSVar1 = (__this->fields).Hooks;
  if (pSVar1 != (System_Collections_Generic_List_Hook__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
               (System_Collections_Generic_List_T__o *)pSVar1,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator);
    local_20 = (undefined1  [8])local_38._0_8_;
    pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38._8_8_;
    local_10 = local_28;
    local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_38._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20;
    while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_20,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext),
          pCVar3 = local_10, bVar2) {
      if (local_10 == (Characters_Hook_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((local_10->fields).State == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
        return pCVar3;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
               MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    pSVar1 = (__this->fields).Hooks;
    if (pSVar1 != (System_Collections_Generic_List_Hook__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                 (System_Collections_Generic_List_T__o *)pSVar1,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator);
      local_20 = (undefined1  [8])local_38._0_8_;
      pUStack_18 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38._8_8_;
      local_10 = local_28;
      local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20;
      while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_20,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext),
            pCVar3 = local_10, bVar2) {
        if (local_10 == (Characters_Hook_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((local_10->fields).State == 4) || ((local_10->fields).State == 3)) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
                     MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
          return pCVar3;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_20,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
      pSVar1 = (__this->fields).Hooks;
      if (pSVar1 != (System_Collections_Generic_List_Hook__o *)0x0) {
        pCVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,0,
                            (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Hook_get_Item);
        return pCVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


