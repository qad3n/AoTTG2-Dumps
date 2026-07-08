// Type: MapEditor.AddObjectCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/AddObjectCommand.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Commands/AddObjectCommand.cs  [CHANGED since prior version]
// --------------------------------

// MapEditor.AddObjectCommand$$.ctor
// il2cpp: void MapEditor_AddObjectCommand___ctor (MapEditor_AddObjectCommand_o* __this, System_Collections_Generic_List_MapScriptBaseObject__o* objs, const MethodInfo* method);
// 0x40439b0

void MapEditor_AddObjectCommand___ctor
               (MapEditor_AddObjectCommand_o *__this,
               System_Collections_Generic_List_MapScriptBaseObject__o *objs,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_MapEditorGameManager_o *pGVar4;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  Map_MapScriptBaseObject_array *pMVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  Map_MapScriptObjects_o *__this_04;
  System_String_o *pSVar9;
  System_Collections_Generic_List_T__o *pSVar10;
  Il2CppRGCTXData *pIVar11;
  _union_247328 item;
  _union_247328 _Var12;
  undefined1 local_48 [16];
  _union_247328 local_38;
  
  if (DAT_057043da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptObjects);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057043da = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_04 = (Map_MapScriptObjects_o *)il2cpp_runtime_glue(TypeInfo_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_04,(MethodInfo *)0x0);
  if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)objs,MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
    pSVar10 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    pIVar11 = (Il2CppRGCTXData *)local_48._8_8_;
    item = local_38;
    if (__this_04 == (Map_MapScriptObjects_o *)0x0) {
      __this_02.fields._index = local_48._8_4_;
      __this_02.fields._version = local_48._12_4_;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
      __this_02.fields._current = local_38.genericMethod;
      bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff88);
      if ((char)bVar7 != '\0') {
        pGVar4 = *(GameManagers_MapEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (pGVar4 != (GameManagers_MapEditorGameManager_o *)0x0) {
          bVar2 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
          if ((bVar2 <= (pGVar4->klass->_2).naturalAligment) &&
             ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MapEditorGameManager)) {
            iVar8 = GameManagers_MapEditorGameManager__GetNextObjectId(pGVar4,(MethodInfo *)0x0);
            if (local_38.genericMethod != (Map_MapScriptBaseObject_o *)0x0) {
              *(int32_t *)&((Il2CppObject *)((long)local_38.genericMethod + 0x20))->klass = iVar8;
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_04043c8b:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_04043c90:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
LAB_04043c4b:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_01.fields._8_8_ = pIVar11, __this_01.fields._list = pSVar10,
            __this_01.fields._current = item.genericMethod,
            bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
            local_48._0_8_ = pSVar10, local_48._8_8_ = pIVar11, local_38 = item, (char)bVar7 != '\0'
            ) {
        pGVar4 = *(GameManagers_MapEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (pGVar4 == (GameManagers_MapEditorGameManager_o *)0x0) goto LAB_04043c4b;
        bVar2 = (TypeInfo_MapEditorGameManager->_2).naturalAligment;
        if (((pGVar4->klass->_2).naturalAligment < bVar2) ||
           ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_MapEditorGameManager)) goto LAB_04043c90;
        _Var12 = item;
        iVar8 = GameManagers_MapEditorGameManager__GetNextObjectId(pGVar4,(MethodInfo *)0x0);
        if (item.genericMethod == (Map_MapScriptBaseObject_o *)0x0) goto LAB_04043c8b;
        *(int32_t *)((long)item.genericMethod + 0x20) = iVar8;
        lVar6 = MethodInfo_Void_Add;
        __this_00 = (__this_04->fields).Objects;
        if (__this_00 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar5 = (__this_00->fields)._items;
        if (pMVar5 == (Map_MapScriptBaseObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pMVar5->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          ((_union_247328 *)(pMVar5->m_Items + (int)uVar3))->genericMethod = (void *)item;
          il2cpp_runtime_glue(pMVar5->m_Items + (int)uVar3,item.genericMethod);
          item = _Var12;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,item.genericMethod,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          item = _Var12;
        }
      }
    }
    __this_03.fields._8_8_ = local_48._8_8_;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
    __this_03.fields._current = local_38.genericMethod;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
    if (__this_04 != (Map_MapScriptObjects_o *)0x0) {
      pSVar9 = (System_String_o *)
               (*(__this_04->klass->vtable)._8_Serialize.methodPtr)
                         (__this_04,(__this_04->klass->vtable)._8_Serialize.method);
      (__this->fields)._script = pSVar9;
      il2cpp_runtime_glue(&__this->fields,pSVar9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.AddObjectCommand$$Execute
// il2cpp: void MapEditor_AddObjectCommand__Execute (MapEditor_AddObjectCommand_o* __this, const MethodInfo* method);
// 0x4043d80

void MapEditor_AddObjectCommand__Execute(MapEditor_AddObjectCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  Map_MapScriptObjects_o *__this_03;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Map_MapScriptBaseObject_o *scriptObject;
  Map_MapScriptBaseObject_o *pMVar4;
  
  if (DAT_057043db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptObjects);
    DAT_057043db = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  scriptObject = (Map_MapScriptBaseObject_o *)0x0;
  __this_03 = (Map_MapScriptObjects_o *)il2cpp_runtime_glue(TypeInfo_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_03 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_03->klass->vtable)._9_Deserialize.methodPtr)
              (__this_03,(__this->fields)._script,(__this_03->klass->vtable)._9_Deserialize.method);
    __this_00 = (__this_03->fields).Objects;
    if (__this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
      while( true ) {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._list = pSVar2;
        __this_01.fields._current = (Il2CppObject *)scriptObject;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar1 == '\0') break;
        pMVar4 = scriptObject;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Map_MapLoader__LoadObject(scriptObject,1,(MethodInfo *)0x0);
        scriptObject = pMVar4;
      }
      __this_02.fields._8_8_ = pIVar3;
      __this_02.fields._list = pSVar2;
      __this_02.fields._current = (Il2CppObject *)scriptObject;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.AddObjectCommand$$Unexecute
// il2cpp: void MapEditor_AddObjectCommand__Unexecute (MapEditor_AddObjectCommand_o* __this, const MethodInfo* method);
// 0x4043f40

void MapEditor_AddObjectCommand__Unexecute(MapEditor_AddObjectCommand_o *__this,MethodInfo *method)

{
  int32_t id;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  Map_MapScriptObjects_o *__this_03;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_057043dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptObjects);
    DAT_057043dc = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_03 = (Map_MapScriptObjects_o *)il2cpp_runtime_glue(TypeInfo_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_03 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_03->klass->vtable)._9_Deserialize.methodPtr)
              (__this_03,(__this->fields)._script,(__this_03->klass->vtable)._9_Deserialize.method);
    __this_00 = (__this_03->fields).Objects;
    if (__this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
      while( true ) {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._list = pSVar2;
        __this_01.fields._current = pIVar4;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar1 == '\0') {
          __this_02.fields._8_8_ = pIVar3;
          __this_02.fields._list = pSVar2;
          __this_02.fields._current = pIVar4;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
          return;
        }
        if (pIVar4 == (Il2CppObject *)0x0) break;
        id = *(int32_t *)&pIVar4[2].klass;
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Map_MapLoader__DeleteObject(id,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


