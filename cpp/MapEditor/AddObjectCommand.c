// Type: MapEditor.AddObjectCommand
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/MapEditor/AddObjectCommand.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Commands/AddObjectCommand.cs
// --------------------------------

// MapEditor.AddObjectCommand.<>c$$.cctor
// il2cpp: void MapEditor_AddObjectCommand___c___cctor (const MethodInfo* method);
// 0x182201730

void MapEditor_AddObjectCommand___c___cctor(MethodInfo *method)

{
  MapEditor_AddObjectCommand___c_o *__this;
  
  if (Il2CppMethodInitialized_184346ffc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand_c);
    Il2CppMethodInitialized_184346ffc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9,__this);
  return;
}


// MapEditor.AddObjectCommand.<>c$$.ctor
// il2cpp: void MapEditor_AddObjectCommand___c___ctor (MapEditor_AddObjectCommand___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
MapEditor_AddObjectCommand___c___ctor(MapEditor_AddObjectCommand___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// MapEditor.AddObjectCommand.<>c$$<Execute>b__3_0
// il2cpp: int32_t MapEditor_AddObjectCommand___c___Execute_b__3_0 (MapEditor_AddObjectCommand___c_o* __this, Map_MapScriptBaseObject_o* o, const MethodInfo* method);
// 0x181e7b8a0

int32_t
MapEditor_AddObjectCommand___c___Execute_b__3_0(MapEditor_AddObjectCommand___c_o* __this, Map_MapScriptBaseObject_o* o, MethodInfo* method)

{
  if (f != (CustomLogic_CustomLogicSourceFile_o *)0x0) {
    return (f->fields)._Type_k__BackingField;
  }
  ThrowNullReferenceException();
}


// MapEditor.AddObjectCommand.<>c$$<Execute>b__3_1
// il2cpp: bool MapEditor_AddObjectCommand___c___Execute_b__3_1 (MapEditor_AddObjectCommand___c_o* __this, int32_t id, const MethodInfo* method);
// 0x182200fd0

bool MapEditor_AddObjectCommand___c___Execute_b__3_1
               (MapEditor_AddObjectCommand___c_o *__this,int32_t id,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346ffd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_184346ffd = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
    bVar1 = System_Collections_Generic_List_int___Contains
                      (__this_00,id,
                       (MethodInfo_91C120 *)MethodInfo_System_Collections_Generic_List_int_Contains);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// MapEditor.AddObjectCommand$$.ctor
// il2cpp: void MapEditor_AddObjectCommand___ctor (MapEditor_AddObjectCommand_o* __this, System_Collections_Generic_List_MapScriptBaseObject__o* objs, int32_t insertAfterId, const MethodInfo* method);
// 0x1821e9970
// eh: try 0x1821e9c71..0x1821e9da1 -> pad 0x183318f20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e9b09: nop dword ptr [rax]
// asm:   0x1821e9d0a: mov rdx, qword ptr [rip + 0x1ea1a57]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x1821e9d11: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821e9d16: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821e9d1b: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821e9d20: test rcx, rcx
// asm:   0x1821e9d23: jne 0x1821e9da1
// asm:   0x1821e9d29: mov r13, qword ptr [rsp + 0xa0]
// asm:   0x1821e9d31: mov r14, qword ptr [rsp + 0x20]
// asm:   0x1821e9d36: mov r12, r14
// asm:   0x1821e9da1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 

void MapEditor_AddObjectCommand___ctor
               (MapEditor_AddObjectCommand_o *__this,
               System_Collections_Generic_List_MapScriptBaseObject__o *objs,int32_t insertAfterId,
               MethodInfo *method)

{
  byte bVar1;
  GameManagers_MapEditorGameManager_o *__this_00;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_LayerMask_o UVar5;
  Map_MapScriptObjects_o *__this_01;
  Il2CppObject *pIVar6;
  Map_MapScriptBaseObject_o *pMVar7;
  System_Collections_Generic_Dictionary_int__int__o *__this_02;
  System_String_o *value;
  uint uVar8;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_184346ff9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346ff9 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._insertAfterId = insertAfterId;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_01,(MethodInfo *)0x0);
  __this_00 = (GameManagers_MapEditorGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_MapEditorGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
  }
  if (objs != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
    pIVar6 = SZArrayNew(TypeInfo_int_array,(objs->fields)._size);
    for (uVar8 = 0; (int)uVar8 < (objs->fields)._size; uVar8 = uVar8 + 1) {
      pMVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)objs,uVar8,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item);
      if ((pMVar7 == (Map_MapScriptBaseObject_o *)0x0) || (pIVar6 == (Il2CppObject *)0x0)) goto label_1821e9da7;
      if (*(uint *)&pIVar6[1].monitor <= uVar8) goto label_1821e9d85;
      *(int32_t *)((longlong)&pIVar6[2].klass + (longlong)(int)uVar8 * 4) = (pMVar7->fields).Id;
      pMVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)objs,uVar8,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item);
      if (__this_00 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1821e9da7;
      iVar4 = GameManagers_MapEditorGameManager__GetNextObjectId(__this_00,(MethodInfo *)0x0);
      if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) goto label_1821e9da7;
      (pMVar7->fields).Id = iVar4;
    }
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int);
    System_Collections_Generic_Dictionary_int__int____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
               (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
    for (uVar8 = 0; (int)uVar8 < (objs->fields)._size; uVar8 = uVar8 + 1) {
      if (pIVar6 == (Il2CppObject *)0x0) goto label_1821e9da7;
      if (*(uint *)&pIVar6[1].monitor <= uVar8) goto label_1821e9d85;
      if (__this_02 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) goto label_1821e9da7;
      bVar3 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                        ((System_Collections_Generic_Dictionary_int__float__o *)__this_02,
                         *(int32_t *)((longlong)&pIVar6[2].klass + (longlong)(int)uVar8 * 4),
                         (MethodInfo_14070E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
      if (!bVar3) {
        if (*(uint *)&pIVar6[1].monitor <= uVar8) {
label_1821e9d85:
          ThrowIndexOutOfRangeException();
        }
        iVar4 = *(int32_t *)((longlong)&pIVar6[2].klass + (longlong)(int)uVar8 * 4);
        pMVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)objs,uVar8,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_get_Item);
        if (pMVar7 == (Map_MapScriptBaseObject_o *)0x0) goto label_1821e9da7;
        System_Collections_Generic_Dictionary_int__int___set_Item
                  (__this_02,iVar4,(pMVar7->fields).Id,
                   (MethodInfo_14159F0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_set_Item);
      }
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)objs,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    local_48 = (undefined1  [8])local_60._0_8_;
    pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_38 = local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
      pIVar6 = local_38;
      if (!bVar3) break;
      if (local_38 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if (-1 < *(int *)((longlong)&local_38[2].klass + 4)) {
        if (__this_02 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                          ((System_Collections_Generic_Dictionary_int__float__o *)__this_02,
                           *(int32_t *)((longlong)&local_38[2].klass + 4),
                           (MethodInfo_14070E0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_int_ContainsKey);
        if (bVar3) {
          UVar5 = System_Collections_Generic_Dictionary_int__int___get_Item
                            ((System_Collections_Generic_Dictionary_int__LayerMask__o *)__this_02,
                             *(int32_t *)((longlong)&pIVar6[2].klass + 4),
                             (MethodInfo_14157A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_int_get_Item);
          ((UnityEngine_LayerMask_Fields *)((longlong)&pIVar6[2].klass + 4))->m_Mask =
               (int32_t)UVar5.fields.m_Mask;
        }
      }
      if (__this_01 == (Map_MapScriptObjects_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = (__this_01->fields).Objects;
      if (pSVar2 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
        ThrowNullReferenceException();
      }
      il2cpp_runtime_helper_180012890(pSVar2,pIVar6,MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
               MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    if (__this_01 != (Map_MapScriptObjects_o *)0x0) {
      value = (*(__this_01->klass->vtable)._8_Serialize.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._8_Serialize.method);
      (__this->fields)._script = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._script,value);
      return;
    }
  }
label_1821e9da7:
  ThrowNullReferenceException();
}


// MapEditor.AddObjectCommand$$Execute
// il2cpp: void MapEditor_AddObjectCommand__Execute (MapEditor_AddObjectCommand_o* __this, const MethodInfo* method);
// 0x1821e91a0
// eh: try 0x1821e9393..0x1821e97d3 -> pad 0x183317f30 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 44 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e93e2: mov rdx, qword ptr [rip + 0x1ea237f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x1821e93e9: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821e93ee: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821e93f3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821e93f8: test rcx, rcx
// asm:   0x1821e93fb: jne 0x1821e97c7
// asm:   0x1821e9401: xor edi, edi
// asm:   0x1821e9403: mov r15, qword ptr [rsp + 0xb0]
// asm:   0x1821e940b: mov r14, qword ptr [rsp + 0xc0]
// asm:   0x1821e962d: nop dword ptr [rax]
// asm:   0x1821e969d: mov rdx, qword ptr [rip + 0x1e9ec44]  ; MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose
// asm:   0x1821e96a4: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821e96a9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821e96ae: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821e96b3: test rcx, rcx
// asm:   0x1821e96b6: jne 0x1821e97d3
// asm:   0x1821e96bc: xor edi, edi
// asm:   0x1821e96be: mov r15, qword ptr [rsp + 0xb0]
// asm:   0x1821e96c6: mov r12, qword ptr [rsp + 0xc0]
// asm:   0x1821e96ce: mov r14, r12
// asm:   0x1821e97c7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821e97d3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void MapEditor_AddObjectCommand__Execute(MapEditor_AddObjectCommand_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_uint__o *__this_00;
  Map_MapScriptBaseObject_o *scriptObject;
  bool bVar4;
  int32_t iVar5;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_o item;
  Map_MapScriptObjects_o *__this_01;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_Console_WindowsConsole_WindowsCancelHandler_o *__this_03;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_04;
  int index;
  undefined1 local_78 [16];
  Map_MapScriptBaseObject_o *local_68;
  undefined1 local_60 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_58;
  Map_MapScriptBaseObject_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Map_MapScriptBaseObject_o *local_38;
  
  if (Il2CppMethodInitialized_184346ffa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_int_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MapScriptBaseObject_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptObjects);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MapEditor_AddObjectCommand_c_Execute_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_MapEditor_AddObjectCommand_c_Execute_b__3_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MapEditor_AddObjectCommand_c);
    Il2CppMethodInitialized_184346ffa = '\x01';
  }
  local_60 = (undefined1  [8])0x0;
  pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_50 = (Map_MapScriptBaseObject_o *)0x0;
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Map_MapScriptBaseObject_o *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptObjects);
  Map_MapScriptObjects___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Map_MapScriptObjects_o *)0x0) {
    (*(__this_01->klass->vtable)._9_Deserialize.methodPtr)
              (__this_01,(__this->fields)._script,(__this_01->klass->vtable)._9_Deserialize.method);
    pSVar1 = (__this_01->fields).Objects;
    if (pSVar1 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
                 (System_Collections_Generic_List_T__o *)pSVar1,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
      local_60 = (undefined1  [8])local_78._0_8_;
      pUStack_58 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78._8_8_;
      local_50 = local_68;
      index = 0;
      local_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
      while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_60,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext
                               ), scriptObject = local_50, bVar4) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        Map_MapLoader__LoadObject(scriptObject,true,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
      if ((__this->fields)._insertAfterId < 1) {
        return;
      }
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      pSVar2 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
      if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
        bVar4 = System_Collections_Generic_List_int___Contains
                          (pSVar2,(__this->fields)._insertAfterId,
                           (MethodInfo_91C120 *)MethodInfo_System_Collections_Generic_List_int_Contains);
        if (!bVar4) {
          return;
        }
        pSVar1 = (__this_01->fields).Objects;
        if ((TypeInfo_MapEditor_AddObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c);
        }
        __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                    TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9__3_0;
        if (__this_02 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
          if ((TypeInfo_MapEditor_AddObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c);
          }
          pIVar3 = (Il2CppObject *)TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9;
          __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MapScriptBaseObject_int);
          System_Func_object__int____ctor
                    (__this_02,pIVar3,(intptr_t)MethodInfo_MapEditor_AddObjectCommand_c_Execute_b__3_0,
                     (MethodInfo_AF4D50 *)0x0);
          TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9__3_0 =
               (System_Func_MapScriptBaseObject__int__o *)__this_02;
          Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9__3_0,__this_02)
          ;
        }
        source = System_Linq_Enumerable__Select_Vector3__object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                            (System_Func_TSource__TResult__o *)__this_02,
                            (MethodInfo_6C2170 *)
                            MethodInfo_System_Linq_Enumerable_Select_MapScriptBaseObject_int);
        if ((TypeInfo_MapEditor_AddObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c);
        }
        __this_03 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
                    TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9__3_1;
        if (__this_03 == (System_Console_WindowsConsole_WindowsCancelHandler_o *)0x0) {
          if ((TypeInfo_MapEditor_AddObjectCommand_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MapEditor_AddObjectCommand_c);
          }
          pIVar3 = (Il2CppObject *)TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9;
          __this_03 = (System_Console_WindowsConsole_WindowsCancelHandler_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_bool);
          System_Func_int__bool____ctor
                    (__this_03,pIVar3,(intptr_t)MethodInfo_MapEditor_AddObjectCommand_c_Execute_b__3_1,
                     (MethodInfo *)0x0);
          TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9__3_1 =
               (System_Func_int__bool__o *)__this_03;
          Il2CppCodeGenWriteBarrier(&TypeInfo_MapEditor_AddObjectCommand_c->static_fields->__9__3_1,__this_03)
          ;
        }
        source_00 = System_Linq_Enumerable__Where_float_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (System_Func_TSource__bool__o *)__this_03,
                               (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_int);
        __this_04 = System_Linq_Enumerable__ToList_int_
                              (source_00,(MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
        if (__this_04 != (System_Collections_Generic_List_TSource__o *)0x0) {
          System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
                     (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_04,
                     (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_int_GetEnumerator);
          local_48 = (undefined1  [8])local_78._0_8_;
          pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78._8_8_;
          local_38 = local_68;
          local_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_78._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
          while (bVar4 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                                    (MethodInfo_1530180 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_int_MoveNext), bVar4
                ) {
            iVar5 = (int32_t)local_38;
            if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
            }
            pSVar2 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
            if (pSVar2 == (System_Collections_Generic_List_int__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_List_int___Remove
                      (pSVar2,iVar5,(MethodInfo_923050 *)MethodInfo_System_Collections_Generic_List_int_Remove
                      );
          }
          System_Collections_Generic_List_Enumerator_int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                     MethodInfo_System_Collections_Generic_List_Enumerator_int_Dispose);
          if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
          }
          pSVar2 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
          if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
            iVar5 = System_Collections_Generic_List_int___IndexOf
                              (pSVar2,(__this->fields)._insertAfterId,
                               (MethodInfo_91F570 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
            if (iVar5 < 0) {
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              pSVar2 = TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
              if (pSVar2 == (System_Collections_Generic_List_int__o *)0x0) goto label_1821e97d9;
              iVar5 = (pSVar2->fields)._size + -1;
            }
            while( true ) {
              if ((__this_04->fields)._size <= index) {
                return;
              }
              if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
              }
              __this_00 = (System_Collections_Generic_List_uint__o *)
                          TypeInfo_Map_MapLoader->static_fields->ObjectOrder;
              item = System_Collections_Generic_List_RegexCharClass_SingleRange___get_Item
                               ((System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_04,
                                index,(MethodInfo_92B8E0 *)
                                      MethodInfo_System_Collections_Generic_List_int_get_Item);
              if (__this_00 == (System_Collections_Generic_List_uint__o *)0x0) break;
              System_Collections_Generic_List_uint___Insert
                        (__this_00,iVar5 + 1 + index,(uint32_t)item.fields,
                         (MethodInfo_9221F0 *)MethodInfo_System_Collections_Generic_List_int_Insert);
              index = index + 1;
            }
          }
        }
      }
    }
  }
label_1821e97d9:
  ThrowNullReferenceException();
}


// MapEditor.AddObjectCommand$$Unexecute
// il2cpp: void MapEditor_AddObjectCommand__Unexecute (MapEditor_AddObjectCommand_o* __this, const MethodInfo* method);
// 0x1821e97e0
// eh: try 0x1821e98e0..0x1821e995f -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e9933: mov rdx, qword ptr [rip + 0x1ea1e2e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x1821e993a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821e993f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821e9944: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821e9949: test rcx, rcx
// asm:   0x1821e994c: jne 0x1821e995f
// asm:   0x1821e995f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void MapEditor_AddObjectCommand__Unexecute(MapEditor_AddObjectCommand_o *__this,MethodInfo *method)

{
  int32_t id;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  bool bVar1;
  Map_MapScriptObjects_o *__this_01;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184346ffb == '\0') {
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
    Il2CppMethodInitialized_184346ffb = '\x01';
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


