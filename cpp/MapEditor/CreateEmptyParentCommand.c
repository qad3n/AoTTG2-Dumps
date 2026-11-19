// Type: MapEditor.CreateEmptyParentCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/CreateEmptyParentCommand.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.CreateEmptyParentCommand$$get_ParentId
// il2cpp: int32_t MapEditor_CreateEmptyParentCommand__get_ParentId (MapEditor_CreateEmptyParentCommand_o* __this, const MethodInfo* method);
// 0x5c8bec0

int32_t MapEditor_CreateEmptyParentCommand__get_ParentId
                  (MapEditor_CreateEmptyParentCommand_o *__this,MethodInfo *method)

{
  return (__this->fields)._parentId;
}


// MapEditor.CreateEmptyParentCommand$$.ctor
// il2cpp: void MapEditor_CreateEmptyParentCommand___ctor (MapEditor_CreateEmptyParentCommand_o* __this, Map_MapScriptBaseObject_o* parent, System_Collections_Generic_List_int__o* childIds, int32_t insertAfterId, const MethodInfo* method);
// 0x5c8bed0

void MapEditor_CreateEmptyParentCommand___ctor
               (MapEditor_CreateEmptyParentCommand_o *__this,Map_MapScriptBaseObject_o *parent,
               System_Collections_Generic_List_int__o *childIds,int32_t insertAfterId,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Map_MapScriptBaseObject_array *pMVar3;
  System_Collections_Generic_List_MapScriptBaseObject__o *objs;
  MapEditor_AddObjectCommand_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075479c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
    Il2CppMethodInitialized_075479c6 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  objs = il2cpp_codegen_object_new
                   ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)objs,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
  method_00 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
  if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
    piVar1 = &(objs->fields)._version;
    *piVar1 = *piVar1 + 1;
    pMVar3 = (objs->fields)._items;
    if (pMVar3 != (Map_MapScriptBaseObject_array *)0x0) {
      uVar2 = (objs->fields)._size;
      if (uVar2 < (uint)pMVar3->max_length) {
        method_00 = (MethodInfo *)(ulong)(uVar2 + 1);
        (objs->fields)._size = uVar2 + 1;
        pMVar3->m_Items[(int)uVar2] = parent;
        Il2CppCodeGenWriteBarrier(pMVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)objs,(Il2CppObject *)parent,
                   (MethodInfo_395D230 *)method_00->klass->rgctx_data[0xe].method);
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand);
      MapEditor_AddObjectCommand___ctor(__this_00,objs,insertAfterId,method_00);
      (__this->fields)._addCommand = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._addCommand);
      if (parent != (Map_MapScriptBaseObject_o *)0x0) {
        (__this->fields)._parentId = (parent->fields).Id;
        (__this->fields)._childIds = childIds;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._childIds);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.CreateEmptyParentCommand$$Execute
