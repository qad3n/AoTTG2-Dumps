// Type: MapEditor.TransformRotationCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/TransformRotationCommand.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Commands/TransformRotationCommand.cs  [CHANGED since prior version]
// --------------------------------

// MapEditor.TransformRotationCommand$$.ctor
// il2cpp: void MapEditor_TransformRotationCommand___ctor (MapEditor_TransformRotationCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x4045ec0

void MapEditor_TransformRotationCommand___ctor
               (MapEditor_TransformRotationCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o **ppSVar1;
  System_Collections_Generic_List_int__o **ppSVar2;
  int32_t *piVar3;
  int32_t item;
  uint uVar4;
  System_Int32_array *pSVar5;
  UnityEngine_Vector3_array *pUVar6;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar7;
  bool_conflict bVar8;
  System_Collections_Generic_List_Vector3__o *pSVar9;
  System_Collections_Generic_List_int__o *pSVar10;
  UnityEngine_Transform_o *__this_03;
  Il2CppClass *__this_04;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_057043e9 == '\0') {
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
    DAT_057043e9 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar9,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._oldRotations = pSVar9;
  il2cpp_runtime_glue(&__this->fields,pSVar9);
  pSVar9 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar9,MethodInfo_List_1_UnityEngine_Vector3);
  ppSVar1 = &(__this->fields)._newRotations;
  (__this->fields)._newRotations = pSVar9;
  il2cpp_runtime_glue(ppSVar1,pSVar9);
  pSVar10 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(pSVar10,MethodInfo_List_1_System_Int32);
  ppSVar2 = &(__this->fields)._ids;
  (__this->fields)._ids = pSVar10;
  il2cpp_runtime_glue(ppSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)mapObjects,MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar13 = (Il2CppType *)local_48._8_8_;
  pIVar14 = local_38;
  while( true ) {
    __this_01.fields._8_8_ = pIVar13;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_01.fields._current = pIVar14;
    bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
    lVar7 = MethodInfo_Void_Add;
    if ((char)bVar8 == '\0') {
      __this_02.fields._8_8_ = pIVar13;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
      __this_02.fields._current = pIVar14;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return;
    }
    if (pIVar14 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_04 = pIVar14[2].klass;
    if (__this_04 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar10 = *ppSVar2;
    if (pSVar10 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    item = *(int32_t *)&(__this_04->_1).byval_arg.data;
    piVar3 = &(pSVar10->fields)._version;
    *piVar3 = *piVar3 + 1;
    pSVar5 = (pSVar10->fields)._items;
    if (pSVar5 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar4 = (pSVar10->fields)._size;
    pIVar15 = pIVar14;
    if (uVar4 < (uint)pSVar5->max_length) {
      (pSVar10->fields)._size = uVar4 + 1;
      pSVar5->m_Items[(int)uVar4] = item;
    }
    else {
      System_Collections_Generic_List<int>__AddWithResize
                (pSVar10,item,
                 *(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      __this_04 = pIVar14[2].klass;
      if (__this_04 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    pSVar9 = (__this->fields)._oldRotations;
    UVar11 = Map_MapScriptBaseObject__GetRotation
                       ((Map_MapScriptBaseObject_o *)__this_04,(MethodInfo *)0x0);
    lVar7 = MethodInfo_Void_Add;
    if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar3 = &(pSVar9->fields)._version;
    *piVar3 = *piVar3 + 1;
    pUVar6 = (pSVar9->fields)._items;
    if (pUVar6 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar4 = (pSVar9->fields)._size;
    if (uVar4 < (uint)pUVar6->max_length) {
      (pSVar9->fields)._size = uVar4 + 1;
      pUVar6->m_Items[(int)uVar4].fields.x = (float)(int)UVar11.fields._0_8_;
      pUVar6->m_Items[(int)uVar4].fields.y = (float)(int)((ulong)UVar11.fields._0_8_ >> 0x20);
      pUVar6->m_Items[(int)uVar4].fields.z = UVar11.fields.z;
      __this_00 = pIVar14[1].monitor;
      pIVar14 = pIVar15;
    }
    else {
      System_Collections_Generic_List<Vector3>__AddWithResize
                (pSVar9,UVar11,
                 *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      __this_00 = pIVar14[1].monitor;
      pIVar14 = pIVar15;
    }
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
    pSVar9 = *ppSVar1;
    __this_03 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    rotation = UnityEngine_Transform__get_localRotation(__this_03,(MethodInfo *)0x0);
    UVar11 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
    euler.fields.x = UVar11.fields.x * 57.29578;
    euler.fields.z = UVar11.fields.z * 57.29578;
    euler.fields.y = UVar11.fields.y * 57.29578;
    UVar11 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    lVar7 = MethodInfo_Void_Add;
    if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar3 = &(pSVar9->fields)._version;
    *piVar3 = *piVar3 + 1;
    pUVar6 = (pSVar9->fields)._items;
    if (pUVar6 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar4 = (pSVar9->fields)._size;
    if (uVar4 < (uint)pUVar6->max_length) {
      (pSVar9->fields)._size = uVar4 + 1;
      pUVar6->m_Items[(int)uVar4].fields.x = (float)(int)UVar11.fields._0_8_;
      pUVar6->m_Items[(int)uVar4].fields.y = (float)(int)((ulong)UVar11.fields._0_8_ >> 0x20);
      pUVar6->m_Items[(int)uVar4].fields.z = UVar11.fields.z;
    }
    else {
      System_Collections_Generic_List<Vector3>__AddWithResize
                (pSVar9,UVar11,
                 *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.TransformRotationCommand$$Execute
// il2cpp: void MapEditor_TransformRotationCommand__Execute (MapEditor_TransformRotationCommand_o* __this, const MethodInfo* method);
// 0x40463a0

void MapEditor_TransformRotationCommand__Execute
               (MapEditor_TransformRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  Il2CppClass *__this_00;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_List_int__o *pSVar5;
  int index;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value;
  
  if (DAT_057043ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_057043ea = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) {
LAB_0404655f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  index = 0;
  do {
    if ((pSVar5->fields)._size <= index) {
      return;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_MapLoader);
      pSVar5 = (__this->fields)._ids;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_0404655f;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar3 = System_Collections_Generic_List<int>__get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar4 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar3,MethodInfo_MapObject_get_Item), pIVar4 == (Il2CppObject *)0x0)) ||
       (pIVar4[1].monitor == (UnityEngine_GameObject_o *)0x0)) goto LAB_0404655f;
    __this_01 = UnityEngine_GameObject__get_transform(pIVar4[1].monitor,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._newRotations;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_0404655f;
    UVar6 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    euler.fields.x = UVar6.fields.x * 0.017453292;
    euler.fields.y = UVar6.fields.y * 0.017453292;
    euler.fields.z = UVar6.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_0404655f;
    UnityEngine_Transform__set_localRotation(__this_01,value,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_0404655f;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar3 = System_Collections_Generic_List<int>__get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar4 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar3,MethodInfo_MapObject_get_Item), pIVar4 == (Il2CppObject *)0x0)) ||
       (pSVar2 = (__this->fields)._newRotations,
       pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto LAB_0404655f;
    __this_00 = pIVar4[2].klass;
    UVar6 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    if (__this_00 == (Il2CppClass *)0x0) goto LAB_0404655f;
    Map_MapScriptBaseObject__SetRotation
              ((Map_MapScriptBaseObject_o *)__this_00,UVar6,(MethodInfo *)0x0);
    index = index + 1;
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_0404655f;
  } while( true );
}


// MapEditor.TransformRotationCommand$$Unexecute
// il2cpp: void MapEditor_TransformRotationCommand__Unexecute (MapEditor_TransformRotationCommand_o* __this, const MethodInfo* method);
// 0x4046580

void MapEditor_TransformRotationCommand__Unexecute
               (MapEditor_TransformRotationCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_List_Vector3__o *pSVar2;
  Il2CppClass *__this_00;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_List_int__o *pSVar5;
  int index;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o value;
  
  if (DAT_057043eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_057043eb = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) {
LAB_0404673f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  index = 0;
  do {
    if ((pSVar5->fields)._size <= index) {
      return;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_MapLoader);
      pSVar5 = (__this->fields)._ids;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_0404673f;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar3 = System_Collections_Generic_List<int>__get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar4 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar3,MethodInfo_MapObject_get_Item), pIVar4 == (Il2CppObject *)0x0)) ||
       (pIVar4[1].monitor == (UnityEngine_GameObject_o *)0x0)) goto LAB_0404673f;
    __this_01 = UnityEngine_GameObject__get_transform(pIVar4[1].monitor,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._oldRotations;
    if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_0404673f;
    UVar6 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    euler.fields.x = UVar6.fields.x * 0.017453292;
    euler.fields.y = UVar6.fields.y * 0.017453292;
    euler.fields.z = UVar6.fields.z * 0.017453292;
    value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto LAB_0404673f;
    UnityEngine_Transform__set_localRotation(__this_01,value,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_0404673f;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar3 = System_Collections_Generic_List<int>__get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar4 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar3,MethodInfo_MapObject_get_Item), pIVar4 == (Il2CppObject *)0x0)) ||
       (pSVar2 = (__this->fields)._oldRotations,
       pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto LAB_0404673f;
    __this_00 = pIVar4[2].klass;
    UVar6 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    if (__this_00 == (Il2CppClass *)0x0) goto LAB_0404673f;
    Map_MapScriptBaseObject__SetRotation
              ((Map_MapScriptBaseObject_o *)__this_00,UVar6,(MethodInfo *)0x0);
    index = index + 1;
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_0404673f;
  } while( true );
}


