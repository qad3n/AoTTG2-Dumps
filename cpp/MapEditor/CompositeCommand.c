// Type: MapEditor.CompositeCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/CompositeCommand.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.CompositeCommand$$.ctor
// il2cpp: void MapEditor_CompositeCommand___ctor (MapEditor_CompositeCommand_o* __this, System_Collections_Generic_List_BaseCommand__o* commands, const MethodInfo* method);
// 0x4338f70

void MapEditor_CompositeCommand___ctor
               (MapEditor_CompositeCommand_o *__this,System_Collections_Generic_List_BaseCommand__o *commands,
               MethodInfo *method)

{
  System_Object_array *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *pIVar8;
  
  if (g_data_057ae0a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_MapEditor_BaseCommand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseCommand);
    g_data_057ae0a3 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_object__o *)__this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (commands == (System_Collections_Generic_List_BaseCommand__o *)0x0) {
    commands = (System_Collections_Generic_List_BaseCommand__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseCommand);
    pSVar4 = (System_Collections_Generic_List_object__o *)commands;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)commands,MethodInfo_List_1_MapEditor_BaseCommand);
  }
  if (__this == (MapEditor_CompositeCommand_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae0a4 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCommand_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_MapEditor_BaseCommand_GetEnumerator);
      g_data_057ae0a4 = '\x01';
    }
    pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
    pIVar7 = (Il2CppMethodPointer)0x0;
    pIVar8 = (Il2CppObject *)0x0;
    __this_00 = (pSVar4->fields)._items;
    if (__this_00 != (System_Object_array *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc0,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_MapEditor_BaseCommand_GetEnumerator);
      while( true ) {
        __this_01.fields._8_8_ = pIVar7;
        __this_01.fields._list = pSVar6;
        __this_01.fields._current = pIVar8;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc0);
        if ((char)bVar2 == '\0') {
          __this_02.fields._8_8_ = pIVar7;
          __this_02.fields._list = pSVar6;
          __this_02.fields._current = pIVar8;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
          return;
        }
        if (pIVar8 == (Il2CppObject *)0x0) break;
        (*pIVar8->klass->vtable[4].methodPtr)(pIVar8,pIVar8->klass->vtable[4].method);
      }
      il2cpp_runtime_helper_022b2c90();
    }
    auVar5 = il2cpp_runtime_helper_022b2c90();
    if (auVar5._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar5._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar7;
      __this_03.fields._list = pSVar6;
      __this_03.fields._current = pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_04.fields._8_8_ = pIVar7;
    __this_04.fields._list = pSVar6;
    __this_04.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
    _Unwind_Resume(auVar5._0_8_);
  }
  (__this->fields)._commands = commands;
  il2cpp_runtime_helper_022b4080(&__this->fields,commands);
  return;
}


// MapEditor.CompositeCommand$$Execute
// il2cpp: void MapEditor_CompositeCommand__Execute (MapEditor_CompositeCommand_o* __this, const MethodInfo* method);
// 0x4339000

void MapEditor_CompositeCommand__Execute(MapEditor_CompositeCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057ae0a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCommand_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_MapEditor_BaseCommand_GetEnumerator);
    g_data_057ae0a4 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._commands;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,__this_00,
               MethodInfo_List_1_T_Enumerator_MapEditor_BaseCommand_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = pSVar5;
      __this_01.fields._current = pIVar7;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = pSVar5;
        __this_02.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      (*pIVar7->klass->vtable[4].methodPtr)(pIVar7,pIVar7->klass->vtable[4].method);
    }
    il2cpp_runtime_helper_022b2c90();
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
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
  _Unwind_Resume(auVar4._0_8_);
}


// MapEditor.CompositeCommand$$Unexecute
// il2cpp: void MapEditor_CompositeCommand__Unexecute (MapEditor_CompositeCommand_o* __this, const MethodInfo* method);
// 0x4339150

void MapEditor_CompositeCommand__Unexecute(MapEditor_CompositeCommand_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int index;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (g_data_057ae0a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCommand_get_Item);
    g_data_057ae0a5 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._commands;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    index = (__this_00->fields)._size + -1;
    if (index < 0) {
      return;
    }
    do {
      pIVar1 = System_Collections_Generic_List_object___get_Item(__this_00,index,MethodInfo_BaseCommand_get_Item);
      if (pIVar1 == (Il2CppObject *)0x0) break;
      (*pIVar1->klass->vtable[5].methodPtr)(pIVar1,pIVar1->klass->vtable[5].method);
      index = index + -1;
      if (index < 0) {
        return;
      }
      __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._commands;
    } while (__this_00 != (System_Collections_Generic_List_object__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


