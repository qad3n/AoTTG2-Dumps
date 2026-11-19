// Type: CustomLogic.CustomLogicIconBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicIconBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicIconBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aff0e0

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicIconBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicIconBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicIconBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5affa20

void CustomLogic_CustomLogicIconBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546f68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f68 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5affa90

void CustomLogic_CustomLogicIconBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetIcon>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetIcon_b__4_0 (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicIconBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5affaa0

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetIcon_b__4_0
          (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicIconBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *value;
  Il2CppObject *extraout_RAX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546f69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f69 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (__c != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
      CustomLogic_CustomLogicIconBuiltin__SetIcon(__c,value,method_00);
      return extraout_RAX;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTintColor>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetTintColor_b__5_0 (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicIconBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5affb30

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings___c_____CreateMethodBinding__SetTintColor_b__5_0
          (CustomLogic_CustomLogicIconBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicIconBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Utility_Color255_o *__this_00;
  UnityEngine_UIElements_Image_o *__this_01;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar1;
  UnityEngine_Color_o value;
  
  if (Il2CppMethodInitialized_07546f6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f6a = '\x01';
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
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    if (((__c != (CustomLogic_CustomLogicIconBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicColorBuiltin_o *)0x0)) &&
       (__this_00 = (pCVar1->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
      __this_01 = (__c->fields)._image;
      value = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_UIElements_Image_o *)0x0) {
        UnityEngine_UIElements_Image__set_tintColor(__this_01,value,(MethodInfo *)0x0);
        return (Il2CppObject *)__c;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicIconBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aff170

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicIconBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *pCVar2;
  CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicIconBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546f60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"IconPath");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTintColor");
    il2cpp_codegen_initialize_runtime_metadata(&"SetIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleMode");
    Il2CppMethodInitialized_07546f60 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"IconPath",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__IconPath
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__IconPath
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ScaleMode",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__ScaleMode
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__ScaleMode
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"SetIcon",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
      pCVar3 = CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetIcon
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
    pCVar3 = CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetIcon
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar3;
  }
  bVar1 = System_String__op_Equality(name,"SetTintColor",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicIconBuiltin not found");
    pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar5 = TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    pCVar3 = CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetTintColor
                       ((MethodInfo *)pCVar5);
    return (CustomLogic_ICLMemberBinding_o *)pCVar3;
  }
  pCVar3 = CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetTintColor
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar3;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreatePropertyBinding__IconPath
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__IconPath (const MethodInfo* method);
// 0x5aff350

CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__IconPath(MethodInfo *method)

{
  System_Func_CustomLogicIconBuiltin__object__o *__this;
  System_Action_CustomLogicIconBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicIconBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicIconBuiltin_object);
    Il2CppMethodInitialized_07546f61 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicIconBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__IconPath_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreatePropertyBinding__ScaleMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__ScaleMode (const MethodInfo* method);
// 0x5aff430

CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreatePropertyBinding__ScaleMode(MethodInfo *method)

{
  System_Func_CustomLogicIconBuiltin__object__o *__this;
  System_Action_CustomLogicIconBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicIconBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicIconBuiltin_object);
    Il2CppMethodInitialized_07546f62 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicIconBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings___CreatePropertyBinding__ScaleMode_g____setter_3_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicIconBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreateMethodBinding__SetIcon
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetIcon (const MethodInfo* method);
// 0x5aff510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aff545: jmp 0x5aff5b5

CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetIcon(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicIconBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicIconBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetIcon_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f63 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicIconBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetIcon_b__4_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$__CreateMethodBinding__SetTintColor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o* CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetTintColor (const MethodInfo* method);
// 0x5aff650
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aff685: jmp 0x5aff6f5

CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *
CustomLogic_CustomLogicIconBuiltin_Bindings____CreateMethodBinding__SetTintColor(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicIconBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicIconBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicIconBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetTintColor_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f64 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicIconBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicIconBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c___CreateMethodBinding__SetTintColor_b__5_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicIconBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5aff790

void CustomLogic_CustomLogicIconBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546f65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"IconPath");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTintColor");
    il2cpp_codegen_initialize_runtime_metadata(&"SetIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleMode");
    Il2CppMethodInitialized_07546f65 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IconPath",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ScaleMode",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetIcon",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetTintColor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicIconBuiltin_Bindings->static_fields->MemberNames)
  ;
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__IconPath>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____getter_2_0 (CustomLogic_CustomLogicIconBuiltin_o* __i, const MethodInfo* method);
// 0x5aff8c0

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____getter_2_0
          (CustomLogic_CustomLogicIconBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields)._currentIconPath;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__IconPath>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____setter_2_1 (CustomLogic_CustomLogicIconBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5aff8e0

void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__IconPath_g____setter_2_1
               (CustomLogic_CustomLogicIconBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546f66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f66 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i == (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicIconBuiltin__SetIcon(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__ScaleMode>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____getter_3_0 (CustomLogic_CustomLogicIconBuiltin_o* __i, const MethodInfo* method);
// 0x5aff960

Il2CppObject *
CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____getter_3_0
          (CustomLogic_CustomLogicIconBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicIconBuiltin_o *)0x0) ||
     ((__i->fields)._image == (UnityEngine_UIElements_Image_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicIconBuiltin.Bindings$$<__CreatePropertyBinding__ScaleMode>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____setter_3_1 (CustomLogic_CustomLogicIconBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5aff9a0

void CustomLogic_CustomLogicIconBuiltin_Bindings_____CreatePropertyBinding__ScaleMode_g____setter_3_1
               (CustomLogic_CustomLogicIconBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546f67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f67 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicIconBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicIconBuiltin__set_ScaleMode(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicIconBuiltin___ctor (CustomLogic_CustomLogicIconBuiltin_o* __this, UnityEngine_UIElements_Image_o* image, const MethodInfo* method);
// 0x5afec20

void CustomLogic_CustomLogicIconBuiltin___ctor
               (CustomLogic_CustomLogicIconBuiltin_o *__this,UnityEngine_UIElements_Image_o *image,
               MethodInfo *method)

{
  CustomLogic_CustomLogicVisualElementBuiltin___ctor
            ((CustomLogic_CustomLogicVisualElementBuiltin_o *)__this,
             (UnityEngine_UIElements_VisualElement_o *)image,(MethodInfo *)0x0);
  (__this->fields)._image = image;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
  (__this->fields)._currentIconPath = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentIconPath);
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$SetIcon
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin__SetIcon (CustomLogic_CustomLogicIconBuiltin_o* __this, System_String_o* iconPath, const MethodInfo* method);
// 0x5afec70
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5afee3f: jmp 0x5afee6b
// asm:   0x5afee91: mov rsi, r15
// asm:   0x5afee94: xor edx, edx
// asm:   0x5afee96: call 0x6cd4bb0  ; UnityEngine_UIElements_Image__set_image()
// asm:   0x5afee9b: lea rdi, [r14 + 0x68]
// asm:   0x5afee9f: mov qword ptr [r14 + 0x68], rbx
// asm:   0x5afeea3: mov rsi, rbx
// asm:   0x5afeea6: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5afeeab: jmp 0x5afee7a

void CustomLogic_CustomLogicIconBuiltin__SetIcon
               (CustomLogic_CustomLogicIconBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_UIElements_Image_o *pUVar2;
  bool bVar3;
  UnityEngine_Texture_o *value_00;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07546f5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Failed to load icon at path: ");
    Il2CppMethodInitialized_07546f5d = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._image;
    if (pUVar2 == (UnityEngine_UIElements_Image_o *)0x0) {
label_05afeead:
      ThrowNullReferenceException();
    }
    UnityEngine_UIElements_Image__set_image(pUVar2,(UnityEngine_Texture_o *)0x0,(MethodInfo *)0x0);
    (__this->fields)._currentIconPath = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentIconPath);
  }
  else {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    bVar3 = Utility_Util__IsValidResourcePath(value,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      value_00 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(pSVar4,value,true,false,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((bVar3) && (value_00 != (UnityEngine_Texture_o *)0x0)) &&
         (value_00->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
        pUVar2 = (__this->fields)._image;
        if (pUVar2 != (UnityEngine_UIElements_Image_o *)0x0) {
          UnityEngine_UIElements_Image__set_image(pUVar2,value_00,(MethodInfo *)0x0);
          (__this->fields)._currentIconPath = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._currentIconPath);
          return;
        }
        goto label_05afeead;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__op_Inequality
                ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_52f0320("Failed to load icon at path: ",value,(MethodInfo *)0x0);
      uVar1 = (TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor;
    }
    else {
      pSVar4 = System_String__Concat_52f0320("Failed to load icon at path: ",value,(MethodInfo *)0x0);
      uVar1 = (TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$get_IconPath
// il2cpp: System_String_o* CustomLogic_CustomLogicIconBuiltin__get_IconPath (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x5afeec0

System_String_o *
CustomLogic_CustomLogicIconBuiltin__get_IconPath
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._currentIconPath;
}


// CustomLogic.CustomLogicIconBuiltin$$set_IconPath
// il2cpp: void CustomLogic_CustomLogicIconBuiltin__set_IconPath (CustomLogic_CustomLogicIconBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5afeed0

void CustomLogic_CustomLogicIconBuiltin__set_IconPath
               (CustomLogic_CustomLogicIconBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicIconBuiltin__SetIcon(__this,value,method);
  return;
}


// CustomLogic.CustomLogicIconBuiltin$$SetTintColor
// il2cpp: CustomLogic_CustomLogicIconBuiltin_o* CustomLogic_CustomLogicIconBuiltin__SetTintColor (CustomLogic_CustomLogicIconBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, const MethodInfo* method);
// 0x5afeee0

CustomLogic_CustomLogicIconBuiltin_o *
CustomLogic_CustomLogicIconBuiltin__SetTintColor
          (CustomLogic_CustomLogicIconBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color,
          MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  UnityEngine_UIElements_Image_o *__this_01;
  UnityEngine_Color_o value;
  
  if ((color != (CustomLogic_CustomLogicColorBuiltin_o *)0x0) &&
     (__this_00 = (color->fields).Value, __this_00 != (Utility_Color255_o *)0x0)) {
    __this_01 = (__this->fields)._image;
    value = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_UIElements_Image_o *)0x0) {
      UnityEngine_UIElements_Image__set_tintColor(__this_01,value,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicIconBuiltin$$get_ScaleMode
// il2cpp: int32_t CustomLogic_CustomLogicIconBuiltin__get_ScaleMode (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x5afef20

int32_t CustomLogic_CustomLogicIconBuiltin__get_ScaleMode
                  (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *pUVar1;
  
  pUVar1 = (__this->fields)._image;
  if (pUVar1 == (UnityEngine_UIElements_Image_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).m_ScaleMode;
}


// CustomLogic.CustomLogicIconBuiltin$$set_ScaleMode
// il2cpp: void CustomLogic_CustomLogicIconBuiltin__set_ScaleMode (CustomLogic_CustomLogicIconBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5afef40

void CustomLogic_CustomLogicIconBuiltin__set_ScaleMode
               (CustomLogic_CustomLogicIconBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_UIElements_Image_o *__this_00;
  Il2CppType *handle;
  bool bVar1;
  System_Type_o *enumType;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_07546f5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_ScaleMode);
    Il2CppMethodInitialized_07546f5e = '\x01';
  }
  handle = TypeRef_UnityEngine_ScaleMode;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  iStack_2c = value;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__IsDefined(enumType,pIVar2,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._image;
    if (__this_00 == (UnityEngine_UIElements_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_UIElements_Image__set_scaleMode(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  iStack_30 = value;
  pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Invalid scale mode: {0}.");
  pSVar3 = System_String__Format(pSVar3,pIVar2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this_01,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicIconBuiltin_set_ScaleMode);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicIconBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicIconBuiltin__get_ClassName (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x5aff080

System_String_o *
CustomLogic_CustomLogicIconBuiltin__get_ClassName
          (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546f5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    Il2CppMethodInitialized_07546f5f = '\x01';
  }
  return "Icon";
}


// CustomLogic.CustomLogicIconBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_IsAbstract (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x5aff0b0

bool CustomLogic_CustomLogicIconBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicIconBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_IsStatic (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x5aff0c0

bool CustomLogic_CustomLogicIconBuiltin__get_IsStatic
               (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicIconBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicIconBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicIconBuiltin_o* __this, const MethodInfo* method);
// 0x5aff0d0

bool CustomLogic_CustomLogicIconBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicIconBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


