// Type: CustomLogic.CustomLogicLabelBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLabelBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLabelBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLabelBuiltin_o* CustomLogic_CustomLogicLabelBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182074b10

CustomLogic_CustomLogicLabelBuiltin_o *
CustomLogic_CustomLogicLabelBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  local_res8[0] = 0;
  NullCheck(args);
  local_res8[0] = (int32_t)args->max_length;
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLabelBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLabelBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x1820498a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLabelBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Func_CustomLogicLabelBuiltin__object__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *__this_01;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_1843465b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"EnableRichText");
    Il2CppMethodInitialized_1843465b2 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843465b3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLabelBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLabelBuiltin_object);
      Il2CppMethodInitialized_1843465b3 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLabelBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLabelBuiltin_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1;
  }
  else {
    bVar1 = System_String__op_Equality(name,"EnableRichText",(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLabelBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_02,pSVar2,(MethodInfo *)0x0);
      pMVar3 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar3);
    }
    if ((TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843465b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLabelBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____getter
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____setter
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLabelBuiltin_object);
      Il2CppMethodInitialized_1843465b4 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLabelBuiltin_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____getter
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLabelBuiltin_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____setter
    ;
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o* CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x182063770

CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *
CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_CustomLogicLabelBuiltin__object__o *__this;
  System_Action_CustomLogicLabelBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLabelBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLabelBuiltin_object);
    Il2CppMethodInitialized_1843465b3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLabelBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLabelBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$__CreatePropertyBinding__EnableRichText
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o* CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__EnableRichText (const MethodInfo* method);
// 0x182061b00

CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *
CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__EnableRichText(MethodInfo *method)

{
  System_Func_CustomLogicLabelBuiltin__object__o *__this;
  System_Action_CustomLogicLabelBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843465b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLabelBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLabelBuiltin_object);
    Il2CppMethodInitialized_1843465b4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLabelBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLabelBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x1820660c0

void CustomLogic_CustomLogicLabelBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843465b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"EnableRichText");
    Il2CppMethodInitialized_1843465b5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Text",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EnableRichText",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0 (CustomLogic_CustomLogicLabelBuiltin_o* __i, const MethodInfo* method);
// 0x1820561e0

Il2CppObject *
CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0
          (CustomLogic_CustomLogicLabelBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  System_String_o *pSVar2;
  
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._label, pUVar1 != (UnityEngine_UIElements_Label_o *)0x0)) {
    pSVar2 = (*(pUVar1->klass->vtable)._211_get_text.methodPtr)
                       (pUVar1,(pUVar1->klass->vtable)._211_get_text.method);
    return (Il2CppObject *)pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1 (CustomLogic_CustomLogicLabelBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182056240

void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1
               (CustomLogic_CustomLogicLabelBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843465b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465b6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._label, pUVar1 != (UnityEngine_UIElements_Label_o *)0x0)) {
    (*(pUVar1->klass->vtable)._212_set_text.methodPtr)
              (pUVar1,pSVar2,(pUVar1->klass->vtable)._212_set_text.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0 (CustomLogic_CustomLogicLabelBuiltin_o* __i, const MethodInfo* method);
// 0x1820545f0

Il2CppObject *
CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0
          (CustomLogic_CustomLogicLabelBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (pUVar1 = (__i->fields)._label, pUVar1 != (UnityEngine_UIElements_Label_o *)0x0)) {
    local_res8[0] = (pUVar1->fields).m_EnableRichText;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1 (CustomLogic_CustomLogicLabelBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820546c0

void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1
               (CustomLogic_CustomLogicLabelBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextElement_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_1843465b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843465b7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) &&
     (__this = (UnityEngine_UIElements_TextElement_o *)(__i->fields)._label,
     __this != (UnityEngine_UIElements_TextElement_o *)0x0)) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLabelBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin___ctor (CustomLogic_CustomLogicLabelBuiltin_o* __this, UnityEngine_UIElements_Label_o* label, const MethodInfo* method);
// 0x182067970

void
CustomLogic_CustomLogicLabelBuiltin___ctor(CustomLogic_CustomLogicLabelBuiltin_o* __this, UnityEngine_UIElements_Label_o* label, MethodInfo* method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)textField,(MethodInfo *)0x0);
  (__this->fields)._label = textField;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,textField);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicLabelBuiltin__get_Text (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x182066520

System_String_o *
CustomLogic_CustomLogicLabelBuiltin__get_Text
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  System_String_o *pSVar2;
  
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UIElements_Label_o *)0x0) {
    pSVar2 = (*(pUVar1->klass->vtable)._211_get_text.methodPtr)
                       (pUVar1,(pUVar1->klass->vtable)._211_get_text.method);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLabelBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin__set_Text (CustomLogic_CustomLogicLabelBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182066570

void CustomLogic_CustomLogicLabelBuiltin__set_Text
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UIElements_Label_o *)0x0) {
    (*(pUVar1->klass->vtable)._212_set_text.methodPtr)
              (pUVar1,value,(pUVar1->klass->vtable)._212_set_text.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLabelBuiltin$$get_EnableRichText
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_EnableRichText (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x182066500

bool CustomLogic_CustomLogicLabelBuiltin__get_EnableRichText
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UIElements_Label_o *)0x0) {
    return (pUVar1->fields).m_EnableRichText;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLabelBuiltin$$set_EnableRichText
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin__set_EnableRichText (CustomLogic_CustomLogicLabelBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x182066550

void CustomLogic_CustomLogicLabelBuiltin__set_EnableRichText
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_TextElement_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_TextElement_o *)(__this->fields)._label;
  if (__this_00 != (UnityEngine_UIElements_TextElement_o *)0x0) {
    UnityEngine_UIElements_TextElement__set_enableRichText(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLabelBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLabelBuiltin__get_ClassName (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x1820679b0

System_String_o *
CustomLogic_CustomLogicLabelBuiltin__get_ClassName
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843465b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_1843465b1 = '\x01';
  }
  return "Label";
}


// CustomLogic.CustomLogicLabelBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_IsAbstract (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLabelBuiltin__get_IsAbstract(CustomLogic_CustomLogicLabelBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_IsStatic (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicLabelBuiltin__get_IsStatic(CustomLogic_CustomLogicLabelBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLabelBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicLabelBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


