// Type: CustomLogic.CustomLogicCommandsBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicCommandsBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCommandsBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCommandsBuiltin_o* CustomLogic_CustomLogicCommandsBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ac9100

CustomLogic_CustomLogicCommandsBuiltin_o *
CustomLogic_CustomLogicCommandsBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546cec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin);
    Il2CppMethodInitialized_07546cec = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCommandsBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin);
  if (Il2CppMethodInitialized_07546ce7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ce7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicCommandsBuiltin_o *)__this;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5ac96d0

void CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546cf1 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5ac9740

void CustomLogic_CustomLogicCommandsBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterCommand>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__RegisterCommand_b__2_0 (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCommandsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac9750

Il2CppObject *
CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__RegisterCommand_b__2_0
          (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCommandsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  System_String_o *command;
  CustomLogic_UserMethod_o *method_00;
  System_String_o *description;
  System_String_o *autofill;
  Il2CppObject *pIVar2;
  MethodInfo *in_R8;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07546cf2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07546cf2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    command = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[1],
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
      autofill = "None";
      if ((int)__a->max_length < 3) {
        description = "";
      }
      else {
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        description = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (pIVar2,(MethodInfo_34BDE00 *)
                                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (3 < (int)__a->max_length) {
          pIVar2 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          autofill = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (pIVar2,(MethodInfo_34BDE00 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        }
      }
      bVar1 = CustomLogic_CustomLogicCommandsBuiltin__RegisterCommand
                        (command,method_00,description,autofill,in_R8);
      uStack_38 = CONCAT17(bVar1,(undefined7)uStack_38);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_38 + 7));
      return pIVar2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ParseCommands>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__ParseCommands_b__3_0 (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCommandsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ac98d0

Il2CppObject *
CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_____CreateMethodBinding__ParseCommands_b__3_0
          (CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCommandsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *text;
  System_String_array *parameterValues;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07546cf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546cf3 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  text = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                   (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (Il2CppMethodInitialized_07546ce9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    Il2CppMethodInitialized_07546ce9 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  parameterValues = GameManagers_ChatManager__ParseCommandArgs(text,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor_58b0e70
            (__this_00,(System_Object_array *)parameterValues,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCommandsBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ac9220

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCommandsBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicCommandsBuiltin_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546ced == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ParseCommands");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterCommand");
    Il2CppMethodInitialized_07546ced = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"RegisterCommand",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__RegisterCommand
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__RegisterCommand
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"ParseCommands",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCommandsBuiltin not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings)
    ;
    pCVar2 = CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__ParseCommands
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__ParseCommands
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$__CreateMethodBinding__RegisterCommand
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o* CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__RegisterCommand (const MethodInfo* method);
// 0x5ac9360
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac9395: jmp 0x5ac9405

CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *
CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__RegisterCommand(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCommandsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546cee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__RegisterCommand_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546cee = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicCommandsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__RegisterCommand_b__2_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$__CreateMethodBinding__ParseCommands
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o* CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__ParseCommands (const MethodInfo* method);
// 0x5ac94a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ac94d5: jmp 0x5ac9545

CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *
CustomLogic_CustomLogicCommandsBuiltin_Bindings____CreateMethodBinding__ParseCommands(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCommandsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCommandsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546cef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__ParseCommands_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546cef = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicCommandsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCommandsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c___CreateMethodBinding__ParseCommands_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCommandsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCommandsBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5ac95e0

void CustomLogic_CustomLogicCommandsBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546cf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ParseCommands");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterCommand");
    Il2CppMethodInitialized_07546cf0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterCommand",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ParseCommands",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCommandsBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin___ctor (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x5ac8e60

void CustomLogic_CustomLogicCommandsBuiltin___ctor
               (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ce7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ce7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin$$RegisterCommand
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__RegisterCommand (System_String_o* command, CustomLogic_UserMethod_o* method, System_String_o* description, System_String_o* autofill, const MethodInfo* method);
// 0x5ac8ed0

bool CustomLogic_CustomLogicCommandsBuiltin__RegisterCommand
               (System_String_o *command,CustomLogic_UserMethod_o *method,System_String_o *description,
               System_String_o *autofill,MethodInfo *methodInfo)

{
  bool bVar1;
  System_String_o *a;
  int autofillType;
  
  if (Il2CppMethodInitialized_07546ce8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"playeridlist");
    il2cpp_codegen_initialize_runtime_metadata(&"playerid");
    Il2CppMethodInitialized_07546ce8 = '\x01';
  }
  if ((autofill == (System_String_o *)0x0) &&
     (autofill = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), autofill == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  a = System_String__ToLower(autofill,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,"playerid",(MethodInfo *)0x0);
  autofillType = 1;
  if (!bVar1) {
    bVar1 = System_String__op_Equality(a,"playeridlist",(MethodInfo *)0x0);
    autofillType = (uint)bVar1 * 2;
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar1 = GameManagers_ChatManager__RegisterCustomCommand
                    (command,method,description,autofillType,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicCommandsBuiltin$$ParseCommands
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicCommandsBuiltin__ParseCommands (System_String_o* text, const MethodInfo* method);
// 0x5ac8fc0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicCommandsBuiltin__ParseCommands(System_String_o *text,MethodInfo *method)

{
  System_String_array *parameterValues;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_07546ce9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    Il2CppMethodInitialized_07546ce9 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  parameterValues = GameManagers_ChatManager__ParseCommandArgs(text,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor_58b0e70
            (__this,(System_Object_array *)parameterValues,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicCommandsBuiltin$$ClearCommands
// il2cpp: void CustomLogic_CustomLogicCommandsBuiltin__ClearCommands (const MethodInfo* method);
// 0x5ac9040

void CustomLogic_CustomLogicCommandsBuiltin__ClearCommands(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546cea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_07546cea = '\x01';
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    GameManagers_ChatManager__ClearCustomCommands((MethodInfo *)0x0);
    return;
  }
  GameManagers_ChatManager__ClearCustomCommands((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCommandsBuiltin__get_ClassName (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x5ac90a0

System_String_o *
CustomLogic_CustomLogicCommandsBuiltin__get_ClassName
          (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ceb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Commands");
    Il2CppMethodInitialized_07546ceb = '\x01';
  }
  return "Commands";
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__get_IsAbstract (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x5ac90d0

bool CustomLogic_CustomLogicCommandsBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__get_IsStatic (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x5ac90e0

bool CustomLogic_CustomLogicCommandsBuiltin__get_IsStatic
               (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCommandsBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCommandsBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCommandsBuiltin_o* __this, const MethodInfo* method);
// 0x5ac90f0

bool CustomLogic_CustomLogicCommandsBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicCommandsBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


