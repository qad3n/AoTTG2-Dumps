// Type: CustomLogic.CustomLogicErenAnimationEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicErenAnimationEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicErenAnimationEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicErenAnimationEnum_o* CustomLogic_CustomLogicErenAnimationEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a61d80

CustomLogic_CustomLogicErenAnimationEnum_o *
CustomLogic_CustomLogicErenAnimationEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546389 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicErenAnimationEnum);
    Il2CppMethodInitialized_07546389 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicErenAnimationEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum);
  if (Il2CppMethodInitialized_07546377 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546377 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicErenAnimationEnum_o *)__this;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicErenAnimationEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a61ea0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicErenAnimationEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_0754638a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"Die");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteNod");
    il2cpp_codegen_initialize_runtime_metadata(&"RockWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"RockLift");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"RockLift001");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Fall");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    il2cpp_codegen_initialize_runtime_metadata(&"RockFixHole");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteRoar");
    Il2CppMethodInitialized_0754638a = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x5376547a) {
    if (uVar2 < 0x3c572baa) {
      if (uVar2 < 0xff8caa9) {
        if (uVar2 == 0xe1ef32d) {
          bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Jump
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xff8caa8) {
          bVar1 = System_String__op_Equality(name,"RockLift001",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift001
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x22ccd730) {
        bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Walk
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3c572ba9) {
        bVar1 = System_String__op_Equality(name,"RockFixHole",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockFixHole
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x40e2cf22) {
      if (uVar2 == 0x3d692a71) {
        bVar1 = System_String__op_Equality(name,"Die",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Die
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x40e2cf21) {
        bVar1 = System_String__op_Equality(name,"RockLift",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x45aa17b3) {
      bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x53765479) {
      bVar1 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xad225086) {
    if (uVar2 < 0x7b00bc81) {
      if (uVar2 == 0x5d992b41) {
        bVar1 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Stun
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x7b00bc80) {
        bVar1 = System_String__op_Equality(name,"Fall",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Fall
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x8d57e66a) {
      bVar1 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Run
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xad225085) {
      bVar1 = System_String__op_Equality(name,"RockWalk",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockWalk
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc6f75898) {
    if (uVar2 == 0xc1018924) {
      bVar1 = System_String__op_Equality(name,"EmoteNod",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc6f75897) {
      bVar1 = System_String__op_Equality(name,"EmoteRoar",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xc8f30ee7) {
    bVar1 = System_String__op_Equality(name,"AttackKick",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackKick
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xee1682bc) {
    bVar1 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Land
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicErenAnimationEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x5a624f0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754638b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_0754638b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x5a62590

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754638c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_0754638c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Run_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x5a62630

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754638d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_0754638d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Walk_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x5a626d0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754638e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_0754638e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Jump_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Fall
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Fall (const MethodInfo* method);
// 0x5a62770

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Fall(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754638f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_0754638f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Fall_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x5a62810

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546390 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_07546390 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Land_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Die
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Die (const MethodInfo* method);
// 0x5a628b0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Die(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546391 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_07546391 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x5a62950

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackCombo(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546392 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_07546392 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackCombo_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__AttackKick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackKick (const MethodInfo* method);
// 0x5a629f0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__AttackKick(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546393 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_07546393 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__AttackKick_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x5a62a90

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546394 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_07546394 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__Stun_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteNod
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod (const MethodInfo* method);
// 0x5a62b30

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteNod(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546395 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_07546395 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteNod_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__EmoteRoar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar (const MethodInfo* method);
// 0x5a62bd0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__EmoteRoar(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546396 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_07546396 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__EmoteRoar_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockLift
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift (const MethodInfo* method);
// 0x5a62c70

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546397 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_07546397 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockLift001
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift001 (const MethodInfo* method);
// 0x5a62d10

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockLift001(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546398 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift001_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_07546398 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockLift001_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockWalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockWalk (const MethodInfo* method);
// 0x5a62db0

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockWalk(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546399 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockWalk_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_07546399 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockWalk_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$__CreatePropertyBinding__RockFixHole
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o* CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockFixHole (const MethodInfo* method);
// 0x5a62e50

CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *
CustomLogic_CustomLogicErenAnimationEnum_Bindings____CreatePropertyBinding__RockFixHole(MethodInfo *method)

{
  System_Func_CustomLogicErenAnimationEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754639a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockFixHole_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
    Il2CppMethodInitialized_0754639a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicErenAnimationEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings___CreatePropertyBinding__RockFixHole_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicErenAnimationEnum_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicErenAnimationEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a62ef0

void CustomLogic_CustomLogicErenAnimationEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754639b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"Die");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteNod");
    il2cpp_codegen_initialize_runtime_metadata(&"RockWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"RockLift");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"RockLift001");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Fall");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    il2cpp_codegen_initialize_runtime_metadata(&"RockFixHole");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteRoar");
    Il2CppMethodInitialized_0754639b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Run",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Fall",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Land",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Die",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackCombo",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackKick",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stun",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteNod",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteRoar",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockLift",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockLift001",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockWalk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RockFixHole",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicErenAnimationEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a631b0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546378 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_idle");
    Il2CppMethodInitialized_07546378 = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_idle";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a631e0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Run_g____getter_3_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546379 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_run");
    Il2CppMethodInitialized_07546379 = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_run";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a63210

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_walk");
    Il2CppMethodInitialized_0754637a = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a63240

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_5_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_start");
    Il2CppMethodInitialized_0754637b = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_jump_start";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Fall>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a63270

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Fall_g____getter_6_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_air");
    Il2CppMethodInitialized_0754637c = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_jump_air";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a632a0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Land_g____getter_7_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_land");
    Il2CppMethodInitialized_0754637d = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_jump_land";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a632d0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_die");
    Il2CppMethodInitialized_0754637e = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_die";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_9_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a63300

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_9_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_attack_combo_full");
    Il2CppMethodInitialized_0754637f = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_attack_combo_full";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__AttackKick>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_10_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a63330

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__AttackKick_g____getter_10_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546380 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_attack_kick");
    Il2CppMethodInitialized_07546380 = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_attack_kick";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_11_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a63360

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_11_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546381 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_hit_titan");
    Il2CppMethodInitialized_07546381 = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_hit_titan";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteNod>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_12_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a63390

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteNod_g____getter_12_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546382 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_yes");
    Il2CppMethodInitialized_07546382 = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_yes";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__EmoteRoar>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_13_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a633c0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__EmoteRoar_g____getter_13_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546383 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_born");
    Il2CppMethodInitialized_07546383 = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_born";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockLift>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift_g____getter_14_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a633f0

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift_g____getter_14_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546384 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_lift");
    Il2CppMethodInitialized_07546384 = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_rock_lift";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockLift001>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift001_g____getter_15_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a63420

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockLift001_g____getter_15_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546385 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_lift.001");
    Il2CppMethodInitialized_07546385 = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_rock_lift.001";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockWalk>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockWalk_g____getter_16_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a63450

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockWalk_g____getter_16_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546386 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_walk");
    Il2CppMethodInitialized_07546386 = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_rock_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum.Bindings$$<__CreatePropertyBinding__RockFixHole>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockFixHole_g____getter_17_0 (CustomLogic_CustomLogicErenAnimationEnum_o* __i, const MethodInfo* method);
// 0x5a63480

Il2CppObject *
CustomLogic_CustomLogicErenAnimationEnum_Bindings_____CreatePropertyBinding__RockFixHole_g____getter_17_0
          (CustomLogic_CustomLogicErenAnimationEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546387 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_fix_hole");
    Il2CppMethodInitialized_07546387 = '\x01';
  }
  return (Il2CppObject *)"ErenRig_VER2|et_rock_fix_hole";
}


// CustomLogic.CustomLogicErenAnimationEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicErenAnimationEnum___ctor (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a619b0

void CustomLogic_CustomLogicErenAnimationEnum___ctor
               (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546377 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546377 = '\x01';
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


// CustomLogic.CustomLogicErenAnimationEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Idle (const MethodInfo* method);
// 0x5a61a20

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Idle(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546378 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_idle");
    Il2CppMethodInitialized_07546378 = '\x01';
  }
  return "ErenRig_VER2|et_idle";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Run (const MethodInfo* method);
// 0x5a61a50

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Run(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546379 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_run");
    Il2CppMethodInitialized_07546379 = '\x01';
  }
  return "ErenRig_VER2|et_run";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Walk (const MethodInfo* method);
// 0x5a61a80

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Walk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_walk");
    Il2CppMethodInitialized_0754637a = '\x01';
  }
  return "ErenRig_VER2|et_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Jump (const MethodInfo* method);
// 0x5a61ab0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Jump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_start");
    Il2CppMethodInitialized_0754637b = '\x01';
  }
  return "ErenRig_VER2|et_jump_start";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Fall
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Fall (const MethodInfo* method);
// 0x5a61ae0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Fall(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_air");
    Il2CppMethodInitialized_0754637c = '\x01';
  }
  return "ErenRig_VER2|et_jump_air";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Land (const MethodInfo* method);
// 0x5a61b10

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Land(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_jump_land");
    Il2CppMethodInitialized_0754637d = '\x01';
  }
  return "ErenRig_VER2|et_jump_land";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Die
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Die (const MethodInfo* method);
// 0x5a61b40

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Die(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_die");
    Il2CppMethodInitialized_0754637e = '\x01';
  }
  return "ErenRig_VER2|et_die";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_AttackCombo (const MethodInfo* method);
// 0x5a61b70

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_AttackCombo(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754637f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_attack_combo_full");
    Il2CppMethodInitialized_0754637f = '\x01';
  }
  return "ErenRig_VER2|et_attack_combo_full";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_AttackKick
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_AttackKick (const MethodInfo* method);
// 0x5a61ba0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_AttackKick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546380 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_attack_kick");
    Il2CppMethodInitialized_07546380 = '\x01';
  }
  return "ErenRig_VER2|et_attack_kick";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_Stun (const MethodInfo* method);
// 0x5a61bd0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_Stun(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546381 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_hit_titan");
    Il2CppMethodInitialized_07546381 = '\x01';
  }
  return "ErenRig_VER2|et_hit_titan";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_EmoteNod
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_EmoteNod (const MethodInfo* method);
// 0x5a61c00

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_EmoteNod(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546382 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_yes");
    Il2CppMethodInitialized_07546382 = '\x01';
  }
  return "ErenRig_VER2|et_yes";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_EmoteRoar
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_EmoteRoar (const MethodInfo* method);
// 0x5a61c30

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_EmoteRoar(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546383 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_born");
    Il2CppMethodInitialized_07546383 = '\x01';
  }
  return "ErenRig_VER2|et_born";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockLift
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockLift (const MethodInfo* method);
// 0x5a61c60

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockLift(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546384 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_lift");
    Il2CppMethodInitialized_07546384 = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockLift001
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockLift001 (const MethodInfo* method);
// 0x5a61c90

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockLift001(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546385 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_lift.001");
    Il2CppMethodInitialized_07546385 = '\x01';
  }
  return "ErenRig_VER2|et_rock_lift.001";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockWalk
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockWalk (const MethodInfo* method);
// 0x5a61cc0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockWalk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546386 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_walk");
    Il2CppMethodInitialized_07546386 = '\x01';
  }
  return "ErenRig_VER2|et_rock_walk";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_RockFixHole
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_RockFixHole (const MethodInfo* method);
// 0x5a61cf0

System_String_o * CustomLogic_CustomLogicErenAnimationEnum__get_RockFixHole(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546387 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenRig_VER2|et_rock_fix_hole");
    Il2CppMethodInitialized_07546387 = '\x01';
  }
  return "ErenRig_VER2|et_rock_fix_hole";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicErenAnimationEnum__get_ClassName (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a61d20

System_String_o *
CustomLogic_CustomLogicErenAnimationEnum__get_ClassName
          (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546388 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ErenAnimationEnum");
    Il2CppMethodInitialized_07546388 = '\x01';
  }
  return "ErenAnimationEnum";
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_IsAbstract (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a61d50

bool CustomLogic_CustomLogicErenAnimationEnum__get_IsAbstract
               (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_IsStatic (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a61d60

bool CustomLogic_CustomLogicErenAnimationEnum__get_IsStatic
               (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicErenAnimationEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicErenAnimationEnum__get_InheritBaseMembers (CustomLogic_CustomLogicErenAnimationEnum_o* __this, const MethodInfo* method);
// 0x5a61d70

bool CustomLogic_CustomLogicErenAnimationEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicErenAnimationEnum_o *__this,MethodInfo *method)

{
  return true;
}


