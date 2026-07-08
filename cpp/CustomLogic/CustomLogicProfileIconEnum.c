// Type: CustomLogic.CustomLogicProfileIconEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicProfileIconEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicProfileIconEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicProfileIconEnum_o* CustomLogic_CustomLogicProfileIconEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e83350

CustomLogic_CustomLogicProfileIconEnum_o *
CustomLogic_CustomLogicProfileIconEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703491 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicProfileIconEnum);
    DAT_05703491 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicProfileIconEnum);
      if (DAT_05703406 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703406 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicProfileIconEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicProfileIconEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicProfileIconEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicProfileIconEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e83470
// <decompile failed>

// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Acros1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Acros1 (const MethodInfo* method);
// 0x3e86650

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Acros1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703493 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Acros1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703493 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie1 (const MethodInfo* method);
// 0x3e866f0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703494 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Annie1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703494 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie2 (const MethodInfo* method);
// 0x3e86790

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703495 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Annie2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703495 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie3 (const MethodInfo* method);
// 0x3e86830

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703496 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Annie3_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703496 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie4 (const MethodInfo* method);
// 0x3e868d0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703497 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Annie4_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703497 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Annie5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie5 (const MethodInfo* method);
// 0x3e86970

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Annie5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703498 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Annie5_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703498 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Armin1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Armin1 (const MethodInfo* method);
// 0x3e86a10

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Armin1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703499 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Armin1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703499 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Bertholdt1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Bertholdt1 (const MethodInfo* method);
// 0x3e86ab0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Bertholdt1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570349a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Bertholdt1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570349a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Carula1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Carula1 (const MethodInfo* method);
// 0x3e86b50

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Carula1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570349b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Carula1_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570349b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Conny1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Conny1 (const MethodInfo* method);
// 0x3e86bf0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Conny1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570349c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Conny1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570349c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Conny2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Conny2 (const MethodInfo* method);
// 0x3e86c90

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Conny2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570349d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Conny2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570349d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Dakros1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Dakros1 (const MethodInfo* method);
// 0x3e86d30

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Dakros1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570349e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Dakros1_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570349e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren1 (const MethodInfo* method);
// 0x3e86dd0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570349f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570349f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren2 (const MethodInfo* method);
// 0x3e86e70

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034a0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034a0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren3 (const MethodInfo* method);
// 0x3e86f10

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034a1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren3_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034a1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren4 (const MethodInfo* method);
// 0x3e86fb0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren4_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034a2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren5 (const MethodInfo* method);
// 0x3e87050

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034a3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren5_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034a3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren6 (const MethodInfo* method);
// 0x3e870f0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren6_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034a4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren7 (const MethodInfo* method);
// 0x3e87190

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren7(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034a5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren7_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034a5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Eren8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren8 (const MethodInfo* method);
// 0x3e87230

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Eren8(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Eren8_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034a6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin1 (const MethodInfo* method);
// 0x3e872d0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034a7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin2 (const MethodInfo* method);
// 0x3e87370

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034a8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin3 (const MethodInfo* method);
// 0x3e87410

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034a9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin3_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034a9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin4 (const MethodInfo* method);
// 0x3e874b0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034aa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin4_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034aa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin5 (const MethodInfo* method);
// 0x3e87550

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin5_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ab = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin6 (const MethodInfo* method);
// 0x3e875f0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin6_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ac = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin7 (const MethodInfo* method);
// 0x3e87690

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin7(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin7_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ad = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin8 (const MethodInfo* method);
// 0x3e87730

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin8(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin8_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ae = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin9
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin9 (const MethodInfo* method);
// 0x3e877d0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin9(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034af == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin9_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034af = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin10
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin10 (const MethodInfo* method);
// 0x3e87870

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin10
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034b0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin10_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034b0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin11
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin11 (const MethodInfo* method);
// 0x3e87910

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin11
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin11_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034b1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Erwin12
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin12 (const MethodInfo* method);
// 0x3e879b0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Erwin12
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034b2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Erwin12_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034b2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Etika1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Etika1 (const MethodInfo* method);
// 0x3e87a50

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Etika1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Etika1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034b3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Falco1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Falco1 (const MethodInfo* method);
// 0x3e87af0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Falco1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Falco1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034b4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Fenglee1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Fenglee1 (const MethodInfo* method);
// 0x3e87b90

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Fenglee1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Fenglee1_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034b5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Founding1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Founding1 (const MethodInfo* method);
// 0x3e87c30

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Founding1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Founding1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034b6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Frieda1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Frieda1 (const MethodInfo* method);
// 0x3e87cd0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Frieda1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Frieda1_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034b7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Frieda2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Frieda2 (const MethodInfo* method);
// 0x3e87d70

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Frieda2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Frieda2_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034b8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Gabi1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gabi1 (const MethodInfo* method);
// 0x3e87e10

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gabi1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034b9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Gabi1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034b9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Gisketch1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gisketch1 (const MethodInfo* method);
// 0x3e87eb0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gisketch1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Gisketch1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ba = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Gunther1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gunther1 (const MethodInfo* method);
// 0x3e87f50

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Gunther1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Gunther1_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034bb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hange1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hange1 (const MethodInfo* method);
// 0x3e87ff0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hange1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034bc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hange1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034bc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hannes1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hannes1 (const MethodInfo* method);
// 0x3e88090

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hannes1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hannes1_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034bd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hannes2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hannes2 (const MethodInfo* method);
// 0x3e88130

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hannes2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034be == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hannes2_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034be = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia1 (const MethodInfo* method);
// 0x3e881d0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Historia1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034bf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia2 (const MethodInfo* method);
// 0x3e88270

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Historia2_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034c0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia3 (const MethodInfo* method);
// 0x3e88310

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034c1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Historia3_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034c1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia4 (const MethodInfo* method);
// 0x3e883b0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia4
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034c2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Historia4_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034c2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia5 (const MethodInfo* method);
// 0x3e88450

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia5
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034c3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Historia5_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034c3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia6 (const MethodInfo* method);
// 0x3e884f0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia6
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Historia6_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034c4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia7 (const MethodInfo* method);
// 0x3e88590

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia7
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034c5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Historia7_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034c5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Historia8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia8 (const MethodInfo* method);
// 0x3e88630

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Historia8
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Historia8_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034c6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Hitch1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hitch1 (const MethodInfo* method);
// 0x3e886d0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Hitch1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hitch1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034c7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ian1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ian1 (const MethodInfo* method);
// 0x3e88770

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ian1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ian1_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034c8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ilse1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ilse1 (const MethodInfo* method);
// 0x3e88810

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ilse1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034c9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ilse1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034c9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Isabel1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Isabel1 (const MethodInfo* method);
// 0x3e888b0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Isabel1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Isabel1_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ca = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Jean1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Jean1 (const MethodInfo* method);
// 0x3e88950

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Jean1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034cb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Jean1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034cb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Keith1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith1 (const MethodInfo* method);
// 0x3e889f0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034cc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Keith1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034cc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Keith2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith2 (const MethodInfo* method);
// 0x3e88a90

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034cd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Keith2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034cd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Keith3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith3 (const MethodInfo* method);
// 0x3e88b30

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Keith3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Keith3_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ce = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Kenny1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Kenny1 (const MethodInfo* method);
// 0x3e88bd0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Kenny1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034cf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kenny1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034cf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Kenny2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Kenny2 (const MethodInfo* method);
// 0x3e88c70

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Kenny2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Kenny2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034d0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi1 (const MethodInfo* method);
// 0x3e88d10

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034d1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034d1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi2 (const MethodInfo* method);
// 0x3e88db0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034d2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034d2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi3 (const MethodInfo* method);
// 0x3e88e50

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034d3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi3_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034d3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi4 (const MethodInfo* method);
// 0x3e88ef0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi4_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034d4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi5 (const MethodInfo* method);
// 0x3e88f90

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi5_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034d5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi6 (const MethodInfo* method);
// 0x3e89030

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034d6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi6_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034d6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi7 (const MethodInfo* method);
// 0x3e890d0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi7(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi7_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034d7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi8 (const MethodInfo* method);
// 0x3e89170

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi8(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi8_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034d8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi9
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi9 (const MethodInfo* method);
// 0x3e89210

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi9(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi9_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034d9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi10
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi10 (const MethodInfo* method);
// 0x3e892b0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi10(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi10_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034da = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi11
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi11 (const MethodInfo* method);
// 0x3e89350

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi11(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi11_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034db = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi12
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi12 (const MethodInfo* method);
// 0x3e893f0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi12(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi12_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034dc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi13
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi13 (const MethodInfo* method);
// 0x3e89490

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi13(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi13_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034dd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi14
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi14 (const MethodInfo* method);
// 0x3e89530

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi14(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034de == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi14_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034de = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi15
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi15 (const MethodInfo* method);
// 0x3e895d0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi15(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi15_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034df = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi16
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi16 (const MethodInfo* method);
// 0x3e89670

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi16(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi16_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034e0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Levi17
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi17 (const MethodInfo* method);
// 0x3e89710

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Levi17(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Levi17_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034e1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa1 (const MethodInfo* method);
// 0x3e897b0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Mikasa1_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034e2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa2 (const MethodInfo* method);
// 0x3e89850

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Mikasa2_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034e3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa3 (const MethodInfo* method);
// 0x3e898f0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034e4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Mikasa3_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034e4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa4 (const MethodInfo* method);
// 0x3e89990

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa4
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034e5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Mikasa4_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034e5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa5 (const MethodInfo* method);
// 0x3e89a30

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa5
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Mikasa5_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034e6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa6 (const MethodInfo* method);
// 0x3e89ad0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa6
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Mikasa6_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034e7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mikasa7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa7 (const MethodInfo* method);
// 0x3e89b70

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mikasa7
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Mikasa7_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034e8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Mike1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mike1 (const MethodInfo* method);
// 0x3e89c10

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Mike1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Mike1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034e9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Nanaba1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Nanaba1 (const MethodInfo* method);
// 0x3e89cb0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Nanaba1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Nanaba1_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ea = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Nick1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Nick1 (const MethodInfo* method);
// 0x3e89d50

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Nick1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Nick1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034eb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Petra1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Petra1 (const MethodInfo* method);
// 0x3e89df0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Petra1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Petra1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ec = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Petra2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Petra2 (const MethodInfo* method);
// 0x3e89e90

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Petra2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Petra2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ed = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Pieck1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pieck1 (const MethodInfo* method);
// 0x3e89f30

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pieck1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Pieck1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Pieck2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pieck2 (const MethodInfo* method);
// 0x3e89fd0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pieck2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Pieck2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Pixis1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pixis1 (const MethodInfo* method);
// 0x3e8a070

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Pixis1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034f0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Pixis1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034f0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Reiner1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Reiner1 (const MethodInfo* method);
// 0x3e8a110

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Reiner1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Reiner1_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034f1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Revolution1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Revolution1 (const MethodInfo* method);
// 0x3e8a1b0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Revolution1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034f2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Revolution1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034f2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Rico1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Rico1 (const MethodInfo* method);
// 0x3e8a250

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Rico1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034f3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rico1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034f3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Rico2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Rico2 (const MethodInfo* method);
// 0x3e8a2f0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Rico2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034f4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Rico2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034f4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ricecake1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ricecake1 (const MethodInfo* method);
// 0x3e8a390

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ricecake1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034f5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ricecake1_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034f5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha1 (const MethodInfo* method);
// 0x3e8a430

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034f6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Sasha1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034f6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha2 (const MethodInfo* method);
// 0x3e8a4d0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034f7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Sasha2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034f7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha3 (const MethodInfo* method);
// 0x3e8a570

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034f8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Sasha3_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034f8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Sasha4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha4 (const MethodInfo* method);
// 0x3e8a610

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Sasha4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Sasha4_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034f9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Uri1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Uri1 (const MethodInfo* method);
// 0x3e8a6b0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Uri1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034fa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Uri1_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034fa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Yelena1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena1 (const MethodInfo* method);
// 0x3e8a750

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena1
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034fb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Yelena1_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034fb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Yelena2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena2 (const MethodInfo* method);
// 0x3e8a7f0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena2
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034fc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Yelena2_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034fc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Yelena3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena3 (const MethodInfo* method);
// 0x3e8a890

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Yelena3
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034fd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Yelena3_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034fd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ymir1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir1 (const MethodInfo* method);
// 0x3e8a930

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034fe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ymir1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034fe = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ymir2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir2 (const MethodInfo* method);
// 0x3e8a9d0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_057034ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ymir2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_057034ff = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Ymir104
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir104 (const MethodInfo* method);
// 0x3e8aa70

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Ymir104
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703500 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ymir104_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703500 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Zeke1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Zeke1 (const MethodInfo* method);
// 0x3e8ab10

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Zeke1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703501 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Zeke1_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703501 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Zeke2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Zeke2 (const MethodInfo* method);
// 0x3e8abb0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Zeke2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703502 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Zeke2_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703502 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan1 (const MethodInfo* method);
// 0x3e8ac50

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan1(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703503 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan1_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703503 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan2 (const MethodInfo* method);
// 0x3e8acf0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan2(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703504 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan2_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703504 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan3 (const MethodInfo* method);
// 0x3e8ad90

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan3(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703505 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan3_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703505 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan4 (const MethodInfo* method);
// 0x3e8ae30

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan4(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703506 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan4_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703506 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan5 (const MethodInfo* method);
// 0x3e8aed0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan5(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703507 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan5_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703507 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan6 (const MethodInfo* method);
// 0x3e8af70

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan6(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703508 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan6_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703508 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan7 (const MethodInfo* method);
// 0x3e8b010

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan7(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703509 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan7_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703509 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan8 (const MethodInfo* method);
// 0x3e8b0b0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan8(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570350a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan8_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570350a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan9
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan9 (const MethodInfo* method);
// 0x3e8b150

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan9(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570350b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan9_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570350b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan10
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan10 (const MethodInfo* method);
// 0x3e8b1f0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan10
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570350c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan10_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570350c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan11
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan11 (const MethodInfo* method);
// 0x3e8b290

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan11
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570350d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan11_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570350d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan12
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan12 (const MethodInfo* method);
// 0x3e8b330

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan12
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570350e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan12_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570350e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan13
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan13 (const MethodInfo* method);
// 0x3e8b3d0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan13
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570350f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan13_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570350f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan14
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan14 (const MethodInfo* method);
// 0x3e8b470

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan14
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703510 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan14_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703510 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan15
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan15 (const MethodInfo* method);
// 0x3e8b510

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan15
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703511 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan15_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703511 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan16
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan16 (const MethodInfo* method);
// 0x3e8b5b0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan16
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703512 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan16_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703512 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__Titan17
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan17 (const MethodInfo* method);
// 0x3e8b650

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__Titan17
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703513 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titan17_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703513 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiAngry
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiAngry (const MethodInfo* method);
// 0x3e8b6f0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiAngry
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703514 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmojiAngry_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703514 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiAnnoyed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiAnnoyed (const MethodInfo* method);
// 0x3e8b790

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiAnnoyed
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703515 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmojiAnnoyed_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703515 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiCool
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiCool (const MethodInfo* method);
// 0x3e8b830

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiCool
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703516 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmojiCool_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703516 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiCrying
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiCrying (const MethodInfo* method);
// 0x3e8b8d0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiCrying
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703517 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmojiCrying_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703517 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiLove
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiLove (const MethodInfo* method);
// 0x3e8b970

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiLove
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703518 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmojiLove_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703518 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiShocked
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiShocked (const MethodInfo* method);
// 0x3e8ba10

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiShocked
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_05703519 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmojiShocked_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_05703519 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiSmile
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiSmile (const MethodInfo* method);
// 0x3e8bab0

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiSmile
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570351a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmojiSmile_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570351a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$__CreatePropertyBinding__EmojiThumbsUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o* CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiThumbsUp (const MethodInfo* method);
// 0x3e8bb50

CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *
CustomLogic_CustomLogicProfileIconEnum_Bindings____CreatePropertyBinding__EmojiThumbsUp
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *__this;
  
  if (DAT_0570351b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__EmojiThumbsUp_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicProfileIconEnum__object);
    DAT_0570351b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicProfileIconEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicProfileIconEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicProfileIconEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicProfileIconEnum);
  return __this;
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicProfileIconEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e8bbf0

void CustomLogic_CustomLogicProfileIconEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_0570351c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Mikasa3");
    il2cpp_init_method_metadata(&"Historia2");
    il2cpp_init_method_metadata(&"Falco1");
    il2cpp_init_method_metadata(&"Eren3");
    il2cpp_init_method_metadata(&"Yelena3");
    il2cpp_init_method_metadata(&"EmojiCrying");
    il2cpp_init_method_metadata(&"Kenny2");
    il2cpp_init_method_metadata(&"Hitch1");
    il2cpp_init_method_metadata(&"Armin1");
    il2cpp_init_method_metadata(&"Dakros1");
    il2cpp_init_method_metadata(&"Titan6");
    il2cpp_init_method_metadata(&"Levi15");
    il2cpp_init_method_metadata(&"Ymir104");
    il2cpp_init_method_metadata(&"Titan2");
    il2cpp_init_method_metadata(&"Historia3");
    il2cpp_init_method_metadata(&"Levi8");
    il2cpp_init_method_metadata(&"Keith2");
    il2cpp_init_method_metadata(&"Gunther1");
    il2cpp_init_method_metadata(&"Titan17");
    il2cpp_init_method_metadata(&"Titan14");
    il2cpp_init_method_metadata(&"Erwin3");
    il2cpp_init_method_metadata(&"Keith1");
    il2cpp_init_method_metadata(&"Sasha1");
    il2cpp_init_method_metadata(&"Gisketch1");
    il2cpp_init_method_metadata(&"EmojiSmile");
    il2cpp_init_method_metadata(&"Pixis1");
    il2cpp_init_method_metadata(&"Titan15");
    il2cpp_init_method_metadata(&"Levi4");
    il2cpp_init_method_metadata(&"Annie1");
    il2cpp_init_method_metadata(&"Eren8");
    il2cpp_init_method_metadata(&"Eren5");
    il2cpp_init_method_metadata(&"Kenny1");
    il2cpp_init_method_metadata(&"Historia7");
    il2cpp_init_method_metadata(&"Revolution1");
    il2cpp_init_method_metadata(&"Levi3");
    il2cpp_init_method_metadata(&"Ricecake1");
    il2cpp_init_method_metadata(&"Titan11");
    il2cpp_init_method_metadata(&"Pieck2");
    il2cpp_init_method_metadata(&"Titan1");
    il2cpp_init_method_metadata(&"Titan13");
    il2cpp_init_method_metadata(&"Titan16");
    il2cpp_init_method_metadata(&"Titan3");
    il2cpp_init_method_metadata(&"Levi1");
    il2cpp_init_method_metadata(&"Yelena1");
    il2cpp_init_method_metadata(&"Historia8");
    il2cpp_init_method_metadata(&"EmojiThumbsUp");
    il2cpp_init_method_metadata(&"Conny1");
    il2cpp_init_method_metadata(&"Hannes1");
    il2cpp_init_method_metadata(&"Gabi1");
    il2cpp_init_method_metadata(&"Zeke2");
    il2cpp_init_method_metadata(&"Eren2");
    il2cpp_init_method_metadata(&"Levi17");
    il2cpp_init_method_metadata(&"Sasha2");
    il2cpp_init_method_metadata(&"Levi2");
    il2cpp_init_method_metadata(&"Annie3");
    il2cpp_init_method_metadata(&"Uri1");
    il2cpp_init_method_metadata(&"Eren4");
    il2cpp_init_method_metadata(&"Titan5");
    il2cpp_init_method_metadata(&"Annie2");
    il2cpp_init_method_metadata(&"Levi10");
    il2cpp_init_method_metadata(&"Mikasa2");
    il2cpp_init_method_metadata(&"Hannes2");
    il2cpp_init_method_metadata(&"EmojiCool");
    il2cpp_init_method_metadata(&"Eren7");
    il2cpp_init_method_metadata(&"Erwin12");
    il2cpp_init_method_metadata(&"Keith3");
    il2cpp_init_method_metadata(&"Erwin2");
    il2cpp_init_method_metadata(&"Rico1");
    il2cpp_init_method_metadata(&"Frieda1");
    il2cpp_init_method_metadata(&"Levi7");
    il2cpp_init_method_metadata(&"Nanaba1");
    il2cpp_init_method_metadata(&"Jean1");
    il2cpp_init_method_metadata(&"Pieck1");
    il2cpp_init_method_metadata(&"Titan7");
    il2cpp_init_method_metadata(&"Conny2");
    il2cpp_init_method_metadata(&"Ilse1");
    il2cpp_init_method_metadata(&"EmojiShocked");
    il2cpp_init_method_metadata(&"Carula1");
    il2cpp_init_method_metadata(&"Bertholdt1");
    il2cpp_init_method_metadata(&"Eren1");
    il2cpp_init_method_metadata(&"Levi13");
    il2cpp_init_method_metadata(&"Titan10");
    il2cpp_init_method_metadata(&"Erwin10");
    il2cpp_init_method_metadata(&"Levi11");
    il2cpp_init_method_metadata(&"Mikasa1");
    il2cpp_init_method_metadata(&"Erwin11");
    il2cpp_init_method_metadata(&"Mikasa5");
    il2cpp_init_method_metadata(&"Erwin9");
    il2cpp_init_method_metadata(&"Eren6");
    il2cpp_init_method_metadata(&"Reiner1");
    il2cpp_init_method_metadata(&"Annie5");
    il2cpp_init_method_metadata(&"Acros1");
    il2cpp_init_method_metadata(&"Hange1");
    il2cpp_init_method_metadata(&"Ian1");
    il2cpp_init_method_metadata(&"Historia6");
    il2cpp_init_method_metadata(&"Zeke1");
    il2cpp_init_method_metadata(&"Erwin4");
    il2cpp_init_method_metadata(&"Titan4");
    il2cpp_init_method_metadata(&"Levi5");
    il2cpp_init_method_metadata(&"Frieda2");
    il2cpp_init_method_metadata(&"Petra2");
    il2cpp_init_method_metadata(&"Levi16");
    il2cpp_init_method_metadata(&"Yelena2");
    il2cpp_init_method_metadata(&"Mike1");
    il2cpp_init_method_metadata(&"Erwin6");
    il2cpp_init_method_metadata(&"Erwin7");
    il2cpp_init_method_metadata(&"EmojiAngry");
    il2cpp_init_method_metadata(&"Sasha3");
    il2cpp_init_method_metadata(&"EmojiAnnoyed");
    il2cpp_init_method_metadata(&"Ymir2");
    il2cpp_init_method_metadata(&"Titan9");
    il2cpp_init_method_metadata(&"Petra1");
    il2cpp_init_method_metadata(&"Fenglee1");
    il2cpp_init_method_metadata(&"Levi12");
    il2cpp_init_method_metadata(&"Annie4");
    il2cpp_init_method_metadata(&"Levi6");
    il2cpp_init_method_metadata(&"Mikasa6");
    il2cpp_init_method_metadata(&"Ymir1");
    il2cpp_init_method_metadata(&"Rico2");
    il2cpp_init_method_metadata(&"Sasha4");
    il2cpp_init_method_metadata(&"Historia5");
    il2cpp_init_method_metadata(&"Isabel1");
    il2cpp_init_method_metadata(&"EmojiLove");
    il2cpp_init_method_metadata(&"Historia4");
    il2cpp_init_method_metadata(&"Etika1");
    il2cpp_init_method_metadata(&"Erwin8");
    il2cpp_init_method_metadata(&"Levi14");
    il2cpp_init_method_metadata(&"Mikasa4");
    il2cpp_init_method_metadata(&"Nick1");
    il2cpp_init_method_metadata(&"Founding1");
    il2cpp_init_method_metadata(&"Historia1");
    il2cpp_init_method_metadata(&"Erwin1");
    il2cpp_init_method_metadata(&"Erwin5");
    il2cpp_init_method_metadata(&"Titan8");
    il2cpp_init_method_metadata(&"Titan12");
    il2cpp_init_method_metadata(&"Mikasa7");
    il2cpp_init_method_metadata(&"Levi9");
    DAT_0570351c = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Acros1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Annie1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Annie2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Annie3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Annie4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Annie5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Armin1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Bertholdt1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Carula1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Conny1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Conny2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Dakros1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Eren1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Eren2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Eren3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Eren4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Eren5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Eren6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Eren7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Eren8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin9",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin10",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin11",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Erwin12",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Etika1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Falco1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Fenglee1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Founding1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Frieda1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Frieda2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Gabi1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Gisketch1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Gunther1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hange1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hannes1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hannes2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Historia1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Historia2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Historia3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Historia4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Historia5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Historia6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Historia7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Historia8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hitch1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Ian1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Ilse1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Isabel1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Jean1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Keith1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Keith2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Keith3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Kenny1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Kenny2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi9",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi10",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi11",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi12",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi13",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi14",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi15",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi16",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Levi17",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Mikasa1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Mikasa2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Mikasa3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Mikasa4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Mikasa5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Mikasa6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Mikasa7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Mike1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Nanaba1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Nick1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Petra1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Petra2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Pieck1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Pieck2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Pixis1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Reiner1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Revolution1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rico1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Rico2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Ricecake1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Sasha1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Sasha2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Sasha3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Sasha4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Uri1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Yelena1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Yelena2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Yelena3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Ymir1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Ymir2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Ymir104",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Zeke1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Zeke2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan1",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan4",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan5",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan6",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan7",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan8",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan9",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan10",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan11",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan12",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan13",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan14",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan15",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan16",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titan17",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmojiAngry",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmojiAnnoyed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmojiCool",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmojiCrying",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmojiLove",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmojiShocked",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmojiSmile",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EmojiThumbsUp",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Acros1>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Acros1_g____getter_2_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8ce50

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Acros1>g____getter_2_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703407 == '\0') {
    il2cpp_init_method_metadata(&"Acros1");
    DAT_05703407 = '\x01';
  }
  return "Acros1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie1>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie1_g____getter_3_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8ce80

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Annie1>g____getter_3_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703408 == '\0') {
    il2cpp_init_method_metadata(&"Annie1");
    DAT_05703408 = '\x01';
  }
  return "Annie1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie2>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie2_g____getter_4_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8ceb0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Annie2>g____getter_4_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703409 == '\0') {
    il2cpp_init_method_metadata(&"Annie2");
    DAT_05703409 = '\x01';
  }
  return "Annie2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie3>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie3_g____getter_5_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8cee0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Annie3>g____getter_5_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570340a == '\0') {
    il2cpp_init_method_metadata(&"Annie3");
    DAT_0570340a = '\x01';
  }
  return "Annie3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie4>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie4_g____getter_6_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8cf10

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Annie4>g____getter_6_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570340b == '\0') {
    il2cpp_init_method_metadata(&"Annie4");
    DAT_0570340b = '\x01';
  }
  return "Annie4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Annie5>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Annie5_g____getter_7_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8cf40

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Annie5>g____getter_7_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570340c == '\0') {
    il2cpp_init_method_metadata(&"Annie5");
    DAT_0570340c = '\x01';
  }
  return "Annie5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Armin1>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Armin1_g____getter_8_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8cf70

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Armin1>g____getter_8_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570340d == '\0') {
    il2cpp_init_method_metadata(&"Armin1");
    DAT_0570340d = '\x01';
  }
  return "Armin1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Bertholdt1>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Bertholdt1_g____getter_9_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8cfa0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Bertholdt1>g____getter_9_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570340e == '\0') {
    il2cpp_init_method_metadata(&"Bertholdt1");
    DAT_0570340e = '\x01';
  }
  return "Bertholdt1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Carula1>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Carula1_g____getter_10_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8cfd0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Carula1>g____getter_10_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570340f == '\0') {
    il2cpp_init_method_metadata(&"Carula1");
    DAT_0570340f = '\x01';
  }
  return "Carula1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Conny1>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Conny1_g____getter_11_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d000

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Conny1>g____getter_11_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703410 == '\0') {
    il2cpp_init_method_metadata(&"Conny1");
    DAT_05703410 = '\x01';
  }
  return "Conny1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Conny2>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Conny2_g____getter_12_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d030

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Conny2>g____getter_12_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703411 == '\0') {
    il2cpp_init_method_metadata(&"Conny2");
    DAT_05703411 = '\x01';
  }
  return "Conny2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Dakros1>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Dakros1_g____getter_13_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d060

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Dakros1>g____getter_13_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703412 == '\0') {
    il2cpp_init_method_metadata(&"Dakros1");
    DAT_05703412 = '\x01';
  }
  return "Dakros1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren1>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren1_g____getter_14_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d090

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Eren1>g____getter_14_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703413 == '\0') {
    il2cpp_init_method_metadata(&"Eren1");
    DAT_05703413 = '\x01';
  }
  return "Eren1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren2>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren2_g____getter_15_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d0c0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Eren2>g____getter_15_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703414 == '\0') {
    il2cpp_init_method_metadata(&"Eren2");
    DAT_05703414 = '\x01';
  }
  return "Eren2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren3>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren3_g____getter_16_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d0f0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Eren3>g____getter_16_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703415 == '\0') {
    il2cpp_init_method_metadata(&"Eren3");
    DAT_05703415 = '\x01';
  }
  return "Eren3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren4>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren4_g____getter_17_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d120

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Eren4>g____getter_17_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703416 == '\0') {
    il2cpp_init_method_metadata(&"Eren4");
    DAT_05703416 = '\x01';
  }
  return "Eren4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren5>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren5_g____getter_18_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d150

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Eren5>g____getter_18_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703417 == '\0') {
    il2cpp_init_method_metadata(&"Eren5");
    DAT_05703417 = '\x01';
  }
  return "Eren5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren6>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren6_g____getter_19_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d180

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Eren6>g____getter_19_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703418 == '\0') {
    il2cpp_init_method_metadata(&"Eren6");
    DAT_05703418 = '\x01';
  }
  return "Eren6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren7>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren7_g____getter_20_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d1b0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Eren7>g____getter_20_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703419 == '\0') {
    il2cpp_init_method_metadata(&"Eren7");
    DAT_05703419 = '\x01';
  }
  return "Eren7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Eren8>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Eren8_g____getter_21_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d1e0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Eren8>g____getter_21_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570341a == '\0') {
    il2cpp_init_method_metadata(&"Eren8");
    DAT_0570341a = '\x01';
  }
  return "Eren8";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin1>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin1_g____getter_22_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d210

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin1>g____getter_22_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570341b == '\0') {
    il2cpp_init_method_metadata(&"Erwin1");
    DAT_0570341b = '\x01';
  }
  return "Erwin1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin2>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin2_g____getter_23_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d240

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin2>g____getter_23_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570341c == '\0') {
    il2cpp_init_method_metadata(&"Erwin2");
    DAT_0570341c = '\x01';
  }
  return "Erwin2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin3>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin3_g____getter_24_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d270

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin3>g____getter_24_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570341d == '\0') {
    il2cpp_init_method_metadata(&"Erwin3");
    DAT_0570341d = '\x01';
  }
  return "Erwin3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin4>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin4_g____getter_25_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d2a0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin4>g____getter_25_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570341e == '\0') {
    il2cpp_init_method_metadata(&"Erwin4");
    DAT_0570341e = '\x01';
  }
  return "Erwin4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin5>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin5_g____getter_26_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d2d0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin5>g____getter_26_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570341f == '\0') {
    il2cpp_init_method_metadata(&"Erwin5");
    DAT_0570341f = '\x01';
  }
  return "Erwin5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin6>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin6_g____getter_27_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d300

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin6>g____getter_27_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703420 == '\0') {
    il2cpp_init_method_metadata(&"Erwin6");
    DAT_05703420 = '\x01';
  }
  return "Erwin6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin7>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin7_g____getter_28_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d330

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin7>g____getter_28_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703421 == '\0') {
    il2cpp_init_method_metadata(&"Erwin7");
    DAT_05703421 = '\x01';
  }
  return "Erwin7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin8>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin8_g____getter_29_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d360

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin8>g____getter_29_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703422 == '\0') {
    il2cpp_init_method_metadata(&"Erwin8");
    DAT_05703422 = '\x01';
  }
  return "Erwin8";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin9>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin9_g____getter_30_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d390

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin9>g____getter_30_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703423 == '\0') {
    il2cpp_init_method_metadata(&"Erwin9");
    DAT_05703423 = '\x01';
  }
  return "Erwin9";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin10>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin10_g____getter_31_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d3c0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin10>g____getter_31_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703424 == '\0') {
    il2cpp_init_method_metadata(&"Erwin10");
    DAT_05703424 = '\x01';
  }
  return "Erwin10";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin11>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin11_g____getter_32_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d3f0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin11>g____getter_32_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703425 == '\0') {
    il2cpp_init_method_metadata(&"Erwin11");
    DAT_05703425 = '\x01';
  }
  return "Erwin11";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Erwin12>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Erwin12_g____getter_33_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d420

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Erwin12>g____getter_33_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703426 == '\0') {
    il2cpp_init_method_metadata(&"Erwin12");
    DAT_05703426 = '\x01';
  }
  return "Erwin12";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Etika1>g____getter|34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Etika1_g____getter_34_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d450

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Etika1>g____getter_34_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703427 == '\0') {
    il2cpp_init_method_metadata(&"Etika1");
    DAT_05703427 = '\x01';
  }
  return "Etika1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Falco1>g____getter|35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Falco1_g____getter_35_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d480

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Falco1>g____getter_35_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703428 == '\0') {
    il2cpp_init_method_metadata(&"Falco1");
    DAT_05703428 = '\x01';
  }
  return "Falco1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Fenglee1>g____getter|36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Fenglee1_g____getter_36_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d4b0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Fenglee1>g____getter_36_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703429 == '\0') {
    il2cpp_init_method_metadata(&"Fenglee1");
    DAT_05703429 = '\x01';
  }
  return "Fenglee1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Founding1>g____getter|37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Founding1_g____getter_37_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d4e0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Founding1>g____getter_37_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570342a == '\0') {
    il2cpp_init_method_metadata(&"Founding1");
    DAT_0570342a = '\x01';
  }
  return "Founding1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Frieda1>g____getter|38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Frieda1_g____getter_38_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d510

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Frieda1>g____getter_38_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570342b == '\0') {
    il2cpp_init_method_metadata(&"Frieda1");
    DAT_0570342b = '\x01';
  }
  return "Frieda1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Frieda2>g____getter|39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Frieda2_g____getter_39_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d540

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Frieda2>g____getter_39_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570342c == '\0') {
    il2cpp_init_method_metadata(&"Frieda2");
    DAT_0570342c = '\x01';
  }
  return "Frieda2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Gabi1>g____getter|40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Gabi1_g____getter_40_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d570

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Gabi1>g____getter_40_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570342d == '\0') {
    il2cpp_init_method_metadata(&"Gabi1");
    DAT_0570342d = '\x01';
  }
  return "Gabi1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Gisketch1>g____getter|41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Gisketch1_g____getter_41_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d5a0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Gisketch1>g____getter_41_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570342e == '\0') {
    il2cpp_init_method_metadata(&"Gisketch1");
    DAT_0570342e = '\x01';
  }
  return "Gisketch1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Gunther1>g____getter|42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Gunther1_g____getter_42_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d5d0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Gunther1>g____getter_42_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570342f == '\0') {
    il2cpp_init_method_metadata(&"Gunther1");
    DAT_0570342f = '\x01';
  }
  return "Gunther1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hange1>g____getter|43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hange1_g____getter_43_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d600

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Hange1>g____getter_43_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703430 == '\0') {
    il2cpp_init_method_metadata(&"Hange1");
    DAT_05703430 = '\x01';
  }
  return "Hange1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hannes1>g____getter|44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hannes1_g____getter_44_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d630

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Hannes1>g____getter_44_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703431 == '\0') {
    il2cpp_init_method_metadata(&"Hannes1");
    DAT_05703431 = '\x01';
  }
  return "Hannes1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hannes2>g____getter|45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hannes2_g____getter_45_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d660

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Hannes2>g____getter_45_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703432 == '\0') {
    il2cpp_init_method_metadata(&"Hannes2");
    DAT_05703432 = '\x01';
  }
  return "Hannes2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia1>g____getter|46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia1_g____getter_46_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d690

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Historia1>g____getter_46_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703433 == '\0') {
    il2cpp_init_method_metadata(&"Historia1");
    DAT_05703433 = '\x01';
  }
  return "Historia1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia2>g____getter|47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia2_g____getter_47_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d6c0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Historia2>g____getter_47_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703434 == '\0') {
    il2cpp_init_method_metadata(&"Historia2");
    DAT_05703434 = '\x01';
  }
  return "Historia2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia3>g____getter|48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia3_g____getter_48_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d6f0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Historia3>g____getter_48_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703435 == '\0') {
    il2cpp_init_method_metadata(&"Historia3");
    DAT_05703435 = '\x01';
  }
  return "Historia3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia4>g____getter|49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia4_g____getter_49_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d720

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Historia4>g____getter_49_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703436 == '\0') {
    il2cpp_init_method_metadata(&"Historia4");
    DAT_05703436 = '\x01';
  }
  return "Historia4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia5>g____getter|50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia5_g____getter_50_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d750

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Historia5>g____getter_50_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703437 == '\0') {
    il2cpp_init_method_metadata(&"Historia5");
    DAT_05703437 = '\x01';
  }
  return "Historia5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia6>g____getter|51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia6_g____getter_51_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d780

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Historia6>g____getter_51_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703438 == '\0') {
    il2cpp_init_method_metadata(&"Historia6");
    DAT_05703438 = '\x01';
  }
  return "Historia6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia7>g____getter|52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia7_g____getter_52_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d7b0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Historia7>g____getter_52_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703439 == '\0') {
    il2cpp_init_method_metadata(&"Historia7");
    DAT_05703439 = '\x01';
  }
  return "Historia7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Historia8>g____getter|53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Historia8_g____getter_53_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d7e0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Historia8>g____getter_53_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570343a == '\0') {
    il2cpp_init_method_metadata(&"Historia8");
    DAT_0570343a = '\x01';
  }
  return "Historia8";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Hitch1>g____getter|54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Hitch1_g____getter_54_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d810

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Hitch1>g____getter_54_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570343b == '\0') {
    il2cpp_init_method_metadata(&"Hitch1");
    DAT_0570343b = '\x01';
  }
  return "Hitch1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ian1>g____getter|55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ian1_g____getter_55_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d840

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Ian1>g____getter_55_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570343c == '\0') {
    il2cpp_init_method_metadata(&"Ian1");
    DAT_0570343c = '\x01';
  }
  return "Ian1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ilse1>g____getter|56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ilse1_g____getter_56_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d870

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Ilse1>g____getter_56_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570343d == '\0') {
    il2cpp_init_method_metadata(&"Ilse1");
    DAT_0570343d = '\x01';
  }
  return "Ilse1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Isabel1>g____getter|57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Isabel1_g____getter_57_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d8a0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Isabel1>g____getter_57_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570343e == '\0') {
    il2cpp_init_method_metadata(&"Isabel1");
    DAT_0570343e = '\x01';
  }
  return "Isabel1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Jean1>g____getter|58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Jean1_g____getter_58_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d8d0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Jean1>g____getter_58_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570343f == '\0') {
    il2cpp_init_method_metadata(&"Jean1");
    DAT_0570343f = '\x01';
  }
  return "Jean1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Keith1>g____getter|59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Keith1_g____getter_59_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d900

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Keith1>g____getter_59_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703440 == '\0') {
    il2cpp_init_method_metadata(&"Keith1");
    DAT_05703440 = '\x01';
  }
  return "Keith1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Keith2>g____getter|60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Keith2_g____getter_60_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d930

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Keith2>g____getter_60_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703441 == '\0') {
    il2cpp_init_method_metadata(&"Keith2");
    DAT_05703441 = '\x01';
  }
  return "Keith2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Keith3>g____getter|61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Keith3_g____getter_61_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d960

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Keith3>g____getter_61_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703442 == '\0') {
    il2cpp_init_method_metadata(&"Keith3");
    DAT_05703442 = '\x01';
  }
  return "Keith3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Kenny1>g____getter|62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Kenny1_g____getter_62_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d990

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Kenny1>g____getter_62_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703443 == '\0') {
    il2cpp_init_method_metadata(&"Kenny1");
    DAT_05703443 = '\x01';
  }
  return "Kenny1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Kenny2>g____getter|63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Kenny2_g____getter_63_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d9c0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Kenny2>g____getter_63_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703444 == '\0') {
    il2cpp_init_method_metadata(&"Kenny2");
    DAT_05703444 = '\x01';
  }
  return "Kenny2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi1>g____getter|64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi1_g____getter_64_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8d9f0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi1>g____getter_64_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703445 == '\0') {
    il2cpp_init_method_metadata(&"Levi1");
    DAT_05703445 = '\x01';
  }
  return "Levi1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi2>g____getter|65_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi2_g____getter_65_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8da20

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi2>g____getter_65_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703446 == '\0') {
    il2cpp_init_method_metadata(&"Levi2");
    DAT_05703446 = '\x01';
  }
  return "Levi2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi3>g____getter|66_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi3_g____getter_66_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8da50

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi3>g____getter_66_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703447 == '\0') {
    il2cpp_init_method_metadata(&"Levi3");
    DAT_05703447 = '\x01';
  }
  return "Levi3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi4>g____getter|67_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi4_g____getter_67_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8da80

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi4>g____getter_67_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703448 == '\0') {
    il2cpp_init_method_metadata(&"Levi4");
    DAT_05703448 = '\x01';
  }
  return "Levi4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi5>g____getter|68_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi5_g____getter_68_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dab0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi5>g____getter_68_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703449 == '\0') {
    il2cpp_init_method_metadata(&"Levi5");
    DAT_05703449 = '\x01';
  }
  return "Levi5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi6>g____getter|69_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi6_g____getter_69_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dae0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi6>g____getter_69_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570344a == '\0') {
    il2cpp_init_method_metadata(&"Levi6");
    DAT_0570344a = '\x01';
  }
  return "Levi6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi7>g____getter|70_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi7_g____getter_70_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8db10

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi7>g____getter_70_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570344b == '\0') {
    il2cpp_init_method_metadata(&"Levi7");
    DAT_0570344b = '\x01';
  }
  return "Levi7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi8>g____getter|71_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi8_g____getter_71_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8db40

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi8>g____getter_71_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570344c == '\0') {
    il2cpp_init_method_metadata(&"Levi8");
    DAT_0570344c = '\x01';
  }
  return "Levi8";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi9>g____getter|72_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi9_g____getter_72_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8db70

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi9>g____getter_72_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570344d == '\0') {
    il2cpp_init_method_metadata(&"Levi9");
    DAT_0570344d = '\x01';
  }
  return "Levi9";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi10>g____getter|73_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi10_g____getter_73_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dba0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi10>g____getter_73_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570344e == '\0') {
    il2cpp_init_method_metadata(&"Levi10");
    DAT_0570344e = '\x01';
  }
  return "Levi10";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi11>g____getter|74_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi11_g____getter_74_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dbd0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi11>g____getter_74_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570344f == '\0') {
    il2cpp_init_method_metadata(&"Levi11");
    DAT_0570344f = '\x01';
  }
  return "Levi11";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi12>g____getter|75_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi12_g____getter_75_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dc00

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi12>g____getter_75_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703450 == '\0') {
    il2cpp_init_method_metadata(&"Levi12");
    DAT_05703450 = '\x01';
  }
  return "Levi12";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi13>g____getter|76_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi13_g____getter_76_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dc30

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi13>g____getter_76_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703451 == '\0') {
    il2cpp_init_method_metadata(&"Levi13");
    DAT_05703451 = '\x01';
  }
  return "Levi13";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi14>g____getter|77_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi14_g____getter_77_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dc60

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi14>g____getter_77_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703452 == '\0') {
    il2cpp_init_method_metadata(&"Levi14");
    DAT_05703452 = '\x01';
  }
  return "Levi14";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi15>g____getter|78_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi15_g____getter_78_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dc90

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi15>g____getter_78_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703453 == '\0') {
    il2cpp_init_method_metadata(&"Levi15");
    DAT_05703453 = '\x01';
  }
  return "Levi15";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi16>g____getter|79_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi16_g____getter_79_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dcc0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi16>g____getter_79_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703454 == '\0') {
    il2cpp_init_method_metadata(&"Levi16");
    DAT_05703454 = '\x01';
  }
  return "Levi16";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Levi17>g____getter|80_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Levi17_g____getter_80_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dcf0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Levi17>g____getter_80_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703455 == '\0') {
    il2cpp_init_method_metadata(&"Levi17");
    DAT_05703455 = '\x01';
  }
  return "Levi17";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa1>g____getter|81_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa1_g____getter_81_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dd20

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Mikasa1>g____getter_81_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703456 == '\0') {
    il2cpp_init_method_metadata(&"Mikasa1");
    DAT_05703456 = '\x01';
  }
  return "Mikasa1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa2>g____getter|82_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa2_g____getter_82_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dd50

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Mikasa2>g____getter_82_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703457 == '\0') {
    il2cpp_init_method_metadata(&"Mikasa2");
    DAT_05703457 = '\x01';
  }
  return "Mikasa2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa3>g____getter|83_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa3_g____getter_83_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dd80

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Mikasa3>g____getter_83_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703458 == '\0') {
    il2cpp_init_method_metadata(&"Mikasa3");
    DAT_05703458 = '\x01';
  }
  return "Mikasa3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa4>g____getter|84_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa4_g____getter_84_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8ddb0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Mikasa4>g____getter_84_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703459 == '\0') {
    il2cpp_init_method_metadata(&"Mikasa4");
    DAT_05703459 = '\x01';
  }
  return "Mikasa4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa5>g____getter|85_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa5_g____getter_85_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dde0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Mikasa5>g____getter_85_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570345a == '\0') {
    il2cpp_init_method_metadata(&"Mikasa5");
    DAT_0570345a = '\x01';
  }
  return "Mikasa5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa6>g____getter|86_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa6_g____getter_86_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8de10

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Mikasa6>g____getter_86_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570345b == '\0') {
    il2cpp_init_method_metadata(&"Mikasa6");
    DAT_0570345b = '\x01';
  }
  return "Mikasa6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mikasa7>g____getter|87_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mikasa7_g____getter_87_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8de40

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Mikasa7>g____getter_87_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570345c == '\0') {
    il2cpp_init_method_metadata(&"Mikasa7");
    DAT_0570345c = '\x01';
  }
  return "Mikasa7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Mike1>g____getter|88_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Mike1_g____getter_88_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8de70

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Mike1>g____getter_88_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570345d == '\0') {
    il2cpp_init_method_metadata(&"Mike1");
    DAT_0570345d = '\x01';
  }
  return "Mike1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Nanaba1>g____getter|89_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Nanaba1_g____getter_89_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dea0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Nanaba1>g____getter_89_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570345e == '\0') {
    il2cpp_init_method_metadata(&"Nanaba1");
    DAT_0570345e = '\x01';
  }
  return "Nanaba1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Nick1>g____getter|90_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Nick1_g____getter_90_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8ded0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Nick1>g____getter_90_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570345f == '\0') {
    il2cpp_init_method_metadata(&"Nick1");
    DAT_0570345f = '\x01';
  }
  return "Nick1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Petra1>g____getter|91_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Petra1_g____getter_91_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8df00

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Petra1>g____getter_91_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703460 == '\0') {
    il2cpp_init_method_metadata(&"Petra1");
    DAT_05703460 = '\x01';
  }
  return "Petra1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Petra2>g____getter|92_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Petra2_g____getter_92_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8df30

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Petra2>g____getter_92_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703461 == '\0') {
    il2cpp_init_method_metadata(&"Petra2");
    DAT_05703461 = '\x01';
  }
  return "Petra2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Pieck1>g____getter|93_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Pieck1_g____getter_93_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8df60

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Pieck1>g____getter_93_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703462 == '\0') {
    il2cpp_init_method_metadata(&"Pieck1");
    DAT_05703462 = '\x01';
  }
  return "Pieck1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Pieck2>g____getter|94_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Pieck2_g____getter_94_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8df90

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Pieck2>g____getter_94_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703463 == '\0') {
    il2cpp_init_method_metadata(&"Pieck2");
    DAT_05703463 = '\x01';
  }
  return "Pieck2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Pixis1>g____getter|95_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Pixis1_g____getter_95_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dfc0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Pixis1>g____getter_95_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703464 == '\0') {
    il2cpp_init_method_metadata(&"Pixis1");
    DAT_05703464 = '\x01';
  }
  return "Pixis1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Reiner1>g____getter|96_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Reiner1_g____getter_96_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8dff0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Reiner1>g____getter_96_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703465 == '\0') {
    il2cpp_init_method_metadata(&"Reiner1");
    DAT_05703465 = '\x01';
  }
  return "Reiner1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Revolution1>g____getter|97_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Revolution1_g____getter_97_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e020

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Revolution1>g____getter_97_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703466 == '\0') {
    il2cpp_init_method_metadata(&"Revolution1");
    DAT_05703466 = '\x01';
  }
  return "Revolution1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Rico1>g____getter|98_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Rico1_g____getter_98_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e050

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Rico1>g____getter_98_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703467 == '\0') {
    il2cpp_init_method_metadata(&"Rico1");
    DAT_05703467 = '\x01';
  }
  return "Rico1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Rico2>g____getter|99_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Rico2_g____getter_99_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e080

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Rico2>g____getter_99_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703468 == '\0') {
    il2cpp_init_method_metadata(&"Rico2");
    DAT_05703468 = '\x01';
  }
  return "Rico2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ricecake1>g____getter|100_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ricecake1_g____getter_100_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e0b0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Ricecake1>g____getter_100_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703469 == '\0') {
    il2cpp_init_method_metadata(&"Ricecake1");
    DAT_05703469 = '\x01';
  }
  return "Ricecake1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha1>g____getter|101_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha1_g____getter_101_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e0e0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Sasha1>g____getter_101_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570346a == '\0') {
    il2cpp_init_method_metadata(&"Sasha1");
    DAT_0570346a = '\x01';
  }
  return "Sasha1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha2>g____getter|102_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha2_g____getter_102_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e110

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Sasha2>g____getter_102_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570346b == '\0') {
    il2cpp_init_method_metadata(&"Sasha2");
    DAT_0570346b = '\x01';
  }
  return "Sasha2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha3>g____getter|103_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha3_g____getter_103_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e140

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Sasha3>g____getter_103_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570346c == '\0') {
    il2cpp_init_method_metadata(&"Sasha3");
    DAT_0570346c = '\x01';
  }
  return "Sasha3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Sasha4>g____getter|104_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Sasha4_g____getter_104_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e170

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Sasha4>g____getter_104_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570346d == '\0') {
    il2cpp_init_method_metadata(&"Sasha4");
    DAT_0570346d = '\x01';
  }
  return "Sasha4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Uri1>g____getter|105_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Uri1_g____getter_105_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e1a0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Uri1>g____getter_105_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570346e == '\0') {
    il2cpp_init_method_metadata(&"Uri1");
    DAT_0570346e = '\x01';
  }
  return "Uri1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Yelena1>g____getter|106_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Yelena1_g____getter_106_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e1d0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Yelena1>g____getter_106_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570346f == '\0') {
    il2cpp_init_method_metadata(&"Yelena1");
    DAT_0570346f = '\x01';
  }
  return "Yelena1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Yelena2>g____getter|107_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Yelena2_g____getter_107_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e200

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Yelena2>g____getter_107_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703470 == '\0') {
    il2cpp_init_method_metadata(&"Yelena2");
    DAT_05703470 = '\x01';
  }
  return "Yelena2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Yelena3>g____getter|108_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Yelena3_g____getter_108_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e230

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Yelena3>g____getter_108_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703471 == '\0') {
    il2cpp_init_method_metadata(&"Yelena3");
    DAT_05703471 = '\x01';
  }
  return "Yelena3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ymir1>g____getter|109_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ymir1_g____getter_109_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e260

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Ymir1>g____getter_109_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703472 == '\0') {
    il2cpp_init_method_metadata(&"Ymir1");
    DAT_05703472 = '\x01';
  }
  return "Ymir1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ymir2>g____getter|110_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ymir2_g____getter_110_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e290

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Ymir2>g____getter_110_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703473 == '\0') {
    il2cpp_init_method_metadata(&"Ymir2");
    DAT_05703473 = '\x01';
  }
  return "Ymir2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Ymir104>g____getter|111_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Ymir104_g____getter_111_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e2c0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Ymir104>g____getter_111_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703474 == '\0') {
    il2cpp_init_method_metadata(&"Ymir104");
    DAT_05703474 = '\x01';
  }
  return "Ymir104";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Zeke1>g____getter|112_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Zeke1_g____getter_112_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e2f0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Zeke1>g____getter_112_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703475 == '\0') {
    il2cpp_init_method_metadata(&"Zeke1");
    DAT_05703475 = '\x01';
  }
  return "Zeke1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Zeke2>g____getter|113_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Zeke2_g____getter_113_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e320

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Zeke2>g____getter_113_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703476 == '\0') {
    il2cpp_init_method_metadata(&"Zeke2");
    DAT_05703476 = '\x01';
  }
  return "Zeke2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan1>g____getter|114_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan1_g____getter_114_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e350

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan1>g____getter_114_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703477 == '\0') {
    il2cpp_init_method_metadata(&"Titan1");
    DAT_05703477 = '\x01';
  }
  return "Titan1";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan2>g____getter|115_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan2_g____getter_115_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e380

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan2>g____getter_115_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703478 == '\0') {
    il2cpp_init_method_metadata(&"Titan2");
    DAT_05703478 = '\x01';
  }
  return "Titan2";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan3>g____getter|116_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan3_g____getter_116_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e3b0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan3>g____getter_116_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703479 == '\0') {
    il2cpp_init_method_metadata(&"Titan3");
    DAT_05703479 = '\x01';
  }
  return "Titan3";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan4>g____getter|117_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan4_g____getter_117_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e3e0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan4>g____getter_117_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570347a == '\0') {
    il2cpp_init_method_metadata(&"Titan4");
    DAT_0570347a = '\x01';
  }
  return "Titan4";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan5>g____getter|118_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan5_g____getter_118_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e410

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan5>g____getter_118_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570347b == '\0') {
    il2cpp_init_method_metadata(&"Titan5");
    DAT_0570347b = '\x01';
  }
  return "Titan5";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan6>g____getter|119_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan6_g____getter_119_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e440

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan6>g____getter_119_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570347c == '\0') {
    il2cpp_init_method_metadata(&"Titan6");
    DAT_0570347c = '\x01';
  }
  return "Titan6";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan7>g____getter|120_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan7_g____getter_120_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e470

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan7>g____getter_120_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570347d == '\0') {
    il2cpp_init_method_metadata(&"Titan7");
    DAT_0570347d = '\x01';
  }
  return "Titan7";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan8>g____getter|121_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan8_g____getter_121_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e4a0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan8>g____getter_121_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570347e == '\0') {
    il2cpp_init_method_metadata(&"Titan8");
    DAT_0570347e = '\x01';
  }
  return "Titan8";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan9>g____getter|122_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan9_g____getter_122_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e4d0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan9>g____getter_122_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570347f == '\0') {
    il2cpp_init_method_metadata(&"Titan9");
    DAT_0570347f = '\x01';
  }
  return "Titan9";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan10>g____getter|123_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan10_g____getter_123_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e500

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan10>g____getter_123_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703480 == '\0') {
    il2cpp_init_method_metadata(&"Titan10");
    DAT_05703480 = '\x01';
  }
  return "Titan10";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan11>g____getter|124_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan11_g____getter_124_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e530

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan11>g____getter_124_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703481 == '\0') {
    il2cpp_init_method_metadata(&"Titan11");
    DAT_05703481 = '\x01';
  }
  return "Titan11";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan12>g____getter|125_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan12_g____getter_125_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e560

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan12>g____getter_125_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703482 == '\0') {
    il2cpp_init_method_metadata(&"Titan12");
    DAT_05703482 = '\x01';
  }
  return "Titan12";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan13>g____getter|126_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan13_g____getter_126_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e590

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan13>g____getter_126_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703483 == '\0') {
    il2cpp_init_method_metadata(&"Titan13");
    DAT_05703483 = '\x01';
  }
  return "Titan13";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan14>g____getter|127_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan14_g____getter_127_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e5c0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan14>g____getter_127_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703484 == '\0') {
    il2cpp_init_method_metadata(&"Titan14");
    DAT_05703484 = '\x01';
  }
  return "Titan14";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan15>g____getter|128_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan15_g____getter_128_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e5f0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan15>g____getter_128_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703485 == '\0') {
    il2cpp_init_method_metadata(&"Titan15");
    DAT_05703485 = '\x01';
  }
  return "Titan15";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan16>g____getter|129_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan16_g____getter_129_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e620

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan16>g____getter_129_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703486 == '\0') {
    il2cpp_init_method_metadata(&"Titan16");
    DAT_05703486 = '\x01';
  }
  return "Titan16";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__Titan17>g____getter|130_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__Titan17_g____getter_130_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e650

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__Titan17>g____getter_130_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703487 == '\0') {
    il2cpp_init_method_metadata(&"Titan17");
    DAT_05703487 = '\x01';
  }
  return "Titan17";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiAngry>g____getter|131_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiAngry_g____getter_131_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e680

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__EmojiAngry>g____getter_131_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703488 == '\0') {
    il2cpp_init_method_metadata(&"EmojiAngry");
    DAT_05703488 = '\x01';
  }
  return "EmojiAngry";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiAnnoyed>g____getter|132_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiAnnoyed_g____getter_132_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e6b0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__EmojiAnnoyed>g____getter_132_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_05703489 == '\0') {
    il2cpp_init_method_metadata(&"EmojiAnnoyed");
    DAT_05703489 = '\x01';
  }
  return "EmojiAnnoyed";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiCool>g____getter|133_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiCool_g____getter_133_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e6e0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__EmojiCool>g____getter_133_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570348a == '\0') {
    il2cpp_init_method_metadata(&"EmojiCool");
    DAT_0570348a = '\x01';
  }
  return "EmojiCool";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiCrying>g____getter|134_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiCrying_g____getter_134_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e710

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__EmojiCrying>g____getter_134_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570348b == '\0') {
    il2cpp_init_method_metadata(&"EmojiCrying");
    DAT_0570348b = '\x01';
  }
  return "EmojiCrying";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiLove>g____getter|135_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiLove_g____getter_135_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e740

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__EmojiLove>g____getter_135_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570348c == '\0') {
    il2cpp_init_method_metadata(&"EmojiLove");
    DAT_0570348c = '\x01';
  }
  return "EmojiLove";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiShocked>g____getter|136_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiShocked_g____getter_136_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e770

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__EmojiShocked>g____getter_136_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570348d == '\0') {
    il2cpp_init_method_metadata(&"EmojiShocked");
    DAT_0570348d = '\x01';
  }
  return "EmojiShocked";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiSmile>g____getter|137_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiSmile_g____getter_137_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e7a0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__EmojiSmile>g____getter_137_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570348e == '\0') {
    il2cpp_init_method_metadata(&"EmojiSmile");
    DAT_0570348e = '\x01';
  }
  return "EmojiSmile";
}


