// Type: Gisketch.Aottg2UI.Actions.GisketchFormState
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFormState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFormState$$CaptureBaseline
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState__CaptureBaseline (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, const MethodInfo* method);
// 0x181901310

void Gisketch_Aottg2UI_Actions_GisketchFormState__CaptureBaseline
               (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_String_o *key;
  System_Object_array *pSVar1;
  System_String_o *value;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184342240 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_184342240 = '\x01';
  }
  __this_00 = (__this->fields)._baseline;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    if (Il2CppMethodInitialized_184342247 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
      Il2CppMethodInitialized_184342247 = '\x01';
    }
    pSVar1 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_665440 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    if (pSVar1 != (System_Object_array *)0x0) {
      uVar2 = 0;
      while( true ) {
        if ((int)pSVar1->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)pSVar1->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        __this_01 = (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)pSVar1->m_Items[(int)uVar2];
        if (__this_01 == (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)0x0) break;
        __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._baseline;
        key = (__this_01->fields)._Key_k__BackingField;
        value = Gisketch_Aottg2UI_Actions_GisketchFormField__CurrentValue(__this_01,(MethodInfo *)0x0);
        if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_02,(Il2CppObject *)key,(Il2CppObject *)value,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
        uVar2 = uVar2 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$ResetToBaseline
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState__ResetToBaseline (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, const MethodInfo* method);
// 0x1819018d0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181901949: nop dword ptr [rax]
// asm:   0x181901990: mov rdx, qword ptr [rsp + 0x40]
// asm:   0x181901995: jmp 0x1819019a1

void Gisketch_Aottg2UI_Actions_GisketchFormState__ResetToBaseline
               (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  System_Object_array *pSVar3;
  Il2CppObject *value;
  uint uVar4;
  Il2CppObject *local_res18;
  
  if (Il2CppMethodInitialized_184342241 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_184342241 = '\x01';
  }
  local_res18 = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_184342247 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    Il2CppMethodInitialized_184342247 = '\x01';
  }
  pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_665440 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
  if (pSVar3 != (System_Object_array *)0x0) {
    uVar4 = 0;
    while( true ) {
      if ((int)pSVar3->max_length <= (int)uVar4) {
        return;
      }
      if ((uint)pSVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pIVar1 = pSVar3->m_Items[(int)uVar4];
      if ((pIVar1 == (Il2CppObject *)0x0) ||
         (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._baseline,
         __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) break;
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)pIVar1[3].klass,&local_res18,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      value = local_res18;
      if (!bVar2) {
        value = (Il2CppObject *)**(longlong **)(g_data_184354e50 + 0xb8);
      }
      if (value == (Il2CppObject *)0x0) {
        value = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      pIVar1[2].monitor = value;
      Il2CppCodeGenWriteBarrier(&pIVar1[2].monitor,value);
      uVar4 = uVar4 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$HasDirty
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFormState__HasDirty (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, const MethodInfo* method);
// 0x1819015a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190161c: nop dword ptr [rax]
// asm:   0x181901665: mov rbp, qword ptr [rsp + 0x50]
// asm:   0x18190166a: jmp 0x18190167d

bool Gisketch_Aottg2UI_Actions_GisketchFormState__HasDirty
               (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  System_Object_array *pSVar2;
  System_String_o *a;
  uint uVar3;
  System_String_o *b;
  System_String_o *local_res18 [2];
  
  if (Il2CppMethodInitialized_184342242 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_184342242 = '\x01';
  }
  local_res18[0] = (System_String_o *)0x0;
  if (Il2CppMethodInitialized_184342247 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    Il2CppMethodInitialized_184342247 = '\x01';
  }
  pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_665440 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
  if (pSVar2 != (System_Object_array *)0x0) {
    uVar3 = 0;
    while( true ) {
      if ((int)pSVar2->max_length <= (int)uVar3) {
        return false;
      }
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)pSVar2->m_Items[(int)uVar3];
      if ((__this_00 == (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)0x0) ||
         (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._baseline,
         __this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) break;
      bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_01,(Il2CppObject *)(__this_00->fields)._Key_k__BackingField,
                         (Il2CppObject **)local_res18,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      b = local_res18[0];
      if (!bVar1) {
        b = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      a = Gisketch_Aottg2UI_Actions_GisketchFormField__CurrentValue(__this_00,(MethodInfo *)0x0);
      bVar1 = System_String__Equals_196c550(a,b,4,(MethodInfo *)0x0);
      if (!bVar1) {
        return true;
      }
      uVar3 = uVar3 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$SetDraft
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x181901bb0

void Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft
               (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,System_String_o *key,
               System_String_o *value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  
  bVar2 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (!bVar2) {
    if (Il2CppMethodInitialized_184342247 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
      Il2CppMethodInitialized_184342247 = '\x01';
    }
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_665440 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    if (pSVar3 == (System_Object_array *)0x0) {
label_181901c98:
      ThrowNullReferenceException();
    }
    for (uVar4 = 0; (int)uVar4 < (int)pSVar3->max_length; uVar4 = uVar4 + 1) {
      if ((uint)pSVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pIVar1 = pSVar3->m_Items[(int)uVar4];
      if (pIVar1 == (Il2CppObject *)0x0) goto label_181901c98;
      bVar2 = System_String__Equals_196c550((System_String_o *)pIVar1[3].klass,key,5,(MethodInfo *)0x0);
      if (bVar2) {
        if (value == (System_String_o *)0x0) {
          value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        pIVar1[2].monitor = value;
        Il2CppCodeGenWriteBarrier(&pIVar1[2].monitor,value);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$SetDraft
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft (UnityEngine_GameObject_o* source, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x181901cb0

void Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_1901cb0
               (UnityEngine_GameObject_o *source,System_String_o *key,System_String_o *value,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Actions_GisketchFormState_o *x;
  UnityEngine_Transform_o *pUVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184342243 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342243 = '\x01';
  }
  if (Il2CppMethodInitialized_184342246 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342246 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
label_181901df5:
    x = (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0;
  }
  else {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_181901eeb;
    x = UnityEngine_GameObject__GetComponentInParent_object__6f5300
                  (source,true,
                   (MethodInfo_6F5300 *)
                   MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchFormState);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_181901eeb;
      pUVar3 = UnityEngine_Transform__GetRoot(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) goto label_181901df5;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_181901eeb;
      x = UnityEngine_Component__GetComponentInChildren_object_
                    ((UnityEngine_Component_o *)pUVar3,true,
                     (MethodInfo_664AA0 *)
                     MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchFormState);
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (x == (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0) {
label_181901eeb:
      ThrowNullReferenceException();
    }
    bVar2 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
    if (!bVar2) {
      if (Il2CppMethodInitialized_184342247 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
        Il2CppMethodInitialized_184342247 = '\x01';
      }
      pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)x,true,
                          (MethodInfo_665440 *)
                          MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
      if (pSVar4 == (System_Object_array *)0x0) goto label_181901eeb;
      for (uVar5 = 0; (int)uVar5 < (int)pSVar4->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pSVar4->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        pIVar1 = pSVar4->m_Items[(int)uVar5];
        if (pIVar1 == (Il2CppObject *)0x0) goto label_181901eeb;
        bVar2 = System_String__Equals_196c550((System_String_o *)pIVar1[3].klass,key,5,(MethodInfo *)0x0);
        if (bVar2) {
          if (value == (System_String_o *)0x0) {
            value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
          }
          pIVar1[2].monitor = value;
          Il2CppCodeGenWriteBarrier(&pIVar1[2].monitor,value);
          return;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$IsDirty
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFormState__IsDirty (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1819016e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181901850: mov rbp, qword ptr [rsp + 0x40]
// asm:   0x181901855: jmp 0x181901868

bool Gisketch_Aottg2UI_Actions_GisketchFormState__IsDirty(UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchFormState_o *x;
  System_Object_array *pSVar2;
  System_String_o *a;
  uint uVar3;
  System_String_o *b;
  System_String_o *local_res8;
  
  if (Il2CppMethodInitialized_184342244 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342244 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_1819018b3;
    x = UnityEngine_GameObject__GetComponent_object_
                  (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormState)
    ;
  }
  else {
    x = (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (x != (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0) {
    if (Il2CppMethodInitialized_184342242 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      Il2CppMethodInitialized_184342242 = '\x01';
    }
    local_res8 = (System_String_o *)0x0;
    if (Il2CppMethodInitialized_184342247 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
      Il2CppMethodInitialized_184342247 = '\x01';
    }
    pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)x,true,
                        (MethodInfo_665440 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar3 = 0;
      while( true ) {
        if ((int)pSVar2->max_length <= (int)uVar3) {
          return false;
        }
        if ((uint)pSVar2->max_length <= uVar3) {
          ThrowIndexOutOfRangeException();
        }
        __this = (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)pSVar2->m_Items[(int)uVar3];
        if ((__this == (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)0x0) ||
           (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(x->fields)._baseline,
           __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) break;
        bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (__this_00,(Il2CppObject *)(__this->fields)._Key_k__BackingField,
                           (Il2CppObject **)&local_res8,
                           (MethodInfo_14769C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
        b = local_res8;
        if (!bVar1) {
          b = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        a = Gisketch_Aottg2UI_Actions_GisketchFormField__CurrentValue(__this,(MethodInfo *)0x0);
        bVar1 = System_String__Equals_196c550(a,b,4,(MethodInfo *)0x0);
        if (!bVar1) {
          return true;
        }
        uVar3 = uVar3 + 1;
      }
    }
    ThrowNullReferenceException();
  }
label_1819018b3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState__Reset (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1819019f0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181901b50: mov rdx, qword ptr [rsp + 0x30]
// asm:   0x181901b55: jmp 0x181901b61
// asm:   0x181901b83: mov rdi, qword ptr [rsp + 0x48]
// asm:   0x181901b88: mov rsi, qword ptr [rsp + 0x40]

void Gisketch_Aottg2UI_Actions_GisketchFormState__Reset(UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar2;
  Gisketch_Aottg2UI_Actions_GisketchFormState_o *x;
  System_Object_array *pSVar3;
  Il2CppObject *value;
  uint uVar4;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_184342245 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342245 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_181901ba4;
    x = UnityEngine_GameObject__GetComponent_object_
                  (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormState)
    ;
  }
  else {
    x = (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (x == (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0) {
label_181901ba4:
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_184342241 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      Il2CppMethodInitialized_184342241 = '\x01';
    }
    local_res8 = (Il2CppObject *)0x0;
    if (Il2CppMethodInitialized_184342247 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
      Il2CppMethodInitialized_184342247 = '\x01';
    }
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)x,true,
                        (MethodInfo_665440 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    if (pSVar3 == (System_Object_array *)0x0) {
label_181901b9e:
      ThrowNullReferenceException();
    }
    for (uVar4 = 0; (int)uVar4 < (int)pSVar3->max_length; uVar4 = uVar4 + 1) {
      if ((uint)pSVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pIVar1 = pSVar3->m_Items[(int)uVar4];
      if ((pIVar1 == (Il2CppObject *)0x0) ||
         (__this = (System_Collections_Generic_Dictionary_object__object__o *)(x->fields)._baseline,
         __this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_181901b9e;
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this,(Il2CppObject *)pIVar1[3].klass,&local_res8,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      value = local_res8;
      if (!bVar2) {
        value = (Il2CppObject *)**(longlong **)(g_data_184354e50 + 0xb8);
      }
      if (value == (Il2CppObject *)0x0) {
        value = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      pIVar1[2].monitor = value;
      Il2CppCodeGenWriteBarrier(&pIVar1[2].monitor,value);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$Find
// il2cpp: Gisketch_Aottg2UI_Actions_GisketchFormState_o* Gisketch_Aottg2UI_Actions_GisketchFormState__Find (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181901460

Gisketch_Aottg2UI_Actions_GisketchFormState_o *
Gisketch_Aottg2UI_Actions_GisketchFormState__Find(UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchFormState_o *pGVar2;
  UnityEngine_Transform_o *pUVar3;
  
  if (Il2CppMethodInitialized_184342246 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342246 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0;
  }
  if (source != (UnityEngine_GameObject_o *)0x0) {
    pGVar2 = UnityEngine_GameObject__GetComponentInParent_object__6f5300
                       (source,true,
                        (MethodInfo_6F5300 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchFormState);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return pGVar2;
    }
    pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__GetRoot(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0;
      }
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pGVar2 = UnityEngine_Component__GetComponentInChildren_object_
                           ((UnityEngine_Component_o *)pUVar3,true,
                            (MethodInfo_664AA0 *)
                            MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchFormState);
        return pGVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$Fields
// il2cpp: Gisketch_Aottg2UI_Actions_GisketchFormField_array* Gisketch_Aottg2UI_Actions_GisketchFormState__Fields (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, const MethodInfo* method);
// 0x181901420

Gisketch_Aottg2UI_Actions_GisketchFormField_array *
Gisketch_Aottg2UI_Actions_GisketchFormState__Fields
          (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFormField_array *pGVar1;
  
  if (Il2CppMethodInitialized_184342247 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    Il2CppMethodInitialized_184342247 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Actions_GisketchFormField_array *)
           UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_665440 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
  return pGVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState___ctor (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, const MethodInfo* method);
// 0x181901f00

void Gisketch_Aottg2UI_Actions_GisketchFormState___ctor
               (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_184342248 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_40dd6f8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184342248 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_40dd6f8
            );
  (__this->fields)._baseline = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._baseline,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


