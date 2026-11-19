// Type: CustomLogic.CustomLogicHumanStateEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicHumanStateEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicHumanStateEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicHumanStateEnum_o* CustomLogic_CustomLogicHumanStateEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a7c1e0

CustomLogic_CustomLogicHumanStateEnum_o *
CustomLogic_CustomLogicHumanStateEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicHumanStateEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546540 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546540 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicHumanStateEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  if (Il2CppMethodInitialized_0754652c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754652c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicHumanStateEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a7c300

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicHumanStateEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicHumanStateEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546541 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"GroundDodge");
    il2cpp_codegen_initialize_runtime_metadata(&"Die");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialAction");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialAttack");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"AirDodge");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteAction");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlide");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"Slide");
    il2cpp_codegen_initialize_runtime_metadata(&"MountingHorse");
    il2cpp_codegen_initialize_runtime_metadata(&"Reload");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Grab");
    Il2CppMethodInitialized_07546541 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x5d992b42) {
    if (uVar2 < 0x2ea46ab7) {
      if (uVar2 < 0x1a43a2ad) {
        if (uVar2 == 0x47d8d69) {
          bVar1 = System_String__op_Equality(name,"GroundDodge",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__GroundDodge
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1a43a2ac) {
          bVar1 = System_String__op_Equality(name,"Reload",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Reload
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x21c6d85f) {
        bVar1 = System_String__op_Equality(name,"Grab",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Grab
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x2ea46ab6) {
        bVar1 = System_String__op_Equality(name,"WallSlide",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__WallSlide
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x3d692a72) {
      if (uVar2 == 0x3cd2b931) {
        bVar1 = System_String__op_Equality(name,"EmoteAction",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__EmoteAction
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3d692a71) {
        bVar1 = System_String__op_Equality(name,"Die",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Die
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x45aa17b3) {
      bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x5d992b41) {
      bVar1 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Stun
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xb460940d) {
    if (uVar2 < 0x8ba9331e) {
      if (uVar2 == 0x8ba9331d) {
        bVar1 = System_String__op_Equality(name,"Attack",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Attack
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x6c198db1) {
        bVar1 = System_String__op_Equality(name,"Refill",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Refill
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x8d57e66a) {
      bVar1 = System_String__op_Equality(name,"Run",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Run
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xb460940c) {
      bVar1 = System_String__op_Equality(name,"SpecialAttack",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAttack
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xd92f4bcb) {
    if (uVar2 == 0xc7f8c02e) {
      bVar1 = System_String__op_Equality(name,"AirDodge",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__AirDodge
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd92f4bca) {
      bVar1 = System_String__op_Equality(name,"SpecialAction",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAction
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xee1682bc) {
    bVar1 = System_String__op_Equality(name,"Land",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Land
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf972e12b) {
    bVar1 = System_String__op_Equality(name,"MountingHorse",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__MountingHorse
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xffc7c086) {
    bVar1 = System_String__op_Equality(name,"Slide",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Slide
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicHumanStateEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Idle
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle (const MethodInfo* method);
// 0x5a7c9a0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Idle(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546542 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_07546542 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Idle_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Attack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Attack (const MethodInfo* method);
// 0x5a7ca40

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Attack(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546543 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Attack_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_07546543 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Attack_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__GroundDodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__GroundDodge (const MethodInfo* method);
// 0x5a7cae0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__GroundDodge(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546544 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__GroundDodge_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_07546544 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__GroundDodge_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__AirDodge
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__AirDodge (const MethodInfo* method);
// 0x5a7cb80

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__AirDodge(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546545 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__AirDodge_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_07546545 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__AirDodge_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Reload
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Reload (const MethodInfo* method);
// 0x5a7cc20

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Reload(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546546 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Reload_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_07546546 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Reload_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Refill
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Refill (const MethodInfo* method);
// 0x5a7ccc0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Refill(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546547 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Refill_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_07546547 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Refill_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Die
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Die (const MethodInfo* method);
// 0x5a7cd60

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Die(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546548 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_07546548 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Die_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Grab
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Grab (const MethodInfo* method);
// 0x5a7ce00

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Grab(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546549 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Grab_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_07546549 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Grab_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__EmoteAction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__EmoteAction (const MethodInfo* method);
// 0x5a7cea0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__EmoteAction(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754654a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__EmoteAction_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_0754654a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__EmoteAction_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__SpecialAttack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAttack (const MethodInfo* method);
// 0x5a7cf40

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAttack(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754654b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAttack_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_0754654b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAttack_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__SpecialAction
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAction (const MethodInfo* method);
// 0x5a7cfe0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__SpecialAction(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754654c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAction_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_0754654c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__SpecialAction_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Slide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Slide (const MethodInfo* method);
// 0x5a7d080

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Slide(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754654d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Slide_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_0754654d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Slide_g____getter_13_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Run
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Run (const MethodInfo* method);
// 0x5a7d120

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Run(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754654e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Run_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_0754654e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Run_g____getter_14_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Land
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Land (const MethodInfo* method);
// 0x5a7d1c0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Land(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754654f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Land_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_0754654f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Land_g____getter_15_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__MountingHorse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__MountingHorse (const MethodInfo* method);
// 0x5a7d260

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__MountingHorse(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546550 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__MountingHorse_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_07546550 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__MountingHorse_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__Stun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Stun (const MethodInfo* method);
// 0x5a7d300

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__Stun(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546551 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Stun_g____getter_17_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_07546551 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__Stun_g____getter_17_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$__CreatePropertyBinding__WallSlide
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o* CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__WallSlide (const MethodInfo* method);
// 0x5a7d3a0

CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *
CustomLogic_CustomLogicHumanStateEnum_Bindings____CreatePropertyBinding__WallSlide(MethodInfo *method)

{
  System_Func_CustomLogicHumanStateEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546552 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__WallSlide_g____getter_18
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
    Il2CppMethodInitialized_07546552 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicHumanStateEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings___CreatePropertyBinding__WallSlide_g____getter_18
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicHumanStateEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a7d440

void CustomLogic_CustomLogicHumanStateEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546553 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Run");
    il2cpp_codegen_initialize_runtime_metadata(&"GroundDodge");
    il2cpp_codegen_initialize_runtime_metadata(&"Die");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialAction");
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialAttack");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"Land");
    il2cpp_codegen_initialize_runtime_metadata(&"AirDodge");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteAction");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"WallSlide");
    il2cpp_codegen_initialize_runtime_metadata(&"Refill");
    il2cpp_codegen_initialize_runtime_metadata(&"Slide");
    il2cpp_codegen_initialize_runtime_metadata(&"MountingHorse");
    il2cpp_codegen_initialize_runtime_metadata(&"Reload");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Grab");
    Il2CppMethodInitialized_07546553 = '\x01';
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GroundDodge",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AirDodge",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reload",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Refill",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Die",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grab",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteAction",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialAttack",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpecialAction",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slide",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Run",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Land",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MountingHorse",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stun",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallSlide",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicHumanStateEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Idle>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7d720
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7d73d: cmp byte ptr [rip + 0x1ac8f07], 0
// asm:   0x5a7d744: je 0x5a7d792

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Idle_g____getter_2_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546554 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546554 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_0754664b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754664b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->IdleValue;
  }
  return *(Il2CppObject **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields;
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Attack>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Attack_g____getter_3_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7d7d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7d7ed: cmp byte ptr [rip + 0x1ac8e58], 0
// asm:   0x5a7d7f4: je 0x5a7d843

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Attack_g____getter_3_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546555 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546555 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_0754664c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754664c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AttackValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__GroundDodge>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__GroundDodge_g____getter_4_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7d880
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7d89d: cmp byte ptr [rip + 0x1ac8da9], 0
// asm:   0x5a7d8a4: je 0x5a7d8f3

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__GroundDodge_g____getter_4_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546556 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546556 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_0754664d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754664d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GroundDodgeValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__AirDodge>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__AirDodge_g____getter_5_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7d930
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7d94d: cmp byte ptr [rip + 0x1ac8cfa], 0
// asm:   0x5a7d954: je 0x5a7d9a3

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__AirDodge_g____getter_5_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546557 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546557 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_0754664e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754664e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AirDodgeValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Reload>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_6_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7d9e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7d9fd: cmp byte ptr [rip + 0x1ac8c4b], 0
// asm:   0x5a7da04: je 0x5a7da53

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Reload_g____getter_6_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546558 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_0754664f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754664f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->ReloadValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Refill>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_7_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7da90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7daad: cmp byte ptr [rip + 0x1ac8b9c], 0
// asm:   0x5a7dab4: je 0x5a7db03

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Refill_g____getter_7_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546559 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546559 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_07546650 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546650 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RefillValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Die>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7db40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7db5d: cmp byte ptr [rip + 0x1ac8aed], 0
// asm:   0x5a7db64: je 0x5a7dbb3

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Die_g____getter_8_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754655a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754655a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_07546651 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546651 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->DieValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x30);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Grab>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Grab_g____getter_9_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7dbf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7dc0d: cmp byte ptr [rip + 0x1ac8a3e], 0
// asm:   0x5a7dc14: je 0x5a7dc63

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Grab_g____getter_9_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754655b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754655b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_07546652 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546652 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GrabValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x38);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__EmoteAction>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__EmoteAction_g____getter_10_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7dca0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7dcbd: cmp byte ptr [rip + 0x1ac898f], 0
// asm:   0x5a7dcc4: je 0x5a7dd13

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__EmoteAction_g____getter_10_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754655c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754655c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_07546653 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546653 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->EmoteActionValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x40);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__SpecialAttack>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAttack_g____getter_11_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7dd50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7dd6d: cmp byte ptr [rip + 0x1ac88e0], 0
// asm:   0x5a7dd74: je 0x5a7ddc3

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAttack_g____getter_11_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754655d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754655d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_07546654 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546654 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialAttackValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x48);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__SpecialAction>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAction_g____getter_12_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7de00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7de1d: cmp byte ptr [rip + 0x1ac8831], 0
// asm:   0x5a7de24: je 0x5a7de73

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__SpecialAction_g____getter_12_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754655e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754655e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_07546655 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546655 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialActionValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x50);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Slide>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_13_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7deb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7decd: cmp byte ptr [rip + 0x1ac8782], 0
// asm:   0x5a7ded4: je 0x5a7df23

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Slide_g____getter_13_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754655f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754655f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_07546656 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546656 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SlideValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x58);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Run>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Run_g____getter_14_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7df60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7df7d: cmp byte ptr [rip + 0x1ac86d3], 0
// asm:   0x5a7df84: je 0x5a7dfd3

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Run_g____getter_14_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546560 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546560 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_07546657 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546657 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RunValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x60);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Land>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Land_g____getter_15_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7e010
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7e02d: cmp byte ptr [rip + 0x1ac8624], 0
// asm:   0x5a7e034: je 0x5a7e083

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Land_g____getter_15_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546561 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546561 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_07546658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546658 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->LandValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x68);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__MountingHorse>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__MountingHorse_g____getter_16_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7e0c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7e0dd: cmp byte ptr [rip + 0x1ac8575], 0
// asm:   0x5a7e0e4: je 0x5a7e133

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__MountingHorse_g____getter_16_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546562 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546562 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_07546659 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546659 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->MountingHorseValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x70);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__Stun>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_17_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7e170
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7e18d: cmp byte ptr [rip + 0x1ac84c6], 0
// asm:   0x5a7e194: je 0x5a7e1e3

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__Stun_g____getter_17_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546563 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546563 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_0754665a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754665a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->StunValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x78);
}


// CustomLogic.CustomLogicHumanStateEnum.Bindings$$<__CreatePropertyBinding__WallSlide>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__WallSlide_g____getter_18_0 (CustomLogic_CustomLogicHumanStateEnum_o* __i, const MethodInfo* method);
// 0x5a7e220
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7e23d: cmp byte ptr [rip + 0x1ac8417], 0
// asm:   0x5a7e244: je 0x5a7e296

Il2CppObject *
CustomLogic_CustomLogicHumanStateEnum_Bindings_____CreatePropertyBinding__WallSlide_g____getter_18_0
          (CustomLogic_CustomLogicHumanStateEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546564 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546564 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
  }
  if (Il2CppMethodInitialized_0754665b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754665b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->WallSlideValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x80);
}


// CustomLogic.CustomLogicHumanStateEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum___ctor (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x5a7b490

void CustomLogic_CustomLogicHumanStateEnum___ctor
               (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754652c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754652c = '\x01';
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


// CustomLogic.CustomLogicHumanStateEnum$$get_Idle
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Idle (const MethodInfo* method);
// 0x5a7b500

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Idle(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754652d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754652d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->IdleValue;
  }
  return *(System_String_o **)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Attack
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Attack (const MethodInfo* method);
// 0x5a7b570

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Attack(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754652e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754652e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AttackValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_GroundDodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_GroundDodge (const MethodInfo* method);
// 0x5a7b5e0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_GroundDodge(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754652f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754652f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GroundDodgeValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_AirDodge
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_AirDodge (const MethodInfo* method);
// 0x5a7b650

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_AirDodge(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546530 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546530 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->AirDodgeValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Reload
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Reload (const MethodInfo* method);
// 0x5a7b6c0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Reload(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546531 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546531 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->ReloadValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Refill
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Refill (const MethodInfo* method);
// 0x5a7b730

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Refill(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546532 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546532 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RefillValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Die
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Die (const MethodInfo* method);
// 0x5a7b7a0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Die(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546533 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546533 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->DieValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x30);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Grab
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Grab (const MethodInfo* method);
// 0x5a7b810

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Grab(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546534 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546534 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->GrabValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x38);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_EmoteAction
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_EmoteAction (const MethodInfo* method);
// 0x5a7b880

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_EmoteAction(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546535 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546535 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->EmoteActionValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x40);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_SpecialAttack
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_SpecialAttack (const MethodInfo* method);
// 0x5a7b8f0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_SpecialAttack(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546536 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546536 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialAttackValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x48);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_SpecialAction
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_SpecialAction (const MethodInfo* method);
// 0x5a7b960

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_SpecialAction(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546537 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546537 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SpecialActionValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x50);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Slide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Slide (const MethodInfo* method);
// 0x5a7b9d0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Slide(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546538 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546538 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->SlideValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x58);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Run
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Run (const MethodInfo* method);
// 0x5a7ba40

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Run(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546539 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_07546539 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->RunValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x60);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Land
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Land (const MethodInfo* method);
// 0x5a7bab0

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Land(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754653a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754653a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->LandValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x68);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_MountingHorse
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_MountingHorse (const MethodInfo* method);
// 0x5a7bb20

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_MountingHorse(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754653b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754653b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->MountingHorseValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x70);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_Stun
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_Stun (const MethodInfo* method);
// 0x5a7bb90

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_Stun(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754653c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754653c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->StunValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x78);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_WallSlide
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_WallSlide (const MethodInfo* method);
// 0x5a7bc00

System_String_o * CustomLogic_CustomLogicHumanStateEnum__get_WallSlide(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754653d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    Il2CppMethodInitialized_0754653d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicHumanStateEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    return TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->WallSlideValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicHumanStateEnum)->static_fields + 0x80);
}


// CustomLogic.CustomLogicHumanStateEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicHumanStateEnum__get_ClassName (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x5a7bc70

System_String_o *
CustomLogic_CustomLogicHumanStateEnum__get_ClassName
          (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754653e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HumanStateEnum");
    Il2CppMethodInitialized_0754653e = '\x01';
  }
  return "HumanStateEnum";
}


// CustomLogic.CustomLogicHumanStateEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_IsAbstract (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x5a7bca0

bool CustomLogic_CustomLogicHumanStateEnum__get_IsAbstract
               (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_IsStatic (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x5a7bcb0

bool CustomLogic_CustomLogicHumanStateEnum__get_IsStatic
               (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHumanStateEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicHumanStateEnum__get_InheritBaseMembers (CustomLogic_CustomLogicHumanStateEnum_o* __this, const MethodInfo* method);
// 0x5a7bcc0

bool CustomLogic_CustomLogicHumanStateEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicHumanStateEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicHumanStateEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicHumanStateEnum___cctor (const MethodInfo* method);
// 0x5a7bcd0

void CustomLogic_CustomLogicHumanStateEnum___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicHumanStateEnum_StaticFields *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o SStack_1a8;
  undefined4 uStack_198;
  System_Enum_o SStack_190;
  undefined4 uStack_180;
  System_Enum_o SStack_178;
  undefined4 uStack_168;
  System_Enum_o SStack_160;
  undefined4 uStack_150;
  System_Enum_o SStack_148;
  undefined4 uStack_138;
  System_Enum_o SStack_130;
  undefined4 uStack_120;
  System_Enum_o SStack_118;
  undefined4 uStack_108;
  System_Enum_o SStack_100;
  undefined4 uStack_f0;
  System_Enum_o SStack_e8;
  undefined4 uStack_d8;
  System_Enum_o SStack_d0;
  undefined4 uStack_c0;
  System_Enum_o SStack_b8;
  undefined4 uStack_a8;
  System_Enum_o SStack_a0;
  undefined4 uStack_90;
  System_Enum_o SStack_88;
  undefined4 uStack_78;
  System_Enum_o SStack_70;
  undefined4 uStack_60;
  System_Enum_o SStack_58;
  undefined4 uStack_48;
  System_Enum_o SStack_40;
  undefined4 uStack_30;
  System_Enum_o SStack_28;
  undefined4 uStack_18;
  
  if (Il2CppMethodInitialized_0754653f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanState);
    Il2CppMethodInitialized_0754653f = '\x01';
  }
  SStack_28.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  uStack_18 = 0;
  pSVar2 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->IdleValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields->IdleValue);
  SStack_40.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_40.monitor = (void *)0xffffffffffffffff;
  uStack_30 = 1;
  pSVar2 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->AttackValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackValue);
  SStack_58.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_58.monitor = (void *)0xffffffffffffffff;
  uStack_48 = 2;
  pSVar2 = System_Enum__ToString(&SStack_58,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->GroundDodgeValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->GroundDodgeValue);
  SStack_70.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_70.monitor = (void *)0xffffffffffffffff;
  uStack_60 = 3;
  pSVar2 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->AirDodgeValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->AirDodgeValue);
  SStack_88.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_88.monitor = (void *)0xffffffffffffffff;
  uStack_78 = 4;
  pSVar2 = System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->ReloadValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->ReloadValue);
  SStack_a0.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_a0.monitor = (void *)0xffffffffffffffff;
  uStack_90 = 5;
  pSVar2 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->RefillValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->RefillValue);
  SStack_b8.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_b8.monitor = (void *)0xffffffffffffffff;
  uStack_a8 = 6;
  pSVar2 = System_Enum__ToString(&SStack_b8,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->DieValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->DieValue);
  SStack_d0.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_d0.monitor = (void *)0xffffffffffffffff;
  uStack_c0 = 7;
  pSVar2 = System_Enum__ToString(&SStack_d0,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->GrabValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->GrabValue);
  SStack_e8.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_e8.monitor = (void *)0xffffffffffffffff;
  uStack_d8 = 8;
  pSVar2 = System_Enum__ToString(&SStack_e8,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->EmoteActionValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->EmoteActionValue);
  SStack_100.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_100.monitor = (void *)0xffffffffffffffff;
  uStack_f0 = 9;
  pSVar2 = System_Enum__ToString(&SStack_100,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->SpecialAttackValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->SpecialAttackValue);
  SStack_118.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_118.monitor = (void *)0xffffffffffffffff;
  uStack_108 = 10;
  pSVar2 = System_Enum__ToString(&SStack_118,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->SpecialActionValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->SpecialActionValue);
  SStack_130.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_130.monitor = (void *)0xffffffffffffffff;
  uStack_120 = 0xb;
  pSVar2 = System_Enum__ToString(&SStack_130,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->SlideValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->SlideValue);
  SStack_148.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_148.monitor = (void *)0xffffffffffffffff;
  uStack_138 = 0xc;
  pSVar2 = System_Enum__ToString(&SStack_148,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->RunValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->RunValue);
  SStack_160.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_160.monitor = (void *)0xffffffffffffffff;
  uStack_150 = 0xd;
  pSVar2 = System_Enum__ToString(&SStack_160,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->LandValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->LandValue);
  SStack_178.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_178.monitor = (void *)0xffffffffffffffff;
  uStack_168 = 0xe;
  pSVar2 = System_Enum__ToString(&SStack_178,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->MountingHorseValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->MountingHorseValue);
  SStack_190.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_190.monitor = (void *)0xffffffffffffffff;
  uStack_180 = 0xf;
  pSVar2 = System_Enum__ToString(&SStack_190,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->StunValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->StunValue);
  SStack_1a8.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  SStack_1a8.monitor = (void *)0xffffffffffffffff;
  uStack_198 = 0x10;
  pSVar2 = System_Enum__ToString(&SStack_1a8,(MethodInfo *)0x0);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicHumanStateEnum->static_fields;
  pCVar1->WallSlideValue = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->WallSlideValue);
  return;
}


