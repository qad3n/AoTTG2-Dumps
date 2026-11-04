// Type: CustomLogic.CustomLogicWeaponEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWeaponEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicWeaponEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWeaponEnum_o* CustomLogic_CustomLogicWeaponEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182017350

CustomLogic_CustomLogicWeaponEnum_o *
CustomLogic_CustomLogicWeaponEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346294 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWeaponEnum);
    Il2CppMethodInitialized_184346294 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum);
      if (Il2CppMethodInitialized_18434628c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_18434628c = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicWeaponEnum_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicWeaponEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicWeaponEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWeaponEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff15a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWeaponEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_184346295 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"Civilian");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Unarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_184346295 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Blade",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
    }
    if (Il2CppMethodInitialized_184346296 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Blade_g____getter_2_0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
      Il2CppMethodInitialized_184346296 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    pMVar3 = 
    MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Blade_g____getter_2_0;
  }
  else {
    bVar1 = System_String__op_Equality(name,"AHSS",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184346297 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__AHSS_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
        Il2CppMethodInitialized_184346297 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
      pMVar3 = 
      MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__AHSS_g____getter_3_0;
    }
    else {
      bVar1 = System_String__op_Equality(name,"APG",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184346298 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__APG_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
          Il2CppMethodInitialized_184346298 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
        pMVar3 = 
        MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__APG_g____getter_4_0;
      }
      else {
        bVar1 = System_String__op_Equality(name,"Thunderspear",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184346299 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Thunderspear_g____getter_5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
            Il2CppMethodInitialized_184346299 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object)
          ;
          pMVar3 = 
          MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Thunderspear_g____getter_5_0
          ;
        }
        else {
          bVar1 = System_String__op_Equality(name,"Unarmed",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
            }
            if (Il2CppMethodInitialized_18434629a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Unarmed_g____getter_6_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
              Il2CppMethodInitialized_18434629a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
            pMVar3 = 
            MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Unarmed_g____getter_6_0
            ;
          }
          else {
            bVar1 = System_String__op_Equality(name,"Civilian",(MethodInfo *)0x0);
            if (!bVar1) {
              pSVar2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicWeaponEnum not found");
              str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
              pSVar2 = System_String__Concat_1969b70(str0,name,pSVar2,(MethodInfo *)0x0);
              klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
              __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
              System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
              pMVar3 = il2cpp_codegen_get_runtime_metadata
                                 (&MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings_CreateMemberBinding);
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar3);
            }
            if ((TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
            }
            if (Il2CppMethodInitialized_18434629b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Civilian_g____getter_7_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
              Il2CppMethodInitialized_18434629b = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
            pMVar3 = 
            MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Civilian_g____getter_7_0
            ;
          }
        }
      }
    }
  }
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar3,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Blade
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Blade (const MethodInfo* method);
// 0x182002d30

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Blade(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346296 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Blade_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_184346296 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Blade_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__AHSS
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__AHSS (const MethodInfo* method);
// 0x1820005d0

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__AHSS(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346297 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__AHSS_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_184346297 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__AHSS_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__APG
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__APG (const MethodInfo* method);
// 0x182000670

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__APG(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346298 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__APG_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_184346298 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__APG_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Thunderspear
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Thunderspear (const MethodInfo* method);
// 0x182007f60

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Thunderspear(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184346299 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Thunderspear_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_184346299 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Thunderspear_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Unarmed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Unarmed (const MethodInfo* method);
// 0x1820085a0

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Unarmed(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434629a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Unarmed_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_18434629a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Unarmed_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$__CreatePropertyBinding__Civilian
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o* CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Civilian (const MethodInfo* method);
// 0x182003230

CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *
CustomLogic_CustomLogicWeaponEnum_Bindings____CreatePropertyBinding__Civilian(MethodInfo *method)

{
  System_Func_CustomLogicWeaponEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_18434629b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Civilian_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWeaponEnum_object);
    Il2CppMethodInitialized_18434629b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicWeaponEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWeaponEnum_Bindings___CreatePropertyBinding__Civilian_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWeaponEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWeaponEnum_Bindings___cctor (const MethodInfo* method);
// 0x182008cd0

void CustomLogic_CustomLogicWeaponEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434629c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"Civilian");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Unarmed");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_18434629c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blade",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSS",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"APG",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Thunderspear",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Unarmed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Civilian",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicWeaponEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Blade>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Blade_g____getter_2_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x181ffc620

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Blade_g____getter_2_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345696 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184345696 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Blade;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__AHSS>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__AHSS_g____getter_3_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x181ffb8f0

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__AHSS_g____getter_3_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346396 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184346396 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__APG>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__APG_g____getter_4_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x181ffb940

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__APG_g____getter_4_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346397 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184346397 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->APG;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Thunderspear>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_5_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x181ffec80

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Thunderspear_g____getter_5_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345697 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184345697 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Unarmed>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Unarmed_g____getter_6_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x181ffeed0

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Unarmed_g____getter_6_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346398 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184346398 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed;
}


// CustomLogic.CustomLogicWeaponEnum.Bindings$$<__CreatePropertyBinding__Civilian>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Civilian_g____getter_7_0 (CustomLogic_CustomLogicWeaponEnum_o* __i, const MethodInfo* method);
// 0x181ffc8d0

Il2CppObject *
CustomLogic_CustomLogicWeaponEnum_Bindings_____CreatePropertyBinding__Civilian_g____getter_7_0
          (CustomLogic_CustomLogicWeaponEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346399 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184346399 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return (Il2CppObject *)TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian;
}


// CustomLogic.CustomLogicWeaponEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicWeaponEnum___ctor (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x182016520

void CustomLogic_CustomLogicWeaponEnum___ctor(CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434628c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434628c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicWeaponEnum$$get_Blade
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Blade (const MethodInfo* method);
// 0x182016610

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Blade(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434628d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_18434628d = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->Blade;
}


// CustomLogic.CustomLogicWeaponEnum$$get_AHSS
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_AHSS (const MethodInfo* method);
// 0x182016570

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_AHSS(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434628e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_18434628e = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->AHSS;
}


// CustomLogic.CustomLogicWeaponEnum$$get_APG
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_APG (const MethodInfo* method);
// 0x1820165c0

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_APG(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434628f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_18434628f = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->APG;
}


// CustomLogic.CustomLogicWeaponEnum$$get_Thunderspear
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Thunderspear (const MethodInfo* method);
// 0x1820166e0

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Thunderspear(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346290 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184346290 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->Thunderspear;
}


// CustomLogic.CustomLogicWeaponEnum$$get_Unarmed
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Unarmed (const MethodInfo* method);
// 0x182016730

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Unarmed(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346291 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184346291 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->Unarmed;
}


// CustomLogic.CustomLogicWeaponEnum$$get_Civilian
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_Civilian (const MethodInfo* method);
// 0x182016660

System_String_o * CustomLogic_CustomLogicWeaponEnum__get_Civilian(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346292 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    Il2CppMethodInitialized_184346292 = '\x01';
  }
  if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
  }
  return TypeInfo_GameManagers_HumanLoadout->static_fields->Civilian;
}


// CustomLogic.CustomLogicWeaponEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWeaponEnum__get_ClassName (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x1820166b0

System_String_o *
CustomLogic_CustomLogicWeaponEnum__get_ClassName
          (CustomLogic_CustomLogicWeaponEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346293 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponEnum");
    Il2CppMethodInitialized_184346293 = '\x01';
  }
  return "WeaponEnum";
}


// CustomLogic.CustomLogicWeaponEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_IsAbstract (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicWeaponEnum__get_IsAbstract(CustomLogic_CustomLogicWeaponEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicWeaponEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_IsStatic (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicWeaponEnum__get_IsStatic(CustomLogic_CustomLogicWeaponEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicWeaponEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWeaponEnum__get_InheritBaseMembers (CustomLogic_CustomLogicWeaponEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicWeaponEnum__get_InheritBaseMembers(CustomLogic_CustomLogicWeaponEnum_o* __this, MethodInfo* method)

{
  return true;
}


