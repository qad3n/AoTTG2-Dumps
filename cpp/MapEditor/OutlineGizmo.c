// Type: MapEditor.OutlineGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/OutlineGizmo.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Gizmos/OutlineGizmo.cs  [CHANGED since prior version]
// --------------------------------

// MapEditor.OutlineGizmo$$Create
// il2cpp: MapEditor_OutlineGizmo_o* MapEditor_OutlineGizmo__Create (const MethodInfo* method);
// 0x4047ad0

MapEditor_OutlineGizmo_o * MapEditor_OutlineGizmo__Create(MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  MapEditor_OutlineGizmo_o *pMVar1;
  
  if (DAT_057043f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_OutlineGizmo_AddComponent_OutlineGizmo);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    DAT_057043f4 = '\x01';
  }
  __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pMVar1 = (MapEditor_OutlineGizmo_o *)
             UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_OutlineGizmo_AddComponent_OutlineGizmo);
    return pMVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.OutlineGizmo$$OnSelectionChange
// il2cpp: void MapEditor_OutlineGizmo__OnSelectionChange (MapEditor_OutlineGizmo_o* __this, const MethodInfo* method);
// 0x4047b40

void MapEditor_OutlineGizmo__OnSelectionChange(MapEditor_OutlineGizmo_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this_04;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Il2CppRGCTXData *pIVar5;
  _union_247328 _Var6;
  Map_MapObject_o *obj;
  Map_MapObject_o *pMVar7;
  System_Collections_Generic_List_Enumerator_T__c *local_58;
  Il2CppType *pIStack_50;
  Map_MapObject_o *local_48;
  undefined1 local_40 [16];
  Map_MapObject_o *local_30;
  
  if (DAT_057043f5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_Map_MapO);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_List_MapObject);
    DAT_057043f5 = '\x01';
  }
  local_58 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_48 = (Map_MapObject_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._meshOutlines
  ;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    collection = System_Collections_Generic_Dictionary<object__object>__get_Keys
                           (pSVar1,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_Map_MapO);
    __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_MapObject);
    System_Collections_Generic_List<object>___ctor
              (__this_04,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_Map_MapObject);
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_04,MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato)
      ;
      pIVar5 = (Il2CppRGCTXData *)local_40._0_8_;
      _Var6 = (_union_247328)local_40._8_8_;
      while( true ) {
        obj = local_30;
        __this_00.fields._8_8_ = _Var6.genericMethod;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pIVar5;
        __this_00.fields._current = (Il2CppObject *)obj;
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff88);
        if ((char)bVar4 == '\0') break;
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pMVar7 = obj;
        bVar4 = System_Collections_Generic_HashSet<object>__Contains
                          (pSVar3,(Il2CppObject *)obj,MethodInfo_Boolean_Contains);
        local_30 = pMVar7;
        if ((char)bVar4 == '\0') {
          MapEditor_OutlineGizmo__DestroyOutline(__this,obj,method_00);
          local_30 = pMVar7;
        }
      }
      __this_01.fields._8_8_ = _Var6.genericMethod;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pIVar5;
      __this_01.fields._current = (Il2CppObject *)obj;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
      pGVar2 = (__this->fields)._gameManager;
      if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
         pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet<object>__GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_58,pSVar3,
                   MethodInfo_HashSet_1_T__Enumerator_Map_MapObject__GetEnumer);
        while( true ) {
          __this_02.fields._8_8_ = _Var6.genericMethod;
          __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar5;
          __this_02.fields._current = (Il2CppObject *)obj;
          bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185890 *)&local_58);
          pMVar7 = local_48;
          if ((char)bVar4 == '\0') {
            __this_03.fields._8_8_ = _Var6.genericMethod;
            __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pIVar5;
            __this_03.fields._current = (Il2CppObject *)obj;
            System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                      (__this_03,(MethodInfo_3185880 *)&local_58);
            return;
          }
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._meshOutlines;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                            (pSVar1,(Il2CppObject *)local_48,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar4 == '\0') {
            MapEditor_OutlineGizmo__CreateOutline(__this,pMVar7,method_01);
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.OutlineGizmo$$CreateOutline
// il2cpp: void MapEditor_OutlineGizmo__CreateOutline (MapEditor_OutlineGizmo_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x40480d0

void MapEditor_OutlineGizmo__CreateOutline
               (MapEditor_OutlineGizmo_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  int32_t *piVar1;
  System_Object_array *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar3;
  uint uVar4;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  Outline_o *pOVar7;
  uint uVar8;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  
  if (DAT_057043f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Outline_AddComponent_Outline);
    il2cpp_init_method_metadata(&MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Outline);
    il2cpp_init_method_metadata(&TypeInfo_List_Outline);
    DAT_057043f6 = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Outline);
  System_Collections_Generic_List<object>___ctor(__this_01,MethodInfo_List_1_Outline);
  if (((obj != (Map_MapObject_o *)0x0) &&
      (pUVar6 = (obj->fields).GameObject, pUVar6 != (UnityEngine_GameObject_o *)0x0)) &&
     (pSVar5 = UnityEngine_GameObject__GetComponentsInChildren<object>(pUVar6,MethodInfo_MeshFilter___GetComponentsInChildren_MeshFilter),
     pSVar5 != (System_Object_array *)0x0)) {
    uVar4 = (uint)pSVar5->max_length;
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (int)uVar4) {
        if ((((UnityEngine_Component_o *)pSVar5->m_Items[0] != (UnityEngine_Component_o *)0x0) &&
            (pUVar6 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pSVar5->m_Items[0],(MethodInfo *)0x0),
            pUVar6 != (UnityEngine_GameObject_o *)0x0)) &&
           (pOVar7 = (Outline_o *)UnityEngine_GameObject__AddComponent<object>(pUVar6,MethodInfo_Outline_AddComponent_Outline),
           pOVar7 != (Outline_o *)0x0)) {
          Outline__set_OutlineMode(pOVar7,5,(MethodInfo *)0x0);
          value_00.fields.b = 0.0;
          value_00.fields.a = 1.0;
          value_00.fields.r = 0.0;
          value_00.fields.g = 1.0;
          Outline__set_OutlineColor(pOVar7,value_00,(MethodInfo *)0x0);
          Outline__set_OutlineWidth(pOVar7,3.0,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        goto LAB_04048328;
      }
    }
    else if (0 < (int)uVar4) {
      uVar8 = 0;
      do {
        while( true ) {
          if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((((UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar8] ==
                (UnityEngine_Component_o *)0x0) ||
              (pUVar6 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar8],
                                   (MethodInfo *)0x0), pUVar6 == (UnityEngine_GameObject_o *)0x0))
             || (pOVar7 = (Outline_o *)
                          UnityEngine_GameObject__AddComponent<object>(pUVar6,MethodInfo_Outline_AddComponent_Outline),
                pOVar7 == (Outline_o *)0x0)) goto LAB_04048328;
          Outline__set_OutlineMode(pOVar7,5,(MethodInfo *)0x0);
          value.fields.b = 0.0;
          value.fields.a = 1.0;
          value.fields.r = 0.0;
          value.fields.g = 1.0;
          Outline__set_OutlineColor(pOVar7,value,(MethodInfo *)0x0);
          Outline__set_OutlineWidth(pOVar7,3.0,(MethodInfo *)0x0);
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar2 = (__this_01->fields)._items;
          if (pSVar2 == (System_Object_array *)0x0) goto LAB_04048328;
          uVar4 = (__this_01->fields)._size;
          if ((uint)pSVar2->max_length <= uVar4) break;
          (__this_01->fields)._size = uVar4 + 1;
          pSVar2->m_Items[(int)uVar4] = (Il2CppObject *)pOVar7;
          il2cpp_runtime_glue(pSVar2->m_Items + (int)uVar4);
          uVar8 = uVar8 + 1;
          uVar4 = (uint)pSVar5->max_length;
          if ((int)uVar4 <= (int)uVar8) goto LAB_040482c3;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_01,(Il2CppObject *)pOVar7,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        uVar8 = uVar8 + 1;
        uVar4 = (uint)pSVar5->max_length;
      } while ((int)uVar8 < (int)uVar4);
    }
