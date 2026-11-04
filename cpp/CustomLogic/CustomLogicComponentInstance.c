// Type: CustomLogic.CustomLogicComponentInstance
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicComponentInstance.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicComponentInstance.cs
// --------------------------------

// CustomLogic.CustomLogicComponentInstance.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___c___cctor (const MethodInfo* method);
// 0x1820b51b0

void CustomLogic_CustomLogicComponentInstance___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicComponentInstance___c_o *__this;
  
  if (Il2CppMethodInitialized_1843468bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicComponentInstance_c);
    Il2CppMethodInitialized_1843468bb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicComponentInstance_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicComponentInstance_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicComponentInstance_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicComponentInstance.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___c___ctor (CustomLogic_CustomLogicComponentInstance___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicComponentInstance___c___ctor(CustomLogic_CustomLogicComponentInstance___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicComponentInstance.<>c$$<DeserializeValue>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicComponentInstance___c___DeserializeValue_b__20_0 (CustomLogic_CustomLogicComponentInstance___c_o* __this, System_String_o* item, const MethodInfo* method);
// 0x1820ac710

Il2CppObject *
CustomLogic_CustomLogicComponentInstance___c___DeserializeValue_b__20_0
          (CustomLogic_CustomLogicComponentInstance___c_o *__this,System_String_o *item,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t local_res10 [6];
  
  local_res10[0] = System_Int32__Parse(item,(MethodInfo *)0x0);
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res10);
  return pIVar1;
}


// CustomLogic.CustomLogicComponentInstance$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicComponentInstance__get_Enabled (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x180e5a320

bool
CustomLogic_CustomLogicComponentInstance__get_Enabled(CustomLogic_CustomLogicComponentInstance_o* __this, MethodInfo* method)

{
  return (__this->fields)._Enabled_k__BackingField;
}


// CustomLogic.CustomLogicComponentInstance$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicComponentInstance__set_Enabled (CustomLogic_CustomLogicComponentInstance_o* __this, bool value, const MethodInfo* method);
// 0x18209f560
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209f5ac: nop dword ptr [rax]
// asm:   0x18209f5d4: mov rdi, qword ptr [rsp + 0x30]

void CustomLogic_CustomLogicComponentInstance__set_Enabled
               (CustomLogic_CustomLogicComponentInstance_o *__this,bool value,MethodInfo *method)

{
  System_Object_array *pSVar1;
  uint uVar2;
  
  (__this->fields)._Enabled_k__BackingField = value;
  if (!value) {
    if (Il2CppMethodInitialized_1843468af == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Linq_Enumerable_ToArray_CustomLogicLineRendererBuiltin);
      Il2CppMethodInitialized_1843468af = '\x01';
    }
    pSVar1 = System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._lineRenderers,
                        (MethodInfo_6C7D90 *)
                        MethodInfo_System_Linq_Enumerable_ToArray_CustomLogicLineRendererBuiltin);
    if (pSVar1 == (System_Object_array *)0x0) {
label_18209f5e5:
      ThrowNullReferenceException();
    }
    for (uVar2 = 0; (int)uVar2 < (int)pSVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pSVar1->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      if ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pSVar1->m_Items[(int)uVar2] ==
          (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) goto label_18209f5e5;
      CustomLogic_CustomLogicLineRendererBuiltin__Destroy
                ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pSVar1->m_Items[(int)uVar2],(MethodInfo *)0x0
                );
    }
  }
  return;
}


// CustomLogic.CustomLogicComponentInstance$$RegisterLineRenderer
// il2cpp: void CustomLogic_CustomLogicComponentInstance__RegisterLineRenderer (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* lineRenderer, const MethodInfo* method);
// 0x18209f1a0

void CustomLogic_CustomLogicComponentInstance__RegisterLineRenderer
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicLineRendererBuiltin_o *lineRenderer,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_1843468ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_Add);
    Il2CppMethodInitialized_1843468ad = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._lineRenderers;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              (__this_00,(Il2CppObject *)lineRenderer,
               (MethodInfo_1757CE0 *)
               MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_Add);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicComponentInstance$$UnregisterLineRenderer
// il2cpp: void CustomLogic_CustomLogicComponentInstance__UnregisterLineRenderer (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicLineRendererBuiltin_o* lineRenderer, const MethodInfo* method);
// 0x18209f200

