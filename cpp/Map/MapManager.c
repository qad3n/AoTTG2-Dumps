// Type: Map.MapManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapManager.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapManager.cs
// --------------------------------

// Map.MapManager$$Init
// il2cpp: void Map_MapManager__Init (const MethodInfo* method);
// 0x599ef50

void Map_MapManager__Init(MethodInfo *method)

{
  Map_MapManager_StaticFields *pMVar1;
  Map_MapManager_o *pMVar2;
  Events_OnLoadScene_o *__this;
  Events_OnPreLoadScene_o *__this_00;
  Map_MapTransfer_c *method_00;
  
  if (Il2CppMethodInitialized_07545a79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapManager_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapManager_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_MapManager);
    Il2CppMethodInitialized_07545a79 = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  pMVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Map_MapManager->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_MapManager);
  pMVar1 = TypeInfo_Map_MapManager->static_fields;
  pMVar1->_instance = pMVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->_instance);
  method_00 = TypeInfo_Map_MapTransfer;
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  Map_MapTransfer__Init((MethodInfo *)method_00);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  Map_MapLoader__Init((MethodInfo *)0x0);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  Map_BuiltinLevels__Init((MethodInfo *)0x0);
  if ((TypeInfo_Map_BuiltinMapPrefabs->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapPrefabs);
  }
  Map_BuiltinMapPrefabs__Init((MethodInfo *)0x0);
  if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
  }
  Map_BuiltinMapTextures__Init((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
  Events_OnLoadScene___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_MapManager_OnLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnLoadScene(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_MapManager_OnPreLoadScene,
             (MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(__this_00,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$TryGetRandomTagXform
// il2cpp: bool Map_MapManager__TryGetRandomTagXform (System_String_o* tag, UnityEngine_Transform_o** xform, const MethodInfo* method);
// 0x599f210

bool Map_MapManager__TryGetRandomTagXform
               (System_String_o *tag,UnityEngine_Transform_o **xform,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *exists;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)xform;
  if (Il2CppMethodInitialized_07545a7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a7a = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  exists = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag(tag,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar2 = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  if (bVar1) {
    if (exists == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)exists,(MethodInfo *)0x0);
  }
  *xform = pUVar2;
  Il2CppCodeGenWriteBarrier(xform);
  return bVar1;
}


// Map.MapManager$$TryGetRandomTagsXform
// il2cpp: bool Map_MapManager__TryGetRandomTagsXform (System_Collections_Generic_List_string__o* tags, UnityEngine_Transform_o** xform, const MethodInfo* method);
// 0x599f470
// eh: try 0x599f544..0x599f605 -> pad 0x599f611 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599f629..0x599f62e -> pad 0x599f64d cleanup
// eh: try 0x599f650..0x599f65a -> pad 0x599f662 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599f605: jmp 0x599f611
// asm:   0x599f607: jmp 0x599f611
// asm:   0x599f609: jmp 0x599f611
// asm:   0x599f60b: jmp 0x599f611
// asm:   0x599f60d: jmp 0x599f611
// asm:   0x599f60f: jmp 0x599f611
// asm:   0x599f611: mov rbx, rax
// asm:   0x599f614: cmp edx, 1
// asm:   0x599f617: jne 0x599f650
// asm:   0x599f619: mov rdi, rbx
// asm:   0x599f61c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599f621: mov rbx, qword ptr [rax]
// asm:   0x599f624: mov qword ptr [rsp + 0x20], rbx
// asm:   0x599f629: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599f62e: lea rax, [rip + 0x18ef4c3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x599f635: mov rsi, qword ptr [rax]
// asm:   0x599f638: mov rdi, rsp
// asm:   0x599f63b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x599f640: test rbx, rbx
// asm:   0x599f643: je 0x599f5d7
// asm:   0x599f645: mov rdi, rbx
// asm:   0x599f648: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599f64d: mov rbx, rax
// asm:   0x599f650: lea rdi, [rsp + 0x20]
// asm:   0x599f655: call 0x2fd4d00  ; il2cpp_runtime_helper_02fd4d00()
// asm:   0x599f65a: mov rdi, rbx
// asm:   0x599f65d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x599f662: mov rdi, rax
// asm:   0x599f665: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_MapManager__TryGetRandomTagsXform
               (System_Collections_Generic_List_string__o *tags,UnityEngine_Transform_o **xform,
               MethodInfo *method)

{
  Il2CppObject *tag;
  bool bVar1;
  UnityEngine_Object_o *exists;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07545a7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545a7b = '\x01';
  }
  if (tags == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)tags,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
  local_68.fields._current = (Il2CppObject *)local_38;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = &local_68;
  do {
    method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext;
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    tag = local_68.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      *xform = (UnityEngine_Transform_o *)0x0;
      Il2CppCodeGenWriteBarrier(xform);
      return false;
    }
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    exists = (UnityEngine_Object_o *)Map_MapManager__GetRandomTag((System_String_o *)tag,method_00);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
  } while (!bVar1);
  if (exists == (UnityEngine_Object_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)exists,(MethodInfo *)0x0);
  *xform = pUVar2;
  Il2CppCodeGenWriteBarrier(xform);
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  return true;
}


// Map.MapManager$$TryGetRandomTagXforms
// il2cpp: bool Map_MapManager__TryGetRandomTagXforms (System_String_o* tag, UnityEngine_Vector3_o avoidPosition, float avoidRadius, int32_t count, System_Collections_Generic_List_Transform__o** xforms, const MethodInfo* method);
// 0x599f670
// eh: try 0x599f89f..0x599fbec -> pad 0x599fbf8 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x599fc10..0x599fc15 -> pad 0x599fc3a cleanup
// eh: try 0x599fc3d..0x599fc47 -> pad 0x599fc4f catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599faad: jmp 0x599fad0
// asm:   0x599fbec: jmp 0x599fbf8
// asm:   0x599fbee: jmp 0x599fbf8
// asm:   0x599fbf0: jmp 0x599fbf8
// asm:   0x599fbf2: jmp 0x599fbf8
// asm:   0x599fbf4: jmp 0x599fbf8
// asm:   0x599fbf6: jmp 0x599fbf8
// asm:   0x599fbf8: mov rbp, rax
// asm:   0x599fbfb: cmp edx, 1
// asm:   0x599fbfe: jne 0x599fc3d
// asm:   0x599fc00: mov rdi, rbp
// asm:   0x599fc03: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x599fc08: mov rbp, qword ptr [rax]
// asm:   0x599fc0b: mov qword ptr [rsp + 0x48], rbp
// asm:   0x599fc10: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x599fc15: lea rax, [rip + 0x18ee7a4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x599fc1c: mov rsi, qword ptr [rax]
// asm:   0x599fc1f: lea rdi, [rsp + 0x20]
// asm:   0x599fc24: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x599fc29: test rbp, rbp
// asm:   0x599fc2c: je 0x599f944
// asm:   0x599fc32: mov rdi, rbp
// asm:   0x599fc35: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x599fc3a: mov rbp, rax
// asm:   0x599fc3d: lea rdi, [rsp + 0x48]
// asm:   0x599fc42: call 0x2fd4d30  ; il2cpp_runtime_helper_02fd4d30()
// asm:   0x599fc47: mov rdi, rbp
// asm:   0x599fc4a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x599fc4f: mov rdi, rax
// asm:   0x599fc52: call 0x2ab61e0  ; __clang_call_terminate()

bool Map_MapManager__TryGetRandomTagXforms
               (System_String_o *tag,UnityEngine_Vector3_o avoidPosition,float avoidRadius,int32_t count,
               System_Collections_Generic_List_Transform__o **xforms,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Transform_array *pUVar4;
  System_Collections_Generic_List_Transform__o *__this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  MethodInfo *pMVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  bool bVar15;
  int32_t index;
  System_Collections_Generic_List_Transform__o *__this_01;
  System_Collections_Generic_List_Transform__o *pSVar16;
  UnityEngine_Transform_o *pUVar17;
  int maxExclusive;
  int iVar18;
  int iVar19;
  float fVar20;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar21;
  float in_XMM1_Db;
  float fVar22;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar23;
  UnityEngine_Vector3_o UVar24;
  undefined1 local_b8 [8];
  undefined1 *puStack_b0;
  Il2CppObject *local_a8;
  System_Collections_Generic_List_object__o *local_98;
  undefined1 local_90 [16];
  Il2CppObject *local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [24];
  
  local_78 = avoidPosition.fields.z;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = avoidPosition.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  fStack_74 = in_XMM1_Db;
  fStack_70 = in_XMM1_Dc;
  fStack_6c = in_XMM1_Dd;
  if (Il2CppMethodInitialized_07545a7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_RemoveAt)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_ctor_7197140);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Transform_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Transform_get_Item)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545a7c = '\x01';
  }
  local_98 = (System_Collections_Generic_List_object__o *)0x0;
  local_b8 = (undefined1  [8])0x0;
  puStack_b0 = (undefined1 *)0x0;
  local_a8 = (Il2CppObject *)0x0;
  *xforms = (System_Collections_Generic_List_Transform__o *)0x0;
  Il2CppCodeGenWriteBarrier(xforms);
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Map_MapLoader->static_fields->Tags;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0599fbbe:
    ThrowNullReferenceException();
  }
  bVar14 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                     (__this,(Il2CppObject *)tag,(Il2CppObject **)&local_98,
                      (MethodInfo_4AAF440 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_TryGetValue);
  if (bVar14) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
    pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar16,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Transform_ctor);
    *xforms = pSVar16;
    Il2CppCodeGenWriteBarrier(xforms);
    if (local_98 == (System_Collections_Generic_List_object__o *)0x0) goto label_0599fbbe;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_90,local_98,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    local_a8 = local_80;
    local_b8 = (undefined1  [8])local_90._0_8_;
    puStack_b0 = (undefined1 *)local_90._8_8_;
    local_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_90._8_8_ = local_b8;
    if (__this_01 == (System_Collections_Generic_List_Transform__o *)0x0) {
      bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                          (MethodInfo_4C45C50 *)
                          MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
      if (bVar15) {
        if (local_a8 != (Il2CppObject *)0x0) {
          if (local_a8[1].monitor != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__get_transform(local_a8[1].monitor,(MethodInfo *)0x0);
label_0599fbe7:
            ThrowNullReferenceException();
          }
label_0599fbdb:
          ThrowNullReferenceException();
        }
label_0599fbcd:
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext),
            bVar15) {
        if (local_a8 == (Il2CppObject *)0x0) goto label_0599fbcd;
        if (local_a8[1].monitor == (UnityEngine_GameObject_o *)0x0) goto label_0599fbdb;
        pUVar17 = UnityEngine_GameObject__get_transform(local_a8[1].monitor,(MethodInfo *)0x0);
        pMVar7 = MethodInfo_System_Collections_Generic_List_Transform_Add;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (__this_01->fields)._items;
        if (pUVar4 == (UnityEngine_Transform_array *)0x0) goto label_0599fbe7;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2] = pUVar17;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar17,
                     (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_b8,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    pSVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)pSVar16,
               (System_Collections_Generic_IEnumerable_T__o *)__this_01,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_Transform_ctor_7197140);
    fStack_70 = fStack_74;
    if (0 < count) {
      fStack_74 = (float)local_48._0_4_;
      fStack_6c = (float)local_48._4_4_;
      iVar19 = 0;
      iVar18 = 0;
      do {
        if (pSVar16 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_0599fbbe;
        maxExclusive = (pSVar16->fields)._size;
        if (maxExclusive < 1) {
          pSVar16 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Transform);
          System_Collections_Generic_List_object____ctor_395ca70
                    ((System_Collections_Generic_List_object__o *)pSVar16,
                     (System_Collections_Generic_IEnumerable_T__o *)__this_01,
                     (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_Transform_ctor_7197140);
          if (pSVar16 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_0599fbbe;
          maxExclusive = (pSVar16->fields)._size;
        }
        index = UnityEngine_Random__Range_690e2b0(0,maxExclusive,(MethodInfo *)0x0);
        pUVar17 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar16,index,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_Transform_get_Item);
        if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_0599fbbe;
        UVar24 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
        fVar23 = UVar24.fields.x;
        fVar20 = UVar24.fields.y;
        if (avoidRadius <= 0.0) {
label_0599fad0:
          __this_00 = *xforms;
          pUVar17 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar16,index,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_Transform_get_Item);
          pMVar7 = MethodInfo_System_Collections_Generic_List_Transform_Add;
          if (__this_00 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_0599fbbe;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (__this_00->fields)._items;
          if (pUVar4 == (UnityEngine_Transform_array *)0x0) goto label_0599fbbe;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pUVar4->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pUVar4->m_Items[(int)uVar2] = pUVar17;
            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar17,
                       (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
          }
        }
        else {
          if (g_data_0753e7b7 == '\0') {
            uStack_50 = extraout_XMM0_Dc;
            local_58 = (undefined1  [8])UVar24.fields._0_8_;
            uStack_4c = extraout_XMM0_Dd;
            local_68 = UVar24.fields.z;
            fStack_64 = in_XMM1_Db;
            fStack_60 = in_XMM1_Dc;
            fStack_5c = in_XMM1_Dd;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            g_data_0753e7b7 = '\x01';
            uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
            fVar23 = (float)local_58._0_4_;
            fVar20 = (float)local_58._4_4_;
            uVar5 = uStack_50;
            uVar6 = uStack_4c;
            fVar21 = local_68;
            fVar8 = local_68;
            fVar22 = fStack_64;
            fVar9 = fStack_64;
            fVar12 = fStack_60;
            fVar10 = fStack_60;
            fVar13 = fStack_5c;
            fVar11 = fStack_5c;
          }
          else {
            uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
            uVar5 = extraout_XMM0_Dc;
            uVar6 = extraout_XMM0_Dd;
            fVar21 = UVar24.fields.z;
            fVar8 = local_68;
            fVar22 = in_XMM1_Db;
            fVar9 = fStack_64;
            fVar12 = in_XMM1_Dc;
            fVar10 = fStack_60;
            fVar13 = in_XMM1_Dd;
            fVar11 = fStack_5c;
          }
          fStack_5c = fVar13;
          fStack_60 = fVar12;
          fStack_64 = fVar22;
          local_68 = fVar21;
          fVar21 = local_68;
          fVar22 = fStack_64;
          if (uVar3 == 0) {
            local_58._4_4_ = fVar20;
            local_58._0_4_ = fVar23;
            uStack_50 = uVar5;
            uStack_4c = uVar6;
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            fVar21 = local_68;
            fVar22 = fStack_64;
            fVar23 = (float)local_58._0_4_;
            fVar20 = (float)local_58._4_4_;
            fVar8 = local_68;
            fVar9 = fStack_64;
            fVar10 = fStack_60;
            fVar11 = fStack_5c;
          }
          fStack_5c = fVar11;
          fStack_60 = fVar10;
          fStack_64 = fVar9;
          local_68 = fVar8;
          in_XMM1_Db = (fVar23 - fStack_74) * (fVar23 - fStack_74);
          in_XMM1_Dc = (fVar22 - fStack_70) * (fVar22 - fStack_70);
          in_XMM1_Dd = (fVar20 - fStack_6c) * (fVar20 - fStack_6c);
          fVar23 = (fVar20 - (float)local_48._4_4_) * (fVar20 - (float)local_48._4_4_) + in_XMM1_Db +
                   (fVar21 - local_78) * (fVar21 - local_78);
          if (fVar23 < 0.0) {
            fVar23 = sqrtf(fVar23);
            if (fVar23 <= avoidRadius) goto label_0599fabf;
            goto label_0599fad0;
          }
          if (avoidRadius < SQRT(fVar23)) goto label_0599fad0;
label_0599fabf:
          if (100 < iVar19) goto label_0599fad0;
          iVar18 = iVar18 + -1;
          iVar19 = iVar19 + 1;
        }
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar16,index,
                   (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_Transform_RemoveAt);
        iVar18 = iVar18 + 1;
      } while (iVar18 < count);
    }
  }
  return bVar14;
}


