// Type: CustomLogic.CustomLogicCollideWithEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicCollideWithEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollideWithEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollideWithEnum_o* CustomLogic_CustomLogicCollideWithEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a5b610

CustomLogic_CustomLogicCollideWithEnum_o *
CustomLogic_CustomLogicCollideWithEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546312 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideWithEnum);
    Il2CppMethodInitialized_07546312 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollideWithEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum);
  if (Il2CppMethodInitialized_07546307 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546307 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicCollideWithEnum_o *)__this;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollideWithEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a5b730

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollideWithEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicCollideWithEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546313 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Hitboxes");
    il2cpp_codegen_initialize_runtime_metadata(&"Characters");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"Entities");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    il2cpp_codegen_initialize_runtime_metadata(&"Projectiles");
    il2cpp_codegen_initialize_runtime_metadata(&"Humans");
    il2cpp_codegen_initialize_runtime_metadata(&"MapObjects");
    Il2CppMethodInitialized_07546313 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x3d352248) {
    if (uVar2 < 0x1838400b) {
      if (uVar2 == 0xfadbf6b) {
        bVar1 = System_String__op_Equality(name,"Projectiles",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
            pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Projectiles
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Projectiles
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x1838400a) {
        bVar1 = System_String__op_Equality(name,"Entities",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
            pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Entities
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Entities
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x2787757f) {
      bVar1 = System_String__op_Equality(name,"Hitboxes",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Hitboxes
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Hitboxes
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x3d352247) {
      bVar1 = System_String__op_Equality(name,"MapObjects",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapObjects
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapObjects
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x75afe365) {
    if (uVar2 == 0x5c14003e) {
      bVar1 = System_String__op_Equality(name,"Titans",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Titans
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Titans
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x75afe364) {
      bVar1 = System_String__op_Equality(name,"All",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0x930b044b) {
    bVar1 = System_String__op_Equality(name,"Humans",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Humans
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Humans
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xaa3084c4) {
    bVar1 = System_String__op_Equality(name,"MapEditor",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapEditor
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapEditor
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfc6ef2f9) {
    bVar1 = System_String__op_Equality(name,"Characters",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
        pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Characters
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Characters
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollideWithEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__All
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All (const MethodInfo* method);
// 0x5a5bb90

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__All(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546314 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__All_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_07546314 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__All_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__MapObjects
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapObjects (const MethodInfo* method);
// 0x5a5bc30

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapObjects(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546315 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapObjects_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_07546315 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapObjects_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Characters
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Characters (const MethodInfo* method);
// 0x5a5bcd0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Characters(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546316 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Characters_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_07546316 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Characters_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Titans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Titans (const MethodInfo* method);
// 0x5a5bd70

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Titans(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546317 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Titans_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_07546317 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Titans_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Humans
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Humans (const MethodInfo* method);
// 0x5a5be10

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Humans(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546318 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Humans_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_07546318 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Humans_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Projectiles
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Projectiles (const MethodInfo* method);
// 0x5a5beb0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Projectiles(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546319 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Projectiles_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_07546319 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Projectiles_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Entities
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Entities (const MethodInfo* method);
// 0x5a5bf50

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Entities(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754631a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Entities_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_0754631a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Entities_g____getter_8
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__Hitboxes
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Hitboxes (const MethodInfo* method);
// 0x5a5bff0

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__Hitboxes(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754631b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Hitboxes_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_0754631b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__Hitboxes_g____getter_9
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$__CreatePropertyBinding__MapEditor
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o* CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapEditor (const MethodInfo* method);
// 0x5a5c090

CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *
CustomLogic_CustomLogicCollideWithEnum_Bindings____CreatePropertyBinding__MapEditor(MethodInfo *method)

{
  System_Func_CustomLogicCollideWithEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754631c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapEditor_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
    Il2CppMethodInitialized_0754631c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollideWithEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings___CreatePropertyBinding__MapEditor_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollideWithEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollideWithEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a5c130

void CustomLogic_CustomLogicCollideWithEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754631d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Hitboxes");
    il2cpp_codegen_initialize_runtime_metadata(&"Characters");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"Entities");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    il2cpp_codegen_initialize_runtime_metadata(&"Projectiles");
    il2cpp_codegen_initialize_runtime_metadata(&"Humans");
    il2cpp_codegen_initialize_runtime_metadata(&"MapObjects");
    Il2CppMethodInitialized_0754631d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"All",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MapObjects",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Characters",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Titans",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Humans",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Projectiles",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Entities",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Hitboxes",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MapEditor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCollideWithEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__All>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__All_g____getter_2_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x5a5c310

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__All_g____getter_2_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546580 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546580 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->All;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields;
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__MapObjects>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapObjects_g____getter_3_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x5a5c380

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapObjects_g____getter_3_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546581 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546581 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->MapObjects;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 8);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Characters>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Characters_g____getter_4_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x5a5c3f0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Characters_g____getter_4_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546582 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546582 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Characters;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x10);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Titans>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Titans_g____getter_5_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x5a5c460

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Titans_g____getter_5_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546583 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546583 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Titans;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x18);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Humans>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Humans_g____getter_6_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x5a5c4d0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Humans_g____getter_6_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546584 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546584 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Humans;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x20);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Projectiles>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Projectiles_g____getter_7_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x5a5c540

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Projectiles_g____getter_7_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546585 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546585 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Projectiles;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x28);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Entities>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Entities_g____getter_8_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x5a5c5b0

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Entities_g____getter_8_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546586 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546586 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x30);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__Hitboxes>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Hitboxes_g____getter_9_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x5a5c620

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__Hitboxes_g____getter_9_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546587 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546587 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Hitboxes;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x38);
}


// CustomLogic.CustomLogicCollideWithEnum.Bindings$$<__CreatePropertyBinding__MapEditor>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapEditor_g____getter_10_0 (CustomLogic_CustomLogicCollideWithEnum_o* __i, const MethodInfo* method);
// 0x5a5c690

Il2CppObject *
CustomLogic_CustomLogicCollideWithEnum_Bindings_____CreatePropertyBinding__MapEditor_g____getter_10_0
          (CustomLogic_CustomLogicCollideWithEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546588 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546588 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->MapEditor;
  }
  return *(Il2CppObject **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x40);
}


// CustomLogic.CustomLogicCollideWithEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollideWithEnum___ctor (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x5a5b150

void CustomLogic_CustomLogicCollideWithEnum___ctor
               (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546307 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546307 = '\x01';
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


// CustomLogic.CustomLogicCollideWithEnum$$get_All
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_All (const MethodInfo* method);
// 0x5a5b1c0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_All(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546308 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546308 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return TypeInfo_Map_MapObjectCollideWith->static_fields->All;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_MapObjects
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_MapObjects (const MethodInfo* method);
// 0x5a5b230

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_MapObjects(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546309 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546309 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return TypeInfo_Map_MapObjectCollideWith->static_fields->MapObjects;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 8);
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Characters
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Characters (const MethodInfo* method);
// 0x5a5b2a0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Characters(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754630a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_0754630a = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return TypeInfo_Map_MapObjectCollideWith->static_fields->Characters;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x10)
  ;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Titans
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Titans (const MethodInfo* method);
// 0x5a5b310

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Titans(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754630b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_0754630b = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return TypeInfo_Map_MapObjectCollideWith->static_fields->Titans;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x18)
  ;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Humans
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Humans (const MethodInfo* method);
// 0x5a5b380

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Humans(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754630c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_0754630c = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return TypeInfo_Map_MapObjectCollideWith->static_fields->Humans;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x20)
  ;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Projectiles
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Projectiles (const MethodInfo* method);
// 0x5a5b3f0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Projectiles(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754630d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_0754630d = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return TypeInfo_Map_MapObjectCollideWith->static_fields->Projectiles;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x28)
  ;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Entities
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Entities (const MethodInfo* method);
// 0x5a5b460

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Entities(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754630e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_0754630e = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return TypeInfo_Map_MapObjectCollideWith->static_fields->Entities;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x30)
  ;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_Hitboxes
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_Hitboxes (const MethodInfo* method);
// 0x5a5b4d0

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_Hitboxes(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754630f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_0754630f = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return TypeInfo_Map_MapObjectCollideWith->static_fields->Hitboxes;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x38)
  ;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_MapEditor
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_MapEditor (const MethodInfo* method);
// 0x5a5b540

System_String_o * CustomLogic_CustomLogicCollideWithEnum__get_MapEditor(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546310 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    Il2CppMethodInitialized_07546310 = '\x01';
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
    return TypeInfo_Map_MapObjectCollideWith->static_fields->MapEditor;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith)->static_fields + 0x40)
  ;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollideWithEnum__get_ClassName (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x5a5b5b0

System_String_o *
CustomLogic_CustomLogicCollideWithEnum__get_ClassName
          (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546311 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CollideWithEnum");
    Il2CppMethodInitialized_07546311 = '\x01';
  }
  return "CollideWithEnum";
}


// CustomLogic.CustomLogicCollideWithEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_IsAbstract (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x5a5b5e0

bool CustomLogic_CustomLogicCollideWithEnum__get_IsAbstract
               (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_IsStatic (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x5a5b5f0

bool CustomLogic_CustomLogicCollideWithEnum__get_IsStatic
               (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCollideWithEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollideWithEnum__get_InheritBaseMembers (CustomLogic_CustomLogicCollideWithEnum_o* __this, const MethodInfo* method);
// 0x5a5b600

bool CustomLogic_CustomLogicCollideWithEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicCollideWithEnum_o *__this,MethodInfo *method)

{
  return true;
}


