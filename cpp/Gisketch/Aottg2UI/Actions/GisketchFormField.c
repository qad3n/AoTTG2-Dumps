// Type: Gisketch.Aottg2UI.Actions.GisketchFormField
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFormField.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFormField.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___ctor (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___ctor(Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField.<>c__DisplayClass14_0$$<Reader>b__0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___Reader_b__0 (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x18190a820

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___Reader_b__0
          (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  
  pTVar1 = (__this->fields).input;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    return (pTVar1->fields).m_Text;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormField.<>c__DisplayClass14_0$$<Reader>b__1
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___Reader_b__1 (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x18190a840

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___Reader_b__1
          (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar1;
  System_String_o *pSVar2;
  
  pGVar1 = (__this->fields).choice;
  if (pGVar1 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pGVar1->fields)._options != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    pSVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Value
                       ((pGVar1->fields)._options,(pGVar1->fields)._index,(MethodInfo *)0x0);
    return pSVar2;
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$get_Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchFormField__get_Key (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, const MethodInfo* method);
// 0x1805853f0

System_String_o*
Gisketch_Aottg2UI_Actions_GisketchFormField__get_Key(Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, MethodInfo* method)

{
  return (__this->fields)._Key_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$set_Key
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField__set_Key (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, System_String_o* value, const MethodInfo* method);
// 0x18058aa00

void
Gisketch_Aottg2UI_Actions_GisketchFormField__set_Key(Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Key_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Key_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$get_Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchFormField__get_Label (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, const MethodInfo* method);
// 0x180c8eec0

System_String_o*
Gisketch_Aottg2UI_Actions_GisketchFormField__get_Label(Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, MethodInfo* method)

{
  return (__this->fields)._Label_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$set_Label
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField__set_Label (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1818be8a0

void
Gisketch_Aottg2UI_Actions_GisketchFormField__set_Label(Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Label_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Label_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$Attach
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField__Attach (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x181900d70

void Gisketch_Aottg2UI_Actions_GisketchFormField__Attach
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchFormField_o *pGVar2;
  Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o *object;
  TMPro_TMP_InputField_o *pTVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar4;
  DG_Tweening_Core_DOGetter_Vector2__o *__this;
  System_String_o *value_00;
  MethodInfo *method_00;
  System_String_o *value_01;
  
  if (Il2CppMethodInitialized_18434223e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFormField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434223e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  bVar1 = System_String__IsNullOrEmpty((node->fields).formKey,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_18190103b;
  pGVar2 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormField
                     );
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)0x0) {
    pGVar2 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFormField);
  }
  value_01 = (node->fields).formKey;
  value = (node->fields).formLabel;
  if (Il2CppMethodInitialized_18434223f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AottgChoiceControl);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0);
    Il2CppMethodInitialized_18434223f = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  pTVar3 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
  if (object == (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o *)0x0)
  goto label_18190103b;
  (object->fields).input = pTVar3;
  Il2CppCodeGenWriteBarrier(&(object->fields).input,pTVar3);
  pTVar3 = (object->fields).input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this = (DG_Tweening_Core_DOGetter_Vector2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
    method_00 = MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__0;
label_181900f9c:
    System_Func_object____ctor
              (__this,(Il2CppObject *)object,(intptr_t)method_00,(MethodInfo_1387740 *)0x0);
  }
  else {
    pGVar4 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_AottgChoiceControl);
    (object->fields).choice = pGVar4;
    Il2CppCodeGenWriteBarrier(&(object->fields).choice,pGVar4);
    pGVar4 = (object->fields).choice;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (DG_Tweening_Core_DOGetter_Vector2__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
      method_00 = MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__1;
      goto label_181900f9c;
    }
    __this = (DG_Tweening_Core_DOGetter_Vector2__o *)0x0;
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)0x0) {
    value_00 = (node->fields).value;
    (pGVar2->fields)._Key_k__BackingField = value_01;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._Key_k__BackingField,value_01);
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar1) {
      value_01 = value;
    }
    (pGVar2->fields)._Label_k__BackingField = value_01;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._Label_k__BackingField,value_01);
    (pGVar2->fields)._read = (System_Func_string__o *)__this;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._read,__this);
    if (value_00 == (System_String_o *)0x0) {
      value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    (pGVar2->fields)._value = value_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields)._value,value_00);
    return;
  }
label_18190103b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField__Setup (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, System_String_o* key, System_String_o* label, System_Func_string__o* read, System_String_o* value, const MethodInfo* method);
// 0x181901280

void Gisketch_Aottg2UI_Actions_GisketchFormField__Setup
               (Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this,System_String_o *key,
               System_String_o *label,System_Func_string__o *read,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  
  (__this->fields)._Key_k__BackingField = key;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Key_k__BackingField,key);
  bVar1 = System_String__IsNullOrEmpty(label,(MethodInfo *)0x0);
  if (!bVar1) {
    key = label;
  }
  (__this->fields)._Label_k__BackingField = key;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Label_k__BackingField,key);
  (__this->fields)._read = read;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._read,read);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value,value);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$CurrentValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchFormField__CurrentValue (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, const MethodInfo* method);
