// Type: CustomLogic.CustomLogicTimeBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTimeBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicTimeBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicTimeBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTimeBuiltin_o* CustomLogic_CustomLogicTimeBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5afb060

CustomLogic_CustomLogicTimeBuiltin_o *
CustomLogic_CustomLogicTimeBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546f23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTimeBuiltin);
    Il2CppMethodInitialized_07546f23 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTimeBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin);
  if (Il2CppMethodInitialized_07546f20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546f20 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicTimeBuiltin_o *)__this;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTimeBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5afb180

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTimeBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicTimeBuiltin_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546f24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"TickTime");
    il2cpp_codegen_initialize_runtime_metadata(&"GameTime");
    il2cpp_codegen_initialize_runtime_metadata(&"EngineTime");
    il2cpp_codegen_initialize_runtime_metadata(&"FrameTime");
    il2cpp_codegen_initialize_runtime_metadata(&"TimeScale");
    il2cpp_codegen_initialize_runtime_metadata(&"UnscaledFrameTime");
    Il2CppMethodInitialized_07546f24 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"TickTime",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TickTime
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TickTime
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"FrameTime",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__FrameTime
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__FrameTime
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"UnscaledFrameTime",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__UnscaledFrameTime
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__UnscaledFrameTime
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"GameTime",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__GameTime
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"EngineTime",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__EngineTime
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"TimeScale",(MethodInfo *)0x0);
  if (bVar1) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings;
    if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
    }
    pCVar2 = CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TimeScale
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTimeBuiltin not found");
  pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__TickTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TickTime (const MethodInfo* method);
// 0x5afb3f0

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TickTime(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TickTime_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    Il2CppMethodInitialized_07546f25 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TickTime_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__FrameTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__FrameTime (const MethodInfo* method);
// 0x5afb490

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__FrameTime(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__FrameTime_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    Il2CppMethodInitialized_07546f26 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__FrameTime_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__UnscaledFrameTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__UnscaledFrameTime (const MethodInfo* method);
// 0x5afb530

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__UnscaledFrameTime(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__UnscaledFrameTime_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    Il2CppMethodInitialized_07546f27 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__UnscaledFrameTime_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__GameTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__GameTime (const MethodInfo* method);
// 0x5afb5d0

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__GameTime(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__GameTime_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    Il2CppMethodInitialized_07546f28 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__GameTime_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__EngineTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__EngineTime (const MethodInfo* method);
// 0x5afb670

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__EngineTime(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546f29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__EngineTime_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    Il2CppMethodInitialized_07546f29 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__EngineTime_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__TimeScale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TimeScale (const MethodInfo* method);
// 0x5afb710

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TimeScale(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  System_Action_CustomLogicTimeBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546f2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTimeBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TimeScale_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TimeScale_g____setter_7_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    Il2CppMethodInitialized_07546f2a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TimeScale_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTimeBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TimeScale_g____setter_7_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5afb7f0

void CustomLogic_CustomLogicTimeBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546f2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"TickTime");
    il2cpp_codegen_initialize_runtime_metadata(&"GameTime");
    il2cpp_codegen_initialize_runtime_metadata(&"EngineTime");
    il2cpp_codegen_initialize_runtime_metadata(&"FrameTime");
    il2cpp_codegen_initialize_runtime_metadata(&"TimeScale");
    il2cpp_codegen_initialize_runtime_metadata(&"UnscaledFrameTime");
    Il2CppMethodInitialized_07546f2b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TickTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FrameTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UnscaledFrameTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GameTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EngineTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TimeScale",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->static_fields->MemberNames)
  ;
  return;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TickTime>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TickTime_g____getter_2_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x5afb960

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TickTime_g____getter_2_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__FrameTime>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__FrameTime_g____getter_3_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x5afb990

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__FrameTime_g____getter_3_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__UnscaledFrameTime>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__UnscaledFrameTime_g____getter_4_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x5afb9c0

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__UnscaledFrameTime_g____getter_4_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__GameTime>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__GameTime_g____getter_5_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x5afb9f0

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__GameTime_g____getter_5_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  Il2CppObject *pIVar3;
  float local_c;
  
  if (Il2CppMethodInitialized_07546f21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546f21 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_c = (pCVar2->fields).CurrentTime;
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar3;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__EngineTime>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__EngineTime_g____getter_6_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x5afba90

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__EngineTime_g____getter_6_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_time((MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TimeScale>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____getter_7_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x5afbac0

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____getter_7_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TimeScale>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____setter_7_1 (CustomLogic_CustomLogicTimeBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5afbaf0

void CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____setter_7_1
               (CustomLogic_CustomLogicTimeBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_07546f2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546f2c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  UnityEngine_Time__set_timeScale(value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTimeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin___ctor (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x5afaeb0

void CustomLogic_CustomLogicTimeBuiltin___ctor
               (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546f20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546f20 = '\x01';
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


// CustomLogic.CustomLogicTimeBuiltin$$get_TickTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_TickTime (const MethodInfo* method);
// 0x5afaf20

float CustomLogic_CustomLogicTimeBuiltin__get_TickTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_FrameTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_FrameTime (const MethodInfo* method);
// 0x5afaf30

float CustomLogic_CustomLogicTimeBuiltin__get_FrameTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_UnscaledFrameTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_UnscaledFrameTime (const MethodInfo* method);
// 0x5afaf40

float CustomLogic_CustomLogicTimeBuiltin__get_UnscaledFrameTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_GameTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_GameTime (const MethodInfo* method);
// 0x5afaf50

float CustomLogic_CustomLogicTimeBuiltin__get_GameTime(MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_07546f21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546f21 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar2->fields).CurrentTime;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_EngineTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_EngineTime (const MethodInfo* method);
// 0x5afafd0

float CustomLogic_CustomLogicTimeBuiltin__get_EngineTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_TimeScale
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_TimeScale (const MethodInfo* method);
// 0x5afafe0

float CustomLogic_CustomLogicTimeBuiltin__get_TimeScale(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$set_TimeScale
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin__set_TimeScale (float value, const MethodInfo* method);
// 0x5afaff0

void CustomLogic_CustomLogicTimeBuiltin__set_TimeScale(float value,MethodInfo *method)

{
  UnityEngine_Time__set_timeScale(value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTimeBuiltin__get_ClassName (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x5afb000

System_String_o *
CustomLogic_CustomLogicTimeBuiltin__get_ClassName
          (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546f22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Time");
    Il2CppMethodInitialized_07546f22 = '\x01';
  }
  return "Time";
}


// CustomLogic.CustomLogicTimeBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_IsAbstract (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x5afb030

bool CustomLogic_CustomLogicTimeBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_IsStatic (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x5afb040

bool CustomLogic_CustomLogicTimeBuiltin__get_IsStatic
               (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x5afb050

bool CustomLogic_CustomLogicTimeBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


