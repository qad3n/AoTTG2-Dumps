// Type: Gisketch.Aottg2UI.Actions.GisketchFormState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFormState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFormState$$CaptureBaseline
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState__CaptureBaseline (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, const MethodInfo* method);
// 0x53a3880
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a391d: nop dword ptr [rax]

void Gisketch_Aottg2UI_Actions_GisketchFormState__CaptureBaseline
               (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this_00;
  uint uVar2;
  System_Object_array *pSVar3;
  System_String_o *value;
  uint uVar4;
  MethodInfo *method_00;
  MethodInfo *key;
  
  if (Il2CppMethodInitialized_07542bbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_07542bbf = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._baseline;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar1,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    if (Il2CppMethodInitialized_07542bc6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
      Il2CppMethodInitialized_07542bc6 = '\x01';
    }
    method_00 = (MethodInfo *)0x1;
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_34B1260 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar3->max_length;
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          if (uVar2 <= uVar4) {
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)pSVar3->m_Items[(int)uVar4];
          if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)0x0) goto label_053a396e;
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._baseline;
          key = (MethodInfo *)(__this_00->fields)._Key_k__BackingField;
          value = Gisketch_Aottg2UI_Actions_GisketchFormField__CurrentValue(__this_00,method_00);
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_053a396e;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar1,(Il2CppObject *)key,(Il2CppObject *)value,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
          uVar4 = uVar4 + 1;
          uVar2 = (uint)pSVar3->max_length;
          method_00 = key;
        } while ((int)uVar4 < (int)uVar2);
      }
      return;
    }
  }
label_053a396e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$ResetToBaseline
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState__ResetToBaseline (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, const MethodInfo* method);
// 0x53a39c0

