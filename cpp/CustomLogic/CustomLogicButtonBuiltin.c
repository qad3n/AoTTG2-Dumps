// Type: CustomLogic.CustomLogicButtonBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicButtonBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicButtonBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicButtonBuiltin_o* CustomLogic_CustomLogicButtonBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5afbda0

CustomLogic_CustomLogicButtonBuiltin_o *
CustomLogic_CustomLogicButtonBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicButtonBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5afc550

void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f37 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5afc5c0

void CustomLogic_CustomLogicButtonBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings.<>c$$<__CreateMethodBinding__OnClick>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings___c_____CreateMethodBinding__OnClick_b__4_0 (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicButtonBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5afc5d0

Il2CppObject *
CustomLogic_CustomLogicButtonBuiltin_Bindings___c_____CreateMethodBinding__OnClick_b__4_0
          (CustomLogic_CustomLogicButtonBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicButtonBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546f38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f38 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) {
      (__c->fields)._clickEvent = pCVar1;
      Il2CppCodeGenWriteBarrier(&(__c->fields)._clickEvent);
      return (Il2CppObject *)__c;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicButtonBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5afbe30

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicButtonBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *pCVar2;
  CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicButtonBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546f30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"OnClick");
    il2cpp_codegen_initialize_runtime_metadata(&"EnableRichText");
    Il2CppMethodInitialized_07546f30 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Text",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__Text
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__Text
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"EnableRichText",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings)
      ;
      pCVar2 = CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__EnableRichText
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__EnableRichText
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"OnClick",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicButtonBuiltin not found");
    pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar5 = TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings);
    pCVar3 = CustomLogic_CustomLogicButtonBuiltin_Bindings____CreateMethodBinding__OnClick
                       ((MethodInfo *)pCVar5);
    return (CustomLogic_ICLMemberBinding_o *)pCVar3;
  }
  pCVar3 = CustomLogic_CustomLogicButtonBuiltin_Bindings____CreateMethodBinding__OnClick
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar3;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreatePropertyBinding__Text
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__Text (const MethodInfo* method);
// 0x5afbfc0

CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__Text(MethodInfo *method)

