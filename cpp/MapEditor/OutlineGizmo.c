// Type: MapEditor.OutlineGizmo
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/MapEditor/OutlineGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/OutlineGizmo.cs
// --------------------------------

// MapEditor.OutlineGizmo$$Create
// il2cpp: MapEditor_OutlineGizmo_o* MapEditor_OutlineGizmo__Create (const MethodInfo* method);
// 0x5c936c0

MapEditor_OutlineGizmo_o * MapEditor_OutlineGizmo__Create(MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  MapEditor_OutlineGizmo_o *pMVar1;
  
  if (Il2CppMethodInitialized_075479eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_OutlineGizmo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    Il2CppMethodInitialized_075479eb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa10(__this,(MethodInfo *)0x0);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar1 = UnityEngine_GameObject__AddComponent_object_
                     (__this,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_OutlineGizmo
                     );
  return pMVar1;
}


// MapEditor.OutlineGizmo$$OnSelectionChange
// il2cpp: void MapEditor_OutlineGizmo__OnSelectionChange (MapEditor_OutlineGizmo_o* __this, const MethodInfo* method);
// 0x5c93730
// eh: try 0x5c938b4..0x5c939cc -> pad 0x5c939df (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c939f7..0x5c939fc -> pad 0x5c93a21 cleanup
// eh: try 0x5c93a24..0x5c93a2e -> pad 0x5c93a87 catch (...) [compiler noexcept guard]
// eh: try 0x5c93a48..0x5c93a4d -> pad 0x5c93a72 cleanup
// eh: try 0x5c93a75..0x5c93a7f -> pad 0x5c93a87 catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c9395d: nop dword ptr [rax]
// asm:   0x5c939d1: jmp 0x5c939df
// asm:   0x5c939d3: jmp 0x5c93a30
// asm:   0x5c939d5: jmp 0x5c939df
// asm:   0x5c939d7: jmp 0x5c939df
// asm:   0x5c939d9: jmp 0x5c939df
// asm:   0x5c939db: jmp 0x5c93a30
// asm:   0x5c939dd: jmp 0x5c93a30
// asm:   0x5c939df: mov r14, rax
// asm:   0x5c939e2: cmp edx, 1
// asm:   0x5c939e5: jne 0x5c93a24
// asm:   0x5c939e7: mov rdi, r14
// asm:   0x5c939ea: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c939ef: mov r14, qword ptr [rax]
// asm:   0x5c939f2: mov qword ptr [rsp + 8], r14
// asm:   0x5c939f7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c939fc: lea rax, [rip + 0x15fa9bd]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x5c93a03: mov rsi, qword ptr [rax]
// asm:   0x5c93a06: lea rdi, [rsp + 0x20]
// asm:   0x5c93a0b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c93a10: test r14, r14
// asm:   0x5c93a13: je 0x5c93910
// asm:   0x5c93a19: mov rdi, r14
// asm:   0x5c93a1c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c93a21: mov r14, rax
// asm:   0x5c93a24: lea rdi, [rsp + 8]
// asm:   0x5c93a29: call 0x2fdaa10  ; il2cpp_runtime_helper_02fdaa10()
// asm:   0x5c93a2e: jmp 0x5c93a7f
// asm:   0x5c93a30: mov r14, rax
// asm:   0x5c93a33: cmp edx, 1
// asm:   0x5c93a36: jne 0x5c93a75
// asm:   0x5c93a38: mov rdi, r14
// asm:   0x5c93a3b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c93a40: mov rbx, qword ptr [rax]
// asm:   0x5c93a43: mov qword ptr [rsp + 8], rbx
// asm:   0x5c93a48: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c93a4d: lea rax, [rip + 0x15fa954]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x5c93a54: mov rsi, qword ptr [rax]
// asm:   0x5c93a57: lea rdi, [rsp + 0x40]
// asm:   0x5c93a5c: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c93a61: test rbx, rbx
// asm:   0x5c93a64: je 0x5c939af
// asm:   0x5c93a6a: mov rdi, rbx
// asm:   0x5c93a6d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c93a72: mov r14, rax
// asm:   0x5c93a75: lea rdi, [rsp + 8]
// asm:   0x5c93a7a: call 0x2fdaa40  ; il2cpp_runtime_helper_02fdaa40()
// asm:   0x5c93a7f: mov rdi, r14
// asm:   0x5c93a82: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c93a87: mov rdi, rax
// asm:   0x5c93a8a: call 0x2ab61e0  ; __clang_call_terminate()

void MapEditor_OutlineGizmo__OnSelectionChange(MapEditor_OutlineGizmo_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  Map_MapObject_o *obj;
  Il2CppObject *obj_00;
  bool bVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_MapObject__o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 local_80 [16];
  Map_MapObject_o *local_70;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  Map_MapObject_o *local_58;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_075479ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    Il2CppMethodInitialized_075479ec = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (Map_MapObject_o *)0x0;
  local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._outlines;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    collection = System_Collections_Generic_Dictionary_object__object___get_Keys
                           (pSVar1,(MethodInfo_4AAD0F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_get_Keys
                           );
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_7195590);
    if (__this_00 != (System_Collections_Generic_List_MapObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
      local_58 = local_70;
      local_68 = (undefined1  [8])local_80._0_8_;
      pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_80._8_8_;
      local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
        obj = local_58;
        if (!bVar4) break;
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar3,(Il2CppObject *)local_58,
                           (MethodInfo_4FB3720 *)
                           MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
        if (!bVar4) {
          MapEditor_OutlineGizmo__DestroyOutline(__this,obj,method_00);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
                );
      pGVar2 = (__this->fields)._gameManager;
      if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (pSVar3 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects,
         pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  (&local_48,pSVar3,
                   (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator
                  );
        local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_80._8_8_ = &local_48;
        while( true ) {
          bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&local_48,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
          obj_00 = local_48.fields._current;
          if (!bVar4) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (&local_48,
                       (MethodInfo_4C456C0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
            return;
          }
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._outlines;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            (pSVar1,local_48.fields._current,
                             (MethodInfo_4AAD6F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_ContainsKey);
          if (!bVar4) {
            MapEditor_OutlineGizmo__CreateOutline(__this,(Map_MapObject_o *)obj_00,method_01);
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.OutlineGizmo$$CreateOutline
// il2cpp: void MapEditor_OutlineGizmo__CreateOutline (MapEditor_OutlineGizmo_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x5c93b40

void MapEditor_OutlineGizmo__CreateOutline
               (MapEditor_OutlineGizmo_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Outline_o *__this_02;
  UnityEngine_Color_o value;
  
  if (Il2CppMethodInitialized_075479ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Outline);
    Il2CppMethodInitialized_075479ed = '\x01';
  }
  if ((obj != (Map_MapObject_o *)0x0) &&
     (__this_00 = (obj->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_02 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Outline);
    if (__this_02 != (Outline_o *)0x0) {
      Outline__set_OutlineMode(__this_02,5,(MethodInfo *)0x0);
      value.fields.b = 0.0;
      value.fields.a = 1.0;
      value.fields.r = 0.0;
      value.fields.g = 1.0;
      Outline__set_OutlineColor(__this_02,value,(MethodInfo *)0x0);
      Outline__set_OutlineWidth(__this_02,3.0,(MethodInfo *)0x0);
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._outlines;
      if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (__this_01,(Il2CppObject *)obj,(Il2CppObject *)__this_02,
                   (MethodInfo_4AAD4E0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.OutlineGizmo$$DestroyOutline
// il2cpp: void MapEditor_OutlineGizmo__DestroyOutline (MapEditor_OutlineGizmo_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x5c93a90

void MapEditor_OutlineGizmo__DestroyOutline
               (MapEditor_OutlineGizmo_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Outline_o *obj_00;
  
  if (Il2CppMethodInitialized_075479ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075479ee = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._outlines;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    obj_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)obj,
                        (MethodInfo_4AAD450 *)
                        MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_get_Item);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)obj_00,(MethodInfo *)0x0);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._outlines;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar1,(Il2CppObject *)obj,
                 (MethodInfo_4AAED10 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.OutlineGizmo$$.ctor
// il2cpp: void MapEditor_OutlineGizmo___ctor (MapEditor_OutlineGizmo_o* __this, const MethodInfo* method);
// 0x5c93c00

void MapEditor_OutlineGizmo___ctor(MapEditor_OutlineGizmo_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MapObject__Outline__o *__this_00;
  
  if (Il2CppMethodInitialized_075479ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_MapObject_Outline);
    Il2CppMethodInitialized_075479ef = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_MapObject_Outline);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_ctor);
  (__this->fields)._outlines = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outlines);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


