// Type: Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Localization/Aottg2GisketchLocalizer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$GetText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__GetText (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o* __this, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x53600e0
// eh: try 0x536021e..0x536042e -> pad 0x536043a (+16 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x536045e..0x53604a6 -> pad 0x53604a6 (+1 call sites) cleanup
// eh: try 0x53604a9..0x53604ae -> pad 0x53604b6 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53601f0: jmp 0x536021e
// asm:   0x536042e: jmp 0x536043a
// asm:   0x5360430: jmp 0x536043a
// asm:   0x5360432: jmp 0x536043a
// asm:   0x5360434: jmp 0x536043a
// asm:   0x5360436: jmp 0x536043a
// asm:   0x5360438: jmp 0x536043a
// asm:   0x536043a: mov rbx, rax
// asm:   0x536043d: cmp edx, 1
// asm:   0x5360440: jne 0x53604ae
// asm:   0x5360442: mov rdi, rbx
// asm:   0x5360445: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x536044a: mov rbx, rax
// asm:   0x536044d: lea rax, [rip + 0x21f6274]
// asm:   0x5360454: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5360458: mov rax, qword ptr [rbx]
// asm:   0x536045b: mov rsi, qword ptr [rax]
// asm:   0x536045e: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5360463: test al, al
// asm:   0x5360465: je 0x5360485
// asm:   0x5360467: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5360485: mov edi, 8
// asm:   0x536048a: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x536048f: mov rcx, qword ptr [rbx]
// asm:   0x5360492: mov qword ptr [rax], rcx
// asm:   0x5360495: lea rsi, [rip + 0x1acd064]
// asm:   0x536049c: mov rdi, rax
// asm:   0x536049f: xor edx, edx
// asm:   0x53604a1: call 0x6e255c0  ; __cxa_throw()
// asm:   0x53604a6: mov rbx, rax
// asm:   0x53604a9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53604ae: mov rdi, rbx
// asm:   0x53604b1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53604b6: mov rdi, rax
// asm:   0x53604b9: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__GetText
          (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this,System_String_o *key,
          System_String_o *fallback,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  System_String_o *obj;
  System_Reflection_MethodInfo_o *__this_00;
  bool bVar3;
  System_String_array *value;
  System_String_o *obj_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_075429a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_075429a8 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar3) {
    if (fallback == (System_String_o *)0x0) {
      fallback = *(System_String_o **)g_data_07556758->static_fields;
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    }
    bVar3 = System_Reflection_MethodInfo__op_Equality
                      (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->
                       GetLocaleMethod,(System_Reflection_MethodInfo_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((key == (System_String_o *)0x0) ||
         (value = System_String__Split(key,0x2e,0,(MethodInfo *)0x0), value == (System_String_array *)0x0)) {
        ThrowNullReferenceException();
      }
      iVar1 = (int)value->max_length;
      if (1 < iVar1) {
        pSVar6 = value->m_Items[0];
        obj = value->m_Items[1];
        if (iVar1 == 2) {
          obj_00 = *(System_String_o **)g_data_07556758->static_fields;
          uVar2 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->_2).
                  cctor_finished_or_no_cctor;
        }
        else {
          obj_00 = System_String__Join_5303130(".",value,2,iVar1 + -2,(MethodInfo *)0x0);
          uVar2 = (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->_2).
                  cctor_finished_or_no_cctor;
        }
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
        }
        __this_00 = TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->
                    GetLocaleMethod;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
        if (parameters == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar6 != (System_String_o *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar6,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)pSVar6;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if ((obj != (System_String_o *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if ((parameters->max_length & 0xfffffffe) == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[1] = (Il2CppObject *)obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
        if ((obj_00 != (System_String_o *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)obj_00,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if ((uint)parameters->max_length < 3) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[2] = (Il2CppObject *)obj_00;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
        pIVar4 = *(Il2CppObject **)g_data_07556758->static_fields;
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if ((parameters->max_length & 0xfffffffc) == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[3] = pIVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
        if (fallback == (System_String_o *)0x0) {
          fallback = key;
        }
        pIVar4 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)fallback,(((parameters->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if ((uint)parameters->max_length < 5) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[4] = (Il2CppObject *)fallback;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 4);
        if (__this_00 == (System_Reflection_MethodInfo_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar6 = (System_String_o *)
                 System_Reflection_MethodBase__Invoke
                           ((System_Reflection_MethodBase_o *)__this_00,(Il2CppObject *)0x0,parameters,
                            (MethodInfo *)0x0);
        if ((pSVar6 == (System_String_o *)0x0) || ((Il2CppClass *)pSVar6->klass != g_data_07556758)) {
          return fallback;
        }
        return pSVar6;
      }
    }
    if (fallback == (System_String_o *)0x0) {
      fallback = key;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o* __this, const MethodInfo* method);
// 0x53600d0

void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
               (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___cctor (const MethodInfo* method);
// 0x53604c0

void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_StaticFields *pGVar1;
  bool bVar2;
  System_Type_o *pSVar3;
  System_Reflection_MethodInfo_o *pSVar4;
  
  if (Il2CppMethodInitialized_075429a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_cctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Type_GetType);
    il2cpp_codegen_initialize_runtime_metadata(&"GetLocale");
    il2cpp_codegen_initialize_runtime_metadata(&"UI.UIManager, Scripts");
    Il2CppMethodInitialized_075429a9 = '\x01';
  }
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar3 = (System_Type_o *)
           il2cpp_runtime_helper_030d66e0("UI.UIManager, Scripts",MethodInfo_System_Type_GetType,
                        MethodInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_cctor);
  TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->UIManagerType = pSVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->UIManagerType);
  pSVar4 = (System_Reflection_MethodInfo_o *)0x0;
  bVar2 = System_Type__op_Inequality
                    (TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->
                     UIManagerType,(System_Type_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->UIManagerType;
    if (pSVar3 == (System_Type_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = System_Type__GetMethod_54da140(pSVar3,"GetLocale",0x38,(MethodInfo *)0x0);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields;
  pGVar1->GetLocaleMethod = pSVar4;
  Il2CppCodeGenWriteBarrier(&pGVar1->GetLocaleMethod);
  return;
}


