// Type: CustomLogic.CustomLogicSpecialEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicSpecialEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSpecialEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSpecialEnum_o* CustomLogic_CustomLogicSpecialEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aaafa0

CustomLogic_CustomLogicSpecialEnum_o *
CustomLogic_CustomLogicSpecialEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546a75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSpecialEnum);
    Il2CppMethodInitialized_07546a75 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicSpecialEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicSpecialEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum);
  if (Il2CppMethodInitialized_07546a5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a5e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicSpecialEnum_o *)__this;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSpecialEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aab0c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSpecialEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicSpecialEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546a76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Smell");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin3");
    il2cpp_codegen_initialize_runtime_metadata(&"Escape");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin2");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    il2cpp_codegen_initialize_runtime_metadata(&"Distract");
    il2cpp_codegen_initialize_runtime_metadata(&"Confuse");
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin1");
    il2cpp_codegen_initialize_runtime_metadata(&"Potato");
    il2cpp_codegen_initialize_runtime_metadata(&"Carry");
    il2cpp_codegen_initialize_runtime_metadata(&"DownStrike");
    il2cpp_codegen_initialize_runtime_metadata(&"Stock");
    il2cpp_codegen_initialize_runtime_metadata(&"Supply");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSTwinShot");
    Il2CppMethodInitialized_07546a76 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x50d88c80) {
    if (uVar2 < 0x132fe373) {
      if (uVar2 < 0x23f06bf) {
        if (uVar2 == 0x3f0398) {
          bVar1 = System_String__op_Equality(name,"Spin1",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin1
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x23f06be) {
          bVar1 = System_String__op_Equality(name,"Spin3",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin3
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x33f0851) {
        bVar1 = System_String__op_Equality(name,"Spin2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xfb12e57) {
        bVar1 = System_String__op_Equality(name,"Distract",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Distract
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x132fe372) {
        bVar1 = System_String__op_Equality(name,"Potato",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Potato
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x27e47193) {
      if (uVar2 == 0x184b43d0) {
        bVar1 = System_String__op_Equality(name,"Carry",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Carry
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x27e47192) {
        bVar1 = System_String__op_Equality(name,"Annie",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Annie
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x2ab69de5) {
      bVar1 = System_String__op_Equality(name,"Armored",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Armored
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x304ff7fb) {
      bVar1 = System_String__op_Equality(name,"None",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__None
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x50d88c7f) {
      bVar1 = System_String__op_Equality(name,"DownStrike",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__DownStrike
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x9d6edc06) {
    if (uVar2 < 0x67c7f536) {
      if (uVar2 == 0x548b671e) {
        bVar1 = System_String__op_Equality(name,"Switchback",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Switchback
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x67c7f535) {
        bVar1 = System_String__op_Equality(name,"Stock",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Stock
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x8d87a40b) {
      bVar1 = System_String__op_Equality(name,"BladeThrow",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__BladeThrow
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x960fb720) {
      bVar1 = System_String__op_Equality(name,"Smell",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Smell
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x9d6edc05) {
      bVar1 = System_String__op_Equality(name,"Eren",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Eren
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xb7bb7227) {
    if (uVar2 == 0x9fc581fa) {
      bVar1 = System_String__op_Equality(name,"SmokeBomb",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__SmokeBomb
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xa499f21e) {
      bVar1 = System_String__op_Equality(name,"Confuse",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Confuse
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xb7bb7226) {
      bVar1 = System_String__op_Equality(name,"Escape",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Escape
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xc7ef102c) {
    bVar1 = System_String__op_Equality(name,"AHSSTwinShot",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings)
        ;
      }
      pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__AHSSTwinShot
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xca0fab3c) {
    bVar1 = System_String__op_Equality(name,"Dance",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings)
        ;
      }
      pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Dance
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xdba7f44e) {
    bVar1 = System_String__op_Equality(name,"Supply",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings)
        ;
      }
      pCVar3 = CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Supply
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSpecialEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Potato
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Potato (const MethodInfo* method);
// 0x5aab8c0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Potato(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Potato_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a77 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Potato_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Escape
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Escape (const MethodInfo* method);
// 0x5aab960

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Escape(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Escape_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a78 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Escape_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Dance
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Dance (const MethodInfo* method);
// 0x5aaba00

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Dance(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Dance_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a79 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Dance_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Distract
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Distract (const MethodInfo* method);
// 0x5aabaa0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Distract(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Distract_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a7a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Distract_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Smell
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Smell (const MethodInfo* method);
// 0x5aabb40

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Smell(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Smell_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a7b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Smell_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Supply
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Supply (const MethodInfo* method);
// 0x5aabbe0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Supply(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Supply_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a7c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Supply_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__SmokeBomb
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__SmokeBomb (const MethodInfo* method);
// 0x5aabc80

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__SmokeBomb(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__SmokeBomb_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a7d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__SmokeBomb_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Carry
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Carry (const MethodInfo* method);
// 0x5aabd20

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Carry(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Carry_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a7e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Carry_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Switchback
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Switchback (const MethodInfo* method);
// 0x5aabdc0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Switchback(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Switchback_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a7f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Switchback_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Confuse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Confuse (const MethodInfo* method);
// 0x5aabe60

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Confuse(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Confuse_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a80 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Confuse_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__DownStrike
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__DownStrike (const MethodInfo* method);
// 0x5aabf00

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__DownStrike(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__DownStrike_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a81 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__DownStrike_g____getter_12_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin1 (const MethodInfo* method);
// 0x5aabfa0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin1(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Spin1_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a82 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Spin1_g____getter_13_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin2 (const MethodInfo* method);
// 0x5aac040

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin2(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Spin2_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a83 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Spin2_g____getter_14_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Spin3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin3 (const MethodInfo* method);
// 0x5aac0e0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Spin3(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Spin3_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a84 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Spin3_g____getter_15_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__BladeThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__BladeThrow (const MethodInfo* method);
// 0x5aac180

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__BladeThrow(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__BladeThrow_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a85 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__BladeThrow_g____getter_16_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__AHSSTwinShot
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__AHSSTwinShot (const MethodInfo* method);
// 0x5aac220

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__AHSSTwinShot(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__AHSSTwinShot_g____getter_17
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a86 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__AHSSTwinShot_g____getter_17
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Stock
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Stock (const MethodInfo* method);
// 0x5aac2c0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Stock(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Stock_g____getter_18_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a87 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Stock_g____getter_18_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__None
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__None (const MethodInfo* method);
// 0x5aac360

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__None(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__None_g____getter_19_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a88 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__None_g____getter_19_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Eren
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Eren (const MethodInfo* method);
// 0x5aac400

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Eren(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Eren_g____getter_20_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a89 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Eren_g____getter_20_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Annie
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Annie (const MethodInfo* method);
// 0x5aac4a0

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Annie(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Annie_g____getter_21_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a8a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Annie_g____getter_21_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$__CreatePropertyBinding__Armored
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o* CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Armored (const MethodInfo* method);
// 0x5aac540

CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *
CustomLogic_CustomLogicSpecialEnum_Bindings____CreatePropertyBinding__Armored(MethodInfo *method)

{
  System_Func_CustomLogicSpecialEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546a8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Armored_g____getter_22_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSpecialEnum_object);
    Il2CppMethodInitialized_07546a8b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSpecialEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSpecialEnum_Bindings___CreatePropertyBinding__Armored_g____getter_22_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSpecialEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSpecialEnum_Bindings___cctor (const MethodInfo* method);
// 0x5aac5e0

void CustomLogic_CustomLogicSpecialEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546a8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Smell");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin3");
    il2cpp_codegen_initialize_runtime_metadata(&"Escape");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin2");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    il2cpp_codegen_initialize_runtime_metadata(&"Distract");
    il2cpp_codegen_initialize_runtime_metadata(&"Confuse");
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    il2cpp_codegen_initialize_runtime_metadata(&"Spin1");
    il2cpp_codegen_initialize_runtime_metadata(&"Potato");
    il2cpp_codegen_initialize_runtime_metadata(&"Carry");
    il2cpp_codegen_initialize_runtime_metadata(&"DownStrike");
    il2cpp_codegen_initialize_runtime_metadata(&"Stock");
    il2cpp_codegen_initialize_runtime_metadata(&"Supply");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSTwinShot");
    Il2CppMethodInitialized_07546a8c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Potato",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Escape",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dance",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Distract",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Smell",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Supply",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SmokeBomb",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Carry",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Switchback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Confuse",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DownStrike",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Spin1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Spin2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Spin3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BladeThrow",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AHSSTwinShot",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stock",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"None",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Eren",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Annie",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Armored",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicSpecialEnum_Bindings->static_fields->MemberNames)
  ;
  return;
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Potato>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Potato_g____getter_2_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aac950

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Potato_g____getter_2_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Potato");
    Il2CppMethodInitialized_07546a5f = '\x01';
  }
  return (Il2CppObject *)"Potato";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Escape>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Escape_g____getter_3_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aac980

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Escape_g____getter_3_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Escape");
    Il2CppMethodInitialized_07546a60 = '\x01';
  }
  return (Il2CppObject *)"Escape";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Dance>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Dance_g____getter_4_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aac9b0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Dance_g____getter_4_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    Il2CppMethodInitialized_07546a61 = '\x01';
  }
  return (Il2CppObject *)"Dance";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Distract>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Distract_g____getter_5_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aac9e0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Distract_g____getter_5_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Distract");
    Il2CppMethodInitialized_07546a62 = '\x01';
  }
  return (Il2CppObject *)"Distract";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Smell>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Smell_g____getter_6_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aaca10

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Smell_g____getter_6_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Smell");
    Il2CppMethodInitialized_07546a63 = '\x01';
  }
  return (Il2CppObject *)"Smell";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Supply>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Supply_g____getter_7_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aaca40

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Supply_g____getter_7_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Supply");
    Il2CppMethodInitialized_07546a64 = '\x01';
  }
  return (Il2CppObject *)"Supply";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__SmokeBomb>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_8_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aaca70

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__SmokeBomb_g____getter_8_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    Il2CppMethodInitialized_07546a65 = '\x01';
  }
  return (Il2CppObject *)"SmokeBomb";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Carry>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Carry_g____getter_9_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacaa0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Carry_g____getter_9_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Carry");
    Il2CppMethodInitialized_07546a66 = '\x01';
  }
  return (Il2CppObject *)"Carry";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Switchback>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_10_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacad0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Switchback_g____getter_10_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    Il2CppMethodInitialized_07546a67 = '\x01';
  }
  return (Il2CppObject *)"Switchback";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Confuse>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Confuse_g____getter_11_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacb00

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Confuse_g____getter_11_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confuse");
    Il2CppMethodInitialized_07546a68 = '\x01';
  }
  return (Il2CppObject *)"Confuse";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__DownStrike>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__DownStrike_g____getter_12_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacb30

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__DownStrike_g____getter_12_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"DownStrike");
    Il2CppMethodInitialized_07546a69 = '\x01';
  }
  return (Il2CppObject *)"DownStrike";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin1>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin1_g____getter_13_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacb60

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin1_g____getter_13_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Spin1");
    Il2CppMethodInitialized_07546a6a = '\x01';
  }
  return (Il2CppObject *)"Spin1";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin2>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin2_g____getter_14_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacb90

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin2_g____getter_14_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Spin2");
    Il2CppMethodInitialized_07546a6b = '\x01';
  }
  return (Il2CppObject *)"Spin2";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Spin3>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin3_g____getter_15_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacbc0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Spin3_g____getter_15_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Spin3");
    Il2CppMethodInitialized_07546a6c = '\x01';
  }
  return (Il2CppObject *)"Spin3";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__BladeThrow>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_16_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacbf0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__BladeThrow_g____getter_16_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    Il2CppMethodInitialized_07546a6d = '\x01';
  }
  return (Il2CppObject *)"BladeThrow";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__AHSSTwinShot>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__AHSSTwinShot_g____getter_17_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacc20

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__AHSSTwinShot_g____getter_17_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSTwinShot");
    Il2CppMethodInitialized_07546a6e = '\x01';
  }
  return (Il2CppObject *)"AHSSTwinShot";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Stock>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Stock_g____getter_18_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacc50

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Stock_g____getter_18_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stock");
    Il2CppMethodInitialized_07546a6f = '\x01';
  }
  return (Il2CppObject *)"Stock";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__None>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__None_g____getter_19_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacc80

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__None_g____getter_19_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07546a70 = '\x01';
  }
  return (Il2CppObject *)"None";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Eren>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_20_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aaccb0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Eren_g____getter_20_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    Il2CppMethodInitialized_07546a71 = '\x01';
  }
  return (Il2CppObject *)"Eren";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Annie>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_21_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacce0

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Annie_g____getter_21_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    Il2CppMethodInitialized_07546a72 = '\x01';
  }
  return (Il2CppObject *)"Annie";
}


// CustomLogic.CustomLogicSpecialEnum.Bindings$$<__CreatePropertyBinding__Armored>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_22_0 (CustomLogic_CustomLogicSpecialEnum_o* __i, const MethodInfo* method);
// 0x5aacd10

Il2CppObject *
CustomLogic_CustomLogicSpecialEnum_Bindings_____CreatePropertyBinding__Armored_g____getter_22_0
          (CustomLogic_CustomLogicSpecialEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_07546a73 = '\x01';
  }
  return (Il2CppObject *)"Armored";
}


// CustomLogic.CustomLogicSpecialEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicSpecialEnum___ctor (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x5aaaae0

void CustomLogic_CustomLogicSpecialEnum___ctor
               (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546a5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546a5e = '\x01';
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


// CustomLogic.CustomLogicSpecialEnum$$get_Potato
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Potato (const MethodInfo* method);
// 0x5aaab50

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Potato(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Potato");
    Il2CppMethodInitialized_07546a5f = '\x01';
  }
  return "Potato";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Escape
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Escape (const MethodInfo* method);
// 0x5aaab80

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Escape(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Escape");
    Il2CppMethodInitialized_07546a60 = '\x01';
  }
  return "Escape";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Dance
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Dance (const MethodInfo* method);
// 0x5aaabb0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Dance(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    Il2CppMethodInitialized_07546a61 = '\x01';
  }
  return "Dance";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Distract
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Distract (const MethodInfo* method);
// 0x5aaabe0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Distract(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Distract");
    Il2CppMethodInitialized_07546a62 = '\x01';
  }
  return "Distract";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Smell
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Smell (const MethodInfo* method);
// 0x5aaac10

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Smell(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Smell");
    Il2CppMethodInitialized_07546a63 = '\x01';
  }
  return "Smell";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Supply
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Supply (const MethodInfo* method);
// 0x5aaac40

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Supply(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Supply");
    Il2CppMethodInitialized_07546a64 = '\x01';
  }
  return "Supply";
}


// CustomLogic.CustomLogicSpecialEnum$$get_SmokeBomb
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_SmokeBomb (const MethodInfo* method);
// 0x5aaac70

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_SmokeBomb(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    Il2CppMethodInitialized_07546a65 = '\x01';
  }
  return "SmokeBomb";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Carry
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Carry (const MethodInfo* method);
// 0x5aaaca0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Carry(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Carry");
    Il2CppMethodInitialized_07546a66 = '\x01';
  }
  return "Carry";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Switchback
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Switchback (const MethodInfo* method);
// 0x5aaacd0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Switchback(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Switchback");
    Il2CppMethodInitialized_07546a67 = '\x01';
  }
  return "Switchback";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Confuse
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Confuse (const MethodInfo* method);
// 0x5aaad00

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Confuse(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confuse");
    Il2CppMethodInitialized_07546a68 = '\x01';
  }
  return "Confuse";
}


// CustomLogic.CustomLogicSpecialEnum$$get_DownStrike
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_DownStrike (const MethodInfo* method);
// 0x5aaad30

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_DownStrike(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"DownStrike");
    Il2CppMethodInitialized_07546a69 = '\x01';
  }
  return "DownStrike";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Spin1
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Spin1 (const MethodInfo* method);
// 0x5aaad60

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Spin1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Spin1");
    Il2CppMethodInitialized_07546a6a = '\x01';
  }
  return "Spin1";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Spin2
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Spin2 (const MethodInfo* method);
// 0x5aaad90

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Spin2(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Spin2");
    Il2CppMethodInitialized_07546a6b = '\x01';
  }
  return "Spin2";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Spin3
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Spin3 (const MethodInfo* method);
// 0x5aaadc0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Spin3(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Spin3");
    Il2CppMethodInitialized_07546a6c = '\x01';
  }
  return "Spin3";
}


// CustomLogic.CustomLogicSpecialEnum$$get_BladeThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_BladeThrow (const MethodInfo* method);
// 0x5aaadf0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_BladeThrow(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    Il2CppMethodInitialized_07546a6d = '\x01';
  }
  return "BladeThrow";
}


