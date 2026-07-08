// Type: MapEditor.TransformPositionCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/TransformPositionCommand.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Commands/TransformPositionCommand.cs  [CHANGED since prior version]
// --------------------------------

// MapEditor.TransformPositionCommand$$.ctor
// il2cpp: void MapEditor_TransformPositionCommand___ctor (MapEditor_TransformPositionCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x40449c0

void MapEditor_TransformPositionCommand___ctor
               (MapEditor_TransformPositionCommand_o *__this,
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
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  Il2CppObject *pIVar14;
  Il2CppObject *pIVar15;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_057043e3 == '\0') {
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
    DAT_057043e3 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar9,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._oldPositions = pSVar9;
  il2cpp_runtime_glue(&__this->fields,pSVar9);
  pSVar9 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar9,MethodInfo_List_1_UnityEngine_Vector3);
  ppSVar1 = &(__this->fields)._newPositions;
  (__this->fields)._newPositions = pSVar9;
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
    pSVar9 = (__this->fields)._oldPositions;
    UVar11 = Map_MapScriptBaseObject__GetPosition
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
    UVar11 = UnityEngine_Transform__get_localPosition(__this_03,(MethodInfo *)0x0);
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


// MapEditor.TransformPositionCommand$$Execute
// il2cpp: void MapEditor_TransformPositionCommand__Execute (MapEditor_TransformPositionCommand_o* __this, const MethodInfo* method);
// 0x4044e60

void MapEditor_TransformPositionCommand__Execute
               (MapEditor_TransformPositionCommand_o *__this,MethodInfo *method)

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
  
  if (DAT_057043e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_057043e4 = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) {
LAB_04045009:
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
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045009;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar3 = System_Collections_Generic_List<int>__get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar4 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar3,MethodInfo_MapObject_get_Item), pIVar4 == (Il2CppObject *)0x0)) ||
       (pIVar4[1].monitor == (UnityEngine_GameObject_o *)0x0)) goto LAB_04045009;
    __this_01 = UnityEngine_GameObject__get_transform(pIVar4[1].monitor,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._newPositions;
    if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
       (UVar6 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_04045009;
    UnityEngine_Transform__set_localPosition(__this_01,UVar6,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045009;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar3 = System_Collections_Generic_List<int>__get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar4 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar3,MethodInfo_MapObject_get_Item), pIVar4 == (Il2CppObject *)0x0)) ||
       (pSVar2 = (__this->fields)._newPositions,
       pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto LAB_04045009;
    __this_00 = pIVar4[2].klass;
    UVar6 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    if (__this_00 == (Il2CppClass *)0x0) goto LAB_04045009;
    Map_MapScriptBaseObject__SetPosition
              ((Map_MapScriptBaseObject_o *)__this_00,UVar6,(MethodInfo *)0x0);
    index = index + 1;
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04045009;
  } while( true );
}


// MapEditor.TransformPositionCommand$$Unexecute
// il2cpp: void MapEditor_TransformPositionCommand__Unexecute (MapEditor_TransformPositionCommand_o* __this, const MethodInfo* method);
// 0x4045020

void MapEditor_TransformPositionCommand__Unexecute
               (MapEditor_TransformPositionCommand_o *__this,MethodInfo *method)

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
  
  if (DAT_057043e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_057043e5 = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) {
LAB_040451c9:
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
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_040451c9;
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar3 = System_Collections_Generic_List<int>__get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar4 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar3,MethodInfo_MapObject_get_Item), pIVar4 == (Il2CppObject *)0x0)) ||
       (pIVar4[1].monitor == (UnityEngine_GameObject_o *)0x0)) goto LAB_040451c9;
    __this_01 = UnityEngine_GameObject__get_transform(pIVar4[1].monitor,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._oldPositions;
    if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
       (UVar6 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_040451c9;
    UnityEngine_Transform__set_localPosition(__this_01,UVar6,(MethodInfo *)0x0);
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_040451c9;
    pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    iVar3 = System_Collections_Generic_List<int>__get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
    if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar4 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (pSVar1,iVar3,MethodInfo_MapObject_get_Item), pIVar4 == (Il2CppObject *)0x0)) ||
       (pSVar2 = (__this->fields)._oldPositions,
       pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0)) goto LAB_040451c9;
    __this_00 = pIVar4[2].klass;
    UVar6 = System_Collections_Generic_List<Vector3>__get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
    if (__this_00 == (Il2CppClass *)0x0) goto LAB_040451c9;
    Map_MapScriptBaseObject__SetPosition
              ((Map_MapScriptBaseObject_o *)__this_00,UVar6,(MethodInfo *)0x0);
    index = index + 1;
    pSVar5 = (__this->fields)._ids;
    if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_040451c9;
  } while( true );
}


