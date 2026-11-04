// Type: MapEditor.ReorderObjectsCommand
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/MapEditor/ReorderObjectsCommand.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.ReorderObjectsCommand.<>c$$.cctor
// il2cpp: void MapEditor_ReorderObjectsCommand___c___cctor (const MethodInfo* method);
// 0x1822016c0

void MapEditor_ReorderObjectsCommand___c___cctor(MethodInfo *method)

{
  MapEditor_ReorderObjectsCommand___c_o *__this;
  
  if (Il2CppMethodInitialized_18434700a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReorderObjectsCommand_c);
    Il2CppMethodInitialized_18434700a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields->__9,__this);
  return;
}


// MapEditor.ReorderObjectsCommand.<>c$$.ctor
// il2cpp: void MapEditor_ReorderObjectsCommand___c___ctor (MapEditor_ReorderObjectsCommand___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
MapEditor_ReorderObjectsCommand___c___ctor(MapEditor_ReorderObjectsCommand___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.ReorderObjectsCommand.<>c$$<ApplyReorder>b__9_0
// il2cpp: int32_t MapEditor_ReorderObjectsCommand___c___ApplyReorder_b__9_0 (MapEditor_ReorderObjectsCommand___c_o* __this, int32_t id, const MethodInfo* method);
// 0x182200f50

int32_t MapEditor_ReorderObjectsCommand___c___ApplyReorder_b__9_0
                  (MapEditor_ReorderObjectsCommand___c_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_18434700b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_18434700b = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
    iVar1 = System_Collections_Generic_List_int___IndexOf
                      (__this_00,id,
                       (MethodInfo_91F570 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// MapEditor.ReorderObjectsCommand$$.ctor
// il2cpp: void MapEditor_ReorderObjectsCommand___ctor (MapEditor_ReorderObjectsCommand_o* __this, System_Collections_Generic_List_int__o* objectIds, int32_t anchorId, bool insertAfter, System_Nullable_int__o newParentId, const MethodInfo* method);
// 0x1821f9bf0
// eh: try 0x1821f9de0..0x1821f9ef2 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f9eba: mov rdx, qword ptr [rip + 0x1e8e427]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1821f9ec1: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821f9ec6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f9ecb: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821f9ed0: test rcx, rcx
// asm:   0x1821f9ed3: jne 0x1821f9ef2
// asm:   0x1821f9ef2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void MapEditor_ReorderObjectsCommand___ctor
               (MapEditor_ReorderObjectsCommand_o *__this,System_Collections_Generic_List_int__o *objectIds,
               int32_t anchorId,bool insertAfter,System_Nullable_int__o newParentId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  int32_t key;
  bool bVar2;
  int32_t value;
  System_Collections_Generic_Dictionary_int__int__o *pSVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  System_Collections_Generic_List_int__o *__this_00;
  Map_MapObject_o *obj;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_184347007 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b2f90);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347007 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  (__this->fields)._oldParents = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldParents,pSVar3);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor_92b2a0
            (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)objectIds,
             (MethodInfo_92B2A0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b2f90);
  (__this->fields)._objectIds = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._objectIds,pSVar4);
  (__this->fields)._anchorId = anchorId;
  (__this->fields)._insertAfter = insertAfter;
  (__this->fields)._newParentId.fields = newParentId.fields;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar4 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor_92b2a0
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pSVar4,
             (MethodInfo_92B2A0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b2f90);
  (__this->fields)._oldOrder = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldOrder,__this_00);
  if (objectIds != (System_Collections_Generic_List_int__o *)0x0) {
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)objectIds,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._current = local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                        (&local_48,
                         (MethodInfo_1530180 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_int___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
        return;
      }
      key = (int32_t)local_48.fields._current;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) break;
      bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,key,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar2) {
        pSVar3 = (__this->fields)._oldParents;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        obj = (Map_MapObject_o *)
              System_Collections_Generic_Dictionary_int__ulong___get_Item
                        (pSVar1,key,
                         (MethodInfo_14156F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        value = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
        if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_int__int___set_Item
                  (pSVar3,key,value,
                   (MethodInfo_14159F0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// MapEditor.ReorderObjectsCommand$$Execute
// il2cpp: void MapEditor_ReorderObjectsCommand__Execute (MapEditor_ReorderObjectsCommand_o* __this, const MethodInfo* method);
// 0x1821f9850

void MapEditor_ReorderObjectsCommand__Execute(MapEditor_ReorderObjectsCommand_o *__this,MethodInfo *method)

{
  MapEditor_ReorderObjectsCommand__ApplyReorder(__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.ReorderObjectsCommand$$Unexecute
// il2cpp: void MapEditor_ReorderObjectsCommand__Unexecute (MapEditor_ReorderObjectsCommand_o* __this, const MethodInfo* method);
// 0x1821f9860
// eh: try 0x1821f9970..0x1821f9bdf -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f9b1c: mov rdx, qword ptr [rip + 0x1eb5605]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_int_Dispose
// asm:   0x1821f9b23: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821f9b28: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f9b2d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821f9b32: test rcx, rcx
// asm:   0x1821f9b35: jne 0x1821f9bdf
// asm:   0x1821f9b3b: mov r15, qword ptr [rsp + 0x90]
// asm:   0x1821f9bdf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void MapEditor_ReorderObjectsCommand__Unexecute(MapEditor_ReorderObjectsCommand_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_uint__int__o *__this_00;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  int32_t iVar7;
  Map_MapObject_o *obj;
  Map_MapObject_o *parent;
  int iStackX_1c;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  Il2CppObject *pIStack_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  Il2CppObject *local_30;
  Il2CppObject *pIStack_28;
  
  if (Il2CppMethodInitialized_184347008 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_int_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184347008 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (Il2CppObject *)0x0;
  pIStack_28 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_uint__int__o *)(__this->fields)._oldParents;
  if (__this_00 != (System_Collections_Generic_Dictionary_uint__int__o *)0x0) {
    System_Collections_Generic_Dictionary_uint__int___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_60,__this_00,
               (MethodInfo_13E5010 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_GetEnumerator);
    local_40 = (undefined1  [8])local_60._0_8_;
    pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_30 = local_50;
    pIStack_28 = pIStack_48;
    local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
    while( true ) {
      bVar6 = System_Collections_Generic_Dictionary_Enumerator_uint__int___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_40,
                         (MethodInfo_1565150 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_int_MoveNext);
      pIVar5 = local_30;
      if (!bVar6) break;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar2,(int32_t)pIVar5,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar6) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        obj = (Map_MapObject_o *)
              System_Collections_Generic_Dictionary_int__ulong___get_Item
                        (pSVar2,(int32_t)pIVar5,
                         (MethodInfo_14156F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        iVar7 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
        iStackX_1c = (int)((ulonglong)pIVar5 >> 0x20);
        if (iVar7 != iStackX_1c) {
          if ((longlong)pIVar5 < 0) {
label_1821f9ac7:
            parent = (Map_MapObject_o *)0x0;
          }
          else {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar2 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar6 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                              (pSVar2,iStackX_1c,
                               (MethodInfo_1407110 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
            if (!bVar6) goto label_1821f9ac7;
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
                               (pSVar2,iStackX_1c,
                                (MethodInfo_14156F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          }
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          Map_MapLoader__SetParentLogical(obj,parent,(MethodInfo *)0x0);
          if (obj == (Map_MapObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar3 = (obj->fields).ScriptObject;
          if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          (pMVar3->fields).Parent = iStackX_1c;
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_int_Dispose);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar4 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (pSVar4 != (System_Collections_Generic_List_int__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar4->fields)._size = 0;
      pSVar4 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
      if (pSVar4 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List_int___AddRange
                  (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._oldOrder,
                   (MethodInfo_91A3E0 *)MethodInfo_System_Collections_Generic_List_int_AddRange);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ReorderObjectsCommand$$ApplyReorder
// il2cpp: void MapEditor_ReorderObjectsCommand__ApplyReorder (MapEditor_ReorderObjectsCommand_o* __this, const MethodInfo* method);
// 0x1821f9190
// eh: try 0x1821f93c0..0x1821f9843 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 43 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f93bf: nop 
// asm:   0x1821f94ca: mov rdx, qword ptr [rip + 0x1e8ee17]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1821f94d1: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821f94d6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f94db: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821f94e0: test rcx, rcx
// asm:   0x1821f94e3: jne 0x1821f9837
// asm:   0x1821f94e9: mov r13, qword ptr [rsp + 0x90]
// asm:   0x1821f94f1: xor esi, esi
// asm:   0x1821f96ed: mov rdx, qword ptr [rip + 0x1e8ebf4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1821f96f4: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821f96f9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f96fe: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821f9703: test rcx, rcx
// asm:   0x1821f9706: jne 0x1821f9843
// asm:   0x1821f970c: xor esi, esi
// asm:   0x1821f970e: mov r13, qword ptr [rsp + 0x90]
// asm:   0x1821f9716: mov r15, qword ptr [rsp + 0xa0]
// asm:   0x1821f971e: mov r14, r15
// asm:   0x1821f9837: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821f9843: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void MapEditor_ReorderObjectsCommand__ApplyReorder
               (MapEditor_ReorderObjectsCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  Map_MapScriptBaseObject_o *pMVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  System_Collections_Generic_Dictionary_int__MapObject__o *object;
  Il2CppObject *object_00;
  System_Collections_Generic_List_uint__o *__this_01;
  bool bVar4;
  uint32_t key;
  uint32_t uVar5;
  int32_t iVar6;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o item;
  Map_MapObject_o *parent;
  Map_MapObject_o *obj;
  System_Console_WindowsConsole_WindowsCancelHandler_o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *__this_03;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_04;
  int index;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  Il2CppObject *local_30;
  
  if (Il2CppMethodInitialized_184347009 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_MapEditor_ReorderObjectsCommand_c_ApplyReorder_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReorderObjectsCommand_c);
    Il2CppMethodInitialized_184347009 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (Il2CppObject *)0x0;
  if ((__this->fields)._newParentId.fields.hasValue != false) {
    key = System_Nullable_uint___get_Value
                    ((System_Nullable_uint__o *)&(__this->fields)._newParentId,
                     (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_int_get_Value);
    if ((int)key < 0) {
label_1821f9377:
      parent = (Map_MapObject_o *)0x0;
    }
    else {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1821f9849;
      bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,key,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar4) goto label_1821f9377;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1821f9849;
      parent = (Map_MapObject_o *)
               System_Collections_Generic_Dictionary_int__ulong___get_Item
                         (pSVar1,key,
                          (MethodInfo_14156F0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    }
    __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._objectIds;
    if (__this_00 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) goto label_1821f9849;
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,__this_00,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_40 = (undefined1  [8])local_58._0_8_;
    pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
    local_30 = local_48;
    local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
    while (bVar4 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                             ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                              (MethodInfo_1530180 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar4) {
      iVar6 = (int32_t)local_30;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar4 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (pSVar1,iVar6,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar4) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        obj = (Map_MapObject_o *)
              System_Collections_Generic_Dictionary_int__ulong___get_Item
                        (pSVar1,iVar6,
                         (MethodInfo_14156F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        uVar5 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
        if (uVar5 != key) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          Map_MapLoader__SetParentLogical(obj,parent,(MethodInfo *)0x0);
          if (obj == (Map_MapObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar2 = (obj->fields).ScriptObject;
          if (pMVar2 == (Map_MapScriptBaseObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          (pMVar2->fields).Parent = key;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
               MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
  }
  index = 0;
  pSVar3 = (__this->fields)._objectIds;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  object = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  __this_02 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
  if (object != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
    System_Func_int__bool____ctor
              (__this_02,(Il2CppObject *)object,(intptr_t)((Il2CppClass *)object->klass)->vtable[0x24].method,
               (MethodInfo *)0x0);
    source = System_Linq_Enumerable__Where_float_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                        (System_Func_TSource__bool__o *)__this_02,
                        (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_int);
    if ((TypeInfo_MapEditor_ReorderObjectsCommand_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand_c);
    }
    __this_03 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
                TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields->__9__9_0;
    if (__this_03 ==
        (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)0x0) {
      if ((TypeInfo_MapEditor_ReorderObjectsCommand_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand_c);
      }
      object_00 = (Il2CppObject *)TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields->__9;
      __this_03 = (Mono_Unity_UnityTls_unitytls_interface_struct_unitytls_x509verify_result_to_string_t_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
      System_Func_int__int____ctor
                (__this_03,object_00,
                 (intptr_t)MethodInfo_MapEditor_ReorderObjectsCommand_c_ApplyReorder_b__9_0,(MethodInfo *)0x0)
      ;
      TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields->__9__9_0 =
           (System_Func_int__int__o *)__this_03;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields->__9__9_0,__this_03);
    }
    source_00 = System_Linq_Enumerable__OrderBy_object__int_
                          (source,(System_Func_TSource__TKey__o *)__this_03,
                           (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
    __this_04 = System_Linq_Enumerable__ToList_int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           (MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
    if (__this_04 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                 (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_04,
                 (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      local_40 = (undefined1  [8])local_58._0_8_;
      pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
      local_30 = local_48;
      local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
      while (bVar4 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                               ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                                (MethodInfo_1530180 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar4) {
        iVar6 = (int32_t)local_30;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
        if (pSVar3 == (System_Collections_Generic_List_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_int___Remove
                  (pSVar3,iVar6,(MethodInfo_923050 *)MethodInfo_System_Collections_Generic_List_int_Remove);
      }
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                 MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
      if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
        iVar6 = System_Collections_Generic_List_int___IndexOf
                          (pSVar3,(__this->fields)._anchorId,
                           (MethodInfo_91F570 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
        if (iVar6 < 0) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
          if (pSVar3 == (System_Collections_Generic_List_int__o *)0x0) goto label_1821f9849;
          iVar6 = (pSVar3->fields)._size;
        }
        else if ((__this->fields)._insertAfter != false) {
          iVar6 = iVar6 + 1;
        }
        while( true ) {
          if ((__this_04->fields)._size <= index) {
            return;
          }
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          __this_01 = (System_Collections_Generic_List_uint__o *)
                      TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
          item = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                           ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_04,index,
                            (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
          if (__this_01 == (System_Collections_Generic_List_uint__o *)0x0) break;
          System_Collections_Generic_List_uint___Insert
                    (__this_01,index + iVar6,(uint32_t)item.fields,
                     (MethodInfo_9221F0 *)MethodInfo_System_Collections_Generic_List_int_Insert);
          index = index + 1;
        }
      }
    }
  }
label_1821f9849:
  ThrowNullReferenceException();
}