// 0x181901050
// eh: try 0x181901067..0x18190109e -> pad 0x183331bd0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181901088: mov rax, qword ptr [rip + 0x2a53dc1]
// asm:   0x18190108f: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x181901096: mov rax, qword ptr [rcx]
// asm:   0x183331bd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331bd5: push rbx
// asm:   0x183331bd6: push rbp
// asm:   0x183331bd7: push rdi
// asm:   0x183331bd8: sub rsp, 0x20
// asm:   0x183331bdc: mov rbp, rdx
// asm:   0x183331bdf: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183331be3: mov rax, qword ptr [rdi]
// asm:   0x183331be6: mov rbx, qword ptr [rax]
// asm:   0x183331be9: lea rcx, [rip + 0xd47368]  ; TypeInfo_System_Exception
// asm:   0x183331bf0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331bf5: mov rcx, rax
// asm:   0x183331bf8: mov rdx, rbx
// asm:   0x183331bfb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331c00: test al, al
// asm:   0x183331c02: je 0x183331c10
// asm:   0x183331c04: movabs rax, 0
// asm:   0x183331c0e: jmp 0x183331c28
// asm:   0x183331c10: mov rax, qword ptr [rdi]
// asm:   0x183331c13: mov qword ptr [rbp + 0x20], rax
// asm:   0x183331c17: lea rdx, [rip + 0xcaa36a]
// asm:   0x183331c1e: lea rcx, [rbp + 0x20]
// asm:   0x183331c22: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183331c28: add rsp, 0x20
// asm:   0x183331c2c: pop rdi
// asm:   0x183331c2d: pop rbp
// asm:   0x183331c2e: pop rbx
// asm:   0x183331c2f: ret 

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchFormField__CurrentValue
          (Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this,MethodInfo *method)

{
  System_Func_string__o *pSVar1;
  System_String_o *pSVar2;
  
  if ((__this->fields)._read == (System_Func_string__o *)0x0) {
    pSVar2 = (__this->fields)._value;
  }
  else {
    pSVar1 = (__this->fields)._read;
    pSVar2 = (System_String_o *)
             (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  }
  if (pSVar2 == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField__SetValue (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181901240

void Gisketch_Aottg2UI_Actions_GisketchFormField__SetValue
               (Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this,System_String_o *value,
               MethodInfo *method)

{
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this != (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)0x0) {
    (__this->fields)._value = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._value,value);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$Reader
// il2cpp: System_Func_string__o* Gisketch_Aottg2UI_Actions_GisketchFormField__Reader (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1819010a0

System_Func_string__o *
Gisketch_Aottg2UI_Actions_GisketchFormField__Reader
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o *object;
  TMPro_TMP_InputField_o *pTVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar3;
  DG_Tweening_Core_DOGetter_Vector2__o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_18434223f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AottgChoiceControl);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0);
    Il2CppMethodInitialized_18434223f = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pTVar2 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    if (object != (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o *)0x0) {
      (object->fields).input = pTVar2;
      Il2CppCodeGenWriteBarrier(&(object->fields).input,pTVar2);
      pTVar2 = (object->fields).input;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        __this = (DG_Tweening_Core_DOGetter_Vector2__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
        method_00 = MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__0;
      }
      else {
        pGVar3 = UnityEngine_GameObject__GetComponent_object_
                           (go,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_AottgChoiceControl);
        (object->fields).choice = pGVar3;
        Il2CppCodeGenWriteBarrier(&(object->fields).choice,pGVar3);
        pGVar3 = (object->fields).choice;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          return (System_Func_string__o *)0x0;
        }
        __this = (DG_Tweening_Core_DOGetter_Vector2__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
        method_00 = MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__1;
      }
      System_Func_object____ctor
                (__this,(Il2CppObject *)object,(intptr_t)method_00,(MethodInfo_1387740 *)0x0);
      return (System_Func_string__o *)__this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField___ctor (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_GisketchFormField___ctor(Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


