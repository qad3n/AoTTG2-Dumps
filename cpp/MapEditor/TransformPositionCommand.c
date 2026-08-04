// Type: MapEditor.TransformPositionCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/TransformPositionCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/TransformPositionCommand.cs
// --------------------------------

// MapEditor.TransformPositionCommand$$.ctor
// il2cpp: void MapEditor_TransformPositionCommand___ctor (MapEditor_TransformPositionCommand_o* __this, System_Collections_Generic_List_MapObject__o* mapObjects, const MethodInfo* method);
// 0x4339800

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
  long lVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar8;
  System_Collections_Generic_List_Vector3__o *pSVar9;
  System_Collections_Generic_List_int__o *pSVar10;
  UnityEngine_Transform_o *__this_04;
  long *plVar11;
  Il2CppClass *__this_05;
  UnityEngine_GameObject_o *__this_06;
  undefined1 auVar12 [12];
  UnityEngine_Vector3_o UVar13;
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  Il2CppType *pIVar15;
  Il2CppObject *pIVar16;
  Il2CppObject *pIVar17;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (g_data_057ae0a9 == '\0') {
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
    g_data_057ae0a9 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  pIVar16 = (Il2CppObject *)0x0;
  pSVar9 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor(pSVar9,MethodInfo_List_1_UnityEngine_Vector3);
  (__this->fields)._oldPositions = pSVar9;
  il2cpp_runtime_helper_022b4080(&__this->fields,pSVar9);
  pSVar9 = (System_Collections_Generic_List_Vector3__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Vector3);
  System_Collections_Generic_List_Vector3____ctor(pSVar9,MethodInfo_List_1_UnityEngine_Vector3);
  ppSVar1 = &(__this->fields)._newPositions;
  (__this->fields)._newPositions = pSVar9;
  il2cpp_runtime_helper_022b4080(ppSVar1,pSVar9);
  pSVar10 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  System_Collections_Generic_List_int____ctor(pSVar10,MethodInfo_List_1_System_Int32);
  ppSVar2 = &(__this->fields)._ids;
  (__this->fields)._ids = pSVar10;
  il2cpp_runtime_helper_022b4080(ppSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (mapObjects != (System_Collections_Generic_List_MapObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)mapObjects,MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar15 = (Il2CppType *)local_48._8_8_;
    pIVar17 = local_38;
    while( true ) {
      __this_00.fields._8_8_ = pIVar15;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
      __this_00.fields._current = pIVar17;
      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      lVar7 = MethodInfo_Void_Add;
      if ((char)bVar8 == '\0') {
        __this_01.fields._8_8_ = pIVar15;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
        __this_01.fields._current = pIVar17;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      pIVar16 = pIVar17;
      if (pIVar17 == (Il2CppObject *)0x0) break;
      __this_05 = pIVar17[2].klass;
      if (__this_05 == (Il2CppClass *)0x0) goto label_04339b50;
      pSVar10 = *ppSVar2;
      if (pSVar10 == (System_Collections_Generic_List_int__o *)0x0) goto label_04339b55;
      item = *(int32_t *)&(__this_05->_1).byval_arg.data;
      piVar3 = &(pSVar10->fields)._version;
      *piVar3 = *piVar3 + 1;
      pSVar5 = (pSVar10->fields)._items;
      if (pSVar5 == (System_Int32_array *)0x0) goto label_04339b5a;
      uVar4 = (pSVar10->fields)._size;
      if ((uint)pSVar5->max_length <= uVar4) {
        System_Collections_Generic_List_int___AddWithResize
                  (pSVar10,item,*(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        __this_05 = pIVar17[2].klass;
        if (__this_05 != (Il2CppClass *)0x0) goto label_04339a45;
        goto label_04339b78;
      }
      (pSVar10->fields)._size = uVar4 + 1;
      pSVar5->m_Items[(int)uVar4] = item;
label_04339a45:
      pSVar9 = (__this->fields)._oldPositions;
      UVar13 = Map_MapScriptBaseObject__GetPosition((Map_MapScriptBaseObject_o *)__this_05,(MethodInfo *)0x0);
      lVar7 = MethodInfo_Void_Add;
      if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        break;
      }
      piVar3 = &(pSVar9->fields)._version;
      *piVar3 = *piVar3 + 1;
      pUVar6 = (pSVar9->fields)._items;
      if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto label_04339b5f;
      uVar4 = (pSVar9->fields)._size;
      if ((uint)pUVar6->max_length <= uVar4) {
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar9,UVar13,*(MethodInfo_36A2CA0 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        __this_06 = pIVar17[1].monitor;
        pIVar17 = pIVar16;
        if (__this_06 != (UnityEngine_GameObject_o *)0x0) goto label_04339ac5;
        goto label_04339b6e;
      }
      (pSVar9->fields)._size = uVar4 + 1;
      pUVar6->m_Items[(int)uVar4].fields.x = (float)(int)UVar13.fields._0_8_;
      pUVar6->m_Items[(int)uVar4].fields.y = (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
      pUVar6->m_Items[(int)uVar4].fields.z = UVar13.fields.z;
      __this_06 = pIVar17[1].monitor;
      pIVar17 = pIVar16;
      if (__this_06 == (UnityEngine_GameObject_o *)0x0) goto label_04339b6e;
label_04339ac5:
      pSVar9 = *ppSVar1;
      __this_04 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
      if (__this_04 == (UnityEngine_Transform_o *)0x0) goto label_04339b64;
      UVar13 = UnityEngine_Transform__get_localPosition(__this_04,(MethodInfo *)0x0);
      lVar7 = MethodInfo_Void_Add;
      if (pSVar9 == (System_Collections_Generic_List_Vector3__o *)0x0) goto label_04339b73;
      piVar3 = &(pSVar9->fields)._version;
      *piVar3 = *piVar3 + 1;
      pUVar6 = (pSVar9->fields)._items;
      if (pUVar6 == (UnityEngine_Vector3_array *)0x0) goto label_04339b69;
      uVar4 = (pSVar9->fields)._size;
      if (uVar4 < (uint)pUVar6->max_length) {
        (pSVar9->fields)._size = uVar4 + 1;
        pUVar6->m_Items[(int)uVar4].fields.x = (float)(int)UVar13.fields._0_8_;
        pUVar6->m_Items[(int)uVar4].fields.y = (float)(int)((ulong)UVar13.fields._0_8_ >> 0x20);
        pUVar6->m_Items[(int)uVar4].fields.z = UVar13.fields.z;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize
                  (pSVar9,UVar13,*(MethodInfo_36A2CA0 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar17 = pIVar16;
label_04339b50:
    il2cpp_runtime_helper_022b2c90();
label_04339b55:
    il2cpp_runtime_helper_022b2c90();
label_04339b5a:
    il2cpp_runtime_helper_022b2c90();
    pIVar16 = pIVar17;
label_04339b5f:
    pIVar17 = pIVar16;
    il2cpp_runtime_helper_022b2c90();
label_04339b64:
    il2cpp_runtime_helper_022b2c90();
label_04339b69:
    il2cpp_runtime_helper_022b2c90();
label_04339b6e:
    il2cpp_runtime_helper_022b2c90();
label_04339b73:
    il2cpp_runtime_helper_022b2c90();
    pIVar16 = pIVar17;
label_04339b78:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar11 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar7 = *plVar11;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar15;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
    __this_02.fields._current = pIVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar7 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_03.fields._8_8_ = pIVar15;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
  __this_03.fields._current = pIVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar12._0_8_);
}


// MapEditor.TransformPositionCommand$$Execute
// il2cpp: void MapEditor_TransformPositionCommand__Execute (MapEditor_TransformPositionCommand_o* __this, const MethodInfo* method);
// 0x4339ca0

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
  
  if (g_data_057ae0aa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ae0aa = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
    index = 0;
    do {
      if ((pSVar5->fields)._size <= index) {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_MapLoader);
        pSVar5 = (__this->fields)._ids;
        if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) break;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar3 = System_Collections_Generic_List_int___get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar4 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar3,MethodInfo_MapObject_get_Item),
          pIVar4 == (Il2CppObject *)0x0)) || (pIVar4[1].monitor == (UnityEngine_GameObject_o *)0x0)) break;
      __this_01 = UnityEngine_GameObject__get_transform(pIVar4[1].monitor,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._newPositions;
      if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         (UVar6 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item),
         __this_01 == (UnityEngine_Transform_o *)0x0)) break;
      UnityEngine_Transform__set_localPosition(__this_01,UVar6,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._ids;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) break;
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar3 = System_Collections_Generic_List_int___get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar4 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar3,MethodInfo_MapObject_get_Item),
          pIVar4 == (Il2CppObject *)0x0)) ||
         (pSVar2 = (__this->fields)._newPositions, pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      __this_00 = pIVar4[2].klass;
      UVar6 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
      if (__this_00 == (Il2CppClass *)0x0) break;
      Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)__this_00,UVar6,(MethodInfo *)0x0);
      index = index + 1;
      pSVar5 = (__this->fields)._ids;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) break;
    } while( true );
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// MapEditor.TransformPositionCommand$$Unexecute
// il2cpp: void MapEditor_TransformPositionCommand__Unexecute (MapEditor_TransformPositionCommand_o* __this, const MethodInfo* method);
// 0x4339e60

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
  
  if (g_data_057ae0ab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Vector3_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ae0ab = '\x01';
  }
  pSVar5 = (__this->fields)._ids;
  if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
    index = 0;
    do {
      if ((pSVar5->fields)._size <= index) {
        return;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_MapLoader);
        pSVar5 = (__this->fields)._ids;
        if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) break;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar3 = System_Collections_Generic_List_int___get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar4 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar3,MethodInfo_MapObject_get_Item),
          pIVar4 == (Il2CppObject *)0x0)) || (pIVar4[1].monitor == (UnityEngine_GameObject_o *)0x0)) break;
      __this_01 = UnityEngine_GameObject__get_transform(pIVar4[1].monitor,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._oldPositions;
      if ((pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0) ||
         (UVar6 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item),
         __this_01 == (UnityEngine_Transform_o *)0x0)) break;
      UnityEngine_Transform__set_localPosition(__this_01,UVar6,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._ids;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) break;
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)**(undefined8 **)(TypeInfo_MapLoader + 0xb8);
      iVar3 = System_Collections_Generic_List_int___get_Item(pSVar5,index,MethodInfo_Int32_get_Item);
      if (((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
          (pIVar4 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar1,iVar3,MethodInfo_MapObject_get_Item),
          pIVar4 == (Il2CppObject *)0x0)) ||
         (pSVar2 = (__this->fields)._oldPositions, pSVar2 == (System_Collections_Generic_List_Vector3__o *)0x0
         )) break;
      __this_00 = pIVar4[2].klass;
      UVar6 = System_Collections_Generic_List_Vector3___get_Item(pSVar2,index,MethodInfo_Vector3_get_Item);
      if (__this_00 == (Il2CppClass *)0x0) break;
      Map_MapScriptBaseObject__SetPosition((Map_MapScriptBaseObject_o *)__this_00,UVar6,(MethodInfo *)0x0);
      index = index + 1;
      pSVar5 = (__this->fields)._ids;
      if (pSVar5 == (System_Collections_Generic_List_int__o *)0x0) break;
    } while( true );
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


