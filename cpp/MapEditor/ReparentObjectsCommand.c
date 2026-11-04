// Type: MapEditor.ReparentObjectsCommand
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/MapEditor/ReparentObjectsCommand.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.ReparentObjectsCommand.ObjectState$$.ctor
// il2cpp: void MapEditor_ReparentObjectsCommand_ObjectState___ctor (MapEditor_ReparentObjectsCommand_ObjectState_o* __this, const MethodInfo* method);
// 0x18054c890

void
MapEditor_ReparentObjectsCommand_ObjectState___ctor(MapEditor_ReparentObjectsCommand_ObjectState_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.ReparentObjectsCommand$$.ctor
// il2cpp: void MapEditor_ReparentObjectsCommand___ctor (MapEditor_ReparentObjectsCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, int32_t newParentId, const MethodInfo* method);
// 0x1821facc0
// eh: try 0x1821fae50..0x1821faf18 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821faedb: mov rdx, qword ptr [rip + 0x1e905e6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1821faee2: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821faee7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821faeec: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821faef1: test rcx, rcx
// asm:   0x1821faef4: jne 0x1821faf18
// asm:   0x1821faf18: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void MapEditor_ReparentObjectsCommand___ctor
               (MapEditor_ReparentObjectsCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,int32_t newParentId,MethodInfo *method
               )

{
  int32_t key;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar2;
  System_Collections_Generic_Dictionary_int__ReparentObjectsCommand_ObjectState__o *pSVar3;
  System_Collections_Generic_Dictionary_int__int__o *pSVar4;
  MapEditor_ReparentObjectsCommand_ObjectState_o *value;
  undefined1 local_60 [16];
  Map_MapObject_o *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_18434700c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    Il2CppMethodInitialized_18434700c = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
             (MethodInfo_1404750 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_ctor);
  (__this->fields)._oldStates = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldStates,pSVar3);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
             (MethodInfo_1404750 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_ctor);
  (__this->fields)._newStates = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newStates,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  (__this->fields)._targetParents = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._targetParents,pSVar4);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
             (System_Collections_Generic_List_T__o *)mapObjects,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
  local_48.fields._index = local_60._8_4_;
  local_48.fields._version = local_60._12_4_;
  local_48.fields._current = (Il2CppObject *)local_50;
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_8_ = &local_48;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_48,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
      return;
    }
    if ((Map_MapObject_o *)local_48.fields._current == (Map_MapObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pMVar1 = ((Map_MapObject_Fields *)((longlong)local_48.fields._current + 0x10))->ScriptObject;
    if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    key = (pMVar1->fields).Id;
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._oldStates;
    value = MapEditor_ReparentObjectsCommand__CaptureState
                      (__this,(Map_MapObject_o *)local_48.fields._current,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
    System_Collections_Generic_Dictionary_int__object___set_Item
              (__this_00,key,(Il2CppObject *)value,
               (MethodInfo_1423510 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_set_Item
              );
    pSVar4 = (__this->fields)._targetParents;
    if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_int__int___set_Item
              (pSVar4,key,newParentId,
               (MethodInfo_14159F0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
  }
  ThrowNullReferenceException();
}


// MapEditor.ReparentObjectsCommand$$Execute
// il2cpp: void MapEditor_ReparentObjectsCommand__Execute (MapEditor_ReparentObjectsCommand_o* __this, const MethodInfo* method);
// 0x1821fa7f0
// eh: try 0x1821fa930..0x1821fac9e -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821faabc: mov rdx, qword ptr [rip + 0x1eb4ba5]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_Dispose
// asm:   0x1821faac3: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821faac8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821faacd: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821faad2: test rcx, rcx
// asm:   0x1821faad5: jne 0x1821fac88
// asm:   0x1821faadb: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1821fac2b: mov rdx, qword ptr [rip + 0x1eb4a36]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_Dispose
// asm:   0x1821fac32: mov rcx, rbx
// asm:   0x1821fac35: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821fac3a: jmp 0x1821fac5f
// asm:   0x1821fac3c: mov rdx, qword ptr [rip + 0x1eb4a25]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_Dispose
// asm:   0x1821fac43: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821fac48: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821fac4d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821fac52: test rcx, rcx
// asm:   0x1821fac55: jne 0x1821fac9e
// asm:   0x1821fac57: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1821fac5f: mov byte ptr [rdi + 0x28], 1
// asm:   0x1821fac63: jmp 0x1821fa8b6
// asm:   0x1821fac88: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821fac9e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void MapEditor_ReparentObjectsCommand__Execute(MapEditor_ReparentObjectsCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *pSVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  System_Collections_Generic_Dictionary_int__LayerMask__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  int32_t iVar3;
  bool bVar4;
  UnityEngine_LayerMask_o key;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar5;
  Map_MapObject_o *pMVar6;
  Map_MapObject_o *parent;
  MapEditor_ReparentObjectsCommand_ObjectState_o *state;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  undefined1 local_30 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_28;
  Il2CppObject *local_20;
  
  if (Il2CppMethodInitialized_18434700d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_get_Current)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_18434700d = '\x01';
  }
  local_30 = (undefined1  [8])0x0;
  pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_20 = (Il2CppObject *)0x0;
  if ((__this->fields)._capturedNewState != false) {
    MapEditor_ReparentObjectsCommand__ApplyStates(__this,(__this->fields)._newStates,(MethodInfo *)0x0);
    return;
  }
  pSVar1 = (__this->fields)._targetParents;
  if ((pSVar1 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) &&
     (pSVar5 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
               System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                          (MethodInfo_13C6500 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Keys),
     pSVar5 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48,
               pSVar5,(MethodInfo_F1E550 *)
                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_int_GetEnumerator);
    local_30 = (undefined1  [8])local_48._0_8_;
    pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48._8_8_;
    local_20 = local_38;
    local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_48._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
    while (bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__int___MoveNext
                             ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                               *)local_30,
                              (MethodInfo_1563BB0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_MoveNext
                             ), bVar4) {
      iVar3 = (int32_t)local_20;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar2,iVar3,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar4) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar6 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary_int__ulong___get_Item
                           (pSVar2,iVar3,
                            (MethodInfo_14156F0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        __this_00 = (System_Collections_Generic_Dictionary_int__LayerMask__o *)(__this->fields)._targetParents
        ;
        if (__this_00 == (System_Collections_Generic_Dictionary_int__LayerMask__o *)0x0) {
          ThrowNullReferenceException();
        }
        key = System_Collections_Generic_Dictionary_int__LayerMask___get_Item
                        (__this_00,iVar3,
                         (MethodInfo_14157A0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
        parent = (Map_MapObject_o *)0x0;
        if (-1 < (int)key.fields.m_Mask) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar2,(int32_t)key.fields.m_Mask,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar4) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            parent = (Map_MapObject_o *)
                     System_Collections_Generic_Dictionary_int__ulong___get_Item
                               (pSVar2,(int32_t)key.fields.m_Mask,
                                (MethodInfo_14156F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          }
        }
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__SetParentLogical(pMVar6,parent,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_Dispose);
    pSVar1 = (__this->fields)._targetParents;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) &&
       (pSVar5 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                 System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                            (MethodInfo_13C6500 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Keys),
       pSVar5 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_48,
                 pSVar5,(MethodInfo_F1E550 *)
                        MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_int_GetEnumerator);
      local_30 = (undefined1  [8])local_48._0_8_;
      pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48._8_8_;
      local_20 = local_38;
      local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_48._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
      while( true ) {
        bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__int___MoveNext
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           local_30,(MethodInfo_1563BB0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_MoveNext
                          );
        if (!bVar4) {
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_Dispose
                    );
          (__this->fields)._capturedNewState = true;
          return;
        }
        iVar3 = (int32_t)local_20;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) break;
        bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                          (pSVar2,iVar3,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (bVar4) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar6 = (Map_MapObject_o *)
                   System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar2,iVar3,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          state = MapEditor_ReparentObjectsCommand__CaptureState(__this,pMVar6,(MethodInfo *)0x0);
          __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._newStates;
          if (__this_01 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_int__object___set_Item
                    (__this_01,iVar3,(Il2CppObject *)state,
                     (MethodInfo_1423510 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_set_Item
                    );
          MapEditor_ReparentObjectsCommand__ApplyState(__this,pMVar6,state,(MethodInfo *)0x0);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ReparentObjectsCommand$$Unexecute
// il2cpp: void MapEditor_ReparentObjectsCommand__Unexecute (MapEditor_ReparentObjectsCommand_o* __this, const MethodInfo* method);
// 0x1821facb0

void MapEditor_ReparentObjectsCommand__Unexecute
               (MapEditor_ReparentObjectsCommand_o *__this,MethodInfo *method)

{
  MapEditor_ReparentObjectsCommand__ApplyStates(__this,(__this->fields)._oldStates,(MethodInfo *)0x0);
  return;
}


// MapEditor.ReparentObjectsCommand$$ApplyStates
// il2cpp: void MapEditor_ReparentObjectsCommand__ApplyStates (MapEditor_ReparentObjectsCommand_o* __this, System_Collections_Generic_Dictionary_int__ReparentObjectsCommand_ObjectState__o* states, const MethodInfo* method);
// 0x1821fa150
// eh: try 0x1821fa260..0x1821fa5a8 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821fa3ec: mov rdx, qword ptr [rip + 0x1eb95cd]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object
// asm:   0x1821fa3f3: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821fa3f8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821fa3fd: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821fa402: test rcx, rcx
// asm:   0x1821fa405: jne 0x1821fa597
// asm:   0x1821fa40b: mov r15, qword ptr [rsp + 0x98]
// asm:   0x1821fa413: mov r12, qword ptr [rsp + 0x90]
// asm:   0x1821fa54c: mov rdx, qword ptr [rip + 0x1eb946d]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object
// asm:   0x1821fa553: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821fa558: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821fa55d: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821fa562: test rcx, rcx
// asm:   0x1821fa565: jne 0x1821fa5a8
// asm:   0x1821fa597: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821fa5a8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void MapEditor_ReparentObjectsCommand__ApplyStates
               (MapEditor_ReparentObjectsCommand_o *__this,
               System_Collections_Generic_Dictionary_int__ReparentObjectsCommand_ObjectState__o *states,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  int32_t iVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar4;
  Map_MapObject_o *pMVar5;
  uint64_t uVar6;
  Map_MapObject_o *parent;
  MapEditor_ReparentObjectsCommand_ObjectState_o *state;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  Il2CppObject *local_30;
  
  if (Il2CppMethodInitialized_18434700e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object_40b3aa0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object_40b3b80
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_ReparentObjectsCommand_ObjectState_GetEn
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_18434700e = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (Il2CppObject *)0x0;
  if (states != (System_Collections_Generic_Dictionary_int__ReparentObjectsCommand_ObjectState__o *)0x0) {
    pSVar4 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
             System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)states,
                        (MethodInfo_13C6500 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_get_Keys
                       );
    if (pSVar4 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_58,
                 pSVar4,(MethodInfo_F1E550 *)
                        MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_ReparentObjectsCommand_ObjectState_GetEn
                );
      local_40 = (undefined1  [8])local_58._0_8_;
      pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
      local_30 = local_48;
      local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
      while( true ) {
        bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__object___MoveNext
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           local_40,(MethodInfo_15638A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object_40b3aa0
                          );
        if (!bVar3) break;
        iVar2 = (int32_t)local_30;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                          (pSVar1,iVar2,
                           (MethodInfo_1407110 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (bVar3) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar5 = (Map_MapObject_o *)
                   System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar1,iVar2,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                            ((System_Collections_Generic_Dictionary_int__ulong__o *)states,iVar2,
                             (MethodInfo_14156F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_get_Item
                            );
          if (uVar6 == 0) {
            ThrowNullReferenceException();
          }
          parent = (Map_MapObject_o *)0x0;
          if (-1 < *(int *)(uVar6 + 0x10)) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                              (pSVar1,*(int32_t *)(uVar6 + 0x10),
                               (MethodInfo_1407110 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
            if (bVar3) {
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                ThrowNullReferenceException();
              }
              parent = (Map_MapObject_o *)
                       System_Collections_Generic_Dictionary_int__ulong___get_Item
                                 (pSVar1,*(int32_t *)(uVar6 + 0x10),
                                  (MethodInfo_14156F0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            }
          }
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          Map_MapLoader__SetParentLogical(pMVar5,parent,(MethodInfo *)0x0);
        }
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object
                );
      pSVar4 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
               System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)states,
                          (MethodInfo_13C6500 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_get_Keys
                         );
      if (pSVar4 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_StylePropertyAnimationSystem_ElementPropertyPair__Int32Enum___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_58,pSVar4,
                   (MethodInfo_F1E550 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_ReparentObjectsCommand_ObjectState_GetEn
                  );
        local_40 = (undefined1  [8])local_58._0_8_;
        pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
        local_30 = local_48;
        local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
        while( true ) {
          bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_uint__object___MoveNext
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *
                             )local_40,
                             (MethodInfo_15638A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object_40b3aa0
                            );
          if (!bVar3) {
            System_Configuration_ConfigurationCollectionAttribute___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object
                      );
            return;
          }
          iVar2 = (int32_t)local_30;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) break;
          bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar1,iVar2,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar3) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            pMVar5 = (Map_MapObject_o *)
                     System_Collections_Generic_Dictionary_int__ulong___get_Item
                               (pSVar1,iVar2,
                                (MethodInfo_14156F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            state = (MapEditor_ReparentObjectsCommand_ObjectState_o *)
                    System_Collections_Generic_Dictionary_int__ulong___get_Item
                              ((System_Collections_Generic_Dictionary_int__ulong__o *)states,iVar2,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_get_Item
                              );
            MapEditor_ReparentObjectsCommand__ApplyState(__this,pMVar5,state,(MethodInfo *)0x0);
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ReparentObjectsCommand$$CaptureState
// il2cpp: MapEditor_ReparentObjectsCommand_ObjectState_o* MapEditor_ReparentObjectsCommand__CaptureState (MapEditor_ReparentObjectsCommand_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x1821fa5c0

MapEditor_ReparentObjectsCommand_ObjectState_o *
MapEditor_ReparentObjectsCommand__CaptureState
          (MapEditor_ReparentObjectsCommand_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  UnityEngine_GameObject_o *pUVar5;
  float fVar6;
  int32_t iVar7;
  MapEditor_ReparentObjectsCommand_ObjectState_o *__this_00;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Vector3_o *pUVar9;
  UnityEngine_Quaternion_o *pUVar10;
  Unity_Mathematics_float3_o *pUVar11;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Quaternion_o local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_18434700f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReparentObjectsCommand_ObjectState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434700f = '\x01';
  }
  local_38[0].x = 0.0;
  local_38[0].y = 0.0;
  local_38[0].z = 0.0;
  local_38[0].w = 0.0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ReparentObjectsCommand_ObjectState);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar7 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
  if (((__this_00 != (MapEditor_ReparentObjectsCommand_ObjectState_o *)0x0) &&
      ((__this_00->fields).Parent = iVar7, obj != (Map_MapObject_o *)0x0)) &&
     (pUVar5 = (obj->fields).GameObject, pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      pUVar9 = UnityEngine_Transform__get_localPosition
                         ((UnityEngine_Vector3_o *)&local_58,pUVar8,(MethodInfo *)0x0);
      fVar4 = (pUVar9->fields).z;
      fVar6 = (pUVar9->fields).y;
      (__this_00->fields).Position.fields.x = (pUVar9->fields).x;
      (__this_00->fields).Position.fields.y = fVar6;
      (__this_00->fields).Position.fields.z = fVar4;
      pUVar5 = (obj->fields).GameObject;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar10 = UnityEngine_Transform__get_localRotation(&local_48,pUVar8,(MethodInfo *)0x0);
          local_38[0].x = (pUVar10->fields).x;
          local_38[0].y = (pUVar10->fields).y;
          local_38[0].z = (pUVar10->fields).z;
          local_38[0].w = (pUVar10->fields).w;
          pUVar9 = UnityEngine_Quaternion__Internal_ToEulerRad
                             ((UnityEngine_Vector3_o *)&local_58,(UnityEngine_Quaternion_o *)local_38,
                              (MethodInfo *)0x0);
          uVar1 = (pUVar9->fields).x;
          uVar3 = (pUVar9->fields).y;
          local_68.y = (float)uVar3 * 57.29578;
          local_68.x = (float)uVar1 * 57.29578;
          local_68.z = (pUVar9->fields).z * 57.29578;
          pUVar9 = UnityEngine_Quaternion__Internal_MakePositive
                             ((UnityEngine_Vector3_o *)&local_58,(UnityEngine_Vector3_o *)&local_68,
                              (MethodInfo *)0x0);
          fVar4 = (pUVar9->fields).z;
          fVar6 = (pUVar9->fields).y;
          (__this_00->fields).Rotation.fields.x = (pUVar9->fields).x;
          (__this_00->fields).Rotation.fields.y = fVar6;
          (__this_00->fields).Rotation.fields.z = fVar4;
          pUVar5 = (obj->fields).GameObject;
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            pUVar8 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              pUVar9 = UnityEngine_Transform__get_localScale
                                 ((UnityEngine_Vector3_o *)&local_58,pUVar8,(MethodInfo *)0x0);
              uVar2._0_4_ = (obj->fields).BaseScale.fields.x;
              uVar2._4_4_ = (obj->fields).BaseScale.fields.y;
              fVar4 = (obj->fields).BaseScale.fields.z;
              local_58.x = (pUVar9->fields).x;
              local_58.y = (pUVar9->fields).y;
              local_58.z = (pUVar9->fields).z;
              if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
              }
              local_68._0_8_ = uVar2;
              local_68.z = fVar4;
              pUVar11 = Unity_Mathematics_float3__op_Division
                                  ((Unity_Mathematics_float3_o *)&local_48,
                                   (Unity_Mathematics_float3_o *)&local_58,
                                   (Unity_Mathematics_float3_o *)&local_68,(MethodInfo *)0x0);
              fVar6 = (pUVar11->fields).y;
              fVar4 = (pUVar11->fields).z;
              (__this_00->fields).Scale.fields.x = (pUVar11->fields).x;
              (__this_00->fields).Scale.fields.y = fVar6;
              (__this_00->fields).Scale.fields.z = fVar4;
              return __this_00;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ReparentObjectsCommand$$ApplyState
// il2cpp: void MapEditor_ReparentObjectsCommand__ApplyState (MapEditor_ReparentObjectsCommand_o* __this, Map_MapObject_o* obj, MapEditor_ReparentObjectsCommand_ObjectState_o* state, const MethodInfo* method);
// 0x1821f9f00

void MapEditor_ReparentObjectsCommand__ApplyState
               (MapEditor_ReparentObjectsCommand_o *__this,Map_MapObject_o *obj,
               MapEditor_ReparentObjectsCommand_ObjectState_o *state,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  UnityEngine_GameObject_o *pUVar5;
  Map_MapScriptBaseObject_o *pMVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Quaternion_o *pUVar8;
  Unity_Mathematics_float3_o *pUVar9;
  UnityEngine_Vector3_Fields local_68;
  Unity_Mathematics_float3_Fields local_58;
  UnityEngine_Quaternion_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_184347010 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184347010 = '\x01';
  }
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pUVar5 = (obj->fields).GameObject, pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar7 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
    if ((state != (MapEditor_ReparentObjectsCommand_ObjectState_o *)0x0) &&
       (pUVar7 != (UnityEngine_Transform_o *)0x0)) {
      local_68.z = (state->fields).Position.fields.z;
      local_68.x = (state->fields).Position.fields.x;
      local_68.y = (state->fields).Position.fields.y;
      UnityEngine_Transform__set_localPosition(pUVar7,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
      pUVar5 = (obj->fields).GameObject;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        uVar1 = (state->fields).Rotation.fields.x;
        uVar3 = (state->fields).Rotation.fields.y;
        local_68.y = (float)uVar3 * 0.017453292;
        local_68.x = (float)uVar1 * 0.017453292;
        local_68.z = (state->fields).Rotation.fields.z * 0.017453292;
        pUVar8 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Quaternion_o *)local_48,(UnityEngine_Vector3_o *)&local_68,
                            (MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          local_48[0].x = (pUVar8->fields).x;
          local_48[0].y = (pUVar8->fields).y;
          local_48[0].z = (pUVar8->fields).z;
          local_48[0].w = (pUVar8->fields).w;
          UnityEngine_Transform__set_localRotation
                    (pUVar7,(UnityEngine_Quaternion_o *)local_48,(MethodInfo *)0x0);
          pUVar5 = (obj->fields).GameObject;
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            pUVar7 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
            local_58.x = (obj->fields).BaseScale.fields.x;
            local_58.y = (obj->fields).BaseScale.fields.y;
            local_58.z = (obj->fields).BaseScale.fields.z;
            uVar2._0_4_ = (state->fields).Scale.fields.x;
            uVar2._4_4_ = (state->fields).Scale.fields.y;
            fVar4 = (state->fields).Scale.fields.z;
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            local_68._0_8_ = uVar2;
            local_68.z = fVar4;
            pUVar9 = Unity_Mathematics_float3__op_Multiply
                               ((Unity_Mathematics_float3_o *)local_48,(Unity_Mathematics_float3_o *)&local_58
                                ,(Unity_Mathematics_float3_o *)&local_68,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              local_58.x = (pUVar9->fields).x;
              local_58.y = (pUVar9->fields).y;
              local_58.z = (pUVar9->fields).z;
              UnityEngine_Transform__set_localScale
                        (pUVar7,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
              pMVar6 = (obj->fields).ScriptObject;
              if (pMVar6 != (Map_MapScriptBaseObject_o *)0x0) {
                (pMVar6->fields).Parent = (state->fields).Parent;
                pMVar6 = (obj->fields).ScriptObject;
                if (pMVar6 != (Map_MapScriptBaseObject_o *)0x0) {
                  local_58.x = (state->fields).Position.fields.x;
                  local_58.y = (state->fields).Position.fields.y;
                  local_58.z = (state->fields).Position.fields.z;
                  Map_MapScriptBaseObject__SetPosition
                            (pMVar6,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
                  pMVar6 = (obj->fields).ScriptObject;
                  if (pMVar6 != (Map_MapScriptBaseObject_o *)0x0) {
                    local_58.x = (state->fields).Rotation.fields.x;
                    local_58.y = (state->fields).Rotation.fields.y;
                    local_58.z = (state->fields).Rotation.fields.z;
                    Map_MapScriptBaseObject__SetRotation
                              (pMVar6,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
                    pMVar6 = (obj->fields).ScriptObject;
                    if (pMVar6 != (Map_MapScriptBaseObject_o *)0x0) {
                      local_58.x = (state->fields).Scale.fields.x;
                      local_58.y = (state->fields).Scale.fields.y;
                      local_58.z = (state->fields).Scale.fields.z;
                      Map_MapScriptBaseObject__SetScale
                                (pMVar6,(UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


