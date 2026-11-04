// Type: Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Localization/Aottg2GisketchLocalizer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$GetText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__GetText (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o* __this, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x1818c01a0
// eh: try 0x1818c02d1..0x1818c054d -> pad 0x183331890 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818c0488: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x1818c0490: test rdi, rdi
// asm:   0x1818c0493: cmove rdi, qword ptr [rsp + 0x88]
// asm:   0x1818c04a8: jmp 0x1818c04c0
// asm:   0x1818c04c0: mov rax, rsi
// asm:   0x183331890: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331895: push rbx
// asm:   0x183331896: push rbp
// asm:   0x183331897: sub rsp, 0x38
// asm:   0x18333189b: mov rbp, rdx
// asm:   0x18333189e: mov rbx, qword ptr [rbp + 0x40]
// asm:   0x1833318a2: mov rdx, qword ptr [rbx]
// asm:   0x1833318a5: mov rdx, qword ptr [rdx]
// asm:   0x1833318a8: mov rcx, qword ptr [rip + 0x1023521]
// asm:   0x1833318af: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833318b4: test al, al
// asm:   0x1833318b6: je 0x1833318c4
// asm:   0x1833318b8: movabs rax, 0
// asm:   0x1833318c2: jmp 0x1833318dc
// asm:   0x1833318c4: mov rax, qword ptr [rbx]
// asm:   0x1833318c7: mov qword ptr [rbp + 0x38], rax
// asm:   0x1833318cb: lea rdx, [rip + 0xcaa6b6]
// asm:   0x1833318d2: lea rcx, [rbp + 0x38]
// asm:   0x1833318d6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833318dc: add rsp, 0x38
// asm:   0x1833318e0: pop rbp
// asm:   0x1833318e1: pop rbx
// asm:   0x1833318e2: ret 

System_String_o *
Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__GetText
          (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this,System_String_o *key,
          System_String_o *fallback,MethodInfo *method)

