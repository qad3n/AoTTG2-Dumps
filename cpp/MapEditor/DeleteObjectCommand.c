// Type: MapEditor.DeleteObjectCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/DeleteObjectCommand.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/MapEditor/Commands/DeleteObjectCommand.cs  [CHANGED since prior version]
// --------------------------------

// MapEditor.DeleteObjectCommand$$.ctor
// il2cpp: void MapEditor_DeleteObjectCommand___ctor (MapEditor_DeleteObjectCommand_o* __this, System_Collections_Generic_List_MapObject__o* objs, const MethodInfo* method);
// 0x40443a0

void MapEditor_DeleteObjectCommand___ctor
               (MapEditor_DeleteObjectCommand_o *__this,
               System_Collections_Generic_List_MapObject__o *objs,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  Il2CppClass *item;
  Map_MapScriptBaseObject_array *pMVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar4;
  bool_conflict bVar5;
  Map_MapScriptObjects_o *__this_04;
  System_String_o *pSVar6;
  System_Collections_Generic_List_T__o *pSVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (DAT_057043e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptObjects);
    DAT_057043e0 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_04 = (Map_MapScriptObjects_o *)il2cpp_runtime_glue(TypeInfo_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_04,(MethodInfo *)0x0);
  if (objs != (System_Collections_Generic_List_MapObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)objs,MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    pSVar7 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    pIVar9 = local_30;
    if (__this_04 == (Map_MapScriptObjects_o *)0x0) {
      __this_02.fields._index = local_40._8_4_;
      __this_02.fields._version = local_40._12_4_;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      __this_02.fields._current = (Il2CppObject *)local_30;
      bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
      if ((char)bVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_01.fields._8_8_ = pSVar8, __this_01.fields._list = pSVar7,
            __this_01.fields._current = (Il2CppObject *)pIVar9,
            bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
            lVar4 = MethodInfo_Void_Add, local_40._0_8_ = pSVar7, local_40._8_8_ = pSVar8,
            local_30 = pIVar9, (char)bVar5 != '\0') {
        if (pIVar9 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        __this_00 = (__this_04->fields).Objects;
        if (__this_00 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        item = pIVar9[2].data;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar3 = (__this_00->fields)._items;
        if (pMVar3 == (Map_MapScriptBaseObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pMVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pMVar3->m_Items[(int)uVar2] = (Map_MapScriptBaseObject_o *)item;
          il2cpp_runtime_glue(pMVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_03.fields._8_8_ = local_40._8_8_;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    __this_03.fields._current = (Il2CppObject *)local_30;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
    if (__this_04 != (Map_MapScriptObjects_o *)0x0) {
      pSVar6 = (System_String_o *)
               (*(__this_04->klass->vtable)._8_Serialize.methodPtr)
                         (__this_04,(__this_04->klass->vtable)._8_Serialize.method);
      (__this->fields)._script = pSVar6;
      il2cpp_runtime_glue(&__this->fields,pSVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.DeleteObjectCommand$$Execute
// il2cpp: void MapEditor_DeleteObjectCommand__Execute (MapEditor_DeleteObjectCommand_o* __this, const MethodInfo* method);
// 0x4044630

void MapEditor_DeleteObjectCommand__Execute
               (MapEditor_DeleteObjectCommand_o *__this,MethodInfo *method)

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
  
  if (DAT_057043e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptObjects);
    DAT_057043e1 = '\x01';
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


// MapEditor.DeleteObjectCommand$$Unexecute
// il2cpp: void MapEditor_DeleteObjectCommand__Unexecute (MapEditor_DeleteObjectCommand_o* __this, const MethodInfo* method);
// 0x4044800

void MapEditor_DeleteObjectCommand__Unexecute
               (MapEditor_DeleteObjectCommand_o *__this,MethodInfo *method)

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
  
  if (DAT_057043e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapScriptBaseObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapScriptBaseObject__Ge);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptObjects);
    DAT_057043e2 = '\x01';
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