{
  System_Func_CustomLogicButtonBuiltin__object__o *__this;
  System_Action_CustomLogicButtonBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicButtonBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
    Il2CppMethodInitialized_07546f31 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicButtonBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__Text_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreatePropertyBinding__EnableRichText
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__EnableRichText (const MethodInfo* method);
// 0x5afc0a0

CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreatePropertyBinding__EnableRichText(MethodInfo *method)

{
  System_Func_CustomLogicButtonBuiltin__object__o *__this;
  System_Action_CustomLogicButtonBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicButtonBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
    Il2CppMethodInitialized_07546f32 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicButtonBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicButtonBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings___CreatePropertyBinding__EnableRichText_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicButtonBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$__CreateMethodBinding__OnClick
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o* CustomLogic_CustomLogicButtonBuiltin_Bindings____CreateMethodBinding__OnClick (const MethodInfo* method);
// 0x5afc180
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afc1b5: jmp 0x5afc225

CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o *
CustomLogic_CustomLogicButtonBuiltin_Bindings____CreateMethodBinding__OnClick(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicButtonBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicButtonBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicButtonBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c___CreateMethodBinding__OnClick_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f33 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicButtonBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicButtonBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c___CreateMethodBinding__OnClick_b__4_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicButtonBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5afc2c0

void CustomLogic_CustomLogicButtonBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546f34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"OnClick");
    il2cpp_codegen_initialize_runtime_metadata(&"EnableRichText");
    Il2CppMethodInitialized_07546f34 = '\x01';
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
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OnClick",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicButtonBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0 (CustomLogic_CustomLogicButtonBuiltin_o* __i, const MethodInfo* method);
// 0x5afc3d0

Il2CppObject *
CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____getter_2_0
          (CustomLogic_CustomLogicButtonBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  System_String_o *pSVar2;
  
  if ((__i == (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._button, pUVar1 == (UnityEngine_UIElements_Button_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pUVar1->klass->vtable)._211_get_text.methodPtr)
                     (pUVar1,(pUVar1->klass->vtable)._211_get_text.method);
  return (Il2CppObject *)pSVar2;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__Text>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1 (CustomLogic_CustomLogicButtonBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5afc400

void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__Text_g____setter_2_1
               (CustomLogic_CustomLogicButtonBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07546f35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f35 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i == (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) ||
     (pUVar1 = (__i->fields)._button, pUVar1 == (UnityEngine_UIElements_Button_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._212_set_text.methodPtr)
            (pUVar1,pSVar2,(pUVar1->klass->vtable)._212_set_text.method);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0 (CustomLogic_CustomLogicButtonBuiltin_o* __i, const MethodInfo* method);
// 0x5afc490

Il2CppObject *
CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____getter_3_0
          (CustomLogic_CustomLogicButtonBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) ||
     ((__i->fields)._button == (UnityEngine_UIElements_Button_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicButtonBuiltin.Bindings$$<__CreatePropertyBinding__EnableRichText>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1 (CustomLogic_CustomLogicButtonBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5afc4d0

void CustomLogic_CustomLogicButtonBuiltin_Bindings_____CreatePropertyBinding__EnableRichText_g____setter_3_1
               (CustomLogic_CustomLogicButtonBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_07546f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f36 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicButtonBuiltin_o *)0x0) ||
     (__this = (__i->fields)._button, __this == (UnityEngine_UIElements_Button_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_TextElement__set_enableRichText
            ((UnityEngine_UIElements_TextElement_o *)__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin___ctor (CustomLogic_CustomLogicButtonBuiltin_o* __this, UnityEngine_UIElements_Button_o* button, const MethodInfo* method);
// 0x5afbb50

void CustomLogic_CustomLogicButtonBuiltin___ctor
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,UnityEngine_UIElements_Button_o *button,
               MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this_00;
  UnityEngine_UIElements_Clickable_o *__this_01;
  System_Action_o *__this_02;
  
  if (Il2CppMethodInitialized_07546f2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicButtonBuiltin_OnClick);
    Il2CppMethodInitialized_07546f2d = '\x01';
  }
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)button,(MethodInfo *)0x0);
  (__this->fields)._button = button;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._button);
  __this_00 = (__this->fields)._button;
  if (__this_00 != (UnityEngine_UIElements_Button_o *)0x0) {
    __this_01 = UnityEngine_UIElements_Button__get_clickable(__this_00,(MethodInfo *)0x0);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              (__this_02,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicButtonBuiltin_OnClick,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_UIElements_Clickable_o *)0x0) {
      UnityEngine_UIElements_Clickable__add_clicked(__this_01,__this_02,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicButtonBuiltin$$OnClick
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__OnClick (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x5afbc00

void CustomLogic_CustomLogicButtonBuiltin__OnClick
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_07546f2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546f2e = '\x01';
  }
  if ((__this->fields)._clickEvent == (CustomLogic_UserMethod_o *)0x0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
            (__this_00,(__this->fields)._clickEvent,(System_Object_array *)0x0,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_Text
// il2cpp: System_String_o* CustomLogic_CustomLogicButtonBuiltin__get_Text (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x5afbc80

System_String_o *
CustomLogic_CustomLogicButtonBuiltin__get_Text
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  System_String_o *pSVar2;
  
  pUVar1 = (__this->fields)._button;
  if (pUVar1 == (UnityEngine_UIElements_Button_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (*(pUVar1->klass->vtable)._211_get_text.methodPtr)
                     (pUVar1,(pUVar1->klass->vtable)._211_get_text.method);
  return pSVar2;
}


// CustomLogic.CustomLogicButtonBuiltin$$set_Text
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__set_Text (CustomLogic_CustomLogicButtonBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5afbcb0

void CustomLogic_CustomLogicButtonBuiltin__set_Text
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  
  pUVar1 = (__this->fields)._button;
  if (pUVar1 == (UnityEngine_UIElements_Button_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._212_set_text.methodPtr)
            (pUVar1,value,(pUVar1->klass->vtable)._212_set_text.method);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_EnableRichText
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_EnableRichText (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x5afbce0

bool CustomLogic_CustomLogicButtonBuiltin__get_EnableRichText
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *pUVar1;
  
  pUVar1 = (__this->fields)._button;
  if (pUVar1 == (UnityEngine_UIElements_Button_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).m_EnableRichText;
}


// CustomLogic.CustomLogicButtonBuiltin$$set_EnableRichText
// il2cpp: void CustomLogic_CustomLogicButtonBuiltin__set_EnableRichText (CustomLogic_CustomLogicButtonBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5afbd00

void CustomLogic_CustomLogicButtonBuiltin__set_EnableRichText
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_UIElements_Button_o *__this_00;
  
  __this_00 = (__this->fields)._button;
  if (__this_00 == (UnityEngine_UIElements_Button_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_UIElements_TextElement__set_enableRichText
            ((UnityEngine_UIElements_TextElement_o *)__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicButtonBuiltin$$OnClick
// il2cpp: CustomLogic_CustomLogicButtonBuiltin_o* CustomLogic_CustomLogicButtonBuiltin__OnClick (CustomLogic_CustomLogicButtonBuiltin_o* __this, CustomLogic_UserMethod_o* clickEvent, const MethodInfo* method);
// 0x5afbd20

CustomLogic_CustomLogicButtonBuiltin_o *
CustomLogic_CustomLogicButtonBuiltin__OnClick_59fbd20
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,CustomLogic_UserMethod_o *clickEvent,
          MethodInfo *method)

{
  (__this->fields)._clickEvent = clickEvent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._clickEvent);
  return __this;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicButtonBuiltin__get_ClassName (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x5afbd40

System_String_o *
CustomLogic_CustomLogicButtonBuiltin__get_ClassName
          (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546f2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_07546f2f = '\x01';
  }
  return "Button";
}


// CustomLogic.CustomLogicButtonBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_IsAbstract (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x5afbd70

bool CustomLogic_CustomLogicButtonBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_IsStatic (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x5afbd80

bool CustomLogic_CustomLogicButtonBuiltin__get_IsStatic
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicButtonBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicButtonBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicButtonBuiltin_o* __this, const MethodInfo* method);
// 0x5afbd90

bool CustomLogic_CustomLogicButtonBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicButtonBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