void CustomLogic_CustomLogicComponentInstance__UnregisterLineRenderer
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicLineRendererBuiltin_o *lineRenderer,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_1843468ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_Remove);
    Il2CppMethodInitialized_1843468ae = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._lineRenderers;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Remove
              (__this_00,(Il2CppObject *)lineRenderer,
               (MethodInfo_1766930 *)
               MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_Remove);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicComponentInstance$$DestroyLineRenderers
// il2cpp: void CustomLogic_CustomLogicComponentInstance__DestroyLineRenderers (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x18209e520

void CustomLogic_CustomLogicComponentInstance__DestroyLineRenderers
               (CustomLogic_CustomLogicComponentInstance_o *__this,MethodInfo *method)

{
  System_Object_array *pSVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_1843468af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_CustomLogicLineRendererBuiltin);
    Il2CppMethodInitialized_1843468af = '\x01';
  }
  pSVar1 = System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._lineRenderers,
                      (MethodInfo_6C7D90 *)
                      MethodInfo_System_Linq_Enumerable_ToArray_CustomLogicLineRendererBuiltin);
  if (pSVar1 != (System_Object_array *)0x0) {
    uVar2 = 0;
    while( true ) {
      if ((int)pSVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pSVar1->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      if ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pSVar1->m_Items[(int)uVar2] ==
          (CustomLogic_CustomLogicLineRendererBuiltin_o *)0x0) break;
      CustomLogic_CustomLogicLineRendererBuiltin__Destroy
                ((CustomLogic_CustomLogicLineRendererBuiltin_o *)pSVar1->m_Items[(int)uVar2],(MethodInfo *)0x0
                );
      uVar2 = uVar2 + 1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicComponentInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___ctor (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* name, Map_MapObject_o* obj, Map_MapScriptComponent_o* script, CustomLogic_CustomLogicNetworkViewBuiltin_o* networkView, const MethodInfo* method);
// 0x18209f390

void CustomLogic_CustomLogicComponentInstance___ctor
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *name,Map_MapObject_o *obj,
               Map_MapScriptComponent_o *script,CustomLogic_CustomLogicNetworkViewBuiltin_o *networkView,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin__o *__this_01;
  CustomLogic_CustomLogicMapObjectBuiltin_o *value;
  
  if (Il2CppMethodInitialized_1843468b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin);
    Il2CppMethodInitialized_1843468b0 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_176CE80 *)
             MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_ctor);
  (__this->fields)._lineRenderers = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lineRenderers,__this_01);
  CustomLogic_UserClassInstance___ctor((CustomLogic_UserClassInstance_o *)__this,name,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    value = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin(__this_00,obj,(MethodInfo *)0x0);
    (__this->fields).MapObject = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).MapObject,value);
    (__this->fields)._script = script;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._script,script);
    (__this->fields).NetworkView = networkView;
    Il2CppCodeGenWriteBarrier(&(__this->fields).NetworkView,networkView);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicComponentInstance$$.ctor
// il2cpp: void CustomLogic_CustomLogicComponentInstance___ctor (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* name, CustomLogic_CustomLogicMapObjectBuiltin_o* obj, Map_MapScriptComponent_o* script, CustomLogic_CustomLogicNetworkViewBuiltin_o* networkView, const MethodInfo* method);
// 0x18209f4a0

void CustomLogic_CustomLogicComponentInstance___ctor_209f4a0
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *name,
               CustomLogic_CustomLogicMapObjectBuiltin_o *obj,Map_MapScriptComponent_o *script,
               CustomLogic_CustomLogicNetworkViewBuiltin_o *networkView,MethodInfo *method)

{
  System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843468b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin);
    Il2CppMethodInitialized_1843468b1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)
             MethodInfo_System_Collections_Generic_HashSet_CustomLogicLineRendererBuiltin_ctor);
  (__this->fields)._lineRenderers = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lineRenderers,__this_00);
  CustomLogic_UserClassInstance___ctor((CustomLogic_UserClassInstance_o *)__this,name,(MethodInfo *)0x0);
  (__this->fields).MapObject = obj;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapObject,obj);
  (__this->fields)._script = script;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._script,script);
  (__this->fields).NetworkView = networkView;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NetworkView,networkView);
  return;
}


