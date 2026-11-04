// Type: MapEditor.CompositeCommand
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/CompositeCommand.cs
// Prior real C# source: none
// --------------------------------

// MapEditor.CompositeCommand$$.ctor
// il2cpp: void MapEditor_CompositeCommand___ctor (MapEditor_CompositeCommand_o* __this, System_Collections_Generic_List_BaseCommand__o* commands, const MethodInfo* method);
// 0x1821ed500

void MapEditor_CompositeCommand___ctor
               (MapEditor_CompositeCommand_o *__this,System_Collections_Generic_List_BaseCommand__o *commands,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346ffe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseCommand);
    Il2CppMethodInitialized_184346ffe = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (commands == (System_Collections_Generic_List_BaseCommand__o *)0x0) {
    commands = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseCommand);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)commands,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseCommand_ctor);
  }
  if (__this != (MapEditor_CompositeCommand_o *)0x0) {
    (__this->fields)._commands = commands;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._commands,commands);
    return;
  }
  ThrowNullReferenceException();
}


// MapEditor.CompositeCommand$$Execute
// il2cpp: void MapEditor_CompositeCommand__Execute (MapEditor_CompositeCommand_o* __this, const MethodInfo* method);
// 0x1821ed350
// eh: try 0x1821ed3f0..0x1821ed459 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ed3ef: nop 
// asm:   0x1821ed432: mov rdx, qword ptr [rip + 0x1e87e3f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_Dispose
// asm:   0x1821ed439: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821ed43e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ed443: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ed448: test rcx, rcx
// asm:   0x1821ed44b: jne 0x1821ed459
// asm:   0x1821ed459: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void MapEditor_CompositeCommand__Execute(MapEditor_CompositeCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184346fff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_GetEnumerator);
    Il2CppMethodInitialized_184346fff = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._commands;
  if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseCommand_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseCommand_Dispose);
        return;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      (*(local_28.fields._current)->klass->vtable[4].methodPtr)
                (local_28.fields._current,(local_28.fields._current)->klass->vtable[4].method);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// MapEditor.CompositeCommand$$Unexecute
// il2cpp: void MapEditor_CompositeCommand__Unexecute (MapEditor_CompositeCommand_o* __this, const MethodInfo* method);
// 0x1821ed470

void MapEditor_CompositeCommand__Unexecute(MapEditor_CompositeCommand_o *__this,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_BaseCommand__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MapEditor_BaseCommand_c *pMVar2;
  MapEditor_BaseCommand_o *pMVar3;
  
  if (Il2CppMethodInitialized_184347000 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item);
    Il2CppMethodInitialized_184347000 = '\x01';
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
         (pMVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (__this_00,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_BaseCommand_get_Item),
         pMVar3 == (MapEditor_BaseCommand_o *)0x0)) break;
      pMVar2 = pMVar3->klass;
      (*(pMVar2->vtable)._5_Unexecute.methodPtr)
                (pMVar3,(System_Type_o *)(pMVar2->vtable)._5_Unexecute.method,(MethodInfo *)pMVar2);
    }
  }
  ThrowNullReferenceException();
}