LAB_040482c3:
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._meshOutlines;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (__this_00,(Il2CppObject *)obj,(Il2CppObject *)__this_01,MethodInfo_Void_Add);
      return;
    }
  }
LAB_04048328:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.OutlineGizmo$$DestroyOutline
// il2cpp: void MapEditor_OutlineGizmo__DestroyOutline (MapEditor_OutlineGizmo_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x4047f00

void MapEditor_OutlineGizmo__DestroyOutline
               (MapEditor_OutlineGizmo_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar2;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  UnityEngine_Object_o *obj_00;
  UnityEngine_Object_o *pUVar5;
  
  if (DAT_057043f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Outline__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Outline_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Outline__GetEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057043f7 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  obj_00 = (UnityEngine_Object_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._meshOutlines
  ;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_02 = (System_Collections_Generic_List_object__o *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          (pSVar1,(Il2CppObject *)obj,MethodInfo_List_1_Outline__get_Item);
    if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                 __this_02,MethodInfo_List_1_T__Enumerator_Outline__GetEnumerator);
      while( true ) {
        __this_00.fields._8_8_ = pIVar4;
        __this_00.fields._list = pSVar3;
        __this_00.fields._current = (Il2CppObject *)obj_00;
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
        if ((char)bVar2 == '\0') break;
        pUVar5 = obj_00;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy(obj_00,(MethodInfo *)0x0);
        obj_00 = pUVar5;
      }
      __this_01.fields._8_8_ = pIVar4;
      __this_01.fields._list = pSVar3;
      __this_01.fields._current = (Il2CppObject *)obj_00;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._meshOutlines;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Remove
                  (pSVar1,(Il2CppObject *)obj,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.OutlineGizmo$$.ctor
// il2cpp: void MapEditor_OutlineGizmo___ctor (MapEditor_OutlineGizmo_o* __this, const MethodInfo* method);
// 0x4048370

void MapEditor_OutlineGizmo___ctor(MapEditor_OutlineGizmo_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_057043f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Map_MapObject_List_1_Outline);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_MapObject__List_Outline);
    DAT_057043f8 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_MapObject__List_Outline);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_Map_MapObject_List_1_Outline);
  (__this->fields)._meshOutlines =
       (System_Collections_Generic_Dictionary_MapObject__List_Outline___o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._meshOutlines);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


