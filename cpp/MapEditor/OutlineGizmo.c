// Type: MapEditor.OutlineGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/OutlineGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/OutlineGizmo.cs
// --------------------------------

// MapEditor.OutlineGizmo$$Create
// il2cpp: MapEditor_OutlineGizmo_o* MapEditor_OutlineGizmo__Create (const MethodInfo* method);
// 0x433ca50

MapEditor_OutlineGizmo_o * MapEditor_OutlineGizmo__Create(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  MapEditor_OutlineGizmo_o *__this_05;
  MapEditor_OutlineGizmo_o *pMVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this_06;
  MapEditor_OutlineGizmo_o *extraout_RAX;
  long *plVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auVar8 [12];
  Il2CppRGCTXData *pIVar9;
  _union_249689 _Var10;
  Map_MapObject_o *obj;
  Map_MapObject_o *pMVar11;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_60;
  Il2CppType *pIStack_58;
  Map_MapObject_o *pMStack_50;
  undefined1 auStack_48 [16];
  Map_MapObject_o *pMStack_38;
  MapEditor_OutlineGizmo_o *pMStack_30;
  
  if (g_data_057ae0ba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_OutlineGizmo_AddComponent_OutlineGizmo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    g_data_057ae0ba = '\x01';
  }
  __this_05 = (MapEditor_OutlineGizmo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  pMVar6 = __this_05;
  UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)__this_05,(MethodInfo *)0x0);
  if (__this_05 != (MapEditor_OutlineGizmo_o *)0x0) {
    pMVar6 = (MapEditor_OutlineGizmo_o *)
             UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)__this_05,MethodInfo_OutlineGizmo_AddComponent_OutlineGizmo);
    return pMVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMStack_30 = __this_05;
  if (g_data_057ae0bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Map_MapObject_Lis);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    g_data_057ae0bb = '\x01';
  }
  pIVar9 = (Il2CppRGCTXData *)0x0;
  _Var10.genericMethod = (Il2CppMethodPointer)0x0;
  obj = (Map_MapObject_o *)0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_58 = (Il2CppType *)0x0;
  pMStack_50 = (Map_MapObject_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(pMVar6->fields)._meshOutlines;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0433cd3c;
  collection = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Map_MapObject_Lis);
  __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
  System_Collections_Generic_List_object____ctor_362ba10
            (__this_06,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_Map_MapObject);
  if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_0433cd3c;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_06,MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
  pIVar9 = (Il2CppRGCTXData *)auStack_48._0_8_;
  _Var10 = (_union_249689)auStack_48._8_8_;
  while( true ) {
    obj = pMStack_38;
    __this.fields._8_8_ = _Var10.genericMethod;
    __this.fields._list = (System_Collections_Generic_List_T__o *)pIVar9;
    __this.fields._current = (Il2CppObject *)obj;
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
    if ((char)bVar5 == '\0') {
      __this_00.fields._8_8_ = _Var10.genericMethod;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pIVar9;
      __this_00.fields._current = (Il2CppObject *)obj;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      goto label_0433cc8e;
    }
    pGVar2 = (pMVar6->fields)._gameManager;
    if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_0433cd32;
    pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects;
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    pMVar11 = obj;
    bVar5 = System_Collections_Generic_HashSet_object___Contains(pSVar3,(Il2CppObject *)obj,MethodInfo_Boolean_Contains);
    pMStack_38 = pMVar11;
    if ((char)bVar5 == '\0') {
      MapEditor_OutlineGizmo__DestroyOutline(pMVar6,obj,method_00);
      pMStack_38 = pMVar11;
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_0433cd3c:
    do {
      auVar8 = il2cpp_runtime_helper_022b2c90();
      if (auVar8._8_4_ != 1) {
label_0433ce3f:
        __this_04.fields._8_8_ = _Var10.genericMethod;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)pIVar9;
        __this_04.fields._current = (Il2CppObject *)obj;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
        _Unwind_Resume(auVar8._0_8_);
      }
      plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
      lVar4 = *plVar7;
      __cxa_end_catch();
      __this_03.fields._8_8_ = _Var10.genericMethod;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pIVar9;
      __this_03.fields._current = (Il2CppObject *)obj;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      if (lVar4 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar4);
        goto label_0433ce3f;
      }
label_0433cc8e:
      pGVar2 = (pMVar6->fields)._gameManager;
    } while ((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
            (pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
            pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0));
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&pSStack_60,pSVar3,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = _Var10.genericMethod;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar9;
      __this_01.fields._current = (Il2CppObject *)obj;
      bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)&pSStack_60);
      pMVar11 = pMStack_50;
      if ((char)bVar5 == '\0') {
        __this_02.fields._8_8_ = _Var10.genericMethod;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar9;
        __this_02.fields._current = (Il2CppObject *)obj;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_3219C30 *)&pSStack_60);
        return extraout_RAX;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(pMVar6->fields)._meshOutlines;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar1,(Il2CppObject *)pMStack_50,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar5 == '\0') {
        MapEditor_OutlineGizmo__CreateOutline(pMVar6,pMVar11,method_01);
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_0433cd32:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// MapEditor.OutlineGizmo$$OnSelectionChange
// il2cpp: void MapEditor_OutlineGizmo__OnSelectionChange (MapEditor_OutlineGizmo_o* __this, const MethodInfo* method);
// 0x433cac0

void MapEditor_OutlineGizmo__OnSelectionChange(MapEditor_OutlineGizmo_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this_06;
  long *plVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auVar7 [12];
  Il2CppRGCTXData *pIVar8;
  _union_249689 _Var9;
  Map_MapObject_o *obj;
  Map_MapObject_o *pMVar10;
  System_Collections_Generic_List_Enumerator_T__c *local_58;
  Il2CppType *pIStack_50;
  Map_MapObject_o *local_48;
  undefined1 local_40 [16];
  Map_MapObject_o *local_30;
  
  if (g_data_057ae0bb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Map_MapObject_Lis);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapObject);
    g_data_057ae0bb = '\x01';
  }
  pIVar8 = (Il2CppRGCTXData *)0x0;
  _Var9.genericMethod = (Il2CppMethodPointer)0x0;
  obj = (Map_MapObject_o *)0x0;
  local_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_48 = (Map_MapObject_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._meshOutlines;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0433cd3c;
  collection = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_Map_MapObject_Lis);
  __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapObject);
  System_Collections_Generic_List_object____ctor_362ba10
            (__this_06,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_Map_MapObject);
  if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_0433cd3c;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_06,MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
  pIVar8 = (Il2CppRGCTXData *)local_40._0_8_;
  _Var9 = (_union_249689)local_40._8_8_;
  while( true ) {
    obj = local_30;
    __this_00.fields._8_8_ = _Var9.genericMethod;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)pIVar8;
    __this_00.fields._current = (Il2CppObject *)obj;
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
    if ((char)bVar5 == '\0') {
      __this_01.fields._8_8_ = _Var9.genericMethod;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pIVar8;
      __this_01.fields._current = (Il2CppObject *)obj;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
      goto label_0433cc8e;
    }
    pGVar2 = (__this->fields)._gameManager;
    if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_0433cd32;
    pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects;
    if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
    pMVar10 = obj;
    bVar5 = System_Collections_Generic_HashSet_object___Contains(pSVar3,(Il2CppObject *)obj,MethodInfo_Boolean_Contains);
    local_30 = pMVar10;
    if ((char)bVar5 == '\0') {
      MapEditor_OutlineGizmo__DestroyOutline(__this,obj,method_00);
      local_30 = pMVar10;
    }
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_0433cd3c:
    do {
      auVar7 = il2cpp_runtime_helper_022b2c90();
      if (auVar7._8_4_ != 1) {
label_0433ce3f:
        __this_05.fields._8_8_ = _Var9.genericMethod;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pIVar8;
        __this_05.fields._current = (Il2CppObject *)obj;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
        _Unwind_Resume(auVar7._0_8_);
      }
      plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
      lVar4 = *plVar6;
      __cxa_end_catch();
      __this_04.fields._8_8_ = _Var9.genericMethod;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pIVar8;
      __this_04.fields._current = (Il2CppObject *)obj;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
      if (lVar4 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar4);
        goto label_0433ce3f;
      }
