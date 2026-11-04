// Type: CustomLogic.CustomLogicShifterSoundEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShifterSoundEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicShifterSoundEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShifterSoundEnum_o* CustomLogic_CustomLogicShifterSoundEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fefef0

CustomLogic_CustomLogicShifterSoundEnum_o *
CustomLogic_CustomLogicShifterSoundEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434604e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterSoundEnum);
    Il2CppMethodInitialized_18434604e = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum);
      if (Il2CppMethodInitialized_184346046 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346046 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicShifterSoundEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShifterSoundEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShifterSoundEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd7dd0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_18434604f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSteam1");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRoar");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieRoar");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSteam2");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieHurt");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder");
    Il2CppMethodInitialized_18434604f = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Thunder",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184346050 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__Thunder_g____getter_2
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
      Il2CppMethodInitialized_184346050 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object)
    ;
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__Thunder_g____getter_2
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"ErenRoar",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346051 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ErenRoar_g____getter_3
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
        Il2CppMethodInitialized_184346051 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ErenRoar_g____getter_3
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"AnnieRoar",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346052 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieRoar_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object)
          ;
          Il2CppMethodInitialized_184346052 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieRoar_g____getter
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"AnnieHurt",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346053 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieHurt_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
            Il2CppMethodInitialized_184346053 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieHurt_g____getter
          ;
        }
        else {
          bVar1 = System_String__op_Equality(name,"ColossalSteam1",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346054 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam1_g____ge
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
              Il2CppMethodInitialized_184346054 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
            pMVar3 = 
            MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam1_g____ge
            ;
          }
          else {
            bVar1 = System_String__op_Equality(name,"ColossalSteam2",(MethodInfo *)0x0);
            if (!bVar1) {
              pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShifterSoundEnum not found");
              str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
              pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
              klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
              __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
              System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
              pMVar3 = il2cpp_codegen_get_runtime_metadata
                                 (&
                                  MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings_CreateMemberBinding
                                 );
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
            }
            if ((TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184346055 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam2_g____ge
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
              Il2CppMethodInitialized_184346055 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
            pMVar3 = 
            MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam2_g____ge
            ;
          }
        }
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__Thunder
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__Thunder (const MethodInfo* method);
// 0x181fe7da0

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__Thunder(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346050 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__Thunder_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_184346050 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__Thunder_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ErenRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ErenRoar (const MethodInfo* method);
// 0x181fe2120

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ErenRoar(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346051 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ErenRoar_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_184346051 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ErenRoar_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__AnnieRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieRoar (const MethodInfo* method);
// 0x181fdf1a0

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieRoar(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346052 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieRoar_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_184346052 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieRoar_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__AnnieHurt
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieHurt (const MethodInfo* method);
// 0x181fdf100

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__AnnieHurt(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346053 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieHurt_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_184346053 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__AnnieHurt_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ColossalSteam1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam1 (const MethodInfo* method);
// 0x181fe0c80

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam1(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346054 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam1_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_184346054 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam1_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$__CreatePropertyBinding__ColossalSteam2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o* CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam2 (const MethodInfo* method);
// 0x181fe0d20

CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *
CustomLogic_CustomLogicShifterSoundEnum_Bindings____CreatePropertyBinding__ColossalSteam2(MethodInfo *method)

{
  System_Func_CustomLogicShifterSoundEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346055 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam2_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
    Il2CppMethodInitialized_184346055 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterSoundEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings___CreatePropertyBinding__ColossalSteam2_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterSoundEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterSoundEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fec4d0

void CustomLogic_CustomLogicShifterSoundEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346056 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSteam1");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRoar");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieRoar");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSteam2");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieHurt");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder");
    Il2CppMethodInitialized_184346056 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Thunder",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ErenRoar",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AnnieRoar",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AnnieHurt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColossalSteam1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ColossalSteam2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShifterSoundEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__Thunder>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__Thunder_g____getter_2_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x181fde410

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__Thunder_g____getter_2_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_1843460d7 = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->Thunder;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ErenRoar>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ErenRoar_g____getter_3_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x181fdc5b0

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ErenRoar_g____getter_3_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_1843460d8 = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->ErenRoar;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__AnnieRoar>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieRoar_g____getter_4_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x181fdae10

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieRoar_g____getter_4_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_1843460d9 = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->AnnieRoar;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__AnnieHurt>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieHurt_g____getter_5_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x181fdadc0

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__AnnieHurt_g____getter_5_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_1843460da = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->AnnieHurt;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ColossalSteam1>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam1_g____getter_6_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x181fdbf50

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam1_g____getter_6_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_1843460db = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1;
}


// CustomLogic.CustomLogicShifterSoundEnum.Bindings$$<__CreatePropertyBinding__ColossalSteam2>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam2_g____getter_7_0 (CustomLogic_CustomLogicShifterSoundEnum_o* __i, const MethodInfo* method);
// 0x181fdbfa0

Il2CppObject *
CustomLogic_CustomLogicShifterSoundEnum_Bindings_____CreatePropertyBinding__ColossalSteam2_g____getter_7_0
          (CustomLogic_CustomLogicShifterSoundEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843460dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_1843460dc = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return (Il2CppObject *)TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam2;
}


// CustomLogic.CustomLogicShifterSoundEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterSoundEnum___ctor (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x181fef110

void CustomLogic_CustomLogicShifterSoundEnum___ctor
               (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346046 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346046 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_Thunder
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_Thunder (const MethodInfo* method);
// 0x181fef320

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_Thunder(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346047 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_184346047 = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return TypeInfo_Characters_ShifterSounds->static_fields->Thunder;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ErenRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ErenRoar (const MethodInfo* method);
// 0x181fef2d0

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ErenRoar(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346048 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_184346048 = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return TypeInfo_Characters_ShifterSounds->static_fields->ErenRoar;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_AnnieRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_AnnieRoar (const MethodInfo* method);
// 0x181fef1b0

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_AnnieRoar(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346049 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_184346049 = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return TypeInfo_Characters_ShifterSounds->static_fields->AnnieRoar;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_AnnieHurt
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_AnnieHurt (const MethodInfo* method);
// 0x181fef160

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_AnnieHurt(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434604a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_18434604a = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return TypeInfo_Characters_ShifterSounds->static_fields->AnnieHurt;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ColossalSteam1
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam1 (const MethodInfo* method);
// 0x181fef230

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434604b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_18434604b = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam1;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ColossalSteam2
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam2 (const MethodInfo* method);
// 0x181fef280

System_String_o * CustomLogic_CustomLogicShifterSoundEnum__get_ColossalSteam2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434604c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ShifterSounds);
    Il2CppMethodInitialized_18434604c = '\x01';
  }
  if ((TypeInfo_Characters_ShifterSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_ShifterSounds);
  }
  return TypeInfo_Characters_ShifterSounds->static_fields->ColossalSteam2;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterSoundEnum__get_ClassName (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x181fef200

System_String_o *
CustomLogic_CustomLogicShifterSoundEnum__get_ClassName
          (CustomLogic_CustomLogicShifterSoundEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434604d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ShifterSoundEnum");
    Il2CppMethodInitialized_18434604d = '\x01';
  }
  return "ShifterSoundEnum";
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_IsAbstract (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicShifterSoundEnum__get_IsAbstract(CustomLogic_CustomLogicShifterSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_IsStatic (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicShifterSoundEnum__get_IsStatic(CustomLogic_CustomLogicShifterSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicShifterSoundEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShifterSoundEnum__get_InheritBaseMembers (CustomLogic_CustomLogicShifterSoundEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicShifterSoundEnum__get_InheritBaseMembers(CustomLogic_CustomLogicShifterSoundEnum_o* __this, MethodInfo* method)

{
  return true;
}