void Gisketch_Aottg2UI_Actions_GisketchFormState__ResetToBaseline
               (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  Il2CppObject **ppIVar5;
  uint uVar6;
  void *pvVar7;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07542bc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_07542bc0 = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_07542bc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    Il2CppMethodInitialized_07542bc6 = '\x01';
  }
  pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_34B1260 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
  if (pSVar4 == (System_Object_array *)0x0) {
label_053a3aec:
    ThrowNullReferenceException();
  }
  uVar3 = (uint)pSVar4->max_length;
  if (0 < (int)uVar3) {
    uVar6 = 0;
    do {
      if (uVar3 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pIVar1 = pSVar4->m_Items[(int)uVar6];
      if ((pIVar1 == (Il2CppObject *)0x0) ||
         (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._baseline,
         __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_053a3aec;
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)pIVar1[3].klass,&local_38,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      ppIVar5 = &local_38;
      if (!bVar2) {
        ppIVar5 = *(Il2CppObject ***)(g_data_07556758 + 0xb8);
      }
      pvVar7 = *ppIVar5;
      if (pvVar7 == (void *)0x0) {
        pvVar7 = (void *)**(long **)(g_data_07556758 + 0xb8);
      }
      pIVar1[2].monitor = pvVar7;
      Il2CppCodeGenWriteBarrier(&pIVar1[2].monitor);
      uVar6 = uVar6 + 1;
      uVar3 = (uint)pSVar4->max_length;
    } while ((int)uVar6 < (int)uVar3);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$HasDirty
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFormState__HasDirty (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, const MethodInfo* method);
// 0x53a3b00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a3b7e: mov r15, rsp
// asm:   0x53a3b81: nop word ptr cs:[rax + rax]

bool Gisketch_Aottg2UI_Actions_GisketchFormState__HasDirty
               (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *b;
  bool bVar1;
  System_Object_array *pSVar2;
  System_String_o *a;
  uint uVar3;
  Il2CppObject **ppIVar4;
  uint uVar5;
  MethodInfo *method_00;
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_07542bc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_07542bc1 = '\x01';
  }
  pIStack_38 = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_07542bc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    Il2CppMethodInitialized_07542bc6 = '\x01';
  }
  pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_34B1260 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
  if (pSVar2 == (System_Object_array *)0x0) {
label_053a3c21:
    ThrowNullReferenceException();
  }
  uVar3 = (uint)pSVar2->max_length;
  uVar5 = 0;
  if ((int)uVar3 < 1) {
    bVar1 = false;
  }
  else {
    do {
      if (uVar3 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)pSVar2->m_Items[(int)uVar5];
      if ((__this_00 == (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)0x0) ||
         (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._baseline,
         __this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_053a3c21;
      method_00 = (MethodInfo *)(__this_00->fields)._Key_k__BackingField;
      bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_01,(Il2CppObject *)method_00,&pIStack_38,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      ppIVar4 = &pIStack_38;
      if (!bVar1) {
        ppIVar4 = *(Il2CppObject ***)(g_data_07556758 + 0xb8);
      }
      b = (System_String_o *)*ppIVar4;
      a = Gisketch_Aottg2UI_Actions_GisketchFormField__CurrentValue(__this_00,method_00);
      bVar1 = System_String__Equals_52ffe30(a,b,4,(MethodInfo *)0x0);
      if (!bVar1) break;
      uVar5 = uVar5 + 1;
      uVar3 = (uint)pSVar2->max_length;
    } while ((int)uVar5 < (int)uVar3);
    bVar1 = !bVar1;
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$SetDraft
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x53a3c30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a3c9c: nop dword ptr [rax]

void Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft
               (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,System_String_o *key,
               System_String_o *value,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  
  bVar2 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (!bVar2) {
    if (Il2CppMethodInitialized_07542bc6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
      Il2CppMethodInitialized_07542bc6 = '\x01';
    }
    pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this,true,
                        (MethodInfo_34B1260 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    if (pSVar4 == (System_Object_array *)0x0) {
label_053a3d1b:
      ThrowNullReferenceException();
    }
    uVar3 = (uint)pSVar4->max_length;
    if (0 < (int)uVar3) {
      uVar5 = 0;
      do {
        if (uVar3 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        pIVar1 = pSVar4->m_Items[(int)uVar5];
        if (pIVar1 == (Il2CppObject *)0x0) goto label_053a3d1b;
        bVar2 = System_String__Equals_52ffe30((System_String_o *)pIVar1[3].klass,key,5,(MethodInfo *)0x0);
        if (bVar2) {
          if (value == (System_String_o *)0x0) {
            value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          }
          pIVar1[2].monitor = value;
          Il2CppCodeGenWriteBarrier(&pIVar1[2].monitor);
          return;
        }
        uVar5 = uVar5 + 1;
        uVar3 = (uint)pSVar4->max_length;
      } while ((int)uVar5 < (int)uVar3);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$SetDraft
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft (UnityEngine_GameObject_o* source, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x53a3d20

void Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_52a3d20
               (UnityEngine_GameObject_o *source,System_String_o *key,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)key;
  if (Il2CppMethodInitialized_07542bc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bc2 = '\x01';
  }
  __this = Gisketch_Aottg2UI_Actions_GisketchFormState__Find(source,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this == (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft(__this,key,value,method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$IsDirty
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchFormState__IsDirty (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x53a3ec0

bool Gisketch_Aottg2UI_Actions_GisketchFormState__IsDirty(UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542bc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bc3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_053a3f6f;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormState);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (__this != (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0) {
    bVar1 = Gisketch_Aottg2UI_Actions_GisketchFormState__HasDirty(__this,method_00);
    return bVar1;
  }
label_053a3f6f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$Reset
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState__Reset (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x53a3f80

void Gisketch_Aottg2UI_Actions_GisketchFormState__Reset(UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542bc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bc4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_053a402d;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormState);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (__this != (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0) {
    Gisketch_Aottg2UI_Actions_GisketchFormState__ResetToBaseline(__this,method_00);
    return;
  }
label_053a402d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$Find
// il2cpp: Gisketch_Aottg2UI_Actions_GisketchFormState_o* Gisketch_Aottg2UI_Actions_GisketchFormState__Find (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x53a3da0

Gisketch_Aottg2UI_Actions_GisketchFormState_o *
Gisketch_Aottg2UI_Actions_GisketchFormState__Find(UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchFormState_o *pGVar2;
  UnityEngine_Transform_o *pUVar3;
  
  if (Il2CppMethodInitialized_07542bc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bc5 = '\x01';
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
    pGVar2 = UnityEngine_GameObject__GetComponentInParent_object__353bc10
                       (source,true,
                        (MethodInfo_353BC10 *)
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
      pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
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
                            (MethodInfo_34B0B60 *)
                            MethodInfo_UnityEngine_Component_GetComponentInChildren_GisketchFormState);
        return pGVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$Fields
// il2cpp: Gisketch_Aottg2UI_Actions_GisketchFormField_array* Gisketch_Aottg2UI_Actions_GisketchFormState__Fields (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, const MethodInfo* method);
// 0x53a3980

Gisketch_Aottg2UI_Actions_GisketchFormField_array *
Gisketch_Aottg2UI_Actions_GisketchFormState__Fields
          (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFormField_array *pGVar1;
  
  if (Il2CppMethodInitialized_07542bc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
    Il2CppMethodInitialized_07542bc6 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Actions_GisketchFormField_array *)
           UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,true,
                      (MethodInfo_34B1260 *)
                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchFormField);
  return pGVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchFormState$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormState___ctor (Gisketch_Aottg2UI_Actions_GisketchFormState_o* __this, const MethodInfo* method);
// 0x53a4040
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a406c: cmp byte ptr [rip + 0x219e813], 0

void Gisketch_Aottg2UI_Actions_GisketchFormState___ctor
               (Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_07542bc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542bc7 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd38
            );
  (__this->fields)._baseline = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._baseline);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


