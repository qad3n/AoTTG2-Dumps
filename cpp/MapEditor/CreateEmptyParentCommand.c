// Type: MapEditor.CreateEmptyParentCommand
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/MapEditor/CreateEmptyParentCommand.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.CreateEmptyParentCommand$$get_ParentId
// il2cpp: int32_t MapEditor_CreateEmptyParentCommand__get_ParentId (MapEditor_CreateEmptyParentCommand_o* __this, const MethodInfo* method);
// 0x180a4c170

int32_t
MapEditor_CreateEmptyParentCommand__get_ParentId(MapEditor_CreateEmptyParentCommand_o* __this, MethodInfo* method)

{
  return (__this->fields)._parentId;
}


// MapEditor.CreateEmptyParentCommand$$.ctor
// il2cpp: void MapEditor_CreateEmptyParentCommand___ctor (MapEditor_CreateEmptyParentCommand_o* __this, Map_MapScriptBaseObject_o* parent, System_Collections_Generic_List_int__o* childIds, int32_t insertAfterId, const MethodInfo* method);
// 0x1821ed920

void MapEditor_CreateEmptyParentCommand___ctor
               (MapEditor_CreateEmptyParentCommand_o *__this,Map_MapScriptBaseObject_o *parent,
               System_Collections_Generic_List_int__o *childIds,int32_t insertAfterId,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapScriptBaseObject_array *pMVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_MapScriptBaseObject__o *objs;
  MapEditor_AddObjectCommand_o *__this_00;
  
  if (Il2CppMethodInitialized_184347001 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
    Il2CppMethodInitialized_184347001 = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  objs = il2cpp_codegen_object_new
                   ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)objs,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
  pMVar4 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
  if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
    piVar1 = &(objs->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar3 = (objs->fields)._items;
    if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
      uVar2 = (objs->fields)._size;
      if (uVar2 < (uint)pMVar3->max_length) {
        (objs->fields)._size = uVar2 + 1;
        if ((uint)pMVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pMVar3->m_Items[(int)uVar2] = parent;
        Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2,parent);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)objs,(Il2CppObject *)parent,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand);
      MapEditor_AddObjectCommand___ctor(__this_00,objs,insertAfterId,(MethodInfo *)0x0);
      (__this->fields)._addCommand = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._addCommand,__this_00);
      if (parent != (Map_MapScriptBaseObject_o *)0x0) {
        (__this->fields)._parentId = (parent->fields).Id;
        (__this->fields)._childIds = childIds;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._childIds,childIds);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.CreateEmptyParentCommand$$Execute
// il2cpp: void MapEditor_CreateEmptyParentCommand__Execute (MapEditor_CreateEmptyParentCommand_o* __this, const MethodInfo* method);
// 0x1821ed590
// eh: try 0x1821ed750..0x1821ed8c6 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ed822: mov rdx, qword ptr [rip + 0x1e9aabf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1821ed829: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821ed82e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ed833: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ed838: test rcx, rcx
// asm:   0x1821ed83b: jne 0x1821ed8c6
// asm:   0x1821ed841: mov r14, qword ptr [rsp + 0x80]
// asm:   0x1821ed849: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x1821ed8c6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void MapEditor_CreateEmptyParentCommand__Execute
               (MapEditor_CreateEmptyParentCommand_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MapEditor_AddObjectCommand_o *pMVar2;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *pSVar3;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar4;
  bool bVar5;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o anchorId;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  uint64_t uVar6;
  MapEditor_ReparentObjectsCommand_o *pMVar7;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  undefined1 local_38 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_30;
  Il2CppObject *local_28;
  
  if (Il2CppMethodInitialized_184347002 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_MapObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReparentObjectsCommand);
    Il2CppMethodInitialized_184347002 = '\x01';
  }
  local_38 = (undefined1  [8])0x0;
  pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_28 = (Il2CppObject *)0x0;
  pMVar2 = (__this->fields)._addCommand;
  if (pMVar2 != (MapEditor_AddObjectCommand_o *)0x0) {
    (*(pMVar2->klass->vtable)._4_Execute.methodPtr)(pMVar2,(pMVar2->klass->vtable)._4_Execute.method);
    pSVar3 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._childIds;
    if (pSVar3 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
      if (0 < (pSVar3->fields)._size) {
        iVar1 = (__this->fields)._parentId;
        anchorId = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                             (pSVar3,0,(MethodInfo_92B8E0 *)
                                       MethodInfo_System_Collections_Generic_List_int_get_Item);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__MoveInOrder(iVar1,(int32_t)anchorId.fields,false,(MethodInfo *)0x0);
      }
      if ((__this->fields)._reparentCommand == (MapEditor_ReparentObjectsCommand_o *)0x0) {
        mapObjects = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)mapObjects,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
        pSVar3 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)(__this->fields)._childIds;
        if (pSVar3 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
        goto label_1821ed8af;
        System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_50,pSVar3,
                   (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
        local_38 = (undefined1  [8])local_50._0_8_;
        pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50._8_8_;
        local_28 = local_40;
        local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_50._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
        while( true ) {
          bVar5 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                            ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                             (MethodInfo_1530180 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
          if (!bVar5) break;
          iVar1 = (int32_t)local_28;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                            (pSVar4,iVar1,
                             (MethodInfo_1407110 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar5) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar4 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar4 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (pSVar4,iVar1,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(mapObjects,uVar6,MethodInfo_System_Collections_Generic_List_MapObject_Add);
          }
        }
        System_Collections_Generic_List_Enumerator_int___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                   MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
        iVar1 = (__this->fields)._parentId;
        pMVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ReparentObjectsCommand);
        MapEditor_ReparentObjectsCommand___ctor(pMVar7,mapObjects,iVar1,(MethodInfo *)0x0);
        (__this->fields)._reparentCommand = pMVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._reparentCommand,pMVar7);
      }
      pMVar7 = (__this->fields)._reparentCommand;
      if (pMVar7 != (MapEditor_ReparentObjectsCommand_o *)0x0) {
        (*(pMVar7->klass->vtable)._4_Execute.methodPtr)(pMVar7,(pMVar7->klass->vtable)._4_Execute.method);
        return;
      }
    }
  }
label_1821ed8af:
  ThrowNullReferenceException();
}


// MapEditor.CreateEmptyParentCommand$$Unexecute
// il2cpp: void MapEditor_CreateEmptyParentCommand__Unexecute (MapEditor_CreateEmptyParentCommand_o* __this, const MethodInfo* method);
// 0x1821ed8d0

void MapEditor_CreateEmptyParentCommand__Unexecute
               (MapEditor_CreateEmptyParentCommand_o *__this,MethodInfo *method)

{
  MapEditor_ReparentObjectsCommand_o *pMVar1;
  MapEditor_AddObjectCommand_o *pMVar2;
  
  pMVar1 = (__this->fields)._reparentCommand;
  if (pMVar1 != (MapEditor_ReparentObjectsCommand_o *)0x0) {
    (*(pMVar1->klass->vtable)._5_Unexecute.methodPtr)(pMVar1,(pMVar1->klass->vtable)._5_Unexecute.method);
    pMVar2 = (__this->fields)._addCommand;
    if (pMVar2 != (MapEditor_AddObjectCommand_o *)0x0) {
      (*(pMVar2->klass->vtable)._5_Unexecute.methodPtr)(pMVar2,(pMVar2->klass->vtable)._5_Unexecute.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