// CustomLogic.CustomLogicProfileIconEnum.Bindings$$<__CreatePropertyBinding__EmojiThumbsUp>g____getter|138_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicProfileIconEnum_Bindings_____CreatePropertyBinding__EmojiThumbsUp_g____getter_138_0 (CustomLogic_CustomLogicProfileIconEnum_o* __i, const MethodInfo* method);
// 0x3e8e7d0

Il2CppObject *
CustomLogic_CustomLogicProfileIconEnum_Bindings__<__CreatePropertyBinding__EmojiThumbsUp>g____getter_138_0
          (CustomLogic_CustomLogicProfileIconEnum_o *__i,MethodInfo *method)

{
  if (DAT_0570348f == '\0') {
    il2cpp_init_method_metadata(&"EmojiThumbsUp");
    DAT_0570348f = '\x01';
  }
  return "EmojiThumbsUp";
}


// CustomLogic.CustomLogicProfileIconEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicProfileIconEnum___ctor (CustomLogic_CustomLogicProfileIconEnum_o* __this, const MethodInfo* method);
// 0x3e818d0

void CustomLogic_CustomLogicProfileIconEnum___ctor
               (CustomLogic_CustomLogicProfileIconEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703406 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703406 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Acros1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Acros1 (const MethodInfo* method);
// 0x3e81940

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Acros1(MethodInfo *method)

{
  if (DAT_05703407 == '\0') {
    il2cpp_init_method_metadata(&"Acros1");
    DAT_05703407 = '\x01';
  }
  return "Acros1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Annie1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Annie1 (const MethodInfo* method);
// 0x3e81970

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Annie1(MethodInfo *method)

{
  if (DAT_05703408 == '\0') {
    il2cpp_init_method_metadata(&"Annie1");
    DAT_05703408 = '\x01';
  }
  return "Annie1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Annie2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Annie2 (const MethodInfo* method);
// 0x3e819a0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Annie2(MethodInfo *method)

{
  if (DAT_05703409 == '\0') {
    il2cpp_init_method_metadata(&"Annie2");
    DAT_05703409 = '\x01';
  }
  return "Annie2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Annie3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Annie3 (const MethodInfo* method);
// 0x3e819d0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Annie3(MethodInfo *method)

{
  if (DAT_0570340a == '\0') {
    il2cpp_init_method_metadata(&"Annie3");
    DAT_0570340a = '\x01';
  }
  return "Annie3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Annie4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Annie4 (const MethodInfo* method);
// 0x3e81a00

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Annie4(MethodInfo *method)

{
  if (DAT_0570340b == '\0') {
    il2cpp_init_method_metadata(&"Annie4");
    DAT_0570340b = '\x01';
  }
  return "Annie4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Annie5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Annie5 (const MethodInfo* method);
// 0x3e81a30

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Annie5(MethodInfo *method)

{
  if (DAT_0570340c == '\0') {
    il2cpp_init_method_metadata(&"Annie5");
    DAT_0570340c = '\x01';
  }
  return "Annie5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Armin1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Armin1 (const MethodInfo* method);
// 0x3e81a60

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Armin1(MethodInfo *method)

{
  if (DAT_0570340d == '\0') {
    il2cpp_init_method_metadata(&"Armin1");
    DAT_0570340d = '\x01';
  }
  return "Armin1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Bertholdt1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Bertholdt1 (const MethodInfo* method);
// 0x3e81a90

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Bertholdt1(MethodInfo *method)

{
  if (DAT_0570340e == '\0') {
    il2cpp_init_method_metadata(&"Bertholdt1");
    DAT_0570340e = '\x01';
  }
  return "Bertholdt1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Carula1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Carula1 (const MethodInfo* method);
// 0x3e81ac0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Carula1(MethodInfo *method)

{
  if (DAT_0570340f == '\0') {
    il2cpp_init_method_metadata(&"Carula1");
    DAT_0570340f = '\x01';
  }
  return "Carula1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Conny1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Conny1 (const MethodInfo* method);
// 0x3e81af0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Conny1(MethodInfo *method)

{
  if (DAT_05703410 == '\0') {
    il2cpp_init_method_metadata(&"Conny1");
    DAT_05703410 = '\x01';
  }
  return "Conny1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Conny2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Conny2 (const MethodInfo* method);
// 0x3e81b20

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Conny2(MethodInfo *method)

{
  if (DAT_05703411 == '\0') {
    il2cpp_init_method_metadata(&"Conny2");
    DAT_05703411 = '\x01';
  }
  return "Conny2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Dakros1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Dakros1 (const MethodInfo* method);
// 0x3e81b50

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Dakros1(MethodInfo *method)

{
  if (DAT_05703412 == '\0') {
    il2cpp_init_method_metadata(&"Dakros1");
    DAT_05703412 = '\x01';
  }
  return "Dakros1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren1 (const MethodInfo* method);
// 0x3e81b80

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren1(MethodInfo *method)

{
  if (DAT_05703413 == '\0') {
    il2cpp_init_method_metadata(&"Eren1");
    DAT_05703413 = '\x01';
  }
  return "Eren1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren2 (const MethodInfo* method);
// 0x3e81bb0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren2(MethodInfo *method)

{
  if (DAT_05703414 == '\0') {
    il2cpp_init_method_metadata(&"Eren2");
    DAT_05703414 = '\x01';
  }
  return "Eren2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren3 (const MethodInfo* method);
// 0x3e81be0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren3(MethodInfo *method)

{
  if (DAT_05703415 == '\0') {
    il2cpp_init_method_metadata(&"Eren3");
    DAT_05703415 = '\x01';
  }
  return "Eren3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren4 (const MethodInfo* method);
// 0x3e81c10

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren4(MethodInfo *method)

{
  if (DAT_05703416 == '\0') {
    il2cpp_init_method_metadata(&"Eren4");
    DAT_05703416 = '\x01';
  }
  return "Eren4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren5 (const MethodInfo* method);
// 0x3e81c40

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren5(MethodInfo *method)

{
  if (DAT_05703417 == '\0') {
    il2cpp_init_method_metadata(&"Eren5");
    DAT_05703417 = '\x01';
  }
  return "Eren5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren6 (const MethodInfo* method);
// 0x3e81c70

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren6(MethodInfo *method)

{
  if (DAT_05703418 == '\0') {
    il2cpp_init_method_metadata(&"Eren6");
    DAT_05703418 = '\x01';
  }
  return "Eren6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren7 (const MethodInfo* method);
// 0x3e81ca0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren7(MethodInfo *method)

{
  if (DAT_05703419 == '\0') {
    il2cpp_init_method_metadata(&"Eren7");
    DAT_05703419 = '\x01';
  }
  return "Eren7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Eren8
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Eren8 (const MethodInfo* method);
// 0x3e81cd0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Eren8(MethodInfo *method)

{
  if (DAT_0570341a == '\0') {
    il2cpp_init_method_metadata(&"Eren8");
    DAT_0570341a = '\x01';
  }
  return "Eren8";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin1 (const MethodInfo* method);
// 0x3e81d00

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin1(MethodInfo *method)

{
  if (DAT_0570341b == '\0') {
    il2cpp_init_method_metadata(&"Erwin1");
    DAT_0570341b = '\x01';
  }
  return "Erwin1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin2 (const MethodInfo* method);
// 0x3e81d30

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin2(MethodInfo *method)

{
  if (DAT_0570341c == '\0') {
    il2cpp_init_method_metadata(&"Erwin2");
    DAT_0570341c = '\x01';
  }
  return "Erwin2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin3 (const MethodInfo* method);
// 0x3e81d60

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin3(MethodInfo *method)

{
  if (DAT_0570341d == '\0') {
    il2cpp_init_method_metadata(&"Erwin3");
    DAT_0570341d = '\x01';
  }
  return "Erwin3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin4 (const MethodInfo* method);
// 0x3e81d90

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin4(MethodInfo *method)

{
  if (DAT_0570341e == '\0') {
    il2cpp_init_method_metadata(&"Erwin4");
    DAT_0570341e = '\x01';
  }
  return "Erwin4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin5 (const MethodInfo* method);
// 0x3e81dc0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin5(MethodInfo *method)

{
  if (DAT_0570341f == '\0') {
    il2cpp_init_method_metadata(&"Erwin5");
    DAT_0570341f = '\x01';
  }
  return "Erwin5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin6 (const MethodInfo* method);
// 0x3e81df0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin6(MethodInfo *method)

{
  if (DAT_05703420 == '\0') {
    il2cpp_init_method_metadata(&"Erwin6");
    DAT_05703420 = '\x01';
  }
  return "Erwin6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin7 (const MethodInfo* method);
// 0x3e81e20

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin7(MethodInfo *method)

{
  if (DAT_05703421 == '\0') {
    il2cpp_init_method_metadata(&"Erwin7");
    DAT_05703421 = '\x01';
  }
  return "Erwin7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin8
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin8 (const MethodInfo* method);
// 0x3e81e50

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin8(MethodInfo *method)

{
  if (DAT_05703422 == '\0') {
    il2cpp_init_method_metadata(&"Erwin8");
    DAT_05703422 = '\x01';
  }
  return "Erwin8";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin9
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin9 (const MethodInfo* method);
// 0x3e81e80

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin9(MethodInfo *method)

{
  if (DAT_05703423 == '\0') {
    il2cpp_init_method_metadata(&"Erwin9");
    DAT_05703423 = '\x01';
  }
  return "Erwin9";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin10
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin10 (const MethodInfo* method);
// 0x3e81eb0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin10(MethodInfo *method)

{
  if (DAT_05703424 == '\0') {
    il2cpp_init_method_metadata(&"Erwin10");
    DAT_05703424 = '\x01';
  }
  return "Erwin10";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin11
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin11 (const MethodInfo* method);
// 0x3e81ee0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin11(MethodInfo *method)

{
  if (DAT_05703425 == '\0') {
    il2cpp_init_method_metadata(&"Erwin11");
    DAT_05703425 = '\x01';
  }
  return "Erwin11";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Erwin12
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Erwin12 (const MethodInfo* method);
// 0x3e81f10

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Erwin12(MethodInfo *method)

{
  if (DAT_05703426 == '\0') {
    il2cpp_init_method_metadata(&"Erwin12");
    DAT_05703426 = '\x01';
  }
  return "Erwin12";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Etika1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Etika1 (const MethodInfo* method);
// 0x3e81f40

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Etika1(MethodInfo *method)

{
  if (DAT_05703427 == '\0') {
    il2cpp_init_method_metadata(&"Etika1");
    DAT_05703427 = '\x01';
  }
  return "Etika1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Falco1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Falco1 (const MethodInfo* method);
// 0x3e81f70

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Falco1(MethodInfo *method)

{
  if (DAT_05703428 == '\0') {
    il2cpp_init_method_metadata(&"Falco1");
    DAT_05703428 = '\x01';
  }
  return "Falco1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Fenglee1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Fenglee1 (const MethodInfo* method);
// 0x3e81fa0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Fenglee1(MethodInfo *method)

{
  if (DAT_05703429 == '\0') {
    il2cpp_init_method_metadata(&"Fenglee1");
    DAT_05703429 = '\x01';
  }
  return "Fenglee1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Founding1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Founding1 (const MethodInfo* method);
// 0x3e81fd0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Founding1(MethodInfo *method)

{
  if (DAT_0570342a == '\0') {
    il2cpp_init_method_metadata(&"Founding1");
    DAT_0570342a = '\x01';
  }
  return "Founding1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Frieda1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Frieda1 (const MethodInfo* method);
// 0x3e82000

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Frieda1(MethodInfo *method)

{
  if (DAT_0570342b == '\0') {
    il2cpp_init_method_metadata(&"Frieda1");
    DAT_0570342b = '\x01';
  }
  return "Frieda1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Frieda2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Frieda2 (const MethodInfo* method);
// 0x3e82030

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Frieda2(MethodInfo *method)

{
  if (DAT_0570342c == '\0') {
    il2cpp_init_method_metadata(&"Frieda2");
    DAT_0570342c = '\x01';
  }
  return "Frieda2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Gabi1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Gabi1 (const MethodInfo* method);
// 0x3e82060

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Gabi1(MethodInfo *method)

{
  if (DAT_0570342d == '\0') {
    il2cpp_init_method_metadata(&"Gabi1");
    DAT_0570342d = '\x01';
  }
  return "Gabi1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Gisketch1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Gisketch1 (const MethodInfo* method);
// 0x3e82090

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Gisketch1(MethodInfo *method)

{
  if (DAT_0570342e == '\0') {
    il2cpp_init_method_metadata(&"Gisketch1");
    DAT_0570342e = '\x01';
  }
  return "Gisketch1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Gunther1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Gunther1 (const MethodInfo* method);
// 0x3e820c0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Gunther1(MethodInfo *method)

{
  if (DAT_0570342f == '\0') {
    il2cpp_init_method_metadata(&"Gunther1");
    DAT_0570342f = '\x01';
  }
  return "Gunther1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Hange1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Hange1 (const MethodInfo* method);
// 0x3e820f0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Hange1(MethodInfo *method)

{
  if (DAT_05703430 == '\0') {
    il2cpp_init_method_metadata(&"Hange1");
    DAT_05703430 = '\x01';
  }
  return "Hange1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Hannes1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Hannes1 (const MethodInfo* method);
// 0x3e82120

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Hannes1(MethodInfo *method)

{
  if (DAT_05703431 == '\0') {
    il2cpp_init_method_metadata(&"Hannes1");
    DAT_05703431 = '\x01';
  }
  return "Hannes1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Hannes2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Hannes2 (const MethodInfo* method);
// 0x3e82150

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Hannes2(MethodInfo *method)

{
  if (DAT_05703432 == '\0') {
    il2cpp_init_method_metadata(&"Hannes2");
    DAT_05703432 = '\x01';
  }
  return "Hannes2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia1 (const MethodInfo* method);
// 0x3e82180

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia1(MethodInfo *method)

{
  if (DAT_05703433 == '\0') {
    il2cpp_init_method_metadata(&"Historia1");
    DAT_05703433 = '\x01';
  }
  return "Historia1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia2 (const MethodInfo* method);
// 0x3e821b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia2(MethodInfo *method)

{
  if (DAT_05703434 == '\0') {
    il2cpp_init_method_metadata(&"Historia2");
    DAT_05703434 = '\x01';
  }
  return "Historia2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia3 (const MethodInfo* method);
// 0x3e821e0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia3(MethodInfo *method)

{
  if (DAT_05703435 == '\0') {
    il2cpp_init_method_metadata(&"Historia3");
    DAT_05703435 = '\x01';
  }
  return "Historia3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia4 (const MethodInfo* method);
// 0x3e82210

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia4(MethodInfo *method)

{
  if (DAT_05703436 == '\0') {
    il2cpp_init_method_metadata(&"Historia4");
    DAT_05703436 = '\x01';
  }
  return "Historia4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia5 (const MethodInfo* method);
// 0x3e82240

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia5(MethodInfo *method)

{
  if (DAT_05703437 == '\0') {
    il2cpp_init_method_metadata(&"Historia5");
    DAT_05703437 = '\x01';
  }
  return "Historia5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia6 (const MethodInfo* method);
// 0x3e82270

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia6(MethodInfo *method)

{
  if (DAT_05703438 == '\0') {
    il2cpp_init_method_metadata(&"Historia6");
    DAT_05703438 = '\x01';
  }
  return "Historia6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia7 (const MethodInfo* method);
// 0x3e822a0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia7(MethodInfo *method)

{
  if (DAT_05703439 == '\0') {
    il2cpp_init_method_metadata(&"Historia7");
    DAT_05703439 = '\x01';
  }
  return "Historia7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Historia8
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Historia8 (const MethodInfo* method);
// 0x3e822d0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Historia8(MethodInfo *method)

{
  if (DAT_0570343a == '\0') {
    il2cpp_init_method_metadata(&"Historia8");
    DAT_0570343a = '\x01';
  }
  return "Historia8";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Hitch1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Hitch1 (const MethodInfo* method);
// 0x3e82300

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Hitch1(MethodInfo *method)

{
  if (DAT_0570343b == '\0') {
    il2cpp_init_method_metadata(&"Hitch1");
    DAT_0570343b = '\x01';
  }
  return "Hitch1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ian1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ian1 (const MethodInfo* method);
// 0x3e82330

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ian1(MethodInfo *method)

{
  if (DAT_0570343c == '\0') {
    il2cpp_init_method_metadata(&"Ian1");
    DAT_0570343c = '\x01';
  }
  return "Ian1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ilse1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ilse1 (const MethodInfo* method);
// 0x3e82360

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ilse1(MethodInfo *method)

{
  if (DAT_0570343d == '\0') {
    il2cpp_init_method_metadata(&"Ilse1");
    DAT_0570343d = '\x01';
  }
  return "Ilse1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Isabel1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Isabel1 (const MethodInfo* method);
// 0x3e82390

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Isabel1(MethodInfo *method)

{
  if (DAT_0570343e == '\0') {
    il2cpp_init_method_metadata(&"Isabel1");
    DAT_0570343e = '\x01';
  }
  return "Isabel1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Jean1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Jean1 (const MethodInfo* method);
// 0x3e823c0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Jean1(MethodInfo *method)

{
  if (DAT_0570343f == '\0') {
    il2cpp_init_method_metadata(&"Jean1");
    DAT_0570343f = '\x01';
  }
  return "Jean1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Keith1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Keith1 (const MethodInfo* method);
// 0x3e823f0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Keith1(MethodInfo *method)

{
  if (DAT_05703440 == '\0') {
    il2cpp_init_method_metadata(&"Keith1");
    DAT_05703440 = '\x01';
  }
  return "Keith1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Keith2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Keith2 (const MethodInfo* method);
// 0x3e82420

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Keith2(MethodInfo *method)

{
  if (DAT_05703441 == '\0') {
    il2cpp_init_method_metadata(&"Keith2");
    DAT_05703441 = '\x01';
  }
  return "Keith2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Keith3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Keith3 (const MethodInfo* method);
// 0x3e82450

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Keith3(MethodInfo *method)

{
  if (DAT_05703442 == '\0') {
    il2cpp_init_method_metadata(&"Keith3");
    DAT_05703442 = '\x01';
  }
  return "Keith3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Kenny1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Kenny1 (const MethodInfo* method);
// 0x3e82480

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Kenny1(MethodInfo *method)

{
  if (DAT_05703443 == '\0') {
    il2cpp_init_method_metadata(&"Kenny1");
    DAT_05703443 = '\x01';
  }
  return "Kenny1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Kenny2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Kenny2 (const MethodInfo* method);
// 0x3e824b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Kenny2(MethodInfo *method)

{
  if (DAT_05703444 == '\0') {
    il2cpp_init_method_metadata(&"Kenny2");
    DAT_05703444 = '\x01';
  }
  return "Kenny2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi1 (const MethodInfo* method);
// 0x3e824e0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi1(MethodInfo *method)

{
  if (DAT_05703445 == '\0') {
    il2cpp_init_method_metadata(&"Levi1");
    DAT_05703445 = '\x01';
  }
  return "Levi1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi2 (const MethodInfo* method);
// 0x3e82510

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi2(MethodInfo *method)

{
  if (DAT_05703446 == '\0') {
    il2cpp_init_method_metadata(&"Levi2");
    DAT_05703446 = '\x01';
  }
  return "Levi2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi3 (const MethodInfo* method);
// 0x3e82540

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi3(MethodInfo *method)

{
  if (DAT_05703447 == '\0') {
    il2cpp_init_method_metadata(&"Levi3");
    DAT_05703447 = '\x01';
  }
  return "Levi3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi4 (const MethodInfo* method);
// 0x3e82570

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi4(MethodInfo *method)

{
  if (DAT_05703448 == '\0') {
    il2cpp_init_method_metadata(&"Levi4");
    DAT_05703448 = '\x01';
  }
  return "Levi4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi5 (const MethodInfo* method);
// 0x3e825a0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi5(MethodInfo *method)

{
  if (DAT_05703449 == '\0') {
    il2cpp_init_method_metadata(&"Levi5");
    DAT_05703449 = '\x01';
  }
  return "Levi5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi6 (const MethodInfo* method);
// 0x3e825d0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi6(MethodInfo *method)

{
  if (DAT_0570344a == '\0') {
    il2cpp_init_method_metadata(&"Levi6");
    DAT_0570344a = '\x01';
  }
  return "Levi6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi7 (const MethodInfo* method);
// 0x3e82600

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi7(MethodInfo *method)

{
  if (DAT_0570344b == '\0') {
    il2cpp_init_method_metadata(&"Levi7");
    DAT_0570344b = '\x01';
  }
  return "Levi7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi8
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi8 (const MethodInfo* method);
// 0x3e82630

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi8(MethodInfo *method)

{
  if (DAT_0570344c == '\0') {
    il2cpp_init_method_metadata(&"Levi8");
    DAT_0570344c = '\x01';
  }
  return "Levi8";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi9
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi9 (const MethodInfo* method);
// 0x3e82660

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi9(MethodInfo *method)

{
  if (DAT_0570344d == '\0') {
    il2cpp_init_method_metadata(&"Levi9");
    DAT_0570344d = '\x01';
  }
  return "Levi9";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi10
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi10 (const MethodInfo* method);
// 0x3e82690

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi10(MethodInfo *method)

{
  if (DAT_0570344e == '\0') {
    il2cpp_init_method_metadata(&"Levi10");
    DAT_0570344e = '\x01';
  }
  return "Levi10";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi11
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi11 (const MethodInfo* method);
// 0x3e826c0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi11(MethodInfo *method)

{
  if (DAT_0570344f == '\0') {
    il2cpp_init_method_metadata(&"Levi11");
    DAT_0570344f = '\x01';
  }
  return "Levi11";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi12
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi12 (const MethodInfo* method);
// 0x3e826f0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi12(MethodInfo *method)

{
  if (DAT_05703450 == '\0') {
    il2cpp_init_method_metadata(&"Levi12");
    DAT_05703450 = '\x01';
  }
  return "Levi12";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi13
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi13 (const MethodInfo* method);
// 0x3e82720

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi13(MethodInfo *method)

{
  if (DAT_05703451 == '\0') {
    il2cpp_init_method_metadata(&"Levi13");
    DAT_05703451 = '\x01';
  }
  return "Levi13";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi14
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi14 (const MethodInfo* method);
// 0x3e82750

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi14(MethodInfo *method)

{
  if (DAT_05703452 == '\0') {
    il2cpp_init_method_metadata(&"Levi14");
    DAT_05703452 = '\x01';
  }
  return "Levi14";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi15
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi15 (const MethodInfo* method);
// 0x3e82780

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi15(MethodInfo *method)

{
  if (DAT_05703453 == '\0') {
    il2cpp_init_method_metadata(&"Levi15");
    DAT_05703453 = '\x01';
  }
  return "Levi15";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi16
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi16 (const MethodInfo* method);
// 0x3e827b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi16(MethodInfo *method)

{
  if (DAT_05703454 == '\0') {
    il2cpp_init_method_metadata(&"Levi16");
    DAT_05703454 = '\x01';
  }
  return "Levi16";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Levi17
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Levi17 (const MethodInfo* method);
// 0x3e827e0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Levi17(MethodInfo *method)

{
  if (DAT_05703455 == '\0') {
    il2cpp_init_method_metadata(&"Levi17");
    DAT_05703455 = '\x01';
  }
  return "Levi17";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa1 (const MethodInfo* method);
// 0x3e82810

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa1(MethodInfo *method)

{
  if (DAT_05703456 == '\0') {
    il2cpp_init_method_metadata(&"Mikasa1");
    DAT_05703456 = '\x01';
  }
  return "Mikasa1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa2 (const MethodInfo* method);
// 0x3e82840

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa2(MethodInfo *method)

{
  if (DAT_05703457 == '\0') {
    il2cpp_init_method_metadata(&"Mikasa2");
    DAT_05703457 = '\x01';
  }
  return "Mikasa2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa3 (const MethodInfo* method);
// 0x3e82870

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa3(MethodInfo *method)

{
  if (DAT_05703458 == '\0') {
    il2cpp_init_method_metadata(&"Mikasa3");
    DAT_05703458 = '\x01';
  }
  return "Mikasa3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa4 (const MethodInfo* method);
// 0x3e828a0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa4(MethodInfo *method)

{
  if (DAT_05703459 == '\0') {
    il2cpp_init_method_metadata(&"Mikasa4");
    DAT_05703459 = '\x01';
  }
  return "Mikasa4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa5 (const MethodInfo* method);
// 0x3e828d0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa5(MethodInfo *method)

{
  if (DAT_0570345a == '\0') {
    il2cpp_init_method_metadata(&"Mikasa5");
    DAT_0570345a = '\x01';
  }
  return "Mikasa5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa6 (const MethodInfo* method);
// 0x3e82900

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa6(MethodInfo *method)

{
  if (DAT_0570345b == '\0') {
    il2cpp_init_method_metadata(&"Mikasa6");
    DAT_0570345b = '\x01';
  }
  return "Mikasa6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mikasa7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mikasa7 (const MethodInfo* method);
// 0x3e82930

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mikasa7(MethodInfo *method)

{
  if (DAT_0570345c == '\0') {
    il2cpp_init_method_metadata(&"Mikasa7");
    DAT_0570345c = '\x01';
  }
  return "Mikasa7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Mike1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Mike1 (const MethodInfo* method);
// 0x3e82960

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Mike1(MethodInfo *method)

{
  if (DAT_0570345d == '\0') {
    il2cpp_init_method_metadata(&"Mike1");
    DAT_0570345d = '\x01';
  }
  return "Mike1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Nanaba1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Nanaba1 (const MethodInfo* method);
// 0x3e82990

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Nanaba1(MethodInfo *method)

{
  if (DAT_0570345e == '\0') {
    il2cpp_init_method_metadata(&"Nanaba1");
    DAT_0570345e = '\x01';
  }
  return "Nanaba1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Nick1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Nick1 (const MethodInfo* method);
// 0x3e829c0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Nick1(MethodInfo *method)

{
  if (DAT_0570345f == '\0') {
    il2cpp_init_method_metadata(&"Nick1");
    DAT_0570345f = '\x01';
  }
  return "Nick1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Petra1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Petra1 (const MethodInfo* method);
// 0x3e829f0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Petra1(MethodInfo *method)

{
  if (DAT_05703460 == '\0') {
    il2cpp_init_method_metadata(&"Petra1");
    DAT_05703460 = '\x01';
  }
  return "Petra1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Petra2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Petra2 (const MethodInfo* method);
// 0x3e82a20

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Petra2(MethodInfo *method)

{
  if (DAT_05703461 == '\0') {
    il2cpp_init_method_metadata(&"Petra2");
    DAT_05703461 = '\x01';
  }
  return "Petra2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Pieck1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Pieck1 (const MethodInfo* method);
// 0x3e82a50

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Pieck1(MethodInfo *method)

{
  if (DAT_05703462 == '\0') {
    il2cpp_init_method_metadata(&"Pieck1");
    DAT_05703462 = '\x01';
  }
  return "Pieck1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Pieck2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Pieck2 (const MethodInfo* method);
// 0x3e82a80

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Pieck2(MethodInfo *method)

{
  if (DAT_05703463 == '\0') {
    il2cpp_init_method_metadata(&"Pieck2");
    DAT_05703463 = '\x01';
  }
  return "Pieck2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Pixis1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Pixis1 (const MethodInfo* method);
// 0x3e82ab0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Pixis1(MethodInfo *method)

{
  if (DAT_05703464 == '\0') {
    il2cpp_init_method_metadata(&"Pixis1");
    DAT_05703464 = '\x01';
  }
  return "Pixis1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Reiner1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Reiner1 (const MethodInfo* method);
// 0x3e82ae0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Reiner1(MethodInfo *method)

{
  if (DAT_05703465 == '\0') {
    il2cpp_init_method_metadata(&"Reiner1");
    DAT_05703465 = '\x01';
  }
  return "Reiner1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Revolution1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Revolution1 (const MethodInfo* method);
// 0x3e82b10

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Revolution1(MethodInfo *method)

{
  if (DAT_05703466 == '\0') {
    il2cpp_init_method_metadata(&"Revolution1");
    DAT_05703466 = '\x01';
  }
  return "Revolution1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Rico1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Rico1 (const MethodInfo* method);
// 0x3e82b40

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Rico1(MethodInfo *method)

{
  if (DAT_05703467 == '\0') {
    il2cpp_init_method_metadata(&"Rico1");
    DAT_05703467 = '\x01';
  }
  return "Rico1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Rico2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Rico2 (const MethodInfo* method);
// 0x3e82b70

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Rico2(MethodInfo *method)

{
  if (DAT_05703468 == '\0') {
    il2cpp_init_method_metadata(&"Rico2");
    DAT_05703468 = '\x01';
  }
  return "Rico2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ricecake1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ricecake1 (const MethodInfo* method);
// 0x3e82ba0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ricecake1(MethodInfo *method)

{
  if (DAT_05703469 == '\0') {
    il2cpp_init_method_metadata(&"Ricecake1");
    DAT_05703469 = '\x01';
  }
  return "Ricecake1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Sasha1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Sasha1 (const MethodInfo* method);
// 0x3e82bd0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Sasha1(MethodInfo *method)

{
  if (DAT_0570346a == '\0') {
    il2cpp_init_method_metadata(&"Sasha1");
    DAT_0570346a = '\x01';
  }
  return "Sasha1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Sasha2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Sasha2 (const MethodInfo* method);
// 0x3e82c00

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Sasha2(MethodInfo *method)

{
  if (DAT_0570346b == '\0') {
    il2cpp_init_method_metadata(&"Sasha2");
    DAT_0570346b = '\x01';
  }
  return "Sasha2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Sasha3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Sasha3 (const MethodInfo* method);
// 0x3e82c30

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Sasha3(MethodInfo *method)

{
  if (DAT_0570346c == '\0') {
    il2cpp_init_method_metadata(&"Sasha3");
    DAT_0570346c = '\x01';
  }
  return "Sasha3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Sasha4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Sasha4 (const MethodInfo* method);
// 0x3e82c60

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Sasha4(MethodInfo *method)

{
  if (DAT_0570346d == '\0') {
    il2cpp_init_method_metadata(&"Sasha4");
    DAT_0570346d = '\x01';
  }
  return "Sasha4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Uri1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Uri1 (const MethodInfo* method);
// 0x3e82c90

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Uri1(MethodInfo *method)

{
  if (DAT_0570346e == '\0') {
    il2cpp_init_method_metadata(&"Uri1");
    DAT_0570346e = '\x01';
  }
  return "Uri1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Yelena1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Yelena1 (const MethodInfo* method);
// 0x3e82cc0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Yelena1(MethodInfo *method)

{
  if (DAT_0570346f == '\0') {
    il2cpp_init_method_metadata(&"Yelena1");
    DAT_0570346f = '\x01';
  }
  return "Yelena1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Yelena2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Yelena2 (const MethodInfo* method);
// 0x3e82cf0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Yelena2(MethodInfo *method)

{
  if (DAT_05703470 == '\0') {
    il2cpp_init_method_metadata(&"Yelena2");
    DAT_05703470 = '\x01';
  }
  return "Yelena2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Yelena3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Yelena3 (const MethodInfo* method);
// 0x3e82d20

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Yelena3(MethodInfo *method)

{
  if (DAT_05703471 == '\0') {
    il2cpp_init_method_metadata(&"Yelena3");
    DAT_05703471 = '\x01';
  }
  return "Yelena3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ymir1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ymir1 (const MethodInfo* method);
// 0x3e82d50

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ymir1(MethodInfo *method)

{
  if (DAT_05703472 == '\0') {
    il2cpp_init_method_metadata(&"Ymir1");
    DAT_05703472 = '\x01';
  }
  return "Ymir1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ymir2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ymir2 (const MethodInfo* method);
// 0x3e82d80

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ymir2(MethodInfo *method)

{
  if (DAT_05703473 == '\0') {
    il2cpp_init_method_metadata(&"Ymir2");
    DAT_05703473 = '\x01';
  }
  return "Ymir2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Ymir104
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Ymir104 (const MethodInfo* method);
// 0x3e82db0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Ymir104(MethodInfo *method)

{
  if (DAT_05703474 == '\0') {
    il2cpp_init_method_metadata(&"Ymir104");
    DAT_05703474 = '\x01';
  }
  return "Ymir104";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Zeke1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Zeke1 (const MethodInfo* method);
// 0x3e82de0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Zeke1(MethodInfo *method)

{
  if (DAT_05703475 == '\0') {
    il2cpp_init_method_metadata(&"Zeke1");
    DAT_05703475 = '\x01';
  }
  return "Zeke1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Zeke2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Zeke2 (const MethodInfo* method);
// 0x3e82e10

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Zeke2(MethodInfo *method)

{
  if (DAT_05703476 == '\0') {
    il2cpp_init_method_metadata(&"Zeke2");
    DAT_05703476 = '\x01';
  }
  return "Zeke2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan1
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan1 (const MethodInfo* method);
// 0x3e82e40

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan1(MethodInfo *method)

{
  if (DAT_05703477 == '\0') {
    il2cpp_init_method_metadata(&"Titan1");
    DAT_05703477 = '\x01';
  }
  return "Titan1";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan2
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan2 (const MethodInfo* method);
// 0x3e82e70

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan2(MethodInfo *method)

{
  if (DAT_05703478 == '\0') {
    il2cpp_init_method_metadata(&"Titan2");
    DAT_05703478 = '\x01';
  }
  return "Titan2";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan3
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan3 (const MethodInfo* method);
// 0x3e82ea0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan3(MethodInfo *method)

{
  if (DAT_05703479 == '\0') {
    il2cpp_init_method_metadata(&"Titan3");
    DAT_05703479 = '\x01';
  }
  return "Titan3";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan4
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan4 (const MethodInfo* method);
// 0x3e82ed0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan4(MethodInfo *method)

{
  if (DAT_0570347a == '\0') {
    il2cpp_init_method_metadata(&"Titan4");
    DAT_0570347a = '\x01';
  }
  return "Titan4";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan5
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan5 (const MethodInfo* method);
// 0x3e82f00

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan5(MethodInfo *method)

{
  if (DAT_0570347b == '\0') {
    il2cpp_init_method_metadata(&"Titan5");
    DAT_0570347b = '\x01';
  }
  return "Titan5";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan6
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan6 (const MethodInfo* method);
// 0x3e82f30

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan6(MethodInfo *method)

{
  if (DAT_0570347c == '\0') {
    il2cpp_init_method_metadata(&"Titan6");
    DAT_0570347c = '\x01';
  }
  return "Titan6";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan7
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan7 (const MethodInfo* method);
// 0x3e82f60

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan7(MethodInfo *method)

{
  if (DAT_0570347d == '\0') {
    il2cpp_init_method_metadata(&"Titan7");
    DAT_0570347d = '\x01';
  }
  return "Titan7";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan8
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan8 (const MethodInfo* method);
// 0x3e82f90

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan8(MethodInfo *method)

{
  if (DAT_0570347e == '\0') {
    il2cpp_init_method_metadata(&"Titan8");
    DAT_0570347e = '\x01';
  }
  return "Titan8";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan9
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan9 (const MethodInfo* method);
// 0x3e82fc0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan9(MethodInfo *method)

{
  if (DAT_0570347f == '\0') {
    il2cpp_init_method_metadata(&"Titan9");
    DAT_0570347f = '\x01';
  }
  return "Titan9";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan10
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan10 (const MethodInfo* method);
// 0x3e82ff0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan10(MethodInfo *method)

{
  if (DAT_05703480 == '\0') {
    il2cpp_init_method_metadata(&"Titan10");
    DAT_05703480 = '\x01';
  }
  return "Titan10";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan11
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan11 (const MethodInfo* method);
// 0x3e83020

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan11(MethodInfo *method)

{
  if (DAT_05703481 == '\0') {
    il2cpp_init_method_metadata(&"Titan11");
    DAT_05703481 = '\x01';
  }
  return "Titan11";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan12
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan12 (const MethodInfo* method);
// 0x3e83050

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan12(MethodInfo *method)

{
  if (DAT_05703482 == '\0') {
    il2cpp_init_method_metadata(&"Titan12");
    DAT_05703482 = '\x01';
  }
  return "Titan12";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan13
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan13 (const MethodInfo* method);
// 0x3e83080

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan13(MethodInfo *method)

{
  if (DAT_05703483 == '\0') {
    il2cpp_init_method_metadata(&"Titan13");
    DAT_05703483 = '\x01';
  }
  return "Titan13";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan14
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan14 (const MethodInfo* method);
// 0x3e830b0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan14(MethodInfo *method)

{
  if (DAT_05703484 == '\0') {
    il2cpp_init_method_metadata(&"Titan14");
    DAT_05703484 = '\x01';
  }
  return "Titan14";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan15
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan15 (const MethodInfo* method);
// 0x3e830e0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan15(MethodInfo *method)

{
  if (DAT_05703485 == '\0') {
    il2cpp_init_method_metadata(&"Titan15");
    DAT_05703485 = '\x01';
  }
  return "Titan15";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan16
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan16 (const MethodInfo* method);
// 0x3e83110

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan16(MethodInfo *method)

{
  if (DAT_05703486 == '\0') {
    il2cpp_init_method_metadata(&"Titan16");
    DAT_05703486 = '\x01';
  }
  return "Titan16";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_Titan17
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_Titan17 (const MethodInfo* method);
// 0x3e83140

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_Titan17(MethodInfo *method)

{
  if (DAT_05703487 == '\0') {
    il2cpp_init_method_metadata(&"Titan17");
    DAT_05703487 = '\x01';
  }
  return "Titan17";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiAngry
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiAngry (const MethodInfo* method);
// 0x3e83170

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiAngry(MethodInfo *method)

{
  if (DAT_05703488 == '\0') {
    il2cpp_init_method_metadata(&"EmojiAngry");
    DAT_05703488 = '\x01';
  }
  return "EmojiAngry";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiAnnoyed
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiAnnoyed (const MethodInfo* method);
// 0x3e831a0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiAnnoyed(MethodInfo *method)

{
  if (DAT_05703489 == '\0') {
    il2cpp_init_method_metadata(&"EmojiAnnoyed");
    DAT_05703489 = '\x01';
  }
  return "EmojiAnnoyed";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiCool
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiCool (const MethodInfo* method);
// 0x3e831d0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiCool(MethodInfo *method)

{
  if (DAT_0570348a == '\0') {
    il2cpp_init_method_metadata(&"EmojiCool");
    DAT_0570348a = '\x01';
  }
  return "EmojiCool";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiCrying
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiCrying (const MethodInfo* method);
// 0x3e83200

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiCrying(MethodInfo *method)

{
  if (DAT_0570348b == '\0') {
    il2cpp_init_method_metadata(&"EmojiCrying");
    DAT_0570348b = '\x01';
  }
  return "EmojiCrying";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiLove
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiLove (const MethodInfo* method);
// 0x3e83230

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiLove(MethodInfo *method)

{
  if (DAT_0570348c == '\0') {
    il2cpp_init_method_metadata(&"EmojiLove");
    DAT_0570348c = '\x01';
  }
  return "EmojiLove";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiShocked
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiShocked (const MethodInfo* method);
// 0x3e83260

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiShocked(MethodInfo *method)

{
  if (DAT_0570348d == '\0') {
    il2cpp_init_method_metadata(&"EmojiShocked");
    DAT_0570348d = '\x01';
  }
  return "EmojiShocked";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiSmile
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiSmile (const MethodInfo* method);
// 0x3e83290

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiSmile(MethodInfo *method)

{
  if (DAT_0570348e == '\0') {
    il2cpp_init_method_metadata(&"EmojiSmile");
    DAT_0570348e = '\x01';
  }
  return "EmojiSmile";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_EmojiThumbsUp
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_EmojiThumbsUp (const MethodInfo* method);
// 0x3e832c0

System_String_o * CustomLogic_CustomLogicProfileIconEnum__get_EmojiThumbsUp(MethodInfo *method)

{
  if (DAT_0570348f == '\0') {
    il2cpp_init_method_metadata(&"EmojiThumbsUp");
    DAT_0570348f = '\x01';
  }
  return "EmojiThumbsUp";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicProfileIconEnum__get_ClassName (CustomLogic_CustomLogicProfileIconEnum_o* __this, const MethodInfo* method);
// 0x3e832f0

System_String_o *
CustomLogic_CustomLogicProfileIconEnum__get_ClassName
          (CustomLogic_CustomLogicProfileIconEnum_o *__this,MethodInfo *method)

{
  if (DAT_05703490 == '\0') {
    il2cpp_init_method_metadata(&"ProfileIconEnum");
    DAT_05703490 = '\x01';
  }
  return "ProfileIconEnum";
}


// CustomLogic.CustomLogicProfileIconEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicProfileIconEnum__get_IsAbstract (CustomLogic_CustomLogicProfileIconEnum_o* __this, const MethodInfo* method);
// 0x3e83320

bool_conflict
CustomLogic_CustomLogicProfileIconEnum__get_IsAbstract
          (CustomLogic_CustomLogicProfileIconEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicProfileIconEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicProfileIconEnum__get_IsStatic (CustomLogic_CustomLogicProfileIconEnum_o* __this, const MethodInfo* method);
// 0x3e83330

bool_conflict
CustomLogic_CustomLogicProfileIconEnum__get_IsStatic
          (CustomLogic_CustomLogicProfileIconEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicProfileIconEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicProfileIconEnum__get_InheritBaseMembers (CustomLogic_CustomLogicProfileIconEnum_o* __this, const MethodInfo* method);
// 0x3e83340

bool_conflict
CustomLogic_CustomLogicProfileIconEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicProfileIconEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


