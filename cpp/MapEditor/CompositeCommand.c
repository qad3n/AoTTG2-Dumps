// Type: MapEditor.CompositeCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/MapEditor/CompositeCommand.cs
// Prior source: NEW in this update
// --------------------------------

// MapEditor.CompositeCommand$$.ctor
// il2cpp: void MapEditor_CompositeCommand___ctor (MapEditor_CompositeCommand_o* __this, System_Collections_Generic_List_BaseCommand__o* commands, const MethodInfo* method);
// 0x4044130

void MapEditor_CompositeCommand___ctor
               (MapEditor_CompositeCommand_o *__this,
               System_Collections_Generic_List_BaseCommand__o *commands,MethodInfo *method)

{
  if (DAT_057043dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_MapEditor_BaseCommand);
    il2cpp_init_method_metadata(&TypeInfo_List_BaseCommand);
    DAT_057043dd = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (commands == (System_Collections_Generic_List_BaseCommand__o *)0x0) {
    commands = (System_Collections_Generic_List_BaseCommand__o *)il2cpp_runtime_glue(TypeInfo_List_BaseCommand);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)commands,MethodInfo_List_1_MapEditor_BaseCommand);
  }
  if (__this != (MapEditor_CompositeCommand_o *)0x0) {
    (__this->fields)._commands = commands;
    il2cpp_runtime_glue(&__this->fields,commands);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.CompositeCommand$$Execute
// il2cpp: void MapEditor_CompositeCommand__Execute (MapEditor_CompositeCommand_o* __this, const MethodInfo* method);
// 0x40441c0

void MapEditor_CompositeCommand__Execute(MapEditor_CompositeCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_057043de == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseCommand_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_MapEditor_BaseCommand__GetE);
    DAT_057043de = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._commands;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,__this_00
               ,MethodInfo_List_1_T__Enumerator_MapEditor_BaseCommand__GetE);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = pIVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffd8);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar3;
        __this_02.fields._list = pSVar2;
        __this_02.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar4 == (Il2CppObject *)0x0) break;
      (*pIVar4->klass->vtable[4].methodPtr)(pIVar4,pIVar4->klass->vtable[4].method);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// MapEditor.CompositeCommand$$Unexecute
// il2cpp: void MapEditor_CompositeCommand__Unexecute (MapEditor_CompositeCommand_o* __this, const MethodInfo* method);
// 0x4044310

void MapEditor_CompositeCommand__Unexecute(MapEditor_CompositeCommand_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int index;
  System_Collections_Generic_List_object__o *__this_00;
  
  if (DAT_057043df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_BaseCommand_get_Item);
    DAT_057043df = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._commands;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    index = (__this_00->fields)._size + -1;
    if (index < 0) {
      return;
    }
    do {
      pIVar1 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_BaseCommand_get_Item);
      if (pIVar1 == (Il2CppObject *)0x0) break;
      (*pIVar1->klass->vtable[5].methodPtr)(pIVar1,pIVar1->klass->vtable[5].method);
      index = index + -1;
      if (index < 0) {
        return;
      }
      __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._commands;
    } while (__this_00 != (System_Collections_Generic_List_object__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


