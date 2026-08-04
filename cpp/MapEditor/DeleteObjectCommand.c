// Type: MapEditor.DeleteObjectCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/DeleteObjectCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/DeleteObjectCommand.cs
// --------------------------------

// MapEditor.DeleteObjectCommand$$.ctor
// il2cpp: void MapEditor_DeleteObjectCommand___ctor (MapEditor_DeleteObjectCommand_o* __this, System_Collections_Generic_List_MapObject__o* objs, const MethodInfo* method);
// 0x43391e0

void MapEditor_DeleteObjectCommand___ctor
               (MapEditor_DeleteObjectCommand_o *__this,System_Collections_Generic_List_MapObject__o *objs,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  Il2CppClass *item;
  Map_MapScriptBaseObject_array *pMVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar5;
  Map_MapScriptObjects_o *__this_06;
  System_String_o *pSVar6;
  long *plVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_T__o *pSVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (g_data_057ae0a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    g_data_057ae0a6 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar11 = (Il2CppType *)0x0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_06 = (Map_MapScriptObjects_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_06,(MethodInfo *)0x0);
  if (objs != (System_Collections_Generic_List_MapObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)objs,MethodInfo_List_1_T_Enumerator_Map_MapObject_GetEnumerator);
    pSVar9 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    pIVar11 = local_30;
    if (__this_06 == (Map_MapScriptObjects_o *)0x0) {
      __this_02.fields._index = local_40._8_4_;
      __this_02.fields._version = local_40._12_4_;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      __this_02.fields._current = (Il2CppObject *)local_30;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      pSVar9 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
      pIVar11 = local_30;
      if ((char)bVar5 != '\0') goto label_043393c1;
    }
    else {
      while (__this_01.fields._8_8_ = pSVar10, __this_01.fields._list = pSVar9,
            __this_01.fields._current = (Il2CppObject *)pIVar11,
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), lVar4 = MethodInfo_Void_Add
            , (char)bVar5 != '\0') {
        if (pIVar11 == (Il2CppType *)0x0) {
label_043393b7:
          il2cpp_runtime_helper_022b2c90();
          goto label_043393bc;
        }
        __this_00 = (__this_06->fields).Objects;
        if (__this_00 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
label_043393b2:
          il2cpp_runtime_helper_022b2c90();
          goto label_043393b7;
        }
        item = pIVar11[2].data;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar3 = (__this_00->fields)._items;
        if (pMVar3 == (Map_MapScriptBaseObject_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_043393b2;
        }
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pMVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)item;
          il2cpp_runtime_helper_022b4080(pMVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_03.fields._8_8_ = pSVar10;
    __this_03.fields._list = pSVar9;
    __this_03.fields._current = (Il2CppObject *)pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    goto label_04339373;
  }
label_043393bc:
  do {
    il2cpp_runtime_helper_022b2c90();
label_043393c1:
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
label_04339433:
      __this_05.fields._8_8_ = pSVar10;
      __this_05.fields._list = pSVar9;
      __this_05.fields._current = (Il2CppObject *)pIVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar8._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pSVar10;
    __this_04.fields._list = pSVar9;
    __this_04.fields._current = (Il2CppObject *)pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_04339433;
    }
label_04339373:
    if (__this_06 != (Map_MapScriptObjects_o *)0x0) {
      pSVar6 = (System_String_o *)
               (*(__this_06->klass->vtable)._8_Serialize.methodPtr)
                         (__this_06,(__this_06->klass->vtable)._8_Serialize.method);
      (__this->fields)._script = pSVar6;
      il2cpp_runtime_helper_022b4080(&__this->fields,pSVar6);
      return;
    }
  } while( true );
}


// MapEditor.DeleteObjectCommand$$Execute
// il2cpp: void MapEditor_DeleteObjectCommand__Execute (MapEditor_DeleteObjectCommand_o* __this, const MethodInfo* method);
// 0x4339470

void MapEditor_DeleteObjectCommand__Execute(MapEditor_DeleteObjectCommand_o *__this,MethodInfo *method)

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
  
  if (g_data_057ae0a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    g_data_057ae0a7 = '\x01';
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


// MapEditor.DeleteObjectCommand$$Unexecute
// il2cpp: void MapEditor_DeleteObjectCommand__Unexecute (MapEditor_DeleteObjectCommand_o* __this, const MethodInfo* method);
// 0x4339640

void MapEditor_DeleteObjectCommand__Unexecute(MapEditor_DeleteObjectCommand_o *__this,MethodInfo *method)

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
  
  if (g_data_057ae0a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapScriptBaseObject_GetEnumerato);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptObjects);
    g_data_057ae0a8 = '\x01';
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