// CustomLogic.CustomLogicSpecialEnum$$get_AHSSTwinShot
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_AHSSTwinShot (const MethodInfo* method);
// 0x5aaae20

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_AHSSTwinShot(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AHSSTwinShot");
    Il2CppMethodInitialized_07546a6e = '\x01';
  }
  return "AHSSTwinShot";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Stock
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Stock (const MethodInfo* method);
// 0x5aaae50

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Stock(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stock");
    Il2CppMethodInitialized_07546a6f = '\x01';
  }
  return "Stock";
}


// CustomLogic.CustomLogicSpecialEnum$$get_None
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_None (const MethodInfo* method);
// 0x5aaae80

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_None(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07546a70 = '\x01';
  }
  return "None";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Eren
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Eren (const MethodInfo* method);
// 0x5aaaeb0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Eren(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    Il2CppMethodInitialized_07546a71 = '\x01';
  }
  return "Eren";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Annie
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Annie (const MethodInfo* method);
// 0x5aaaee0

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Annie(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    Il2CppMethodInitialized_07546a72 = '\x01';
  }
  return "Annie";
}


// CustomLogic.CustomLogicSpecialEnum$$get_Armored
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_Armored (const MethodInfo* method);
// 0x5aaaf10

System_String_o * CustomLogic_CustomLogicSpecialEnum__get_Armored(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Armored");
    Il2CppMethodInitialized_07546a73 = '\x01';
  }
  return "Armored";
}


// CustomLogic.CustomLogicSpecialEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSpecialEnum__get_ClassName (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x5aaaf40

System_String_o *
CustomLogic_CustomLogicSpecialEnum__get_ClassName
          (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546a74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialEnum");
    Il2CppMethodInitialized_07546a74 = '\x01';
  }
  return "SpecialEnum";
}


// CustomLogic.CustomLogicSpecialEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSpecialEnum__get_IsAbstract (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x5aaaf70

bool CustomLogic_CustomLogicSpecialEnum__get_IsAbstract
               (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicSpecialEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSpecialEnum__get_IsStatic (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x5aaaf80

bool CustomLogic_CustomLogicSpecialEnum__get_IsStatic
               (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicSpecialEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSpecialEnum__get_InheritBaseMembers (CustomLogic_CustomLogicSpecialEnum_o* __this, const MethodInfo* method);
// 0x5aaaf90

bool CustomLogic_CustomLogicSpecialEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicSpecialEnum_o *__this,MethodInfo *method)

{
  return true;
}