// il2cpp: void MapEditor_CreateEmptyParentCommand__Execute (MapEditor_CreateEmptyParentCommand_o* __this, const MethodInfo* method);
// 0x5c8c020
// eh: try 0x5c8c20f..0x5c8c40b -> pad 0x5c8c41d (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8c43b..0x5c8c440 -> pad 0x5c8c463 cleanup
// eh: try 0x5c8c466..0x5c8c470 -> pad 0x5c8c478 catch (...) [compiler noexcept guard]
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8c1e2: lea r12, [rip + 0x1602017]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext
// asm:   0x5c8c1e9: mov r15, rsp
// asm:   0x5c8c1ec: lea rbx, [rip + 0x15ee79d]  ; TypeInfo_Map_MapLoader
// asm:   0x5c8c1f3: lea r14, [rip + 0x15fdde6]  ; MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
// asm:   0x5c8c1fa: jmp 0x5c8c21a
// asm:   0x5c8c2e8: lea r14, [rip + 0x1601f11]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext
// asm:   0x5c8c2ef: mov r15, rsp
// asm:   0x5c8c2f2: lea rbx, [rip + 0x15ee697]  ; TypeInfo_Map_MapLoader
// asm:   0x5c8c2f9: lea r12, [rip + 0x15fdce0]  ; MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
// asm:   0x5c8c40b: jmp 0x5c8c423
// asm:   0x5c8c40d: jmp 0x5c8c423
// asm:   0x5c8c40f: jmp 0x5c8c423
// asm:   0x5c8c411: jmp 0x5c8c423
// asm:   0x5c8c413: jmp 0x5c8c423
// asm:   0x5c8c415: jmp 0x5c8c423
// asm:   0x5c8c417: jmp 0x5c8c423
// asm:   0x5c8c419: jmp 0x5c8c423
// asm:   0x5c8c41b: jmp 0x5c8c423
// asm:   0x5c8c41d: jmp 0x5c8c423
// asm:   0x5c8c41f: jmp 0x5c8c423
// asm:   0x5c8c421: jmp 0x5c8c423
// asm:   0x5c8c423: mov r15, rax
// asm:   0x5c8c426: cmp edx, 1
// asm:   0x5c8c429: jne 0x5c8c466
// asm:   0x5c8c42b: mov rdi, r15
// asm:   0x5c8c42e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8c433: mov rbp, qword ptr [rax]
// asm:   0x5c8c436: mov qword ptr [rsp + 0x18], rbp
// asm:   0x5c8c43b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8c440: lea rax, [rip + 0x1601db1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5c8c447: mov rsi, qword ptr [rax]
// asm:   0x5c8c44a: mov rdi, rsp
// asm:   0x5c8c44d: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5c8c452: test rbp, rbp
// asm:   0x5c8c455: je 0x5c8c387
// asm:   0x5c8c45b: mov rdi, rbp
// asm:   0x5c8c45e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8c463: mov r15, rax
// asm:   0x5c8c466: lea rdi, [rsp + 0x18]
// asm:   0x5c8c46b: call 0x2fda620  ; il2cpp_runtime_helper_02fda620()
// asm:   0x5c8c470: mov rdi, r15
// asm:   0x5c8c473: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8c478: mov rdi, rax
// asm:   0x5c8c47b: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_CreateEmptyParentCommand__Execute
               (MapEditor_CreateEmptyParentCommand_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  uint uVar3;
  MapEditor_AddObjectCommand_o *pMVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  System_Collections_Generic_Dictionary_int__object__o *pSVar6;
  MapEditor_CreateEmptyParentCommand_Fields *pMVar7;
  MethodInfo *pMVar8;
  MapEditor_CreateEmptyParentCommand_o *pMVar9;
  undefined1 *puVar10;
  bool bVar11;
  int32_t anchorId;
  System_Collections_Generic_List_MapObject__o *mapObjects;
  MethodInfo *item;
  MapEditor_ReparentObjectsCommand_o *pMVar12;
  Il2CppRGCTXData *in_RCX;
  undefined1 auStack_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *pIStack_58;
  undefined1 auStack_50 [16];
  Il2CppObject *pIStack_40;
  MapEditor_CreateEmptyParentCommand_o *pMStack_38;
  
  if (Il2CppMethodInitialized_075479c7 == '\0') {
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
    Il2CppMethodInitialized_075479c7 = '\x01';
  }
  auStack_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  pIStack_58 = (Il2CppObject *)0x0;
  pMVar4 = (__this->fields)._addCommand;
  if (pMVar4 != (MapEditor_AddObjectCommand_o *)0x0) {
    (*(pMVar4->klass->vtable)._4_Execute.methodPtr)(pMVar4,(pMVar4->klass->vtable)._4_Execute.method);
    pSVar5 = (__this->fields)._childIds;
    if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
      if (0 < (pSVar5->fields)._size) {
        iVar2 = (__this->fields)._parentId;
        anchorId = System_Collections_Generic_List_int___get_Item
                             (pSVar5,0,(MethodInfo_39167D0 *)
                                       MethodInfo_System_Collections_Generic_List_int_get_Item);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        in_RCX = (Il2CppRGCTXData *)0x0;
        Map_MapLoader__MoveInOrder(iVar2,anchorId,false,(MethodInfo *)0x0);
      }
      pMVar12 = (__this->fields)._reparentCommand;
      if (pMVar12 != (MapEditor_ReparentObjectsCommand_o *)0x0) {
label_05c8c3cc:
        (*(pMVar12->klass->vtable)._4_Execute.methodPtr)(pMVar12,(pMVar12->klass->vtable)._4_Execute.method);
        return;
      }
      mapObjects = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)mapObjects,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor);
      pSVar5 = (__this->fields)._childIds;
      if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
        pMStack_38 = __this;
        System_Collections_Generic_List_int___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,pSVar5,
                   (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
        pIStack_58 = pIStack_40;
        auStack_68 = (undefined1  [8])auStack_50._0_8_;
        puStack_60 = (undefined1 *)auStack_50._8_8_;
        auStack_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        auStack_50._8_8_ = auStack_68;
        puVar10 = auStack_68;
        if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
          do {
            auStack_50._8_8_ = puVar10;
            bVar11 = System_Collections_Generic_List_Enumerator_int___MoveNext
                               ((System_Collections_Generic_List_Enumerator_int__o *)auStack_68,
                                (MethodInfo_4C3B4A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
            if (!bVar11) goto label_05c8c375;
            iVar2 = (int32_t)pIStack_58;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05c8c3eb;
            bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                               (pSVar6,iVar2,
                                (MethodInfo_4A0F950 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
            puVar10 = (undefined1 *)auStack_50._8_8_;
          } while (!bVar11);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar6 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            System_Collections_Generic_Dictionary_int__object___get_Item
                      (pSVar6,iVar2,
                       (MethodInfo_4A0F690 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
label_05c8c406:
            ThrowNullReferenceException();
          }
label_05c8c370:
          ThrowNullReferenceException();
        }
        while (bVar11 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_int__o *)auStack_68,
                                   (MethodInfo_4C3B4A0 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar11
              ) {
          iVar2 = (int32_t)pIStack_58;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
label_05c8c3eb:
            ThrowNullReferenceException();
          }
          bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             (pSVar6,iVar2,
                              (MethodInfo_4A0F950 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar11) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05c8c370;
            item = (MethodInfo *)
                   System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar6,iVar2,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            pMVar8 = MethodInfo_System_Collections_Generic_List_MapObject_Add;
            piVar1 = &(mapObjects->fields)._version;
            *piVar1 = *piVar1 + 1;
            in_RCX = (Il2CppRGCTXData *)(mapObjects->fields)._items;
            if (in_RCX == (Il2CppRGCTXData *)0x0) goto label_05c8c406;
            uVar3 = (mapObjects->fields)._size;
            if (uVar3 < *(uint *)&in_RCX[3].rgctxDataDummy) {
              (mapObjects->fields)._size = uVar3 + 1;
              in_RCX[(long)(int)uVar3 + 4].method = item;
              Il2CppCodeGenWriteBarrier(&in_RCX[(long)(int)uVar3 + 4].rgctxDataDummy);
            }
            else {
              in_RCX = pMVar8->klass->rgctx_data;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)mapObjects,(Il2CppObject *)item,
                         (MethodInfo_395D230 *)in_RCX[0xe].method);
            }
          }
        }
label_05c8c375:
        System_Collections_Generic_List_Enumerator_int___Dispose
                  ((System_Collections_Generic_List_Enumerator_int__o *)auStack_68,
                   (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
        pMVar9 = pMStack_38;
        pMVar7 = &pMStack_38->fields;
        iVar2 = (pMStack_38->fields)._parentId;
        pMVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ReparentObjectsCommand);
        MapEditor_ReparentObjectsCommand___ctor(pMVar12,mapObjects,iVar2,(MethodInfo *)in_RCX);
        (pMVar9->fields)._reparentCommand = pMVar12;
        Il2CppCodeGenWriteBarrier(&pMVar7->_reparentCommand);
        pMVar12 = (pMVar9->fields)._reparentCommand;
        if (pMVar12 != (MapEditor_ReparentObjectsCommand_o *)0x0) goto label_05c8c3cc;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.CreateEmptyParentCommand$$Unexecute
// il2cpp: void MapEditor_CreateEmptyParentCommand__Unexecute (MapEditor_CreateEmptyParentCommand_o* __this, const MethodInfo* method);
// 0x5c8c720

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


