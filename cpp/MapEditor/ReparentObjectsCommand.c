// Type: MapEditor.ReparentObjectsCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/ReparentObjectsCommand.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.ReparentObjectsCommand.ObjectState$$.ctor
// il2cpp: void MapEditor_ReparentObjectsCommand_ObjectState___ctor (MapEditor_ReparentObjectsCommand_ObjectState_o* __this, const MethodInfo* method);
// 0x5c8fe60

void MapEditor_ReparentObjectsCommand_ObjectState___ctor
               (MapEditor_ReparentObjectsCommand_ObjectState_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.ReparentObjectsCommand$$.ctor
// il2cpp: void MapEditor_ReparentObjectsCommand___ctor (MapEditor_ReparentObjectsCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, int32_t newParentId, const MethodInfo* method);
// 0x5c8c480
// eh: try 0x5c8c614..0x5c8c6b1 -> pad 0x5c8c6c0 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8c6da..0x5c8c6df -> pad 0x5c8c700 cleanup
// eh: try 0x5c8c703..0x5c8c70d -> pad 0x5c8c715 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8c60e: nop 
// asm:   0x5c8c6b6: jmp 0x5c8c6c2
// asm:   0x5c8c6b8: jmp 0x5c8c6c2
// asm:   0x5c8c6ba: jmp 0x5c8c6c2
// asm:   0x5c8c6bc: jmp 0x5c8c6c2
// asm:   0x5c8c6be: jmp 0x5c8c6c2
// asm:   0x5c8c6c0: jmp 0x5c8c6c2
// asm:   0x5c8c6c2: mov rbx, rax
// asm:   0x5c8c6c5: cmp edx, 1
// asm:   0x5c8c6c8: jne 0x5c8c703
// asm:   0x5c8c6ca: mov rdi, rbx
// asm:   0x5c8c6cd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8c6d2: mov rbx, qword ptr [rax]
// asm:   0x5c8c6d5: mov qword ptr [rsp + 8], rbx
// asm:   0x5c8c6da: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8c6df: lea rax, [rip + 0x1601cda]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5c8c6e6: mov rsi, qword ptr [rax]
// asm:   0x5c8c6e9: lea rdi, [rsp + 0x20]
// asm:   0x5c8c6ee: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c8c6f3: test rbx, rbx
// asm:   0x5c8c6f6: je 0x5c8c68e
// asm:   0x5c8c6f8: mov rdi, rbx
// asm:   0x5c8c6fb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8c700: mov rbx, rax
// asm:   0x5c8c703: lea rdi, [rsp + 8]
// asm:   0x5c8c708: call 0x2fda860  ; il2cpp_runtime_helper_02fda860()
// asm:   0x5c8c70d: mov rdi, rbx
// asm:   0x5c8c710: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8c715: mov rdi, rax
// asm:   0x5c8c718: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_ReparentObjectsCommand___ctor
               (MapEditor_ReparentObjectsCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,int32_t newParentId,MethodInfo *method
               )

{
  System_Collections_Generic_Dictionary_int__int__o **targetAddress;
  int32_t key;
  Map_MapScriptBaseObject_o *pMVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  bool bVar2;
  System_Collections_Generic_Dictionary_int__ReparentObjectsCommand_ObjectState__o *pSVar3;
  System_Collections_Generic_Dictionary_int__int__o *pSVar4;
  MapEditor_ReparentObjectsCommand_ObjectState_o *value;
  MethodInfo *method_00;
  MapEditor_ReparentObjectsCommand_o *__this_01;
  undefined1 local_60 [16];
  Map_MapObject_o *local_50;
  undefined1 local_48 [16];
  Map_MapObject_o *local_38;
  
  if (Il2CppMethodInitialized_075479d1 == '\0') {
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
    Il2CppMethodInitialized_075479d1 = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)pSVar3,
             (MethodInfo_4A0EB10 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_ctor);
  (__this->fields)._oldStates = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldStates);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState);
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)pSVar3,
             (MethodInfo_4A0EB10 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_ctor);
  (__this->fields)._newStates = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._newStates);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
  System_Collections_Generic_Dictionary_int__int____ctor
            (pSVar4,(MethodInfo_4A032E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  targetAddress = &(__this->fields)._targetParents;
  (__this->fields)._targetParents = pSVar4;
  Il2CppCodeGenWriteBarrier(targetAddress);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
             (System_Collections_Generic_List_object__o *)mapObjects,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_38 = local_50;
  local_48._0_8_ = local_60._0_8_;
  local_48._8_8_ = local_60._8_8_;
  local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_60._8_8_ = (MapEditor_ReparentObjectsCommand_o *)local_48;
  while( true ) {
    __this_01 = (MapEditor_ReparentObjectsCommand_o *)local_48;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
                );
      return;
    }
    if (local_38 == (Map_MapObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pMVar1 = (local_38->fields).ScriptObject;
    if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    key = (pMVar1->fields).Id;
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._oldStates;
    value = MapEditor_ReparentObjectsCommand__CaptureState(__this_01,local_38,method_00);
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
    System_Collections_Generic_Dictionary_int__object___set_Item
              (__this_00,key,(Il2CppObject *)value,
               (MethodInfo_4A0F720 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_set_Item
              );
    pSVar4 = *targetAddress;
    if (pSVar4 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_int__int___set_Item
              (pSVar4,key,newParentId,
               (MethodInfo_4A03F00 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
  }
  ThrowNullReferenceException();
}


// MapEditor.ReparentObjectsCommand$$Execute
// il2cpp: void MapEditor_ReparentObjectsCommand__Execute (MapEditor_ReparentObjectsCommand_o* __this, const MethodInfo* method);
// 0x5c8f2a0
// eh: try 0x5c8f402..0x5c8f6f2 -> pad 0x5c8f71b (+27 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8f73d..0x5c8f742 -> pad 0x5c8f761 cleanup
// eh: try 0x5c8f764..0x5c8f76e -> pad 0x5c8f7c7 catch (...) [compiler noexcept guard]
// eh: try 0x5c8f788..0x5c8f78d -> pad 0x5c8f7b2 cleanup
// eh: try 0x5c8f7b5..0x5c8f7bf -> pad 0x5c8f7c7 catch (...) [compiler noexcept guard]
// asm: 65 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8f6f7: jmp 0x5c8f725
// asm:   0x5c8f6f9: jmp 0x5c8f725
// asm:   0x5c8f6fb: jmp 0x5c8f770
// asm:   0x5c8f6fd: jmp 0x5c8f725
// asm:   0x5c8f6ff: jmp 0x5c8f725
// asm:   0x5c8f701: jmp 0x5c8f725
// asm:   0x5c8f703: jmp 0x5c8f725
// asm:   0x5c8f705: jmp 0x5c8f770
// asm:   0x5c8f707: jmp 0x5c8f725
// asm:   0x5c8f709: jmp 0x5c8f725
// asm:   0x5c8f70b: jmp 0x5c8f725
// asm:   0x5c8f70d: jmp 0x5c8f725
// asm:   0x5c8f70f: jmp 0x5c8f770
// asm:   0x5c8f711: jmp 0x5c8f770
// asm:   0x5c8f713: jmp 0x5c8f770
// asm:   0x5c8f715: jmp 0x5c8f770
// asm:   0x5c8f717: jmp 0x5c8f770
// asm:   0x5c8f719: jmp 0x5c8f770
// asm:   0x5c8f71b: jmp 0x5c8f725
// asm:   0x5c8f71d: jmp 0x5c8f725
// asm:   0x5c8f71f: jmp 0x5c8f725
// asm:   0x5c8f721: jmp 0x5c8f770
// asm:   0x5c8f723: jmp 0x5c8f770
// asm:   0x5c8f725: mov rbx, rax
// asm:   0x5c8f728: cmp edx, 1
// asm:   0x5c8f72b: jne 0x5c8f764
// asm:   0x5c8f72d: mov rdi, rbx
// asm:   0x5c8f730: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8f735: mov rbx, qword ptr [rax]
// asm:   0x5c8f738: mov qword ptr [rsp + 8], rbx
// asm:   0x5c8f73d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8f742: lea rax, [rip + 0x16001a7]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_Dispose
// asm:   0x5c8f749: mov rsi, qword ptr [rax]
// asm:   0x5c8f74c: lea rdi, [rsp + 0x20]
// asm:   0x5c8f751: call 0x4d9fb30  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose()
// asm:   0x5c8f756: test rbx, rbx
// asm:   0x5c8f759: je 0x5c8f566
// asm:   0x5c8f75f: jmp 0x5c8f7aa
// asm:   0x5c8f761: mov rbx, rax
// asm:   0x5c8f764: lea rdi, [rsp + 8]
// asm:   0x5c8f769: call 0x2fda890  ; il2cpp_runtime_helper_02fda890()
// asm:   0x5c8f76e: jmp 0x5c8f7bf
// asm:   0x5c8f770: mov rbx, rax
// asm:   0x5c8f773: cmp edx, 1
// asm:   0x5c8f776: jne 0x5c8f7b5
// asm:   0x5c8f778: mov rdi, rbx
// asm:   0x5c8f77b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8f780: mov rbx, qword ptr [rax]
// asm:   0x5c8f783: mov qword ptr [rsp + 8], rbx
// asm:   0x5c8f788: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8f78d: lea rax, [rip + 0x160015c]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_Dispose
// asm:   0x5c8f794: mov rsi, qword ptr [rax]
// asm:   0x5c8f797: lea rdi, [rsp + 0x20]
// asm:   0x5c8f79c: call 0x4d9fb30  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose()
// asm:   0x5c8f7a1: test rbx, rbx
// asm:   0x5c8f7a4: je 0x5c8f6b3
// asm:   0x5c8f7aa: mov rdi, rbx
// asm:   0x5c8f7ad: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8f7b2: mov rbx, rax
// asm:   0x5c8f7b5: lea rdi, [rsp + 8]
// asm:   0x5c8f7ba: call 0x2fda8c0  ; il2cpp_runtime_helper_02fda8c0()
// asm:   0x5c8f7bf: mov rdi, rbx
// asm:   0x5c8f7c2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8f7c7: mov rdi, rax
// asm:   0x5c8f7ca: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_ReparentObjectsCommand__Execute(MapEditor_ReparentObjectsCommand_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__int__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar5;
  Map_MapObject_o *pMVar6;
  Map_MapObject_o *parent;
  MapEditor_ReparentObjectsCommand_ObjectState_o *state;
  MethodInfo *method_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  Map_MapLoader_c **__this_00;
  System_Collections_Generic_Dictionary_int__object__o *pSVar7;
  undefined1 auStack_60 [16];
  Il2CppObject *pIStack_50;
  undefined1 auStack_48 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_40;
  Il2CppObject *pIStack_38;
  
  __this_00 = (Map_MapLoader_c **)__this;
  if (Il2CppMethodInitialized_075479d2 == '\0') {
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
    __this_00 = &TypeInfo_Map_MapLoader;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479d2 = '\x01';
    in_RDX = extraout_RDX;
  }
  auStack_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  pIStack_38 = (Il2CppObject *)0x0;
  if ((__this->fields)._capturedNewState != false) {
    MapEditor_ReparentObjectsCommand__ApplyStates
              ((MapEditor_ReparentObjectsCommand_o *)__this_00,(__this->fields)._newStates,in_RDX);
    return;
  }
  pSVar2 = (__this->fields)._targetParents;
  if ((pSVar2 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) &&
     (pSVar5 = System_Collections_Generic_Dictionary_int__int___get_Keys
                         (pSVar2,(MethodInfo_4A03B10 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Keys),
     pSVar5 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_60,
               pSVar5,(MethodInfo_5106330 *)
                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_int_GetEnumerator);
    pIStack_38 = pIStack_50;
    auStack_48 = (undefined1  [8])auStack_60._0_8_;
    pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 auStack_60._8_8_;
    auStack_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    auStack_60._8_8_ =
         (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_48;
    while (bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext
                             ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                               *)auStack_48,
                              (MethodInfo_4C9FB40 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_MoveNext
                             ), bVar3) {
      iVar4 = (int32_t)pIStack_38;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar7,iVar4,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar3) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                           (pSVar7,iVar4,
                            (MethodInfo_4A0F690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        pSVar2 = (__this->fields)._targetParents;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar4 = System_Collections_Generic_Dictionary_int__int___get_Item
                          (pSVar2,iVar4,
                           (MethodInfo_4A03E70 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
        if (iVar4 < 0) {
label_05c8f3f0:
          parent = (Map_MapObject_o *)0x0;
          uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
        }
        else {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar7,iVar4,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (!bVar3) goto label_05c8f3f0;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          parent = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar7,iVar4,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__SetParentLogical(pMVar6,parent,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_48,
               (MethodInfo_4C9FB30 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_Dispose);
    pSVar2 = (__this->fields)._targetParents;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) &&
       (pSVar5 = System_Collections_Generic_Dictionary_int__int___get_Keys
                           (pSVar2,(MethodInfo_4A03B10 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Keys),
       pSVar5 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_int__int___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_60,
                 pSVar5,(MethodInfo_5106330 *)
                        MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_int_GetEnumerator);
      pIStack_38 = pIStack_50;
      auStack_48 = (undefined1  [8])auStack_60._0_8_;
      pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   auStack_60._8_8_;
      auStack_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      auStack_60._8_8_ =
           (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_48;
      while( true ) {
        bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___MoveNext
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           auStack_48,
                           (MethodInfo_4C9FB40 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_MoveNext
                          );
        if (!bVar3) {
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__int___Dispose
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     auStack_48,
                     (MethodInfo_4C9FB30 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_int_Dispose
                    );
          (__this->fields)._capturedNewState = true;
          return;
        }
        iVar4 = (int32_t)pIStack_38;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
        bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar7,iVar4,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (bVar3) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar7,iVar4,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          state = MapEditor_ReparentObjectsCommand__CaptureState
                            ((MapEditor_ReparentObjectsCommand_o *)pSVar7,pMVar6,method_01);
          pSVar7 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields)._newStates;
          if (pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          method_00 = 
          MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_set_Item;
          System_Collections_Generic_Dictionary_int__object___set_Item
                    (pSVar7,iVar4,(Il2CppObject *)state,
                     (MethodInfo_4A0F720 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_set_Item
                    );
          MapEditor_ReparentObjectsCommand__ApplyState
                    ((MapEditor_ReparentObjectsCommand_o *)pSVar7,pMVar6,state,method_00);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ReparentObjectsCommand$$Unexecute
// il2cpp: void MapEditor_ReparentObjectsCommand__Unexecute (MapEditor_ReparentObjectsCommand_o* __this, const MethodInfo* method);
// 0x5c8fe50

void MapEditor_ReparentObjectsCommand__Unexecute
               (MapEditor_ReparentObjectsCommand_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  MapEditor_ReparentObjectsCommand__ApplyStates(__this,(__this->fields)._oldStates,in_RDX);
  return;
}


// MapEditor.ReparentObjectsCommand$$ApplyStates
// il2cpp: void MapEditor_ReparentObjectsCommand__ApplyStates (MapEditor_ReparentObjectsCommand_o* __this, System_Collections_Generic_Dictionary_int__ReparentObjectsCommand_ObjectState__o* states, const MethodInfo* method);
// 0x5c8f990
// eh: try 0x5c8fac2..0x5c8fd70 -> pad 0x5c8fd91 (+24 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8fdb5..0x5c8fdba -> pad 0x5c8fdd9 cleanup
// eh: try 0x5c8fddc..0x5c8fde6 -> pad 0x5c8fe3f catch (...) [compiler noexcept guard]
// eh: try 0x5c8fe00..0x5c8fe05 -> pad 0x5c8fe2a cleanup
// eh: try 0x5c8fe2d..0x5c8fe37 -> pad 0x5c8fe3f catch (...) [compiler noexcept guard]
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8fc7d: nop dword ptr [rax]
// asm:   0x5c8fd75: jmp 0x5c8fd9d
// asm:   0x5c8fd77: jmp 0x5c8fd9d
// asm:   0x5c8fd79: jmp 0x5c8fde8
// asm:   0x5c8fd7b: jmp 0x5c8fd9d
// asm:   0x5c8fd7d: jmp 0x5c8fd9d
// asm:   0x5c8fd7f: jmp 0x5c8fd9d
// asm:   0x5c8fd81: jmp 0x5c8fd9d
// asm:   0x5c8fd83: jmp 0x5c8fde8
// asm:   0x5c8fd85: jmp 0x5c8fd9d
// asm:   0x5c8fd87: jmp 0x5c8fd9d
// asm:   0x5c8fd89: jmp 0x5c8fd9d
// asm:   0x5c8fd8b: jmp 0x5c8fd9d
// asm:   0x5c8fd8d: jmp 0x5c8fde8
// asm:   0x5c8fd8f: jmp 0x5c8fde8
// asm:   0x5c8fd91: jmp 0x5c8fd9d
// asm:   0x5c8fd93: jmp 0x5c8fd9d
// asm:   0x5c8fd95: jmp 0x5c8fd9d
// asm:   0x5c8fd97: jmp 0x5c8fde8
// asm:   0x5c8fd99: jmp 0x5c8fde8
// asm:   0x5c8fd9b: jmp 0x5c8fde8
// asm:   0x5c8fd9d: mov rbx, rax
// asm:   0x5c8fda0: cmp edx, 1
// asm:   0x5c8fda3: jne 0x5c8fddc
// asm:   0x5c8fda5: mov rdi, rbx
// asm:   0x5c8fda8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8fdad: mov rbx, qword ptr [rax]
// asm:   0x5c8fdb0: mov qword ptr [rsp + 8], rbx
// asm:   0x5c8fdb5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8fdba: lea rax, [rip + 0x15ffd97]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object
// asm:   0x5c8fdc1: mov rsi, qword ptr [rax]
// asm:   0x5c8fdc4: lea rdi, [rsp + 0x20]
// asm:   0x5c8fdc9: call 0x4da27d0  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose()
// asm:   0x5c8fdce: test rbx, rbx
// asm:   0x5c8fdd1: je 0x5c8fc27
// asm:   0x5c8fdd7: jmp 0x5c8fe22
// asm:   0x5c8fdd9: mov rbx, rax
// asm:   0x5c8fddc: lea rdi, [rsp + 8]
// asm:   0x5c8fde1: call 0x2fda8f0  ; il2cpp_runtime_helper_02fda8f0()
// asm:   0x5c8fde6: jmp 0x5c8fe37
// asm:   0x5c8fde8: mov rbx, rax
// asm:   0x5c8fdeb: cmp edx, 1
// asm:   0x5c8fdee: jne 0x5c8fe2d
// asm:   0x5c8fdf0: mov rdi, rbx
// asm:   0x5c8fdf3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8fdf8: mov rbx, qword ptr [rax]
// asm:   0x5c8fdfb: mov qword ptr [rsp + 8], rbx
// asm:   0x5c8fe00: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8fe05: lea rax, [rip + 0x15ffd4c]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object
// asm:   0x5c8fe0c: mov rsi, qword ptr [rax]
// asm:   0x5c8fe0f: lea rdi, [rsp + 0x20]
// asm:   0x5c8fe14: call 0x4da27d0  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose()
// asm:   0x5c8fe19: test rbx, rbx
// asm:   0x5c8fe1c: je 0x5c8fd3e
// asm:   0x5c8fe22: mov rdi, rbx
// asm:   0x5c8fe25: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8fe2a: mov rbx, rax
// asm:   0x5c8fe2d: lea rdi, [rsp + 8]
// asm:   0x5c8fe32: call 0x2fda920  ; il2cpp_runtime_helper_02fda920()
// asm:   0x5c8fe37: mov rdi, rbx
// asm:   0x5c8fe3a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8fe3f: mov rdi, rax
// asm:   0x5c8fe42: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_ReparentObjectsCommand__ApplyStates
               (MapEditor_ReparentObjectsCommand_o *__this,
               System_Collections_Generic_Dictionary_int__ReparentObjectsCommand_ObjectState__o *states,
               MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  int32_t iVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar5;
  Map_MapObject_o *pMVar6;
  Il2CppObject *pIVar7;
  Map_MapObject_o *parent;
  MapEditor_ReparentObjectsCommand_ObjectState_o *state;
  MethodInfo **method_00;
  System_Collections_Generic_Dictionary_int__ReparentObjectsCommand_ObjectState__o *__this_00;
  undefined1 auStack_70 [16];
  Il2CppObject *pIStack_60;
  undefined1 auStack_58 [8];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *pSStack_50;
  Il2CppObject *pIStack_48;
  System_Collections_Generic_Dictionary_int__ReparentObjectsCommand_ObjectState__o *pSStack_38;
  
  if (Il2CppMethodInitialized_075479d3 == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object_718fb60
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object_718fb68
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_ReparentObjectsCommand_ObjectState_GetEn
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479d3 = '\x01';
  }
  auStack_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)0x0;
  pIStack_48 = (Il2CppObject *)0x0;
  if ((states != (System_Collections_Generic_Dictionary_int__ReparentObjectsCommand_ObjectState__o *)0x0) &&
     (pSStack_38 = states,
     pSVar5 = System_Collections_Generic_Dictionary_int__object___get_Keys
                        ((System_Collections_Generic_Dictionary_int__object__o *)states,
                         (MethodInfo_4A0F330 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_get_Keys
                        ),
     pSVar5 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_70,
               pSVar5,(MethodInfo_510AAB0 *)
                      MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_ReparentObjectsCommand_ObjectState_GetEn
              );
    pIStack_48 = pIStack_60;
    auStack_58 = (undefined1  [8])auStack_70._0_8_;
    pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 auStack_70._8_8_;
    auStack_70._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    auStack_70._8_8_ =
         (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_58;
    while (bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                             ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                               *)auStack_58,
                              (MethodInfo_4CA27E0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object_718fb60
                             ), bVar4) {
      iVar3 = (int32_t)pIStack_48;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar2,iVar3,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
      if (bVar4) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                           (pSVar2,iVar3,
                            (MethodInfo_4A0F690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
        pIVar7 = System_Collections_Generic_Dictionary_int__object___get_Item
                           ((System_Collections_Generic_Dictionary_int__object__o *)pSStack_38,iVar3,
                            (MethodInfo_4A0F690 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_get_Item
                           );
        if (pIVar7 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (*(int *)&pIVar7[1].klass < 0) {
label_05c8fab0:
          parent = (Map_MapObject_o *)0x0;
          uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
        }
        else {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar2,*(int32_t *)&pIVar7[1].klass,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (!bVar4) goto label_05c8fab0;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          parent = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar2,*(int32_t *)&pIVar7[1].klass,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__SetParentLogical(pMVar6,parent,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_58,
               (MethodInfo_4CA27D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object
              );
    pSVar5 = System_Collections_Generic_Dictionary_int__object___get_Keys
                       ((System_Collections_Generic_Dictionary_int__object__o *)pSStack_38,
                        (MethodInfo_4A0F330 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_get_Keys
                       );
    if (pSVar5 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      method_00 = &
                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_ReparentObjectsCommand_ObjectState_GetEn
      ;
      System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_70,
                 pSVar5,(MethodInfo_510AAB0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_ReparentObjectsCommand_ObjectState_GetEn
                );
      pIStack_48 = pIStack_60;
      auStack_58 = (undefined1  [8])auStack_70._0_8_;
      pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   auStack_70._8_8_;
      auStack_70._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      auStack_70._8_8_ =
           (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_58;
      while( true ) {
        bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           auStack_58,
                           (MethodInfo_4CA27E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object_718fb60
                          );
        if (!bVar4) {
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     auStack_58,
                     (MethodInfo_4CA27D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int_ReparentObjectsCommand_Object
                    );
          return;
        }
        iVar3 = (int32_t)pIStack_48;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
        bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar2,iVar3,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (bVar4) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pMVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                             (pSVar2,iVar3,
                              (MethodInfo_4A0F690 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          __this_00 = pSStack_38;
          state = (MapEditor_ReparentObjectsCommand_ObjectState_o *)
                  System_Collections_Generic_Dictionary_int__object___get_Item
                            ((System_Collections_Generic_Dictionary_int__object__o *)pSStack_38,iVar3,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_ReparentObjectsCommand_ObjectState_get_Item
                            );
          MapEditor_ReparentObjectsCommand__ApplyState
                    ((MapEditor_ReparentObjectsCommand_o *)__this_00,pMVar6,state,(MethodInfo *)method_00);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.ReparentObjectsCommand$$CaptureState
// il2cpp: MapEditor_ReparentObjectsCommand_ObjectState_o* MapEditor_ReparentObjectsCommand__CaptureState (MapEditor_ReparentObjectsCommand_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x5c8f0f0

MapEditor_ReparentObjectsCommand_ObjectState_o *
MapEditor_ReparentObjectsCommand__CaptureState
          (MapEditor_ReparentObjectsCommand_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Vector3_Fields b;
  int32_t iVar2;
  MapEditor_ReparentObjectsCommand_ObjectState_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_20;
  
  if (Il2CppMethodInitialized_075479d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_ReparentObjectsCommand_ObjectState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075479d4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_ReparentObjectsCommand_ObjectState);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar2 = Map_MapLoader__GetLogicalParentId(obj,(MethodInfo *)0x0);
  if (((__this_00 != (MapEditor_ReparentObjectsCommand_ObjectState_o *)0x0) &&
      ((__this_00->fields).Parent = iVar2, obj != (Map_MapObject_o *)0x0)) &&
     (pUVar1 = (obj->fields).GameObject, pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      UVar4 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
      (__this_00->fields).Position.fields.x = UVar4.fields.x;
      (__this_00->fields).Position.fields.y = UVar4.fields.y;
      (__this_00->fields).Position.fields.z = UVar4.fields.z;
      pUVar1 = (obj->fields).GameObject;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          local_20 = UnityEngine_Transform__get_localRotation(pUVar3,(MethodInfo *)0x0);
          UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_20,(MethodInfo *)0x0);
          euler.fields.x = UVar4.fields.x * 57.29578;
          euler.fields.y = UVar4.fields.y * 57.29578;
          euler.fields.z = UVar4.fields.z * 57.29578;
          UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
          (__this_00->fields).Rotation.fields.x = UVar4.fields.x;
          (__this_00->fields).Rotation.fields.y = UVar4.fields.y;
          (__this_00->fields).Rotation.fields.z = UVar4.fields.z;
          pUVar1 = (obj->fields).GameObject;
          if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
            pUVar3 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              UVar4 = UnityEngine_Transform__get_localScale(pUVar3,(MethodInfo *)0x0);
              b = (obj->fields).BaseScale.fields;
              if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
              }
              UVar4 = Utility_Util__DivideVectors(UVar4,(UnityEngine_Vector3_o)b,(MethodInfo *)0x0);
              (__this_00->fields).Scale.fields.x = UVar4.fields.x;
              (__this_00->fields).Scale.fields.y = UVar4.fields.y;
              (__this_00->fields).Scale.fields.z = UVar4.fields.z;
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
// 0x5c8f7d0

void MapEditor_ReparentObjectsCommand__ApplyState
               (MapEditor_ReparentObjectsCommand_o *__this,Map_MapObject_o *obj,
               MapEditor_ReparentObjectsCommand_ObjectState_o *state,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar6;
  undefined8 uVar4;
  undefined8 uVar5;
  UnityEngine_GameObject_o *pUVar7;
  Map_MapScriptBaseObject_o *pMVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o b;
  UnityEngine_Vector3_Fields local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_075479d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075479d5 = '\x01';
  }
  if ((obj != (Map_MapObject_o *)0x0) &&
     (pUVar7 = (obj->fields).GameObject, pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
    pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if ((state != (MapEditor_ReparentObjectsCommand_ObjectState_o *)0x0) &&
       (pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_localPosition
                (pUVar9,(UnityEngine_Vector3_o)(state->fields).Position.fields,(MethodInfo *)0x0);
      pUVar7 = (obj->fields).GameObject;
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        uVar3 = (state->fields).Rotation.fields.x;
        uVar6 = (state->fields).Rotation.fields.y;
        local_48.z = (state->fields).Rotation.fields.z * 0.017453292;
        local_48.y = (float)uVar6 * 0.017453292;
        local_48.x = (float)uVar3 * 0.017453292;
        value = UnityEngine_Quaternion__Internal_FromEulerRad
                          ((UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localRotation(pUVar9,value,(MethodInfo *)0x0);
          pUVar7 = (obj->fields).GameObject;
          if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
            pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
            uVar4._0_4_ = (obj->fields).BaseScale.fields.x;
            uVar4._4_4_ = (obj->fields).BaseScale.fields.y;
            fVar1 = (obj->fields).BaseScale.fields.z;
            uVar5._0_4_ = (state->fields).Scale.fields.x;
            uVar5._4_4_ = (state->fields).Scale.fields.y;
            fVar2 = (state->fields).Scale.fields.z;
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              uStack_20 = 0;
              uStack_30 = 0;
              local_38 = uVar5;
              local_28 = uVar4;
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
              uVar4._0_4_ = (undefined4)local_28;
              uVar4._4_4_ = local_28._4_4_;
              uVar5._0_4_ = (undefined4)local_38;
              uVar5._4_4_ = local_38._4_4_;
            }
            UVar10.fields.y = (float)uVar4._4_4_;
            UVar10.fields.x = (float)(undefined4)uVar4;
            UVar10.fields.z = fVar1;
            b.fields.y = (float)uVar5._4_4_;
            b.fields.x = (float)(undefined4)uVar5;
            b.fields.z = fVar2;
            UVar10 = Utility_Util__MultiplyVectors(UVar10,b,(MethodInfo *)0x0);
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localScale(pUVar9,UVar10,(MethodInfo *)0x0);
              pMVar8 = (obj->fields).ScriptObject;
              if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
                (pMVar8->fields).Parent = (state->fields).Parent;
                Map_MapScriptBaseObject__SetPosition
                          (pMVar8,(UnityEngine_Vector3_o)(state->fields).Position.fields,(MethodInfo *)0x0);
                pMVar8 = (obj->fields).ScriptObject;
                if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
                  Map_MapScriptBaseObject__SetRotation
                            (pMVar8,(UnityEngine_Vector3_o)(state->fields).Rotation.fields,(MethodInfo *)0x0);
                  pMVar8 = (obj->fields).ScriptObject;
                  if (pMVar8 != (Map_MapScriptBaseObject_o *)0x0) {
                    Map_MapScriptBaseObject__SetScale
                              (pMVar8,(UnityEngine_Vector3_o)(state->fields).Scale.fields,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


