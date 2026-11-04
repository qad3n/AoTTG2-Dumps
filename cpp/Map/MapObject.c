// Type: Map.MapObject
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapObject.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapObject.cs
// --------------------------------

// Map.MapObject$$.ctor
// il2cpp: void Map_MapObject___ctor (Map_MapObject_o* __this, int32_t parent, UnityEngine_GameObject_o* gameObject, Map_MapScriptBaseObject_o* scriptObject, const MethodInfo* method);
// 0x181eb53c0

void Map_MapObject___ctor
               (Map_MapObject_o *__this,int32_t parent,UnityEngine_GameObject_o *gameObject,
               Map_MapScriptBaseObject_o *scriptObject,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  UnityEngine_Collider_array *value;
  UnityEngine_Renderer_array *value_00;
  
  if (Il2CppMethodInitialized_1843450ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Renderer_array);
    Il2CppMethodInitialized_1843450ef = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance)
  ;
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor
            );
  (__this->fields).ComponentInstances = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ComponentInstances,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Parent = parent;
  (__this->fields).GameObject = gameObject;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GameObject,gameObject);
  (__this->fields).ScriptObject = scriptObject;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ScriptObject,scriptObject);
  pUVar1 = (__this->fields).GameObject;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    value = (UnityEngine_Collider_array *)
            UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                      (pUVar1,(MethodInfo_6F5810 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    (__this->fields).colliderCache = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).colliderCache,value);
    if (scriptObject != (Map_MapScriptBaseObject_o *)0x0) {
      if ((scriptObject->fields).Static == false) {
        pUVar1 = (__this->fields).GameObject;
        if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_181eb54ee;
        value_00 = (UnityEngine_Renderer_array *)
                   UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                             (pUVar1,(MethodInfo_6F5810 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
      }
      else {
        value_00 = (UnityEngine_Renderer_array *)SZArrayNew(TypeInfo_UnityEngine_Renderer_array,0);
      }
      (__this->fields).renderCache = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).renderCache,value_00);
      return;
    }
  }
label_181eb54ee:
  ThrowNullReferenceException();
}


// Map.MapObject$$RegisterComponentInstance
// il2cpp: void Map_MapObject__RegisterComponentInstance (Map_MapObject_o* __this, CustomLogic_CustomLogicComponentInstance_o* instance, const MethodInfo* method);
// 0x181eb5310

void Map_MapObject__RegisterComponentInstance
               (Map_MapObject_o *__this,CustomLogic_CustomLogicComponentInstance_o *instance,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicComponentInstance_array *pCVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_1843450f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add);
    Il2CppMethodInitialized_1843450f0 = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add;
  __this_00 = (__this->fields).ComponentInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if ((uint)pCVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)instance,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
      (__this_00->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pCVar3->max_length) {
        pCVar3->m_Items[(int)uVar2] = instance;
        Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar2,instance);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Map.MapObject$$FindComponentInstance
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* Map_MapObject__FindComponentInstance (Map_MapObject_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181eb51a0
// eh: try 0x181eb5250..0x181eb5304 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181eb52cb: mov rdx, qword ptr [rip + 0x21c563e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x181eb52d2: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181eb52d7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181eb52dc: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181eb52e1: test rcx, rcx
// asm:   0x181eb52e4: jne 0x181eb5304
// asm:   0x181eb5304: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

CustomLogic_CustomLogicComponentInstance_o *
Map_MapObject__FindComponentInstance(Map_MapObject_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  Il2CppObject *pIVar1;
  bool bVar2;
  UnityEngine_AnimationCurve_o *a;
  undefined1 local_40 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843450f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_1843450f1 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).ComponentInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      pIVar1 = local_28.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose)
        ;
        return (CustomLogic_CustomLogicComponentInstance_o *)0x0;
      }
      if ((CustomLogic_CustomLogicComponentInstance_o *)local_28.fields._current ==
          (CustomLogic_CustomLogicComponentInstance_o *)0x0) break;
      a = (*(((CustomLogic_CustomLogicComponentInstance_c *)(local_28.fields._current)->klass)->vtable).
            _6_get_ClassName.methodPtr)
                    (local_28.fields._current,
                     (((CustomLogic_CustomLogicComponentInstance_c *)(local_28.fields._current)->klass)->
                     vtable)._6_get_ClassName.method);
      bVar2 = System_String__op_Equality((System_String_o *)a,name,(MethodInfo *)0x0);
      if (bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose)
        ;
        return (CustomLogic_CustomLogicComponentInstance_o *)pIVar1;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