// Map.MapManager$$GetRandomTag
// il2cpp: UnityEngine_GameObject_o* Map_MapManager__GetRandomTag (System_String_o* tag, const MethodInfo* method);
// 0x599f2d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599f308: jmp 0x599f45d

UnityEngine_GameObject_o * Map_MapManager__GetRandomTag(System_String_o *tag,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_T__o *list;
  Map_MapObject_o *pMVar5;
  
  if (Il2CppMethodInitialized_07545a7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MiscExtensions_GetRandomItem_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_07545a7d = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->Tags;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields + 0x20);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)tag,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_ContainsKey);
    if (!bVar3) {
      return (UnityEngine_GameObject_o *)0x0;
    }
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Map_MapLoader->static_fields->Tags;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)tag,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item),
       pIVar4 != (Il2CppObject *)0x0)) {
      if (*(int *)&pIVar4[1].monitor < 1) {
        return (UnityEngine_GameObject_o *)0x0;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Map_MapLoader->static_fields->Tags;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        list = (System_Collections_Generic_List_T__o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar2,(Il2CppObject *)tag,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_List_MapObject_get_Item);
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        pMVar5 = MiscExtensions__GetRandomItem_object_
                           (list,(MethodInfo_358DA10 *)MethodInfo_MiscExtensions_GetRandomItem_MapObject);
        if (pMVar5 != (Map_MapObject_o *)0x0) {
          return (pMVar5->fields).GameObject;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapManager$$OnPreLoadScene
// il2cpp: void Map_MapManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x599fc60

void Map_MapManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545a7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_07545a7e = '\x01';
    uVar1 = (TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    TypeInfo_Map_MapManager->static_fields->MapLoaded = false;
    return;
  }
  *(undefined1 *)((Il2CppClass *)TypeInfo_Map_MapManager)->static_fields = 0;
  return;
}


// Map.MapManager$$OnLoadScene
// il2cpp: void Map_MapManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x599fcd0

void Map_MapManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapManager_c *pMVar1;
  
  if (Il2CppMethodInitialized_07545a7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_07545a7f = '\x01';
  }
  if (sceneName == 3) {
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      pMVar1 = TypeInfo_Map_MapManager;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
      Map_MapManager__StartMapEditor((MethodInfo *)pMVar1);
      return;
    }
    Map_MapManager__StartMapEditor((MethodInfo *)TypeInfo_Map_MapManager);
    return;
  }
  if (sceneName != 2) {
    customAssets = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)customAssets,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    objects = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)objects,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    Map_MapLoader__StartLoadObjects
              (customAssets,objects,(Map_MapScriptOptions_o *)0x0,(Settings_WeatherSet_o *)0x0,false,
               (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    pMVar1 = TypeInfo_Map_MapManager;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    Map_MapManager__StartInGame((MethodInfo *)pMVar1);
    return;
  }
  Map_MapManager__StartInGame((MethodInfo *)TypeInfo_Map_MapManager);
  return;
}


