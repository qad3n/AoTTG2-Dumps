// Type: CustomLogic.CustomLogicColorBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicColorBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicColorBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicColorBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ed9010
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ed9302: xor edx, edx
// asm:   0x181ed9304: mov rcx, rdi
// asm:   0x181ed9307: call 0x18209af90  ; CustomLogic_BuiltinClassInstance___ctor()
// asm:   0x181ed930c: mov rcx, qword ptr [rip + 0x2207ed5]  ; TypeInfo_Utility_Color255
// asm:   0x181ed9313: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181ed9318: mov r9d, r14d
// asm:   0x181ed931b: mov qword ptr [rsp + 0x28], 0
// asm:   0x181ed9324: mov r8d, esi
// asm:   0x181ed9327: mov dword ptr [rsp + 0x20], 0xff
// asm:   0x181ed932f: mov edx, ebp
// asm:   0x181ed9331: mov rcx, rax
// asm:   0x181ed9334: mov rbx, rax
// asm:   0x181ed9337: call 0x182332760  ; Utility_Color255___ctor()
// asm:   0x181ed933c: lea rcx, [rdi + 0x30]
// asm:   0x181ed9340: mov qword ptr [rdi + 0x30], rbx
// asm:   0x181ed9344: mov rdx, rbx
// asm:   0x181ed9347: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x181ed934c: mov rax, rdi
// asm:   0x181ed934f: jmp 0x181ed9207
// asm:   0x181ed945e: mov rax, rdi
// asm:   0x181ed9461: jmp 0x181ed9214

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int32_t iVar7;
  int32_t iVar8;
  int32_t iVar9;
  int32_t finallyEnd;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar10;
  Utility_Color255_o *pUVar11;
  System_String_o *pSVar12;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184345155 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345155 = '\x01';
  }
  local_res8[0] = 0;
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    if (Il2CppMethodInitialized_184345143 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
      Il2CppMethodInitialized_184345143 = '\x01';
    }
    pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor_2332720(pUVar11,(MethodInfo *)0x0);
    (pCVar10->fields).Value = pUVar11;
    Il2CppCodeGenWriteBarrier(&(pCVar10->fields).Value,pUVar11);
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar10,(MethodInfo *)0x0);
    return pCVar10;
  }
  if ((int)args->max_length == 1) {
    pIVar1 = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar1,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    if (Il2CppMethodInitialized_184345144 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
      Il2CppMethodInitialized_184345144 = '\x01';
    }
    local_48.r = 0.0;
    local_48.g = 0.0;
    local_48.b = 0.0;
    local_48.a = 0.0;
    pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor_2332720(pUVar11,(MethodInfo *)0x0);
    (pCVar10->fields).Value = pUVar11;
    Il2CppCodeGenWriteBarrier(&(pCVar10->fields).Value,pUVar11);
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar10,(MethodInfo *)0x0);
    bVar6 = UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar12,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
    uVar4 = local_48._8_8_;
    uVar2 = local_48._0_8_;
    if (bVar6) {
      pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      uVar5 = local_48._8_8_;
      uVar3 = local_48._0_8_;
      local_48.r = (float)uVar2;
      local_48.g = SUB84(uVar2,4);
      local_38[0].r = local_48.r;
      local_38[0].g = local_48.g;
      local_48.b = (float)uVar4;
      local_48.a = SUB84(uVar4,4);
      local_38[0].b = local_48.b;
      local_38[0].a = local_48.a;
      local_48._0_8_ = uVar3;
      local_48._8_8_ = uVar5;
      Utility_Color255___ctor_23327a0(pUVar11,(UnityEngine_Color_o *)local_38,(MethodInfo *)0x0);
      (pCVar10->fields).Value = pUVar11;
      Il2CppCodeGenWriteBarrier(&(pCVar10->fields).Value,pUVar11);
    }
    return pCVar10;
  }
  if ((int)args->max_length == 3) {
    pIVar1 = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    iVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar1,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((1 < (uint)args->max_length) &&
       (iVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                          (args->m_Items[1],
                           (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int),
       2 < (uint)args->max_length)) {
      iVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (args->m_Items[2],
                         (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      if (Il2CppMethodInitialized_184345145 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
        Il2CppMethodInitialized_184345145 = '\x01';
      }
      pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor_2332720(pUVar11,(MethodInfo *)0x0);
      (pCVar10->fields).Value = pUVar11;
      Il2CppCodeGenWriteBarrier(&(pCVar10->fields).Value,pUVar11);
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar10,(MethodInfo *)0x0)
      ;
      pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor
                ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar11,iVar7,iVar8,iVar9,0xff,
                 (MethodInfo *)0x0);
      (pCVar10->fields).Value = pUVar11;
      Il2CppCodeGenWriteBarrier(&(pCVar10->fields).Value,pUVar11);
      return pCVar10;
    }
  }
  else {
    if ((int)args->max_length != 4) {
      NullCheck(args);
      local_res8[0] = (int32_t)args->max_length;
      pSVar12 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
      str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicColorBuiltin constructor found that takes ");
      pSVar12 = System_String__Concat_1969b70(str0,pSVar12,str2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this,pSVar12,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicColorBuiltin_Factory_CreateInstance);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
    }
    if ((int)args->max_length != 0) {
      pIVar1 = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      iVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (pIVar1,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                        );
      if (((1 < (uint)args->max_length) &&
          (iVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (args->m_Items[1],
                              (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int),
          2 < (uint)args->max_length)) &&
         (iVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                            (args->m_Items[2],
                             (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int),
         3 < (uint)args->max_length)) {
        finallyEnd = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                               (args->m_Items[3],
                                (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                               );
        pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
        if (Il2CppMethodInitialized_184345146 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
          Il2CppMethodInitialized_184345146 = '\x01';
        }
        pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
        Utility_Color255___ctor_2332720(pUVar11,(MethodInfo *)0x0);
        (pCVar10->fields).Value = pUVar11;
        Il2CppCodeGenWriteBarrier(&(pCVar10->fields).Value,pUVar11);
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar10,(MethodInfo *)0x0);
        pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
        Utility_Color255___ctor
                  ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar11,iVar7,iVar8,iVar9,
                   finallyEnd,(MethodInfo *)0x0);
        (pCVar10->fields).Value = pUVar11;
        Il2CppCodeGenWriteBarrier(&(pCVar10->fields).Value,pUVar11);
        return pCVar10;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181ee3b70

void CustomLogic_CustomLogicColorBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_18434516b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434516b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicColorBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToHexString>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__ToHexString_b__6_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee23d0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__ToHexString_b__6_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  UnityEngine_Color_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_Color_Fields local_18;
  
  if ((__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    pUVar1 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this_00,(MethodInfo *)0x0);
    local_18.r = (pUVar1->fields).r;
    local_18.g = (pUVar1->fields).g;
    local_18.b = (pUVar1->fields).b;
    local_18.a = (pUVar1->fields).a;
    pSVar2 = Unity_VisualScripting_XColor__ToHexString((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__7_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee0250

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__7_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar2;
  Utility_Color255_o *value;
  float t;
  
  if (Il2CppMethodInitialized_18434516c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434516c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
      if (1 < (uint)__a->max_length) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if (Il2CppMethodInitialized_184345149 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
            Il2CppMethodInitialized_184345149 = '\x01';
          }
          if ((pCVar1 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
             (pCVar2 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) {
            value = Utility_Color255__Lerp((pCVar1->fields).Value,(pCVar2->fields).Value,t,(MethodInfo *)0x0);
            pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
            CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(pCVar1,value,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
          goto label_181ee0385;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181ee0385:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding__Gradient>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Gradient_b__8_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edf9a0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding__Gradient_b__8_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  CustomLogic_CustomLogicColorBuiltin_o *b;
  float t;
  
  if (Il2CppMethodInitialized_18434516d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434516d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
      if (1 < (uint)__a->max_length) {
        b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_66EB70 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          pCVar1 = CustomLogic_CustomLogicColorBuiltin__Gradient(pCVar1,b,t,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__9_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2e80

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__9_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
label_181ee2f66:
    ThrowNullReferenceException();
  }
  if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
    ThrowIndexOutOfRangeException();
  }
  if (__c == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) goto label_181ee2f66;
  pIVar3 = __a->m_Items[0];
  pIVar2 = __a->m_Items[1];
  if (Il2CppMethodInitialized_18434514e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_18434514e = '\x01';
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (pIVar3->klass->_2).typeHierarchyDepth) &&
        ((pIVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) && (pIVar2 != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar2->klass->_2).typeHierarchyDepth) &&
         ((pIVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
        local_res18[0] = pIVar3[3].klass == pIVar2[3].klass;
        goto label_181ee2f42;
      }
    }
  }
  local_res18[0] = false;
label_181ee2f42:
  pIVar3 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar3;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__10_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2f80

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__10_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  Il2CppObject *pIVar2;
  int32_t local_res10 [6];
  
  if ((__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__c->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    local_res10[0] =
         (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                   (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__11_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee26c0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__11_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t tryStart;
  int32_t finallyEnd;
  int32_t tryEnd;
  int32_t finallyStart;
  Utility_Color255_o *pUVar1;
  Utility_Color255_o *pUVar2;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  
  if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434514f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      Il2CppMethodInitialized_18434514f = '\x01';
    }
    pUVar2 = (__c->fields).Value;
    if (pUVar2 != (Utility_Color255_o *)0x0) {
      pUVar1 = (__c->fields).Value;
      tryStart = (pUVar2->fields).R;
      finallyEnd = (pUVar1->fields).A;
      tryEnd = (pUVar1->fields).G;
      finallyStart = (pUVar1->fields).B;
      pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      Utility_Color255___ctor
                ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar2,tryStart,tryEnd,finallyStart,
                 finallyEnd,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
      CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_00,pUVar2,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Str__>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Str___b__12_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181d4fa70

Il2CppObject*
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Str___b__12_0(CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, MethodInfo* method)

{
  System_String_o *pSVar1;
  
  if (m != (Photon_Realtime_IConnectionCallbacks_o *)0x0) {
    pSVar1 = (System_String_o *)(*m->klass->vtable[3].methodPtr)(m,m->klass->vtable[3].method);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Add___b__13_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2520

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Add___b__13_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicColorBuiltin____Add__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Sub___b__14_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee3280

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Sub___b__14_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicColorBuiltin____Sub__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__15_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee3190

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__15_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicColorBuiltin____Mul__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Div___b__16_0 (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColorBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2900

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings___c_____CreateMethodBinding____Div___b__16_0
          (CustomLogic_CustomLogicColorBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColorBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicColorBuiltin____Div__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicColorBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ec25d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicColorBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Func_CustomLogicColorBuiltin__object__o *__this_00;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_01;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar5;
  System_Func_CustomLogicColorBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184345156 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"__Sub__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Str__");
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&"G");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Gradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"ToHexString");
    il2cpp_codegen_initialize_runtime_metadata(&"__Div__");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Add__");
    il2cpp_codegen_initialize_runtime_metadata(&"A");
    Il2CppMethodInitialized_184345156 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x993c73c6) {
    if (uVar3 < 0x2115286d) {
      if (uVar3 == 0xdc1f3cc) {
        bVar2 = System_String__op_Equality(name,"__Add__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec3717;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345162 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Add___b__13_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_184345162 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__13_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec36e3;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Add___b__13_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__13_0 =
             (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__13_0;
      }
      else if (uVar3 == 0x18c37b41) {
        bVar2 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec3717;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345164 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Mul___b__15_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_184345164 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__15_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec36e3;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Mul___b__15_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__15_0 =
             (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__15_0;
      }
      else {
        if (uVar3 != 0x2115286c) goto label_181ec3717;
        bVar2 = System_String__op_Equality(name,"ToHexString",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec3717;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434515b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__ToHexString_b__6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_18434515b = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__6_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec36e3;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__ToHexString_b__6_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__6_0 =
             (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__6_0;
      }
    }
    else if (uVar3 < 0x792a6492) {
      if (uVar3 == 0x549f4d10) {
        bVar2 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec3717;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345160 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Copy___b__11_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_184345160 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__11_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec36e3;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Copy___b__11_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__11_0 =
             (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__11_0;
      }
      else {
        if (uVar3 != 0x792a6491) goto label_181ec3717;
        bVar2 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec3717;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434515f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Hash___b__10_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c)
          ;
          Il2CppMethodInitialized_18434515f = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__10_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec36e3;
        if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Hash___b__10_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__10_0 =
             (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__10_0;
      }
    }
    else if (uVar3 == 0x91efe6d7) {
      bVar2 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec3717;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434515e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Eq___b__9_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434515e = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__9_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec36e3;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Eq___b__9_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__9_0 =
           (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__9_0;
    }
    else {
      if (uVar3 != 0x993c73c5) goto label_181ec3717;
      bVar2 = System_String__op_Equality(name,"Gradient",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec3717;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434515d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Gradient_b__8_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434515d = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__8_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec36e3;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Gradient_b__8_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__8_0 =
           (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__8_0;
    }
  }
  else if (uVar3 < 0xc40bf6cd) {
    if (0x9f4a1a20 < uVar3) {
      if (uVar3 == 0xc20bf3a6) {
        bVar2 = System_String__op_Equality(name,"G",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345158 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object)
            ;
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____getter_3_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____setter_3_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
            Il2CppMethodInitialized_184345158 = '\x01';
          }
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____getter_3_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____setter_3_1;
          goto label_181ec2ab9;
        }
      }
      else if (uVar3 == 0xc40bf6cc) {
        bVar2 = System_String__op_Equality(name,"A",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434515a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object)
            ;
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____getter_5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____setter_5_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
            Il2CppMethodInitialized_18434515a = '\x01';
          }
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____getter_5_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____setter_5_1;
          goto label_181ec2ab9;
        }
      }
      goto label_181ec3717;
    }
    if (uVar3 == 0x9e956088) {
      bVar2 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec3717;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434515c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__7_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434515c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__7_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec36e3;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__7_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__7_0 =
           (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__7_0;
    }
    else {
      if (uVar3 != 0x9f4a1a20) goto label_181ec3717;
      bVar2 = System_String__op_Equality(name,"__Str__",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec3717;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345161 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Str___b__12_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345161 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__12_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec36e3;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Str___b__12_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__12_0 =
           (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__12_0;
    }
  }
  else {
    if (uVar3 < 0xd70c14b6) {
      if (uVar3 == 0xc70bfb85) {
        bVar2 = System_String__op_Equality(name,"B",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345159 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object)
            ;
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____getter_4_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____setter_4_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
            Il2CppMethodInitialized_184345159 = '\x01';
          }
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____getter_4_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____setter_4_1;
label_181ec2ab9:
          System_Action_object__object____ctor
                    (__this_01,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo *)0x0);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin
                                );
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)__this_02,(System_Func_T__object__o *)__this_00,
                     (System_Action_T__object__o *)__this_01,
                     (MethodInfo_12B8EE0 *)
                     MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)__this_02;
        }
      }
      else if (uVar3 == 0xd70c14b5) {
        bVar2 = System_String__op_Equality(name,"R",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345157 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object)
            ;
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____getter_2_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____setter_2_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
            Il2CppMethodInitialized_184345157 = '\x01';
          }
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____getter_2_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____setter_2_1;
          goto label_181ec2ab9;
        }
      }
      goto label_181ec3717;
    }
    if (uVar3 == 0xd7cecb55) {
      bVar2 = System_String__op_Equality(name,"__Sub__",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec3717;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345163 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Sub___b__14_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345163 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__14_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec36e3;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Sub___b__14_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__14_0 =
           (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__14_0;
    }
    else {
      if (uVar3 != 0xff76b6dc) {
label_181ec3717:
        pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicColorBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_04,pSVar4,(MethodInfo *)0x0);
        pMVar5 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar5);
      }
      bVar2 = System_String__op_Equality(name,"__Div__",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec3717;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345165 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Div___b__16_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345165 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__16_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec36e3;
      if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Div___b__16_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__16_0 =
           (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__16_0;
    }
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_181ec36e3:
  __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_03,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__R
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R (const MethodInfo* method);
// 0x181ecb5a0

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__R(MethodInfo *method)

{
  System_Func_CustomLogicColorBuiltin__object__o *__this;
  System_Action_CustomLogicColorBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345157 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
    Il2CppMethodInitialized_184345157 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__R_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__G
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__G (const MethodInfo* method);
// 0x181ecad30

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__G(MethodInfo *method)

{
  System_Func_CustomLogicColorBuiltin__object__o *__this;
  System_Action_CustomLogicColorBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345158 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
    Il2CppMethodInitialized_184345158 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__G_g____setter_3_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__B
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__B (const MethodInfo* method);
// 0x181eca6f0

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__B(MethodInfo *method)

{
  System_Func_CustomLogicColorBuiltin__object__o *__this;
  System_Action_CustomLogicColorBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345159 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
    Il2CppMethodInitialized_184345159 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__B_g____setter_4_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreatePropertyBinding__A
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__A (const MethodInfo* method);
// 0x181eca600

CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreatePropertyBinding__A(MethodInfo *method)

{
  System_Func_CustomLogicColorBuiltin__object__o *__this;
  System_Action_CustomLogicColorBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434515a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColorBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____setter_5_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColorBuiltin_object);
    Il2CppMethodInitialized_18434515a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicColorBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings___CreatePropertyBinding__A_g____setter_5_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColorBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__ToHexString
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__ToHexString (const MethodInfo* method);
// 0x181ec8860

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__ToHexString(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434515b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__ToHexString_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434515b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__ToHexString_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x181ec68e0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434515c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434515c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__7_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding__Gradient
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Gradient (const MethodInfo* method);
// 0x181ec5da0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding__Gradient(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434515d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Gradient_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434515d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding__Gradient_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x181ec9840

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434515e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Eq___b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434515e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Eq___b__9_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x181ec9ce0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434515f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Hash___b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434515f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Hash___b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x181ec9050

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345160 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Copy___b__11_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345160 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Copy___b__11_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Str__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Str__ (const MethodInfo* method);
// 0x181eca290

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Str__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345161 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Str___b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345161 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Str___b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Add__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Add__ (const MethodInfo* method);
// 0x181ec8e10

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Add__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345162 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Add___b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345162 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Add___b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Sub__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Sub__ (const MethodInfo* method);
// 0x181eca3b0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Sub__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345163 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Sub___b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345163 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Sub___b__14_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x181ec9f20

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345164 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Mul___b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345164 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Mul___b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$__CreateMethodBinding____Div__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o* CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Div__ (const MethodInfo* method);
// 0x181ec93b0

CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *
CustomLogic_CustomLogicColorBuiltin_Bindings____CreateMethodBinding____Div__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345165 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Div___b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345165 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColorBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c___CreateMethodBinding____Div___b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicColorBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColorBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColorBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181eccc20

void CustomLogic_CustomLogicColorBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345166 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"__Sub__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Str__");
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&"G");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Gradient");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"ToHexString");
    il2cpp_codegen_initialize_runtime_metadata(&"__Div__");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Add__");
    il2cpp_codegen_initialize_runtime_metadata(&"A");
    Il2CppMethodInitialized_184345166 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"R",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"G",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"B",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"A",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToHexString",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Lerp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Gradient",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Copy__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Str__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Add__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Sub__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Mul__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Div__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColorBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__R>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____getter_2_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x181ec4040

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____getter_2_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    local_res8[0] = (pUVar1->fields).R;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__R>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____setter_2_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ec4080

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__R_g____setter_2_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184345167 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345167 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).R = iVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__G>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____getter_3_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3cb0

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____getter_3_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    local_res8[0] = (pUVar1->fields).G;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__G>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____setter_3_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ec3cf0

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__G_g____setter_3_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184345168 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345168 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).G = iVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__B>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____getter_4_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3850

Il2CppObject*
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____getter_4_0(CustomLogic_CustomLogicColorBuiltin_o* __i, MethodInfo* method)

{
  Photon_Realtime_Player_o *pPVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pPVar1 = (__i->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    local_res8[0] = (pPVar1->fields).actorNumber;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__B>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____setter_4_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ec3890

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__B_g____setter_4_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184345169 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345169 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).B = iVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__A>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____getter_5_0 (CustomLogic_CustomLogicColorBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3790

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____getter_5_0
          (CustomLogic_CustomLogicColorBuiltin_o *__i,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    local_res8[0] = (pUVar1->fields).A;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin.Bindings$$<__CreatePropertyBinding__A>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____setter_5_1 (CustomLogic_CustomLogicColorBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ec37d0

void CustomLogic_CustomLogicColorBuiltin_Bindings_____CreatePropertyBinding__A_g____setter_5_1
               (CustomLogic_CustomLogicColorBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_18434516a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434516a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields).Value, pUVar1 != (Utility_Color255_o *)0x0)) {
    (pUVar1->fields).A = iVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ecf050

void CustomLogic_CustomLogicColorBuiltin___ctor
               (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_184345143 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184345143 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_2332720(__this_00,(MethodInfo *)0x0);
  (__this->fields).Value = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,__this_00);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, System_String_o* hexString, const MethodInfo* method);
// 0x181ecf1c0

void CustomLogic_CustomLogicColorBuiltin___ctor_1ecf1c0
               (CustomLogic_CustomLogicColorBuiltin_o *__this,System_String_o *hexString,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  Utility_Color255_o *pUVar6;
  UnityEngine_Color_Fields local_38;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345144 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184345144 = '\x01';
  }
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.0;
  pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_2332720(pUVar6,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pUVar6);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                    (hexString,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
  uVar3 = local_38._8_8_;
  uVar1 = local_38._0_8_;
  if (bVar5) {
    pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    uVar4 = local_38._8_8_;
    uVar2 = local_38._0_8_;
    local_38.r = (float)uVar1;
    local_38.g = SUB84(uVar1,4);
    local_28[0].r = local_38.r;
    local_28[0].g = local_38.g;
    local_38.b = (float)uVar3;
    local_38.a = SUB84(uVar3,4);
    local_28[0].b = local_38.b;
    local_28[0].a = local_38.a;
    local_38._0_8_ = uVar2;
    local_38._8_8_ = uVar4;
    Utility_Color255___ctor_23327a0(pUVar6,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
    (__this->fields).Value = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pUVar6);
  }
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t r, int32_t g, int32_t b, const MethodInfo* method);
// 0x181ecf2c0

void CustomLogic_CustomLogicColorBuiltin___ctor_1ecf2c0
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t r,int32_t g,int32_t b,MethodInfo *method
               )

{
  Utility_Color255_o *pUVar1;
  
  if (Il2CppMethodInitialized_184345145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184345145 = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_2332720(pUVar1,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pUVar1);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar1,r,g,b,0xff,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pUVar1);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t r, int32_t g, int32_t b, int32_t a, const MethodInfo* method);
// 0x181ecf0e0

void CustomLogic_CustomLogicColorBuiltin___ctor_1ecf0e0
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t r,int32_t g,int32_t b,int32_t a,
               MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  if (Il2CppMethodInitialized_184345146 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184345146 = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_2332720(pUVar1,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pUVar1);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar1,r,g,b,a,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pUVar1);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x181ecf3a0

void CustomLogic_CustomLogicColorBuiltin___ctor_1ecf3a0
               (CustomLogic_CustomLogicColorBuiltin_o *__this,UnityEngine_Color_o *color,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184345147 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184345147 = '\x01';
  }
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_2332720(pUVar1,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pUVar1);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  local_18.r = (color->fields).r;
  local_18.g = (color->fields).g;
  local_18.b = (color->fields).b;
  local_18.a = (color->fields).a;
  Utility_Color255___ctor_23327a0(pUVar1,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  (__this->fields).Value = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pUVar1);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColorBuiltin___ctor (CustomLogic_CustomLogicColorBuiltin_o* __this, Utility_Color255_o* value, const MethodInfo* method);
// 0x181ecf470

void CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470
               (CustomLogic_CustomLogicColorBuiltin_o *__this,Utility_Color255_o *value,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  
  if (Il2CppMethodInitialized_184345148 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184345148 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor_2332720(__this_00,(MethodInfo *)0x0);
  (__this->fields).Value = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,__this_00);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,value);
  return;
}


// CustomLogic.CustomLogicColorBuiltin$$get_R
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_R (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ecf5b0

int32_t CustomLogic_CustomLogicColorBuiltin__get_R
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    return (pUVar1->fields).R;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$set_R
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_R (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181ecf630

void CustomLogic_CustomLogicColorBuiltin__set_R
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    (pUVar1->fields).R = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$get_G
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_G (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ecf590

int32_t CustomLogic_CustomLogicColorBuiltin__get_G
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    return (pUVar1->fields).G;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$set_G
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_G (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181ecf610

void CustomLogic_CustomLogicColorBuiltin__set_G
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    (pUVar1->fields).G = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$get_B
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_B (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ecf540

int32_t
CustomLogic_CustomLogicColorBuiltin__get_B(CustomLogic_CustomLogicColorBuiltin_o* __this, MethodInfo* method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  pPVar1 = (__this->fields).Value;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    return (pPVar1->fields).actorNumber;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$set_B
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_B (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181ecf5f0

void CustomLogic_CustomLogicColorBuiltin__set_B
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    (pUVar1->fields).B = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$get_A
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__get_A (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ecf520

int32_t CustomLogic_CustomLogicColorBuiltin__get_A
                  (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    return (pUVar1->fields).A;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$set_A
// il2cpp: void CustomLogic_CustomLogicColorBuiltin__set_A (CustomLogic_CustomLogicColorBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181ecf5d0

void CustomLogic_CustomLogicColorBuiltin__set_A
               (CustomLogic_CustomLogicColorBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    (pUVar1->fields).A = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$ToHexString
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__ToHexString (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ece410

System_String_o *
CustomLogic_CustomLogicColorBuiltin__ToHexString
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  UnityEngine_Color_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_Color_Fields local_18;
  
  __this_00 = (__this->fields).Value;
  if (__this_00 != (Utility_Color255_o *)0x0) {
    pUVar1 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this_00,(MethodInfo *)0x0);
    local_18.r = (pUVar1->fields).r;
    local_18.g = (pUVar1->fields).g;
    local_18.b = (pUVar1->fields).b;
    local_18.a = (pUVar1->fields).a;
    pSVar2 = Unity_VisualScripting_XColor__ToHexString((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$Lerp
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Lerp (CustomLogic_CustomLogicColorBuiltin_o* a, CustomLogic_CustomLogicColorBuiltin_o* b, float t, const MethodInfo* method);
// 0x181ece380

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Lerp
          (CustomLogic_CustomLogicColorBuiltin_o *a,CustomLogic_CustomLogicColorBuiltin_o *b,float t,
          MethodInfo *method)

{
  Utility_Color255_o *value;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_184345149 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_184345149 = '\x01';
  }
  if ((a != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) {
    value = Utility_Color255__Lerp((a->fields).Value,(b->fields).Value,t,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this,value,(MethodInfo *)0x0);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$Gradient
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Gradient (CustomLogic_CustomLogicColorBuiltin_o* a, CustomLogic_CustomLogicColorBuiltin_o* b, float t, const MethodInfo* method);
// 0x181ece0c0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Gradient
          (CustomLogic_CustomLogicColorBuiltin_o *a,CustomLogic_CustomLogicColorBuiltin_o *b,float t,
          MethodInfo *method)

{
  float fVar1;
  UnityEngine_GradientColorKey_array *colorKeys;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_GradientAlphaKey_array *alphakeys;
  Utility_Color255_o *pUVar3;
  CustomLogic_CustomLogicColorBuiltin_o *__this;
  _union_125884 local_res8;
  _union_125884 local_88 [2];
  UnityEngine_Color_Fields local_78;
  UnityEngine_GradientColorKey_o local_68;
  UnityEngine_GradientColorKey_o local_50 [2];
  
  if (Il2CppMethodInitialized_18434514a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientAlphaKey_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GradientColorKey_array);
    Il2CppMethodInitialized_18434514a = '\x01';
  }
  colorKeys = (UnityEngine_GradientColorKey_array *)SZArrayNew(TypeInfo_UnityEngine_GradientColorKey_array,2);
  if ((a != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (pUVar3 = (a->fields).Value, pUVar3 != (Utility_Color255_o *)0x0)) {
    pUVar2 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_78,pUVar3,(MethodInfo *)0x0);
    local_78.r = (pUVar2->fields).r;
    local_78.g = (pUVar2->fields).g;
    local_78.b = (pUVar2->fields).b;
    local_78.a = (pUVar2->fields).a;
    local_68.fields.color.fields.r = 0.0;
    local_68.fields.color.fields.g = 0.0;
    local_68.fields.color.fields.b = 0.0;
    local_68.fields.color.fields.a = 0.0;
    local_68.fields.time = 0.0;
    UnityEngine_GradientColorKey___ctor(&local_68,(UnityEngine_Color_o *)&local_78,0.0,(MethodInfo *)0x0);
    if (colorKeys != (UnityEngine_GradientColorKey_array *)0x0) {
      if ((int)colorKeys->max_length == 0) {
label_181ece378:
        ThrowIndexOutOfRangeException();
      }
      colorKeys->m_Items[0].fields.color.fields.r = local_68.fields.color.fields.r;
      colorKeys->m_Items[0].fields.color.fields.g = local_68.fields.color.fields.g;
      colorKeys->m_Items[0].fields.color.fields.b = local_68.fields.color.fields.b;
      colorKeys->m_Items[0].fields.color.fields.a = local_68.fields.color.fields.a;
      colorKeys->m_Items[0].fields.time = local_68.fields.time;
      if ((b != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
         (pUVar3 = (b->fields).Value, pUVar3 != (Utility_Color255_o *)0x0)) {
        pUVar2 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_78,pUVar3,(MethodInfo *)0x0);
        local_78.r = (pUVar2->fields).r;
        local_78.g = (pUVar2->fields).g;
        local_78.b = (pUVar2->fields).b;
        local_78.a = (pUVar2->fields).a;
        local_50[0].fields.color.fields.r = 0.0;
        local_50[0].fields.color.fields.g = 0.0;
        local_50[0].fields.color.fields.b = 0.0;
        local_50[0].fields.color.fields.a = 0.0;
        local_50[0].fields.time = 0.0;
        UnityEngine_GradientColorKey___ctor(local_50,(UnityEngine_Color_o *)&local_78,1.0,(MethodInfo *)0x0);
        if ((uint)colorKeys->max_length < 2) goto label_181ece378;
        colorKeys->m_Items[1].fields.color.fields.r = local_50[0].fields.color.fields.r;
        colorKeys->m_Items[1].fields.color.fields.g = local_50[0].fields.color.fields.g;
        colorKeys->m_Items[1].fields.color.fields.b = local_50[0].fields.color.fields.b;
        colorKeys->m_Items[1].fields.color.fields.a = local_50[0].fields.color.fields.a;
        colorKeys->m_Items[1].fields.time = local_50[0].fields.time;
        alphakeys = (UnityEngine_GradientAlphaKey_array *)
                    SZArrayNew(TypeInfo_UnityEngine_GradientAlphaKey_array,2);
        pUVar3 = (a->fields).Value;
        if (pUVar3 != (Utility_Color255_o *)0x0) {
          pUVar2 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_78,pUVar3,(MethodInfo *)0x0);
          pUVar3 = (a->fields).Value;
          if (pUVar3 != (Utility_Color255_o *)0x0) {
            fVar1 = (pUVar2->fields).a;
            pUVar2 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_78,pUVar3,(MethodInfo *)0x0);
            local_res8 = (_union_125884)0x0;
            Unity_Burst_Intrinsics_v64___ctor_1028c00
                      ((Unity_Burst_Intrinsics_v64_o *)&local_res8._at_Byte0,fVar1,(pUVar2->fields).a,
                       (MethodInfo *)0x0);
            if (alphakeys != (UnityEngine_GradientAlphaKey_array *)0x0) {
              if ((int)alphakeys->max_length == 0) goto label_181ece378;
              alphakeys->m_Items[0].fields.alpha = (float)local_res8._at_UInt0.UInt0;
              alphakeys->m_Items[0].fields.time = (float)local_res8._at_UInt1.UInt1;
              pUVar3 = (b->fields).Value;
              if (pUVar3 != (Utility_Color255_o *)0x0) {
                pUVar2 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_78,pUVar3,(MethodInfo *)0x0);
                pUVar3 = (b->fields).Value;
                if (pUVar3 != (Utility_Color255_o *)0x0) {
                  fVar1 = (pUVar2->fields).a;
                  pUVar2 = Utility_Color255__ToColor
                                     ((UnityEngine_Color_o *)&local_78,pUVar3,(MethodInfo *)0x0);
                  local_88[0] = (_union_125884)0x0;
                  Unity_Burst_Intrinsics_v64___ctor_1028c00
                            ((Unity_Burst_Intrinsics_v64_o *)&local_88[0]._at_Byte0,fVar1,(pUVar2->fields).a,
                             (MethodInfo *)0x0);
                  if (1 < (uint)alphakeys->max_length) {
                    alphakeys->m_Items[1].fields.alpha = (float)local_88[0]._0_4_;
                    alphakeys->m_Items[1].fields.time = (float)local_88[0]._4_4_;
                    pUVar3 = Utility_Color255__Gradient(colorKeys,alphakeys,0,t,(MethodInfo *)0x0);
                    __this = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
                    CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this,pUVar3,(MethodInfo *)0x0);
                    return __this;
                  }
                  goto label_181ece378;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin__GetHashCode (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ece090

int32_t
CustomLogic_CustomLogicColorBuiltin__GetHashCode(CustomLogic_CustomLogicColorBuiltin_o* __this, MethodInfo* method)

{
  System_Type_o *pSVar1;
  int32_t iVar2;
  
  pSVar1 = (__this->fields).Value;
  if (pSVar1 != (System_Type_o *)0x0) {
    iVar2 = (*(pSVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable)._2_GetHashCode.method);
    return iVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__Equals (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x181ecdfb0

bool CustomLogic_CustomLogicColorBuiltin__Equals
               (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Utility_Color255_o *pUVar3;
  
  if (Il2CppMethodInitialized_18434514b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_18434514b = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar2 = obj->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj);
      }
      pUVar3 = (__this->fields).Value;
      if ((pUVar3 == (Utility_Color255_o *)0x0) || (pIVar2 = obj[3].klass, pIVar2 == (Il2CppClass *)0x0)) {
        ThrowNullReferenceException();
      }
      if ((((pUVar3->fields).R == *(int *)&(pIVar2->_1).name) &&
          ((pUVar3->fields).G == *(int *)((longlong)&(pIVar2->_1).name + 4))) &&
         ((pUVar3->fields).B == *(int *)&(pIVar2->_1).namespaze)) {
        return (pUVar3->fields).A == *(int *)((longlong)&(pIVar2->_1).namespaze + 4);
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicColorBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__ToString (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ece450

System_String_o *
CustomLogic_CustomLogicColorBuiltin__ToString
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  Utility_Color255_o *pUVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  int32_t local_res8 [4];
  int32_t local_res18 [2];
  int32_t local_res20 [2];
  int32_t local_28 [4];
  
  if (Il2CppMethodInitialized_18434514c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"({0}, {1}, {2}, {3})");
    Il2CppMethodInitialized_18434514c = '\x01';
  }
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
  pUVar1 = (__this->fields).Value;
  if (pUVar1 != (Utility_Color255_o *)0x0) {
    local_res8[0] = (pUVar1->fields).R;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    if (args != (System_Object_array *)0x0) {
      if (pIVar2 != (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar2;
        Il2CppCodeGenWriteBarrier(args->m_Items,pIVar2);
        pUVar1 = (__this->fields).Value;
        if (pUVar1 == (Utility_Color255_o *)0x0) goto label_181ece632;
        local_res18[0] = (pUVar1->fields).G;
        pIVar2 = il2cpp_value_box(g_data_184354e08,local_res18);
        if (pIVar2 != (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
          if (pIVar3 == (Il2CppObject *)0x0) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar2;
          Il2CppCodeGenWriteBarrier(args->m_Items + 1,pIVar2);
          pUVar1 = (__this->fields).Value;
          if (pUVar1 == (Utility_Color255_o *)0x0) goto label_181ece632;
          local_res20[0] = (pUVar1->fields).B;
          pIVar2 = il2cpp_value_box(g_data_184354e08,local_res20);
          if (pIVar2 != (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
            if (pIVar3 == (Il2CppObject *)0x0) {
              pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
            }
          }
          if (2 < (uint)args->max_length) {
            args->m_Items[2] = pIVar2;
            Il2CppCodeGenWriteBarrier(args->m_Items + 2,pIVar2);
            pUVar1 = (__this->fields).Value;
            if (pUVar1 == (Utility_Color255_o *)0x0) goto label_181ece632;
            local_28[0] = (pUVar1->fields).A;
            pIVar2 = il2cpp_value_box(g_data_184354e08,local_28);
            if (pIVar2 != (Il2CppObject *)0x0) {
              pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
              if (pIVar3 == (Il2CppObject *)0x0) {
                pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
              }
            }
            if (3 < (uint)args->max_length) {
              args->m_Items[3] = pIVar2;
              Il2CppCodeGenWriteBarrier(args->m_Items + 3,pIVar2);
              pSVar4 = System_String__Format_196ceb0("({0}, {1}, {2}, {3})",args,(MethodInfo *)0x0);
              return pSVar4;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_181ece632:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$Copy
// il2cpp: CustomLogic_CustomLogicColorBuiltin_o* CustomLogic_CustomLogicColorBuiltin__Copy (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ecded0

CustomLogic_CustomLogicColorBuiltin_o *
CustomLogic_CustomLogicColorBuiltin__Copy(CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  int32_t tryStart;
  int32_t finallyEnd;
  int32_t tryEnd;
  int32_t finallyStart;
  Utility_Color255_o *pUVar1;
  Utility_Color255_o *pUVar2;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_18434514d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_18434514d = '\x01';
  }
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (Utility_Color255_o *)0x0) {
    pUVar1 = (__this->fields).Value;
    tryStart = (pUVar2->fields).R;
    finallyEnd = (pUVar1->fields).A;
    tryEnd = (pUVar1->fields).G;
    finallyStart = (pUVar1->fields).B;
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor
              ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar2,tryStart,tryEnd,finallyStart,
               finallyEnd,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_00,pUVar2,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin____Eq__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181eceb60

bool CustomLogic_CustomLogicColorBuiltin____Eq__
               (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_18434514e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_18434514e = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) && (other != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
        return self[3].klass == other[3].klass;
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicColorBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicColorBuiltin____Hash__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ece090

int32_t
CustomLogic_CustomLogicColorBuiltin____Hash__(CustomLogic_CustomLogicColorBuiltin_o* __this, MethodInfo* method)

{
  System_Type_o *pSVar1;
  int32_t iVar2;
  
  pSVar1 = (__this->fields).Value;
  if (pSVar1 != (System_Type_o *)0x0) {
    iVar2 = (*(pSVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable)._2_GetHashCode.method);
    return iVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Copy__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ece880

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Copy__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  int32_t tryStart;
  int32_t finallyEnd;
  int32_t tryEnd;
  int32_t finallyStart;
  Utility_Color255_o *pUVar1;
  Utility_Color255_o *pUVar2;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_18434514f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_18434514f = '\x01';
  }
  pUVar2 = (__this->fields).Value;
  if (pUVar2 != (Utility_Color255_o *)0x0) {
    pUVar1 = (__this->fields).Value;
    tryStart = (pUVar2->fields).R;
    finallyEnd = (pUVar1->fields).A;
    tryEnd = (pUVar1->fields).G;
    finallyStart = (pUVar1->fields).B;
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor
              ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar2,tryStart,tryEnd,finallyStart,
               finallyEnd,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_00,pUVar2,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColorBuiltin$$__Str__
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin____Str__ (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ac8190

System_String_o*
CustomLogic_CustomLogicColorBuiltin____Str__(CustomLogic_CustomLogicColorBuiltin_o* __this, MethodInfo* method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (*(__this->klass->vtable)._3_ToString.methodPtr)(__this,(__this->klass->vtable)._3_ToString.method)
  ;
  return pSVar1;
}


// CustomLogic.CustomLogicColorBuiltin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Add__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ece680

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Add__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppClass *pIVar3;
  Utility_Color255_o *value;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  int iVar4;
  int32_t tryStart;
  int32_t finallyEnd;
  int32_t tryEnd;
  int32_t finallyStart;
  
  if (Il2CppMethodInitialized_184345150 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_184345150 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) && (other != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
        if ((self[3].klass != (Il2CppClass *)0x0) && (pIVar2 = other[3].klass, pIVar2 != (Il2CppClass *)0x0))
        {
          tryStart = *(int *)&(pIVar2->_1).name + *(int *)&((self[3].klass)->_1).name;
          if (tryStart < 0x100) {
            if (tryStart < 0) {
              tryStart = 0;
            }
          }
          else {
            tryStart = 0xff;
          }
          pIVar3 = self[3].klass;
          tryEnd = *(int *)((longlong)&(pIVar2->_1).name + 4) + *(int *)((longlong)&(pIVar3->_1).name + 4);
          if (tryEnd < 0x100) {
            if (tryEnd < 0) {
              tryEnd = 0;
            }
          }
          else {
            tryEnd = 0xff;
          }
          finallyStart = *(int *)&((other[3].klass)->_1).namespaze + *(int *)&(pIVar3->_1).namespaze;
          if (finallyStart < 0x100) {
            if (finallyStart < 0) {
              finallyStart = 0;
            }
          }
          else {
            finallyStart = 0xff;
          }
          iVar4 = *(int *)((longlong)&(pIVar3->_1).namespaze + 4) +
                  *(int *)((longlong)&((other[3].klass)->_1).namespaze + 4);
          finallyEnd = 0xff;
          if ((iVar4 < 0x100) && (finallyEnd = iVar4, iVar4 < 0)) {
            finallyEnd = 0;
          }
          value = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          Utility_Color255___ctor
                    ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)value,tryStart,tryEnd,
                     finallyStart,finallyEnd,(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
          CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_00,value,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_00;
        }
        ThrowNullReferenceException();
      }
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Add__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Add);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicColorBuiltin$$__Sub__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Sub__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ecee50

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Sub__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Utility_Color255_o *value;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  int iVar3;
  int32_t tryEnd;
  int32_t tryStart;
  int32_t finallyEnd;
  int32_t finallyStart;
  
  if (Il2CppMethodInitialized_184345151 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_184345151 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) && (other != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
        if ((self[3].klass != (Il2CppClass *)0x0) && (other[3].klass != (Il2CppClass *)0x0)) {
          tryStart = *(int *)&((self[3].klass)->_1).name - *(int *)&((other[3].klass)->_1).name;
          if (tryStart < 0x100) {
            if (tryStart < 0) {
              tryStart = 0;
            }
          }
          else {
            tryStart = 0xff;
          }
          pIVar2 = other[3].klass;
          tryEnd = *(int *)((longlong)&((self[3].klass)->_1).name + 4) -
                   *(int *)((longlong)&(pIVar2->_1).name + 4);
          if (tryEnd < 0x100) {
            if (tryEnd < 0) {
              tryEnd = 0;
            }
          }
          else {
            tryEnd = 0xff;
          }
          finallyStart = *(int *)&((self[3].klass)->_1).namespaze - *(int *)&(pIVar2->_1).namespaze;
          if (finallyStart < 0x100) {
            if (finallyStart < 0) {
              finallyStart = 0;
            }
          }
          else {
            finallyStart = 0xff;
          }
          iVar3 = *(int *)((longlong)&((self[3].klass)->_1).namespaze + 4) -
                  *(int *)((longlong)&(pIVar2->_1).namespaze + 4);
          finallyEnd = 0xff;
          if ((iVar3 < 0x100) && (finallyEnd = iVar3, iVar3 < 0)) {
            finallyEnd = 0;
          }
          value = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          Utility_Color255___ctor
                    ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)value,tryStart,tryEnd,
                     finallyStart,finallyEnd,(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
          CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_00,value,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_00;
        }
        ThrowNullReferenceException();
      }
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Sub__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Sub);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicColorBuiltin$$__Mul__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Mul__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ecec50

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Mul__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Utility_Color255_o *value;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  int iVar3;
  int32_t tryEnd;
  int32_t tryStart;
  int32_t finallyEnd;
  int32_t finallyStart;
  
  if (Il2CppMethodInitialized_184345152 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_184345152 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) && (other != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
        if ((self[3].klass != (Il2CppClass *)0x0) && (other[3].klass != (Il2CppClass *)0x0)) {
          tryStart = *(int *)&((other[3].klass)->_1).name * *(int *)&((self[3].klass)->_1).name;
          if (tryStart < 0x100) {
            if (tryStart < 0) {
              tryStart = 0;
            }
          }
          else {
            tryStart = 0xff;
          }
          pIVar2 = self[3].klass;
          tryEnd = *(int *)((longlong)&((other[3].klass)->_1).name + 4) *
                   *(int *)((longlong)&(pIVar2->_1).name + 4);
          if (tryEnd < 0x100) {
            if (tryEnd < 0) {
              tryEnd = 0;
            }
          }
          else {
            tryEnd = 0xff;
          }
          finallyStart = *(int *)&((other[3].klass)->_1).namespaze * *(int *)&(pIVar2->_1).namespaze;
          if (finallyStart < 0x100) {
            if (finallyStart < 0) {
              finallyStart = 0;
            }
          }
          else {
            finallyStart = 0xff;
          }
          iVar3 = *(int *)((longlong)&((other[3].klass)->_1).namespaze + 4) *
                  *(int *)((longlong)&(pIVar2->_1).namespaze + 4);
          finallyEnd = 0xff;
          if ((iVar3 < 0x100) && (finallyEnd = iVar3, iVar3 < 0)) {
            finallyEnd = 0;
          }
          value = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          Utility_Color255___ctor
                    ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)value,tryStart,tryEnd,
                     finallyStart,finallyEnd,(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
          CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_00,value,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_00;
        }
        ThrowNullReferenceException();
      }
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Mul);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicColorBuiltin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Div__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ece960

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Div__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  int tryStart;
  int tryEnd;
  int finallyStart;
  int iVar3;
  Utility_Color255_o *value;
  CustomLogic_CustomLogicColorBuiltin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  int32_t finallyEnd;
  
  if (Il2CppMethodInitialized_184345153 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColorBuiltin);
    Il2CppMethodInitialized_184345153 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) && (other != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColorBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin)) {
        if ((self[3].klass != (Il2CppClass *)0x0) && (pIVar2 = other[3].klass, pIVar2 != (Il2CppClass *)0x0))
        {
          tryStart = *(int *)&((self[3].klass)->_1).name / *(int *)&(pIVar2->_1).name;
          if (tryStart < 0x100) {
            if (tryStart < 0) {
              tryStart = 0;
            }
          }
          else {
            tryStart = 0xff;
          }
          tryEnd = *(int *)((longlong)&((self[3].klass)->_1).name + 4) /
                   *(int *)((longlong)&(pIVar2->_1).name + 4);
          if (tryEnd < 0x100) {
            if (tryEnd < 0) {
              tryEnd = 0;
            }
          }
          else {
            tryEnd = 0xff;
          }
          finallyStart = *(int *)&((self[3].klass)->_1).namespaze / *(int *)&(pIVar2->_1).namespaze;
          if (finallyStart < 0x100) {
            if (finallyStart < 0) {
              finallyStart = 0;
            }
          }
          else {
            finallyStart = 0xff;
          }
          iVar3 = *(int *)((longlong)&((self[3].klass)->_1).namespaze + 4) /
                  *(int *)((longlong)&(pIVar2->_1).namespaze + 4);
          finallyEnd = 0xff;
          if ((iVar3 < 0x100) && (finallyEnd = iVar3, iVar3 < 0)) {
            finallyEnd = 0;
          }
          value = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
          Utility_Color255___ctor
                    ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)value,tryStart,tryEnd,
                     finallyStart,finallyEnd,(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColorBuiltin);
          CustomLogic_CustomLogicColorBuiltin___ctor_1ecf470(__this_00,value,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_00;
        }
        ThrowNullReferenceException();
      }
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Div);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicColorBuiltin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColorBuiltin____Mod__ (CustomLogic_CustomLogicColorBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ecec10

Il2CppObject *
CustomLogic_CustomLogicColorBuiltin____Mod__
          (CustomLogic_CustomLogicColorBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicColorBuiltin___Mod);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicColorBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicColorBuiltin__get_ClassName (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x181ecf560

System_String_o *
CustomLogic_CustomLogicColorBuiltin__get_ClassName
          (CustomLogic_CustomLogicColorBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345154 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    Il2CppMethodInitialized_184345154 = '\x01';
  }
  return "Color";
}


// CustomLogic.CustomLogicColorBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_IsAbstract (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicColorBuiltin__get_IsAbstract(CustomLogic_CustomLogicColorBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicColorBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_IsStatic (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicColorBuiltin__get_IsStatic(CustomLogic_CustomLogicColorBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicColorBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicColorBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicColorBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicColorBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicColorBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


