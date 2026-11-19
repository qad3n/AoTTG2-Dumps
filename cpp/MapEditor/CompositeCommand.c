// Type: MapEditor.CompositeCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/MapEditor/CompositeCommand.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.CompositeCommand$$.ctor
// il2cpp: void MapEditor_CompositeCommand___ctor (MapEditor_CompositeCommand_o* __this, System_Collections_Generic_List_BaseCommand__o* commands, const MethodInfo* method);
// 0x5c8bc60

void MapEditor_CompositeCommand___ctor
               (MapEditor_CompositeCommand_o *__this,System_Collections_Generic_List_BaseCommand__o *commands,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_075479c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseCommand);
    Il2CppMethodInitialized_075479c3 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (commands == (System_Collections_Generic_List_BaseCommand__o *)0x0) {
    commands = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCommand);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)commands,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
  }
  if (__this == (MapEditor_CompositeCommand_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._commands = commands;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._commands);
  return;
}


// MapEditor.CompositeCommand$$Execute
// il2cpp: void MapEditor_CompositeCommand__Execute (MapEditor_CompositeCommand_o* __this, const MethodInfo* method);
// 0x5c8bcf0
// eh: try 0x5c8bd83..0x5c8bdca -> pad 0x5c8bdd3 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8bdeb..0x5c8bdf0 -> pad 0x5c8be0f cleanup
// eh: try 0x5c8be12..0x5c8be1c -> pad 0x5c8be24 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8bd7d: nop dword ptr [rax]
// asm:   0x5c8bdcf: jmp 0x5c8bdd3
// asm:   0x5c8bdd1: jmp 0x5c8bdd3
// asm:   0x5c8bdd3: mov rbx, rax
// asm:   0x5c8bdd6: cmp edx, 1
// asm:   0x5c8bdd9: jne 0x5c8be12
// asm:   0x5c8bddb: mov rdi, rbx
// asm:   0x5c8bdde: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8bde3: mov rbx, qword ptr [rax]
// asm:   0x5c8bde6: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c8bdeb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8bdf0: lea rax, [rip + 0x1601909]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_Dispose
// asm:   0x5c8bdf7: mov rsi, qword ptr [rax]
// asm:   0x5c8bdfa: mov rdi, rsp
// asm:   0x5c8bdfd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c8be02: test rbx, rbx
// asm:   0x5c8be05: je 0x5c8bdbd
// asm:   0x5c8be07: mov rdi, rbx
// asm:   0x5c8be0a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8be0f: mov rbx, rax
// asm:   0x5c8be12: lea rdi, [rsp + 0x18]
// asm:   0x5c8be17: call 0x2fda5f0  ; il2cpp_runtime_helper_02fda5f0()
// asm:   0x5c8be1c: mov rdi, rbx
// asm:   0x5c8be1f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8be24: mov rdi, rax
// asm:   0x5c8be27: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_CompositeCommand__Execute(MapEditor_CompositeCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o SStack_38;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  if (Il2CppMethodInitialized_075479c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_GetEnumerator);
    Il2CppMethodInitialized_075479c4 = '\x01';
  }
  SStack_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_38.fields._index = 0;
  SStack_38.fields._version = 0;
  SStack_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._commands;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_38,__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseCommand_GetEnumerator);
  uStack_20 = 0;
  puStack_18 = (undefined1 *)&SStack_38;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_Dispose);
      return;
    }
    if (SStack_38.fields._current == (Il2CppObject *)0x0) break;
    (*(SStack_38.fields._current)->klass->vtable[4].methodPtr)
              (SStack_38.fields._current,(SStack_38.fields._current)->klass->vtable[4].method);
  }
  ThrowNullReferenceException();
}


// MapEditor.CompositeCommand$$Unexecute
// il2cpp: void MapEditor_CompositeCommand__Unexecute (MapEditor_CompositeCommand_o* __this, const MethodInfo* method);
// 0x5c8be30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8be6f: lea r14, [rip + 0x16077fa]  ; MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item
// asm:   0x5c8be76: nop word ptr cs:[rax + rax]

void MapEditor_CompositeCommand__Unexecute(MapEditor_CompositeCommand_o *__this,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_BaseCommand__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MapEditor_BaseCommand_o *pMVar2;
  
  if (Il2CppMethodInitialized_075479c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item);
    Il2CppMethodInitialized_075479c5 = '\x01';
  }
  pSVar1 = (__this->fields)._commands;
  if (pSVar1 != (System_Collections_Generic_List_BaseCommand__o *)0x0) {
    index = (pSVar1->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._commands;
      if ((__this_00 == (System_Collections_Generic_List_object__o *)0x0) ||
         (pMVar2 = System_Collections_Generic_List_object___get_Item
                             (__this_00,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item),
         pMVar2 == (MapEditor_BaseCommand_o *)0x0)) break;
      (*(pMVar2->klass->vtable)._5_Unexecute.methodPtr)(pMVar2,(pMVar2->klass->vtable)._5_Unexecute.method);
    }
  }
  ThrowNullReferenceException();
}


