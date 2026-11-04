// Type: MapEditor.DeleteObjectCommand
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/MapEditor/DeleteObjectCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/DeleteObjectCommand.cs
// --------------------------------

// MapEditor.DeleteObjectCommand.<>c$$.cctor
// il2cpp: void MapEditor_DeleteObjectCommand___c___cctor (const MethodInfo* method);
// 0x182201880

void MapEditor_DeleteObjectCommand___c___cctor(MethodInfo *method)

{
  MapEditor_DeleteObjectCommand___c_o *__this;
  
  if (Il2CppMethodInitialized_184347006 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_DeleteObjectCommand_c);
    Il2CppMethodInitialized_184347006 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9,__this);
  return;
}


// MapEditor.DeleteObjectCommand.<>c$$.ctor
// il2cpp: void MapEditor_DeleteObjectCommand___c___ctor (MapEditor_DeleteObjectCommand___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
MapEditor_DeleteObjectCommand___c___ctor(MapEditor_DeleteObjectCommand___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.DeleteObjectCommand.<>c$$<.ctor>b__4_0
// il2cpp: int32_t MapEditor_DeleteObjectCommand___c____ctor_b__4_0 (MapEditor_DeleteObjectCommand___c_o* __this, Map_MapObject_o* o, const MethodInfo* method);
// 0x181e7b690

int32_t
MapEditor_DeleteObjectCommand___c____ctor_b__4_0(MapEditor_DeleteObjectCommand___c_o* __this, Map_MapObject_o* o, MethodInfo* method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  
  if ((o != (Map_MapObject_o *)0x0) &&
     (pMVar1 = (o->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) {
    return (pMVar1->fields).Id;
  }
  ThrowNullReferenceException();
}


// MapEditor.DeleteObjectCommand.<>c$$<.ctor>b__4_1
// il2cpp: bool MapEditor_DeleteObjectCommand___c____ctor_b__4_1 (MapEditor_DeleteObjectCommand___c_o* __this, int32_t id, const MethodInfo* method);
// 0x181e7b6b0

bool
MapEditor_DeleteObjectCommand___c____ctor_b__4_1(MapEditor_DeleteObjectCommand___c_o* __this, int32_t id, MethodInfo* method)

{
  return 0 < id;
}


// MapEditor.DeleteObjectCommand$$.ctor
// il2cpp: void MapEditor_DeleteObjectCommand___ctor (MapEditor_DeleteObjectCommand_o* __this, System_Collections_Generic_List_MapObject__o* objs, bool includeDescendants, const MethodInfo* method);
// 0x1821ee3e0
// eh: try 0x1821ee854..0x1821ef17f -> pad 0x18333f3b0 (+8 call sites) catch Il2CppExceptionWrapper
// asm: 85 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ee85d: nop dword ptr [rax]
// asm:   0x1821ee95e: nop 
// asm:   0x1821eec0e: mov rdx, qword ptr [rip + 0x1e99433]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x1821eec15: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821eec1a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821eec1f: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1821eec24: test rcx, rcx
// asm:   0x1821eec27: jne 0x1821ef134
// asm:   0x1821eec2d: mov r15, qword ptr [rsp + 0x218]
// asm:   0x1821eec35: mov r12, qword ptr [rsp + 0x210]
// asm:   0x1821eec3d: jmp 0x1821ee854
// asm:   0x1821eec58: mov rdx, qword ptr [rip + 0x1e993e9]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x1821eec5f: mov rcx, qword ptr [rsp + 0x88]
// asm:   0x1821eec67: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821eec6c: mov rcx, qword ptr [rsp + 0x80]
// asm:   0x1821eec74: test rcx, rcx
// asm:   0x1821eec77: jne 0x1821ef149
// asm:   0x1821eec7d: mov r15, qword ptr [rsp + 0x218]
// asm:   0x1821eec85: mov r12, qword ptr [rsp + 0x210]
// asm:   0x1821eef9d: nop dword ptr [rax]
// asm:   0x1821ef045: mov rdx, qword ptr [rip + 0x1e98ffc]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose
// asm:   0x1821ef04c: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ef051: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ef056: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1821ef05b: test rcx, rcx
// asm:   0x1821ef05e: jne 0x1821ef15a
// asm:   0x1821ef064: mov r15, qword ptr [rsp + 0x218]
// asm:   0x1821ef06c: mov rsi, qword ptr [rsp + 0x30]
// asm:   0x1821ef071: jmp 0x1821eeeb0
// asm:   0x1821ef087: mov rdx, qword ptr [rip + 0x1e9925a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1821ef08e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ef093: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ef098: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1821ef09d: test rcx, rcx
// asm:   0x1821ef0a0: jne 0x1821ef17f
// asm:   0x1821ef0a6: mov r14, qword ptr [rsp + 0x218]
// asm:   0x1821ef0ae: mov r12, r14
// asm:   0x1821ef134: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821ef149: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821ef15a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821ef17f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333df90: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333df95: push rbp
// asm:   0x18333df96: sub rsp, 0x20
// asm:   0x18333df9a: mov rbp, rdx
// asm:   0x18333df9d: mov rax, qword ptr [rbp + 0x138]
// asm:   0x18333dfa4: mov rcx, qword ptr [rax]
// asm:   0x18333dfa7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333dfab: movabs rax, 0
// asm:   0x18333dfb5: add rsp, 0x20
// asm:   0x18333dfb9: pop rbp
// asm:   0x18333dfba: ret 
// asm:   0x18333f3b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f3b5: push rbp
// asm:   0x18333f3b6: sub rsp, 0x20
// asm:   0x18333f3ba: mov rbp, rdx
// asm:   0x18333f3bd: mov rax, qword ptr [rbp + 0x140]
// asm:   0x18333f3c4: mov rcx, qword ptr [rax]
// asm:   0x18333f3c7: mov qword ptr [rbp + 0x80], rcx
// asm:   0x18333f3ce: movabs rax, 0
// asm:   0x18333f3d8: add rsp, 0x20
// asm:   0x18333f3dc: pop rbp
// asm:   0x18333f3dd: ret 
// asm:   0x18333f3e0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f3e5: push rbp
// asm:   0x18333f3e6: sub rsp, 0x20
// asm:   0x18333f3ea: mov rbp, rdx
// asm:   0x18333f3ed: mov rax, qword ptr [rbp + 0x148]
// asm:   0x18333f3f4: mov rcx, qword ptr [rax]
// asm:   0x18333f3f7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333f3fb: movabs rax, 0
// asm:   0x18333f405: add rsp, 0x20
// asm:   0x18333f409: pop rbp
// asm:   0x18333f40a: ret 
// asm:   0x18333f410: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f415: push rbp
// asm:   0x18333f416: sub rsp, 0x20
// asm:   0x18333f41a: mov rbp, rdx
// asm:   0x18333f41d: mov rax, qword ptr [rbp + 0x150]
// asm:   0x18333f424: mov rcx, qword ptr [rax]
// asm:   0x18333f427: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333f42b: movabs rax, 0
// asm:   0x18333f435: add rsp, 0x20
// asm:   0x18333f439: pop rbp
// asm:   0x18333f43a: ret 

void MapEditor_DeleteObjectCommand___ctor
               (MapEditor_DeleteObjectCommand_o *__this,System_Collections_Generic_List_MapObject__o *objs,
               bool includeDescendants,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar5;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  Il2CppObject *pIVar9;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar10;
  System_Collections_Generic_List_int__o *collection;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar11;
  int32_t iVar12;
  int32_t key;
  bool bVar13;
  uint32_t uVar14;
  System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState__o *pSVar15;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_Console_WindowsConsole_WindowsCancelHandler_o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *collection_00;
  System_Collections_Generic_HashSet_int__o *__this_03;
  System_Collections_Generic_HashSet_uint__o *pSVar16;
  uint64_t uVar17;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Vector3_o *pUVar18;
  UnityEngine_Quaternion_o *pUVar19;
  Unity_Mathematics_float3_o *pUVar20;
  System_Collections_Generic_List_int__o *__this_05;
  Map_MapScriptObjects_o *__this_06;
  System_Collections_Generic_Queue_uint__o *__this_07;
  System_String_o *value;
  undefined8 local_1d8;
  float local_1d0;
  System_Collections_Generic_HashSet_Enumerator_T__o local_1c8;
  int32_t local_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  Il2CppObject *local_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  System_Collections_Generic_HashSet_Enumerator_T__o *local_180;
  undefined1 local_178 [48];
  System_Collections_Generic_HashSet_Enumerator_T__o local_148;
  System_Collections_Generic_List_Enumerator_T__o local_130;
  Unity_Mathematics_float3_Fields local_118;
  Unity_Mathematics_float3_Fields local_108;
  UnityEngine_Quaternion_Fields local_f8;
  System_Collections_Generic_HashSet_Enumerator_T__o local_e8 [2];
  UnityEngine_Vector3_o local_b0;
  UnityEngine_Vector3_o local_a0;
  UnityEngine_Vector3_o local_90;
  UnityEngine_Vector3_o local_80;
  Unity_Mathematics_float3_o local_70 [6];
  
  if (Il2CppMethodInitialized_184347003 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor_40b2f90);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_Dequeue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_ctor_40da1b8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Queue_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Queue_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MapEditor_DeleteObjectCommand_c_ctor_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MapEditor_DeleteObjectCommand_c_ctor_b__4_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_DeleteObjectCommand_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184347003 = '\x01';
  }
  local_1c8.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_1c8.fields._index = 0;
  local_1c8.fields._version = 0;
  local_1c8.fields._current = (Il2CppObject *)0x0;
  local_148.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_148.fields._index = 0;
  local_148.fields._version = 0;
  local_148.fields._current = (Il2CppObject *)0x0;
  local_1b0 = 0;
  uStack_1ac = 0;
  fStack_1a8 = 0.0;
  fStack_1a4 = 0.0;
  local_1a0 = (Il2CppObject *)0x0;
  fStack_198 = 0.0;
  fStack_194 = 0.0;
  fStack_190 = 0.0;
  fStack_18c = 0.0;
  local_f8.x = 0.0;
  local_f8.y = 0.0;
  local_f8.z = 0.0;
  local_f8.w = 0.0;
  local_130.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_130.fields._index = 0;
  local_130.fields._version = 0;
  local_130.fields._current = (Il2CppObject *)0x0;
  pSVar15 = il2cpp_codegen_object_new
                      ((Il2CppClass *)
                       TypeInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState);
  System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,
             (MethodInfo_1404750 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState_ctor);
  (__this->fields)._orphans = pSVar15;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._orphans,pSVar15);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_MapEditor_DeleteObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c);
  }
  __this_01 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
              TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9__4_0;
  if (__this_01 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
    if ((TypeInfo_MapEditor_DeleteObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c);
    }
    pIVar9 = (Il2CppObject *)TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9;
    __this_01 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapObject_int);
    System_Func_object__int____ctor
              (__this_01,pIVar9,(intptr_t)MethodInfo_MapEditor_DeleteObjectCommand_c_ctor_b__4_0,
               (MethodInfo_AF4D50 *)0x0);
    TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9__4_0 =
         (System_Func_MapObject__int__o *)__this_01;
    Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9__4_0,__this_01);
  }
  source = System_Linq_Enumerable__Select_Vector3__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)objs,
                      (System_Func_TSource__TResult__o *)__this_01,
                      (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_MapObject_int);
  if ((TypeInfo_MapEditor_DeleteObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c);
  }
  __this_02 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
              TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9__4_1;
  if (__this_02 == (System_Console_WindowsConsole_WindowsCancelHandler_o *)0x0) {
    if ((TypeInfo_MapEditor_DeleteObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_DeleteObjectCommand_c);
    }
    pIVar9 = (Il2CppObject *)TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9;
    __this_02 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
    System_Func_int__bool____ctor
              (__this_02,pIVar9,(intptr_t)MethodInfo_MapEditor_DeleteObjectCommand_c_ctor_b__4_1,
               (MethodInfo *)0x0);
    TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9__4_1 = (System_Func_int__bool__o *)__this_02;
    Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_DeleteObjectCommand_c->static_fields->__9__4_1,__this_02);
  }
  collection_00 =
       System_Linq_Enumerable__Where_float_
                 ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                  (System_Func_TSource__bool__o *)__this_02,
                  (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_int);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor_176c3b0
            (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection_00,
             (MethodInfo_176C3B0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor_40dc988);
  if (includeDescendants) {
    __this_07 = (System_Collections_Generic_Queue_uint__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Queue_int);
    System_Collections_Generic_Queue_int____ctor
              (__this_07,(System_Collections_Generic_IEnumerable_T__o *)__this_03,
               (MethodInfo_B95DC0 *)MethodInfo_System_Collections_Generic_Queue_int_ctor_40da1b8);
    local_1d8 = __this_07;
    if (__this_07 == (System_Collections_Generic_Queue_uint__o *)0x0) goto label_1821ef10e;
    while (0 < (__this_07->fields)._size) {
      uVar14 = System_Collections_Generic_Queue_int___Dequeue
                         (__this_07,
                          (MethodInfo_B936A0 *)MethodInfo_System_Collections_Generic_Queue_int_Dequeue);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) goto label_1821ef10e;
      bVar13 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                         (pSVar10,uVar14,
                          (MethodInfo_1407110 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
      if (bVar13) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToChildren;
        if ((pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
           (pSVar16 = (System_Collections_Generic_HashSet_uint__o *)
                      System_Collections_Generic_Dictionary_int__ulong___get_Item
                                (pSVar10,uVar14,
                                 (MethodInfo_14156F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item),
           pSVar16 == (System_Collections_Generic_HashSet_uint__o *)0x0)) goto label_1821ef10e;
        System_Collections_Generic_HashSet_uint___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_178,pSVar16,
                   (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
        local_1c8.fields._set = (System_Collections_Generic_HashSet_T__o *)local_178._0_8_;
        local_1c8.fields._index = local_178._8_4_;
        local_1c8.fields._version = local_178._12_4_;
        local_1c8.fields._current = (Il2CppObject *)local_178._16_8_;
        while (bVar13 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                                  (&local_1c8,
                                   (MethodInfo_1537E90 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
              bVar13) {
          uVar14 = (uint32_t)local_1c8.fields._current;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                    TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar13 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                             (pSVar10,uVar14,
                              (MethodInfo_1407110 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if (bVar13) {
            if (__this_03 == (System_Collections_Generic_HashSet_int__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar13 = System_Collections_Generic_HashSet_int___Add
                               (__this_03,uVar14,
                                (MethodInfo_1757D20 *)MethodInfo_System_Collections_Generic_HashSet_int_Add);
            if (bVar13) {
              System_Collections_Generic_Queue_int___Enqueue
                        (__this_07,uVar14,
                         (MethodInfo_B93BF0 *)MethodInfo_System_Collections_Generic_Queue_int_Enqueue);
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1c8,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
      }
    }
  }
  else {
    if (__this_03 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1821ef10e;
    System_Collections_Generic_HashSet_uint___GetEnumerator
              (local_e8,(System_Collections_Generic_HashSet_uint__o *)__this_03,
               (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
    local_1c8.fields._set = local_e8[0].fields._set;
    local_1c8.fields._index = local_e8[0].fields._index;
    local_1c8.fields._version = local_e8[0].fields._version;
    local_1c8.fields._current = local_e8[0].fields._current;
    local_188 = 0;
    local_180 = &local_1c8;
    while (bVar13 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                              (&local_1c8,
                               (MethodInfo_1537E90 *)
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext), bVar13)
    {
      iVar12 = (uint32_t)local_1c8.fields._current;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToChildren;
      if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar13 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                         (pSVar10,iVar12,
                          (MethodInfo_1407110 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_ContainsKey);
      if (bVar13) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToChildren;
        if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar16 = (System_Collections_Generic_HashSet_uint__o *)
                  System_Collections_Generic_Dictionary_int__ulong___get_Item
                            (pSVar10,iVar12,
                             (MethodInfo_14156F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_HashSet_int_get_Item);
        if (pSVar16 == (System_Collections_Generic_HashSet_uint__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_uint___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_178,pSVar16,
                   (MethodInfo_175C240 *)MethodInfo_System_Collections_Generic_HashSet_int_GetEnumerator);
        local_148.fields._set = (System_Collections_Generic_HashSet_T__o *)local_178._0_8_;
        local_148.fields._index = local_178._8_4_;
        local_148.fields._version = local_178._12_4_;
        local_148.fields._current = (Il2CppObject *)local_178._16_8_;
        while (bVar13 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                                  (&local_148,
                                   (MethodInfo_1537E90 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_MoveNext),
              bVar13) {
          key = (int32_t)local_148.fields._current;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                    TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar13 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                             (pSVar10,key,
                              (MethodInfo_1407110 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
          if ((bVar13) &&
             (bVar13 = System_Collections_Generic_HashSet_int___Contains
                                 ((System_Collections_Generic_HashSet_T__o *)__this_03,key,
                                  (MethodInfo_1759C90 *)
                                  MethodInfo_System_Collections_Generic_HashSet_int_Contains), !bVar13)) {
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                      TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
            if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
              ThrowNullReferenceException();
            }
            uVar17 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                               (pSVar10,key,
                                (MethodInfo_14156F0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
            if (uVar17 == 0) {
              ThrowNullReferenceException();
            }
            if (*(UnityEngine_GameObject_o **)(uVar17 + 0x18) == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_04 = UnityEngine_GameObject__get_transform
                                  (*(UnityEngine_GameObject_o **)(uVar17 + 0x18),(MethodInfo *)0x0);
            uStack_1ac = 0;
            fStack_1a8 = 0.0;
            fStack_1a4 = 0.0;
            local_1a0 = (Il2CppObject *)0x0;
            fStack_198 = 0.0;
            fStack_194 = 0.0;
            fStack_190 = 0.0;
            fStack_18c = 0.0;
            local_1b0 = iVar12;
            if (__this_04 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar15 = (__this->fields)._orphans;
            pUVar18 = UnityEngine_Transform__get_localPosition(&local_b0,__this_04,(MethodInfo *)0x0);
            uVar1 = (pUVar18->fields).x;
            uVar5 = (pUVar18->fields).y;
            fStack_1a4 = (pUVar18->fields).z;
            uStack_1ac = uVar1;
            fStack_1a8 = (float)uVar5;
            pUVar19 = UnityEngine_Transform__get_localRotation
                                ((UnityEngine_Quaternion_o *)local_e8,__this_04,(MethodInfo *)0x0);
            local_f8.x = (pUVar19->fields).x;
            local_f8.y = (pUVar19->fields).y;
            local_f8.z = (pUVar19->fields).z;
            local_f8.w = (pUVar19->fields).w;
            pUVar18 = UnityEngine_Quaternion__Internal_ToEulerRad
                                (&local_a0,(UnityEngine_Quaternion_o *)&local_f8,(MethodInfo *)0x0);
            local_1d8 = (System_Collections_Generic_Queue_uint__o *)
                        CONCAT44((pUVar18->fields).y * 57.29578,(pUVar18->fields).x * 57.29578);
            local_1d0 = (pUVar18->fields).z * 57.29578;
            pUVar18 = UnityEngine_Quaternion__Internal_MakePositive
                                (&local_90,(UnityEngine_Vector3_o *)&local_1d8,(MethodInfo *)0x0);
            local_1a0 = *(Il2CppObject **)&pUVar18->fields;
            fStack_198 = (pUVar18->fields).z;
            pUVar18 = UnityEngine_Transform__get_localScale(&local_80,__this_04,(MethodInfo *)0x0);
            uVar3._0_4_ = (pUVar18->fields).x;
            uVar3._4_4_ = (pUVar18->fields).y;
            fVar7 = (pUVar18->fields).z;
            uVar4 = *(undefined8 *)(uVar17 + 0x28);
            fVar8 = *(float *)(uVar17 + 0x30);
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            local_118._0_8_ = uVar4;
            local_118.z = fVar8;
            local_108._0_8_ = uVar3;
            local_108.z = fVar7;
            pUVar20 = Unity_Mathematics_float3__op_Division
                                (local_70,(Unity_Mathematics_float3_o *)&local_108,
                                 (Unity_Mathematics_float3_o *)&local_118,(MethodInfo *)0x0);
            uVar2 = (pUVar20->fields).x;
            uVar6 = (pUVar20->fields).y;
            fStack_18c = (pUVar20->fields).z;
            fStack_194 = (float)uVar2;
            fStack_190 = (float)uVar6;
            if (pSVar15 ==
                (System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState__o *)0x0) {
              ThrowNullReferenceException();
            }
            local_178._0_8_ = CONCAT44(uStack_1ac,local_1b0);
            local_178._12_4_ = fStack_1a4;
            local_178._8_4_ = fStack_1a8;
            local_178._28_4_ = (float)uVar2;
            local_178._24_4_ = fStack_198;
            local_178._16_8_ = local_1a0;
            local_178._36_4_ = fStack_18c;
            local_178._32_4_ = (float)uVar6;
            System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState___set_Item
                      (pSVar15,key,(MapEditor_DeleteObjectCommand_OrphanState_o *)local_178,
                       (MethodInfo_14340B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState_set_Item
                      );
          }
        }
        System_Collections_Generic_HashSet_Enumerator_int___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_148,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_180,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_int_Dispose);
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  collection = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor_92b2a0
            (__this_05,(System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_92B2A0 *)MethodInfo_System_Collections_Generic_List_int_ctor_40b2f90);
  (__this->fields)._oldOrder = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._oldOrder,__this_05);
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_06,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
              TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  if (__this_00 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_178,__this_00,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    local_130.fields._list = (System_Collections_Generic_List_T__o *)local_178._0_8_;
    local_130.fields._index = local_178._8_4_;
    local_130.fields._version = local_178._12_4_;
    local_130.fields._current = (Il2CppObject *)local_178._16_8_;
    while (bVar13 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                              (&local_130,
                               (MethodInfo_1530180 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar13) {
      if (__this_03 == (System_Collections_Generic_HashSet_int__o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar12 = (int32_t)local_130.fields._current;
      bVar13 = System_Collections_Generic_HashSet_int___Contains
                         ((System_Collections_Generic_HashSet_T__o *)__this_03,
                          (int32_t)local_130.fields._current,
                          (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (bVar13) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar13 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                           (pSVar10,iVar12,
                            (MethodInfo_1407110 *)
                            MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey);
        if (bVar13) {
          if (__this_06 == (Map_MapScriptObjects_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar11 = (__this_06->fields).Objects;
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar10 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                    TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
          if (pSVar10 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
            ThrowNullReferenceException();
          }
          uVar17 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                             (pSVar10,iVar12,
                              (MethodInfo_14156F0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
          if (uVar17 == 0) {
            ThrowNullReferenceException();
          }
          if (pSVar11 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(pSVar11,*(undefined8 *)(uVar17 + 0x20),
                        MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_130,
               MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    if (__this_06 != (Map_MapScriptObjects_o *)0x0) {
      value = (*(__this_06->klass->vtable)._8_Serialize.methodPtr)
                        (__this_06,(__this_06->klass->vtable)._8_Serialize.method);
      (__this->fields)._script = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._script,value);
      return;
    }
  }
label_1821ef10e:
  ThrowNullReferenceException();
}


// MapEditor.DeleteObjectCommand$$Execute
// il2cpp: void MapEditor_DeleteObjectCommand__Execute (MapEditor_DeleteObjectCommand_o* __this, const MethodInfo* method);
// 0x1821eda90
// eh: try 0x1821edb90..0x1821edc0f -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821edbe3: mov rdx, qword ptr [rip + 0x1e9db7e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x1821edbea: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821edbef: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821edbf4: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821edbf9: test rcx, rcx
// asm:   0x1821edbfc: jne 0x1821edc0f
// asm:   0x1821edc0f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void MapEditor_DeleteObjectCommand__Execute(MapEditor_DeleteObjectCommand_o *__this,MethodInfo *method)

{
  int32_t id;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  bool bVar1;
  Map_MapScriptObjects_o *__this_01;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184347004 == '\0') {
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
    Il2CppMethodInitialized_184347004 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_01->klass->vtable)._9_Deserialize.methodPtr)
              (__this_01,(__this->fields)._script,(__this_01->klass->vtable)._9_Deserialize.method);
    __this_00 = (__this_01->fields).Objects;
    if (__this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
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
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext)
        ;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
          return;
        }
        if (local_28.fields._current == (Il2CppObject *)0x0) break;
        id = *(int32_t *)&local_28.fields._current[2].klass;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__DeleteObject_1eaa8d0(id,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.DeleteObjectCommand$$Unexecute
// il2cpp: void MapEditor_DeleteObjectCommand__Unexecute (MapEditor_DeleteObjectCommand_o* __this, const MethodInfo* method);
// 0x1821edc20
// eh: try 0x1821ede10..0x1821ee3c5 -> pad 0x18333f370 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ede0f: nop 
// asm:   0x1821ede5f: mov rdx, qword ptr [rip + 0x1e9d902]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x1821ede66: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821ede6b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ede70: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1821ede75: test rcx, rcx
// asm:   0x1821ede78: jne 0x1821ee386
// asm:   0x1821ede7e: xor r14d, r14d
// asm:   0x1821ede81: mov rsi, qword ptr [rsp + 0x240]
// asm:   0x1821ee338: mov rdx, qword ptr [rip + 0x1ec4969]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_DeleteObjectCommand_OrphanState_Dispose
// asm:   0x1821ee33f: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1821ee344: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821ee349: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821ee34e: test rcx, rcx
// asm:   0x1821ee351: jne 0x1821ee3c5
// asm:   0x1821ee386: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821ee3c5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183319fe0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183319fe5: push rbp
// asm:   0x183319fe6: sub rsp, 0x20
// asm:   0x183319fea: mov rbp, rdx
// asm:   0x183319fed: mov rax, qword ptr [rbp + 0x180]
// asm:   0x183319ff4: mov rcx, qword ptr [rax]
// asm:   0x183319ff7: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183319ffb: movabs rax, 0
// asm:   0x18331a005: add rsp, 0x20
// asm:   0x18331a009: pop rbp
// asm:   0x18331a00a: ret 
// asm:   0x18333f370: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333f375: push rbp
// asm:   0x18333f376: sub rsp, 0x20
// asm:   0x18333f37a: mov rbp, rdx
// asm:   0x18333f37d: mov rax, qword ptr [rbp + 0x178]
// asm:   0x18333f384: mov rcx, qword ptr [rax]
// asm:   0x18333f387: mov qword ptr [rbp + 0x20], rcx
// asm:   0x18333f38b: movabs rax, 0
// asm:   0x18333f395: add rsp, 0x20
// asm:   0x18333f399: pop rbp
// asm:   0x18333f39a: ret 

void MapEditor_DeleteObjectCommand__Unexecute(MapEditor_DeleteObjectCommand_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  System_Collections_Generic_List_int__o *pSVar5;
  System_Collections_Generic_List_int__o *source;
  System_Collections_Generic_Dictionary_int__MapObject__o *object;
  System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState__o *__this_01;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  UnityEngine_GameObject_o *__this_02;
  undefined8 uVar8;
  undefined8 uVar9;
  Il2CppObject *scriptObject;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  Map_MapScriptObjects_o *__this_03;
  System_Console_WindowsConsole_WindowsCancelHandler_o *__this_04;
  System_Collections_Generic_IEnumerable_TSource__o *collection;
  Map_MapObject_o *obj;
  Map_MapObject_o *parent;
  UnityEngine_Transform_o *__this_05;
  Unity_Mathematics_float3_o *pUVar16;
  UnityEngine_Quaternion_o *pUVar17;
  undefined1 local_218 [16];
  UnityEngine_Vector3_o local_208;
  undefined8 local_1f8;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_1f0;
  System_Collections_Generic_List_Enumerator_object__o local_1e8;
  Unity_Mathematics_float3_Fields local_1c8;
  Unity_Mathematics_float3_Fields local_1b8;
  UnityEngine_Vector3_Fields local_1a8;
  UnityEngine_Vector3_Fields local_198;
  UnityEngine_Vector3_Fields local_188;
  UnityEngine_Vector3_o local_178;
  Unity_Mathematics_float3_Fields local_168;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  System_Collections_Generic_List_Enumerator_T__o local_d8 [2];
  UnityEngine_Quaternion_Fields local_a8 [7];
  
  if (Il2CppMethodInitialized_184347005 == '\0') {
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
    Il2CppMethodInitialized_184347005 = '\x01';
  }
  local_1e8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_1e8.fields._index = 0;
  local_1e8.fields._version = 0;
  local_1e8.fields._current = (Il2CppObject *)0x0;
  local_158._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_158._8_8_ = 0;
  local_148 = (Il2CppObject *)0x0;
  uStack_140 = (Il2CppObject *)0x0;
  local_138._0_4_ = 0.0;
  local_138._4_4_ = 0.0;
  uStack_130 = 0;
  local_128 = 0.0;
  fStack_124 = 0.0;
  fStack_120 = 0.0;
  uStack_11c = 0;
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_03 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_03->klass->vtable)._9_Deserialize.methodPtr)
              (__this_03,(__this->fields)._script,(__this_03->klass->vtable)._9_Deserialize.method);
    __this_00 = (__this_03->fields).Objects;
    if (__this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                (local_d8,(System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
      local_1e8.fields._list = local_d8[0].fields._list;
      local_1e8.fields._index = local_d8[0].fields._index;
      local_1e8.fields._version = local_d8[0].fields._version;
      local_1e8.fields._current = local_d8[0].fields._current;
      local_218._0_4_ = 0.0;
      local_218._4_4_ = 0.0;
      local_218._8_8_ = &local_1e8;
      while( true ) {
        bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (&local_1e8,
                            (MethodInfo_153A2A0 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
                           );
        scriptObject = local_1e8.fields._current;
        if (!bVar15) break;
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)scriptObject,true,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_1e8,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar5 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
      if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        (pSVar5->fields)._size = 0;
        pSVar5 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
        source = (__this->fields)._oldOrder;
        object = TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
        __this_04 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
        if (object != (System_Collections_Generic_Dictionary_int__MapObject__o *)0x0) {
          System_Func_int__bool____ctor
                    (__this_04,(Il2CppObject *)object,
                     (intptr_t)((Il2CppClass *)object->klass)->vtable[0x24].method,(MethodInfo *)0x0);
          collection = System_Linq_Enumerable__Where_float_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                  (System_Func_TSource__bool__o *)__this_04,
                                  (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_int);
          if (pSVar5 != (System_Collections_Generic_List_int__o *)0x0) {
            System_Collections_Generic_List_int___AddRange
                      (pSVar5,(System_Collections_Generic_IEnumerable_T__o *)collection,
                       (MethodInfo_91A3E0 *)MethodInfo_System_Collections_Generic_List_int_AddRange);
            __this_01 = (__this->fields)._orphans;
            if (__this_01 !=
                (System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState__o *)0x0) {
              System_Collections_Generic_Dictionary_int__DeleteObjectCommand_OrphanState___GetEnumerator
                        ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_118,
                         __this_01,
                         (MethodInfo_14254F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_DeleteObjectCommand_OrphanState_GetEnumerator
                        );
              local_148._0_4_ = local_108;
              local_148._4_4_ = fStack_104;
              uStack_140._0_4_ = fStack_100;
              uStack_140._4_4_ = fStack_fc;
              local_138._0_4_ = local_f8;
              local_138._4_4_ = fStack_f4;
              uStack_130._0_4_ = fStack_f0;
              uStack_130._4_4_ = fStack_ec;
              local_128 = (float)local_e8;
              fStack_124 = (float)((ulonglong)local_e8 >> 0x20);
              fStack_120 = (float)uStack_e0;
              uStack_11c = (undefined4)((ulonglong)uStack_e0 >> 0x20);
              local_1f8 = 0;
              local_1f0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_158;
              while( true ) {
                do {
                  do {
                    bVar15 = System_Collections_Generic_Dictionary_Enumerator_int__DeleteObjectCommand_OrphanState___MoveNext
                                       ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                                        local_158,
                                        (MethodInfo_15643F0 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_DeleteObjectCommand_OrphanState_MoveNext
                                       );
                    fVar14 = uStack_130._4_4_;
                    fVar13 = (float)uStack_130;
                    fVar12 = local_138._4_4_;
                    fVar11 = (float)local_138;
                    fVar10 = local_148._4_4_;
                    fVar4 = (float)local_148;
                    if (!bVar15) {
                      System_Collections_Generic_Dictionary_Enumerator_int__DeleteObjectCommand_OrphanState___Dispose
                                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_158,
                                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_int_DeleteObjectCommand_OrphanState_Dispose
                                );
                      return;
                    }
                    local_118._4_4_ = local_148._4_4_;
                    fStack_110 = (float)uStack_140;
                    fStack_10c = uStack_140._4_4_;
                    local_108 = (float)local_138;
                    fStack_104 = local_138._4_4_;
                    fStack_100 = (float)uStack_130;
                    fStack_fc = uStack_130._4_4_;
                    local_f8 = local_128;
                    fStack_f4 = fStack_124;
                    fStack_f0 = fStack_120;
                    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                    }
                    pSVar6 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                    if (pSVar6 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    bVar15 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                                       (pSVar6,(int32_t)fVar4,
                                        (MethodInfo_1407110 *)
                                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
                                       );
                  } while (!bVar15);
                  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                  }
                  pSVar6 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                  if (pSVar6 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar15 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                                     (pSVar6,(int32_t)fVar10,
                                      (MethodInfo_1407110 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_ContainsKey
                                     );
                } while (!bVar15);
                if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
                }
                pSVar6 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                         TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                if (pSVar6 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                  ThrowNullReferenceException();
                }
                obj = (Map_MapObject_o *)
                      System_Collections_Generic_Dictionary_int__ulong___get_Item
                                (pSVar6,(int32_t)fVar4,
                                 (MethodInfo_14156F0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
                pSVar6 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                         TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
                if (pSVar6 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
                  ThrowNullReferenceException();
                }
                parent = (Map_MapObject_o *)
                         System_Collections_Generic_Dictionary_int__ulong___get_Item
                                   (pSVar6,(int32_t)fVar10,
                                    (MethodInfo_14156F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
                Map_MapLoader__SetParentLogical(obj,parent,(MethodInfo *)0x0);
                if (obj == (Map_MapObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pMVar7 = (obj->fields).ScriptObject;
                if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                (pMVar7->fields).Parent = (int32_t)fVar10;
                __this_02 = (obj->fields).GameObject;
                if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                __this_05 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
                uVar2._0_4_ = (obj->fields).BaseScale.fields.x;
                uVar2._4_4_ = (obj->fields).BaseScale.fields.y;
                fVar4 = (obj->fields).BaseScale.fields.z;
                if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                }
                fVar10 = fStack_f0;
                uVar9._4_4_ = fStack_f4;
                uVar9._0_4_ = local_f8;
                local_1c8.z = fStack_f0;
                local_1c8._0_8_ = uVar9;
                local_1b8._0_8_ = uVar2;
                local_1b8.z = fVar4;
                pUVar16 = Unity_Mathematics_float3__op_Multiply
                                    ((Unity_Mathematics_float3_o *)local_218,
                                     (Unity_Mathematics_float3_o *)&local_1b8,
                                     (Unity_Mathematics_float3_o *)&local_1c8,(MethodInfo *)0x0);
                if (__this_05 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                uVar3._0_4_ = (pUVar16->fields).x;
                uVar3._4_4_ = (pUVar16->fields).y;
                fVar4 = (pUVar16->fields).z;
                uVar8._4_4_ = fStack_10c;
                uVar8._0_4_ = fStack_110;
                local_1a8.z = fVar11;
                local_1a8._0_8_ = uVar8;
                UnityEngine_Transform__set_localPosition
                          (__this_05,(UnityEngine_Vector3_o *)&local_1a8,(MethodInfo *)0x0);
                local_208.fields.x = fVar12 * 0.017453292;
                local_208.fields.y = fVar13 * 0.017453292;
                local_208.fields.z = fVar14 * 0.017453292;
                pUVar17 = UnityEngine_Quaternion__Internal_FromEulerRad
                                    ((UnityEngine_Quaternion_o *)local_d8,&local_208,(MethodInfo *)0x0);
                local_a8[0].x = (pUVar17->fields).x;
                local_a8[0].y = (pUVar17->fields).y;
                local_a8[0].z = (pUVar17->fields).z;
                local_a8[0].w = (pUVar17->fields).w;
                UnityEngine_Transform__set_localRotation
                          (__this_05,(UnityEngine_Quaternion_o *)local_a8,(MethodInfo *)0x0);
                local_198._0_8_ = uVar3;
                local_198.z = fVar4;
                UnityEngine_Transform__set_localScale
                          (__this_05,(UnityEngine_Vector3_o *)&local_198,(MethodInfo *)0x0);
                pMVar7 = (obj->fields).ScriptObject;
                if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_188.z = fVar11;
                local_188._0_8_ = uVar8;
                Map_MapScriptBaseObject__SetPosition
                          (pMVar7,(UnityEngine_Vector3_o *)&local_188,(MethodInfo *)0x0);
                pMVar7 = (obj->fields).ScriptObject;
                if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) break;
                local_178.fields.x = fVar12;
                local_178.fields.y = fVar13;
                local_178.fields.z = fVar14;
                Map_MapScriptBaseObject__SetRotation(pMVar7,&local_178,(MethodInfo *)0x0);
                pMVar7 = (obj->fields).ScriptObject;
                if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) {
                  ThrowNullReferenceException();
                }
                local_168.z = fVar10;
                local_168._0_8_ = uVar9;
                Map_MapScriptBaseObject__SetScale
                          (pMVar7,(UnityEngine_Vector3_o *)&local_168,(MethodInfo *)0x0);
              }
              ThrowNullReferenceException();
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


