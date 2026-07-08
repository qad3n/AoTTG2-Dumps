// Type: MapEditor.TransformScaleCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/TransformScaleCommand.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Commands/TransformScaleCommand.cs  [CHANGED since prior version]
// --------------------------------

// MapEditor.TransformScaleCommand$$.ctor
// il2cpp: void MapEditor_TransformScaleCommand___ctor (MapEditor_TransformScaleCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x4046760

void MapEditor_TransformScaleCommand___ctor
               (MapEditor_TransformScaleCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *mapObjects,MethodInfo *method)

{
  System_Collections_Generic_List_Vector3__o **ppSVar1;
  System_Collections_Generic_List_int__o **ppSVar2;
  int32_t *piVar3;
  undefined8 uVar4;
  int32_t item;
  uint uVar5;
  System_Int32_array *pSVar6;
  UnityEngine_Vector3_array *pUVar7;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar8;
  bool_conflict bVar9;
  System_Collections_Generic_List_Vector3__o *pSVar10;
  System_Collections_Generic_List_int__o *pSVar11;
  UnityEngine_Transform_o *__this_03;
  Map_MapScriptBaseObject_o *__this_04;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o a;
  undefined8 in_stack_ffffffffffffff68;
  float in_stack_ffffffffffffff70;
  float in_stack_ffffffffffffff74;
  _union_247328 _Var13;
  _union_247328 local_48 [2];
  long local_38;
  
  if (DAT_057043ec == '\0') {
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
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_057043ec = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar10,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._oldScales = pSVar10;
  il2cpp_runtime_glue(&__this->fields,pSVar10);
  pSVar10 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_glue(TypeInfo_List_Vector3);
  System_Collections_Generic_List<Vector3>___ctor(pSVar10,MethodInfo_List_1_UnityEngine_Vector3);
  ppSVar1 = &(__this->fields)._newScales;
  (__this->fields)._newScales = pSVar10;
  il2cpp_runtime_glue(ppSVar1,pSVar10);
  pSVar11 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(pSVar11,MethodInfo_List_1_System_Int32);
  ppSVar2 = &(__this->fields)._ids;
  (__this->fields)._ids = pSVar11;
  il2cpp_runtime_glue(ppSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (mapObjects == (System_Collections_Generic_List_MapObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)mapObjects,MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
  _Var13 = local_48[0];
  while( true ) {
    __this_01.fields._index = (int32_t)in_stack_ffffffffffffff70;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_01.fields._version = (int32_t)in_stack_ffffffffffffff74;
    __this_01.fields._current = _Var13.genericMethod;
    bVar9 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff78);
    lVar8 = MethodInfo_Void_Add;
    if ((char)bVar9 == '\0') {
      __this_02.fields._index = (int32_t)in_stack_ffffffffffffff70;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
      __this_02.fields._version = (int32_t)in_stack_ffffffffffffff74;
      __this_02.fields._current = _Var13.genericMethod;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff78);
      return;
    }
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_04 = *(Map_MapScriptBaseObject_o **)(local_38 + 0x20);
    if (__this_04 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar11 = *ppSVar2;
    if (pSVar11 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    item = (__this_04->fields).Id;
    piVar3 = &(pSVar11->fields)._version;
    *piVar3 = *piVar3 + 1;
    pSVar6 = (pSVar11->fields)._items;
    if (pSVar6 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar5 = (pSVar11->fields)._size;
    if (uVar5 < (uint)pSVar6->max_length) {
      (pSVar11->fields)._size = uVar5 + 1;
      pSVar6->m_Items[(int)uVar5] = item;
    }
    else {
      System_Collections_Generic_List<int>__AddWithResize
                (pSVar11,item,
                 *(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      __this_04 = *(Map_MapScriptBaseObject_o **)(local_38 + 0x20);
      if (__this_04 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    pSVar10 = (__this->fields)._oldScales;
    UVar12 = Map_MapScriptBaseObject__GetScale(__this_04,(MethodInfo *)0x0);
    lVar8 = MethodInfo_Void_Add;
    if (pSVar10 == (System_Collections_Generic_List_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar3 = &(pSVar10->fields)._version;
    *piVar3 = *piVar3 + 1;
    pUVar7 = (pSVar10->fields)._items;
    if (pUVar7 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar5 = (pSVar10->fields)._size;
    if (uVar5 < (uint)pUVar7->max_length) {
      (pSVar10->fields)._size = uVar5 + 1;
      pUVar7->m_Items[(int)uVar5].fields.x = (float)(int)UVar12.fields._0_8_;
      pUVar7->m_Items[(int)uVar5].fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
      pUVar7->m_Items[(int)uVar5].fields.z = UVar12.fields.z;
      __this_00 = *(UnityEngine_GameObject_o **)(local_38 + 0x18);
    }
    else {
      System_Collections_Generic_List<Vector3>__AddWithResize
                (pSVar10,UVar12,
                 *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      __this_00 = *(UnityEngine_GameObject_o **)(local_38 + 0x18);
    }
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
    pSVar10 = *ppSVar1;
    __this_03 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UVar12 = UnityEngine_Transform__get_localScale(__this_03,(MethodInfo *)0x0);
    in_stack_ffffffffffffff74 = UVar12.fields.z;
    uVar4 = *(undefined8 *)(local_38 + 0x28);
    in_stack_ffffffffffffff70 = *(float *)(local_38 + 0x30);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    a.fields.z = in_stack_ffffffffffffff74;
    a.fields.x = (float)(int)UVar12.fields._0_8_;
    a.fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
    UVar12.fields.z = in_stack_ffffffffffffff70;
    UVar12.fields._0_8_ = uVar4;
    UVar12 = Utility_Util__DivideVectors(a,UVar12,(MethodInfo *)0x0);
    lVar8 = MethodInfo_Void_Add;
    if (pSVar10 == (System_Collections_Generic_List_Vector3__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar3 = &(pSVar10->fields)._version;
    *piVar3 = *piVar3 + 1;
    pUVar7 = (pSVar10->fields)._items;
    if (pUVar7 == (UnityEngine_Vector3_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar5 = (pSVar10->fields)._size;
    if (uVar5 < (uint)pUVar7->max_length) {
      (pSVar10->fields)._size = uVar5 + 1;
      pUVar7->m_Items[(int)uVar5].fields.x = (float)(int)UVar12.fields._0_8_;
      pUVar7->m_Items[(int)uVar5].fields.y = (float)(int)((ulong)UVar12.fields._0_8_ >> 0x20);
      pUVar7->m_Items[(int)uVar5].fields.z = UVar12.fields.z;
    }
    else {
      System_Collections_Generic_List<Vector3>__AddWithResize
                (pSVar10,UVar12,
                 *(MethodInfo_361DDD0 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.TransformScaleCommand$$Execute
// il2cpp: void MapEditor_TransformScaleCommand__Execute (MapEditor_TransformScaleCommand_o* __this, const MethodInfo* method);
// 0x4046ca0

void MapEditor_TransformScaleCommand__Execute
               (MapEditor_TransformScaleCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar1;
  Il2CppClass *__this_01;
  int32_t key;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_List_int__o *__this_03;
  int index;
  UnityEngine_Vector3_o b;
  UnityEngine_Vector3_o UVar3;
  
  if (DAT_057043ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_057043ed = '\x01';
  }
  __this_03 = (__this->fields)._ids;
  if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) {
LAB_04046e78:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  index = 0;
  do {
    if ((__this_03->fields)._size <= index) {
      return;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_MapLoader);
      __this_03 = (__this->fields)._ids;
      if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04046e78;
    }
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    key = System_Collections_Generic_List<int>__get_Item(__this_03,index,MethodInfo_Int32_get_Item);
    if (((__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar2 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (__this_00,key,MethodInfo_MapObject_get_Item), pIVar2 == (Il2CppObject *)0x0)) ||
       (pIVar2[1].monitor == (UnityEngine_GameObject_o *)0x0)) goto LAB_04046e78;
    __this_02 = UnityEngine_GameObject__get_transform(pIVar2[1].monitor,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._newScales;
    if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_04046e78;
    UVar3.fields = *(UnityEngine_Vector3_Fields *)&pIVar2[2].monitor;
    b = System_Collections_Generic_List<Vector3>__get_Item(pSVar1,index,MethodInfo_Vector3_get_Item);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar3 = Utility_Util__MultiplyVectors(UVar3,b,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_Transform_o *)0x0) goto LAB_04046e78;
    UnityEngine_Transform__set_localScale(__this_02,UVar3,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._newScales;
    if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_04046e78;
    __this_01 = pIVar2[2].klass;
    UVar3 = System_Collections_Generic_List<Vector3>__get_Item(pSVar1,index,MethodInfo_Vector3_get_Item);
    if (__this_01 == (Il2CppClass *)0x0) goto LAB_04046e78;
    Map_MapScriptBaseObject__SetScale
              ((Map_MapScriptBaseObject_o *)__this_01,UVar3,(MethodInfo *)0x0);
    index = index + 1;
    __this_03 = (__this->fields)._ids;
    if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04046e78;
  } while( true );
}


// MapEditor.TransformScaleCommand$$Unexecute
// il2cpp: void MapEditor_TransformScaleCommand__Unexecute (MapEditor_TransformScaleCommand_o* __this, const MethodInfo* method);
// 0x4046e90

void MapEditor_TransformScaleCommand__Unexecute
               (MapEditor_TransformScaleCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  System_Collections_Generic_List_Vector3__o *pSVar1;
  Il2CppClass *__this_01;
  int32_t key;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *__this_02;
  System_Collections_Generic_List_int__o *__this_03;
  int index;
  UnityEngine_Vector3_o b;
  UnityEngine_Vector3_o UVar3;
  
  if (DAT_057043ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Vector3_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_057043ee = '\x01';
  }
  __this_03 = (__this->fields)._ids;
  if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) {
LAB_04047068:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  index = 0;
  do {
    if ((__this_03->fields)._size <= index) {
      return;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class(TypeInfo_MapLoader);
      __this_03 = (__this->fields)._ids;
      if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04047068;
    }
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
    key = System_Collections_Generic_List<int>__get_Item(__this_03,index,MethodInfo_Int32_get_Item);
    if (((__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
        (pIVar2 = System_Collections_Generic_Dictionary<int__object>__get_Item
                            (__this_00,key,MethodInfo_MapObject_get_Item), pIVar2 == (Il2CppObject *)0x0)) ||
       (pIVar2[1].monitor == (UnityEngine_GameObject_o *)0x0)) goto LAB_04047068;
    __this_02 = UnityEngine_GameObject__get_transform(pIVar2[1].monitor,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._oldScales;
    if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_04047068;
    UVar3.fields = *(UnityEngine_Vector3_Fields *)&pIVar2[2].monitor;
    b = System_Collections_Generic_List<Vector3>__get_Item(pSVar1,index,MethodInfo_Vector3_get_Item);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar3 = Utility_Util__MultiplyVectors(UVar3,b,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_Transform_o *)0x0) goto LAB_04047068;
    UnityEngine_Transform__set_localScale(__this_02,UVar3,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._oldScales;
    if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) goto LAB_04047068;
    __this_01 = pIVar2[2].klass;
    UVar3 = System_Collections_Generic_List<Vector3>__get_Item(pSVar1,index,MethodInfo_Vector3_get_Item);
    if (__this_01 == (Il2CppClass *)0x0) goto LAB_04047068;
    Map_MapScriptBaseObject__SetScale
              ((Map_MapScriptBaseObject_o *)__this_01,UVar3,(MethodInfo *)0x0);
    index = index + 1;
    __this_03 = (__this->fields)._ids;
    if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_04047068;
  } while( true );
}


