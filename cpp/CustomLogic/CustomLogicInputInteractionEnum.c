// Type: CustomLogic.CustomLogicInputInteractionEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicInputInteractionEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputInteractionEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputInteractionEnum_o* CustomLogic_CustomLogicInputInteractionEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a89f00

CustomLogic_CustomLogicInputInteractionEnum_o *
CustomLogic_CustomLogicInputInteractionEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputInteractionEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546744 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546744 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputInteractionEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  if (Il2CppMethodInitialized_0754672e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754672e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputInteractionEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a8a020

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicInputInteractionEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546745 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect5");
    il2cpp_codegen_initialize_runtime_metadata(&"ItemMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"MenuNext");
    il2cpp_codegen_initialize_runtime_metadata(&"Function1");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect2");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact");
    il2cpp_codegen_initialize_runtime_metadata(&"Function4");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect1");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect3");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact2");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect4");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect8");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact3");
    il2cpp_codegen_initialize_runtime_metadata(&"Function2");
    il2cpp_codegen_initialize_runtime_metadata(&"Function3");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect6");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect7");
    Il2CppMethodInitialized_07546745 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x93a28290) {
    if (uVar2 < 0x6b01bab5) {
      if (uVar2 < 0x5f8e9555) {
        if (uVar2 == 0x1e2eb9ef) {
          bVar1 = System_String__op_Equality(name,"Interact",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x5f8e9554) {
          bVar1 = System_String__op_Equality(name,"Interact3",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact3
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x608e96e7) {
        bVar1 = System_String__op_Equality(name,"Interact2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x6b01bab4) {
        bVar1 = System_String__op_Equality(name,"EmoteMenu",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__EmoteMenu
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x8fa27c44) {
      if (uVar2 == 0x8ea27ab0) {
        bVar1 = System_String__op_Equality(name,"QuickSelect4",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect4
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x8fa27c43) {
        bVar1 = System_String__op_Equality(name,"QuickSelect5",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect5
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x90a27dd6) {
      bVar1 = System_String__op_Equality(name,"QuickSelect6",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect6
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x91a27f69) {
      bVar1 = System_String__op_Equality(name,"QuickSelect7",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect7
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x93a2828f) {
      bVar1 = System_String__op_Equality(name,"QuickSelect1",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect1
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xa9d7fbaf) {
    if (uVar2 < 0x95a285b6) {
      if (uVar2 == 0x94a28422) {
        bVar1 = System_String__op_Equality(name,"QuickSelect2",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect2
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x95a285b5) {
        bVar1 = System_String__op_Equality(name,"QuickSelect3",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect3
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x9aa28d94) {
      bVar1 = System_String__op_Equality(name,"QuickSelect8",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect8
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xa7d7f888) {
      bVar1 = System_String__op_Equality(name,"Function1",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function1
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xa9d7fbae) {
      bVar1 = System_String__op_Equality(name,"Function3",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function3
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xacd80068) {
    if (uVar2 == 0xaad7fd41) {
      bVar1 = System_String__op_Equality(name,"Function2",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function2
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xacd80067) {
      bVar1 = System_String__op_Equality(name,"Function4",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function4
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xd86dc4f0) {
    bVar1 = System_String__op_Equality(name,"ActionMenu",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ActionMenu
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf092cb97) {
    bVar1 = System_String__op_Equality(name,"MenuNext",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__MenuNext
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf32eba39) {
    bVar1 = System_String__op_Equality(name,"ItemMenu",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ItemMenu
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputInteractionEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact (const MethodInfo* method);
// 0x5a8a770

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546746 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546746 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact2 (const MethodInfo* method);
// 0x5a8a810

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact2(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546747 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact2_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546747 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact2_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Interact3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact3 (const MethodInfo* method);
// 0x5a8a8b0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Interact3(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546748 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact3_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546748 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Interact3_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__ItemMenu
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ItemMenu (const MethodInfo* method);
// 0x5a8a950

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ItemMenu(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546749 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ItemMenu_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546749 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ItemMenu_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__ActionMenu
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ActionMenu (const MethodInfo* method);
// 0x5a8a9f0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__ActionMenu(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754674a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ActionMenu_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_0754674a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__ActionMenu_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__EmoteMenu
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__EmoteMenu (const MethodInfo* method);
// 0x5a8aa90

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__EmoteMenu(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754674b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__EmoteMenu_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_0754674b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__EmoteMenu_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__MenuNext
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__MenuNext (const MethodInfo* method);
// 0x5a8ab30

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__MenuNext(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754674c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__MenuNext_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_0754674c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__MenuNext_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect1 (const MethodInfo* method);
// 0x5a8abd0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect1
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754674d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect1_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_0754674d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect1_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect2 (const MethodInfo* method);
// 0x5a8ac70

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect2
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754674e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect2_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_0754674e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect2_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect3 (const MethodInfo* method);
// 0x5a8ad10

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect3
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754674f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect3_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_0754674f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect3_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect4 (const MethodInfo* method);
// 0x5a8adb0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect4
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546750 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect4_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546750 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect4_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect5
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect5 (const MethodInfo* method);
// 0x5a8ae50

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect5
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546751 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect5_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546751 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect5_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect6
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect6 (const MethodInfo* method);
// 0x5a8aef0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect6
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546752 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect6_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546752 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect6_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect7
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect7 (const MethodInfo* method);
// 0x5a8af90

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect7
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546753 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect7_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546753 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect7_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__QuickSelect8
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect8 (const MethodInfo* method);
// 0x5a8b030

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__QuickSelect8
          (MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546754 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect8_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546754 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__QuickSelect8_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function1 (const MethodInfo* method);
// 0x5a8b0d0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function1(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546755 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function1_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546755 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function1_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function2
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function2 (const MethodInfo* method);
// 0x5a8b170

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function2(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546756 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function2_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546756 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function2_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function3
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function3 (const MethodInfo* method);
// 0x5a8b210

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function3(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546757 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function3_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546757 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function3_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$__CreatePropertyBinding__Function4
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o* CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function4 (const MethodInfo* method);
// 0x5a8b2b0

CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *
CustomLogic_CustomLogicInputInteractionEnum_Bindings____CreatePropertyBinding__Function4(MethodInfo *method)

{
  System_Func_CustomLogicInputInteractionEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546758 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function4_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
    Il2CppMethodInitialized_07546758 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputInteractionEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings___CreatePropertyBinding__Function4_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum
                        );
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputInteractionEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a8b350

void CustomLogic_CustomLogicInputInteractionEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546759 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect5");
    il2cpp_codegen_initialize_runtime_metadata(&"ItemMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"MenuNext");
    il2cpp_codegen_initialize_runtime_metadata(&"Function1");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect2");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact");
    il2cpp_codegen_initialize_runtime_metadata(&"Function4");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect1");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect3");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact2");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect4");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect8");
    il2cpp_codegen_initialize_runtime_metadata(&"Interact3");
    il2cpp_codegen_initialize_runtime_metadata(&"Function2");
    il2cpp_codegen_initialize_runtime_metadata(&"Function3");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect6");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect7");
    Il2CppMethodInitialized_07546759 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Interact",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Interact2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Interact3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ItemMenu",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ActionMenu",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EmoteMenu",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MenuNext",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect4",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect5",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect6",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect7",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuickSelect8",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Function1",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Function2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Function3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Function4",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact_g____getter_2_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8b680
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8b69d: cmp byte ptr [rip + 0x1abb328], 0
// asm:   0x5a8b6a4: je 0x5a8b6f2

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact_g____getter_2_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754675a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754675a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469cc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->InteractValue;
  }
  return *(Il2CppObject **)
          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields;
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact2>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact2_g____getter_3_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8b730
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8b74d: cmp byte ptr [rip + 0x1abb279], 0
// asm:   0x5a8b754: je 0x5a8b7a3

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact2_g____getter_3_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754675b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754675b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469cd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact2Value
    ;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Interact3>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact3_g____getter_4_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8b7e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8b7fd: cmp byte ptr [rip + 0x1abb1ca], 0
// asm:   0x5a8b804: je 0x5a8b853

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Interact3_g____getter_4_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754675c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754675c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469ce = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact3Value
    ;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__ItemMenu>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__ItemMenu_g____getter_5_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8b890
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8b8ad: cmp byte ptr [rip + 0x1abb11b], 0
// asm:   0x5a8b8b4: je 0x5a8b903

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__ItemMenu_g____getter_5_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754675d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754675d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469cf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ItemMenuValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__ActionMenu>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__ActionMenu_g____getter_6_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8b940
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8b95d: cmp byte ptr [rip + 0x1abb06c], 0
// asm:   0x5a8b964: je 0x5a8b9b3

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__ActionMenu_g____getter_6_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754675e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754675e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469d0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ActionMenuValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__EmoteMenu>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__EmoteMenu_g____getter_7_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8b9f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8ba0d: cmp byte ptr [rip + 0x1abafbd], 0
// asm:   0x5a8ba14: je 0x5a8ba63

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__EmoteMenu_g____getter_7_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754675f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754675f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469d1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->EmoteMenuValue
    ;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__MenuNext>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__MenuNext_g____getter_8_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8baa0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8babd: cmp byte ptr [rip + 0x1abaf0e], 0
// asm:   0x5a8bac4: je 0x5a8bb13

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__MenuNext_g____getter_8_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546760 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546760 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469d2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->MenuNextValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x30);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect1>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect1_g____getter_9_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8bb50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8bb6d: cmp byte ptr [rip + 0x1abae5f], 0
// asm:   0x5a8bb74: je 0x5a8bbc3

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect1_g____getter_9_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546761 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546761 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469d3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect1Value;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x38);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect2>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect2_g____getter_10_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8bc00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8bc1d: cmp byte ptr [rip + 0x1abadb0], 0
// asm:   0x5a8bc24: je 0x5a8bc73

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect2_g____getter_10_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546762 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546762 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469d4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect2Value;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x40);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect3>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect3_g____getter_11_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8bcb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8bccd: cmp byte ptr [rip + 0x1abad01], 0
// asm:   0x5a8bcd4: je 0x5a8bd23

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect3_g____getter_11_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546763 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546763 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469d5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect3Value;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x48);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect4>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect4_g____getter_12_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8bd60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8bd7d: cmp byte ptr [rip + 0x1abac52], 0
// asm:   0x5a8bd84: je 0x5a8bdd3

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect4_g____getter_12_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546764 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546764 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469d6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect4Value;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x50);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect5>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect5_g____getter_13_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8be10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8be2d: cmp byte ptr [rip + 0x1ababa3], 0
// asm:   0x5a8be34: je 0x5a8be83

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect5_g____getter_13_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546765 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546765 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469d7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect5Value;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x58);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect6>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect6_g____getter_14_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8bec0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8bedd: cmp byte ptr [rip + 0x1abaaf4], 0
// asm:   0x5a8bee4: je 0x5a8bf33

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect6_g____getter_14_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546766 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546766 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469d8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect6Value;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x60);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect7>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect7_g____getter_15_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8bf70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8bf8d: cmp byte ptr [rip + 0x1abaa45], 0
// asm:   0x5a8bf94: je 0x5a8bfe3

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect7_g____getter_15_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546767 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546767 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469d9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect7Value;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x68);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__QuickSelect8>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect8_g____getter_16_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8c020
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8c03d: cmp byte ptr [rip + 0x1aba996], 0
// asm:   0x5a8c044: je 0x5a8c093

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__QuickSelect8_g____getter_16_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546768 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546768 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469da = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect8Value;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x70);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function1>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function1_g____getter_17_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8c0d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8c0ed: cmp byte ptr [rip + 0x1aba8e7], 0
// asm:   0x5a8c0f4: je 0x5a8c143

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function1_g____getter_17_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546769 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546769 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469db = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function1Value
    ;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x78);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function2>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function2_g____getter_18_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8c180
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8c19d: cmp byte ptr [rip + 0x1aba838], 0
// asm:   0x5a8c1a4: je 0x5a8c1f6

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function2_g____getter_18_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754676a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754676a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469dc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function2Value
    ;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x80);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function3>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function3_g____getter_19_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8c230
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8c24d: cmp byte ptr [rip + 0x1aba789], 0
// asm:   0x5a8c254: je 0x5a8c2a6

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function3_g____getter_19_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754676b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754676b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469dd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function3Value
    ;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x88);
}


// CustomLogic.CustomLogicInputInteractionEnum.Bindings$$<__CreatePropertyBinding__Function4>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function4_g____getter_20_0 (CustomLogic_CustomLogicInputInteractionEnum_o* __i, const MethodInfo* method);
// 0x5a8c2e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8c2fd: cmp byte ptr [rip + 0x1aba6da], 0
// asm:   0x5a8c304: je 0x5a8c356

Il2CppObject *
CustomLogic_CustomLogicInputInteractionEnum_Bindings_____CreatePropertyBinding__Function4_g____getter_20_0
          (CustomLogic_CustomLogicInputInteractionEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754676c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754676c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
  }
  if (Il2CppMethodInitialized_075469de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_075469de = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function4Value
    ;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x90);
}


// CustomLogic.CustomLogicInputInteractionEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum___ctor (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x5a89240

void CustomLogic_CustomLogicInputInteractionEnum___ctor
               (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754672e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754672e = '\x01';
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


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact (const MethodInfo* method);
// 0x5a892b0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754672f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754672f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->InteractValue;
  }
  return *(System_String_o **)
          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact2 (const MethodInfo* method);
// 0x5a89320

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546730 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546730 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact2Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Interact3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Interact3 (const MethodInfo* method);
// 0x5a89390

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Interact3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546731 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546731 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Interact3Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x10);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_ItemMenu
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_ItemMenu (const MethodInfo* method);
// 0x5a89400

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_ItemMenu(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546732 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546732 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ItemMenuValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x18);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_ActionMenu
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_ActionMenu (const MethodInfo* method);
// 0x5a89470

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_ActionMenu(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546733 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546733 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->ActionMenuValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x20);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_EmoteMenu
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_EmoteMenu (const MethodInfo* method);
// 0x5a894e0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_EmoteMenu(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546734 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546734 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->EmoteMenuValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x28);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_MenuNext
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_MenuNext (const MethodInfo* method);
// 0x5a89550

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_MenuNext(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546735 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546735 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->MenuNextValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x30);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect1 (const MethodInfo* method);
// 0x5a895c0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546736 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546736 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect1Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x38);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect2 (const MethodInfo* method);
// 0x5a89630

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546737 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546737 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect2Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x40);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect3 (const MethodInfo* method);
// 0x5a896a0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546738 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546738 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect3Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x48);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect4
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect4 (const MethodInfo* method);
// 0x5a89710

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect4(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546739 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546739 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect4Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x50);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect5
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect5 (const MethodInfo* method);
// 0x5a89780

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect5(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754673a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754673a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect5Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x58);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect6
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect6 (const MethodInfo* method);
// 0x5a897f0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect6(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754673b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754673b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect6Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x60);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect7
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect7 (const MethodInfo* method);
// 0x5a89860

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect7(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754673c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754673c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect7Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x68);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_QuickSelect8
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect8 (const MethodInfo* method);
// 0x5a898d0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_QuickSelect8(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754673d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754673d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->QuickSelect8Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x70);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function1 (const MethodInfo* method);
// 0x5a89940

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function1(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754673e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754673e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function1Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x78);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function2
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function2 (const MethodInfo* method);
// 0x5a899b0

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function2(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754673f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_0754673f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function2Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x80);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function3
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function3 (const MethodInfo* method);
// 0x5a89a20

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function3(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546740 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546740 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function3Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x88);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_Function4
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_Function4 (const MethodInfo* method);
// 0x5a89a90

System_String_o * CustomLogic_CustomLogicInputInteractionEnum__get_Function4(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546741 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    Il2CppMethodInitialized_07546741 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    return TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->Function4Value;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputInteractionEnum)->static_fields + 0x90);
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputInteractionEnum__get_ClassName (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x5a89b00

System_String_o *
CustomLogic_CustomLogicInputInteractionEnum__get_ClassName
          (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546742 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputInteractionEnum");
    Il2CppMethodInitialized_07546742 = '\x01';
  }
  return "InputInteractionEnum";
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_IsAbstract (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x5a89b30

bool CustomLogic_CustomLogicInputInteractionEnum__get_IsAbstract
               (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_IsStatic (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x5a89b40

bool CustomLogic_CustomLogicInputInteractionEnum__get_IsStatic
               (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputInteractionEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputInteractionEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputInteractionEnum_o* __this, const MethodInfo* method);
// 0x5a89b50

bool CustomLogic_CustomLogicInputInteractionEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicInputInteractionEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputInteractionEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputInteractionEnum___cctor (const MethodInfo* method);
// 0x5a89b60

void CustomLogic_CustomLogicInputInteractionEnum___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicInputInteractionEnum_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_07546743 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect3");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Interact");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Interact3");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Function3");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/MenuNext");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect4");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect8");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect1");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/ItemMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/EmoteMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect5");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect2");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Function1");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Function2");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/ActionMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect6");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Interact2");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/QuickSelect7");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction/Function4");
    Il2CppMethodInitialized_07546743 = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->InteractValue = "Interaction/Interact";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields->InteractValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->Interact2Value = "Interaction/Interact2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Interact2Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->Interact3Value = "Interaction/Interact3";
  Il2CppCodeGenWriteBarrier(&pCVar1->Interact3Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->ItemMenuValue = "Interaction/ItemMenu";
  Il2CppCodeGenWriteBarrier(&pCVar1->ItemMenuValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->ActionMenuValue = "Interaction/ActionMenu";
  Il2CppCodeGenWriteBarrier(&pCVar1->ActionMenuValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->EmoteMenuValue = "Interaction/EmoteMenu";
  Il2CppCodeGenWriteBarrier(&pCVar1->EmoteMenuValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->MenuNextValue = "Interaction/MenuNext";
  Il2CppCodeGenWriteBarrier(&pCVar1->MenuNextValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->QuickSelect1Value = "Interaction/QuickSelect1";
  Il2CppCodeGenWriteBarrier(&pCVar1->QuickSelect1Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->QuickSelect2Value = "Interaction/QuickSelect2";
  Il2CppCodeGenWriteBarrier(&pCVar1->QuickSelect2Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->QuickSelect3Value = "Interaction/QuickSelect3";
  Il2CppCodeGenWriteBarrier(&pCVar1->QuickSelect3Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->QuickSelect4Value = "Interaction/QuickSelect4";
  Il2CppCodeGenWriteBarrier(&pCVar1->QuickSelect4Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->QuickSelect5Value = "Interaction/QuickSelect5";
  Il2CppCodeGenWriteBarrier(&pCVar1->QuickSelect5Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->QuickSelect6Value = "Interaction/QuickSelect6";
  Il2CppCodeGenWriteBarrier(&pCVar1->QuickSelect6Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->QuickSelect7Value = "Interaction/QuickSelect7";
  Il2CppCodeGenWriteBarrier(&pCVar1->QuickSelect7Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->QuickSelect8Value = "Interaction/QuickSelect8";
  Il2CppCodeGenWriteBarrier(&pCVar1->QuickSelect8Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->Function1Value = "Interaction/Function1";
  Il2CppCodeGenWriteBarrier(&pCVar1->Function1Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->Function2Value = "Interaction/Function2";
  Il2CppCodeGenWriteBarrier(&pCVar1->Function2Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->Function3Value = "Interaction/Function3";
  Il2CppCodeGenWriteBarrier(&pCVar1->Function3Value);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputInteractionEnum->static_fields;
  pCVar1->Function4Value = "Interaction/Function4";
  Il2CppCodeGenWriteBarrier(&pCVar1->Function4Value);
  return;
}