// Map.MapManager$$StartInGame
// il2cpp: void Map_MapManager__StartInGame (const MethodInfo* method);
// 0x599fe30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x599fe6a: jmp 0x59a00aa

void Map_MapManager__StartInGame(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Map_MapManager_StaticFields *pMVar4;
  System_String_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  System_String_o *mapName;
  Photon_Pun_PhotonView_o *__this;
  Photon_Pun_PhotonMessageInfo_o info;
  bool bVar7;
  MethodInfo *method_00;
  Map_MapScript_o *pMVar8;
  System_Object_array *parameters;
  Il2CppObject *pIVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  Il2CppMethodPointer pIStack_38;
  Il2CppMethodPointer pIStack_30;
  Photon_Pun_PhotonView_o *pPStack_28;
  
  if (Il2CppMethodInitialized_07545a80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadBuiltinMapRPC");
    Il2CppMethodInitialized_07545a80 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_0599fe5b;
label_0599ff1d:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_0599ff1d;
label_0599fe5b:
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar7) {
    return;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).MapCategory, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    bVar7 = System_String__op_Equality((pSVar3->fields)._value,"Custom",(MethodInfo *)0x0);
    if (bVar7) {
      pSVar3 = (pSVar2->fields).MapName;
      if (pSVar3 != (Settings_StringSetting_o *)0x0) {
        pMVar10 = (MethodInfo *)(pSVar3->fields)._value;
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        method_00 = (MethodInfo *)
                    Map_BuiltinLevels__LoadMap
                              ("Custom",(System_String_o *)pMVar10,(MethodInfo *)0x0);
        pMVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
        Map_MapScript___ctor(pMVar8,pMVar10);
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        pMVar4 = TypeInfo_Map_MapManager->static_fields;
        pMVar4->MapScript = pMVar8;
        Il2CppCodeGenWriteBarrier(&pMVar4->MapScript);
        pMVar8 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if (pMVar8 != (Map_MapScript_o *)0x0) {
          (*(pMVar8->klass->vtable)._5_Deserialize.methodPtr)
                    (pMVar8,(System_String_o *)method_00,true,(pMVar8->klass->vtable)._5_Deserialize.method);
          pSVar3 = (pSVar2->fields).MapName;
          if (pSVar3 != (Settings_StringSetting_o *)0x0) {
            pSVar5 = (pSVar3->fields)._value;
            if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
            }
            Map_MapTransfer__Start(pSVar5,method_00);
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            pMVar10 = (MethodInfo *)&pIStack_38;
            Utility_Util__CreateLocalPhotonInfo((Photon_Pun_PhotonMessageInfo_o *)pMVar10,(MethodInfo *)0x0);
            info.fields.Sender = (Photon_Realtime_Player_o *)pIStack_30;
            info.fields._0_8_ = pIStack_38;
            info.fields.photonView = pPStack_28;
            Map_MapManager__OnLoadCachedMapRPC(info,pMVar10);
            return;
          }
        }
      }
    }
    else {
      pSVar3 = (pSVar2->fields).MapCategory;
      if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
         (pSVar6 = (pSVar2->fields).MapName, pSVar6 != (Settings_StringSetting_o *)0x0)) {
        pSVar5 = (pSVar3->fields)._value;
        mapName = (pSVar6->fields)._value;
        pMVar10 = extraout_RDX;
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          pMVar10 = extraout_RDX_00;
        }
        Map_MapTransfer__UseBuiltin(pSVar5,mapName,pMVar10);
        TypeInfo_Map_MapTransfer->static_fields->MapTransferReady = true;
        __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        pSVar3 = (pSVar2->fields).MapCategory;
        if ((pSVar3 != (Settings_StringSetting_o *)0x0) && (parameters != (System_Object_array *)0x0)) {
          pSVar5 = (pSVar3->fields)._value;
          if ((pSVar5 != (System_String_o *)0x0) &&
             (pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar5,(((parameters->obj).klass)->_1).element_class),
             pIVar9 == (Il2CppObject *)0x0)) {
label_059a01fe:
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
label_059a01f9:
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pSVar5;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          pSVar3 = (pSVar2->fields).MapName;
          if (pSVar3 != (Settings_StringSetting_o *)0x0) {
            pSVar5 = (pSVar3->fields)._value;
            if ((pSVar5 != (System_String_o *)0x0) &&
               (pIVar9 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar5,(((parameters->obj).klass)->_1).element_class),
               pIVar9 == (Il2CppObject *)0x0)) goto label_059a01fe;
            if ((parameters->max_length & 0xfffffffe) == 0) goto label_059a01f9;
            parameters->m_Items[1] = (Il2CppObject *)pSVar5;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
            if (__this != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinMapRPC",0,parameters,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapManager$$StartMapEditor
// il2cpp: void Map_MapManager__StartMapEditor (const MethodInfo* method);
// 0x59a0210
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a0362: jmp 0x59a0527

void Map_MapManager__StartMapEditor(MethodInfo *method)

{
  Settings_MapEditorSettings_o *pSVar1;
  MethodInfo *__this;
  Il2CppClass *name;
  Map_MapManager_StaticFields *pMVar2;
  Map_MapScriptCustomAssets_o *pMVar3;
  Map_MapScriptObjects_o *pMVar4;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  System_Collections_Generic_List_string__o *parseErrors;
  bool bVar5;
  System_String_array *source;
  System_Collections_Generic_List_TSource__o *__this_00;
  Il2CppClass *pIVar6;
  Map_MapScript_o *pMVar7;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545a81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Untitled");
    Il2CppMethodInitialized_07545a81 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
  if (pSVar1 == (Settings_MapEditorSettings_o *)0x0) goto label_059a0527;
  __this = (MethodInfo *)(pSVar1->fields).CurrentMap;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  source = Map_BuiltinLevels__GetMapNames("Custom",(MethodInfo *)0x0);
  __this_00 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  if (__this == (MethodInfo *)0x0) goto label_059a0527;
  bVar5 = System_String__op_Equality
                    ((System_String_o *)__this->klass,
                     (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar5) {
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_059a0527;
label_059a038a:
    if ((__this_00->fields)._size < 1) {
      method_00 = __this;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)"Untitled",
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      name = __this->klass;
      pIVar6 = (Il2CppClass *)Map_MapScript__CreateDefault(method_00);
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      Map_BuiltinLevels__SaveCustomMap((System_String_o *)name,(Map_MapScript_o *)pIVar6,(MethodInfo *)0x0);
    }
    else {
      pIVar6 = (Il2CppClass *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)pIVar6,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
  }
  else {
    if (__this_00 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_059a0527;
    pIVar6 = __this->klass;
    bVar5 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pIVar6,
                       (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    if (!bVar5) goto label_059a038a;
  }
  pMVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
  Map_MapScript___ctor(pMVar7,(MethodInfo *)pIVar6);
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  pMVar2 = TypeInfo_Map_MapManager->static_fields;
  pMVar2->MapScript = pMVar7;
  Il2CppCodeGenWriteBarrier(&pMVar2->MapScript);
  pMVar7 = TypeInfo_Map_MapManager->static_fields->MapScript;
  pIVar6 = __this->klass;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar8 = Map_BuiltinLevels__LoadMap("Custom",(System_String_o *)pIVar6,(MethodInfo *)0x0);
  if (pMVar7 != (Map_MapScript_o *)0x0) {
    (*(pMVar7->klass->vtable)._5_Deserialize.methodPtr)
              (pMVar7,pSVar8,true,(pMVar7->klass->vtable)._5_Deserialize.method);
    pMVar7 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (((pMVar7 != (Map_MapScript_o *)0x0) &&
        (pMVar3 = (pMVar7->fields).CustomAssets, pMVar3 != (Map_MapScriptCustomAssets_o *)0x0)) &&
       (pMVar4 = (pMVar7->fields).Objects, pMVar4 != (Map_MapScriptObjects_o *)0x0)) {
      customAssets = (pMVar3->fields).CustomAssets;
      objects = (pMVar4->fields).Objects;
      options = (pMVar7->fields).Options;
      weather = (pMVar7->fields).Weather;
      parseErrors = (pMVar7->fields).Errors;
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      Map_MapLoader__StartLoadObjects(customAssets,objects,options,weather,true,parseErrors,(MethodInfo *)0x0)
      ;
      return;
    }
  }
label_059a0527:
  ThrowNullReferenceException();
}


// Map.MapManager$$OnLoadBuiltinMapRPC
// il2cpp: void Map_MapManager__OnLoadBuiltinMapRPC (System_String_o* category, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x59a11b0

void Map_MapManager__OnLoadBuiltinMapRPC
               (System_String_o *category,System_String_o *name,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Map_MapManager_StaticFields *pMVar1;
  System_String_o *pSVar2;
  Map_MapTransfer_StaticFields *pMVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameGeneralSettings_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  bool bVar7;
  bool mapChanged;
  Map_MapScript_o *pMVar8;
  MethodInfo *method_00;
  System_String_o *pSStack_20;
  
  if (Il2CppMethodInitialized_07545a82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07545a82 = '\x01';
  }
  pSStack_20 = (System_String_o *)0x0;
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) goto label_059a1458;
  bVar7 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    bVar7 = Map_BuiltinLevels__TryLoadBuiltinMap(category,name,&pSStack_20,(MethodInfo *)0x0);
    if (bVar7) {
      pMVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
      Map_MapScript___ctor(pMVar8,(MethodInfo *)name);
      if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
      }
      pMVar1 = TypeInfo_Map_MapManager->static_fields;
      pMVar1->MapScript = pMVar8;
      Il2CppCodeGenWriteBarrier(&pMVar1->MapScript);
      pMVar8 = TypeInfo_Map_MapManager->static_fields->MapScript;
      if (pMVar8 != (Map_MapScript_o *)0x0) {
        (*(pMVar8->klass->vtable)._5_Deserialize.methodPtr)
                  (pMVar8,pSStack_20,true,(pMVar8->klass->vtable)._5_Deserialize.method);
        pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        }
        pMVar3 = TypeInfo_Map_MapTransfer->static_fields;
        pMVar3->MapHash = pSVar2;
        Il2CppCodeGenWriteBarrier(&pMVar3->MapHash);
        pMVar8 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if (pMVar8 != (Map_MapScript_o *)0x0) {
          bVar7 = System_String__op_Inequality
                            (TypeInfo_Map_MapManager->static_fields->LastMapHash,(pMVar8->fields).MapHash,
                             (MethodInfo *)0x0);
          mapChanged = true;
          if (!bVar7) {
            if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
            }
            pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
            if (((pSVar4 == (Settings_InGameSet_o *)0x0) ||
                (pSVar5 = (pSVar4->fields).General, pSVar5 == (Settings_InGameGeneralSettings_o *)0x0)) ||
               (pSVar6 = (pSVar5->fields).GameMode, pSVar6 == (Settings_StringSetting_o *)0x0))
            goto label_059a1458;
            mapChanged = System_String__op_Inequality
                                   (TypeInfo_Map_MapManager->static_fields->LastGameMode,
                                    (pSVar6->fields)._value,(MethodInfo *)0x0);
          }
          if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
          }
          pMVar1 = TypeInfo_Map_MapManager->static_fields;
          if (pMVar1->MapScript != (Map_MapScript_o *)0x0) {
            pMVar1->LastMapHash = (pMVar1->MapScript->fields).MapHash;
            Il2CppCodeGenWriteBarrier(&pMVar1->LastMapHash);
            pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
            if (((pSVar4 != (Settings_InGameSet_o *)0x0) &&
                (pSVar5 = (pSVar4->fields).General, pSVar5 != (Settings_InGameGeneralSettings_o *)0x0)) &&
               (pSVar6 = (pSVar5->fields).GameMode, pSVar6 != (Settings_StringSetting_o *)0x0)) {
              method_00 = (MethodInfo *)(pSVar6->fields)._value;
              pMVar1 = TypeInfo_Map_MapManager->static_fields;
              pMVar1->LastGameMode = (System_String_o *)method_00;
              Il2CppCodeGenWriteBarrier(&pMVar1->LastGameMode);
              Map_MapManager__LoadMap(mapChanged,method_00);
              return;
            }
          }
        }
      }
label_059a1458:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Map.MapManager$$OnLoadCachedMapRPC
// il2cpp: void Map_MapManager__OnLoadCachedMapRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x59a0b30

void Map_MapManager__OnLoadCachedMapRPC(Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Map_MapManager_StaticFields *pMVar5;
  bool bVar6;
  bool mapChanged;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545a83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07545a83 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar6 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  pMVar1 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if (pMVar1 != (Map_MapScript_o *)0x0) {
    bVar6 = System_String__op_Inequality
                      (TypeInfo_Map_MapManager->static_fields->LastMapHash,(pMVar1->fields).MapHash,
                       (MethodInfo *)0x0);
    mapChanged = true;
    if (!bVar6) {
      if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
      }
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar2 == (Settings_InGameSet_o *)0x0) ||
          (pSVar3 = (pSVar2->fields).General, pSVar3 == (Settings_InGameGeneralSettings_o *)0x0)) ||
         (pSVar4 = (pSVar3->fields).GameMode, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_059a0cc0;
      mapChanged = System_String__op_Inequality
                             (TypeInfo_Map_MapManager->static_fields->LastGameMode,(pSVar4->fields)._value,
                              (MethodInfo *)0x0);
    }
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    pMVar5 = TypeInfo_Map_MapManager->static_fields;
    if (pMVar5->MapScript != (Map_MapScript_o *)0x0) {
      pMVar5->LastMapHash = (pMVar5->MapScript->fields).MapHash;
      Il2CppCodeGenWriteBarrier(&pMVar5->LastMapHash);
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
          (pSVar3 = (pSVar2->fields).General, pSVar3 != (Settings_InGameGeneralSettings_o *)0x0)) &&
         (pSVar4 = (pSVar3->fields).GameMode, pSVar4 != (Settings_StringSetting_o *)0x0)) {
        method_00 = (MethodInfo *)(pSVar4->fields)._value;
        pMVar5 = TypeInfo_Map_MapManager->static_fields;
        pMVar5->LastGameMode = (System_String_o *)method_00;
        Il2CppCodeGenWriteBarrier(&pMVar5->LastGameMode);
        Map_MapManager__LoadMap(mapChanged,method_00);
        return;
      }
    }
  }
