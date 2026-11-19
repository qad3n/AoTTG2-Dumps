// Type: Gisketch.Aottg2UI.Actions.GisketchFormField
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFormField.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFormField.<>c__DisplayClass14_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___ctor (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x53a37b0

void Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField.<>c__DisplayClass14_0$$<Reader>b__0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___Reader_b__0 (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x53a37d0

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___Reader_b__0
          (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  
  pTVar1 = (__this->fields).input;
  if (pTVar1 == (TMPro_TMP_InputField_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pTVar1->fields).m_Text;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField.<>c__DisplayClass14_0$$<Reader>b__1
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___Reader_b__1 (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x53a37f0

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0___Reader_b__1
          (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar4;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar7;
  System_String_o *pSVar8;
  bool bVar9;
  uint uVar10;
  
  pGVar4 = (__this->fields).choice;
  if (pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    pGVar5 = (pGVar4->fields)._options;
    if (pGVar5 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_053a384c:
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pGVar6 = (pGVar5->fields)._items;
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
      uVar2 = (pGVar4->fields)._index;
      uVar3 = (uint)pGVar6->max_length;
      uVar1 = uVar3 - 1;
      if ((int)uVar2 < (int)uVar1) {
        uVar1 = uVar2;
      }
      uVar10 = 0;
      if (-1 < (int)uVar2) {
        uVar10 = uVar1;
      }
      if (uVar3 <= uVar10) {
        ThrowIndexOutOfRangeException();
      }
      pGVar7 = pGVar6->m_Items[(int)uVar10];
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
        bVar9 = System_String__IsNullOrEmpty((pGVar7->fields).value,(MethodInfo *)0x0);
        if (!bVar9) {
          return (pGVar7->fields).value;
        }
        pSVar8 = (pGVar7->fields).text;
        if (pSVar8 != (System_String_o *)0x0) {
          return pSVar8;
        }
        goto label_053a384c;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$get_Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchFormField__get_Key (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, const MethodInfo* method);
// 0x53a32f0

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchFormField__get_Key
          (Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this,MethodInfo *method)

{
  return (__this->fields)._Key_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$set_Key
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField__set_Key (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, System_String_o* value, const MethodInfo* method);
// 0x53a3300

void Gisketch_Aottg2UI_Actions_GisketchFormField__set_Key
               (Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Key_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Key_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$get_Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchFormField__get_Label (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, const MethodInfo* method);
// 0x53a3310

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchFormField__get_Label
          (Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this,MethodInfo *method)

{
  return (__this->fields)._Label_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$set_Label
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField__set_Label (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, System_String_o* value, const MethodInfo* method);
// 0x53a3320

void Gisketch_Aottg2UI_Actions_GisketchFormField__set_Label
               (Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Label_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Label_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$Attach
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField__Attach (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x53a3330

void Gisketch_Aottg2UI_Actions_GisketchFormField__Attach
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Actions_GisketchFormField_o *pGVar3;
  System_Func_string__o *pSVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node_00;
  System_String_o *value;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_07542bbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFormField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542bbd = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) && (!bVar2)) {
    bVar2 = System_String__IsNullOrEmpty((node->fields).formKey,(MethodInfo *)0x0);
    if (!bVar2) {
      if (go != (UnityEngine_GameObject_o *)0x0) {
        node_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                  MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormField;
        pGVar3 = UnityEngine_GameObject__GetComponent_object_
                           (go,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormField);
        method_00 = extraout_RDX;
        if (pGVar3 == (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)0x0) {
          node_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                    MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFormField;
          pGVar3 = UnityEngine_GameObject__AddComponent_object_
                             (go,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFormField);
          method_00 = extraout_RDX_00;
        }
        pSVar1 = (node->fields).formKey;
        value = (node->fields).formLabel;
        pSVar4 = Gisketch_Aottg2UI_Actions_GisketchFormField__Reader(go,node_00,method_00);
        if (pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)0x0) {
          pSVar5 = (node->fields).value;
          (pGVar3->fields)._Key_k__BackingField = pSVar1;
          Il2CppCodeGenWriteBarrier(&(pGVar3->fields)._Key_k__BackingField);
          bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          if (bVar2) {
            value = pSVar1;
          }
          (pGVar3->fields)._Label_k__BackingField = value;
          Il2CppCodeGenWriteBarrier(&(pGVar3->fields)._Label_k__BackingField);
          (pGVar3->fields)._read = pSVar4;
          Il2CppCodeGenWriteBarrier(&(pGVar3->fields)._read);
          if (pSVar5 == (System_String_o *)0x0) {
            pSVar5 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
          }
          (pGVar3->fields)._value = pSVar5;
          Il2CppCodeGenWriteBarrier(&(pGVar3->fields)._value);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField__Setup (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, System_String_o* key, System_String_o* label, System_Func_string__o* read, System_String_o* value, const MethodInfo* method);
// 0x53a3630

void Gisketch_Aottg2UI_Actions_GisketchFormField__Setup
               (Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this,System_String_o *key,
               System_String_o *label,System_Func_string__o *read,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  
  (__this->fields)._Key_k__BackingField = key;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Key_k__BackingField);
  bVar1 = System_String__IsNullOrEmpty(label,(MethodInfo *)0x0);
  if (bVar1) {
    label = key;
  }
  (__this->fields)._Label_k__BackingField = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Label_k__BackingField);
  (__this->fields)._read = read;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._read);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$CurrentValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchFormField__CurrentValue (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, const MethodInfo* method);
// 0x53a36c0
// eh: try 0x53a36d2..0x53a36d5 -> pad 0x53a36e7 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x53a36fa..0x53a3758 -> pad 0x53a3758 (+1 call sites) cleanup
// eh: try 0x53a375b..0x53a3760 -> pad 0x53a3768 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a36da: jmp 0x53a371d
// asm:   0x53a36e7: mov rbx, rax
// asm:   0x53a36ea: cmp edx, 1
// asm:   0x53a36ed: jne 0x53a3760
// asm:   0x53a36ef: mov rdi, rbx
// asm:   0x53a36f2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x53a36f7: mov rbx, rax
// asm:   0x53a36fa: lea rdi, [rip + 0x1ed49bf]  ; TypeInfo_System_Exception
// asm:   0x53a3701: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x53a3706: mov rcx, qword ptr [rbx]
// asm:   0x53a3709: mov rsi, qword ptr [rcx]
// asm:   0x53a370c: mov rdi, rax
// asm:   0x53a370f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x53a3714: test al, al
// asm:   0x53a3716: je 0x53a3737
// asm:   0x53a3718: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53a3737: mov edi, 8
// asm:   0x53a373c: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x53a3741: mov rcx, qword ptr [rbx]
// asm:   0x53a3744: mov qword ptr [rax], rcx
// asm:   0x53a3747: lea rsi, [rip + 0x1a89db2]
// asm:   0x53a374e: mov rdi, rax
// asm:   0x53a3751: xor edx, edx
// asm:   0x53a3753: call 0x6e255c0  ; __cxa_throw()
// asm:   0x53a3758: mov rbx, rax
// asm:   0x53a375b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53a3760: mov rdi, rbx
// asm:   0x53a3763: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53a3768: mov rdi, rax
// asm:   0x53a376b: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchFormField__CurrentValue
          (Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this,MethodInfo *method)

{
  System_Func_string__o *pSVar1;
  System_String_o *pSVar2;
  
  pSVar1 = (__this->fields)._read;
  if (pSVar1 == (System_Func_string__o *)0x0) {
    pSVar2 = (__this->fields)._value;
  }
  else {
    pSVar2 = (System_String_o *)
             (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  }
  if (pSVar2 == (System_String_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField__SetValue (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, System_String_o* value, const MethodInfo* method);
// 0x53a3770

void Gisketch_Aottg2UI_Actions_GisketchFormField__SetValue
               (Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this,System_String_o *value,
               MethodInfo *method)

{
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (__this == (Gisketch_Aottg2UI_Actions_GisketchFormField_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$Reader
// il2cpp: System_Func_string__o* Gisketch_Aottg2UI_Actions_GisketchFormField__Reader (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x53a34b0

System_Func_string__o *
Gisketch_Aottg2UI_Actions_GisketchFormField__Reader
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o *__this;
  TMPro_TMP_InputField_o *pTVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar3;
  System_Func_string__o *__this_00;
  MethodInfo **ppMVar4;
  
  if (Il2CppMethodInitialized_07542bbe == '\0') {
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
    Il2CppMethodInitialized_07542bbe = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0)
  ;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((go == (UnityEngine_GameObject_o *)0x0) ||
     (pTVar2 = UnityEngine_GameObject__GetComponent_object_
                         (go,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField),
     __this == (Gisketch_Aottg2UI_Actions_GisketchFormField___c__DisplayClass14_0_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (__this->fields).input = pTVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).input);
  pTVar2 = (__this->fields).input;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    ppMVar4 = &MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__0;
  }
  else {
    pGVar3 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_AottgChoiceControl);
    (__this->fields).choice = pGVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).choice);
    pGVar3 = (__this->fields).choice;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return (System_Func_string__o *)0x0;
    }
    ppMVar4 = &MethodInfo_Gisketch_Aottg2UI_Actions_GisketchFormField_c__DisplayClass14_0_Reader_b__1;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
  System_Func_object____ctor
            ((System_Func_object__o *)__this_00,(Il2CppObject *)__this,(intptr_t)*ppMVar4,
             (MethodInfo_4F0C6A0 *)0x0);
  return __this_00;
}


// Gisketch.Aottg2UI.Actions.GisketchFormField$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFormField___ctor (Gisketch_Aottg2UI_Actions_GisketchFormField_o* __this, const MethodInfo* method);
// 0x53a37c0

void Gisketch_Aottg2UI_Actions_GisketchFormField___ctor
               (Gisketch_Aottg2UI_Actions_GisketchFormField_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


