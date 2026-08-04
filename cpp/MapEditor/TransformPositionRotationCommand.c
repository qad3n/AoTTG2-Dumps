// Type: MapEditor.TransformPositionRotationCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/TransformPositionRotationCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformPositionRotationCommand.cs
// --------------------------------

// MapEditor.TransformPositionRotationCommand$$.ctor
// il2cpp: void MapEditor_TransformPositionRotationCommand___ctor (MapEditor_TransformPositionRotationCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x433a020

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
  long lVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar10;
  System_Collections_Generic_List_Vector3__o *pSVar11;
  System_Collections_Generic_List_int__o *pSVar12;
  UnityEngine_Transform_o *pUVar13;
  long *plVar14;
  Il2CppClass *pIVar15;
  UnityEngine_GameObject_o *pUVar16;
  UnityEngine_Quaternion_o rotation;
  undefined1 auVar17 [12];
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o euler;
  System_Collections_Generic_List_T__o *pSVar19;
  Il2CppRGCTXData *pIVar20;
  _union_249395 _Var21;
  _union_249395 _Var22;
  undefined1 local_48 [16];
  _union_249395 local_38;
  
  if (g_data_057ae0ac == '\0') {
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
    g_data_057ae0ac = '\x01';
  }
  pSVar19 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar20 = (Il2CppRGCTXData *)0x0;
  _Var21.genericMethod = (Il2CppObject *)0x0;
  pSVar11 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor(pSVar11,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._oldPositions = pSVar11;
  il2cpp_runtime_helper_022b4080(&__this->fields,pSVar11);
  pSVar11 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor(pSVar11,MethodInfo_List_1_UnityEngine_Vector3);
  ppSVar1 = &(__this->fields)._newPositions;
  (__this->fields)._newPositions = pSVar11;
  il2cpp_runtime_helper_022b4080(ppSVar1,pSVar11);
  pSVar11 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor(pSVar11,MethodInfo_List_1_UnityEngine_Vector3);
  ppSVar2 = &(__this->fields)._oldRotations;
  (__this->fields)._oldRotations = pSVar11;
  il2cpp_runtime_helper_022b4080(ppSVar2,pSVar11);
  pSVar11 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor(pSVar11,MethodInfo_List_1_UnityEngine_Vector3);
  ppSVar3 = &(__this->fields)._newRotations;
  (__this->fields)._newRotations = pSVar11;
  il2cpp_runtime_helper_022b4080(ppSVar3,pSVar11);
  pSVar12 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  System_Collections_Generic_List_int____ctor(pSVar12,MethodInfo_List_1_System_Int32);
  ppSVar4 = &(__this->fields)._ids;
  (__this->fields)._ids = pSVar12;
  il2cpp_runtime_helper_022b4080(ppSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (mapObjects != (System_Collections_Generic_List_MapObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)mapObjects,MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    pSVar19 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    pIVar20 = (Il2CppRGCTXData *)local_48._8_8_;
    _Var22 = local_38;
    while( true ) {
      __this_00.fields._8_8_ = pIVar20;
      __this_00.fields._list = pSVar19;
      __this_00.fields._current = _Var22.genericMethod;
      bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
      lVar9 = MethodInfo_Void_Add;
      if ((char)bVar10 == '\0') {
        __this_01.fields._8_8_ = pIVar20;
        __this_01.fields._list = pSVar19;
        __this_01.fields._current = _Var22.genericMethod;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
        return;
      }
      if (_Var22.genericMethod == (Il2CppObject *)0x0) break;
      pIVar15 = ((Il2CppObject *)((long)_Var22.genericMethod + 0x20))->klass;
      _Var21 = _Var22;
      if (pIVar15 == (Il2CppClass *)0x0) goto label_0433a524;
      pSVar12 = *ppSVar4;
      if (pSVar12 == (System_Collections_Generic_List_int__o *)0x0) goto label_0433a529;
      item = *(int32_t *)&(pIVar15->_1).byval_arg.data;
      piVar5 = &(pSVar12->fields)._version;
      *piVar5 = *piVar5 + 1;
      pSVar7 = (pSVar12->fields)._items;
      if (pSVar7 == (System_Int32_array *)0x0) goto label_0433a52e;
      uVar6 = (pSVar12->fields)._size;
      if ((uint)pSVar7->max_length <= uVar6) {
        System_Collections_Generic_List_int___AddWithResize
                  (pSVar12,item,*(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        pIVar15 = ((Il2CppObject *)((long)_Var22.genericMethod + 0x20))->klass;
        if (pIVar15 != (Il2CppClass *)0x0) goto label_0433a2c4;
        goto label_0433a556;
      }
      (pSVar12->fields)._size = uVar6 + 1;
      pSVar7->m_Items[(int)uVar6] = item;
label_0433a2c4:
      pSVar11 = (__this->fields)._oldPositions;
      UVar18 = Map_MapScriptBaseObject__GetPosition((Map_MapScriptBaseObject_o *)pIVar15,(MethodInfo *)0x0);
      lVar9 = MethodInfo_Void_Add;
      if (pSVar11 == (System_Collections_Generic_List_Vector3__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_0433a506:
        il2cpp_runtime_helper_022b2c90();
label_0433a50b:
        il2cpp_runtime_helper_022b2c90();
label_0433a510:
        _Var22 = _Var21;
        il2cpp_runtime_helper_022b2c90();
label_0433a515:
        il2cpp_runtime_helper_022b2c90();
label_0433a51a:
        il2cpp_runtime_helper_022b2c90();
        break;
      }
      piVar5 = &(pSVar11->fields)._version;
      *piVar5 = *piVar5 + 1;
      pUVar8 = (pSVar11->fields)._items;
      if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto label_0433a533;
      uVar6 = (pSVar11->fields)._size;
      if ((uint)pUVar8->max_length <= uVar6) {
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar11,UVar18,*(MethodInfo_36A2CA0 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        pUVar16 = *(void **)((long)_Var22.genericMethod + 0x18);
        if (pUVar16 != (UnityEngine_GameObject_o *)0x0) goto label_0433a344;
        goto label_0433a538;
      }
      (pSVar11->fields)._size = uVar6 + 1;
      pUVar8->m_Items[(int)uVar6].fields.x = (float)(int)UVar18.fields._0_8_;
      pUVar8->m_Items[(int)uVar6].fields.y = (float)(int)((ulong)UVar18.fields._0_8_ >> 0x20);
      pUVar8->m_Items[(int)uVar6].fields.z = UVar18.fields.z;
      pUVar16 = *(void **)((long)_Var22.genericMethod + 0x18);
      if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_0433a538;
label_0433a344:
      pSVar11 = *ppSVar1;
      pUVar13 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_0433a53d;
      UVar18 = UnityEngine_Transform__get_localPosition(pUVar13,(MethodInfo *)0x0);
      lVar9 = MethodInfo_Void_Add;
      if (pSVar11 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_0433a542;
      piVar5 = &(pSVar11->fields)._version;
      *piVar5 = *piVar5 + 1;
      pUVar8 = (pSVar11->fields)._items;
      if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto label_0433a506;
      uVar6 = (pSVar11->fields)._size;
      if ((uint)pUVar8->max_length <= uVar6) {
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar11,UVar18,*(MethodInfo_36A2CA0 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        pIVar15 = ((Il2CppObject *)((long)_Var22.genericMethod + 0x20))->klass;
        if (pIVar15 != (Il2CppClass *)0x0) goto label_0433a3d4;
        goto label_0433a547;
      }
      (pSVar11->fields)._size = uVar6 + 1;
      pUVar8->m_Items[(int)uVar6].fields.x = (float)(int)UVar18.fields._0_8_;
      pUVar8->m_Items[(int)uVar6].fields.y = (float)(int)((ulong)UVar18.fields._0_8_ >> 0x20);
      pUVar8->m_Items[(int)uVar6].fields.z = UVar18.fields.z;
      pIVar15 = ((Il2CppObject *)((long)_Var22.genericMethod + 0x20))->klass;
      if (pIVar15 == (Il2CppClass *)0x0) goto label_0433a547;
label_0433a3d4:
      pSVar11 = *ppSVar2;
      UVar18 = Map_MapScriptBaseObject__GetRotation((Map_MapScriptBaseObject_o *)pIVar15,(MethodInfo *)0x0);
      lVar9 = MethodInfo_Void_Add;
      if (pSVar11 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_0433a50b;
      piVar5 = &(pSVar11->fields)._version;
      *piVar5 = *piVar5 + 1;
      pUVar8 = (pSVar11->fields)._items;
      if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto label_0433a510;
      uVar6 = (pSVar11->fields)._size;
      if ((uint)pUVar8->max_length <= uVar6) {
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar11,UVar18,*(MethodInfo_36A2CA0 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        pUVar16 = *(void **)((long)_Var22.genericMethod + 0x18);
        _Var22 = _Var21;
        if (pUVar16 != (UnityEngine_GameObject_o *)0x0) goto label_0433a454;
        goto label_0433a54c;
      }
      (pSVar11->fields)._size = uVar6 + 1;
      pUVar8->m_Items[(int)uVar6].fields.x = (float)(int)UVar18.fields._0_8_;
      pUVar8->m_Items[(int)uVar6].fields.y = (float)(int)((ulong)UVar18.fields._0_8_ >> 0x20);
      pUVar8->m_Items[(int)uVar6].fields.z = UVar18.fields.z;
      pUVar16 = *(void **)((long)_Var22.genericMethod + 0x18);
      _Var22 = _Var21;
      if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_0433a54c;
label_0433a454:
      pSVar11 = *ppSVar3;
      pUVar13 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_0433a515;
      rotation = UnityEngine_Transform__get_localRotation(pUVar13,(MethodInfo *)0x0);
      UVar18 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar18.fields.x * 57.29578;
      euler.fields.z = UVar18.fields.z * 57.29578;
      euler.fields.y = UVar18.fields.y * 57.29578;
      UVar18 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      lVar9 = MethodInfo_Void_Add;
      if (pSVar11 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_0433a551;
      piVar5 = &(pSVar11->fields)._version;
      *piVar5 = *piVar5 + 1;
      pUVar8 = (pSVar11->fields)._items;
      if (pUVar8 == (UnityEngine_Vector3_array *)0x0) goto label_0433a51a;
      uVar6 = (pSVar11->fields)._size;
      if (uVar6 < (uint)pUVar8->max_length) {
        (pSVar11->fields)._size = uVar6 + 1;
        pUVar8->m_Items[(int)uVar6].fields.x = (float)(int)UVar18.fields._0_8_;
        pUVar8->m_Items[(int)uVar6].fields.y = (float)(int)((ulong)UVar18.fields._0_8_ >> 0x20);
        pUVar8->m_Items[(int)uVar6].fields.z = UVar18.fields.z;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar11,UVar18,*(MethodInfo_36A2CA0 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    il2cpp_runtime_helper_022b2c90();
    _Var21 = _Var22;
label_0433a524:
    il2cpp_runtime_helper_022b2c90();
label_0433a529:
    il2cpp_runtime_helper_022b2c90();
label_0433a52e:
    il2cpp_runtime_helper_022b2c90();
label_0433a533:
    il2cpp_runtime_helper_022b2c90();
label_0433a538:
    il2cpp_runtime_helper_022b2c90();
label_0433a53d:
    il2cpp_runtime_helper_022b2c90();
label_0433a542:
    il2cpp_runtime_helper_022b2c90();
label_0433a547:
    il2cpp_runtime_helper_022b2c90();
    _Var22 = _Var21;
label_0433a54c:
    il2cpp_runtime_helper_022b2c90();
label_0433a551:
    il2cpp_runtime_helper_022b2c90();
    _Var21 = _Var22;
label_0433a556:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar17 = il2cpp_runtime_helper_022b2c90();
  if (auVar17._8_4_ == 1) {
    plVar14 = (long *)__cxa_begin_catch(auVar17._0_8_);
    lVar9 = *plVar14;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar20;
    __this_02.fields._list = pSVar19;
    __this_02.fields._current = _Var21.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
    if (lVar9 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar9);
  }
  __this_03.fields._8_8_ = pIVar20;
  __this_03.fields._list = pSVar19;
  __this_03.fields._current = _Var21.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
  _Unwind_Resume(auVar17._0_8_);
}


// MapEditor.TransformPositionRotationCommand$$Execute
// il2cpp: void MapEditor_TransformPositionRotationCommand__Execute (MapEditor_TransformPositionRotationCommand_o* __this, const MethodInfo* method);
// 0x433a740

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
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  
  if (g_data_057ae0ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ae0ad = '\x01';
  }
  pSVar7 = (__this->fields)._ids;
  if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
    index = 0;
    do {
      if ((pSVar7->fields)._size <= index) {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_MapLoader);
        pSVar7 = (__this->fields)._ids;
        if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar4 = System_Collections_Generic_List_int___get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar5 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar4,MethodInfo_MapObject_get_Item),
          pIVar5 == (Il2CppObject *)0x0)) || (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0)) break;
      pUVar6 = UnityEngine_GameObject__get_transform(pIVar5[1].monitor,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._newPositions;
      if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         (UVar8 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item),
         pUVar6 == (UnityEngine_Transform_o *)0x0)) break;
      UnityEngine_Transform__set_localPosition(pUVar6,UVar8,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._ids;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar4 = System_Collections_Generic_List_int___get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar5 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar4,MethodInfo_MapObject_get_Item),
          pIVar5 == (Il2CppObject *)0x0)) ||
         (pSVar2 = (__this->fields)._newPositions, pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      pIVar3 = pIVar5[2].klass;
      UVar8 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
      if (pIVar3 == (Il2CppClass *)0x0) break;
      Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)pIVar3,UVar8,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._ids;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar4 = System_Collections_Generic_List_int___get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar5 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar4,MethodInfo_MapObject_get_Item),
          pIVar5 == (Il2CppObject *)0x0)) || (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0)) break;
      pUVar6 = UnityEngine_GameObject__get_transform(pIVar5[1].monitor,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._newRotations;
      if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      UVar8 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
      euler.fields.x = UVar8.fields.x * 0.017453292;
      euler.fields.y = UVar8.fields.y * 0.017453292;
      euler.fields.z = UVar8.fields.z * 0.017453292;
      value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) break;
      UnityEngine_Transform__set_localRotation(pUVar6,value,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._ids;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar4 = System_Collections_Generic_List_int___get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar5 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar4,MethodInfo_MapObject_get_Item),
          pIVar5 == (Il2CppObject *)0x0)) ||
         (pSVar2 = (__this->fields)._newRotations, pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      pIVar3 = pIVar5[2].klass;
      UVar8 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
      if (pIVar3 == (Il2CppClass *)0x0) break;
      Map_MapScriptBaseObject__SetRotation((Map_MapScriptBaseObject_o *)pIVar3,UVar8,(MethodInfo *)0x0);
      index = index + 1;
      pSVar7 = (__this->fields)._ids;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
    } while( true );
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// MapEditor.TransformPositionRotationCommand$$Unexecute
// il2cpp: void MapEditor_TransformPositionRotationCommand__Unexecute (MapEditor_TransformPositionRotationCommand_o* __this, const MethodInfo* method);
// 0x433aa20

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
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  
  if (g_data_057ae0ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ae0ae = '\x01';
  }
  pSVar7 = (__this->fields)._ids;
  if (pSVar7 != (System_Collections_Generic_List_int__o *)0x0) {
    index = 0;
    do {
      if ((pSVar7->fields)._size <= index) {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_MapLoader);
        pSVar7 = (__this->fields)._ids;
        if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar4 = System_Collections_Generic_List_int___get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar5 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar4,MethodInfo_MapObject_get_Item),
          pIVar5 == (Il2CppObject *)0x0)) || (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0)) break;
      pUVar6 = UnityEngine_GameObject__get_transform(pIVar5[1].monitor,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._oldPositions;
      if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         (UVar8 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item),
         pUVar6 == (UnityEngine_Transform_o *)0x0)) break;
      UnityEngine_Transform__set_localPosition(pUVar6,UVar8,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._ids;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar4 = System_Collections_Generic_List_int___get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar5 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar4,MethodInfo_MapObject_get_Item),
          pIVar5 == (Il2CppObject *)0x0)) ||
         (pSVar2 = (__this->fields)._oldPositions, pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      pIVar3 = pIVar5[2].klass;
      UVar8 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
      if (pIVar3 == (Il2CppClass *)0x0) break;
      Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)pIVar3,UVar8,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._ids;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar4 = System_Collections_Generic_List_int___get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar5 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar4,MethodInfo_MapObject_get_Item),
          pIVar5 == (Il2CppObject *)0x0)) || (pIVar5[1].monitor == (UnityEngine_GameObject_o *)0x0)) break;
      pUVar6 = UnityEngine_GameObject__get_transform(pIVar5[1].monitor,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._oldRotations;
      if (pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) break;
      UVar8 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
      euler.fields.x = UVar8.fields.x * 0.017453292;
      euler.fields.y = UVar8.fields.y * 0.017453292;
      euler.fields.z = UVar8.fields.z * 0.017453292;
      value = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) break;
      UnityEngine_Transform__set_localRotation(pUVar6,value,(MethodInfo *)0x0);
      pSVar7 = (__this->fields)._ids;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar4 = System_Collections_Generic_List_int___get_Item(pSVar7,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar5 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar4,MethodInfo_MapObject_get_Item),
          pIVar5 == (Il2CppObject *)0x0)) ||
         (pSVar2 = (__this->fields)._oldRotations, pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      pIVar3 = pIVar5[2].klass;
      UVar8 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
      if (pIVar3 == (Il2CppClass *)0x0) break;
      Map_MapScriptBaseObject__SetRotation((Map_MapScriptBaseObject_o *)pIVar3,UVar8,(MethodInfo *)0x0);
      index = index + 1;
      pSVar7 = (__this->fields)._ids;
      if (pSVar7 == (System_Collections_Generic_List_int__o *)0x0) break;
    } while( true );
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


