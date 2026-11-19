// Type: MapEditor.TransformScaleCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/MapEditor/TransformScaleCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformScaleCommand.cs
// --------------------------------

// MapEditor.TransformScaleCommand$$.ctor
// il2cpp: void MapEditor_TransformScaleCommand___ctor (MapEditor_TransformScaleCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x5c919c0
// eh: try 0x5c91bef..0x5c91f03 -> pad 0x5c91f32 (+26 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c91f54..0x5c91f59 -> pad 0x5c91f7e cleanup
// eh: try 0x5c91f81..0x5c91f8b -> pad 0x5c91f93 catch (...) [compiler noexcept guard]
// asm: 49 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c91f08: jmp 0x5c91f3c
// asm:   0x5c91f0a: jmp 0x5c91f3c
// asm:   0x5c91f0c: jmp 0x5c91f3c
// asm:   0x5c91f0e: jmp 0x5c91f3c
// asm:   0x5c91f10: jmp 0x5c91f3c
// asm:   0x5c91f12: jmp 0x5c91f3c
// asm:   0x5c91f14: jmp 0x5c91f3c
// asm:   0x5c91f16: jmp 0x5c91f3c
// asm:   0x5c91f18: jmp 0x5c91f3c
// asm:   0x5c91f1a: jmp 0x5c91f3c
// asm:   0x5c91f1c: jmp 0x5c91f3c
// asm:   0x5c91f1e: jmp 0x5c91f3c
// asm:   0x5c91f20: jmp 0x5c91f3c
// asm:   0x5c91f22: jmp 0x5c91f3c
// asm:   0x5c91f24: jmp 0x5c91f3c
// asm:   0x5c91f26: jmp 0x5c91f3c
// asm:   0x5c91f28: jmp 0x5c91f3c
// asm:   0x5c91f2a: jmp 0x5c91f3c
// asm:   0x5c91f2c: jmp 0x5c91f3c
// asm:   0x5c91f2e: jmp 0x5c91f3c
// asm:   0x5c91f30: jmp 0x5c91f3c
// asm:   0x5c91f32: jmp 0x5c91f3c
// asm:   0x5c91f34: jmp 0x5c91f3c
// asm:   0x5c91f36: jmp 0x5c91f3c
// asm:   0x5c91f38: jmp 0x5c91f3c
// asm:   0x5c91f3a: jmp 0x5c91f3c
// asm:   0x5c91f3c: mov rbx, rax
// asm:   0x5c91f3f: cmp edx, 1
// asm:   0x5c91f42: jne 0x5c91f81
// asm:   0x5c91f44: mov rdi, rbx
// asm:   0x5c91f47: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c91f4c: mov rbx, qword ptr [rax]
// asm:   0x5c91f4f: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5c91f54: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c91f59: lea rax, [rip + 0x15fc460]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5c91f60: mov rsi, qword ptr [rax]
// asm:   0x5c91f63: lea rdi, [rsp + 0x10]
// asm:   0x5c91f68: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c91f6d: test rbx, rbx
// asm:   0x5c91f70: je 0x5c91eb3
// asm:   0x5c91f76: mov rdi, rbx
// asm:   0x5c91f79: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c91f7e: mov rbx, rax
// asm:   0x5c91f81: lea rdi, [rsp + 0x28]
// asm:   0x5c91f86: call 0x2fda9e0  ; il2cpp_runtime_helper_02fda9e0()
// asm:   0x5c91f8b: mov rdi, rbx
// asm:   0x5c91f8e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c91f93: mov rdi, rax
// asm:   0x5c91f96: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_TransformScaleCommand___ctor
               (MapEditor_TransformScaleCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o **targetAddress;
  System_Collections_Generic_List_Vector3__o **targetAddress_00;
  System_Collections_Generic_List_int__o **targetAddress_01;
  int32_t *piVar1;
  float fVar2;
  int32_t item;
  uint uVar3;
  System_Int32_array *pSVar4;
  UnityEngine_Vector3_array *pUVar5;
  MethodInfo *pMVar6;
  Il2CppObject *pIVar7;
  bool bVar8;
  System_Collections_Generic_List_Vector3__o *pSVar9;
  System_Collections_Generic_List_int__o *pSVar10;
  UnityEngine_Transform_o *pUVar11;
  Il2CppClass *__this_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o b;
  System_Collections_Generic_List_Enumerator_object__o local_98;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  undefined1 local_68 [16];
  System_Collections_Generic_List_Vector3__o **local_58;
  MapEditor_TransformScaleCommand_Fields *local_50;
  void *local_48;
  undefined8 uStack_40;
  
  local_68._0_8_ = mapObjects;
  if (Il2CppMethodInitialized_075479df == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075479df = '\x01';
  }
  local_98.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar9,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  local_50 = &__this->fields;
  (__this->fields)._oldScales = pSVar9;
  Il2CppCodeGenWriteBarrier(&local_50->_oldScales);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar9,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  local_58 = &(__this->fields)._newScales;
  (__this->fields)._newScales = pSVar9;
  Il2CppCodeGenWriteBarrier(local_58);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar9,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  targetAddress = &(__this->fields)._oldPositions;
  (__this->fields)._oldPositions = pSVar9;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor
            (pSVar9,(MethodInfo_39FEFC0 *)MethodInfo_System_Collections_Generic_List_Vector3_ctor);
  targetAddress_00 = &(__this->fields)._newPositions;
  (__this->fields)._newPositions = pSVar9;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (pSVar10,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  targetAddress_01 = &(__this->fields)._ids;
  (__this->fields)._ids = pSVar10;
  Il2CppCodeGenWriteBarrier(targetAddress_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((System_Collections_Generic_List_object__o *)local_68._0_8_ ==
      (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
             (System_Collections_Generic_List_object__o *)local_68._0_8_,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
  local_98.fields._current = local_70;
  local_98.fields._list = (System_Collections_Generic_List_T__o *)local_80._0_8_;
  local_98.fields._index = local_80._8_4_;
  local_98.fields._version = local_80._12_4_;
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_8_ = &local_98;
  while( true ) {
    bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_98,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    pIVar7 = local_98.fields._current;
    pMVar6 = MethodInfo_System_Collections_Generic_List_int_Add;
    if (!bVar8) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_98,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
                );
      return;
    }
    if (local_98.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = local_98.fields._current[2].klass;
    if (__this_00 == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = *targetAddress_01;
    if (pSVar10 == (System_Collections_Generic_List_int__o *)0x0) break;
    item = *(int32_t *)&(__this_00->_1).byval_arg.data;
    piVar1 = &(pSVar10->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (pSVar10->fields)._items;
    if (pSVar4 == (System_Int32_array *)0x0) break;
    uVar3 = (pSVar10->fields)._size;
    if (uVar3 < (uint)pSVar4->max_length) {
      (pSVar10->fields)._size = uVar3 + 1;
      pSVar4->m_Items[(int)uVar3] = item;
    }
    else {
      System_Collections_Generic_List_int___AddWithResize
                (pSVar10,item,(MethodInfo_3916AC0 *)pMVar6->klass->rgctx_data[0xe].method);
      __this_00 = pIVar7[2].klass;
      if (__this_00 == (Il2CppClass *)0x0) {
        ThrowNullReferenceException();
      }
    }
    pSVar9 = local_50->_oldScales;
    UVar12 = Map_MapScriptBaseObject__GetScale((Map_MapScriptBaseObject_o *)__this_00,(MethodInfo *)0x0);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c91ec2:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar9->fields)._items;
    if (pUVar5 == (UnityEngine_Vector3_array *)0x0) goto label_05c91ec2;
    uVar3 = (pSVar9->fields)._size;
    if (uVar3 < (uint)pUVar5->max_length) {
      (pSVar9->fields)._size = uVar3 + 1;
      pUVar5->m_Items[(int)uVar3].fields.x = UVar12.fields.x;
      pUVar5->m_Items[(int)uVar3].fields.y = UVar12.fields.y;
      pUVar5->m_Items[(int)uVar3].fields.z = UVar12.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar9,UVar12,(MethodInfo_39FF950 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    if (pIVar7[1].monitor == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = *local_58;
    pUVar11 = UnityEngine_GameObject__get_transform(pIVar7[1].monitor,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar12 = UnityEngine_Transform__get_localScale(pUVar11,(MethodInfo *)0x0);
    local_68._8_4_ = extraout_XMM0_Dc;
    local_68._0_8_ = UVar12.fields._0_8_;
    local_68._12_4_ = extraout_XMM0_Dd;
    local_48 = pIVar7[2].monitor;
    uStack_40 = 0;
    fVar2 = *(float *)&pIVar7[3].klass;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    UVar12.fields.x = (float)local_68._0_4_;
    UVar12.fields.y = (float)local_68._4_4_;
    b.fields.z = fVar2;
    b.fields._0_8_ = local_48;
    UVar12 = Utility_Util__DivideVectors(UVar12,b,(MethodInfo *)0x0);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c91ed1:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar9->fields)._items;
    if (pUVar5 == (UnityEngine_Vector3_array *)0x0) goto label_05c91ed1;
    uVar3 = (pSVar9->fields)._size;
    if (uVar3 < (uint)pUVar5->max_length) {
      (pSVar9->fields)._size = uVar3 + 1;
      pUVar5->m_Items[(int)uVar3].fields.x = UVar12.fields.x;
      pUVar5->m_Items[(int)uVar3].fields.y = UVar12.fields.y;
      pUVar5->m_Items[(int)uVar3].fields.z = UVar12.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar9,UVar12,(MethodInfo_39FF950 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    if (pIVar7[2].klass == (Il2CppClass *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = *targetAddress;
    UVar12 = Map_MapScriptBaseObject__GetPosition
                       ((Map_MapScriptBaseObject_o *)pIVar7[2].klass,(MethodInfo *)0x0);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c91ecc:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar9->fields)._items;
    if (pUVar5 == (UnityEngine_Vector3_array *)0x0) goto label_05c91ecc;
    uVar3 = (pSVar9->fields)._size;
    if (uVar3 < (uint)pUVar5->max_length) {
      (pSVar9->fields)._size = uVar3 + 1;
      pUVar5->m_Items[(int)uVar3].fields.x = UVar12.fields.x;
      pUVar5->m_Items[(int)uVar3].fields.y = UVar12.fields.y;
      pUVar5->m_Items[(int)uVar3].fields.z = UVar12.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar9,UVar12,(MethodInfo_39FF950 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    if (pIVar7[1].monitor == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar9 = *targetAddress_00;
    pUVar11 = UnityEngine_GameObject__get_transform(pIVar7[1].monitor,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar12 = UnityEngine_Transform__get_localPosition(pUVar11,(MethodInfo *)0x0);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Vector3_Add;
    if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) {
label_05c91ed6:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar9->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar9->fields)._items;
    if (pUVar5 == (UnityEngine_Vector3_array *)0x0) goto label_05c91ed6;
    uVar3 = (pSVar9->fields)._size;
    if (uVar3 < (uint)pUVar5->max_length) {
      (pSVar9->fields)._size = uVar3 + 1;
      pUVar5->m_Items[(int)uVar3].fields.x = UVar12.fields.x;
      pUVar5->m_Items[(int)uVar3].fields.y = UVar12.fields.y;
      pUVar5->m_Items[(int)uVar3].fields.z = UVar12.fields.z;
    }
    else {
      System_Collections_Generic_List_Vector3___AddWithResize
                (pSVar9,UVar12,(MethodInfo_39FF950 *)pMVar6->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.TransformScaleCommand$$Execute
// il2cpp: void MapEditor_TransformScaleCommand__Execute (MapEditor_TransformScaleCommand_o* __this, const MethodInfo* method);
// 0x5c91fa0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9205c: mov rax, qword ptr [r13]

void MapEditor_TransformScaleCommand__Execute(MapEditor_TransformScaleCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  UnityEngine_Vector3_Fields a;
  int32_t key;
  Map_MapObject_o *pMVar4;
  UnityEngine_Transform_o *pUVar5;
  System_Collections_Generic_List_int__o *__this_01;
  int32_t index;
  UnityEngine_Vector3_o UVar6;
  
  if (Il2CppMethodInitialized_075479e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075479e0 = '\x01';
  }
  __this_01 = (__this->fields)._ids;
  if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) {
label_05c921e5:
    ThrowNullReferenceException();
  }
  index = 0;
  do {
    if ((__this_01->fields)._size <= index) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      __this_01 = (__this->fields)._ids;
      if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c921e5;
    }
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    key = System_Collections_Generic_List_int___get_Item
                    (__this_01,index,
                     (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (__this_00,key,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar4 == (Map_MapObject_o *)0x0)) ||
       (pUVar1 = (pMVar4->fields).GameObject, pUVar1 == (UnityEngine_GameObject_o *)0x0)) goto label_05c921e5;
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._newScales;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c921e5;
    a = (pMVar4->fields).BaseScale.fields;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    UVar6 = Utility_Util__MultiplyVectors((UnityEngine_Vector3_o)a,UVar6,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05c921e5;
    UnityEngine_Transform__set_localScale(pUVar5,UVar6,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._newScales;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c921e5;
    pMVar3 = (pMVar4->fields).ScriptObject;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c921e5;
    Map_MapScriptBaseObject__SetScale(pMVar3,UVar6,(MethodInfo *)0x0);
    pUVar1 = (pMVar4->fields).GameObject;
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05c921e5;
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._newPositions;
    if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
       (UVar6 = System_Collections_Generic_List_Vector3___get_Item
                          (pSVar2,index,
                           (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05c921e5;
    UnityEngine_Transform__set_localPosition(pUVar5,UVar6,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._newPositions;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c921e5;
    pMVar3 = (pMVar4->fields).ScriptObject;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c921e5;
    Map_MapScriptBaseObject__SetPosition(pMVar3,UVar6,(MethodInfo *)0x0);
    index = index + 1;
    __this_01 = (__this->fields)._ids;
    if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c921e5;
  } while( true );
}


// MapEditor.TransformScaleCommand$$Unexecute
// il2cpp: void MapEditor_TransformScaleCommand__Unexecute (MapEditor_TransformScaleCommand_o* __this, const MethodInfo* method);
// 0x5c92200
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c922bc: mov rax, qword ptr [r13]

void MapEditor_TransformScaleCommand__Unexecute(MapEditor_TransformScaleCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  Map_MapScriptBaseObject_o *pMVar3;
  UnityEngine_Vector3_Fields a;
  int32_t key;
  Map_MapObject_o *pMVar4;
  UnityEngine_Transform_o *pUVar5;
  System_Collections_Generic_List_int__o *__this_01;
  int32_t index;
  UnityEngine_Vector3_o UVar6;
  
  if (Il2CppMethodInitialized_075479e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075479e1 = '\x01';
  }
  __this_01 = (__this->fields)._ids;
  if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) {
label_05c92445:
    ThrowNullReferenceException();
  }
  index = 0;
  do {
    if ((__this_01->fields)._size <= index) {
      return;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      __this_01 = (__this->fields)._ids;
      if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c92445;
    }
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
    key = System_Collections_Generic_List_int___get_Item
                    (__this_01,index,
                     (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
    if (((__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pMVar4 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (__this_00,key,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item),
        pMVar4 == (Map_MapObject_o *)0x0)) ||
       (pUVar1 = (pMVar4->fields).GameObject, pUVar1 == (UnityEngine_GameObject_o *)0x0)) goto label_05c92445;
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._oldScales;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c92445;
    a = (pMVar4->fields).BaseScale.fields;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    UVar6 = Utility_Util__MultiplyVectors((UnityEngine_Vector3_o)a,UVar6,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05c92445;
    UnityEngine_Transform__set_localScale(pUVar5,UVar6,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._oldScales;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c92445;
    pMVar3 = (pMVar4->fields).ScriptObject;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c92445;
    Map_MapScriptBaseObject__SetScale(pMVar3,UVar6,(MethodInfo *)0x0);
    pUVar1 = (pMVar4->fields).GameObject;
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05c92445;
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._oldPositions;
    if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
       (UVar6 = System_Collections_Generic_List_Vector3___get_Item
                          (pSVar2,index,
                           (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05c92445;
    UnityEngine_Transform__set_localPosition(pUVar5,UVar6,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._oldPositions;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_05c92445;
    pMVar3 = (pMVar4->fields).ScriptObject;
    UVar6 = System_Collections_Generic_List_Vector3___get_Item
                      (pSVar2,index,
                       (MethodInfo_39FF5D0 *)MethodInfo_System_Collections_Generic_List_Vector3_get_Item);
    if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto label_05c92445;
    Map_MapScriptBaseObject__SetPosition(pMVar3,UVar6,(MethodInfo *)0x0);
    index = index + 1;
    __this_01 = (__this->fields)._ids;
    if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto label_05c92445;
  } while( true );
}


