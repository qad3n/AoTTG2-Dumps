// Type: MapEditor.ReorderObjectsCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/ReorderObjectsCommand.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.ReorderObjectsCommand.<>c$$.cctor
// il2cpp: void MapEditor_ReorderObjectsCommand___c___cctor (const MethodInfo* method);
// 0x5c8efd0

void MapEditor_ReorderObjectsCommand___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075479cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReorderObjectsCommand_c);
    Il2CppMethodInitialized_075479cf = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields->__9 =
       (MapEditor_ReorderObjectsCommand___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields->__9);
  return;
}


// MapEditor.ReorderObjectsCommand.<>c$$.ctor
// il2cpp: void MapEditor_ReorderObjectsCommand___c___ctor (MapEditor_ReorderObjectsCommand___c_o* __this, const MethodInfo* method);
// 0x5c8f040

void MapEditor_ReorderObjectsCommand___c___ctor
               (MapEditor_ReorderObjectsCommand___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.ReorderObjectsCommand.<>c$$<ApplyReorder>b__9_0
// il2cpp: int32_t MapEditor_ReorderObjectsCommand___c___ApplyReorder_b__9_0 (MapEditor_ReorderObjectsCommand___c_o* __this, int32_t id, const MethodInfo* method);
// 0x5c8f050

int32_t MapEditor_ReorderObjectsCommand___c___ApplyReorder_b__9_0
                  (MapEditor_ReorderObjectsCommand___c_o *__this,int32_t id,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_int__o *__this_00;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_075479d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479d0 = '\x01';
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
  iVar2 = System_Collections_Generic_List_int___IndexOf
                    (__this_00,id,(MethodInfo_3917A80 *)MethodInfo_System_Collections_Generic_List_int_IndexOf
                    );
  return iVar2;
}


// MapEditor.ReorderObjectsCommand$$.ctor
// il2cpp: void MapEditor_ReorderObjectsCommand___ctor (MapEditor_ReorderObjectsCommand_o* __this, System_Collections_Generic_List_int__o* objectIds, int32_t anchorId, bool insertAfter, System_Nullable_int__o newParentId, const MethodInfo* method);
// 0x5c8e180
// eh: try 0x5c8e3a4..0x5c8e489 -> pad 0x5c8e49e (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8e4b6..0x5c8e4bb -> pad 0x5c8e4dc cleanup
// eh: try 0x5c8e4df..0x5c8e4e9 -> pad 0x5c8e4f1 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8e48e: jmp 0x5c8e49e
// asm:   0x5c8e490: jmp 0x5c8e49e
// asm:   0x5c8e492: jmp 0x5c8e49e
// asm:   0x5c8e494: jmp 0x5c8e49e
// asm:   0x5c8e496: jmp 0x5c8e49e
// asm:   0x5c8e498: jmp 0x5c8e49e
// asm:   0x5c8e49a: jmp 0x5c8e49e
// asm:   0x5c8e49c: jmp 0x5c8e49e
// asm:   0x5c8e49e: mov rbx, rax
// asm:   0x5c8e4a1: cmp edx, 1
// asm:   0x5c8e4a4: jne 0x5c8e4df
// asm:   0x5c8e4a6: mov rdi, rbx
// asm:   0x5c8e4a9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8e4ae: mov rbx, qword ptr [rax]
// asm:   0x5c8e4b1: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5c8e4b6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8e4bb: lea rax, [rip + 0x15ffd36]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5c8e4c2: mov rsi, qword ptr [rax]
// asm:   0x5c8e4c5: lea rdi, [rsp + 0x10]
// asm:   0x5c8e4ca: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5c8e4cf: test rbx, rbx
// asm:   0x5c8e4d2: je 0x5c8e46b
// asm:   0x5c8e4d4: mov rdi, rbx
// asm:   0x5c8e4d7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8e4dc: mov rbx, rax
// asm:   0x5c8e4df: lea rdi, [rsp + 0x30]
// asm:   0x5c8e4e4: call 0x2fda7a0  ; il2cpp_runtime_helper_02fda7a0()
// asm:   0x5c8e4e9: mov rdi, rbx
// asm:   0x5c8e4ec: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8e4f1: mov rdi, rax
// asm:   0x5c8e4f4: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_ReorderObjectsCommand___ctor
               (MapEditor_ReorderObjectsCommand_o *__this,System_Collections_Generic_List_int__o *objectIds,
               int32_t anchorId,bool insertAfter,System_Nullable_int__o newParentId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  int32_t key;
  bool bVar2;
  int32_t value;
  System_Collections_Generic_Dictionary_int__int__o *pSVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  System_Collections_Generic_List_int__o *__this_00;
  Map_MapObject_o *obj;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  System_Nullable_int__Fields local_40;
  System_Collections_Generic_Dictionary_int__int__o **local_38;
  
  local_40 = newParentId.fields;
  if (Il2CppMethodInitialized_075479cc == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479cc = '\x01';
  }
  local_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_78._8_4_ = 0;
  local_78._12_4_ = 0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            (pSVar3,(MethodInfo_4A032E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  local_38 = &(__this->fields)._oldParents;
  (__this->fields)._oldParents = pSVar3;
  Il2CppCodeGenWriteBarrier(local_38);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor_3916320
            (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)objectIds,
             (MethodInfo_3916320 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c0);
  (__this->fields)._objectIds = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._objectIds);
  (__this->fields)._anchorId = anchorId;
  (__this->fields)._insertAfter = insertAfter;
  (__this->fields)._newParentId.fields = local_40;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar4 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor_3916320
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pSVar4,
             (MethodInfo_3916320 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c0);
  (__this->fields)._oldOrder = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldOrder);
  if (objectIds == (System_Collections_Generic_List_int__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_int___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_58,objectIds,
             (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
  local_68 = local_48;
  local_78._0_8_ = local_58._0_8_;
  local_78._8_8_ = local_58._8_8_;
  local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_58._8_8_ = (System_Collections_Generic_List_Enumerator_int__o *)local_78;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator_int___MoveNext
                      ((System_Collections_Generic_List_Enumerator_int__o *)local_78,
                       (MethodInfo_4C3B4A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_78,
                 (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      return;
    }
    key = (int32_t)local_68;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
    bVar2 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar1,key,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    if (bVar2) {
      pSVar3 = *local_38;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      obj = System_Collections_Generic_Dictionary_int__object___get_Item
                      (pSVar1,key,
                       (MethodInfo_4A0F690 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
      value = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
      if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_int__int___set_Item
                (pSVar3,key,value,
                 (MethodInfo_4A03F00 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ReorderObjectsCommand$$Execute
// il2cpp: void MapEditor_ReorderObjectsCommand__Execute (MapEditor_ReorderObjectsCommand_o* __this, const MethodInfo* method);
// 0x5c8e500

void MapEditor_ReorderObjectsCommand__Execute(MapEditor_ReorderObjectsCommand_o *__this,MethodInfo *method)

{
  MapEditor_ReorderObjectsCommand__ApplyReorder(__this,method);
  return;
}


// MapEditor.ReorderObjectsCommand$$Unexecute
// il2cpp: void MapEditor_ReorderObjectsCommand__Unexecute (MapEditor_ReorderObjectsCommand_o* __this, const MethodInfo* method);
// 0x5c8ec30
// eh: try 0x5c8ed5a..0x5c8ef50 -> pad 0x5c8ef71 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8ef89..0x5c8ef8e -> pad 0x5c8efb3 cleanup
// eh: try 0x5c8efb6..0x5c8efc0 -> pad 0x5c8efc8 catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8ee89: jmp 0x5c8ee9a
// asm:   0x5c8ef55: jmp 0x5c8ef71
// asm:   0x5c8ef57: jmp 0x5c8ef71
// asm:   0x5c8ef59: jmp 0x5c8ef71
// asm:   0x5c8ef5b: jmp 0x5c8ef71
// asm:   0x5c8ef5d: jmp 0x5c8ef71
// asm:   0x5c8ef5f: jmp 0x5c8ef71
// asm:   0x5c8ef61: jmp 0x5c8ef71
// asm:   0x5c8ef63: jmp 0x5c8ef71
// asm:   0x5c8ef65: jmp 0x5c8ef71
// asm:   0x5c8ef67: jmp 0x5c8ef71
// asm:   0x5c8ef69: jmp 0x5c8ef71
// asm:   0x5c8ef6b: jmp 0x5c8ef71
// asm:   0x5c8ef6d: jmp 0x5c8ef71
// asm:   0x5c8ef6f: jmp 0x5c8ef71
// asm:   0x5c8ef71: mov rbx, rax
// asm:   0x5c8ef74: cmp edx, 1
// asm:   0x5c8ef77: jne 0x5c8efb6
// asm:   0x5c8ef79: mov rdi, rbx
// asm:   0x5c8ef7c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8ef81: mov rbx, qword ptr [rax]
// asm:   0x5c8ef84: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5c8ef89: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8ef8e: lea rax, [rip + 0x160092b]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_int_Dispose
// asm:   0x5c8ef95: mov rsi, qword ptr [rax]
// asm:   0x5c8ef98: lea rdi, [rsp + 0x10]
// asm:   0x5c8ef9d: call 0x4d9f0c0  ; System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose()
// asm:   0x5c8efa2: test rbx, rbx
// asm:   0x5c8efa5: je 0x5c8eedb
// asm:   0x5c8efab: mov rdi, rbx
// asm:   0x5c8efae: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8efb3: mov rbx, rax
// asm:   0x5c8efb6: lea rdi, [rsp + 0x38]
// asm:   0x5c8efbb: call 0x2fda7d0  ; il2cpp_runtime_helper_02fda7d0()
// asm:   0x5c8efc0: mov rdi, rbx
// asm:   0x5c8efc3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8efc8: mov rdi, rax
// asm:   0x5c8efcb: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_ReorderObjectsCommand__Unexecute(MapEditor_ReorderObjectsCommand_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  System_Collections_Generic_List_int__o *__this_01;
  Il2CppObject *pIVar5;
  bool bVar6;
  int32_t iVar7;
  Map_MapObject_o *obj;
  Map_MapObject_o *parent;
  int key;
  undefined1 auStack_78 [8];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *pSStack_70;
  Il2CppObject *pIStack_68;
  Il2CppObject *pIStack_60;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_50;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *pSStack_48;
  Il2CppObject *pIStack_40;
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_075479cd == '\0') {
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
    Il2CppMethodInitialized_075479cd = '\x01';
  }
  pIStack_68 = (Il2CppObject *)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  auStack_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)0x0;
  __this_00 = (__this->fields)._oldParents;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
    System_Collections_Generic_Dictionary_int__int___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&pSStack_50,__this_00,
               (MethodInfo_4A04340 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_GetEnumerator);
    pIStack_68 = pIStack_40;
    pIStack_60 = pIStack_38;
    auStack_78 = (undefined1  [8])pSStack_50;
    pSStack_70 = pSStack_48;
    pSStack_50 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    pSStack_48 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_78;
    while (bVar6 = System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext
                             ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_78,
                              (MethodInfo_4C9EFB0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_int_MoveNext),
          pIVar5 = pIStack_68, bVar6) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar3,(int32_t)pIVar5,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar6) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        obj = System_Collections_Generic_Dictionary_int__object___get_Item
                        (pSVar3,(int32_t)pIVar5,
                         (MethodInfo_4A0F690 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        iVar7 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
        key = (int)((ulong)pIVar5 >> 0x20);
        if (iVar7 != key) {
          if ((long)pIVar5 < 0) {
label_05c8ee8b:
            parent = (Map_MapObject_o *)0x0;
            uVar2 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
          }
          else {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                              (pSVar3,key,
                               (MethodInfo_4A0F950 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
            if (!bVar6) goto label_05c8ee8b;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            parent = System_Collections_Generic_Dictionary_int__object___get_Item
                               (pSVar3,key,
                                (MethodInfo_4A0F690 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            uVar2 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
          }
          if (uVar2 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          Map_MapLoader__SetParentLogical(obj,parent,(MethodInfo *)0x0);
          if (obj == (Map_MapObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar4 = (obj->fields).ScriptObject;
          if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          (pMVar4->fields).Parent = key;
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_78,
               (MethodInfo_4C9F0C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_int_Dispose);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    __this_01 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
    if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      (__this_01->fields)._size = 0;
      System_Collections_Generic_List_int___AddRange
                (__this_01,(System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._oldOrder,
                 (MethodInfo_3916CF0 *)MethodInfo_System_Collections_Generic_List_int_AddRange);
      return;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ReorderObjectsCommand$$ApplyReorder
// il2cpp: void MapEditor_ReorderObjectsCommand__ApplyReorder (MapEditor_ReorderObjectsCommand_o* __this, const MethodInfo* method);
// 0x5c8e510
// eh: try 0x5c8e754..0x5c8eb61 -> pad 0x5c8eb77 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8eb8f..0x5c8eb94 -> pad 0x5c8ebb1 cleanup
// eh: try 0x5c8ebb4..0x5c8ebbe -> pad 0x5c8ec19 catch (...) [compiler noexcept guard]
// eh: try 0x5c8ebdc..0x5c8ebe1 -> pad 0x5c8ec04 cleanup
// eh: try 0x5c8ec07..0x5c8ec11 -> pad 0x5c8ec19 catch (...) [compiler noexcept guard]
// asm: 58 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8e8d7: jmp 0x5c8e8f1
// asm:   0x5c8ea92: jmp 0x5c8eb34
// asm:   0x5c8eadc: nop dword ptr [rax]
// asm:   0x5c8eb61: jmp 0x5c8eb77
// asm:   0x5c8eb63: jmp 0x5c8eb77
// asm:   0x5c8eb65: jmp 0x5c8eb77
// asm:   0x5c8eb67: jmp 0x5c8eb77
// asm:   0x5c8eb69: jmp 0x5c8eb77
// asm:   0x5c8eb6b: jmp 0x5c8eb77
// asm:   0x5c8eb6d: jmp 0x5c8eb77
// asm:   0x5c8eb6f: jmp 0x5c8eb77
// asm:   0x5c8eb71: jmp 0x5c8ebc4
// asm:   0x5c8eb73: jmp 0x5c8eb77
// asm:   0x5c8eb75: jmp 0x5c8eb77
// asm:   0x5c8eb77: mov rbp, rax
// asm:   0x5c8eb7a: cmp edx, 1
// asm:   0x5c8eb7d: jne 0x5c8ebb4
// asm:   0x5c8eb7f: mov rdi, rbp
// asm:   0x5c8eb82: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8eb87: mov rbx, qword ptr [rax]
// asm:   0x5c8eb8a: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c8eb8f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8eb94: lea rax, [rip + 0x15ff65d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5c8eb9b: mov rsi, qword ptr [rax]
// asm:   0x5c8eb9e: mov rdi, rsp
// asm:   0x5c8eba1: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5c8eba6: test rbx, rbx
// asm:   0x5c8eba9: je 0x5c8e83c
// asm:   0x5c8ebaf: jmp 0x5c8ebfc
// asm:   0x5c8ebb1: mov rbp, rax
// asm:   0x5c8ebb4: lea rdi, [rsp + 0x20]
// asm:   0x5c8ebb9: call 0x2fda800  ; il2cpp_runtime_helper_02fda800()
// asm:   0x5c8ebbe: jmp 0x5c8ec11
// asm:   0x5c8ebc0: jmp 0x5c8ebc4
// asm:   0x5c8ebc2: jmp 0x5c8ebc4
// asm:   0x5c8ebc4: mov rbp, rax
// asm:   0x5c8ebc7: cmp edx, 1
// asm:   0x5c8ebca: jne 0x5c8ec07
// asm:   0x5c8ebcc: mov rdi, rbp
// asm:   0x5c8ebcf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8ebd4: mov rbx, qword ptr [rax]
// asm:   0x5c8ebd7: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c8ebdc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8ebe1: lea rax, [rip + 0x15ff610]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5c8ebe8: mov rsi, qword ptr [rax]
// asm:   0x5c8ebeb: mov rdi, rsp
// asm:   0x5c8ebee: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5c8ebf3: test rbx, rbx
// asm:   0x5c8ebf6: je 0x5c8ea38
// asm:   0x5c8ebfc: mov rdi, rbx
// asm:   0x5c8ebff: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8ec04: mov rbp, rax
// asm:   0x5c8ec07: lea rdi, [rsp + 0x20]
// asm:   0x5c8ec0c: call 0x2fda830  ; il2cpp_runtime_helper_02fda830()
// asm:   0x5c8ec11: mov rdi, rbp
// asm:   0x5c8ec14: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8ec19: mov rdi, rax
// asm:   0x5c8ec1c: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_ReorderObjectsCommand__ApplyReorder
               (MapEditor_ReorderObjectsCommand_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  Map_MapScriptBaseObject_o *pMVar4;
  System_Collections_Generic_Dictionary_int__MapObject__o *object;
  Il2CppObject *object_00;
  bool bVar5;
  int32_t iVar6;
  int32_t iVar7;
  Map_MapObject_o *obj;
  System_Func_int__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  MapEditor_ReorderObjectsCommand___c_StaticFields *pMVar8;
  System_Func_int__int__o *__this_01;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_02;
  int iVar9;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  Il2CppObject *pIStack_68;
  undefined1 auStack_58 [16];
  Il2CppObject *pIStack_48;
  Map_MapObject_o *pMStack_40;
  MapEditor_ReorderObjectsCommand_o *pMStack_38;
  
  if (Il2CppMethodInitialized_075479ce == '\0') {
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
    Il2CppMethodInitialized_075479ce = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  if ((__this->fields)._newParentId.fields.hasValue != false) {
    iVar6 = System_Nullable_int___get_Value
                      (&(__this->fields)._newParentId,
                       (MethodInfo_3CD4BC0 *)MethodInfo_System_Nullable_int_get_Value);
    if (iVar6 < 0) {
label_05c8e6e5:
      pMStack_40 = (Map_MapObject_o *)0x0;
    }
    else {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05c8eb48;
      bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar2,iVar6,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (!bVar5) goto label_05c8e6e5;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05c8eb48;
      pMStack_40 = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar2,iVar6,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    }
    pSVar3 = (__this->fields)._objectIds;
    pMStack_38 = __this;
    if (pSVar3 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c8eb48;
    System_Collections_Generic_List_int___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,pSVar3,
               (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    pIStack_68 = pIStack_48;
    auStack_78 = (undefined1  [8])auStack_58._0_8_;
    puStack_70 = (undefined1 *)auStack_58._8_8_;
    auStack_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_58._8_8_ = auStack_78;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_int___MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)auStack_78,
                         (MethodInfo_4C3B4A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (!bVar5) break;
      iVar7 = (int32_t)pIStack_68;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar5 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar2,iVar7,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar5) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        obj = System_Collections_Generic_Dictionary_int__object___get_Item
                        (pSVar2,iVar7,
                         (MethodInfo_4A0F690 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        iVar7 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
        if (iVar7 != iVar6) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          Map_MapLoader__SetParentLogical(obj,pMStack_40,(MethodInfo *)0x0);
          if (obj == (Map_MapObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar4 = (obj->fields).ScriptObject;
          if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          (pMVar4->fields).Parent = iVar6;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)auStack_78,
               (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    __this = pMStack_38;
  }
  pSVar3 = (__this->fields)._objectIds;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  object = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
  if (object != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
    System_Func_int__bool____ctor
              (__this_00,(Il2CppObject *)object,(intptr_t)((Il2CppClass *)object->klass)->vtable[0x24].method,
               (MethodInfo_4F12D00 *)0x0);
    source = System_Linq_Enumerable__Where_int_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                        (System_Func_TSource__bool__o *)__this_00,
                        (MethodInfo_35022A0 *)MethodInfo_System_Linq_Enumerable_Where_int);
    if ((TypeInfo_MapEditor_ReorderObjectsCommand_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand_c);
      pMVar8 = TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields;
      __this_01 = pMVar8->__9__9_0;
    }
    else {
      pMVar8 = TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields;
      __this_01 = pMVar8->__9__9_0;
    }
    if (__this_01 == (System_Func_int__int__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_ReorderObjectsCommand_c);
        pMVar8 = TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields;
      }
      object_00 = (Il2CppObject *)pMVar8->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int);
      System_Func_int__int____ctor
                (__this_01,object_00,
                 (intptr_t)MethodInfo_MapEditor_ReorderObjectsCommand_c_ApplyReorder_b__9_0,
                 (MethodInfo_4F12F40 *)0x0);
      pMVar8 = TypeInfo_MapEditor_ReorderObjectsCommand_c->static_fields;
      pMVar8->__9__9_0 = __this_01;
      Il2CppCodeGenWriteBarrier(&pMVar8->__9__9_0);
    }
    source_00 = System_Linq_Enumerable__OrderBy_int__int_
                          (source,(System_Func_TSource__TKey__o *)__this_01,
                           (MethodInfo_34F1B50 *)MethodInfo_System_Linq_Enumerable_OrderBy_int_int);
    __this_02 = System_Linq_Enumerable__ToList_int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           (MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
    if (__this_02 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_int___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,
                 (System_Collections_Generic_List_int__o *)__this_02,
                 (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
      pIStack_68 = pIStack_48;
      auStack_78 = (undefined1  [8])auStack_58._0_8_;
      puStack_70 = (undefined1 *)auStack_58._8_8_;
      auStack_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_58._8_8_ = auStack_78;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_int___MoveNext
                          ((System_Collections_Generic_List_Enumerator_int__o *)auStack_78,
                           (MethodInfo_4C3B4A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (!bVar5) break;
        iVar6 = (int32_t)pIStack_68;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
        if (pSVar3 == (System_Collections_Generic_List_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_List_int___Remove
                  (pSVar3,iVar6,(MethodInfo_3918590 *)MethodInfo_System_Collections_Generic_List_int_Remove);
      }
      System_Collections_Generic_List_Enumerator_int___Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)auStack_78,
                 (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
      if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
        iVar6 = System_Collections_Generic_List_int___IndexOf
                          (pSVar3,(__this->fields)._anchorId,
                           (MethodInfo_3917A80 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
        if (iVar6 < 0) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
          if (pSVar3 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c8eb48;
          iVar9 = (pSVar3->fields)._size;
          iVar1 = (__this_02->fields)._size;
        }
        else {
          iVar9 = iVar6 + (uint)(__this->fields)._insertAfter;
          iVar1 = (__this_02->fields)._size;
        }
        if (0 < iVar1) {
          iVar6 = 0;
          do {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar3 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
            iVar7 = System_Collections_Generic_List_int___get_Item
                              ((System_Collections_Generic_List_int__o *)__this_02,iVar6,
                               (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
            if (pSVar3 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c8eb48;
            System_Collections_Generic_List_int___Insert
                      (pSVar3,iVar9 + iVar6,iVar7,
                       (MethodInfo_3917C10 *)MethodInfo_System_Collections_Generic_List_int_Insert);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (__this_02->fields)._size);
        }
        return;
      }
    }
  }
label_05c8eb48:
  ThrowNullReferenceException();
}


