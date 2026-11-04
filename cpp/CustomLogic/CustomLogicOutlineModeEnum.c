// Type: CustomLogic.CustomLogicOutlineModeEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicOutlineModeEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicOutlineModeEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicOutlineModeEnum_o* CustomLogic_CustomLogicOutlineModeEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ff0610

CustomLogic_CustomLogicOutlineModeEnum_o *
CustomLogic_CustomLogicOutlineModeEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicOutlineModeEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345ed9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ed9 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
      if (Il2CppMethodInitialized_184345ed0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345ed0 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicOutlineModeEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicOutlineModeEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fcfb30

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184345eda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAndSilhouette");
    il2cpp_codegen_initialize_runtime_metadata(&"SilhouetteOnly");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAndLightenColor");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineHidden");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineVisible");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAll");
    Il2CppMethodInitialized_184345eda = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"OutlineAll",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184345edb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAll_g____getter
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
      Il2CppMethodInitialized_184345edb = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAll_g____getter
    ;
  }
  else {
    bVar1 = System_String__op_Equality(name,"OutlineVisible",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345edc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineVisible_g____get
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
        Il2CppMethodInitialized_184345edc = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineVisible_g____get
      ;
    }
    else {
      bVar1 = System_String__op_Equality(name,"OutlineHidden",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345edd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineHidden_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
          Il2CppMethodInitialized_184345edd = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineHidden_g____gett
        ;
      }
      else {
        bVar1 = System_String__op_Equality(name,"OutlineAndSilhouette",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345ede == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndSilhouette_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
            Il2CppMethodInitialized_184345ede = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndSilhouette_g
          ;
        }
        else {
          bVar1 = System_String__op_Equality(name,"SilhouetteOnly",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345edf == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__SilhouetteOnly_g____get
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
              Il2CppMethodInitialized_184345edf = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
            pMVar3 = 
            MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__SilhouetteOnly_g____get
            ;
          }
          else {
            bVar1 = System_String__op_Equality(name,"OutlineAndLightenColor",(MethodInfo *)0x0);
            if (!bVar1) {
              pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicOutlineModeEnum not found");
              str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
              pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
              klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
              __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
              System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
              pMVar3 = il2cpp_codegen_get_runtime_metadata
                                 (&
                                  MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings_CreateMemberBinding
                                 );
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
            }
            if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345ee0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndLightenColor
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
              Il2CppMethodInitialized_184345ee0 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
            pMVar3 = 
            MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndLightenColor
            ;
          }
        }
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAll
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAll (const MethodInfo* method);
// 0x181fe6040

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAll(MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAll_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_184345edb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAll_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineVisible
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineVisible (const MethodInfo* method);
// 0x181fe62c0

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineVisible(MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345edc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineVisible_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_184345edc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineVisible_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineHidden
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineHidden (const MethodInfo* method);
// 0x181fe6220

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineHidden(MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345edd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineHidden_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_184345edd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineHidden_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAndSilhouette
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndSilhouette (const MethodInfo* method);
// 0x181fe6180

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndSilhouette
          (MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ede == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndSilhouette_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_184345ede = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndSilhouette_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__SilhouetteOnly
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__SilhouetteOnly (const MethodInfo* method);
// 0x181fe71c0

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__SilhouetteOnly(MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345edf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__SilhouetteOnly_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_184345edf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__SilhouetteOnly_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$__CreatePropertyBinding__OutlineAndLightenColor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o* CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndLightenColor (const MethodInfo* method);
// 0x181fe60e0

CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *
CustomLogic_CustomLogicOutlineModeEnum_Bindings____CreatePropertyBinding__OutlineAndLightenColor
          (MethodInfo *method)

{
  System_Func_CustomLogicOutlineModeEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345ee0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndLightenColor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
    Il2CppMethodInitialized_184345ee0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicOutlineModeEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings___CreatePropertyBinding__OutlineAndLightenColor
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicOutlineModeEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum_Bindings___cctor (const MethodInfo* method);
// 0x181fec360

void CustomLogic_CustomLogicOutlineModeEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345ee1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAndSilhouette");
    il2cpp_codegen_initialize_runtime_metadata(&"SilhouetteOnly");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAndLightenColor");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineHidden");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineVisible");
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAll");
    Il2CppMethodInitialized_184345ee1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OutlineAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OutlineVisible",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OutlineHidden",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OutlineAndSilhouette",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SilhouetteOnly",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OutlineAndLightenColor",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAll>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAll_g____getter_2_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x181fdd970

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAll_g____getter_2_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ee2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ee2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_1843460c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_1843460c7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAll;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineVisible>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineVisible_g____getter_3_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x181fddbb0

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineVisible_g____getter_3_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ee3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ee3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_1843460c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_1843460c8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineVisible;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineHidden>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineHidden_g____getter_4_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x181fddb20

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineHidden_g____getter_4_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ee4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ee4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_1843460c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_1843460c9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineHidden;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAndSilhouette>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndSilhouette_g____getter_5_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x181fdda90

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndSilhouette_g____getter_5_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ee5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ee5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_1843460ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_1843460ca = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndSilhouette
  ;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__SilhouetteOnly>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__SilhouetteOnly_g____getter_6_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x181fde010

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__SilhouetteOnly_g____getter_6_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ee6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ee6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_1843460cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_1843460cb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_silhouetteOnly;
}


// CustomLogic.CustomLogicOutlineModeEnum.Bindings$$<__CreatePropertyBinding__OutlineAndLightenColor>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndLightenColor_g____getter_7_0 (CustomLogic_CustomLogicOutlineModeEnum_o* __i, const MethodInfo* method);
// 0x181fdda00

Il2CppObject *
CustomLogic_CustomLogicOutlineModeEnum_Bindings_____CreatePropertyBinding__OutlineAndLightenColor_g____getter_7_0
          (CustomLogic_CustomLogicOutlineModeEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ee7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  if (Il2CppMethodInitialized_1843460cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_1843460cc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndLightenColor;
}


// CustomLogic.CustomLogicOutlineModeEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum___ctor (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x181fee790

void CustomLogic_CustomLogicOutlineModeEnum___ctor
               (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ed0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345ed0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAll
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAll (const MethodInfo* method);
// 0x181fee810

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAll(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ed1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ed1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAll;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineVisible
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineVisible (const MethodInfo* method);
// 0x181fee950

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineVisible(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ed2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ed2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineVisible;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineHidden
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineHidden (const MethodInfo* method);
// 0x181fee900

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineHidden(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ed3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ed3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineHidden;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAndSilhouette
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndSilhouette (const MethodInfo* method);
// 0x181fee8b0

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndSilhouette(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ed4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ed4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndSilhouette;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_SilhouetteOnly
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_SilhouetteOnly (const MethodInfo* method);
// 0x181fee9a0

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_SilhouetteOnly(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ed5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ed5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_silhouetteOnly;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_OutlineAndLightenColor
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndLightenColor (const MethodInfo* method);
// 0x181fee860

System_String_o * CustomLogic_CustomLogicOutlineModeEnum__get_OutlineAndLightenColor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ed6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    Il2CppMethodInitialized_184345ed6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndLightenColor;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicOutlineModeEnum__get_ClassName (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x181fee7e0

System_String_o *
CustomLogic_CustomLogicOutlineModeEnum__get_ClassName
          (CustomLogic_CustomLogicOutlineModeEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345ed7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineModeEnum");
    Il2CppMethodInitialized_184345ed7 = '\x01';
  }
  return "OutlineModeEnum";
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_IsAbstract (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicOutlineModeEnum__get_IsAbstract(CustomLogic_CustomLogicOutlineModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_IsStatic (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicOutlineModeEnum__get_IsStatic(CustomLogic_CustomLogicOutlineModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicOutlineModeEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicOutlineModeEnum__get_InheritBaseMembers (CustomLogic_CustomLogicOutlineModeEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicOutlineModeEnum__get_InheritBaseMembers(CustomLogic_CustomLogicOutlineModeEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicOutlineModeEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicOutlineModeEnum___cctor (const MethodInfo* method);
// 0x181fee570

void CustomLogic_CustomLogicOutlineModeEnum___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_98;
  undefined4 local_88;
  System_Enum_o local_80;
  undefined4 local_70;
  System_Enum_o local_68;
  undefined4 local_58;
  System_Enum_o local_50;
  undefined4 local_40;
  System_Enum_o local_38;
  undefined4 local_28;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (Il2CppMethodInitialized_184345ed8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Outline_Mode);
    Il2CppMethodInitialized_184345ed8 = '\x01';
  }
  local_98.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  local_98.monitor = &g_data_ffffffffffffffff;
  local_88 = 0;
  pSVar1 = System_Enum__ToString(&local_98,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAll = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAll,pSVar1);
  local_80.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  local_80.monitor = &g_data_ffffffffffffffff;
  local_70 = 1;
  pSVar1 = System_Enum__ToString(&local_80,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineVisible = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineVisible,pSVar1);
  local_68.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  local_68.monitor = &g_data_ffffffffffffffff;
  local_58 = 2;
  pSVar1 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineHidden = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineHidden,pSVar1);
  local_50.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  local_50.monitor = &g_data_ffffffffffffffff;
  local_40 = 3;
  pSVar1 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndSilhouette = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndSilhouette,pSVar1);
  local_38.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  local_38.monitor = &g_data_ffffffffffffffff;
  local_28 = 4;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_silhouetteOnly = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_silhouetteOnly,pSVar1);
  local_20.klass = (System_Enum_c *)TypeInfo_Outline_Mode;
  local_20.monitor = &g_data_ffffffffffffffff;
  local_10 = 5;
  pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndLightenColor = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicOutlineModeEnum->static_fields->_outlineAndLightenColor,pSVar1);
  return;
}