label_0433cc8e:
      pGVar2 = (__this->fields)._gameManager;
    } while ((pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) ||
            (pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
            pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0));
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_58,pSVar3,MethodInfo_HashSet_1_T_Enumerator_Map_MapObject_GetEnumerator);
    while( true ) {
      __this_02.fields._8_8_ = _Var9.genericMethod;
      __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar8;
      __this_02.fields._current = (Il2CppObject *)obj;
      bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_3219C40 *)&local_58);
      pMVar10 = local_48;
      if ((char)bVar5 == '\0') {
        __this_03.fields._8_8_ = _Var9.genericMethod;
        __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar8;
        __this_03.fields._current = (Il2CppObject *)obj;
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_3219C30 *)&local_58);
        return;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._meshOutlines;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar1,(Il2CppObject *)local_48,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar5 == '\0') {
        MapEditor_OutlineGizmo__CreateOutline(__this,pMVar10,method_01);
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_0433cd32:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// MapEditor.OutlineGizmo$$CreateOutline
// il2cpp: void MapEditor_OutlineGizmo__CreateOutline (MapEditor_OutlineGizmo_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x433d050

void MapEditor_OutlineGizmo__CreateOutline
               (MapEditor_OutlineGizmo_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  long lVar3;
  uint uVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  Outline_o *pOVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  uint uVar9;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  
  if (g_data_057ae0bc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Outline_AddComponent_Outline);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Outline);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Outline);
    g_data_057ae0bc = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Outline);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_Outline);
  if (((obj != (Map_MapObject_o *)0x0) &&
      (pUVar6 = (obj->fields).GameObject, pUVar6 != (UnityEngine_GameObject_o *)0x0)) &&
     (pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(pUVar6,MethodInfo_MeshFilter_GetComponentsInChildren_MeshFilter),
     pSVar5 != (System_Object_array *)0x0)) {
    uVar4 = (uint)pSVar5->max_length;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (int)uVar4) {
label_0433d27b:
        if ((((UnityEngine_Component_o *)pSVar5->m_Items[0] != (UnityEngine_Component_o *)0x0) &&
            (pUVar6 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pSVar5->m_Items[0],(MethodInfo *)0x0),
            pUVar6 != (UnityEngine_GameObject_o *)0x0)) &&
           (pOVar7 = (Outline_o *)UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_Outline_AddComponent_Outline),
           pOVar7 != (Outline_o *)0x0)) goto label_0433d2ad;
        goto label_0433d2a8;
      }
    }
    else if (0 < (int)uVar4) {
      uVar9 = 0;
      do {
        while( true ) {
          if (uVar4 <= uVar9) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_0433d27b;
          }
          if ((((UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar9] == (UnityEngine_Component_o *)0x0) ||
              (pUVar6 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar9],(MethodInfo *)0x0),
              pUVar6 == (UnityEngine_GameObject_o *)0x0)) ||
             (pOVar7 = (Outline_o *)UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_Outline_AddComponent_Outline),
             pOVar7 == (Outline_o *)0x0)) goto label_0433d2a8;
          Outline__set_OutlineMode(pOVar7,5,(MethodInfo *)0x0);
          value.fields.b = 0.0;
          value.fields.a = 1.0;
          value.fields.r = 0.0;
          value.fields.g = 1.0;
          Outline__set_OutlineColor(pOVar7,value,(MethodInfo *)0x0);
          Outline__set_OutlineWidth(pOVar7,3.0,(MethodInfo *)0x0);
          lVar3 = _DAT_055916f8;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar2 = (__this_00->fields)._items;
          if (pSVar2 == (System_Object_array *)0x0) goto label_0433d2a8;
          uVar4 = (__this_00->fields)._size;
          if ((uint)pSVar2->max_length <= uVar4) break;
          (__this_00->fields)._size = uVar4 + 1;
          pSVar2->m_Items[(int)uVar4] = (Il2CppObject *)pOVar7;
          il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar4);
          uVar9 = uVar9 + 1;
          uVar4 = (uint)pSVar5->max_length;
          if ((int)uVar4 <= (int)uVar9) goto label_0433d243;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,(Il2CppObject *)pOVar7,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        uVar9 = uVar9 + 1;
        uVar4 = (uint)pSVar5->max_length;
      } while ((int)uVar9 < (int)uVar4);
    }
