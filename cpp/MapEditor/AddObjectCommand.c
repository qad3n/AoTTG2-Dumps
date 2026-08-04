// Type: MapEditor.AddObjectCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/AddObjectCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/AddObjectCommand.cs
// --------------------------------

// MapEditor.AddObjectCommand$$.ctor
// il2cpp: void MapEditor_AddObjectCommand___ctor (MapEditor_AddObjectCommand_o* __this, System_Collections_Generic_List_MapScriptBaseObject__o* objs, const MethodInfo* method);
// 0x43387f0

void MapEditor_AddObjectCommand___ctor
               (MapEditor_AddObjectCommand_o *__this,
               System_Collections_Generic_List_MapScriptBaseObject__o *objs,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_MapEditorGameManager_o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_01;
  Map_MapScriptBaseObject_array *pMVar4;
  Map_MapScriptObjects_c *pMVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar7;
  int32_t iVar8;
  System_Collections_Generic_List_Enumerator_T__c *__this_07;
  Il2CppClass *pIVar9;
  long *plVar10;
  _union_249689 item;
  GameManagers_MapEditorGameManager_o *__this_08;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_T__o *pSVar12;
  Il2CppRGCTXData *pIVar13;
  _union_249689 _Var14;
  System_Collections_Generic_List_Enumerator_T__c *local_58;
  _union_249689 local_50;
  undefined1 local_48 [16];
  _union_249689 local_38;
  
  if (g_data_057ae0a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae0a0 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar13 = (Il2CppRGCTXData *)0x0;
  _Var14.genericMethod = (Map_MapScriptBaseObject_o *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_07 = (System_Collections_Generic_List_Enumerator_T__c *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
  Map_MapScriptObjects___ctor((Map_MapScriptObjects_o *)__this_07,(MethodInfo *)0x0);
  item = (_union_249689)objs;
  if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)objs,MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
    pSVar12 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    pIVar13 = (Il2CppRGCTXData *)local_48._8_8_;
    item = local_38;
    local_58 = __this_07;
    local_50 = (_union_249689)__this;
    if (__this_07 == (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
      __this_03.fields._index = local_48._8_4_;
      __this_03.fields._version = local_48._12_4_;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
      __this_03.fields._current = local_38.genericMethod;
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
      pSVar12 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
      pIVar13 = (Il2CppRGCTXData *)local_48._8_8_;
      _Var14 = local_38;
      item = local_38;
      if ((char)bVar7 != '\0') goto label_04338a71;
    }
    else {
      while (__this_02.fields._8_8_ = pIVar13, __this_02.fields._list = pSVar12,
            __this_02.fields._current = item.genericMethod,
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88), _Var14 = item,
            (char)bVar7 != '\0') {
        __this_00 = *(GameManagers_MapEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        __this_08 = (GameManagers_MapEditorGameManager_o *)0x0;
        if (__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_04338a8b;
        bVar2 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
        if ((__this_00->klass->_2).naturalAligment < bVar2) goto label_04338ad0;
        if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorGameManager) goto label_04338ad0;
        iVar8 = GameManagers_MapEditorGameManager__GetNextObjectId(__this_00,(MethodInfo *)0x0);
        if (item.genericMethod == (Map_MapScriptBaseObject_o *)0x0) goto label_04338acb;
        *(int32_t *)((long)item.genericMethod + 0x20) = iVar8;
        lVar6 = MethodInfo_Void_Add;
        __this_01 = ((Map_MapScriptObjects_Fields *)&(__this_07->_1).name)->Objects;
        if (__this_01 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
label_04338a67:
          il2cpp_runtime_helper_022b2c90();
          goto label_04338a6c;
        }
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar4 = (__this_01->fields)._items;
        if (pMVar4 == (Map_MapScriptBaseObject_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04338a67;
        }
        uVar3 = (__this_01->fields)._size;
        objs = (System_Collections_Generic_List_MapScriptBaseObject__o *)item;
        if (uVar3 < (uint)pMVar4->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          ((_union_249689 *)(pMVar4->m_Items + (int)uVar3))->genericMethod = (void *)item;
          il2cpp_runtime_helper_022b4080(pMVar4->m_Items + (int)uVar3,item.genericMethod);
          item = _Var14;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,item.genericMethod,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          item = _Var14;
        }
      }
    }
    __this_04.fields._8_8_ = pIVar13;
    __this_04.fields._list = pSVar12;
    __this_04.fields._current = _Var14.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
    goto label_04338a21;
  }
label_04338a6c:
  do {
    il2cpp_runtime_helper_022b2c90();
    objs = (System_Collections_Generic_List_MapScriptBaseObject__o *)item;
    item = _Var14;
label_04338a71:
    __this_08 = *(GameManagers_MapEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_08 == (GameManagers_MapEditorGameManager_o *)0x0) {
label_04338a8b:
      il2cpp_runtime_helper_022b2c90();
    }
    bVar2 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
    _Var14 = item;
    if (((__this_08->klass->_2).naturalAligment < bVar2) ||
       ((__this_08->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorGameManager)) {
label_04338ad0:
      iVar8 = il2cpp_runtime_helper_022b2fd0();
    }
    else {
      iVar8 = GameManagers_MapEditorGameManager__GetNextObjectId(__this_08,(MethodInfo *)0x0);
      objs = (System_Collections_Generic_List_MapScriptBaseObject__o *)item;
      if (item.genericMethod == (Map_MapScriptBaseObject_o *)0x0) {
label_04338acb:
        il2cpp_runtime_helper_022b2c90();
        objs = (System_Collections_Generic_List_MapScriptBaseObject__o *)item;
        goto label_04338ad0;
      }
    }
    *(int32_t *)&((Il2CppObject *)((long)objs + 0x20))->klass = iVar8;
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ != 1) {
label_04338b6b:
      __this_06.fields._8_8_ = pIVar13;
      __this_06.fields._list = pSVar12;
      __this_06.fields._current = _Var14.genericMethod;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
      _Unwind_Resume(auVar11._0_8_);
    }
    plVar10 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar6 = *plVar10;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar13;
    __this_05.fields._list = pSVar12;
    __this_05.fields._current = _Var14.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
    if (lVar6 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar6);
      goto label_04338b6b;
    }
label_04338a21:
    item = local_50;
    if (local_58 != (System_Collections_Generic_List_Enumerator_T__c *)0x0) {
      pMVar5 = (local_58->_1).image;
      pIVar9 = (Il2CppClass *)
               (*(pMVar5->vtable)._8_Serialize.methodPtr)(local_58,(pMVar5->vtable)._8_Serialize.method);
      ((Il2CppObject *)((long)local_50.genericMethod + 0x10))->klass = pIVar9;
      il2cpp_runtime_helper_022b4080((Il2CppObject *)((long)local_50.genericMethod + 0x10),pIVar9);
      return;
    }
  } while( true );
}


// MapEditor.AddObjectCommand$$Execute
// il2cpp: void MapEditor_AddObjectCommand__Execute (MapEditor_AddObjectCommand_o* __this, const MethodInfo* method);
// 0x4338bc0

void MapEditor_AddObjectCommand__Execute(MapEditor_AddObjectCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  Map_MapScriptObjects_o *__this_05;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Map_MapScriptBaseObject_o *scriptObject;
  Map_MapScriptBaseObject_o *pMVar7;
  
  if (g_data_057ae0a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    g_data_057ae0a1 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  scriptObject = (Map_MapScriptBaseObject_o *)0x0;
  __this_05 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_05,(MethodInfo *)0x0);
  if (__this_05 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_05->klass->vtable)._9_Deserialize.methodPtr)
              (__this_05,(__this->fields)._script,(__this_05->klass->vtable)._9_Deserialize.method);
    __this_00 = (__this_05->fields).Objects;
    if (__this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
      while (__this_01.fields._8_8_ = pIVar6, __this_01.fields._list = pSVar5,
            __this_01.fields._current = (Il2CppObject *)scriptObject,
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0')
      {
        pMVar7 = scriptObject;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_MapLoader__LoadObject(scriptObject,1,(MethodInfo *)0x0);
        scriptObject = pMVar7;
      }
      __this_02.fields._8_8_ = pIVar6;
      __this_02.fields._list = pSVar5;
      __this_02.fields._current = (Il2CppObject *)scriptObject;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      return;
    }
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = (Il2CppObject *)scriptObject;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = (Il2CppObject *)scriptObject;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


// MapEditor.AddObjectCommand$$Unexecute
// il2cpp: void MapEditor_AddObjectCommand__Unexecute (MapEditor_AddObjectCommand_o* __this, const MethodInfo* method);
// 0x4338d80

void MapEditor_AddObjectCommand__Unexecute(MapEditor_AddObjectCommand_o *__this,MethodInfo *method)

{
  int32_t id;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  Map_MapScriptObjects_o *__this_05;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057ae0a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    g_data_057ae0a2 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_05 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_05,(MethodInfo *)0x0);
  if (__this_05 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_05->klass->vtable)._9_Deserialize.methodPtr)
              (__this_05,(__this->fields)._script,(__this_05->klass->vtable)._9_Deserialize.method);
    __this_00 = (__this_05->fields).Objects;
    if (__this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
      while( true ) {
        __this_01.fields._8_8_ = pIVar6;
        __this_01.fields._list = pSVar5;
        __this_01.fields._current = pIVar7;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') {
          __this_02.fields._8_8_ = pIVar6;
          __this_02.fields._list = pSVar5;
          __this_02.fields._current = pIVar7;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
          return;
        }
        if (pIVar7 == (Il2CppObject *)0x0) break;
        id = *(int32_t *)&pIVar7[2].klass;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_MapLoader__DeleteObject_3fa6370(id,(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
    }
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


