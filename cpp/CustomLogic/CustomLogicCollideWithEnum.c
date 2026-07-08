// Type: CustomLogic.CustomLogicCollideWithEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollideWithEnum.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicCollideWithEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollideWithEnum_o* CustomLogic_CustomLogicCollideWithEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e46330

CustomLogic_CustomLogicCollideWithEnum_o *
CustomLogic_CustomLogicCollideWithEnum_Factory__CreateInstance
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
  if (DAT_05702eec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCollideWithEnum);
    DAT_05702eec = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCollideWithEnum);
      if (DAT_05702ee1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702ee1 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCollideWithEnum_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicCollideWithEnum constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollideWithEnum_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollideWithEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e46450

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollideWithEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  undefined8 uVar4;
  System_Exception_o *__this;
  System_Func_T__object__o *pSVar5;
  CustomLogic_CLPropertyBinding_T__o *pCVar6;
  
  if (DAT_05702eed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Hitboxes");
    il2cpp_init_method_metadata(&"Characters");
    il2cpp_init_method_metadata(&"MapEditor");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&"Entities");
    il2cpp_init_method_metadata(&"All");
    il2cpp_init_method_metadata(&"Projectiles");
    il2cpp_init_method_metadata(&"Humans");
    il2cpp_init_method_metadata(&"MapObjects");
    DAT_05702eed = '\x01';
  }
  uVar1 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0x3d352248) {
    if (uVar1 < 0x1838400b) {
      if (uVar1 == 0xfadbf6b) {
        bVar2 = System_String__op_Equality(name,"Projectiles",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702ef3 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Projectiles_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
            DAT_05702ef3 = '\x01';
          }
          pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
          System_Func<object__object>___ctor();
          pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          return (CustomLogic_ICLMemberBinding_o *)pCVar6;
        }
      }
      else if ((uVar1 == 0x1838400a) &&
              (bVar2 = System_String__op_Equality(name,"Entities",(MethodInfo *)0x0),
              (char)bVar2 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ef4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Entities_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
          DAT_05702ef4 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if (uVar1 == 0x2787757f) {
      bVar2 = System_String__op_Equality(name,"Hitboxes",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ef5 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hitboxes_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
          DAT_05702ef5 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x3d352247) &&
            (bVar2 = System_String__op_Equality(name,"MapObjects",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702eef == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MapObjects_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
        DAT_05702eef = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 < 0x75afe365) {
    if (uVar1 == 0x5c14003e) {
      bVar2 = System_String__op_Equality(name,"Titans",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ef1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titans_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
          DAT_05702ef1 = '\x01';
        }
        pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
        System_Func<object__object>___ctor();
        pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        return (CustomLogic_ICLMemberBinding_o *)pCVar6;
      }
    }
    else if ((uVar1 == 0x75afe364) &&
            (bVar2 = System_String__op_Equality(name,"All",(MethodInfo *)0x0),
            (char)bVar2 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702eee == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__All_g____getter);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
        DAT_05702eee = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0x930b044b) {
    bVar2 = System_String__op_Equality(name,"Humans",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702ef2 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Humans_g____get);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
        DAT_05702ef2 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if (uVar1 == 0xaa3084c4) {
    bVar2 = System_String__op_Equality(name,"MapEditor",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702ef6 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MapEditor_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
        DAT_05702ef6 = '\x01';
      }
      pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
      System_Func<object__object>___ctor();
      pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      return (CustomLogic_ICLMemberBinding_o *)pCVar6;
    }
  }
  else if ((uVar1 == 0xfc6ef2f9) &&
          (bVar2 = System_String__op_Equality(name,"Characters",(MethodInfo *)0x0),
          (char)bVar2 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702ef0 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Characters_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
      DAT_05702ef0 = '\x01';
    }
    pSVar5 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
    System_Func<object__object>___ctor();
    pCVar6 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar6,pSVar5,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    return (CustomLogic_ICLMemberBinding_o *)pCVar6;
  }
  pSVar3 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicCollideWithEnum not found");
  pSVar3 = System_String__Concat(pSVar3,name,str2,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar4);
  System_Exception___ctor(__this,pSVar3,(MethodInfo *)0x0);
  uVar4 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar4);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__All
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All (const MethodInfo* method);
// 0x3e468b0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (DAT_05702eee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__All_g____getter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
    DAT_05702eee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__MapObjects
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapObjects (const MethodInfo* method);
// 0x3e46950

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapObjects
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (DAT_05702eef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MapObjects_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
    DAT_05702eef = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Characters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Characters (const MethodInfo* method);
// 0x3e469f0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Characters
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (DAT_05702ef0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Characters_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
    DAT_05702ef0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Titans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Titans (const MethodInfo* method);
// 0x3e46a90

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Titans(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (DAT_05702ef1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Titans_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
    DAT_05702ef1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Humans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Humans (const MethodInfo* method);
// 0x3e46b30

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Humans(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (DAT_05702ef2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Humans_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
    DAT_05702ef2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Projectiles
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Projectiles (const MethodInfo* method);
// 0x3e46bd0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Projectiles
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (DAT_05702ef3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Projectiles_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
    DAT_05702ef3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Entities
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Entities (const MethodInfo* method);
// 0x3e46c70

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Entities
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (DAT_05702ef4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Entities_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
    DAT_05702ef4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Hitboxes
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Hitboxes (const MethodInfo* method);
// 0x3e46d10

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Hitboxes
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (DAT_05702ef5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Hitboxes_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
    DAT_05702ef5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__MapEditor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapEditor (const MethodInfo* method);
// 0x3e46db0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapEditor
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this;
  
  if (DAT_05702ef6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MapEditor_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollideWithEnum__object);
    DAT_05702ef6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollideWithEnum__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollideWithEnum);
  return __this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollideWithEnum_Bindings___cctor (const MethodInfo* method);
// 0x3e46e50

void CustomLogic_CustomLogicCollideWithEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702ef7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Hitboxes");
    il2cpp_init_method_metadata(&"Characters");
    il2cpp_init_method_metadata(&"MapEditor");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&"Entities");
    il2cpp_init_method_metadata(&"All");
    il2cpp_init_method_metadata(&"Projectiles");
    il2cpp_init_method_metadata(&"Humans");
    il2cpp_init_method_metadata(&"MapObjects");
    DAT_05702ef7 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"All",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MapObjects",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Characters",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Titans",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Humans",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Projectiles",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Entities",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Hitboxes",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MapEditor",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__All>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__All_g____getter_2_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x3e47030

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings__<__CreatePropertyBinding__All>g____getter_2_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703105 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05703105 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return (Il2CppObject *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
  }
  il2cpp_init_class();
  return (Il2CppObject *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__MapObjects>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapObjects_g____getter_3_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x3e470a0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings__<__CreatePropertyBinding__MapObjects>g____getter_3_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703106 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05703106 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Characters>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Characters_g____getter_4_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x3e47110

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings__<__CreatePropertyBinding__Characters>g____getter_4_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703107 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05703107 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Titans>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Titans_g____getter_5_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x3e47180

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings__<__CreatePropertyBinding__Titans>g____getter_5_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703108 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05703108 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Humans>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Humans_g____getter_6_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x3e471f0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings__<__CreatePropertyBinding__Humans>g____getter_6_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703109 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05703109 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Projectiles>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Projectiles_g____getter_7_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x3e47260

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings__<__CreatePropertyBinding__Projectiles>g____getter_7_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570310a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_0570310a = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Entities>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Entities_g____getter_8_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x3e472d0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings__<__CreatePropertyBinding__Entities>g____getter_8_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570310b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_0570310b = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Hitboxes>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Hitboxes_g____getter_9_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x3e47340

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings__<__CreatePropertyBinding__Hitboxes>g____getter_9_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570310c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_0570310c = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__MapEditor>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapEditor_g____getter_10_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x3e473b0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings__<__CreatePropertyBinding__MapEditor>g____getter_10_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_0570310d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_0570310d = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(Il2CppObject **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicCollideWithEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollideWithEnum___ctor (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x3e45e70

void CustomLogic_CustomLogicCollideWithEnum___ctor
               (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ee1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702ee1 = '\x01';
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


// CustomLogic.CustomLogicCollideWithEnum$$get_All
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_All (const MethodInfo* method);
// 0x3e45ee0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_All(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ee2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05702ee2 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
  }
  il2cpp_init_class();
  return (System_String_o *)**(undefined8 **)(TypeInfo_MapObjectCollideWith + 0xb8);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_MapObjects
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_MapObjects (const MethodInfo* method);
// 0x3e45f50

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_MapObjects(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ee3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05702ee3 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 8);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Characters
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Characters (const MethodInfo* method);
// 0x3e45fc0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Characters(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ee4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05702ee4 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x10);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Titans
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Titans (const MethodInfo* method);
// 0x3e46030

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Titans(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ee5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05702ee5 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x18);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Humans
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Humans (const MethodInfo* method);
// 0x3e460a0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Humans(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ee6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05702ee6 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x20);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Projectiles
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Projectiles (const MethodInfo* method);
// 0x3e46110

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Projectiles(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ee7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05702ee7 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x28);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Entities
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Entities (const MethodInfo* method);
// 0x3e46180

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Entities(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ee8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05702ee8 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x30);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Hitboxes
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Hitboxes (const MethodInfo* method);
// 0x3e461f0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Hitboxes(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702ee9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05702ee9 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x38);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_MapEditor
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_MapEditor (const MethodInfo* method);
// 0x3e46260

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_MapEditor(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702eea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapObjectCollideWith);
    DAT_05702eea = '\x01';
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapObjectCollideWith + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_MapObjectCollideWith + 0xb8) + 0x40);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_ClassName (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x3e462d0

System_String_o *
CustomLogic_CustomLogicCollideWithEnum__get_ClassName
          (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  if (DAT_05702eeb == '\0') {
    il2cpp_init_method_metadata(&"CollideWithEnum");
    DAT_05702eeb = '\x01';
  }
  return "CollideWithEnum";
}


// CustomLogic.CustomLogicCollideWithEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_IsAbstract (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x3e46300

bool_conflict
CustomLogic_CustomLogicCollideWithEnum__get_IsAbstract
          (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_IsStatic (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x3e46310

bool_conflict
CustomLogic_CustomLogicCollideWithEnum__get_IsStatic
          (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x3e46320

bool_conflict
CustomLogic_CustomLogicCollideWithEnum__get_InheritBaseMembers
          (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