label_0433d243:
    pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._meshOutlines;
    if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar8,(Il2CppObject *)obj,(Il2CppObject *)__this_00,MethodInfo_Void_Add);
      return;
    }
  }
label_0433d2a8:
  pOVar7 = (Outline_o *)il2cpp_runtime_helper_022b2c90();
label_0433d2ad:
  Outline__set_OutlineMode(pOVar7,5,(MethodInfo *)0x0);
  value_00.fields.b = 0.0;
  value_00.fields.a = 1.0;
  value_00.fields.r = 0.0;
  value_00.fields.g = 1.0;
  Outline__set_OutlineColor(pOVar7,value_00,(MethodInfo *)0x0);
  Outline__set_OutlineWidth(pOVar7,3.0,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0be == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Map_MapObject_List_1_Outline);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_MapObject_List_Outline);
    g_data_057ae0be = '\x01';
  }
  pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MapObject_List_Outline);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar8,MethodInfo_Dictionary_2_Map_MapObject_List_1_Outline);
  *(System_Collections_Generic_Dictionary_object__object__o **)&(pOVar7->fields).precomputeOutline = pSVar8;
  il2cpp_runtime_helper_022b4080(&(pOVar7->fields).precomputeOutline);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pOVar7,(MethodInfo *)0x0);
  return;
}


