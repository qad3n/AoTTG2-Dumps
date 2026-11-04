// Type: MapEditor.OutlineGizmo
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/MapEditor/OutlineGizmo.cs
// Prior real C# source (older reference): Assets/Scripts/MapEditor/Gizmos/OutlineGizmo.cs
// --------------------------------

// MapEditor.OutlineGizmo$$Create
// il2cpp: MapEditor_OutlineGizmo_o* MapEditor_OutlineGizmo__Create (const MethodInfo* method);
// 0x1821f2ee0

MapEditor_OutlineGizmo_o * MapEditor_OutlineGizmo__Create(MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  MapEditor_OutlineGizmo_o *pMVar1;
  
  if (Il2CppMethodInitialized_184347023 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_OutlineGizmo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    Il2CppMethodInitialized_184347023 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pMVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_OutlineGizmo);
    return pMVar1;
  }
  ThrowNullReferenceException();
}


// MapEditor.OutlineGizmo$$OnSelectionChange
// il2cpp: void MapEditor_OutlineGizmo__OnSelectionChange (MapEditor_OutlineGizmo_o* __this, const MethodInfo* method);
// 0x1821f3000
// eh: try 0x1821f3170..0x1821f32f2 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821f3169: nop dword ptr [rax]
// asm:   0x1821f31d8: mov rdx, qword ptr [rip + 0x1e982e9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose
// asm:   0x1821f31df: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821f31e4: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f31e9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821f31ee: test rcx, rcx
// asm:   0x1821f31f1: jne 0x1821f32e6
// asm:   0x1821f31f7: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x1821f32aa: mov rdx, qword ptr [rip + 0x1e97f77]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose
// asm:   0x1821f32b1: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821f32b6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821f32bb: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821f32c0: test rcx, rcx
// asm:   0x1821f32c3: jne 0x1821f32f2
// asm:   0x1821f32e6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821f32f2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void MapEditor_OutlineGizmo__OnSelectionChange(MapEditor_OutlineGizmo_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MapObject__Outline__o *pSVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_01;
  Map_MapObject_o *pMVar3;
  bool bVar4;
  System_Collections_Generic_IEnumerable_TKey__o *collection;
  System_Collections_Generic_List_MapObject__o *__this_02;
  undefined1 local_58 [16];
  Map_MapObject_o *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  Map_MapObject_o *local_30;
  undefined1 local_28 [8];
  uint64_t uStack_20;
  Map_MapObject_o *local_18;
  
  if (Il2CppMethodInitialized_184347024 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapObject);
    Il2CppMethodInitialized_184347024 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (Map_MapObject_o *)0x0;
  local_28 = (undefined1  [8])0x0;
  uStack_20 = 0;
  local_18 = (Map_MapObject_o *)0x0;
  pSVar1 = (__this->fields)._outlines;
  if (pSVar1 != (System_Collections_Generic_Dictionary_MapObject__Outline__o *)0x0) {
    collection = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                            (MethodInfo_13C6500 *)
                            MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_get_Keys);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapObject);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)__this_02,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_MapObject_ctor_40bb3a8);
    if (__this_02 != (System_Collections_Generic_List_MapObject__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                 (System_Collections_Generic_List_T__o *)__this_02,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_MapObject_GetEnumerator);
      local_40 = (undefined1  [8])local_58._0_8_;
      pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
      local_30 = local_48;
      local_58._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_40,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_MoveNext);
        pMVar3 = local_30;
        if (!bVar4) break;
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 == (GameManagers_MapEditorGameManager_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar2->fields).SelectedObjects;
        if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = System_Collections_Generic_HashSet_object___Contains
                          (__this_00,(Il2CppObject *)local_30,
                           (MethodInfo_1759E40 *)
                           MethodInfo_System_Collections_Generic_HashSet_MapObject_Contains);
        if (!bVar4) {
          MapEditor_OutlineGizmo__DestroyOutline(__this,pMVar3,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapObject_Dispose);
      pGVar2 = (__this->fields)._gameManager;
      if ((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
         (__this_01 = (System_Collections_Generic_HashSet_Vector2Int__o *)(pGVar2->fields).SelectedObjects,
         __this_01 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0)) {
        System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,__this_01,
                   (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_MapObject_GetEnumerator
                  );
        local_28 = (undefined1  [8])local_58._0_8_;
        uStack_20 = local_58._8_8_;
        local_18 = local_48;
        local_58._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
        while( true ) {
          bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_28,
                             (MethodInfo_15381F0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_MoveNext);
          pMVar3 = local_18;
          if (!bVar4) {
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_MapObject_Dispose);
            return;
          }
          pSVar1 = (__this->fields)._outlines;
          if (pSVar1 == (System_Collections_Generic_Dictionary_MapObject__Outline__o *)0x0) break;
          bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                             (Il2CppObject *)local_18,
                             (MethodInfo_1455450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_ContainsKey);
          if (!bVar4) {
            MapEditor_OutlineGizmo__CreateOutline(__this,pMVar3,(MethodInfo *)0x0);
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
// 0x1821f2e00

void MapEditor_OutlineGizmo__CreateOutline
               (MapEditor_OutlineGizmo_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Outline_o *__this_02;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184347025 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Outline);
    Il2CppMethodInitialized_184347025 = '\x01';
  }
  if ((obj != (Map_MapObject_o *)0x0) &&
     (__this_00 = (obj->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    __this_02 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Outline);
    if (__this_02 != (Outline_o *)0x0) {
      Outline__set_OutlineMode(__this_02,5,(MethodInfo *)0x0);
      local_18.r = 0.0;
      local_18.g = 1.0;
      local_18.b = 0.0;
      local_18.a = 1.0;
      Outline__set_OutlineColor(__this_02,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      Outline__set_OutlineWidth(__this_02,3.0,(MethodInfo *)0x0);
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._outlines;
      if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (__this_01,(Il2CppObject *)obj,(Il2CppObject *)__this_02,
                   (MethodInfo_146B4B0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.OutlineGizmo$$DestroyOutline
// il2cpp: void MapEditor_OutlineGizmo__DestroyOutline (MapEditor_OutlineGizmo_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x1821f2f50

void MapEditor_OutlineGizmo__DestroyOutline
               (MapEditor_OutlineGizmo_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Outline_o *obj_00;
  
  if (Il2CppMethodInitialized_184347026 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347026 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._outlines;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    obj_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)obj,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_get_Item);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)obj_00,(MethodInfo *)0x0);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._outlines;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar1,(Il2CppObject *)obj,
                 (MethodInfo_1470BF0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// MapEditor.OutlineGizmo$$.ctor
// il2cpp: void MapEditor_OutlineGizmo___ctor (MapEditor_OutlineGizmo_o* __this, const MethodInfo* method);
// 0x1821f3300

void MapEditor_OutlineGizmo___ctor(MapEditor_OutlineGizmo_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_MapObject__Outline__o *__this_00;
  
  if (Il2CppMethodInitialized_184347027 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_MapObject_Outline);
    Il2CppMethodInitialized_184347027 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_MapObject_Outline);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_MapObject_Outline_ctor);
  (__this->fields)._outlines = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._outlines,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


