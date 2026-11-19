// Type: MapEditor.DeleteObjectCommand
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/MapEditor/DeleteObjectCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/DeleteObjectCommand.cs
// --------------------------------

// MapEditor.DeleteObjectCommand.<>c$$.cctor
// il2cpp: void MapEditor_DeleteObjectCommand___c___cctor (const MethodInfo* method);
// 0x5c8e0d0

void MapEditor_DeleteObjectCommand___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075479cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_DeleteObjectCommand_c);
    Il2CppMethodInitialized_075479cb = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9 = (MapEditor_DeleteObjectCommand___c_o *)__this
  ;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9);
  return;
}


// MapEditor.DeleteObjectCommand.<>c$$.ctor
// il2cpp: void MapEditor_DeleteObjectCommand___c___ctor (MapEditor_DeleteObjectCommand___c_o* __this, const MethodInfo* method);
// 0x5c8e140

void MapEditor_DeleteObjectCommand___c___ctor(MapEditor_DeleteObjectCommand___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.DeleteObjectCommand.<>c$$<.ctor>b__4_0
// il2cpp: int32_t MapEditor_DeleteObjectCommand___c____ctor_b__4_0 (MapEditor_DeleteObjectCommand___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x5c8e150

int32_t MapEditor_DeleteObjectCommand___c____ctor_b__4_0
                  (MapEditor_DeleteObjectCommand___c_o *__this,Map_MapObject_o *o,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o == (Map_MapObject_o *)0x0) ||
     (pMVar1 = (o->fields).ScriptObject, pMVar1 == (Map_MapScriptBaseObject_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pMVar1->fields).Id;
}


// MapEditor.DeleteObjectCommand.<>c$$<.ctor>b__4_1
// il2cpp: bool MapEditor_DeleteObjectCommand___c____ctor_b__4_1 (MapEditor_DeleteObjectCommand___c_o* __this, int32_t id, const MethodInfo* method);
// 0x5c8e170

bool MapEditor_DeleteObjectCommand___c____ctor_b__4_1
               (MapEditor_DeleteObjectCommand___c_o *__this,int32_t id,MethodInfo *method)

{
  return 0 < id;
}


// MapEditor.DeleteObjectCommand$$.ctor
// il2cpp: void MapEditor_DeleteObjectCommand___ctor (MapEditor_DeleteObjectCommand_o* __this, System_Collections_Generic_List_MapObject__o* objs, bool includeDescendants, const MethodInfo* method);
// 0x5c8c760
// eh: try 0x5c8cce4..0x5c8cdb8 -> pad 0x5c8cdcd (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8cdeb..0x5c8cdf0 -> pad 0x5c8d694 cleanup
// eh: try 0x5c8ce74..0x5c8d694 -> pad 0x5c8d745 (+50 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8d697..0x5c8d6bc -> pad 0x5c8d7a2 (+1 call sites) catch (...) [compiler noexcept guard]
// eh: try 0x5c8d70b..0x5c8d710 -> pad 0x5c8d72f cleanup
// eh: try 0x5c8d732..0x5c8d73c -> pad 0x5c8d7a2 catch (...) [compiler noexcept guard]
// eh: try 0x5c8d763..0x5c8d768 -> pad 0x5c8d78d cleanup
// eh: try 0x5c8d790..0x5c8d79d -> pad 0x5c8d7a2 catch (...) [compiler noexcept guard]
// asm: 150 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8c9f2: jmp 0x5c8ca0d
// asm:   0x5c8caa2: jmp 0x5c8cabd
// asm:   0x5c8ccd4: nop word ptr cs:[rax + rax]
// asm:   0x5c8cdbd: jmp 0x5c8cdcf
// asm:   0x5c8cdbf: jmp 0x5c8cdcf
// asm:   0x5c8cdc1: jmp 0x5c8cdcf
// asm:   0x5c8cdc3: jmp 0x5c8cdcf
// asm:   0x5c8cdc5: jmp 0x5c8cdcf
// asm:   0x5c8cdc7: jmp 0x5c8cdcf
// asm:   0x5c8cdc9: jmp 0x5c8cdcf
// asm:   0x5c8cdcb: jmp 0x5c8cdcf
// asm:   0x5c8cdcd: jmp 0x5c8cdcf
// asm:   0x5c8cdcf: cmp edx, 1
// asm:   0x5c8cdd2: jne 0x5c8d694
// asm:   0x5c8cdd8: mov rdi, rax
// asm:   0x5c8cddb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8cde0: mov rbp, qword ptr [rax]
// asm:   0x5c8cde3: mov qword ptr [rsp + 0x98], rbp
// asm:   0x5c8cdeb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8cdf0: lea rax, [rip + 0x16013e9]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5c8cdf7: mov rsi, qword ptr [rax]
// asm:   0x5c8cdfa: mov rdi, r13
// asm:   0x5c8cdfd: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5c8ce02: test rbp, rbp
// asm:   0x5c8ce05: je 0x5c8cbe2
// asm:   0x5c8ce0b: mov rdi, rbp
// asm:   0x5c8ce0e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8d261: test ebx, ebx
// asm:   0x5c8d263: je 0x5c8ce70
// asm:   0x5c8d269: jmp 0x5c8d646
// asm:   0x5c8d2aa: jmp 0x5c8d2c8
// asm:   0x5c8d2ac: jmp 0x5c8d2db
// asm:   0x5c8d2ae: jmp 0x5c8d2c8
// asm:   0x5c8d2b0: jmp 0x5c8d2c8
// asm:   0x5c8d2b2: jmp 0x5c8d2c8
// asm:   0x5c8d2b4: jmp 0x5c8d2c8
// asm:   0x5c8d2b6: jmp 0x5c8d2c8
// asm:   0x5c8d2b8: jmp 0x5c8d2c8
// asm:   0x5c8d2ba: jmp 0x5c8d2c8
// asm:   0x5c8d2bc: jmp 0x5c8d2db
// asm:   0x5c8d2be: jmp 0x5c8d2c8
// asm:   0x5c8d2c0: jmp 0x5c8d2c8
// asm:   0x5c8d2c2: jmp 0x5c8d2db
// asm:   0x5c8d2c4: jmp 0x5c8d2c8
// asm:   0x5c8d2c6: jmp 0x5c8d2db
// asm:   0x5c8d2c8: mov rbx, rdx
// asm:   0x5c8d2cb: mov r15, qword ptr [rsp + 0x30]
// asm:   0x5c8d2d0: mov rbp, r13
// asm:   0x5c8d2d3: jmp 0x5c8d2de
// asm:   0x5c8d2d5: jmp 0x5c8d2db
// asm:   0x5c8d2d7: jmp 0x5c8d2db
// asm:   0x5c8d2d9: jmp 0x5c8d2db
// asm:   0x5c8d2db: mov rbx, rdx
// asm:   0x5c8d2de: cmp ebx, 1
// asm:   0x5c8d2e1: jne 0x5c8d6af
// asm:   0x5c8d2e7: mov rdi, rax
// asm:   0x5c8d2ea: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8d2ef: mov r14, qword ptr [rax]
// asm:   0x5c8d2f2: mov qword ptr [rsp + 0x58], r14
// asm:   0x5c8d2f7: xor ebx, ebx
// asm:   0x5c8d2f9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8d2fe: jmp 0x5c8d238
// asm:   0x5c8d43e: nop 
// asm:   0x5c8d5df: nop 
// asm:   0x5c8d646: lea rax, [rip + 0x1600b93]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5c8d64d: mov rsi, qword ptr [rax]
// asm:   0x5c8d650: lea rdi, [rsp + 0x40]
// asm:   0x5c8d655: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5c8d65a: jmp 0x5c8d5ba
// asm:   0x5c8d678: mov rdi, r14
// asm:   0x5c8d67b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8d694: mov rbp, rax
// asm:   0x5c8d697: lea rdi, [rsp + 0x98]
// asm:   0x5c8d69f: call 0x2fda650  ; il2cpp_runtime_helper_02fda650()
// asm:   0x5c8d6a4: mov rdi, rbp
// asm:   0x5c8d6a7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8d6ac: mov rbx, rdx
// asm:   0x5c8d6af: mov rbp, rax
// asm:   0x5c8d6b2: lea rdi, [rsp + 0x58]
// asm:   0x5c8d6b7: call 0x2fda680  ; il2cpp_runtime_helper_02fda680()
// asm:   0x5c8d6bc: jmp 0x5c8d74b
// asm:   0x5c8d6c1: jmp 0x5c8d6f3
// asm:   0x5c8d6c3: jmp 0x5c8d6f3
// asm:   0x5c8d6c5: jmp 0x5c8d6f3
// asm:   0x5c8d6c7: jmp 0x5c8d6f3
// asm:   0x5c8d6c9: jmp 0x5c8d6f3
// asm:   0x5c8d6cb: jmp 0x5c8d745
// asm:   0x5c8d6cd: jmp 0x5c8d6f3
// asm:   0x5c8d6cf: jmp 0x5c8d6f3
// asm:   0x5c8d6d1: jmp 0x5c8d6f3
// asm:   0x5c8d6d3: jmp 0x5c8d6f3
// asm:   0x5c8d6d5: jmp 0x5c8d6f3
// asm:   0x5c8d6d7: jmp 0x5c8d6f3
// asm:   0x5c8d6d9: jmp 0x5c8d745
// asm:   0x5c8d6db: jmp 0x5c8d6f3
// asm:   0x5c8d6dd: jmp 0x5c8d6f3
// asm:   0x5c8d6df: jmp 0x5c8d745
// asm:   0x5c8d6e1: jmp 0x5c8d745
// asm:   0x5c8d6e3: jmp 0x5c8d745
// asm:   0x5c8d6e5: jmp 0x5c8d745
// asm:   0x5c8d6e7: jmp 0x5c8d745
// asm:   0x5c8d6e9: jmp 0x5c8d745
// asm:   0x5c8d6eb: jmp 0x5c8d6f3
// asm:   0x5c8d6ed: jmp 0x5c8d6f3
// asm:   0x5c8d6ef: jmp 0x5c8d6f3
// asm:   0x5c8d6f1: jmp 0x5c8d6f3
// asm:   0x5c8d6f3: mov rbp, rax
// asm:   0x5c8d6f6: cmp edx, 1
// asm:   0x5c8d6f9: jne 0x5c8d732
// asm:   0x5c8d6fb: mov rdi, rbp
// asm:   0x5c8d6fe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8d703: mov rbx, qword ptr [rax]
// asm:   0x5c8d706: mov qword ptr [rsp + 0x58], rbx
// asm:   0x5c8d70b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8d710: lea rax, [rip + 0x1600ae1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x5c8d717: mov rsi, qword ptr [rax]
// asm:   0x5c8d71a: lea rdi, [rsp + 0x70]
// asm:   0x5c8d71f: call 0x4d3b490  ; System_Collections_Generic_List_Enumerator_int___Dispose()
// asm:   0x5c8d724: test rbx, rbx
// asm:   0x5c8d727: je 0x5c8d57e
// asm:   0x5c8d72d: jmp 0x5c8d785
// asm:   0x5c8d72f: mov rbp, rax
// asm:   0x5c8d732: lea rdi, [rsp + 0x58]
// asm:   0x5c8d737: call 0x2fda6e0  ; il2cpp_runtime_helper_02fda6e0()
// asm:   0x5c8d73c: jmp 0x5c8d6a4
// asm:   0x5c8d741: jmp 0x5c8d745
// asm:   0x5c8d743: jmp 0x5c8d745
// asm:   0x5c8d745: mov rbx, rdx
// asm:   0x5c8d748: mov rbp, rax
// asm:   0x5c8d74b: cmp ebx, 1
// asm:   0x5c8d74e: jne 0x5c8d790
// asm:   0x5c8d750: mov rdi, rbp
// asm:   0x5c8d753: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8d758: mov rbx, qword ptr [rax]
// asm:   0x5c8d75b: mov qword ptr [rsp + 0x110], rbx
// asm:   0x5c8d763: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8d768: lea rax, [rip + 0x1600a71]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x5c8d76f: mov rsi, qword ptr [rax]
// asm:   0x5c8d772: lea rdi, [rsp + 0x40]
// asm:   0x5c8d777: call 0x4d3aed0  ; System_Collections_Generic_HashSet_Enumerator_int___Dispose()
// asm:   0x5c8d77c: test rbx, rbx
// asm:   0x5c8d77f: je 0x5c8d317
// asm:   0x5c8d785: mov rdi, rbx
// asm:   0x5c8d788: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8d78d: mov rbp, rax
// asm:   0x5c8d790: lea rdi, [rsp + 0x110]
// asm:   0x5c8d798: call 0x2fda6b0  ; il2cpp_runtime_helper_02fda6b0()
// asm:   0x5c8d79d: jmp 0x5c8d6a4
// asm:   0x5c8d7a2: mov rdi, rax
// asm:   0x5c8d7a5: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_DeleteObjectCommand___ctor
               (MapEditor_DeleteObjectCommand_o *__this,System_Collections_Generic_List_MapObject__o *objs,
               bool includeDescendants,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_int__o *pSVar5;
  System_Collections_Generic_List_object__o *__this_01;
  Map_MapScriptBaseObject_o *item;
  System_Object_array *pSVar6;
  MapEditor_DeleteObjectCommand_OrphanState_o value;
  MethodInfo *pMVar7;
  MapEditor_DeleteObjectCommand_o *pMVar8;
  int32_t key;
  bool bVar9;
  int32_t iVar10;
  System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState__o *pSVar11;
  System_Func_MapObject__int__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  MapEditor_DeleteObjectCommand___c_StaticFields *pMVar12;
  System_Func_int__bool__o *__this_03;
  System_Collections_Generic_IEnumerable_TSource__o *collection;
  System_Collections_Generic_HashSet_int__o *__this_04;
  System_Collections_Generic_Queue_int__o *__this_05;
  System_Collections_Generic_HashSet_int__o *pSVar13;
  UnityEngine_Transform_o *__this_06;
  System_Collections_Generic_List_int__o *__this_07;
  Map_MapScriptObjects_o *__this_08;
  Map_MapObject_o *pMVar14;
  System_String_o *pSVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o b;
  undefined1 local_158 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_150;
  Il2CppObject *local_148;
  undefined1 local_140 [16];
  Il2CppObject *local_130;
  undefined1 local_128 [8];
  undefined1 *puStack_120;
  Il2CppObject *local_118;
  MapEditor_DeleteObjectCommand_o *local_108;
  undefined1 local_100 [12];
  float fStack_f4;
  Il2CppObject *local_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined1 local_c8 [8];
  undefined1 *puStack_c0;
  Il2CppObject *local_b8;
  undefined1 local_a8 [16];
  System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState__o **local_90;
  undefined8 local_88;
  undefined1 *local_80;
  UnityEngine_Quaternion_Fields local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (Il2CppMethodInitialized_075479c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState_set_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_71950c0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_Dequeue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_ctor_719bf20);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Queue_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MapEditor_DeleteObjectCommand_c_ctor_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MapEditor_DeleteObjectCommand_c_ctor_b__4_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_DeleteObjectCommand_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075479c8 = '\x01';
  }
  local_158 = (undefined1  [8])0x0;
  pSStack_150 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_148 = (Il2CppObject *)0x0;
  local_c8 = (undefined1  [8])0x0;
  puStack_c0 = (undefined1 *)0x0;
  local_b8 = (Il2CppObject *)0x0;
  local_78 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  local_128 = (undefined1  [8])0x0;
  puStack_120 = (undefined1 *)0x0;
  local_118 = (Il2CppObject *)0x0;
  pSVar11 = il2cpp_codegen_object_new
                      ((Il2CppClass *)
                       TypeInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState);
  System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState____ctor
            (pSVar11,(MethodInfo_4A26190 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState_ctor
            );
  local_90 = &(__this->fields)._orphans;
  (__this->fields)._orphans = pSVar11;
  Il2CppCodeGenWriteBarrier(local_90);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_MapEditor_DeleteObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c);
    pMVar12 = TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields;
    __this_02 = pMVar12->__9__4_0;
  }
  else {
    pMVar12 = TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields;
    __this_02 = pMVar12->__9__4_0;
  }
  if (__this_02 == (System_Func_MapObject__int__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c);
      pMVar12 = TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields;
    }
    pIVar3 = (Il2CppObject *)pMVar12->__9;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
    System_Func_object__int____ctor
              ((System_Func_object__int__o *)__this_02,pIVar3,
               (intptr_t)MethodInfo_MapEditor_DeleteObjectCommand_c_ctor_b__4_0,(MethodInfo_4F198F0 *)0x0);
    pMVar12 = TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields;
    pMVar12->__9__4_0 = __this_02;
    Il2CppCodeGenWriteBarrier(&pMVar12->__9__4_0);
  }
  source = System_Linq_Enumerable__Select_object__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)objs,
                      (System_Func_TSource__TResult__o *)__this_02,
                      (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
  if ((TypeInfo_MapEditor_DeleteObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c);
    pMVar12 = TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields;
    __this_03 = pMVar12->__9__4_1;
  }
  else {
    pMVar12 = TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields;
    __this_03 = pMVar12->__9__4_1;
  }
  if (__this_03 == (System_Func_int__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c);
      pMVar12 = TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields;
    }
    pIVar3 = (Il2CppObject *)pMVar12->__9;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
    System_Func_int__bool____ctor
              (__this_03,pIVar3,(intptr_t)MethodInfo_MapEditor_DeleteObjectCommand_c_ctor_b__4_1,
               (MethodInfo_4F12D00 *)0x0);
    pMVar12 = TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields;
    pMVar12->__9__4_1 = __this_03;
    Il2CppCodeGenWriteBarrier(&pMVar12->__9__4_1);
  }
  collection = System_Linq_Enumerable__Where_int_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__bool__o *)__this_03,
                          (MethodInfo_35022A0 *)MethodInfo_System_Linq_Enumerable_Where_int);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor_4fa7660
            (__this_04,(System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_4FA7660 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_71912f0);
  local_108 = __this;
  if (includeDescendants) {
    __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_int);
    System_Collections_Generic_Queue_int____ctor_3e72360
              (__this_05,(System_Collections_Generic_IEnumerable_T__o *)__this_04,
               (MethodInfo_3E72360 *)MethodInfo_System_Collections_Generic_Queue_int_ctor_719bf20);
    if (__this_05 == (System_Collections_Generic_Queue_int__o *)0x0) goto label_05c8d65f;
    if (0 < (__this_05->fields)._size) {
      do {
        iVar10 = System_Collections_Generic_Queue_int___Dequeue
                           (__this_05,
                            (MethodInfo_3E72930 *)MethodInfo_System_Collections_Generic_Queue_int_Dequeue);
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToChildren;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05c8d65f;
        bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                          (pSVar4,iVar10,
                           (MethodInfo_4A0F950 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
        if (bVar9) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToChildren;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05c8d65f;
          pSVar13 = (System_Collections_Generic_HashSet_int__o *)
                    System_Collections_Generic_Dictionary_int__object___get_Item
                              (pSVar4,iVar10,
                               (MethodInfo_4A0F690 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
          if (pSVar13 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05c8d65f;
          System_Collections_Generic_HashSet_int___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_100,pSVar13,
                     (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
          local_148 = local_f0;
          local_158 = (undefined1  [8])CONCAT44(local_100._4_4_,local_100._0_4_);
          pSStack_150 = stack0xffffffffffffff08;
          local_100._0_4_ = 0;
          local_100._4_4_ = 0;
          unique0x10001c2a = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_158;
          if (__this_04 == (System_Collections_Generic_HashSet_int__o *)0x0) {
            while( true ) {
              bVar9 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_158,
                                 (MethodInfo_4C3AEE0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
              if (!bVar9) break;
              iVar10 = (int32_t)local_148;
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05c8cdb3;
              bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                (pSVar4,iVar10,
                                 (MethodInfo_4A0F950 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
              if (bVar9) {
                ThrowNullReferenceException();
              }
            }
          }
          else {
            while( true ) {
              bVar9 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_158,
                                 (MethodInfo_4C3AEE0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext);
              if (!bVar9) break;
              iVar10 = (int32_t)local_148;
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
label_05c8cdb3:
                ThrowNullReferenceException();
              }
              bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                (pSVar4,iVar10,
                                 (MethodInfo_4A0F950 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
              if (bVar9) {
                bVar9 = System_Collections_Generic_HashSet_int___Add
                                  (__this_04,iVar10,
                                   (MethodInfo_4FA8AF0 *)MethodInfo_System_Collections_Generic_HashSet_int_Add
                                  );
                if (bVar9) {
                  System_Collections_Generic_Queue_int___Enqueue
                            (__this_05,iVar10,
                             (MethodInfo_3E72790 *)MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
                }
              }
            }
          }
          System_Collections_Generic_HashSet_Enumerator_int___Dispose
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_158,
                     (MethodInfo_4C3AED0 *)
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
        }
      } while (0 < (__this_05->fields)._size);
    }
  }
  else {
    if (__this_04 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05c8d65f;
    System_Collections_Generic_HashSet_int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_100,__this_04,
               (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    local_148 = local_f0;
    local_158 = (undefined1  [8])CONCAT44(local_100._4_4_,local_100._0_4_);
    pSStack_150 = (System_Collections_Generic_HashSet_Enumerator_T__o *)CONCAT44(fStack_f4,local_100._8_4_);
    local_88 = 0;
    local_80 = local_158;
    while (bVar9 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_158,
                              (MethodInfo_4C3AEE0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext), bVar9) {
      iVar10 = (int32_t)local_148;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                        (pSVar4,iVar10,
                         (MethodInfo_4A0F950 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
      if (bVar9) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_Map_MapLoader->static_fields->IdToChildren;
        if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar13 = (System_Collections_Generic_HashSet_int__o *)
                  System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar4,iVar10,
                             (MethodInfo_4A0F690 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
        if (pSVar13 == (System_Collections_Generic_HashSet_int__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_int___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_140,pSVar13,
                   (MethodInfo_4FA8440 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
        local_b8 = local_130;
        local_c8 = (undefined1  [8])local_140._0_8_;
        puStack_c0 = (undefined1 *)local_140._8_8_;
        local_140._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_140._8_8_ = local_c8;
        while (bVar9 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                                 ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8,
                                  (MethodInfo_4C3AEE0 *)
                                  MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
              bVar9) {
          key = (int32_t)local_b8;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar4,key,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if ((bVar9) &&
             (bVar9 = System_Collections_Generic_HashSet_int___Contains
                                (__this_04,key,
                                 (MethodInfo_4FA7E00 *)
                                 MethodInfo_System_Collections_Generic_HashSet_int_Contains), !bVar9)) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pMVar14 = System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar4,key,
                                 (MethodInfo_4A0F690 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            if (pMVar14 == (Map_MapObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_00 = (pMVar14->fields).GameObject;
            if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_06 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            if (__this_06 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar11 = *local_90;
            UVar16 = UnityEngine_Transform__get_localPosition(__this_06,(MethodInfo *)0x0);
            local_cc = UVar16.fields.z;
            local_a8._8_4_ = extraout_XMM0_Dc;
            local_a8._0_8_ = UVar16.fields._0_8_;
            local_a8._12_4_ = extraout_XMM0_Dd;
            local_78 = (UnityEngine_Quaternion_Fields)
                       UnityEngine_Transform__get_localRotation(__this_06,(MethodInfo *)0x0);
            UVar16 = UnityEngine_Quaternion__Internal_ToEulerRad
                               ((UnityEngine_Quaternion_o *)&local_78,(MethodInfo *)0x0);
            euler.fields.z = UVar16.fields.z * 57.29578;
            euler.fields.y = UVar16.fields.y * 57.29578;
            euler.fields.x = UVar16.fields.x * 57.29578;
            UVar16 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
            local_d0 = UVar16.fields.z;
            local_58._8_4_ = extraout_XMM0_Dc_00;
            local_58._0_8_ = UVar16.fields._0_8_;
            local_58._12_4_ = extraout_XMM0_Dd_00;
            UVar16 = UnityEngine_Transform__get_localScale(__this_06,(MethodInfo *)0x0);
            local_d4 = UVar16.fields.z;
            local_48._8_4_ = extraout_XMM0_Dc_01;
            local_48._0_8_ = UVar16.fields._0_8_;
            local_48._12_4_ = extraout_XMM0_Dd_01;
            local_68._0_4_ = (pMVar14->fields).BaseScale.fields.x;
            local_68._4_4_ = (pMVar14->fields).BaseScale.fields.y;
            uStack_60 = 0;
            local_d8 = (pMVar14->fields).BaseScale.fields.z;
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            UVar16.fields.z = local_d4;
            UVar16.fields.x = (float)local_48._0_4_;
            UVar16.fields.y = (float)local_48._4_4_;
            b.fields.z = local_d8;
            b.fields.x = (float)(undefined4)local_68;
            b.fields.y = (float)local_68._4_4_;
            UVar16 = Utility_Util__DivideVectors(UVar16,b,(MethodInfo *)0x0);
            if (pSVar11 ==
                (System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState__o *)0x0) {
              ThrowNullReferenceException();
            }
            local_100._0_4_ = iVar10;
            local_100._4_4_ = local_a8._0_4_;
            local_100._8_4_ = local_a8._4_4_;
            fStack_f4 = local_cc;
            local_f0 = (Il2CppObject *)local_58._0_8_;
            fStack_e8 = local_d0;
            fStack_e4 = UVar16.fields.x;
            fStack_e0 = UVar16.fields.y;
            value.fields.LocalPosition.fields.x = (float)local_100._4_4_;
            value.fields.OriginalParentId = iVar10;
            value.fields.LocalPosition.fields.z = local_cc;
            value.fields.LocalPosition.fields.y = (float)local_100._8_4_;
            value.fields.LocalScale.fields.x = fStack_e4;
            value.fields.LocalRotation.fields.z = local_d0;
            value.fields.LocalRotation.fields.x = (float)local_58._0_4_;
            value.fields.LocalRotation.fields.y = (float)local_58._4_4_;
            value.fields.LocalScale.fields.y = UVar16.fields.y;
            value.fields.LocalScale.fields.z = UVar16.fields.z;
            local_dc = UVar16.fields.z;
            System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState___set_Item
                      (pSVar11,key,value,
                       (MethodInfo_4A26E90 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState_set_Item
                      );
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8,
                   (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose)
        ;
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_158,
               (MethodInfo_4C3AED0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pMVar8 = local_108;
  pSVar5 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor_3916320
            (__this_07,(System_Collections_Generic_IEnumerable_T__o *)pSVar5,
             (MethodInfo_3916320 *)MethodInfo_System_Collections_Generic_List_int_ctor_71950c0);
  (pMVar8->fields)._oldOrder = __this_07;
  Il2CppCodeGenWriteBarrier(&(pMVar8->fields)._oldOrder);
  __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_08,(MethodInfo *)0x0);
  pSVar5 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
    System_Collections_Generic_List_int___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_140,pSVar5,
               (MethodInfo_3917880 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_118 = local_130;
    local_128 = (undefined1  [8])local_140._0_8_;
    puStack_120 = (undefined1 *)local_140._8_8_;
    local_140._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_140._8_8_ = local_128;
    local_a8._0_8_ = __this_08;
    if (__this_04 == (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar9 = System_Collections_Generic_List_Enumerator_int___MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_128,
                         (MethodInfo_4C3B4A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (bVar9) {
        ThrowNullReferenceException();
      }
    }
    else if (__this_08 == (Map_MapScriptObjects_o *)0x0) {
      while( true ) {
        bVar9 = System_Collections_Generic_List_Enumerator_int___MoveNext
                          ((System_Collections_Generic_List_Enumerator_int__o *)local_128,
                           (MethodInfo_4C3B4A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
        if (!bVar9) break;
        iVar10 = (int32_t)local_118;
        bVar9 = System_Collections_Generic_HashSet_int___Contains
                          (__this_04,(int32_t)local_118,
                           (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        if (bVar9) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05c8d669;
          bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar4,iVar10,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar9) {
            ThrowNullReferenceException();
          }
        }
      }
    }
    else {
label_05c8d440:
      bVar9 = System_Collections_Generic_List_Enumerator_int___MoveNext
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_128,
                         (MethodInfo_4C3B4A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
      if (bVar9) {
        iVar10 = (int32_t)local_118;
        bVar9 = System_Collections_Generic_HashSet_int___Contains
                          (__this_04,(int32_t)local_118,
                           (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        if (bVar9) {
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                   TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
label_05c8d669:
            ThrowNullReferenceException();
          }
          bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                            (pSVar4,iVar10,
                             (MethodInfo_4A0F950 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar9) {
            __this_01 = *(System_Collections_Generic_List_object__o **)(local_a8._0_8_ + 0x10);
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)
                     TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pMVar14 = System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar4,iVar10,
                                 (MethodInfo_4A0F690 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            pMVar7 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
            if (pMVar14 == (Map_MapObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
              item = (pMVar14->fields).ScriptObject;
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (__this_01->fields)._items;
              if (pSVar6 != (System_Object_array *)0x0) {
                uVar2 = (__this_01->fields)._size;
                if (uVar2 < (uint)pSVar6->max_length) {
                  (__this_01->fields)._size = uVar2 + 1;
                  pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)item;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_01,(Il2CppObject *)item,
                             (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                }
                goto label_05c8d440;
              }
            }
            ThrowNullReferenceException();
          }
        }
        goto label_05c8d440;
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_128,
               (MethodInfo_4C3B490 *)MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    pMVar8 = local_108;
    if ((long *)local_a8._0_8_ != (long *)0x0) {
      pSVar15 = (System_String_o *)
                (**(code **)(*(long *)local_a8._0_8_ + 0x1b8))
                          (local_a8._0_8_,*(undefined8 *)(*(long *)local_a8._0_8_ + 0x1c0));
      (pMVar8->fields)._script = pSVar15;
      Il2CppCodeGenWriteBarrier(&(pMVar8->fields)._script);
      return;
    }
  }
label_05c8d65f:
  ThrowNullReferenceException();
}


// MapEditor.DeleteObjectCommand$$Execute
// il2cpp: void MapEditor_DeleteObjectCommand__Execute (MapEditor_DeleteObjectCommand_o* __this, const MethodInfo* method);
// 0x5c8d7b0
// eh: try 0x5c8d8b0..0x5c8d90a -> pad 0x5c8d913 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8d92b..0x5c8d930 -> pad 0x5c8d94f cleanup
// eh: try 0x5c8d952..0x5c8d95c -> pad 0x5c8d964 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8d90f: jmp 0x5c8d913
// asm:   0x5c8d911: jmp 0x5c8d913
// asm:   0x5c8d913: mov rbx, rax
// asm:   0x5c8d916: cmp edx, 1
// asm:   0x5c8d919: jne 0x5c8d952
// asm:   0x5c8d91b: mov rdi, rbx
// asm:   0x5c8d91e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8d923: mov rbx, qword ptr [rax]
// asm:   0x5c8d926: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c8d92b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8d930: lea rax, [rip + 0x1600aa1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x5c8d937: mov rsi, qword ptr [rax]
// asm:   0x5c8d93a: mov rdi, rsp
// asm:   0x5c8d93d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c8d942: test rbx, rbx
// asm:   0x5c8d945: je 0x5c8d8fa
// asm:   0x5c8d947: mov rdi, rbx
// asm:   0x5c8d94a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8d94f: mov rbx, rax
// asm:   0x5c8d952: lea rdi, [rsp + 0x18]
// asm:   0x5c8d957: call 0x2fda710  ; il2cpp_runtime_helper_02fda710()
// asm:   0x5c8d95c: mov rdi, rbx
// asm:   0x5c8d95f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8d964: mov rdi, rax
// asm:   0x5c8d967: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_DeleteObjectCommand__Execute(MapEditor_DeleteObjectCommand_o *__this,MethodInfo *method)

{
  int32_t id;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  bool bVar1;
  Map_MapScriptObjects_o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_075479c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    Il2CppMethodInitialized_075479c9 = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_01->klass->vtable)._9_Deserialize.methodPtr)
              (__this_01,(__this->fields)._script,(__this_01->klass->vtable)._9_Deserialize.method);
    __this_00 = (__this_01->fields).Objects;
    if (__this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
      uStack_30 = 0;
      puStack_28 = (undefined1 *)&SStack_48;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext)
        ;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
          return;
        }
        if (SStack_48.fields._current == (Il2CppObject *)0x0) break;
        id = *(int32_t *)&SStack_48.fields._current[2].klass;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__DeleteObject_5891f70(id,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.DeleteObjectCommand$$Unexecute
// il2cpp: void MapEditor_DeleteObjectCommand__Unexecute (MapEditor_DeleteObjectCommand_o* __this, const MethodInfo* method);
// 0x5c8d970
// eh: try 0x5c8db50..0x5c8db5f -> pad 0x5c8e016 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8db62..0x5c8db6a -> pad 0x5c8e075 catch Il2CppExceptionWrapper, cleanup
// eh: try 0x5c8db80..0x5c8dfd7 -> pad 0x5c8e00c (+30 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c8e033..0x5c8e038 -> pad 0x5c8e05d cleanup
// eh: try 0x5c8e060..0x5c8e06d -> pad 0x5c8e0c6 catch (...) [compiler noexcept guard]
// eh: try 0x5c8e090..0x5c8e095 -> pad 0x5c8e0b4 cleanup
// eh: try 0x5c8e0b7..0x5c8e0c4 -> pad 0x5c8e0c6 catch (...) [compiler noexcept guard]
// asm: 72 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c8dfdc: jmp 0x5c8e018
// asm:   0x5c8dfde: jmp 0x5c8e018
// asm:   0x5c8dfe0: jmp 0x5c8e018
// asm:   0x5c8dfe2: jmp 0x5c8e018
// asm:   0x5c8dfe4: jmp 0x5c8e018
// asm:   0x5c8dfe6: jmp 0x5c8e018
// asm:   0x5c8dfe8: jmp 0x5c8e018
// asm:   0x5c8dfea: jmp 0x5c8e018
// asm:   0x5c8dfec: jmp 0x5c8e018
// asm:   0x5c8dfee: jmp 0x5c8e018
// asm:   0x5c8dff0: jmp 0x5c8e018
// asm:   0x5c8dff2: jmp 0x5c8e018
// asm:   0x5c8dff4: jmp 0x5c8e018
// asm:   0x5c8dff6: jmp 0x5c8e018
// asm:   0x5c8dff8: jmp 0x5c8e018
// asm:   0x5c8dffa: jmp 0x5c8e018
// asm:   0x5c8dffc: jmp 0x5c8e018
// asm:   0x5c8dffe: jmp 0x5c8e018
// asm:   0x5c8e000: jmp 0x5c8e018
// asm:   0x5c8e002: jmp 0x5c8e018
// asm:   0x5c8e004: jmp 0x5c8e018
// asm:   0x5c8e006: jmp 0x5c8e018
// asm:   0x5c8e008: jmp 0x5c8e018
// asm:   0x5c8e00a: jmp 0x5c8e018
// asm:   0x5c8e00c: jmp 0x5c8e075
// asm:   0x5c8e00e: jmp 0x5c8e018
// asm:   0x5c8e010: jmp 0x5c8e018
// asm:   0x5c8e012: jmp 0x5c8e018
// asm:   0x5c8e014: jmp 0x5c8e018
// asm:   0x5c8e016: jmp 0x5c8e075
// asm:   0x5c8e018: mov r14, rax
// asm:   0x5c8e01b: cmp edx, 1
// asm:   0x5c8e01e: jne 0x5c8e060
// asm:   0x5c8e020: mov rdi, r14
// asm:   0x5c8e023: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8e028: mov rbx, qword ptr [rax]
// asm:   0x5c8e02b: mov qword ptr [rsp + 0x80], rbx
// asm:   0x5c8e033: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8e038: lea rax, [rip + 0x1601aa1]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_DeleteObjectCommand_OrphanState_Dispose
// asm:   0x5c8e03f: mov rsi, qword ptr [rax]
// asm:   0x5c8e042: lea rdi, [rsp + 0x30]
// asm:   0x5c8e047: call 0x4da6810  ; System_Collections_Generic_Dictionary_Enumerator_int__DeleteObjectCommand_OrphanState___Dispose()
// asm:   0x5c8e04c: test rbx, rbx
// asm:   0x5c8e04f: je 0x5c8df8e
// asm:   0x5c8e055: mov rdi, rbx
// asm:   0x5c8e058: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c8e05d: mov r14, rax
// asm:   0x5c8e060: lea rdi, [rsp + 0x80]
// asm:   0x5c8e068: call 0x2fda770  ; il2cpp_runtime_helper_02fda770()
// asm:   0x5c8e06d: mov rdi, r14
// asm:   0x5c8e070: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c8e075: mov r14, rax
// asm:   0x5c8e078: cmp edx, 1
// asm:   0x5c8e07b: jne 0x5c8e0b7
// asm:   0x5c8e07d: mov rdi, r14
// asm:   0x5c8e080: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c8e085: mov rbx, qword ptr [rax]
// asm:   0x5c8e088: mov qword ptr [rsp + 0x80], rbx
// asm:   0x5c8e090: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c8e095: lea rax, [rip + 0x160033c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x5c8e09c: mov rsi, qword ptr [rax]
// asm:   0x5c8e09f: lea rdi, [rsp + 0x10]
// asm:   0x5c8e0a4: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c8e0a9: test rbx, rbx
// asm:   0x5c8e0ac: je 0x5c8db9b
// asm:   0x5c8e0b2: jmp 0x5c8e055
// asm:   0x5c8e0b4: mov r14, rax
// asm:   0x5c8e0b7: lea rdi, [rsp + 0x80]
// asm:   0x5c8e0bf: call 0x2fda740  ; il2cpp_runtime_helper_02fda740()
// asm:   0x5c8e0c4: jmp 0x5c8e06d
// asm:   0x5c8e0c6: mov rdi, rax
// asm:   0x5c8e0c9: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_DeleteObjectCommand__Unexecute(MapEditor_DeleteObjectCommand_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  Map_MapLoader_StaticFields *pMVar5;
  System_Collections_Generic_List_int__o *__this_01;
  System_Collections_Generic_List_int__o *source;
  System_Collections_Generic_Dictionary_int__MapObject__o *object;
  System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState__o *__this_02;
  System_Collections_Generic_Dictionary_int__object__o *pSVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  UnityEngine_GameObject_o *__this_03;
  int32_t key;
  int32_t key_00;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  Map_MapScriptObjects_o *__this_04;
  System_Func_int__bool__o *__this_05;
  System_Collections_Generic_IEnumerable_TSource__o *collection;
  Map_MapObject_o *obj;
  Map_MapObject_o *parent;
  UnityEngine_Transform_o *__this_06;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o rotation;
  UnityEngine_Vector3_o scale;
  UnityEngine_Vector3_o b;
  undefined1 auStack_128 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_120;
  Map_MapScriptBaseObject_o *pMStack_118;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  Il2CppObject *pIStack_f0;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  Map_MapScriptBaseObject_o *pMStack_a8;
  Il2CppObject *pIStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  UnityEngine_Vector3_Fields UStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  Il2CppObject *pIStack_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_075479ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_DeleteObjectCommand_OrphanState_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_DeleteObjectCommand_OrphanState_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_DeleteObjectCommand_OrphanState_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_DeleteObjectCommand_OrphanState_get_Key
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_int_DeleteObjectCommand_OrphanState_get_Value
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075479ca = '\x01';
  }
  auStack_128 = (undefined1  [8])0x0;
  pSStack_120 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pMStack_118 = (Map_MapScriptBaseObject_o *)0x0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  fStack_e8 = 0.0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  fStack_dc = 0.0;
  uStack_f8 = (Map_MapScriptBaseObject_o *)0x0;
  pIStack_f0 = (Il2CppObject *)0x0;
  auStack_108 = (undefined1  [8])0x0;
  uStack_100._0_4_ = 0;
  uStack_100._4_4_ = 0;
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_04,(MethodInfo *)0x0);
  if (__this_04 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_04->klass->vtable)._9_Deserialize.methodPtr)
              (__this_04,(__this->fields)._script,(__this_04->klass->vtable)._9_Deserialize.method);
    __this_00 = (__this_04->fields).Objects;
    if (__this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_b8,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
      pMStack_118 = pMStack_a8;
      auStack_128 = (undefined1  [8])auStack_b8._0_8_;
      pSStack_120 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_b8._8_8_;
      auStack_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      auStack_b8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_128;
      while( true ) {
        bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)auStack_128,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
                           );
        pMVar7 = pMStack_118;
        if (!bVar11) break;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__LoadObject(pMVar7,true,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_128,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pMVar5 = TypeInfo_Map_MapLoader->static_fields;
      __this_01 = pMVar5->ObjectOrder;
      if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        (__this_01->fields)._size = 0;
        source = (__this->fields)._oldOrder;
        object = pMVar5->IdToMapObject;
        __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
        if (object != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
          System_Func_int__bool____ctor
                    (__this_05,(Il2CppObject *)object,
                     (intptr_t)((Il2CppClass *)object->klass)->vtable[0x24].method,(MethodInfo_4F12D00 *)0x0);
          collection = System_Linq_Enumerable__Where_int_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                  (System_Func_TSource__bool__o *)__this_05,
                                  (MethodInfo_35022A0 *)MethodInfo_System_Linq_Enumerable_Where_int);
          System_Collections_Generic_List_int___AddRange
                    (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,
                     (MethodInfo_3916CF0 *)MethodInfo_System_Collections_Generic_List_int_AddRange);
          __this_02 = (__this->fields)._orphans;
          if (__this_02 !=
              (System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState__o *)0x0) {
            System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState___GetEnumerator
                      ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_b8,
                       __this_02,
                       (MethodInfo_4A27520 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState_GetEnumerator
                      );
            uStack_d8 = uStack_88;
            uStack_d0 = uStack_80;
            fStack_e8 = (float)uStack_98;
            uStack_e4 = SUB84(uStack_98,4);
            uStack_e0 = (undefined4)uStack_90;
            fStack_dc = (float)((ulong)uStack_90 >> 0x20);
            uStack_f8 = pMStack_a8;
            pIStack_f0 = pIStack_a0;
            auStack_108 = (undefined1  [8])auStack_b8._0_8_;
            uStack_100 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_b8._8_8_;
            auStack_b8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
            auStack_b8._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_108
            ;
            while( true ) {
              do {
                do {
                  bVar11 = System_Collections_Generic_Dictionary_Enumerator_int__DeleteObjectCommand_OrphanState___MoveNext
                                     ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                      auStack_108,
                                      (MethodInfo_4CA6680 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_DeleteObjectCommand_OrphanState_MoveNext
                                     );
                  fVar9 = fStack_dc;
                  fVar8 = fStack_e8;
                  if (!bVar11) {
                    System_Collections_Generic_Dictionary_Enumerator_int__DeleteObjectCommand_OrphanState___Dispose
                              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_108
                               ,(MethodInfo_4CA6810 *)
                                MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_DeleteObjectCommand_OrphanState_Dispose
                              );
                    return;
                  }
                  key = (int32_t)uStack_f8;
                  key_00 = uStack_f8._4_4_;
                  pIStack_48 = pIStack_f0;
                  uStack_40 = 0;
                  uStack_68 = CONCAT44(uStack_e0,uStack_e4);
                  uStack_60 = 0;
                  uStack_58 = uStack_d8;
                  uStack_50 = 0;
                  fVar10 = (float)uStack_d0;
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                  if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                     (pSVar6,key,
                                      (MethodInfo_4A0F950 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
                                     );
                } while (!bVar11);
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                         TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                                   (pSVar6,key_00,
                                    (MethodInfo_4A0F950 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
                                   );
              } while (!bVar11);
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              obj = System_Collections_Generic_Dictionary_int__object___get_Item
                              (pSVar6,key,
                               (MethodInfo_4A0F690 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
              pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                       TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
              if (pSVar6 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              parent = System_Collections_Generic_Dictionary_int__object___get_Item
                                 (pSVar6,key_00,
                                  (MethodInfo_4A0F690 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
              Map_MapLoader__SetParentLogical(obj,parent,(MethodInfo *)0x0);
              if (obj == (Map_MapObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              pMVar7 = (obj->fields).ScriptObject;
              if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              (pMVar7->fields).Parent = key_00;
              __this_03 = (obj->fields).GameObject;
              if (__this_03 == (UnityEngine_GameObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              __this_06 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
              uVar3 = (obj->fields).BaseScale.fields.x;
              uVar4 = (obj->fields).BaseScale.fields.y;
              auStack_c8._4_4_ = uVar4;
              auStack_c8._0_4_ = uVar3;
              auStack_c8._8_8_ = 0;
              fVar2 = (obj->fields).BaseScale.fields.z;
              if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
              }
              UVar12.fields.z = fVar2;
              UVar12.fields.x = (float)auStack_c8._0_4_;
              UVar12.fields.y = (float)auStack_c8._4_4_;
              b.fields.z = fVar10;
              b.fields.x = (float)(undefined4)uStack_58;
              b.fields.y = (float)uStack_58._4_4_;
              UVar12 = Utility_Util__MultiplyVectors(UVar12,b,(MethodInfo *)0x0);
              value_01.fields.z = UVar12.fields.z;
              auStack_c8._8_4_ = extraout_XMM0_Dc;
              auStack_c8._0_8_ = UVar12.fields._0_8_;
              auStack_c8._12_4_ = extraout_XMM0_Dd;
              if (__this_06 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              value_00.fields.z = fVar8;
              value_00.fields._0_8_ = pIStack_48;
              UnityEngine_Transform__set_localPosition(__this_06,value_00,(MethodInfo *)0x0);
              UStack_78.z = fVar9 * 0.017453292;
              UStack_78.y = uStack_68._4_4_ * 0.017453292;
              UStack_78.x = (float)uStack_68 * 0.017453292;
              value = UnityEngine_Quaternion__Internal_FromEulerRad
                                ((UnityEngine_Vector3_o *)&UStack_78,(MethodInfo *)0x0);
              UnityEngine_Transform__set_localRotation(__this_06,value,(MethodInfo *)0x0);
              value_01.fields.x = (float)auStack_c8._0_4_;
              value_01.fields.y = (float)auStack_c8._4_4_;
              UnityEngine_Transform__set_localScale(__this_06,value_01,(MethodInfo *)0x0);
              pMVar7 = (obj->fields).ScriptObject;
              if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              position.fields.z = fVar8;
              position.fields._0_8_ = pIStack_48;
              Map_MapScriptBaseObject__SetPosition(pMVar7,position,(MethodInfo *)0x0);
              pMVar7 = (obj->fields).ScriptObject;
              if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) break;
              rotation.fields.z = fVar9;
              rotation.fields.x = (float)uStack_68;
              rotation.fields.y = uStack_68._4_4_;
              Map_MapScriptBaseObject__SetRotation(pMVar7,rotation,(MethodInfo *)0x0);
              pMVar7 = (obj->fields).ScriptObject;
              if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              scale.fields.z = fVar10;
              scale.fields.x = (float)(undefined4)uStack_58;
              scale.fields.y = (float)uStack_58._4_4_;
              Map_MapScriptBaseObject__SetScale(pMVar7,scale,(MethodInfo *)0x0);
            }
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


