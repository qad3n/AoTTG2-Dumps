// Type: Map.MapVersionConverter1_0To1_1
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/MapVersionConverter1_0To1_1.cs
// Prior real C# source: none
// --------------------------------

// Map.MapVersionConverter1_0To1_1$$get_FromVersion
// il2cpp: System_String_o* Map_MapVersionConverter1_0To1_1__get_FromVersion (Map_MapVersionConverter1_0To1_1_o* __this, const MethodInfo* method);
// 0x181edd630

System_String_o *
Map_MapVersionConverter1_0To1_1__get_FromVersion(Map_MapVersionConverter1_0To1_1_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345119 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"1.0");
    Il2CppMethodInitialized_184345119 = '\x01';
  }
  return "1.0";
}


// Map.MapVersionConverter1_0To1_1$$get_ToVersion
// il2cpp: System_String_o* Map_MapVersionConverter1_0To1_1__get_ToVersion (Map_MapVersionConverter1_0To1_1_o* __this, const MethodInfo* method);
// 0x181edd660

System_String_o *
Map_MapVersionConverter1_0To1_1__get_ToVersion(Map_MapVersionConverter1_0To1_1_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434511a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"1.1");
    Il2CppMethodInitialized_18434511a = '\x01';
  }
  return "1.1";
}


// Map.MapVersionConverter1_0To1_1$$get_IsReversible
// il2cpp: bool Map_MapVersionConverter1_0To1_1__get_IsReversible (Map_MapVersionConverter1_0To1_1_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Map_MapVersionConverter1_0To1_1__get_IsReversible(Map_MapVersionConverter1_0To1_1_o* __this, MethodInfo* method)

{
  return true;
}


// Map.MapVersionConverter1_0To1_1$$get_Changes
// il2cpp: System_Collections_Generic_IReadOnlyList_string__o* Map_MapVersionConverter1_0To1_1__get_Changes (Map_MapVersionConverter1_0To1_1_o* __this, const MethodInfo* method);
// 0x181edd5e0

System_Collections_Generic_IReadOnlyList_string__o *
Map_MapVersionConverter1_0To1_1__get_Changes(Map_MapVersionConverter1_0To1_1_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434511b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter1_0To1_1);
    Il2CppMethodInitialized_18434511b = '\x01';
  }
  if ((TypeInfo_Map_MapVersionConverter1_0To1_1->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter1_0To1_1);
  }
  return TypeInfo_Map_MapVersionConverter1_0To1_1->static_fields->ChangeList;
}


// Map.MapVersionConverter1_0To1_1$$Upgrade
// il2cpp: void Map_MapVersionConverter1_0To1_1__Upgrade (Map_MapVersionConverter1_0To1_1_o* __this, Map_MapScript_o* mapScript, const MethodInfo* method);
// 0x181edd2d0
// eh: try 0x181edd3a0..0x181edd433 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181edd407: mov rdx, qword ptr [rip + 0x21ae35a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x181edd40e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181edd413: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181edd418: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181edd41d: test rcx, rcx
// asm:   0x181edd420: jne 0x181edd433
// asm:   0x181edd433: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Map_MapVersionConverter1_0To1_1__Upgrade
               (Map_MapVersionConverter1_0To1_1_o *__this,Map_MapScript_o *mapScript,MethodInfo *method)

{
  Map_MapScriptObjects_o *pMVar1;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  Il2CppObject *pIVar2;
  bool bVar3;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434511c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_18434511c = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (((mapScript != (Map_MapScript_o *)0x0) &&
      (pMVar1 = (mapScript->fields).Objects, pMVar1 != (Map_MapScriptObjects_o *)0x0)) &&
     (__this_00 = (pMVar1->fields).Objects,
     __this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
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
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
      pIVar2 = local_28.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
        return;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      if (*(int *)((longlong)&local_28.fields._current[2].klass + 4) == 0) {
        if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
        }
        *(int32_t *)((longlong)&pIVar2[2].klass + 4) = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConverter1_0To1_1$$Downgrade
// il2cpp: void Map_MapVersionConverter1_0To1_1__Downgrade (Map_MapVersionConverter1_0To1_1_o* __this, Map_MapScript_o* mapScript, const MethodInfo* method);
// 0x181edd160
// eh: try 0x181edd224..0x181edd2b6 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181edd28b: mov rdx, qword ptr [rip + 0x21ae4d6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x181edd292: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181edd297: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181edd29c: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181edd2a1: test rcx, rcx
// asm:   0x181edd2a4: jne 0x181edd2b6
// asm:   0x181edd2b6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Map_MapVersionConverter1_0To1_1__Downgrade
               (Map_MapVersionConverter1_0To1_1_o *__this,Map_MapScript_o *mapScript,MethodInfo *method)

{
  int iVar1;
  Map_MapScriptObjects_o *pMVar2;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  Il2CppObject *pIVar3;
  bool bVar4;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_18434511d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_18434511d = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (((mapScript != (Map_MapScript_o *)0x0) &&
      (pMVar2 = (mapScript->fields).Objects, pMVar2 != (Map_MapScriptObjects_o *)0x0)) &&
     (__this_00 = (pMVar2->fields).Objects,
     __this_00 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._current = local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
      pIVar3 = local_48.fields._current;
      if (!bVar4) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      iVar1 = *(int *)((longlong)&local_48.fields._current[2].klass + 4);
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      if (iVar1 == TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID) {
        *(undefined4 *)((longlong)&pIVar3[2].klass + 4) = 0;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConverter1_0To1_1$$.ctor
// il2cpp: void Map_MapVersionConverter1_0To1_1___ctor (Map_MapVersionConverter1_0To1_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapVersionConverter1_0To1_1___ctor(Map_MapVersionConverter1_0To1_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapVersionConverter1_0To1_1$$.cctor
// il2cpp: void Map_MapVersionConverter1_0To1_1___cctor (const MethodInfo* method);
// 0x181edd440

void Map_MapVersionConverter1_0To1_1___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *value;
  
  if (Il2CppMethodInitialized_18434511e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AsReadOnly);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter1_0To1_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Object ID 0 can be used as a parent.");
    il2cpp_codegen_initialize_runtime_metadata(&"Root object parent IDs change from 0 to -1.");
    Il2CppMethodInitialized_18434511e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
  pSVar4 = "Root object parent IDs change from 0 to -1.";
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 == (System_String_array *)0x0) goto label_181edd5cc;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this->fields)._size = uVar2 + 1;
      if ((uint)pSVar3->max_length <= uVar2) goto label_181edd5d2;
      pSVar3->m_Items[(int)uVar2] = pSVar4;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar4 = "Object ID 0 can be used as a parent.";
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
label_181edd5d2:
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar4;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      value = System_Collections_Generic_List_object___AsReadOnly
                        ((System_Collections_Generic_List_T__o *)__this,
                         (MethodInfo_91AF40 *)MethodInfo_System_Collections_Generic_List_string_AsReadOnly);
      TypeInfo_Map_MapVersionConverter1_0To1_1->static_fields->ChangeList =
           (System_Collections_Generic_IReadOnlyList_string__o *)value;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapVersionConverter1_0To1_1->static_fields->ChangeList,value);
      return;
    }
  }
label_181edd5cc:
  ThrowNullReferenceException();
}


