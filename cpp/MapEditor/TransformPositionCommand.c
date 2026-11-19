// Type: MapEditor.TransformPositionCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/TransformPositionCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformPositionCommand.cs
// --------------------------------

// MapEditor.TransformPositionCommand$$.ctor
// il2cpp: void MapEditor_TransformPositionCommand___ctor (MapEditor_TransformPositionCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x5c8fe70
// eh: try 0x5c9002f..0x5c901d5 -> pad 0x5c901f0 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c9020e..0x5c90213 -> pad 0x5c90236 cleanup
// eh: try 0x5c90239..0x5c90243 -> pad 0x5c9024b catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c901da: jmp 0x5c901f6
// asm:   0x5c901dc: jmp 0x5c901f6
// asm:   0x5c901de: jmp 0x5c901f6
// asm:   0x5c901e0: jmp 0x5c901f6
// asm:   0x5c901e2: jmp 0x5c901f6
// asm:   0x5c901e4: jmp 0x5c901f6
// asm:   0x5c901e6: jmp 0x5c901f6
// asm:   0x5c901e8: jmp 0x5c901f6
// asm:   0x5c901ea: jmp 0x5c901f6
// asm:   0x5c901ec: jmp 0x5c901f6
// asm:   0x5c901ee: jmp 0x5c901f6
// asm:   0x5c901f0: jmp 0x5c901f6
// asm:   0x5c901f2: jmp 0x5c901f6
// asm:   0x5c901f4: jmp 0x5c901f6
// asm:   0x5c901f6: mov rbx, rax
// asm:   0x5c901f9: cmp edx, 1
// asm:   0x5c901fc: jne 0x5c90239
// asm:   0x5c901fe: mov rdi, rbx
// asm:   0x5c90201: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c90206: mov rbx, qword ptr [rax]
// asm:   0x5c90209: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c9020e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c90213: lea rax, [rip + 0x15fe1a6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5c9021a: mov rsi, qword ptr [rax]
// asm:   0x5c9021d: mov rdi, rsp
// asm:   0x5c90220: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c90225: test rbx, rbx
// asm:   0x5c90228: je 0x5c9019e
// asm:   0x5c9022e: mov rdi, rbx
// asm:   0x5c90231: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c90236: mov rbx, rax
// asm:   0x5c90239: lea rdi, [rsp + 0x20]
// asm:   0x5c9023e: call 0x2fda950  ; il2cpp_runtime_helper_02fda950()
// asm:   0x5c90243: mov rdi, rbx
// asm:   0x5c90246: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c9024b: mov rdi, rax
// asm:   0x5c9024e: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_TransformPositionCommand___ctor
               (MapEditor_TransformPositionCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o **targetAddress;
  System_Collections_Generic_List_int__o **targetAddress_00;
  int32_t *piVar1;
  int32_t item;
  uint uVar2;
  System_Int32_array *pSVar3;
  UnityEngine_Vector3_array *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *pMVar5;
  Il2CppObject *pIVar6;
  bool bVar7;
  System_Collections_Generic_List_Vector3__o *pSVar8;
  System_Collections_Generic_List_int__o *pSVar9;
  UnityEngine_Transform_o *__this_01;
  Il2CppClass *__this_02;
  UnityEngine_Vector3_o UVar10;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_075479d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Vector3);
    Il2CppMethodInitialized_075479d6 = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar8,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  (__this->fields)._oldPositions = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldPositions);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar8,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  targetAddress = &(__this->fields)._newPositions;
  (__this->fields)._newPositions = pSVar8;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (pSVar9,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  targetAddress_00 = &(__this->fields)._ids;
  (__this->fields)._ids = pSVar9;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)mapObjects,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_68.fields._current = local_38;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = &local_68;
  while( true ) {
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    pIVar6 = local_68.fields._current;
    pMVar5 = MethodInfo_System_Collections_Generic_List_int_Add;
    if (!bVar7) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
                );
      return;
    }
    if (local_68.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    __this_02 = local_68.fields._current[2].klass;
    if (__this_02 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = *targetAddress_00;
    if (pSVar9 == (System_Collections_Generic_List_int__o *)0x0) break;
    item = *(int32_t *)&(__this_02->_1).byval_arg.data;
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar9->fields)._items;
    if (pSVar3 == (System_Int32_array *)0x0) break;
    uVar2 = (pSVar9->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (pSVar9->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = item;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize
                (pSVar9,item,(MethodInfo_3916AC0 *)pMVar5->klass->rgctx_data[0xe].method);
      __this_02 = pIVar6[2].klass;
      if (__this_02 == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
    }
    pSVar8 = (__this->fields)._oldPositions;
    UVar10 = Map_MapScriptBaseObject__GetPosition((Map_MapScriptBaseObject_o *)__this_02,(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c901ad:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar8->fields)._items;
    if (pUVar4 == (UnityEngine_Vector3_array *)0x0) goto label_05c901ad;
    uVar2 = (pSVar8->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar8->fields)._size = uVar2 + 1;
      pUVar4->m_Items[(int)uVar2].fields.x = UVar10.fields.x;
      pUVar4->m_Items[(int)uVar2].fields.y = UVar10.fields.y;
      pUVar4->m_Items[(int)uVar2].fields.z = UVar10.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar8,UVar10,(MethodInfo_39FF950 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    __this_00 = pIVar6[1].monitor;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = *targetAddress;
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar10 = UnityEngine_Transform__get_localPosition(__this_01,(MethodInfo *)0x0);
    pMVar5 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar8 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c901b7:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar4 = (pSVar8->fields)._items;
    if (pUVar4 == (UnityEngine_Vector3_array *)0x0) goto label_05c901b7;
    uVar2 = (pSVar8->fields)._size;
    if (uVar2 < (uint)pUVar4->max_length) {
      (pSVar8->fields)._size = uVar2 + 1;
      pUVar4->m_Items[(int)uVar2].fields.x = UVar10.fields.x;
      pUVar4->m_Items[(int)uVar2].fields.y = UVar10.fields.y;
      pUVar4->m_Items[(int)uVar2].fields.z = UVar10.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar8,UVar10,(MethodInfo_39FF950 *)pMVar5->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformPositionCommand$$Execute
// il2cpp: void MapEditor_TransformPositionCommand__Execute (MapEditor_TransformPositionCommand_o* __this, const MethodInfo* method);
// 0x5c90260
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c902df: nop 
// asm:   0x5c9030c: mov rax, qword ptr [r12]

void MapEditor_TransformPositionCommand__Execute
               (MapEditor_TransformPositionCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  Map_MapScriptBaseObject_o *__this_01;
  int32_t iVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_List_int__o *pSVar5;
  int32_t index;
  UnityEngine_Vector3_o UVar6;
  
  if (Il2CppMethodInitialized_075479d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479d7 = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) {
label_05c90408:
    ThrowNullReferenceException();
  }
  index = 0;
  do {
    if ((pSVar5->fields)._size <= index) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      pSVar5 = (__this->fields)._ids;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c90408;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar3 = System_Collections_Generic_List_int___get_Item
                      (pSVar5,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar3,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar4 == (Map_MapObject_o *)0x0)) ||
       (__this_00 = (pMVar4->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0))
    goto label_05c90408;
    __this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._newPositions;
    if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
       (UVar6 = System_Collections_Generic_List_Vector3___get_Item
                          (pSVar2,index,
                           (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
       __this_02 == (UnityEngine_Transform_o *)0x0)) goto label_05c90408;
    UnityEngine_Transform__set_localPosition(__this_02,UVar6,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c90408;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar3 = System_Collections_Generic_List_int___get_Item
                      (pSVar5,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar3,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar4 == (Map_MapObject_o *)0x0)) ||
       (pSVar2 = (__this->fields)._newPositions, pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0))
    goto label_05c90408;
    __this_01 = (pMVar4->fields).ScriptObject;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (__this_01 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c90408;
    Map_MapScriptBaseObject__SetPosition(__this_01,UVar6,(MethodInfo *)0x0);
    index = index + 1;
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c90408;
  } while( true );
}


// MapEditor.TransformPositionCommand$$Unexecute
// il2cpp: void MapEditor_TransformPositionCommand__Unexecute (MapEditor_TransformPositionCommand_o* __this, const MethodInfo* method);
// 0x5c90420
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9049f: nop 
// asm:   0x5c904cc: mov rax, qword ptr [r12]

void MapEditor_TransformPositionCommand__Unexecute
               (MapEditor_TransformPositionCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  Map_MapScriptBaseObject_o *__this_01;
  int32_t iVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_List_int__o *pSVar5;
  int32_t index;
  UnityEngine_Vector3_o UVar6;
  
  if (Il2CppMethodInitialized_075479d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_075479d8 = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) {
label_05c905c8:
    ThrowNullReferenceException();
  }
  index = 0;
  do {
    if ((pSVar5->fields)._size <= index) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      pSVar5 = (__this->fields)._ids;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c905c8;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar3 = System_Collections_Generic_List_int___get_Item
                      (pSVar5,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar3,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar4 == (Map_MapObject_o *)0x0)) ||
       (__this_00 = (pMVar4->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0))
    goto label_05c905c8;
    __this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._oldPositions;
    if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
       (UVar6 = System_Collections_Generic_List_Vector3___get_Item
                          (pSVar2,index,
                           (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
       __this_02 == (UnityEngine_Transform_o *)0x0)) goto label_05c905c8;
    UnityEngine_Transform__set_localPosition(__this_02,UVar6,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c905c8;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    iVar3 = System_Collections_Generic_List_int___get_Item
                      (pSVar5,index,
                       (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar1,iVar3,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar4 == (Map_MapObject_o *)0x0)) ||
       (pSVar2 = (__this->fields)._oldPositions, pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0))
    goto label_05c905c8;
    __this_01 = (pMVar4->fields).ScriptObject;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (__this_01 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c905c8;
    Map_MapScriptBaseObject__SetPosition(__this_01,UVar6,(MethodInfo *)0x0);
    index = index + 1;
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c905c8;
  } while( true );
}


