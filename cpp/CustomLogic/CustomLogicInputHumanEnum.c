// Type: CustomLogic.CustomLogicInputHumanEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputHumanEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputHumanEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputHumanEnum_o* CustomLogic_CustomLogicInputHumanEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a87310

CustomLogic_CustomLogicInputHumanEnum_o *
CustomLogic_CustomLogicInputHumanEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputHumanEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754670b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_0754670b = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputHumanEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  if (Il2CppMethodInitialized_075466f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075466f8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputHumanEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a87430

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputHumanEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicInputHumanEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_0754670c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"HorseWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Dash");
    il2cpp_codegen_initialize_runtime_metadata(&"HookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"HookBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOut");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseJump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackDefault");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Reload");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeLock");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelIn");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseMount");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRight");
    Il2CppMethodInitialized_0754670c = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x540059f0) {
    if (uVar2 < 0x1a5c64b7) {
      if (uVar2 < 0x16ed547b) {
        if (uVar2 == 0xe1ef32d) {
          bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Jump
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x16ed547a) {
          bVar1 = System_String__op_Equality(name,"ReelIn",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelIn
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x1a43a2ac) {
        bVar1 = System_String__op_Equality(name,"Reload",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Reload
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x1a5c64b6) {
        bVar1 = System_String__op_Equality(name,"AttackDefault",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x2e485539) {
      if (uVar2 == 0x22ccd730) {
        bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Walk
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x2e485538) {
        bVar1 = System_String__op_Equality(name,"NapeLock",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__NapeLock
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x41bc24a7) {
      bVar1 = System_String__op_Equality(name,"HookLeft",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookLeft
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x540059ef) {
      bVar1 = System_String__op_Equality(name,"HorseWalk",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseWalk
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x8f5fbe99) {
    if (uVar2 < 0x68597616) {
      if (uVar2 == 0x5be800ee) {
        bVar1 = System_String__op_Equality(name,"HorseJump",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseJump
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x68597615) {
        bVar1 = System_String__op_Equality(name,"Dash",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dash
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x8f5fbe98) {
      bVar1 = System_String__op_Equality(name,"AttackSpecial",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackSpecial
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x77f33158) {
      bVar1 = System_String__op_Equality(name,"HookRight",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookRight
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc52547e8) {
    if (uVar2 == 0xa114d213) {
      bVar1 = System_String__op_Equality(name,"ReelOut",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelOut
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc52547e7) {
      bVar1 = System_String__op_Equality(name,"HorseMount",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseMount
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf526d670) {
    bVar1 = System_String__op_Equality(name,"Dodge",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dodge
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf8af8641) {
    bVar1 = System_String__op_Equality(name,"HookBoth",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookBoth
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputHumanEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__AttackDefault
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault (const MethodInfo* method);
// 0x5a87a80

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackDefault(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754670d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackDefault_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_0754670d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackDefault_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__AttackSpecial
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackSpecial (const MethodInfo* method);
// 0x5a87b20

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__AttackSpecial(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754670e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackSpecial_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_0754670e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__AttackSpecial_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookLeft (const MethodInfo* method);
// 0x5a87bc0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookLeft(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754670f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookLeft_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_0754670f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookLeft_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookRight
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookRight (const MethodInfo* method);
// 0x5a87c60

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookRight(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546710 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookRight_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_07546710 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookRight_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HookBoth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookBoth (const MethodInfo* method);
// 0x5a87d00

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HookBoth(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546711 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookBoth_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_07546711 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HookBoth_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Dash
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dash (const MethodInfo* method);
// 0x5a87da0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dash(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546712 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dash_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_07546712 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dash_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__ReelIn
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelIn (const MethodInfo* method);
// 0x5a87e40

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelIn(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546713 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_07546713 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelIn_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__ReelOut
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelOut (const MethodInfo* method);
// 0x5a87ee0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__ReelOut(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546714 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_07546714 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__ReelOut_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Dodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dodge (const MethodInfo* method);
// 0x5a87f80

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Dodge(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546715 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_07546715 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Dodge_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x5a88020

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546716 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_07546716 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Reload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Reload (const MethodInfo* method);
// 0x5a880c0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Reload(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546717 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Reload_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_07546717 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Reload_g____getter_12_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseMount (const MethodInfo* method);
// 0x5a88160

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseMount(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546718 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseMount_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_07546718 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseMount_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseWalk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseWalk (const MethodInfo* method);
// 0x5a88200

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseWalk(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546719 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseWalk_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_07546719 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseWalk_g____getter_14
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__HorseJump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseJump (const MethodInfo* method);
// 0x5a882a0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__HorseJump(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754671a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseJump_g____getter_15
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_0754671a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__HorseJump_g____getter_15
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__NapeLock
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__NapeLock (const MethodInfo* method);
// 0x5a88340

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__NapeLock(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754671b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__NapeLock_g____getter_16
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_0754671b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__NapeLock_g____getter_16
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o* CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x5a883e0

CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *
CustomLogic_CustomLogicInputHumanEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicInputHumanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754671c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_17_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
    Il2CppMethodInitialized_0754671c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputHumanEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_17_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputHumanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a88480

void CustomLogic_CustomLogicInputHumanEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754671d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"HorseWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Dash");
    il2cpp_codegen_initialize_runtime_metadata(&"HookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"HookBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOut");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseJump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackDefault");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Reload");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeLock");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelIn");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseMount");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRight");
    Il2CppMethodInitialized_0754671d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackDefault",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSpecial",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookRight",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HookBoth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dash",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReelIn",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReelOut",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dodge",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reload",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseMount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseWalk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HorseJump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NapeLock",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputHumanEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__AttackDefault>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackDefault_g____getter_2_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a88740
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8875d: cmp byte ptr [rip + 0x1abe258], 0
// asm:   0x5a88764: je 0x5a887b3

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackDefault_g____getter_2_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754671e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_0754671e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469bc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackDefaultValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__AttackSpecial>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackSpecial_g____getter_3_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a887f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8880d: cmp byte ptr [rip + 0x1abe1a9], 0
// asm:   0x5a88814: je 0x5a88863

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__AttackSpecial_g____getter_3_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754671f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_0754671f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469bd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackSpecialValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookLeft>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookLeft_g____getter_4_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a888a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a888bd: cmp byte ptr [rip + 0x1abe0fa], 0
// asm:   0x5a888c4: je 0x5a88913

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookLeft_g____getter_4_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546720 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546720 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469be = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookLeftValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookRight>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookRight_g____getter_5_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a88950
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8896d: cmp byte ptr [rip + 0x1abe04b], 0
// asm:   0x5a88974: je 0x5a889c3

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookRight_g____getter_5_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546721 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546721 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469bf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookRightValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HookBoth>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookBoth_g____getter_6_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a88a00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a88a1d: cmp byte ptr [rip + 0x1abdf9c], 0
// asm:   0x5a88a24: je 0x5a88a73

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HookBoth_g____getter_6_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546722 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546722 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469c0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookBothValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Dash>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_7_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a88ab0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a88acd: cmp byte ptr [rip + 0x1abdeed], 0
// asm:   0x5a88ad4: je 0x5a88b23

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dash_g____getter_7_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546723 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546723 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469c1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DashValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x30);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__ReelIn>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_8_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a88b60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a88b7d: cmp byte ptr [rip + 0x1abde3e], 0
// asm:   0x5a88b84: je 0x5a88bd3

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelIn_g____getter_8_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546724 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546724 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469c2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelInValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x38);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__ReelOut>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_9_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a88c10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a88c2d: cmp byte ptr [rip + 0x1abdd8f], 0
// asm:   0x5a88c34: je 0x5a88c83

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__ReelOut_g____getter_9_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546725 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546725 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469c3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelOutValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x40);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Dodge>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_10_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a88cc0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a88cdd: cmp byte ptr [rip + 0x1abdce0], 0
// asm:   0x5a88ce4: je 0x5a88d33

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Dodge_g____getter_10_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546726 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546726 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469c4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DodgeValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x48);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a88d70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a88d8d: cmp byte ptr [rip + 0x1abdc31], 0
// asm:   0x5a88d94: je 0x5a88de3

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_11_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546727 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546727 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469c5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->JumpValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x50);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Reload>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_12_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a88e20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a88e3d: cmp byte ptr [rip + 0x1abdb82], 0
// asm:   0x5a88e44: je 0x5a88e93

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_12_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546728 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546728 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469c6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReloadValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x58);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseMount>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_13_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a88ed0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a88eed: cmp byte ptr [rip + 0x1abdad3], 0
// asm:   0x5a88ef4: je 0x5a88f43

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseMount_g____getter_13_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546729 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469c7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseMountValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x60);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseWalk>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseWalk_g____getter_14_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a88f80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a88f9d: cmp byte ptr [rip + 0x1abda24], 0
// asm:   0x5a88fa4: je 0x5a88ff3

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseWalk_g____getter_14_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754672a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_0754672a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469c8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseWalkValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x68);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__HorseJump>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseJump_g____getter_15_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a89030
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8904d: cmp byte ptr [rip + 0x1abd975], 0
// asm:   0x5a89054: je 0x5a890a3

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__HorseJump_g____getter_15_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754672b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_0754672b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469c9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseJumpValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x70);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__NapeLock>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__NapeLock_g____getter_16_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a890e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a890fd: cmp byte ptr [rip + 0x1abd8c6], 0
// asm:   0x5a89104: je 0x5a89153

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__NapeLock_g____getter_16_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754672c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_0754672c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469ca = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->NapeLockValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x78);
}


// CustomLogic.CustomLogicInputHumanEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_17_0 (CustomLogic_CustomLogicInputHumanEnum_o* __i, const MethodInfo* method);
// 0x5a89190
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a891ad: cmp byte ptr [rip + 0x1abd817], 0
// asm:   0x5a891b4: je 0x5a89202

Il2CppObject *
CustomLogic_CustomLogicInputHumanEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_17_0
          (CustomLogic_CustomLogicInputHumanEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754672d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_0754672d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
  }
  if (Il2CppMethodInitialized_075469cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075469cb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->WalkValue;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields;
}


// CustomLogic.CustomLogicInputHumanEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum___ctor (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x5a86830

void CustomLogic_CustomLogicInputHumanEnum___ctor
               (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075466f8 = '\x01';
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


// CustomLogic.CustomLogicInputHumanEnum$$get_AttackDefault
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_AttackDefault (const MethodInfo* method);
// 0x5a868a0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_AttackDefault(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075466f9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackDefaultValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_AttackSpecial
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_AttackSpecial (const MethodInfo* method);
// 0x5a86910

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_AttackSpecial(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075466fa = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->AttackSpecialValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookLeft
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookLeft (const MethodInfo* method);
// 0x5a86980

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookLeft(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075466fb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookLeftValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookRight
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookRight (const MethodInfo* method);
// 0x5a869f0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookRight(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075466fc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookRightValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HookBoth
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HookBoth (const MethodInfo* method);
// 0x5a86a60

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HookBoth(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075466fd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HookBothValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Dash
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Dash (const MethodInfo* method);
// 0x5a86ad0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Dash(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075466fe = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DashValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x30);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ReelIn
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ReelIn (const MethodInfo* method);
// 0x5a86b40

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_ReelIn(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075466ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_075466ff = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelInValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x38);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ReelOut
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ReelOut (const MethodInfo* method);
// 0x5a86bb0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_ReelOut(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546700 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546700 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReelOutValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x40);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Dodge
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Dodge (const MethodInfo* method);
// 0x5a86c20

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Dodge(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546701 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546701 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->DodgeValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x48);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Jump (const MethodInfo* method);
// 0x5a86c90

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Jump(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546702 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546702 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->JumpValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x50);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Reload
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Reload (const MethodInfo* method);
// 0x5a86d00

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Reload(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546703 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546703 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->ReloadValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x58);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseMount
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseMount (const MethodInfo* method);
// 0x5a86d70

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseMount(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546704 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546704 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseMountValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x60);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseWalk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseWalk (const MethodInfo* method);
// 0x5a86de0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseWalk(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546705 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546705 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseWalkValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x68);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_HorseJump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_HorseJump (const MethodInfo* method);
// 0x5a86e50

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_HorseJump(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546706 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546706 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->HorseJumpValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x70);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_NapeLock
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_NapeLock (const MethodInfo* method);
// 0x5a86ec0

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_NapeLock(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546707 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->NapeLockValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields + 0x78);
}


// CustomLogic.CustomLogicInputHumanEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_Walk (const MethodInfo* method);
// 0x5a86f30

System_String_o * CustomLogic_CustomLogicInputHumanEnum__get_Walk(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546708 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    Il2CppMethodInitialized_07546708 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputHumanEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    return TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->WalkValue;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputHumanEnum)->static_fields;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputHumanEnum__get_ClassName (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x5a86fa0

System_String_o *
CustomLogic_CustomLogicInputHumanEnum__get_ClassName
          (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546709 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputHumanEnum");
    Il2CppMethodInitialized_07546709 = '\x01';
  }
  return "InputHumanEnum";
}


// CustomLogic.CustomLogicInputHumanEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_IsAbstract (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x5a86fd0

bool CustomLogic_CustomLogicInputHumanEnum__get_IsAbstract
               (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_IsStatic (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x5a86fe0

bool CustomLogic_CustomLogicInputHumanEnum__get_IsStatic
               (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputHumanEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputHumanEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputHumanEnum_o* __this, const MethodInfo* method);
// 0x5a86ff0

bool CustomLogic_CustomLogicInputHumanEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicInputHumanEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputHumanEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputHumanEnum___cctor (const MethodInfo* method);
// 0x5a87000

void CustomLogic_CustomLogicInputHumanEnum___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicInputHumanEnum_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_0754670a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"Human/AttackSpecial");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HookBoth");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HorseJump");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Dodge");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/ReelOut");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HookLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HookRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Dash");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HorseWalk");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/NapeLock");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/AttackDefault");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/HorseMount");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/ReelIn");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Reload");
    Il2CppMethodInitialized_0754670a = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->WalkValue = "Human/Walk";
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields->WalkValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->AttackDefaultValue = "Human/AttackDefault";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackDefaultValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->AttackSpecialValue = "Human/AttackSpecial";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackSpecialValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->HookLeftValue = "Human/HookLeft";
  Il2CppCodeGenWriteBarrier(&pCVar1->HookLeftValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->HookRightValue = "Human/HookRight";
  Il2CppCodeGenWriteBarrier(&pCVar1->HookRightValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->HookBothValue = "Human/HookBoth";
  Il2CppCodeGenWriteBarrier(&pCVar1->HookBothValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->DashValue = "Human/Dash";
  Il2CppCodeGenWriteBarrier(&pCVar1->DashValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->ReelInValue = "Human/ReelIn";
  Il2CppCodeGenWriteBarrier(&pCVar1->ReelInValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->ReelOutValue = "Human/ReelOut";
  Il2CppCodeGenWriteBarrier(&pCVar1->ReelOutValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->DodgeValue = "Human/Dodge";
  Il2CppCodeGenWriteBarrier(&pCVar1->DodgeValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->JumpValue = "Human/Jump";
  Il2CppCodeGenWriteBarrier(&pCVar1->JumpValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->ReloadValue = "Human/Reload";
  Il2CppCodeGenWriteBarrier(&pCVar1->ReloadValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->HorseMountValue = "Human/HorseMount";
  Il2CppCodeGenWriteBarrier(&pCVar1->HorseMountValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->HorseWalkValue = "Human/HorseWalk";
  Il2CppCodeGenWriteBarrier(&pCVar1->HorseWalkValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->HorseJumpValue = "Human/HorseJump";
  Il2CppCodeGenWriteBarrier(&pCVar1->HorseJumpValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputHumanEnum->static_fields;
  pCVar1->NapeLockValue = "Human/NapeLock";
  Il2CppCodeGenWriteBarrier(&pCVar1->NapeLockValue);
  return;
}


