// Type: MapEditor.TransformScaleCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/TransformScaleCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformScaleCommand.cs
// --------------------------------

// MapEditor.TransformScaleCommand$$.ctor
// il2cpp: void MapEditor_TransformScaleCommand___ctor (MapEditor_TransformScaleCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x433b5a0

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
  long lVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar9;
  System_Collections_Generic_List_Vector3__o *pSVar10;
  System_Collections_Generic_List_int__o *pSVar11;
  UnityEngine_Transform_o *__this_04;
  long *plVar12;
  Map_MapScriptBaseObject_o *__this_05;
  UnityEngine_GameObject_o *__this_06;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o a;
  undefined1 auVar14 [12];
  undefined8 in_stack_ffffffffffffff68;
  float in_stack_ffffffffffffff70;
  float in_stack_ffffffffffffff74;
  _union_249395 _Var15;
  _union_249395 local_48 [2];
  long local_38;
  
  if (g_data_057ae0b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Vector3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae0b2 = '\x01';
  }
  _Var15.genericMethod = (Il2CppObject *)0x0;
  pSVar10 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor(pSVar10,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._oldScales = pSVar10;
  il2cpp_runtime_helper_022b4080(&__this->fields,pSVar10);
  pSVar10 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor(pSVar10,MethodInfo_List_1_UnityEngine_Vector3);
  ppSVar1 = &(__this->fields)._newScales;
  (__this->fields)._newScales = pSVar10;
  il2cpp_runtime_helper_022b4080(ppSVar1,pSVar10);
  pSVar11 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  System_Collections_Generic_List_int____ctor(pSVar11,MethodInfo_List_1_System_Int32);
  ppSVar2 = &(__this->fields)._ids;
  (__this->fields)._ids = pSVar11;
  il2cpp_runtime_helper_022b4080(ppSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (mapObjects != (System_Collections_Generic_List_MapObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)mapObjects,MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    _Var15 = local_48[0];
    while( true ) {
      __this_00.fields._index = (int32_t)in_stack_ffffffffffffff70;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
      __this_00.fields._version = (int32_t)in_stack_ffffffffffffff74;
      __this_00.fields._current = _Var15.genericMethod;
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
      lVar8 = MethodInfo_Void_Add;
      if ((char)bVar9 == '\0') {
        __this_01.fields._index = (int32_t)in_stack_ffffffffffffff70;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
        __this_01.fields._version = (int32_t)in_stack_ffffffffffffff74;
        __this_01.fields._current = _Var15.genericMethod;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
        return;
      }
      if (local_38 == 0) break;
      __this_05 = *(Map_MapScriptBaseObject_o **)(local_38 + 0x20);
      if (__this_05 == (Map_MapScriptBaseObject_o *)0x0) goto label_0433b965;
      pSVar11 = *ppSVar2;
      if (pSVar11 == (System_Collections_Generic_List_int__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_0433b956:
        il2cpp_runtime_helper_022b2c90();
label_0433b95b:
        il2cpp_runtime_helper_022b2c90();
        break;
      }
      item = (__this_05->fields).Id;
      piVar3 = &(pSVar11->fields)._version;
      *piVar3 = *piVar3 + 1;
      pSVar6 = (pSVar11->fields)._items;
      if (pSVar6 == (System_Int32_array *)0x0) goto label_0433b96a;
      uVar5 = (pSVar11->fields)._size;
      if ((uint)pSVar6->max_length <= uVar5) {
        System_Collections_Generic_List_int___AddWithResize
                  (pSVar11,item,*(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        __this_05 = *(Map_MapScriptBaseObject_o **)(local_38 + 0x20);
        if (__this_05 != (Map_MapScriptBaseObject_o *)0x0) goto label_0433b7f5;
        goto label_0433b983;
      }
      (pSVar11->fields)._size = uVar5 + 1;
      pSVar6->m_Items[(int)uVar5] = item;
label_0433b7f5:
      pSVar10 = (__this->fields)._oldScales;
      UVar13 = Map_MapScriptBaseObject__GetScale(__this_05,(MethodInfo *)0x0);
      lVar8 = MethodInfo_Void_Add;
      if (pSVar10 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_0433b956;
      piVar3 = &(pSVar10->fields)._version;
      *piVar3 = *piVar3 + 1;
      pUVar7 = (pSVar10->fields)._items;
      if (pUVar7 == (UnityEngine_Vector3_array *)0x0) goto label_0433b96f;
      uVar5 = (pSVar10->fields)._size;
      if ((uint)pUVar7->max_length <= uVar5) {
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar10,UVar13,*(MethodInfo_36A2CA0 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        __this_06 = *(UnityEngine_GameObject_o **)(local_38 + 0x18);
        if (__this_06 != (UnityEngine_GameObject_o *)0x0) goto label_0433b875;
        goto label_0433b974;
      }
      (pSVar10->fields)._size = uVar5 + 1;
      pUVar7->m_Items[(int)uVar5].fields.x = (float)(int)UVar13.fields._0_8_;
      pUVar7->m_Items[(int)uVar5].fields.y = (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
      pUVar7->m_Items[(int)uVar5].fields.z = UVar13.fields.z;
      __this_06 = *(UnityEngine_GameObject_o **)(local_38 + 0x18);
      if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_0433b974;
label_0433b875:
      pSVar10 = *ppSVar1;
      __this_04 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
      if (__this_04 == (UnityEngine_Transform_o *)0x0) goto label_0433b979;
      UVar13 = UnityEngine_Transform__get_localScale(__this_04,(MethodInfo *)0x0);
      in_stack_ffffffffffffff74 = UVar13.fields.z;
      uVar4 = *(undefined8 *)(local_38 + 0x28);
      in_stack_ffffffffffffff70 = *(float *)(local_38 + 0x30);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      a.fields.z = in_stack_ffffffffffffff74;
      a.fields.x = (float)(int)UVar13.fields._0_8_;
      a.fields.y = (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
      UVar13.fields.z = in_stack_ffffffffffffff70;
      UVar13.fields._0_8_ = uVar4;
      UVar13 = Utility_Util__DivideVectors(a,UVar13,(MethodInfo *)0x0);
      lVar8 = MethodInfo_Void_Add;
      if (pSVar10 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_0433b97e;
      piVar3 = &(pSVar10->fields)._version;
      *piVar3 = *piVar3 + 1;
      pUVar7 = (pSVar10->fields)._items;
      if (pUVar7 == (UnityEngine_Vector3_array *)0x0) goto label_0433b95b;
      uVar5 = (pSVar10->fields)._size;
      if (uVar5 < (uint)pUVar7->max_length) {
        (pSVar10->fields)._size = uVar5 + 1;
        pUVar7->m_Items[(int)uVar5].fields.x = (float)(int)UVar13.fields._0_8_;
        pUVar7->m_Items[(int)uVar5].fields.y = (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
        pUVar7->m_Items[(int)uVar5].fields.z = UVar13.fields.z;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar10,UVar13,*(MethodInfo_36A2CA0 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_0433b965:
    il2cpp_runtime_helper_022b2c90();
label_0433b96a:
    il2cpp_runtime_helper_022b2c90();
label_0433b96f:
    il2cpp_runtime_helper_022b2c90();
label_0433b974:
    il2cpp_runtime_helper_022b2c90();
label_0433b979:
    il2cpp_runtime_helper_022b2c90();
label_0433b97e:
    il2cpp_runtime_helper_022b2c90();
label_0433b983:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar12 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar8 = *plVar12;
    __cxa_end_catch();
    __this_02.fields._index = (int32_t)in_stack_ffffffffffffff70;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_02.fields._version = (int32_t)in_stack_ffffffffffffff74;
    __this_02.fields._current = _Var15.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar8 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_03.fields._index = (int32_t)in_stack_ffffffffffffff70;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
  __this_03.fields._version = (int32_t)in_stack_ffffffffffffff74;
  __this_03.fields._current = _Var15.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar14._0_8_);
}


// MapEditor.TransformScaleCommand$$Execute
// il2cpp: void MapEditor_TransformScaleCommand__Execute (MapEditor_TransformScaleCommand_o* __this, const MethodInfo* method);
// 0x433bae0

void MapEditor_TransformScaleCommand__Execute(MapEditor_TransformScaleCommand_o *__this,MethodInfo *method)

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
  
  if (g_data_057ae0b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae0b3 = '\x01';
  }
  __this_03 = (__this->fields)._ids;
  if (__this_03 != (System_Collections_Generic_List_int__o *)0x0) {
    index = 0;
    do {
      if ((__this_03->fields)._size <= index) {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_MapLoader);
        __this_03 = (__this->fields)._ids;
        if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) break;
      }
      __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      key = System_Collections_Generic_List_int___get_Item(__this_03,index,MethodInfo_Int32_get_Item);
      if (((__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar2 = System_Collections_Generic_Dictionary_int__object___get_Item(__this_00,key,MethodInfo_MapObject_get_Item),
          pIVar2 == (Il2CppObject *)0x0)) || (pIVar2[1].monitor == (UnityEngine_GameObject_o *)0x0)) break;
      __this_02 = UnityEngine_GameObject__get_transform(pIVar2[1].monitor,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._newScales;
      if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      UVar3.fields = *(UnityEngine_Vector3_Fields *)&pIVar2[2].monitor;
      b = System_Collections_Generic_List_Vector3___get_Item(pSVar1,index,MethodInfo_Vector3_get_Item);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar3 = Utility_Util__MultiplyVectors(UVar3,b,(MethodInfo *)0x0);
      if (__this_02 == (UnityEngine_Transform_o *)0x0) break;
      UnityEngine_Transform__set_localScale(__this_02,UVar3,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._newScales;
      if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      __this_01 = pIVar2[2].klass;
      UVar3 = System_Collections_Generic_List_Vector3___get_Item(pSVar1,index,MethodInfo_Vector3_get_Item);
      if (__this_01 == (Il2CppClass *)0x0) break;
      Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)__this_01,UVar3,(MethodInfo *)0x0);
      index = index + 1;
      __this_03 = (__this->fields)._ids;
      if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) break;
    } while( true );
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// MapEditor.TransformScaleCommand$$Unexecute
// il2cpp: void MapEditor_TransformScaleCommand__Unexecute (MapEditor_TransformScaleCommand_o* __this, const MethodInfo* method);
// 0x433bcd0

void MapEditor_TransformScaleCommand__Unexecute(MapEditor_TransformScaleCommand_o *__this,MethodInfo *method)

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
  
  if (g_data_057ae0b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae0b4 = '\x01';
  }
  __this_03 = (__this->fields)._ids;
  if (__this_03 != (System_Collections_Generic_List_int__o *)0x0) {
    index = 0;
    do {
      if ((__this_03->fields)._size <= index) {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_MapLoader);
        __this_03 = (__this->fields)._ids;
        if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) break;
      }
      __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      key = System_Collections_Generic_List_int___get_Item(__this_03,index,MethodInfo_Int32_get_Item);
      if (((__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar2 = System_Collections_Generic_Dictionary_int__object___get_Item(__this_00,key,MethodInfo_MapObject_get_Item),
          pIVar2 == (Il2CppObject *)0x0)) || (pIVar2[1].monitor == (UnityEngine_GameObject_o *)0x0)) break;
      __this_02 = UnityEngine_GameObject__get_transform(pIVar2[1].monitor,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._oldScales;
      if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      UVar3.fields = *(UnityEngine_Vector3_Fields *)&pIVar2[2].monitor;
      b = System_Collections_Generic_List_Vector3___get_Item(pSVar1,index,MethodInfo_Vector3_get_Item);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar3 = Utility_Util__MultiplyVectors(UVar3,b,(MethodInfo *)0x0);
      if (__this_02 == (UnityEngine_Transform_o *)0x0) break;
      UnityEngine_Transform__set_localScale(__this_02,UVar3,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._oldScales;
      if (pSVar1 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      __this_01 = pIVar2[2].klass;
      UVar3 = System_Collections_Generic_List_Vector3___get_Item(pSVar1,index,MethodInfo_Vector3_get_Item);
      if (__this_01 == (Il2CppClass *)0x0) break;
      Map_MapScriptBaseObject__SetScale((Map_MapScriptBaseObject_o *)__this_01,UVar3,(MethodInfo *)0x0);
      index = index + 1;
      __this_03 = (__this->fields)._ids;
      if (__this_03 == (System_Collections_Generic_List_int__o *)0x0) break;
    } while( true );
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


