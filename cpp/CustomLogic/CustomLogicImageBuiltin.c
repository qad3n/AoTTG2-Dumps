// Type: CustomLogic.CustomLogicImageBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicImageBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicImageBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicImageBuiltin_o* CustomLogic_CustomLogicImageBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5afff30

CustomLogic_CustomLogicImageBuiltin_o *
CustomLogic_CustomLogicImageBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicImageBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546f6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin);
    Il2CppMethodInitialized_07546f6e = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicImageBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicImageBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin);
  if (Il2CppMethodInitialized_07546f6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546f6b = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._currentImagePath = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentImagePath);
  (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentTexture);
  return __this;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b00580

void CustomLogic_CustomLogicImageBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546f74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f74 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b005f0

void CustomLogic_CustomLogicImageBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetImage>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicImageBuiltin_Bindings___c_____CreateMethodBinding__SetImage_b__3_0 (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicImageBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b00600

Il2CppObject *
CustomLogic_CustomLogicImageBuiltin_Bindings___c_____CreateMethodBinding__SetImage_b__3_0
          (CustomLogic_CustomLogicImageBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicImageBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *value;
  Il2CppObject *extraout_RAX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546f75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f75 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
      CustomLogic_CustomLogicImageBuiltin__SetImage(__c,value,method_00);
      return extraout_RAX;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicImageBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b00090

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicImageBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *pCVar2;
  CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicImageBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546f6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ImagePath");
    il2cpp_codegen_initialize_runtime_metadata(&"SetImage");
    Il2CppMethodInitialized_07546f6f = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"ImagePath",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicImageBuiltin_Bindings____CreatePropertyBinding__ImagePath
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicImageBuiltin_Bindings____CreatePropertyBinding__ImagePath
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"SetImage",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicImageBuiltin not found");
    pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar5 = TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings);
    pCVar3 = CustomLogic_CustomLogicImageBuiltin_Bindings____CreateMethodBinding__SetImage
                       ((MethodInfo *)pCVar5);
    return (CustomLogic_ICLMemberBinding_o *)pCVar3;
  }
  pCVar3 = CustomLogic_CustomLogicImageBuiltin_Bindings____CreateMethodBinding__SetImage
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar3;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$__CreatePropertyBinding__ImagePath
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o* CustomLogic_CustomLogicImageBuiltin_Bindings____CreatePropertyBinding__ImagePath (const MethodInfo* method);
// 0x5b001d0

CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *
CustomLogic_CustomLogicImageBuiltin_Bindings____CreatePropertyBinding__ImagePath(MethodInfo *method)

{
  System_Func_CustomLogicImageBuiltin__object__o *__this;
  System_Action_CustomLogicImageBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicImageBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicImageBuiltin_object);
    Il2CppMethodInitialized_07546f70 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicImageBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicImageBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings___CreatePropertyBinding__ImagePath_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicImageBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$__CreateMethodBinding__SetImage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o* CustomLogic_CustomLogicImageBuiltin_Bindings____CreateMethodBinding__SetImage (const MethodInfo* method);
// 0x5b002b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b002e5: jmp 0x5b00355

CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o *
CustomLogic_CustomLogicImageBuiltin_Bindings____CreateMethodBinding__SetImage(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicImageBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicImageBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicImageBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicImageBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c___CreateMethodBinding__SetImage_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546f71 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicImageBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicImageBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c___CreateMethodBinding__SetImage_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicImageBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b003f0

void CustomLogic_CustomLogicImageBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546f72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ImagePath");
    il2cpp_codegen_initialize_runtime_metadata(&"SetImage");
    Il2CppMethodInitialized_07546f72 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ImagePath",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetImage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicImageBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$<__CreatePropertyBinding__ImagePath>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____getter_2_0 (CustomLogic_CustomLogicImageBuiltin_o* __i, const MethodInfo* method);
// 0x5b004e0

Il2CppObject *
CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____getter_2_0
          (CustomLogic_CustomLogicImageBuiltin_o *__i,MethodInfo *method)

{
  if (__i == (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(__i->fields)._currentImagePath;
}


// CustomLogic.CustomLogicImageBuiltin.Bindings$$<__CreatePropertyBinding__ImagePath>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____setter_2_1 (CustomLogic_CustomLogicImageBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5b00500

void CustomLogic_CustomLogicImageBuiltin_Bindings_____CreatePropertyBinding__ImagePath_g____setter_2_1
               (CustomLogic_CustomLogicImageBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546f73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f73 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (__i == (CustomLogic_CustomLogicImageBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicImageBuiltin__SetImage(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicImageBuiltin___ctor (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x5affbe0

void CustomLogic_CustomLogicImageBuiltin___ctor
               (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546f6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546f6b = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._currentImagePath = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentImagePath);
  (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentTexture);
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$SetImage
// il2cpp: CustomLogic_CustomLogicImageBuiltin_o* CustomLogic_CustomLogicImageBuiltin__SetImage (CustomLogic_CustomLogicImageBuiltin_o* __this, System_String_o* imagePath, const MethodInfo* method);
// 0x5affc60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5affe2c: jmp 0x5affe58

void CustomLogic_CustomLogicImageBuiltin__SetImage
               (CustomLogic_CustomLogicImageBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07546f6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Failed to load image at path: ");
    Il2CppMethodInitialized_07546f6c = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar2) {
    (__this->fields)._currentImagePath = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentImagePath);
    (__this->fields)._currentTexture = (UnityEngine_Texture2D_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentTexture);
  }
  else {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    bVar2 = Utility_Util__IsValidResourcePath(value,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      x = (UnityEngine_Texture2D_o *)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar3,value,true,false,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((bVar2) && (x != (UnityEngine_Texture2D_o *)0x0)) && (x->klass == TypeInfo_UnityEngine_Texture2D))
      {
        (__this->fields)._currentTexture = x;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentTexture);
        (__this->fields)._currentImagePath = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentImagePath);
        return;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__op_Inequality
                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320("Failed to load image at path: ",value,(MethodInfo *)0x0);
      uVar1 = (TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor;
    }
    else {
      pSVar3 = System_String__Concat_52f0320("Failed to load image at path: ",value,(MethodInfo *)0x0);
      uVar1 = (TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$get_ImagePath
// il2cpp: System_String_o* CustomLogic_CustomLogicImageBuiltin__get_ImagePath (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x5affea0

System_String_o *
CustomLogic_CustomLogicImageBuiltin__get_ImagePath
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._currentImagePath;
}


// CustomLogic.CustomLogicImageBuiltin$$set_ImagePath
// il2cpp: void CustomLogic_CustomLogicImageBuiltin__set_ImagePath (CustomLogic_CustomLogicImageBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5affeb0

void CustomLogic_CustomLogicImageBuiltin__set_ImagePath
               (CustomLogic_CustomLogicImageBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicImageBuiltin__SetImage(__this,value,method);
  return;
}


// CustomLogic.CustomLogicImageBuiltin$$GetTexture
// il2cpp: UnityEngine_Texture2D_o* CustomLogic_CustomLogicImageBuiltin__GetTexture (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x5affec0

UnityEngine_Texture2D_o *
CustomLogic_CustomLogicImageBuiltin__GetTexture
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._currentTexture;
}


// CustomLogic.CustomLogicImageBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicImageBuiltin__get_ClassName (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x5affed0

System_String_o *
CustomLogic_CustomLogicImageBuiltin__get_ClassName
          (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546f6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_07546f6d = '\x01';
  }
  return "Image";
}


// CustomLogic.CustomLogicImageBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_IsAbstract (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x5afff00

bool CustomLogic_CustomLogicImageBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicImageBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_IsStatic (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x5afff10

bool CustomLogic_CustomLogicImageBuiltin__get_IsStatic
               (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicImageBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicImageBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicImageBuiltin_o* __this, const MethodInfo* method);
// 0x5afff20

bool CustomLogic_CustomLogicImageBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicImageBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


