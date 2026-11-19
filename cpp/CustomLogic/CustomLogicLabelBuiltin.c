// Type: CustomLogic.CustomLogicLabelBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLabelBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLabelBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLabelBuiltin_o* CustomLogic_CustomLogicLabelBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b007c0

CustomLogic_CustomLogicLabelBuiltin_o *
CustomLogic_CustomLogicLabelBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  NullCheck(args);
  pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLabelBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLabelBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b00850

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLabelBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicLabelBuiltin_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546f77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"EnableRichText");
    Il2CppMethodInitialized_07546f77 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__Text
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__Text
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"EnableRichText",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLabelBuiltin not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings);
    pCVar2 = CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__EnableRichText
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__EnableRichText
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o* CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x5b00990

CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *
CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_CustomLogicLabelBuiltin__object__o *__this;
  System_Action_CustomLogicLabelBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f78 == '\0') {
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
    Il2CppMethodInitialized_07546f78 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLabelBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLabelBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$__CreatePropertyBinding__EnableRichText
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o* CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__EnableRichText (const MethodInfo* method);
// 0x5b00a70

CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *
CustomLogic_CustomLogicLabelBuiltin_Bindings____CreatePropertyBinding__EnableRichText(MethodInfo *method)

{
  System_Func_CustomLogicLabelBuiltin__object__o *__this;
  System_Action_CustomLogicLabelBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f79 == '\0') {
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
    Il2CppMethodInitialized_07546f79 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLabelBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLabelBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLabelBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b00b50

void CustomLogic_CustomLogicLabelBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546f7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"EnableRichText");
    Il2CppMethodInitialized_07546f7a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Text",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EnableRichText",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLabelBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0 (CustomLogic_CustomLogicLabelBuiltin_o* __i, const MethodInfo* method);
// 0x5b00c40

Il2CppObject *
CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0
          (CustomLogic_CustomLogicLabelBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  System_String_o *pSVar2;
  
  if ((__i == (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._label, pUVar1 == (UnityEngine_UIElements_Label_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pUVar1->klass->vtable)._211_get_text.methodPtr)
                     (pUVar1,(pUVar1->klass->vtable)._211_get_text.method);
  return (Il2CppObject *)pSVar2;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1 (CustomLogic_CustomLogicLabelBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b00c70

void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1
               (CustomLogic_CustomLogicLabelBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07546f7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f7b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i == (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._label, pUVar1 == (UnityEngine_UIElements_Label_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._212_set_text.methodPtr)
            (pUVar1,pSVar2,(pUVar1->klass->vtable)._212_set_text.method);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0 (CustomLogic_CustomLogicLabelBuiltin_o* __i, const MethodInfo* method);
// 0x5b00d00

Il2CppObject *
CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0
          (CustomLogic_CustomLogicLabelBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) ||
     ((__i->fields)._label == (UnityEngine_UIElements_Label_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicLabelBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1 (CustomLogic_CustomLogicLabelBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b00d40

void CustomLogic_CustomLogicLabelBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1
               (CustomLogic_CustomLogicLabelBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_TextElement_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07546f7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f7c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicLabelBuiltin_o *)0x0) ||
     (__this = (UnityEngine_UIElements_TextElement_o *)(__i->fields)._label,
     __this == (UnityEngine_UIElements_TextElement_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_TextElement__set_enableRichText(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin___ctor (CustomLogic_CustomLogicLabelBuiltin_o* __this, UnityEngine_UIElements_Label_o* label, const MethodInfo* method);
// 0x5b00690

void CustomLogic_CustomLogicLabelBuiltin___ctor
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,UnityEngine_UIElements_Label_o *label,
               MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)label,(MethodInfo *)0x0);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicLabelBuiltin__get_Text (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x5b006c0

System_String_o *
CustomLogic_CustomLogicLabelBuiltin__get_Text
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  System_String_o *pSVar2;
  
  pUVar1 = (__this->fields)._label;
  if (pUVar1 == (UnityEngine_UIElements_Label_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pUVar1->klass->vtable)._211_get_text.methodPtr)
                     (pUVar1,(pUVar1->klass->vtable)._211_get_text.method);
  return pSVar2;
}


// CustomLogic.CustomLogicLabelBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin__set_Text (CustomLogic_CustomLogicLabelBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b006f0

void CustomLogic_CustomLogicLabelBuiltin__set_Text
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  
  pUVar1 = (__this->fields)._label;
  if (pUVar1 == (UnityEngine_UIElements_Label_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._212_set_text.methodPtr)
            (pUVar1,value,(pUVar1->klass->vtable)._212_set_text.method);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_EnableRichText
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_EnableRichText (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x5b00720

bool CustomLogic_CustomLogicLabelBuiltin__get_EnableRichText
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Label_o *pUVar1;
  
  pUVar1 = (__this->fields)._label;
  if (pUVar1 == (UnityEngine_UIElements_Label_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).m_EnableRichText;
}


// CustomLogic.CustomLogicLabelBuiltin$$set_EnableRichText
// il2cpp: void CustomLogic_CustomLogicLabelBuiltin__set_EnableRichText (CustomLogic_CustomLogicLabelBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5b00740

void CustomLogic_CustomLogicLabelBuiltin__set_EnableRichText
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_TextElement_o *__this_00;
  
  __this_00 = (UnityEngine_UIElements_TextElement_o *)(__this->fields)._label;
  if (__this_00 == (UnityEngine_UIElements_TextElement_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_TextElement__set_enableRichText(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLabelBuiltin__get_ClassName (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x5b00760

System_String_o *
CustomLogic_CustomLogicLabelBuiltin__get_ClassName
          (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546f76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_07546f76 = '\x01';
  }
  return "Label";
}


// CustomLogic.CustomLogicLabelBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_IsAbstract (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x5b00790

bool CustomLogic_CustomLogicLabelBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_IsStatic (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x5b007a0

bool CustomLogic_CustomLogicLabelBuiltin__get_IsStatic
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicLabelBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLabelBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLabelBuiltin_o* __this, const MethodInfo* method);
// 0x5b007b0

bool CustomLogic_CustomLogicLabelBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicLabelBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