// MapEditor.OutlineGizmo$$DestroyOutline
// il2cpp: void MapEditor_OutlineGizmo__DestroyOutline (MapEditor_OutlineGizmo_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x433ce80

void MapEditor_OutlineGizmo__DestroyOutline
               (MapEditor_OutlineGizmo_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *__this_04;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  UnityEngine_Object_o *obj_00;
  UnityEngine_Object_o *pUVar8;
  
  if (g_data_057ae0bd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Outline_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Outline_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Outline_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0bd = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  obj_00 = (UnityEngine_Object_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._meshOutlines;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0433cfd0;
  __this_04 = (System_Collections_Generic_List_object__o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (pSVar1,(Il2CppObject *)obj,MethodInfo_List_1_Outline_get_Item);
  if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto label_0433cfd0;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,__this_04,
             MethodInfo_List_1_T_Enumerator_Outline_GetEnumerator);
  while (__this_00.fields._8_8_ = pIVar7, __this_00.fields._list = pSVar6,
        __this_00.fields._current = (Il2CppObject *)obj_00,
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar3 != '\0') {
    pUVar8 = obj_00;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj_00,(MethodInfo *)0x0);
    obj_00 = pUVar8;
  }
  __this_01.fields._8_8_ = pIVar7;
  __this_01.fields._list = pSVar6;
  __this_01.fields._current = (Il2CppObject *)obj_00;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  do {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._meshOutlines;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove(pSVar1,(Il2CppObject *)obj,MethodInfo_Boolean_Remove);
      return;
    }
label_0433cfd0:
    auVar5 = il2cpp_runtime_helper_022b2c90();
    if (auVar5._8_4_ != 1) goto label_0433d016;
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._list = pSVar6;
    __this_02.fields._current = (Il2CppObject *)obj_00;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  } while (lVar2 == 0);
  il2cpp_runtime_helper_022fefe0(lVar2);
label_0433d016:
  __this_03.fields._8_8_ = pIVar7;
  __this_03.fields._list = pSVar6;
  __this_03.fields._current = (Il2CppObject *)obj_00;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar5._0_8_);
}


// MapEditor.OutlineGizmo$$.ctor
// il2cpp: void MapEditor_OutlineGizmo___ctor (MapEditor_OutlineGizmo_o* __this, const MethodInfo* method);
// 0x433d2f0

void MapEditor_OutlineGizmo___ctor(MapEditor_OutlineGizmo_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ae0be == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Map_MapObject_List_1_Outline);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_MapObject_List_Outline);
    g_data_057ae0be = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MapObject_List_Outline);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_Map_MapObject_List_1_Outline);
  (__this->fields)._meshOutlines =
       (System_Collections_Generic_Dictionary_MapObject__List_Outline___o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._meshOutlines);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