// CustomLogic.CustomLogicComponentInstance$$LoadVariables
// il2cpp: void CustomLogic_CustomLogicComponentInstance__LoadVariables (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x18209e670
// eh: try 0x18209e800..0x18209eaf2 -> pad 0x183317e10 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209e7fc: nop dword ptr [rax]
// asm:   0x18209e8ea: mov rdx, qword ptr [rip + 0x1ff9027]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18209e8f1: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18209e8f6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18209e8fb: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18209e900: test rcx, rcx
// asm:   0x18209e903: jne 0x18209ead7
// asm:   0x18209e909: xor r13d, r13d
// asm:   0x18209e90c: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x18209e97e: nop 
// asm:   0x18209ea82: mov rdx, qword ptr [rip + 0x1ff8e8f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18209ea89: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18209ea8e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18209ea93: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18209ea98: test rcx, rcx
// asm:   0x18209ea9b: jne 0x18209eaf2
// asm:   0x18209ead7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18209eaf2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315b20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315b25: push rbp
// asm:   0x183315b26: sub rsp, 0x30
// asm:   0x183315b2a: mov rbp, rdx
// asm:   0x183315b2d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183315b31: mov rcx, qword ptr [rax]
// asm:   0x183315b34: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183315b38: movabs rax, 0
// asm:   0x183315b42: add rsp, 0x30
// asm:   0x183315b46: pop rbp
// asm:   0x183315b47: ret 
// asm:   0x183317e10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317e15: push rbp
// asm:   0x183317e16: sub rsp, 0x30
// asm:   0x183317e1a: mov rbp, rdx
// asm:   0x183317e1d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183317e21: mov rcx, qword ptr [rax]
// asm:   0x183317e24: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317e28: movabs rax, 0
// asm:   0x183317e32: add rsp, 0x30
// asm:   0x183317e36: pop rbp
// asm:   0x183317e37: ret 

