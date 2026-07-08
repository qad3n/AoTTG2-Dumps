// Type: MapEditor.TransformPositionRotationCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/TransformPositionRotationCommand.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Commands/TransformPositionRotationCommand.cs  [CHANGED since prior version]
// --------------------------------

// MapEditor.TransformPositionRotationCommand$$.ctor
// il2cpp: void MapEditor_TransformPositionRotationCommand___ctor (MapEditor_TransformPositionRotationCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x40451e0

void MapEditor_TransformPositionRotationCommand___ctor
               (MapEditor_TransformPositionRotationCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o **ppSVar1;
  System_Collections_Generic_List_Vector3__o **ppSVar2;
  System_Collections_Generic_List_Vector3__o **ppSVar3;
  System_Collections_Generic_List_int__o **ppSVar4;
  int32_t *piVar5;
  int32_t item;
  uint uVar6;
  System_Int32_array *pSVar7;
  UnityEngine_Vector3_array *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  long lVar10;
  bool_conflict bVar11;
  System_Collections_Generic_List_Vector3__o *pSVar12;
  System_Collections_Generic_List_int__o *pSVar13;
  UnityEngine_Transform_o *pUVar14;
  Il2CppClass *pIVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  System_Collections_Generic_List_T__o *pSVar17;
  Il2CppRGCTXData *pIVar18;
  _union_247328 _Var19;
  _union_247328 _Var20;
  undefined1 local_48 [16];
  _union_247328 local_38;
  
  if (DAT_057043e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    il2cpp_init_method_metadata(&TypeInfo_List_Vector3);
    DAT_057043e6 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar12,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._oldPositions = pSVar12;
  il2cpp_runtime_glue(&__this->fields,pSVar12);
  pSVar12 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar12,MethodInfo_List_1_UnityEngine_Vector3);
  ppSVar1 = &(__this->fields)._newPositions;
  (__this->fields)._newPositions = pSVar12;
  il2cpp_runtime_glue(ppSVar1,pSVar12);
  pSVar12 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar12,MethodInfo_List_1_UnityEngine_Vector3);
  ppSVar2 = &(__this->fields)._oldRotations;
  (__this->fields)._oldRotations = pSVar12;
  il2cpp_runtime_glue(ppSVar2,pSVar12);
  pSVar12 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar12,MethodInfo_List_1_UnityEngine_Vector3);
  ppSVar3 = &(__this->fields)._newRotations;
  (__this->fields)._newRotations = pSVar12;
  il2cpp_runtime_glue(ppSVar3,pSVar12);
  pSVar13 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(pSVar13,MethodInfo_List_1_System_Int32);
  ppSVar4 = &(__this->fields)._ids;
  (__this->fields)._ids = pSVar13;
  il2cpp_runtime_glue(ppSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)mapObjects,MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
  pSVar17 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  pIVar18 = (Il2CppRGCTXData *)local_48._8_8_;
  _Var19 = local_38;
  while( true ) {
    __this_00.fields._8_8_ = pIVar18;
    __this_00.fields._list = pSVar17;
    __this_00.fields._current = _Var19.genericMethod;
    bVar11 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                       (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff88);
    lVar10 = MethodInfo_Void_Add;
    if ((char)bVar11 == '\0') {
      __this_01.fields._8_8_ = pIVar18;
      __this_01.fields._list = pSVar17;
      __this_01.fields._current = _Var19.genericMethod;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
      return;
    }
    if (_Var19.genericMethod == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar15 = ((Il2CppObject *)((long)_Var19.genericMethod + 0x20))->klass;
    if (pIVar15 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar13 = *ppSVar4;
    if (pSVar13 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    item = *(int32_t *)&(pIVar15->_1).byval_arg.data;
    piVar5 = &(pSVar13->fields)._version;
    *piVar5 = *piVar5 + 1;
    pSVar7 = (pSVar13->fields)._items;
    if (pSVar7 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar6 = (pSVar13->fields)._size;
    _Var20 = _Var19;
    if (uVar6 < (uint)pSVar7->max_length) {
      (pSVar13->fields)._size = uVar6 + 1;
      pSVar7->m_Items[(int)uVar6] = item;
    }
    else {
      System_Collections_Generic_List<int>__AddWithResize
                (pSVar13,item,
                 *(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      pIVar15 = ((Il2CppObject *)((long)_Var19.genericMethod + 0x20))->klass;
      if (pIVar15 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    pSVar12 = (__this->fields)._oldPositions;
    UVar16 = Map_MapScriptBaseObject__GetPosition
                       ((Map_MapScriptBaseObject_o *)pIVar15,(MethodInfo *)0x0);
    lVar10 = MethodInfo_Void_Add;
    if (pSVar12 == (System_Collections_Generic_List_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar5 = &(pSVar12->fields)._version;
    *piVar5 = *piVar5 + 1;
    pUVar8 = (pSVar12->fields)._items;
    if (pUVar8 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar6 = (pSVar12->fields)._size;
    if (uVar6 < (uint)pUVar8->max_length) {
      (pSVar12->fields)._size = uVar6 + 1;
      pUVar8->m_Items[(int)uVar6].fields.x = (float)(int)UVar16.fields._0_8_;
      pUVar8->m_Items[(int)uVar6].fields.y = (float)(int)((ulong)UVar16.fields._0_8_ >> 0x20);
      pUVar8->m_Items[(int)uVar6].fields.z = UVar16.fields.z;
      pUVar9 = *(void **)((long)_Var19.genericMethod + 0x18);
    }
    else {
      System_Collections_Generic_List<Vector3>__AddWithResize
                (pSVar12,UVar16,
                 *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      pUVar9 = *(void **)((long)_Var19.genericMethod + 0x18);
    }
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar12 = *ppSVar1;
    pUVar14 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar16 = UnityEngine_Transform__get_localPosition(pUVar14,(MethodInfo *)0x0);
    lVar10 = MethodInfo_Void_Add;
    if (pSVar12 == (System_Collections_Generic_List_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar5 = &(pSVar12->fields)._version;
    *piVar5 = *piVar5 + 1;
    pUVar8 = (pSVar12->fields)._items;
    if (pUVar8 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar6 = (pSVar12->fields)._size;
    if (uVar6 < (uint)pUVar8->max_length) {
      (pSVar12->fields)._size = uVar6 + 1;
      pUVar8->m_Items[(int)uVar6].fields.x = (float)(int)UVar16.fields._0_8_;
      pUVar8->m_Items[(int)uVar6].fields.y = (float)(int)((ulong)UVar16.fields._0_8_ >> 0x20);
      pUVar8->m_Items[(int)uVar6].fields.z = UVar16.fields.z;
      pIVar15 = ((Il2CppObject *)((long)_Var19.genericMethod + 0x20))->klass;
    }
    else {
      System_Collections_Generic_List<Vector3>__AddWithResize
                (pSVar12,UVar16,
                 *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      pIVar15 = ((Il2CppObject *)((long)_Var19.genericMethod + 0x20))->klass;
    }
    if (pIVar15 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar12 = *ppSVar2;
    UVar16 = Map_MapScriptBaseObject__GetRotation
                       ((Map_MapScriptBaseObject_o *)pIVar15,(MethodInfo *)0x0);
    lVar10 = MethodInfo_Void_Add;
    if (pSVar12 == (System_Collections_Generic_List_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar5 = &(pSVar12->fields)._version;
    *piVar5 = *piVar5 + 1;
    pUVar8 = (pSVar12->fields)._items;
    if (pUVar8 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar6 = (pSVar12->fields)._size;
    if (uVar6 < (uint)pUVar8->max_length) {
      (pSVar12->fields)._size = uVar6 + 1;
      pUVar8->m_Items[(int)uVar6].fields.x = (float)(int)UVar16.fields._0_8_;
      pUVar8->m_Items[(int)uVar6].fields.y = (float)(int)((ulong)UVar16.fields._0_8_ >> 0x20);
      pUVar8->m_Items[(int)uVar6].fields.z = UVar16.fields.z;
      pUVar9 = *(void **)((long)_Var19.genericMethod + 0x18);
      _Var19 = _Var20;
    }
    else {
      System_Collections_Generic_List<Vector3>__AddWithResize
                (pSVar12,UVar16,
                 *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      pUVar9 = *(void **)((long)_Var19.genericMethod + 0x18);
      _Var19 = _Var20;
    }
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar12 = *ppSVar3;
    pUVar14 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    rotation = UnityEngine_Transform__get_localRotation(pUVar14,(MethodInfo *)0x0);
    UVar16 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
    euler.fields.x = UVar16.fields.x * 57.29578;
    euler.fields.z = UVar16.fields.z * 57.29578;
    euler.fields.y = UVar16.fields.y * 57.29578;
    UVar16 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    lVar10 = MethodInfo_Void_Add;
    if (pSVar12 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
    piVar5 = &(pSVar12->fields)._version;
    *piVar5 = *piVar5 + 1;
    pUVar8 = (pSVar12->fields)._items;
    if (pUVar8 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar6 = (pSVar12->fields)._size;
    if (uVar6 < (uint)pUVar8->max_length) {
      (pSVar12->fields)._size = uVar6 + 1;
      pUVar8->m_Items[(int)uVar6].fields.x = (float)(int)UVar16.fields._0_8_;
      pUVar8->m_Items[(int)uVar6].fields.y = (float)(int)((ulong)UVar16.fields._0_8_ >> 0x20);
      pUVar8->m_Items[(int)uVar6].fields.z = UVar16.fields.z;
    }
    else {
      System_Collections_Generic_List<Vector3>__AddWithResize
                (pSVar12,UVar16,
                 *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.TransformPositionRotationCommand$$Execute
// il2cpp: void MapEditor_TransformPositionRotationCommand__Execute (MapEditor_TransformPositionRotationCommand_o* __this, const MethodInfo* method);
// 0x4045900

void MapEditor_TransformPositionRotationCommand__Execute
               (MapEditor_TransformPositionRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  Il2CppClass *pIVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_List_int__o *pSVar7;
  int index;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value;
  
  if (DAT_057043e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_057043e7 = '\x01';
  }
  pSVar7 = (__this->fields)._ids;
  if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) {
LAB_04045bcc:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  index = 0;
  do {
    if ((pSVar7->fields)._size <= index) {
      return;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_MapLoader);
      pSVar7 = (__this->fields)._ids;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045bcc;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar4 = System_Collections_Generic_List<int>__get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar5 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar4,MethodInfo_MapObject_get_Item), pIVar5 == (Il2CppObject *)0x0)) ||
       (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0)) goto LAB_04045bcc;
    pUVar6 = UnityEngine_GameObject__get_transform(pIVar5[1].monitor,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._newPositions;
    if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
       (UVar8 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item),
       pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_04045bcc;
    UnityEngine_Transform__set_localPosition(pUVar6,UVar8,(MethodInfo *)0x0);
    pSVar7 = (__this->fields)._ids;
    if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045bcc;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar4 = System_Collections_Generic_List<int>__get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar5 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar4,MethodInfo_MapObject_get_Item), pIVar5 == (Il2CppObject *)0x0)) ||
       (pSVar2 = (__this->fields)._newPositions,
       pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto LAB_04045bcc;
    pIVar3 = pIVar5[2].klass;
    UVar8 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    if (pIVar3 == (Il2CppClass *)0x0) goto LAB_04045bcc;
    Map_MapScriptBaseObject__SetPosition
              ((Map_MapScriptBaseObject_o *)pIVar3,UVar8,(MethodInfo *)0x0);
    pSVar7 = (__this->fields)._ids;
    if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045bcc;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar4 = System_Collections_Generic_List<int>__get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar5 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar4,MethodInfo_MapObject_get_Item), pIVar5 == (Il2CppObject *)0x0)) ||
       (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0)) goto LAB_04045bcc;
    pUVar6 = UnityEngine_GameObject__get_transform(pIVar5[1].monitor,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._newRotations;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_04045bcc;
    UVar8 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    euler.fields.x = UVar8.fields.x * 0.017453292;
    euler.fields.y = UVar8.fields.y * 0.017453292;
    euler.fields.z = UVar8.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_04045bcc;
    UnityEngine_Transform__set_localRotation(pUVar6,value,(MethodInfo *)0x0);
    pSVar7 = (__this->fields)._ids;
    if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045bcc;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar4 = System_Collections_Generic_List<int>__get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar5 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar4,MethodInfo_MapObject_get_Item), pIVar5 == (Il2CppObject *)0x0)) ||
       (pSVar2 = (__this->fields)._newRotations,
       pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto LAB_04045bcc;
    pIVar3 = pIVar5[2].klass;
    UVar8 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    if (pIVar3 == (Il2CppClass *)0x0) goto LAB_04045bcc;
    Map_MapScriptBaseObject__SetRotation
              ((Map_MapScriptBaseObject_o *)pIVar3,UVar8,(MethodInfo *)0x0);
    index = index + 1;
    pSVar7 = (__this->fields)._ids;
    if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045bcc;
  } while( true );
}


// MapEditor.TransformPositionRotationCommand$$Unexecute
// il2cpp: void MapEditor_TransformPositionRotationCommand__Unexecute (MapEditor_TransformPositionRotationCommand_o* __this, const MethodInfo* method);
// 0x4045be0

void MapEditor_TransformPositionRotationCommand__Unexecute
               (MapEditor_TransformPositionRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  Il2CppClass *pIVar3;
  int32_t iVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Collections_Generic_List_int__o *pSVar7;
  int index;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value;
  
  if (DAT_057043e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_057043e8 = '\x01';
  }
  pSVar7 = (__this->fields)._ids;
  if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) {
LAB_04045eac:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  index = 0;
  do {
    if ((pSVar7->fields)._size <= index) {
      return;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_MapLoader);
      pSVar7 = (__this->fields)._ids;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045eac;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar4 = System_Collections_Generic_List<int>__get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar5 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar4,MethodInfo_MapObject_get_Item), pIVar5 == (Il2CppObject *)0x0)) ||
       (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0)) goto LAB_04045eac;
    pUVar6 = UnityEngine_GameObject__get_transform(pIVar5[1].monitor,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._oldPositions;
    if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
       (UVar8 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item),
       pUVar6 == (UnityEngine_Transform_o *)0x0)) goto LAB_04045eac;
    UnityEngine_Transform__set_localPosition(pUVar6,UVar8,(MethodInfo *)0x0);
    pSVar7 = (__this->fields)._ids;
    if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045eac;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar4 = System_Collections_Generic_List<int>__get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar5 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar4,MethodInfo_MapObject_get_Item), pIVar5 == (Il2CppObject *)0x0)) ||
       (pSVar2 = (__this->fields)._oldPositions,
       pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto LAB_04045eac;
    pIVar3 = pIVar5[2].klass;
    UVar8 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    if (pIVar3 == (Il2CppClass *)0x0) goto LAB_04045eac;
    Map_MapScriptBaseObject__SetPosition
              ((Map_MapScriptBaseObject_o *)pIVar3,UVar8,(MethodInfo *)0x0);
    pSVar7 = (__this->fields)._ids;
    if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045eac;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar4 = System_Collections_Generic_List<int>__get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar5 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar4,MethodInfo_MapObject_get_Item), pIVar5 == (Il2CppObject *)0x0)) ||
       (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0)) goto LAB_04045eac;
    pUVar6 = UnityEngine_GameObject__get_transform(pIVar5[1].monitor,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._oldRotations;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_04045eac;
    UVar8 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    euler.fields.x = UVar8.fields.x * 0.017453292;
    euler.fields.y = UVar8.fields.y * 0.017453292;
    euler.fields.z = UVar8.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_04045eac;
    UnityEngine_Transform__set_localRotation(pUVar6,value,(MethodInfo *)0x0);
    pSVar7 = (__this->fields)._ids;
    if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045eac;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar4 = System_Collections_Generic_List<int>__get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar5 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar4,MethodInfo_MapObject_get_Item), pIVar5 == (Il2CppObject *)0x0)) ||
       (pSVar2 = (__this->fields)._oldRotations,
       pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto LAB_04045eac;
    pIVar3 = pIVar5[2].klass;
    UVar8 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    if (pIVar3 == (Il2CppClass *)0x0) goto LAB_04045eac;
    Map_MapScriptBaseObject__SetRotation
              ((Map_MapScriptBaseObject_o *)pIVar3,UVar8,(MethodInfo *)0x0);
    index = index + 1;
    pSVar7 = (__this->fields)._ids;
    if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045eac;
  } while( true );
}


