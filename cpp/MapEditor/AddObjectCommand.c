// Type: MapEditor.AddObjectCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/MapEditor/AddObjectCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/AddObjectCommand.cs
// --------------------------------

// MapEditor.AddObjectCommand.<>c$$.cctor
// il2cpp: void MapEditor_AddObjectCommand___c___cctor (const MethodInfo* method);
// 0x5c8bb10

void MapEditor_AddObjectCommand___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075479c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand_c);
    Il2CppMethodInitialized_075479c1 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9 = (MapEditor_AddObjectCommand___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9);
  return;
}


// MapEditor.AddObjectCommand.<>c$$.ctor
// il2cpp: void MapEditor_AddObjectCommand___c___ctor (MapEditor_AddObjectCommand___c_o* __this, const MethodInfo* method);
// 0x5c8bb80

void MapEditor_AddObjectCommand___c___ctor(MapEditor_AddObjectCommand___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.AddObjectCommand.<>c$$<Execute>b__3_0
// il2cpp: int32_t MapEditor_AddObjectCommand___c___Execute_b__3_0 (MapEditor_AddObjectCommand___c_o* __this, Map_MapScriptBaseObject_o* o, const MethodInfo* method);
// 0x5c8bb90

int32_t MapEditor_AddObjectCommand___c___Execute_b__3_0
                  (MapEditor_AddObjectCommand___c_o *__this,Map_MapScriptBaseObject_o *o,MethodInfo *method)

{
  if (o == (Map_MapScriptBaseObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (o->fields).Id;
}


// MapEditor.AddObjectCommand.<>c$$<Execute>b__3_1
// il2cpp: bool MapEditor_AddObjectCommand___c___Execute_b__3_1 (MapEditor_AddObjectCommand___c_o* __this, int32_t id, const MethodInfo* method);
// 0x5c8bba0

bool MapEditor_AddObjectCommand___c___Execute_b__3_1
               (MapEditor_AddObjectCommand___c_o *__this,int32_t id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_int__o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075479c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479c2 = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  }
  else {
    __this_00 = *(System_Collections_Generic_List_int__o **)
                 ((long)((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields + 0x10);
  }
  if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_List_int___Contains
                    (__this_00,id,
                     (MethodInfo_3916F20 *)MethodInfo_System_Collections_Generic_List_int_Contains);
  return bVar2;
}


// MapEditor.AddObjectCommand$$.ctor
// il2cpp: void MapEditor_AddObjectCommand___ctor (MapEditor_AddObjectCommand_o* __this, System_Collections_Generic_List_MapScriptBaseObject__o* objs, int32_t insertAfterId, const MethodInfo* method);
// 0x5c8ac50
// eh: try 0x5c8afbf..0x5c8b230 -> pad 0x5c8b247 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8b265..0x5c8b26a -> pad 0x5c8b28f cleanup
// eh: try 0x5c8b292..0x5c8b29c -> pad 0x5c8b2a4 catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8ae09: nop dword ptr [rax]
// asm:   0x5c8b235: jmp 0x5c8b24d
// asm:   0x5c8b237: jmp 0x5c8b24d
// asm:   0x5c8b239: jmp 0x5c8b24d
// asm:   0x5c8b23b: jmp 0x5c8b24d
// asm:   0x5c8b23d: jmp 0x5c8b24d
// asm:   0x5c8b23f: jmp 0x5c8b24d
// asm:   0x5c8b241: jmp 0x5c8b24d
// asm:   0x5c8b243: jmp 0x5c8b24d
// asm:   0x5c8b245: jmp 0x5c8b24d
// asm:   0x5c8b247: jmp 0x5c8b24d
// asm:   0x5c8b249: jmp 0x5c8b24d
// asm:   0x5c8b24b: jmp 0x5c8b24d
// asm:   0x5c8b24d: mov rbx, rax
// asm:   0x5c8b250: cmp edx, 1
// asm:   0x5c8b253: jne 0x5c8b292
// asm:   0x5c8b255: mov rdi, rbx
// asm:   0x5c8b258: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8b25d: mov rbx, qword ptr [rax]
// asm:   0x5c8b260: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5c8b265: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8b26a: lea rax, [rip + 0x1603167]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x5c8b271: mov rsi, qword ptr [rax]
// asm:   0x5c8b274: lea rdi, [rsp + 0x10]
// asm:   0x5c8b279: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c8b27e: test rbx, rbx
// asm:   0x5c8b281: je 0x5c8b099
// asm:   0x5c8b287: mov rdi, rbx
// asm:   0x5c8b28a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8b28f: mov rbx, rax
// asm:   0x5c8b292: lea rdi, [rsp + 0x28]
// asm:   0x5c8b297: call 0x2fda530  ; il2cpp_runtime_helper_02fda530()
// asm:   0x5c8b29c: mov rdi, rbx
// asm:   0x5c8b29f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8b2a4: mov rdi, rax
// asm:   0x5c8b2a7: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_AddObjectCommand___ctor
               (MapEditor_AddObjectCommand_o *__this,
               System_Collections_Generic_List_MapScriptBaseObject__o *objs,int32_t insertAfterId,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_MapEditorGameManager_o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar4;
  Map_MapScriptBaseObject_array *pMVar5;
  MethodInfo *pMVar6;
  MapEditor_AddObjectCommand_o *pMVar7;
  bool bVar8;
  int32_t iVar9;
  Map_MapScriptObjects_o *__this_01;
  Il2CppObject *pIVar10;
  Map_MapScriptBaseObject_o *pMVar11;
  System_Collections_Generic_Dictionary_int__int__o *__this_02;
  System_String_o *pSVar12;
  ulong uVar13;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Map_MapScriptBaseObject_o *local_58;
  undefined1 local_50 [16];
  Map_MapScriptBaseObject_o *local_40;
  MapEditor_AddObjectCommand_o *local_38;
  
  if (Il2CppMethodInitialized_075479be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075479be = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Map_MapScriptBaseObject_o *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._insertAfterId = insertAfterId;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_01,(MethodInfo *)0x0);
  __this_00 = (GameManagers_MapEditorGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    bVar2 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
  }
  local_38 = __this;
  if (objs == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) goto label_05c8b1db;
  pIVar10 = SZArrayNew(TypeInfo_int_array,(objs->fields)._size);
  if (0 < (objs->fields)._size) {
    if (pIVar10 == (Il2CppObject *)0x0) {
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)objs,0,
                 (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item
                );
      goto label_05c8b1db;
    }
    if (__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) {
      pMVar11 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)objs,0,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item);
      if (pMVar11 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c8b1db;
      if (*(int *)&pIVar10[1].monitor != 0) {
        *(int32_t *)&pIVar10[2].klass = (pMVar11->fields).Id;
        System_Collections_Generic_List_object___get_Item
                  ((System_Collections_Generic_List_object__o *)objs,0,
                   (MethodInfo_395CF20 *)
                   MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item);
        ThrowNullReferenceException();
      }
      goto label_05c8b1d6;
    }
    uVar13 = 0;
    do {
      pMVar11 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)objs,(int32_t)uVar13,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item);
      if (pMVar11 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c8b1db;
      if (*(uint *)&pIVar10[1].monitor <= uVar13) goto label_05c8b1d6;
      *(int32_t *)((long)&pIVar10[2].klass + uVar13 * 4) = (pMVar11->fields).Id;
      pMVar11 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)objs,(int32_t)uVar13,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item);
      iVar9 = GameManagers_MapEditorGameManager__GetNextObjectId(__this_00,(MethodInfo *)0x0);
      if (pMVar11 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c8b1db;
      (pMVar11->fields).Id = iVar9;
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)(objs->fields)._size);
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int)
  ;
  System_Collections_Generic_Dictionary_int__int____ctor
            (__this_02,(MethodInfo_4A032E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  if (0 < (objs->fields)._size) {
    if (pIVar10 == (Il2CppObject *)0x0) goto label_05c8b1db;
    if (__this_02 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      if (*(int *)&pIVar10[1].monitor == 0) {
label_05c8b1d6:
        ThrowIndexOutOfRangeException();
      }
      goto label_05c8b1db;
    }
    uVar13 = 0;
    do {
      if (*(uint *)&pIVar10[1].monitor <= uVar13) goto label_05c8b1d6;
      bVar8 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                        (__this_02,*(int32_t *)((long)&pIVar10[2].klass + uVar13 * 4),
                         (MethodInfo_4A04140 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
      if (!bVar8) {
        if (*(uint *)&pIVar10[1].monitor <= uVar13) goto label_05c8b1d6;
        iVar9 = *(int32_t *)((long)&pIVar10[2].klass + uVar13 * 4);
        pMVar11 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)objs,(int32_t)uVar13,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item);
        if (pMVar11 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c8b1db;
        System_Collections_Generic_Dictionary_int__int___set_Item
                  (__this_02,iVar9,(pMVar11->fields).Id,
                   (MethodInfo_4A03F00 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
      }
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)(objs->fields)._size);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
             (System_Collections_Generic_List_object__o *)objs,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
  local_58 = local_40;
  local_68 = (undefined1  [8])local_50._0_8_;
  puStack_60 = (undefined1 *)local_50._8_8_;
  local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_50._8_8_ = local_68;
  if (__this_01 == (Map_MapScriptObjects_o *)0x0) {
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    pMVar11 = local_58;
    if (bVar8) {
      if (local_58 != (Map_MapScriptBaseObject_o *)0x0) {
        iVar9 = (local_58->fields).Parent;
        if (-1 < iVar9) {
          if (__this_02 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
label_05c8b200:
            ThrowNullReferenceException();
          }
          bVar8 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                            (__this_02,iVar9,
                             (MethodInfo_4A04140 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
          if (bVar8) {
            iVar9 = System_Collections_Generic_Dictionary_int__int___get_Item
                              (__this_02,(pMVar11->fields).Parent,
                               (MethodInfo_4A03E70 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
            (pMVar11->fields).Parent = iVar9;
          }
        }
        ThrowNullReferenceException();
      }
label_05c8b1ea:
      ThrowNullReferenceException();
    }
  }
  else if (__this_02 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
    while( true ) {
      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
      pMVar6 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
      if (!bVar8) break;
      if (local_58 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c8b1ea;
      if (-1 < (local_58->fields).Parent) goto label_05c8b200;
      pSVar4 = (__this_01->fields).Objects;
      if (pSVar4 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) goto label_05c8b170;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pMVar5 = (pSVar4->fields)._items;
      if (pMVar5 == (Map_MapScriptBaseObject_array *)0x0) goto label_05c8b170;
      uVar3 = (pSVar4->fields)._size;
      if (uVar3 < (uint)pMVar5->max_length) {
        (pSVar4->fields)._size = uVar3 + 1;
        pMVar5->m_Items[(int)uVar3] = local_58;
        Il2CppCodeGenWriteBarrier(pMVar5->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)local_58,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
      }
    }
  }
  else {
    while( true ) {
      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
      pMVar11 = local_58;
      if (!bVar8) break;
      if (local_58 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c8b1ea;
      iVar9 = (local_58->fields).Parent;
      if (-1 < iVar9) {
        bVar8 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                          (__this_02,iVar9,
                           (MethodInfo_4A04140 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
        if (bVar8) {
          iVar9 = System_Collections_Generic_Dictionary_int__int___get_Item
                            (__this_02,(pMVar11->fields).Parent,
                             (MethodInfo_4A03E70 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
          (pMVar11->fields).Parent = iVar9;
        }
      }
      pMVar6 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
      pSVar4 = (__this_01->fields).Objects;
      if (pSVar4 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
label_05c8b170:
        ThrowNullReferenceException();
      }
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pMVar5 = (pSVar4->fields)._items;
      if (pMVar5 == (Map_MapScriptBaseObject_array *)0x0) goto label_05c8b170;
      uVar3 = (pSVar4->fields)._size;
      if (uVar3 < (uint)pMVar5->max_length) {
        (pSVar4->fields)._size = uVar3 + 1;
        pMVar5->m_Items[(int)uVar3] = pMVar11;
        Il2CppCodeGenWriteBarrier(pMVar5->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)pMVar11,
                   (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
  pMVar7 = local_38;
  if (__this_01 != (Map_MapScriptObjects_o *)0x0) {
    pSVar12 = (*(__this_01->klass->vtable)._8_Serialize.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._8_Serialize.method);
    (pMVar7->fields)._script = pSVar12;
    Il2CppCodeGenWriteBarrier(&(pMVar7->fields)._script);
    return;
  }
label_05c8b1db:
  ThrowNullReferenceException();
}


// MapEditor.AddObjectCommand$$Execute
// il2cpp: void MapEditor_AddObjectCommand__Execute (MapEditor_AddObjectCommand_o* __this, const MethodInfo* method);
// 0x5c8b2c0
// eh: try 0x5c8b4c0..0x5c8b898 -> pad 0x5c8b8ed (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8b8ba..0x5c8b8bf -> pad 0x5c8b8de cleanup
// eh: try 0x5c8b8e1..0x5c8b8e9 -> pad 0x5c8b943 catch (...) [compiler noexcept guard]
// eh: try 0x5c8b906..0x5c8b90b -> pad 0x5c8b930 cleanup
// eh: try 0x5c8b933..0x5c8b93b -> pad 0x5c8b943 catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8b587: jmp 0x5c8b5a2
// asm:   0x5c8b637: jmp 0x5c8b652
// asm:   0x5c8b72d: nop dword ptr [rax]
// asm:   0x5c8b7dd: jmp 0x5c8b884
// asm:   0x5c8b89d: jmp 0x5c8b8a3
// asm:   0x5c8b89f: jmp 0x5c8b8a3
// asm:   0x5c8b8a1: jmp 0x5c8b8a3
// asm:   0x5c8b8a3: mov r15, rax
// asm:   0x5c8b8a6: cmp edx, 1
// asm:   0x5c8b8a9: jne 0x5c8b8e1
// asm:   0x5c8b8ab: mov rdi, r15
// asm:   0x5c8b8ae: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8b8b3: mov rbx, qword ptr [rax]
// asm:   0x5c8b8b6: mov qword ptr [rsp], rbx
// asm:   0x5c8b8ba: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8b8bf: lea rax, [rip + 0x1602932]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5c8b8c6: mov rsi, qword ptr [rax]
// asm:   0x5c8b8c9: lea rdi, [rsp + 0x20]
// asm:   0x5c8b8ce: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5c8b8d3: test rbx, rbx
// asm:   0x5c8b8d6: je 0x5c8b78d
// asm:   0x5c8b8dc: jmp 0x5c8b928
// asm:   0x5c8b8de: mov r15, rax
// asm:   0x5c8b8e1: mov rdi, rsp
// asm:   0x5c8b8e4: call 0x2fda590  ; il2cpp_runtime_helper_02fda590()
// asm:   0x5c8b8e9: jmp 0x5c8b93b
// asm:   0x5c8b8eb: jmp 0x5c8b8ef
// asm:   0x5c8b8ed: jmp 0x5c8b8ef
// asm:   0x5c8b8ef: mov r15, rax
// asm:   0x5c8b8f2: cmp edx, 1
// asm:   0x5c8b8f5: jne 0x5c8b933
// asm:   0x5c8b8f7: mov rdi, r15
// asm:   0x5c8b8fa: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8b8ff: mov rbx, qword ptr [rax]
// asm:   0x5c8b902: mov qword ptr [rsp], rbx
// asm:   0x5c8b906: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8b90b: lea rax, [rip + 0x1602ac6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x5c8b912: mov rsi, qword ptr [rax]
// asm:   0x5c8b915: lea rdi, [rsp + 0x40]
// asm:   0x5c8b91a: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c8b91f: test rbx, rbx
// asm:   0x5c8b922: je 0x5c8b50b
// asm:   0x5c8b928: mov rdi, rbx
// asm:   0x5c8b92b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8b930: mov r15, rax
// asm:   0x5c8b933: mov rdi, rsp
// asm:   0x5c8b936: call 0x2fda560  ; il2cpp_runtime_helper_02fda560()
// asm:   0x5c8b93b: mov rdi, r15
// asm:   0x5c8b93e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8b943: mov rdi, rax
// asm:   0x5c8b946: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_AddObjectCommand__Execute(MapEditor_AddObjectCommand_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  Il2CppObject *pIVar4;
  MapEditor_AddObjectCommand_o *pMVar5;
  Map_MapScriptBaseObject_o *scriptObject;
  bool bVar6;
  int iVar7;
  int32_t item;
  Map_MapScriptObjects_o *__this_00;
  System_Func_MapScriptBaseObject__int__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  MapEditor_AddObjectCommand___c_StaticFields *pMVar8;
  System_Func_int__bool__o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_03;
  int32_t iVar9;
  undefined1 auStack_88 [16];
  Map_MapScriptBaseObject_o *pMStack_78;
  MapEditor_AddObjectCommand_o *pMStack_70;
  undefined1 auStack_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  Map_MapScriptBaseObject_o *pMStack_58;
  undefined1 auStack_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  Map_MapScriptBaseObject_o *pMStack_38;
  
  if (Il2CppMethodInitialized_075479bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapScriptBaseObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MapEditor_AddObjectCommand_c_Execute_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MapEditor_AddObjectCommand_c_Execute_b__3_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand_c);
    Il2CppMethodInitialized_075479bf = '\x01';
  }
  auStack_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pMStack_38 = (Map_MapScriptBaseObject_o *)0x0;
  auStack_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pMStack_58 = (Map_MapScriptBaseObject_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Map_MapScriptObjects_o *)0x0) {
    pMStack_70 = __this;
    (*(__this_00->klass->vtable)._9_Deserialize.methodPtr)
              (__this_00,(__this->fields)._script,(__this_00->klass->vtable)._9_Deserialize.method);
    pSVar2 = (__this_00->fields).Objects;
    if (pSVar2 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_88,
                 (System_Collections_Generic_List_object__o *)pSVar2,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
      pMStack_38 = pMStack_78;
      auStack_48 = (undefined1  [8])auStack_88._0_8_;
      pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_88._8_8_;
      auStack_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_88._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
      while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
                               ), scriptObject = pMStack_38, bVar6) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__LoadObject(scriptObject,true,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
      pMVar5 = pMStack_70;
      if ((pMStack_70->fields)._insertAfterId < 1) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
      if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
        bVar6 = System_Collections_Generic_List_int___Contains
                          (pSVar3,(pMVar5->fields)._insertAfterId,
                           (MethodInfo_3916F20 *)MethodInfo_System_Collections_Generic_List_int_Contains);
        if (!bVar6) {
          return;
        }
        pSVar2 = (__this_00->fields).Objects;
        if ((TypeInfo_MapEditor_AddObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c);
          pMVar8 = TypeInfo_MapEditor_AddObjectCommand_c->static_fields;
          __this_01 = pMVar8->__9__3_0;
        }
        else {
          pMVar8 = TypeInfo_MapEditor_AddObjectCommand_c->static_fields;
          __this_01 = pMVar8->__9__3_0;
        }
        if (__this_01 == (System_Func_MapScriptBaseObject__int__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c)->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c);
            pMVar8 = TypeInfo_MapEditor_AddObjectCommand_c->static_fields;
          }
          pIVar4 = (Il2CppObject *)pMVar8->__9;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptBaseObject_int);
          System_Func_object__int____ctor
                    ((System_Func_object__int__o *)__this_01,pIVar4,
                     (intptr_t)MethodInfo_MapEditor_AddObjectCommand_c_Execute_b__3_0,
                     (MethodInfo_4F198F0 *)0x0);
          pMVar8 = TypeInfo_MapEditor_AddObjectCommand_c->static_fields;
          pMVar8->__9__3_0 = __this_01;
          Il2CppCodeGenWriteBarrier(&pMVar8->__9__3_0);
        }
        source = System_Linq_Enumerable__Select_object__int_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                            (System_Func_TSource__TResult__o *)__this_01,
                            (MethodInfo_34F5DF0 *)
                            MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_int);
        if ((TypeInfo_MapEditor_AddObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c);
          pMVar8 = TypeInfo_MapEditor_AddObjectCommand_c->static_fields;
          __this_02 = pMVar8->__9__3_1;
        }
        else {
          pMVar8 = TypeInfo_MapEditor_AddObjectCommand_c->static_fields;
          __this_02 = pMVar8->__9__3_1;
        }
        if (__this_02 == (System_Func_int__bool__o *)0x0) {
          if ((((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c)->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c);
            pMVar8 = TypeInfo_MapEditor_AddObjectCommand_c->static_fields;
          }
          pIVar4 = (Il2CppObject *)pMVar8->__9;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
          System_Func_int__bool____ctor
                    (__this_02,pIVar4,(intptr_t)MethodInfo_MapEditor_AddObjectCommand_c_Execute_b__3_1,
                     (MethodInfo_4F12D00 *)0x0);
          pMVar8 = TypeInfo_MapEditor_AddObjectCommand_c->static_fields;
          pMVar8->__9__3_1 = __this_02;
          Il2CppCodeGenWriteBarrier(&pMVar8->__9__3_1);
        }
        source_00 = System_Linq_Enumerable__Where_int_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (System_Func_TSource__bool__o *)__this_02,
                               (MethodInfo_35022A0 *)MethodInfo_System_Linq_Enumerable_Where_int);
        __this_03 = System_Linq_Enumerable__ToList_int_
                              (source_00,(MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
        if (__this_03 != (System_Collections_Generic_List_TSource__o *)0x0) {
          System_Collections_Generic_List_int___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_88,
                     (System_Collections_Generic_List_int__o *)__this_03,
                     (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
          pMStack_58 = pMStack_78;
          auStack_68 = (undefined1  [8])auStack_88._0_8_;
          pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_88._8_8_;
          auStack_88._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          auStack_88._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_68;
          while (bVar6 = System_Collections_Generic_List_Enumerator_int___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_int__o *)auStack_68,
                                    (MethodInfo_4C3B4A0 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar6
                ) {
            iVar9 = (int32_t)pMStack_58;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
            if (pSVar3 == (System_Collections_Generic_List_int__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_int___Remove
                      (pSVar3,iVar9,
                       (MethodInfo_3918590 *)MethodInfo_System_Collections_Generic_List_int_Remove);
          }
          System_Collections_Generic_List_Enumerator_int___Dispose
                    ((System_Collections_Generic_List_Enumerator_int__o *)auStack_68,
                     (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
          if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
            iVar7 = System_Collections_Generic_List_int___IndexOf
                              (pSVar3,(pMStack_70->fields)._insertAfterId,
                               (MethodInfo_3917A80 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
            if (iVar7 < 0) {
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
              if (pSVar3 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c8b898;
              iVar7 = (pSVar3->fields)._size + -1;
              iVar1 = (__this_03->fields)._size;
            }
            else {
              iVar1 = (__this_03->fields)._size;
            }
            if (iVar1 < 1) {
              return;
            }
            iVar9 = 0;
            while( true ) {
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
              item = System_Collections_Generic_List_int___get_Item
                               ((System_Collections_Generic_List_int__o *)__this_03,iVar9,
                                (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item)
              ;
              if (pSVar3 == (System_Collections_Generic_List_int__o *)0x0) break;
              iVar1 = iVar7 + 1 + iVar9;
              iVar9 = iVar9 + 1;
              System_Collections_Generic_List_int___Insert
                        (pSVar3,iVar1,item,
                         (MethodInfo_3917C10 *)MethodInfo_System_Collections_Generic_List_int_Insert);
              if ((__this_03->fields)._size <= iVar9) {
                return;
              }
            }
          }
        }
      }
    }
  }
label_05c8b898:
  ThrowNullReferenceException();
}


// MapEditor.AddObjectCommand$$Unexecute
// il2cpp: void MapEditor_AddObjectCommand__Unexecute (MapEditor_AddObjectCommand_o* __this, const MethodInfo* method);
// 0x5c8b950
// eh: try 0x5c8ba50..0x5c8baaa -> pad 0x5c8bab3 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8bacb..0x5c8bad0 -> pad 0x5c8baef cleanup
// eh: try 0x5c8baf2..0x5c8bafc -> pad 0x5c8bb04 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8baaf: jmp 0x5c8bab3
// asm:   0x5c8bab1: jmp 0x5c8bab3
// asm:   0x5c8bab3: mov rbx, rax
// asm:   0x5c8bab6: cmp edx, 1
// asm:   0x5c8bab9: jne 0x5c8baf2
// asm:   0x5c8babb: mov rdi, rbx
// asm:   0x5c8babe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8bac3: mov rbx, qword ptr [rax]
// asm:   0x5c8bac6: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c8bacb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8bad0: lea rax, [rip + 0x1602901]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x5c8bad7: mov rsi, qword ptr [rax]
// asm:   0x5c8bada: mov rdi, rsp
// asm:   0x5c8badd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c8bae2: test rbx, rbx
// asm:   0x5c8bae5: je 0x5c8ba9a
// asm:   0x5c8bae7: mov rdi, rbx
// asm:   0x5c8baea: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8baef: mov rbx, rax
// asm:   0x5c8baf2: lea rdi, [rsp + 0x18]
// asm:   0x5c8baf7: call 0x2fda5c0  ; il2cpp_runtime_helper_02fda5c0()
// asm:   0x5c8bafc: mov rdi, rbx
// asm:   0x5c8baff: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8bb04: mov rdi, rax
// asm:   0x5c8bb07: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_AddObjectCommand__Unexecute(MapEditor_AddObjectCommand_o *__this,MethodInfo *method)

{
  int32_t id;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  bool bVar1;
  Map_MapScriptObjects_o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_075479c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    Il2CppMethodInitialized_075479c0 = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_01->klass->vtable)._9_Deserialize.methodPtr)
              (__this_01,(__this->fields)._script,(__this_01->klass->vtable)._9_Deserialize.method);
    __this_00 = (__this_01->fields).Objects;
    if (__this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
      uStack_30 = 0;
      puStack_28 = (undefined1 *)&SStack_48;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext)
        ;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
          return;
        }
        if (SStack_48.fields._current == (Il2CppObject *)0x0) break;
        id = *(int32_t *)&SStack_48.fields._current[2].klass;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__DeleteObject_5891f70(id,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


