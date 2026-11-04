// Type: CustomLogic.CustomLogicTimeBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTimeBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicTimeBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicTimeBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTimeBuiltin_o* CustomLogic_CustomLogicTimeBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182074cf0

CustomLogic_CustomLogicTimeBuiltin_o *
CustomLogic_CustomLogicTimeBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434655e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTimeBuiltin);
    Il2CppMethodInitialized_18434655e = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin);
      if (Il2CppMethodInitialized_18434655b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_18434655b = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicTimeBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTimeBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTimeBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182048a70

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTimeBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_00;
  System_Action_CustomLogicTimeBuiltin__object__o *__this_01;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_18434655f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"TickTime");
    il2cpp_codegen_initialize_runtime_metadata(&"GameTime");
    il2cpp_codegen_initialize_runtime_metadata(&"EngineTime");
    il2cpp_codegen_initialize_runtime_metadata(&"FrameTime");
    il2cpp_codegen_initialize_runtime_metadata(&"TimeScale");
    il2cpp_codegen_initialize_runtime_metadata(&"UnscaledFrameTime");
    Il2CppMethodInitialized_18434655f = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"TickTime",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346560 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TickTime_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
      Il2CppMethodInitialized_184346560 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TickTime_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"FrameTime",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_184346561 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__FrameTime_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
        Il2CppMethodInitialized_184346561 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__FrameTime_g____getter_3_0
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"UnscaledFrameTime",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346562 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__UnscaledFrameTime_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
          Il2CppMethodInitialized_184346562 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__UnscaledFrameTime_g____gett
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"GameTime",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346563 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__GameTime_g____getter_5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
            Il2CppMethodInitialized_184346563 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__GameTime_g____getter_5_0
          ;
        }
        else {
          bVar1 = System_String__op_Equality(name,"EngineTime",(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = System_String__op_Equality(name,"TimeScale",(MethodInfo *)0x0);
            if (!bVar1) {
              pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTimeBuiltin not found");
              str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
              pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
              klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
              __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
              System_Exception___ctor_1b6abf0(__this_02,pSVar2,(MethodInfo *)0x0);
              pMVar3 = il2cpp_codegen_get_runtime_metadata
                                 (&MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings_CreateMemberBinding)
              ;
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar3);
            }
            if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346565 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicTimeBuiltin_object);
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
              Il2CppMethodInitialized_184346565 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TimeScale_g____getter_7_0
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTimeBuiltin_object);
            System_Action_object__object____ctor
                      ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_01,
                       (Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TimeScale_g____setter_7_1
                       ,(MethodInfo *)0x0);
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
            goto label_182048e7b;
          }
          if ((TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346564 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__EngineTime_g____getter_6_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
            Il2CppMethodInitialized_184346564 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__EngineTime_g____getter_6_0
          ;
        }
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  __this_01 = (System_Action_CustomLogicTimeBuiltin__object__o *)0x0;
label_182048e7b:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_01,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__TickTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TickTime (const MethodInfo* method);
// 0x182063860

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TickTime(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184346560 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TickTime_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    Il2CppMethodInitialized_184346560 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TickTime_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__FrameTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__FrameTime (const MethodInfo* method);
// 0x182061e70

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__FrameTime(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184346561 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__FrameTime_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    Il2CppMethodInitialized_184346561 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__FrameTime_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__UnscaledFrameTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__UnscaledFrameTime (const MethodInfo* method);
// 0x182063ae0

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__UnscaledFrameTime(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184346562 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__UnscaledFrameTime_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    Il2CppMethodInitialized_184346562 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__UnscaledFrameTime_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__GameTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__GameTime (const MethodInfo* method);
// 0x182061f10

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__GameTime(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184346563 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__GameTime_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    Il2CppMethodInitialized_184346563 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__GameTime_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__EngineTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__EngineTime (const MethodInfo* method);
// 0x182061ce0

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__EngineTime(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184346564 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__EngineTime_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
    Il2CppMethodInitialized_184346564 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__EngineTime_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$__CreatePropertyBinding__TimeScale
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o* CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TimeScale (const MethodInfo* method);
// 0x182063900

CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *
CustomLogic_CustomLogicTimeBuiltin_Bindings____CreatePropertyBinding__TimeScale(MethodInfo *method)

{
  System_Func_CustomLogicTimeBuiltin__object__o *__this;
  System_Action_CustomLogicTimeBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184346565 == '\0') {
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
    Il2CppMethodInitialized_184346565 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTimeBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TimeScale_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTimeBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings___CreatePropertyBinding__TimeScale_g____setter_7_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTimeBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x1820656a0

void CustomLogic_CustomLogicTimeBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346566 == '\0') {
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
    Il2CppMethodInitialized_184346566 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TickTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FrameTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UnscaledFrameTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GameTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EngineTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TimeScale",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTimeBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TickTime>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TickTime_g____getter_2_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x1820563f0

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TickTime_g____getter_2_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  local_res18[0] = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__FrameTime>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__FrameTime_g____getter_3_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x182054900

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__FrameTime_g____getter_3_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  local_res18[0] = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__UnscaledFrameTime>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__UnscaledFrameTime_g____getter_4_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x182056580

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__UnscaledFrameTime_g____getter_4_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  local_res18[0] = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__GameTime>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__GameTime_g____getter_5_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x182054930

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__GameTime_g____getter_5_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434655c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434655c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    local_res18[0] = (pCVar1->fields).CurrentTime;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res18);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__EngineTime>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__EngineTime_g____getter_6_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x182054750

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__EngineTime_g____getter_6_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  local_res18[0] = UnityEngine_Time__get_time((MethodInfo *)0x0);
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TimeScale>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____getter_7_0 (CustomLogic_CustomLogicTimeBuiltin_o* __i, const MethodInfo* method);
// 0x182056420

Il2CppObject *
CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____getter_7_0
          (CustomLogic_CustomLogicTimeBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  local_res18[0] = UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicTimeBuiltin.Bindings$$<__CreatePropertyBinding__TimeScale>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____setter_7_1 (CustomLogic_CustomLogicTimeBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x182056450

void CustomLogic_CustomLogicTimeBuiltin_Bindings_____CreatePropertyBinding__TimeScale_g____setter_7_1
               (CustomLogic_CustomLogicTimeBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_184346567 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346567 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  UnityEngine_Time__set_timeScale(value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTimeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin___ctor (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x182069ed0

void CustomLogic_CustomLogicTimeBuiltin___ctor
               (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434655b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434655b = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_TickTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_TickTime (const MethodInfo* method);
// 0x182069fd0

float CustomLogic_CustomLogicTimeBuiltin__get_TickTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_FrameTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_FrameTime (const MethodInfo* method);
// 0x182069f60

float
CustomLogic_CustomLogicTimeBuiltin__get_FrameTime(MethodInfo* method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_UnscaledFrameTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_UnscaledFrameTime (const MethodInfo* method);
// 0x182069ff0

float CustomLogic_CustomLogicTimeBuiltin__get_UnscaledFrameTime(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_GameTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_GameTime (const MethodInfo* method);
// 0x182069f70

float CustomLogic_CustomLogicTimeBuiltin__get_GameTime(MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434655c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434655c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields).CurrentTime;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTimeBuiltin$$get_EngineTime
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_EngineTime (const MethodInfo* method);
// 0x182069f50

float
CustomLogic_CustomLogicTimeBuiltin__get_EngineTime(MethodInfo* method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_TimeScale
// il2cpp: float CustomLogic_CustomLogicTimeBuiltin__get_TimeScale (const MethodInfo* method);
// 0x182069fe0

float CustomLogic_CustomLogicTimeBuiltin__get_TimeScale(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Time__get_timeScale((MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicTimeBuiltin$$set_TimeScale
// il2cpp: void CustomLogic_CustomLogicTimeBuiltin__set_TimeScale (float value, const MethodInfo* method);
// 0x18206a000

void CustomLogic_CustomLogicTimeBuiltin__set_TimeScale(float value,MethodInfo *method)

{
  UnityEngine_Time__set_timeScale(value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTimeBuiltin__get_ClassName (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x182069f20

System_String_o *
CustomLogic_CustomLogicTimeBuiltin__get_ClassName
          (CustomLogic_CustomLogicTimeBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434655d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Time");
    Il2CppMethodInitialized_18434655d = '\x01';
  }
  return "Time";
}


// CustomLogic.CustomLogicTimeBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_IsAbstract (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTimeBuiltin__get_IsAbstract(CustomLogic_CustomLogicTimeBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_IsStatic (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTimeBuiltin__get_IsStatic(CustomLogic_CustomLogicTimeBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTimeBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTimeBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTimeBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTimeBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicTimeBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