{
  System_Reflection_MethodInfo_o *__this_00;
  bool bVar1;
  System_String_array *value;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_18434202a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_18434202a = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1) {
    if (fallback == (System_String_o *)0x0) {
      fallback = *(System_String_o **)g_data_184354e50->static_fields;
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    }
    bVar1 = Unity_VisualScripting_Namespace__op_Equality
                      ((Unity_VisualScripting_Namespace_o *)
                       TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->
                       GetLocaleMethod,(Unity_VisualScripting_Namespace_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((key == (System_String_o *)0x0) ||
         (value = System_String__Split(key,0x2e,0,(MethodInfo *)0x0), value == (System_String_array *)0x0)) {
        ThrowNullReferenceException();
      }
      if (1 < (int)value->max_length) {
        if (((int)value->max_length == 0) || ((uint)value->max_length < 2)) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4 = value->m_Items[0];
        pSVar5 = value->m_Items[1];
        if ((int)value->max_length < 3) {
          obj = *(System_String_o **)g_data_184354e50->static_fields;
        }
        else {
          obj = System_String__Join_196f060
                          (".",value,2,(int)value->max_length + -2,(MethodInfo *)0x0);
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
        }
        __this_00 = TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->
                    GetLocaleMethod;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
        if (parameters == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((pSVar4 != (System_String_o *)0x0) &&
           (pIVar2 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar4,(((parameters->obj).klass)->_1).element_class),
           pIVar2 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)pSVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pSVar4);
        if ((pSVar5 != (System_String_o *)0x0) &&
           (pIVar2 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar5,(((parameters->obj).klass)->_1).element_class),
           pIVar2 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((uint)parameters->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[1] = (Il2CppObject *)pSVar5;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pSVar5);
        if ((obj != (System_String_o *)0x0) &&
           (pIVar2 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class),
           pIVar2 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((uint)parameters->max_length < 3) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[2] = (Il2CppObject *)obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,obj);
        pIVar2 = *(Il2CppObject **)g_data_184354e50->static_fields;
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((uint)parameters->max_length < 4) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[3] = pIVar2;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,pIVar2);
        pSVar4 = fallback;
        if (fallback == (System_String_o *)0x0) {
          pSVar4 = key;
        }
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((parameters->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((uint)parameters->max_length < 5) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[4] = (Il2CppObject *)pSVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 4,pSVar4);
        if (__this_00 != (System_Reflection_MethodInfo_o *)0x0) {
          pSVar4 = (System_String_o *)
                   System_Reflection_MethodBase__Invoke
                             ((System_Reflection_MethodBase_o *)__this_00,(Il2CppObject *)0x0,parameters,
                              (MethodInfo *)0x0);
          if (pSVar4 != (System_String_o *)0x0) {
            pSVar5 = (System_String_o *)0x0;
            if ((Il2CppClass *)pSVar4->klass == g_data_184354e50) {
              pSVar5 = pSVar4;
            }
            if (pSVar5 != (System_String_o *)0x0) {
              return pSVar5;
            }
          }
          if (fallback == (System_String_o *)0x0) {
            return key;
          }
          return fallback;
        }
        ThrowNullReferenceException();
      }
    }
    if (fallback == (System_String_o *)0x0) {
      fallback = key;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$HasText
// il2cpp: bool Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__HasText (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o* __this, System_String_o* key, const MethodInfo* method);
// 0x1818c0560
// eh: try 0x1818c0681..0x1818c0886 -> pad 0x1833318f0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1833318f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833318f5: push rbx
// asm:   0x1833318f6: push rbp
// asm:   0x1833318f7: sub rsp, 0x38
// asm:   0x1833318fb: mov rbp, rdx
// asm:   0x1833318fe: mov rbx, qword ptr [rbp + 0x38]
// asm:   0x183331902: mov rdx, qword ptr [rbx]
// asm:   0x183331905: mov rdx, qword ptr [rdx]
// asm:   0x183331908: mov rcx, qword ptr [rip + 0x10234c1]
// asm:   0x18333190f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331914: test al, al
// asm:   0x183331916: je 0x183331924
// asm:   0x183331918: movabs rax, 0
// asm:   0x183331922: jmp 0x18333193c
// asm:   0x183331924: mov rax, qword ptr [rbx]
// asm:   0x183331927: mov qword ptr [rbp + 0x30], rax
// asm:   0x18333192b: lea rdx, [rip + 0xcaa656]
// asm:   0x183331932: lea rcx, [rbp + 0x30]
// asm:   0x183331936: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333193c: add rsp, 0x38
// asm:   0x183331940: pop rbp
// asm:   0x183331941: pop rbx
// asm:   0x183331942: ret 

bool Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer__HasText
               (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *__this,System_String_o *key,
               MethodInfo *method)

{
  System_String_o *obj;
  System_String_o *obj_00;
  System_Reflection_MethodInfo_o *__this_00;
  bool bVar1;
  byte bVar2;
  System_String_array *value;
  System_String_o *obj_01;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  byte *pbVar5;
  byte bVar6;
  
  if (Il2CppMethodInitialized_18434202b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_18434202b = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
  }
  bVar1 = Unity_VisualScripting_Namespace__op_Equality
                    ((Unity_VisualScripting_Namespace_o *)
                     TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->
                     HasLocaleMethod,(Unity_VisualScripting_Namespace_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if ((key == (System_String_o *)0x0) ||
     (value = System_String__Split(key,0x2e,0,(MethodInfo *)0x0), value == (System_String_array *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((int)value->max_length < 2) {
    return false;
  }
  if (((int)value->max_length == 0) || ((uint)value->max_length < 2)) {
    ThrowIndexOutOfRangeException();
  }
  obj = value->m_Items[0];
  obj_00 = value->m_Items[1];
  if ((int)value->max_length < 3) {
    obj_01 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    obj_01 = System_String__Join_196f060
                       (".",value,2,(int)value->max_length + -2,(MethodInfo *)0x0);
  }
  bVar6 = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
  }
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->HasLocaleMethod;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj != (System_String_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[0] = (Il2CppObject *)obj;
  Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
  if ((obj_00 != (System_String_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj_00,(((parameters->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((uint)parameters->max_length < 2) {
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[1] = (Il2CppObject *)obj_00;
  Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,obj_00);
  if ((obj_01 != (System_String_o *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj_01,(((parameters->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((uint)parameters->max_length < 3) {
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[2] = (Il2CppObject *)obj_01;
  Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,obj_01);
  pIVar3 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if ((pIVar3 != (Il2CppObject *)0x0) &&
     (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
     pIVar4 == (Il2CppObject *)0x0)) {
    pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
  }
  if ((uint)parameters->max_length < 4) {
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[3] = pIVar3;
  Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,pIVar3);
  if (__this_00 == (System_Reflection_MethodInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar3 = System_Reflection_MethodBase__Invoke
                     ((System_Reflection_MethodBase_o *)__this_00,(Il2CppObject *)0x0,parameters,
                      (MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar4 = (Il2CppObject *)0x0;
    if (pIVar3->klass == g_data_184354de8) {
      pIVar4 = pIVar3;
    }
    if (pIVar4 != (Il2CppObject *)0x0) {
      if ((pIVar3->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pbVar5 = il2cpp_object_unbox(pIVar3);
      bVar6 = *pbVar5;
      bVar2 = 1;
      goto label_1818c0808;
    }
  }
  bVar2 = 0;
label_1818c0808:
  return (bool)(bVar2 & bVar6);
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor (Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor(Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Localization.Aottg2GisketchLocalizer$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___cctor (const MethodInfo* method);
// 0x1818c0890

void Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___cctor(MethodInfo *method)

{
  System_Xml_Linq_XNamespace_o *left;
  bool bVar1;
  System_Type_o *pSVar2;
  System_Reflection_MethodInfo_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434202c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_cctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Type_GetType);
    il2cpp_codegen_initialize_runtime_metadata(&"GetLocale");
    il2cpp_codegen_initialize_runtime_metadata(&"UI.UIManager, Scripts");
    il2cpp_codegen_initialize_runtime_metadata(&"HasLocale");
    Il2CppMethodInitialized_18434202c = '\x01';
  }
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = (System_Type_o *)il2cpp_runtime_helper_180416c90("UI.UIManager, Scripts",MethodInfo_System_Type_GetType);
  TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->UIManagerType = pSVar2;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->UIManagerType,
             pSVar2);
  bVar1 = System_Xml_Linq_XNamespace__op_Inequality
                    ((System_Xml_Linq_XNamespace_o *)
                     TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->
                     UIManagerType,(System_Xml_Linq_XNamespace_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->UIManagerType;
    if (pSVar2 == (System_Type_o *)0x0) goto label_1818c0a60;
    pSVar3 = System_Type__GetMethod_1b52210(pSVar2,"GetLocale",0x38,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = (System_Reflection_MethodInfo_o *)0x0;
  }
  TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->GetLocaleMethod = pSVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->GetLocaleMethod,
             pSVar3);
  left = (System_Xml_Linq_XNamespace_o *)
         TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->UIManagerType;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  bVar1 = System_Xml_Linq_XNamespace__op_Inequality
                    (left,(System_Xml_Linq_XNamespace_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->UIManagerType;
    if (pSVar2 == (System_Type_o *)0x0) {
label_1818c0a60:
      ThrowNullReferenceException();
    }
    pSVar3 = System_Type__GetMethod_1b52210(pSVar2,"HasLocale",0x38,(MethodInfo *)0x0);
  }
  else {
    pSVar3 = (System_Reflection_MethodInfo_o *)0x0;
  }
  TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->HasLocaleMethod = pSVar3;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer->static_fields->HasLocaleMethod,
             pSVar3);
  return;
}