void CustomLogic_CustomLogicComponentInstance__LoadVariables
               (CustomLogic_CustomLogicComponentInstance_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Map_MapScriptComponent_o *pMVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_string__object__o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *value;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  bool bVar5;
  System_String_array *pSVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_IEnumerable_TKey__o *source;
  System_Collections_Generic_List_TSource__o *__this_03;
  UnityEngine_AnimationCurve_o *className;
  undefined1 local_58 [16];
  System_String_o *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  System_String_o *local_30;
  
  if (Il2CppMethodInitialized_1843468b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    il2cpp_codegen_initialize_runtime_metadata(&"MapObject");
    il2cpp_codegen_initialize_runtime_metadata(&"NetworkView");
    Il2CppMethodInitialized_1843468b2 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (System_String_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"MapObject",(Il2CppObject *)(__this->fields).MapObject,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    if ((__this->fields).NetworkView != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18209eaf8;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"NetworkView",(Il2CppObject *)(__this->fields).NetworkView,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    }
    pMVar2 = (__this->fields)._script;
    if ((pMVar2 != (Map_MapScriptComponent_o *)0x0) &&
       (__this_00 = (pMVar2->fields).Parameters, __this_00 != (System_Collections_Generic_List_string__o *)0x0
       )) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_40 = (undefined1  [8])local_58._0_8_;
      pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
      local_30 = local_48;
      local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
      while( true ) {
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_40,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        if (!bVar5) break;
        if (local_30 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = System_String__Split(local_30,0x3a,0,(MethodInfo *)0x0);
        if (pSVar6 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((int)pSVar6->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        if ((uint)pSVar6->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3 = (__this->fields).Variables;
        if (pSVar3 == (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = pSVar6->m_Items[0];
        value = pSVar6->m_Items[1];
        bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                           (Il2CppObject *)pSVar4,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_object_ContainsKey);
        if (bVar5) {
          bVar5 = CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
                            ((CustomLogic_CustomLogicClassInstance_o *)__this,pSVar4,(MethodInfo *)0x0);
          if (bVar5) {
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
            if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar1,(Il2CppObject *)pSVar4,
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
            pIVar7 = CustomLogic_CustomLogicComponentInstance__DeserializeValue
                               (pIVar7,value,(MethodInfo *)0x0);
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar1,(Il2CppObject *)pSVar4,pIVar7,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                 MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      pSVar3 = (__this->fields).Variables;
      if (pSVar3 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
        source = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                            (MethodInfo_13C6500 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
        __this_03 = System_Linq_Enumerable__ToList_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
        if (__this_03 != (System_Collections_Generic_List_TSource__o *)0x0) {
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                     (System_Collections_Generic_List_T__o *)__this_03,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
          local_40 = (undefined1  [8])local_58._0_8_;
          pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
          local_30 = local_48;
          local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
          while( true ) {
            do {
              do {
                bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)local_40,
                                   (MethodInfo_153A2A0 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
                pSVar4 = local_30;
                if (!bVar5) {
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                             MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
                  return;
                }
                if (local_30 == (System_String_o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar5 = System_String__StartsWith(local_30,"_",(MethodInfo *)0x0);
              } while (bVar5);
              bVar5 = CustomLogic_CustomLogicClassInstance__ShowVariableInInspector
                                ((CustomLogic_CustomLogicClassInstance_o *)__this,pSVar4,(MethodInfo *)0x0);
            } while (!bVar5);
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            className = (*(__this->klass->vtable)._6_get_ClassName.methodPtr)
                                  (__this,(__this->klass->vtable)._6_get_ClassName.method);
            __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
            if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (__this_02,(Il2CppObject *)pSVar4,
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
            if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar7 = CustomLogic_CustomLogicEvaluator__ApplyComponentInspectorRules
                               (__this_01,(System_String_o *)className,pSVar4,pIVar7,(MethodInfo *)0x0);
            if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar1,(Il2CppObject *)pSVar4,pIVar7,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
label_18209eaf8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicComponentInstance$$UsesCollider
// il2cpp: bool CustomLogic_CustomLogicComponentInstance__UsesCollider (CustomLogic_CustomLogicComponentInstance_o* __this, const MethodInfo* method);
// 0x18209f260

bool CustomLogic_CustomLogicComponentInstance__UsesCollider
               (CustomLogic_CustomLogicComponentInstance_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843468b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionStay");
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionEnter");
    il2cpp_codegen_initialize_runtime_metadata(&"OnGetHit");
    il2cpp_codegen_initialize_runtime_metadata(&"OnGetHooked");
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionExit");
    Il2CppMethodInitialized_1843468b3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                      (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionStay",
                       (MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                        (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionEnter",
                         (MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                          (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnCollisionExit",
                           (MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                            (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,"OnGetHit",
                             (MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                              (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,
                               "OnGetHooked",(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
    }
    return true;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionStay
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionStay (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x18209ed00

void CustomLogic_CustomLogicComponentInstance__OnCollisionStay
               (CustomLogic_CustomLogicComponentInstance_o *__this,CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843468b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionStay");
    Il2CppMethodInitialized_1843468b4 = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (other != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)other,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)other;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,other);
    if (collision != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)collision,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)collision;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,collision);
      CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                (__this,"OnCollisionStay",parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionEnter
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionEnter (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x18209eb00

void CustomLogic_CustomLogicComponentInstance__OnCollisionEnter
               (CustomLogic_CustomLogicComponentInstance_o *__this,CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843468b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionEnter");
    Il2CppMethodInitialized_1843468b5 = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (other != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)other,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)other;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,other);
    if (collision != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)collision,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)collision;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,collision);
      CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                (__this,"OnCollisionEnter",parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicComponentInstance$$OnCollisionExit
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnCollisionExit (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_BuiltinClassInstance_o* other, CustomLogic_BuiltinClassInstance_o* collision, const MethodInfo* method);
// 0x18209ec00

void CustomLogic_CustomLogicComponentInstance__OnCollisionExit
               (CustomLogic_CustomLogicComponentInstance_o *__this,CustomLogic_BuiltinClassInstance_o *other,
               CustomLogic_BuiltinClassInstance_o *collision,MethodInfo *method)

{
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843468b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnCollisionExit");
    Il2CppMethodInitialized_1843468b6 = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (other != (CustomLogic_BuiltinClassInstance_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)other,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)other;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,other);
    if (collision != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)collision,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)collision;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,collision);
      CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                (__this,"OnCollisionExit",parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicComponentInstance$$OnGetHit
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnGetHit (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* character, System_String_o* name, int32_t damage, System_String_o* type, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x18209ee00

void CustomLogic_CustomLogicComponentInstance__OnGetHit
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicCharacterBuiltin_o *character,System_String_o *name,int32_t damage,
               System_String_o *type,CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_1843468b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnGetHit");
    Il2CppMethodInitialized_1843468b7 = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (character != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)character,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)character;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,character);
    if (name != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)name;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,name);
      local_res10[0] = damage;
      pIVar1 = il2cpp_value_box(g_data_184354e08,local_res10);
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = pIVar1;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar1);
        if (type != (System_String_o *)0x0) {
          pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)type,(((parameters->obj).klass)->_1).element_class)
          ;
          if (pIVar1 == (Il2CppObject *)0x0) {
            pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
          }
        }
        if (3 < (uint)parameters->max_length) {
          parameters->m_Items[3] = (Il2CppObject *)type;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,type);
          if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
            pIVar1 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)position,(((parameters->obj).klass)->_1).element_class);
            if (pIVar1 == (Il2CppObject *)0x0) {
              pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
            }
          }
          if (4 < (uint)parameters->max_length) {
            parameters->m_Items[4] = (Il2CppObject *)position;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 4,position);
            CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                      (__this,"OnGetHit",parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicComponentInstance$$OnGetHooked
// il2cpp: void CustomLogic_CustomLogicComponentInstance__OnGetHooked (CustomLogic_CustomLogicComponentInstance_o* __this, CustomLogic_CustomLogicHumanBuiltin_o* human, CustomLogic_CustomLogicVector3Builtin_o* position, bool left, const MethodInfo* method);
// 0x18209f020

void CustomLogic_CustomLogicComponentInstance__OnGetHooked
               (CustomLogic_CustomLogicComponentInstance_o *__this,
               CustomLogic_CustomLogicHumanBuiltin_o *human,CustomLogic_CustomLogicVector3Builtin_o *position,
               bool left,MethodInfo *method)

{
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res10 [8];
  
  if (Il2CppMethodInitialized_1843468b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"OnGetHooked");
    Il2CppMethodInitialized_1843468b8 = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (human != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)human,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)human;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,human);
    if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)position,(((parameters->obj).klass)->_1).element_class)
      ;
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)position;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,position);
      local_res10[0] = left;
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res10);
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)parameters->max_length) {
        parameters->m_Items[2] = pIVar1;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar1);
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  (__this,"OnGetHooked",parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicComponentInstance$$EvaluateMethodForCallbacks
// il2cpp: void CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks (CustomLogic_CustomLogicComponentInstance_o* __this, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x18209e5a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209e650: mov rdi, qword ptr [rsp + 0x40]

void CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
               (CustomLogic_CustomLogicComponentInstance_o *__this,System_String_o *methodName,
               System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843468b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843468b9 = '\x01';
  }
  bVar1 = (*(__this->klass->vtable)._4_get_Enabled.methodPtr)
                    (__this,(__this->klass->vtable)._4_get_Enabled.method);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (bVar1 = CustomLogic_CustomLogicEvaluator__HasMethod
                          (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,
                           (MethodInfo *)0x0), bVar1)) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this_00,(CustomLogic_CustomLogicClassInstance_o *)__this,methodName,parameters,0,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


// CustomLogic.CustomLogicComponentInstance$$DeserializeValue
// il2cpp: Il2CppObject* CustomLogic_CustomLogicComponentInstance__DeserializeValue (Il2CppObject* obj, System_String_o* value, const MethodInfo* method);
// 0x18209df70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209e072: mov rdx, qword ptr [rip + 0x22b6dd7]

Il2CppObject *
CustomLogic_CustomLogicComponentInstance__DeserializeValue
          (Il2CppObject *obj,System_String_o *value,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  bool bVar3;
  int32_t tryStart;
  int32_t tryEnd;
  int32_t finallyStart;
  int32_t finallyEnd;
  System_String_array *pSVar4;
  Utility_Color255_o *value_00;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  CustomLogic_CustomLogicDictBuiltin_o *__this_01;
  System_Func_string__object__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *enumerable;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  Il2CppObject *pIVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  UnityEngine_Vector3_o local_58 [5];
  
  if (Il2CppMethodInitialized_1843468ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicComponentInstance_c_DeserializeValue_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicComponentInstance_c);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_1843468ba = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
label_18209e04f:
    bVar3 = System_String__op_Equality(value,"null",(MethodInfo *)0x0);
    if (bVar3) {
      return (Il2CppObject *)0x0;
    }
    if (obj == (Il2CppObject *)0x0) {
      return (Il2CppObject *)0x0;
    }
  }
  else {
    pIVar6 = (Il2CppObject *)0x0;
    if (obj->klass == g_data_184354e50) {
      pIVar6 = obj;
    }
    if (pIVar6 == (Il2CppObject *)0x0) goto label_18209e04f;
  }
  pIVar6 = (Il2CppObject *)0x0;
  if (obj->klass == g_data_184354e08) {
    pIVar6 = obj;
  }
  if (pIVar6 != (Il2CppObject *)0x0) {
    local_res8[0] = (float)System_Int32__Parse(value,(MethodInfo *)0x0);
    pIVar6 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar6;
  }
  pIVar6 = (Il2CppObject *)0x0;
  if (obj->klass == g_data_184354e38) {
    pIVar6 = obj;
  }
  if (pIVar6 != (Il2CppObject *)0x0) {
    local_res8[0] = System_Single__Parse(value,(MethodInfo *)0x0);
    pIVar6 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar6;
  }
  pIVar6 = (Il2CppObject *)0x0;
  if (obj->klass == g_data_184354e50) {
    pIVar6 = obj;
  }
  if (pIVar6 != (Il2CppObject *)0x0) {
    return (Il2CppObject *)value;
  }
  pIVar6 = (Il2CppObject *)0x0;
  if (obj->klass == g_data_184354de8) {
    pIVar6 = obj;
  }
  if (pIVar6 != (Il2CppObject *)0x0) {
    bVar3 = System_String__op_Equality(value,"true",(MethodInfo *)0x0);
    local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,bVar3);
    pIVar6 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar6;
  }
  pIVar2 = obj->klass;
  bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
  if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicDictBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin)) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicDictBuiltin);
        CustomLogic_CustomLogicDictBuiltin___ctor(__this_01,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
      bVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
        return (Il2CppObject *)0x0;
      }
      bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
        CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar5;
      }
      if (value != (System_String_o *)0x0) {
        pSVar4 = System_String__Split(value,0x2f,0,(MethodInfo *)0x0);
        if ((TypeInfo_CustomLogic_CustomLogicComponentInstance_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicComponentInstance_c);
        }
        __this_02 = TypeInfo_CustomLogic_CustomLogicComponentInstance_c->static_fields->__9__20_0;
        if (__this_02 == (System_Func_string__object__o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicComponentInstance_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicComponentInstance_c);
          }
          pIVar6 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicComponentInstance_c->static_fields->__9;
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_02,pIVar6,
                     (intptr_t)MethodInfo_CustomLogic_CustomLogicComponentInstance_c_DeserializeValue_b__20_0,
                     (MethodInfo_16E67D0 *)0x0);
          TypeInfo_CustomLogic_CustomLogicComponentInstance_c->static_fields->__9__20_0 = __this_02;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicComponentInstance_c->static_fields->__9__20_0,__this_02)
          ;
        }
        enumerable = System_Linq_Enumerable__Select_Vector3__object_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                                (System_Func_TSource__TResult__o *)__this_02,
                                (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_object);
        pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
        CustomLogic_CustomLogicListBuiltin___ctor_1ed1870
                  (pCVar5,(System_Collections_Generic_IEnumerable_object__o *)enumerable,false,
                   (MethodInfo *)0x0);
        return (Il2CppObject *)pCVar5;
      }
    }
    else if ((value != (System_String_o *)0x0) &&
            (pSVar4 = System_String__Split(value,0x2f,0,(MethodInfo *)0x0),
            pSVar4 != (System_String_array *)0x0)) {
      if (((int)pSVar4->max_length != 0) &&
         ((fVar7 = System_Single__Parse(pSVar4->m_Items[0],(MethodInfo *)0x0), 1 < (uint)pSVar4->max_length &&
          (local_58[0].fields.y = System_Single__Parse(pSVar4->m_Items[1],(MethodInfo *)0x0),
          2 < (uint)pSVar4->max_length)))) {
        fVar8 = System_Single__Parse(pSVar4->m_Items[2],(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_58[0].fields.x = fVar7;
        local_58[0].fields.z = fVar8;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0(__this_00,local_58,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_00;
      }
      goto label_18209e509;
    }
  }
  else if ((value != (System_String_o *)0x0) &&
          (pSVar4 = System_String__Split(value,0x2f,0,(MethodInfo *)0x0), pSVar4 != (System_String_array *)0x0
          )) {
    if (((int)pSVar4->max_length != 0) &&
       (((tryStart = System_Int32__Parse(pSVar4->m_Items[0],(MethodInfo *)0x0), 1 < (uint)pSVar4->max_length
         && (tryEnd = System_Int32__Parse(pSVar4->m_Items[1],(MethodInfo *)0x0), 2 < (uint)pSVar4->max_length)
         ) && (finallyStart = System_Int32__Parse(pSVar4->m_Items[2],(MethodInfo *)0x0),
              3 < (uint)pSVar4->max_length)))) {
      finallyEnd = System_Int32__Parse(pSVar4->m_Items[3],(MethodInfo *)0x0);
      value_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor
                ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)value_00,tryStart,tryEnd,
                 finallyStart,finallyEnd,(MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this,value_00,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
label_18209e509:
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