label_059a0cc0:
  ThrowNullReferenceException();
}


// Map.MapManager$$LoadMap
// il2cpp: void Map_MapManager__LoadMap (bool mapChanged, const MethodInfo* method);
// 0x59a1460

void Map_MapManager__LoadMap(bool mapChanged,MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  Map_MapScriptCustomAssets_o *pMVar2;
  Map_MapScriptObjects_o *pMVar3;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  System_Collections_Generic_List_string__o *parseErrors;
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_07545a84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"CustomMapHash");
    Il2CppMethodInitialized_07545a84 = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  TypeInfo_Map_MapManager->static_fields->NeedsNavMeshUpdate = mapChanged;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  PhotonExtensions__SetCustomProperty
            (player,"CustomMapHash",(Il2CppObject *)TypeInfo_Map_MapTransfer->static_fields->MapHash,
             (MethodInfo *)0x0);
  pMVar1 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if (((pMVar1 == (Map_MapScript_o *)0x0) ||
      (pMVar2 = (pMVar1->fields).CustomAssets, pMVar2 == (Map_MapScriptCustomAssets_o *)0x0)) ||
     (pMVar3 = (pMVar1->fields).Objects, pMVar3 == (Map_MapScriptObjects_o *)0x0)) {
    ThrowNullReferenceException();
  }
  customAssets = (pMVar2->fields).CustomAssets;
  objects = (pMVar3->fields).Objects;
  options = (pMVar1->fields).Options;
  weather = (pMVar1->fields).Weather;
  parseErrors = (pMVar1->fields).Errors;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  Map_MapLoader__StartLoadObjects(customAssets,objects,options,weather,false,parseErrors,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$OnPlayerEnteredRoom
// il2cpp: void Map_MapManager__OnPlayerEnteredRoom (Map_MapManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59a15c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a15fb: jmp 0x59a1744

void Map_MapManager__OnPlayerEnteredRoom
               (Map_MapManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  char cVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Photon_Pun_PhotonView_o *__this_00;
  System_String_o *pSVar5;
  bool bVar6;
  System_Object_array *parameters;
  Il2CppObject *pIVar7;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545a85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadBuiltinMapRPC");
    Il2CppMethodInitialized_07545a85 = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_059a15ec;
label_059a167e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_059a167e;
label_059a15ec:
    bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (bVar6) {
    if ((((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      cVar1 = TypeInfo_Map_MapTransfer->static_fields->MapTransferReady;
      method_00 = (MethodInfo *)"Custom";
    }
    else {
      cVar1 = *(char *)((Il2CppClass *)TypeInfo_Map_MapTransfer)->static_fields;
      method_00 = (MethodInfo *)"Custom";
    }
    "Custom" = (System_String_o *)method_00;
    if (cVar1 != '\0') {
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
          (pSVar3 = (pSVar2->fields).General, pSVar3 != (Settings_InGameGeneralSettings_o *)0x0)) &&
         (pSVar4 = (pSVar3->fields).MapCategory, pSVar4 != (Settings_StringSetting_o *)0x0)) {
        bVar6 = System_String__op_Equality
                          ((pSVar4->fields)._value,(System_String_o *)method_00,(MethodInfo *)0x0);
        if (bVar6) {
          if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          }
          Map_MapTransfer__Transfer(player,method_00);
          return;
        }
        __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        pSVar4 = (pSVar3->fields).MapCategory;
        if ((pSVar4 != (Settings_StringSetting_o *)0x0) && (parameters != (System_Object_array *)0x0)) {
          pSVar5 = (pSVar4->fields)._value;
          if ((pSVar5 != (System_String_o *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar5,(((parameters->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
label_059a183f:
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
label_059a183a:
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pSVar5;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          pSVar4 = (pSVar3->fields).MapName;
          if (pSVar4 != (Settings_StringSetting_o *)0x0) {
            pSVar5 = (pSVar4->fields)._value;
            if ((pSVar5 != (System_String_o *)0x0) &&
               (pIVar7 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar5,(((parameters->obj).klass)->_1).element_class),
               pIVar7 == (Il2CppObject *)0x0)) goto label_059a183f;
            if ((parameters->max_length & 0xfffffffe) == 0) goto label_059a183a;
            parameters->m_Items[1] = (Il2CppObject *)pSVar5;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
            if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC_56e5850
                        (__this_00,"LoadBuiltinMapRPC",player,parameters,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Map.MapManager$$.ctor
// il2cpp: void Map_MapManager___ctor (Map_MapManager_o* __this, const MethodInfo* method);
// 0x59a1940

void Map_MapManager___ctor(Map_MapManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapManager$$.cctor
// il2cpp: void Map_MapManager___cctor (const MethodInfo* method);
// 0x59a1950

void Map_MapManager___cctor(MethodInfo *method)

{
  Map_MapManager_StaticFields *pMVar1;
  
  if (Il2CppMethodInitialized_07545a86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_07545a86 = '\x01';
  }
  pMVar1 = TypeInfo_Map_MapManager->static_fields;
  pMVar1->NeedsNavMeshUpdate = true;
  pMVar1->LastMapHash = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&pMVar1->LastMapHash);
  pMVar1 = TypeInfo_Map_MapManager->static_fields;
  pMVar1->LastGameMode = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&pMVar1->LastGameMode);
  return;
}


