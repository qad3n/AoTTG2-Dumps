// Type: CustomLogic.CustomLogicInputAnnieShifterEnum
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicInputAnnieShifterEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputAnnieShifterEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputAnnieShifterEnum_o* CustomLogic_CustomLogicInputAnnieShifterEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a7ec70

CustomLogic_CustomLogicInputAnnieShifterEnum_o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754665c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754665c = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputAnnieShifterEnum constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CustomLogicInputAnnieShifterEnum___ctor(__this,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a7ed60

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_0754665d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMid");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFront");
    Il2CppMethodInitialized_0754665d = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x42f9ae8b) {
    if (uVar2 < 0x2cfbaa40) {
      if (uVar2 == 0xe1ef32d) {
        bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
            pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Jump
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Jump
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x22ccd730) {
        bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
            pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Walk
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Walk
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x2cfbaa3f) {
        bVar1 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
            pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x38122e2c) {
      if (uVar2 == 0x371c1522) {
        bVar1 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackStomp
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x38122e2b) {
        bVar1 = System_String__op_Equality(name,"AttackHead",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackHead
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x3acb63d7) {
      bVar1 = System_String__op_Equality(name,"AttackBite",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBite
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x42f9ae8a) {
      bVar1 = System_String__op_Equality(name,"AttackBrushFront",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushFront
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x86ddd849) {
    if (uVar2 == 0x86ddd848) {
      bVar1 = System_String__op_Equality(name,"AttackGrabBottom",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabBottom
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabBottom
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x53765479) {
      bVar1 = System_String__op_Equality(name,"AttackCombo",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackCombo
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackCombo
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x76917342) {
      bVar1 = System_String__op_Equality(name,"AttackGrabUp",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
          pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabUp
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabUp
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x93e6a9c5) {
    if (uVar2 == 0x92d2a9f1) {
      bVar1 = System_String__op_Equality(name,"AttackSwing",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackSwing
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x93e6a9c4) {
      bVar1 = System_String__op_Equality(name,"AttackBrushBack",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushBack
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xefa1ddf1) {
    bVar1 = System_String__op_Equality(name,"AttackBrushHead",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushHead
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xff226e93) {
    bVar1 = System_String__op_Equality(name,"AttackGrabMid",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabMid
                         ((MethodInfo *)pCVar5);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputAnnieShifterEnum not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x5a7f350

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Kick(MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754665e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_0754665e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Kick_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x5a7f3f0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754665f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_0754665f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Jump_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x5a7f490

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546660 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_07546660 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__Walk_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackCombo
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackCombo (const MethodInfo* method);
// 0x5a7f530

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackCombo
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546661 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_07546661 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackCombo_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackSwing (const MethodInfo* method);
// 0x5a7f5d0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackSwing
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546662 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackSwing_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_07546662 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackSwing_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x5a7f670

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackStomp
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546663 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackStomp_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_07546663 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackStomp_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBite
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBite (const MethodInfo* method);
// 0x5a7f710

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBite(MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546664 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBite_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_07546664 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBite_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackHead (const MethodInfo* method);
// 0x5a7f7b0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackHead(MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546665 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackHead_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_07546665 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackHead_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushBack (const MethodInfo* method);
// 0x5a7f850

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushBack
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546666 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_07546666 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushBack_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushFront
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushFront (const MethodInfo* method);
// 0x5a7f8f0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushFront
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546667 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushFront
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_07546667 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushFront
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackBrushHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushHead (const MethodInfo* method);
// 0x5a7f990

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackBrushHead
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546668 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushHead_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_07546668 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackBrushHead_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabBottom
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabBottom (const MethodInfo* method);
// 0x5a7fa30

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabBottom
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_07546669 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabBottom
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_07546669 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabBottom
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabMid
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabMid (const MethodInfo* method);
// 0x5a7fad0

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabMid
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754666a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabMid_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_0754666a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabMid_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$__CreatePropertyBinding__AttackGrabUp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabUp (const MethodInfo* method);
// 0x5a7fb70

CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings____CreatePropertyBinding__AttackGrabUp
          (MethodInfo *method)

{
  System_Func_CustomLogicInputAnnieShifterEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_0754666b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
    Il2CppMethodInitialized_0754666b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputAnnieShifterEnum_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___CreatePropertyBinding__AttackGrabUp_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputAnnieShifterEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___cctor (const MethodInfo* method);
// 0x5a7fc10

void CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_0754666c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabMid");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushFront");
    Il2CppMethodInitialized_0754666c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kick",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackCombo",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSwing",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackStomp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBite",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackHead",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushBack",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushFront",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushHead",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabBottom",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabMid",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabUp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a7fe90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7fead: cmp byte ptr [rip + 0x1ac6ada], 0
// asm:   0x5a7feb4: je 0x5a7ff02

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754666d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754666d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_0754698e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754698e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->KickValue;
  }
  return *(Il2CppObject **)
          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a7ff40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a7ff5d: cmp byte ptr [rip + 0x1ac6a2b], 0
// asm:   0x5a7ff64: je 0x5a7ffb3

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754666e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754666e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_0754698f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754698f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->JumpValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a7fff0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8000d: cmp byte ptr [rip + 0x1ac697c], 0
// asm:   0x5a80014: je 0x5a80063

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_4_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754666f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754666f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_07546990 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546990 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->WalkValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x10)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackCombo>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a800a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a800bd: cmp byte ptr [rip + 0x1ac68cd], 0
// asm:   0x5a800c4: je 0x5a80113

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackCombo_g____getter_5_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546670 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546670 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_07546991 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546991 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackComboValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x18)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_6_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a80150
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8016d: cmp byte ptr [rip + 0x1ac681e], 0
// asm:   0x5a80174: je 0x5a801c3

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_6_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546671 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546671 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_07546992 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546992 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackSwingValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x20)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_7_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a80200
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8021d: cmp byte ptr [rip + 0x1ac676f], 0
// asm:   0x5a80224: je 0x5a80273

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_7_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546672 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546672 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_07546993 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546993 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackStompValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x28)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBite>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_8_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a802b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a802cd: cmp byte ptr [rip + 0x1ac66c0], 0
// asm:   0x5a802d4: je 0x5a80323

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBite_g____getter_8_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546673 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546673 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_07546994 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546994 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBiteValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x30)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackHead>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_9_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a80360
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8037d: cmp byte ptr [rip + 0x1ac6611], 0
// asm:   0x5a80384: je 0x5a803d3

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackHead_g____getter_9_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546674 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546674 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_07546995 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546995 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackHeadValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x38)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushBack>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_10_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a80410
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8042d: cmp byte ptr [rip + 0x1ac6562], 0
// asm:   0x5a80434: je 0x5a80483

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushBack_g____getter_10_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546675 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546675 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_07546996 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546996 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushBackValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x40)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushFront>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushFront_g____getter_11_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a804c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a804dd: cmp byte ptr [rip + 0x1ac64b3], 0
// asm:   0x5a804e4: je 0x5a80533

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushFront_g____getter_11_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546676 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546676 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_07546997 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546997 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushFrontValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x48)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackBrushHead>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushHead_g____getter_12_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a80570
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8058d: cmp byte ptr [rip + 0x1ac6404], 0
// asm:   0x5a80594: je 0x5a805e3

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackBrushHead_g____getter_12_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546677 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546677 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_07546998 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546998 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushHeadValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x50)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBottom>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabBottom_g____getter_13_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a80620
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8063d: cmp byte ptr [rip + 0x1ac6355], 0
// asm:   0x5a80644: je 0x5a80693

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabBottom_g____getter_13_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546678 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546678 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_07546999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546999 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabBottomValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x58)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabMid>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabMid_g____getter_14_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a806d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a806ed: cmp byte ptr [rip + 0x1ac62a6], 0
// asm:   0x5a806f4: je 0x5a80743

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabMid_g____getter_14_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546679 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546679 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_0754699a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754699a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabMidValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x60)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum.Bindings$$<__CreatePropertyBinding__AttackGrabUp>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_15_0 (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __i, const MethodInfo* method);
// 0x5a80780
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a8079d: cmp byte ptr [rip + 0x1ac61f7], 0
// asm:   0x5a807a4: je 0x5a807f3

Il2CppObject *
CustomLogic_CustomLogicInputAnnieShifterEnum_Bindings_____CreatePropertyBinding__AttackGrabUp_g____getter_15_0
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754667a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754667a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
  }
  if (Il2CppMethodInitialized_0754699b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754699b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabUpValue;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x68)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum___ctor (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x5a7e2d0

void CustomLogic_CustomLogicInputAnnieShifterEnum___ctor
               (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546565 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546565 = '\x01';
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


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Kick (const MethodInfo* method);
// 0x5a7e340

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Kick(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546566 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546566 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->KickValue;
  }
  return *(System_String_o **)
          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Jump (const MethodInfo* method);
// 0x5a7e3b0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Jump(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546567 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546567 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->JumpValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 8);
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_Walk (const MethodInfo* method);
// 0x5a7e420

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_Walk(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546568 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546568 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->WalkValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x10)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackCombo
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackCombo (const MethodInfo* method);
// 0x5a7e490

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackCombo(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546569 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546569 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackComboValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x18)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackSwing (const MethodInfo* method);
// 0x5a7e500

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackSwing(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754656a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754656a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackSwingValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x20)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackStomp (const MethodInfo* method);
// 0x5a7e570

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackStomp(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754656b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754656b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackStompValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x28)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBite
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBite (const MethodInfo* method);
// 0x5a7e5e0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBite(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754656c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754656c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBiteValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x30)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackHead (const MethodInfo* method);
// 0x5a7e650

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackHead(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754656d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754656d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackHeadValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x38)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushBack
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushBack (const MethodInfo* method);
// 0x5a7e6c0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushBack(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754656e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754656e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushBackValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x40)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushFront
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushFront (const MethodInfo* method);
// 0x5a7e730

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushFront(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754656f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_0754656f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushFrontValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x48)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackBrushHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushHead (const MethodInfo* method);
// 0x5a7e7a0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackBrushHead(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546570 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546570 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackBrushHeadValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x50)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabBottom
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabBottom (const MethodInfo* method);
// 0x5a7e810

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabBottom(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546571 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546571 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabBottomValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x58)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabMid
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabMid (const MethodInfo* method);
// 0x5a7e880

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabMid(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546572 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546572 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabMidValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x60)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_AttackGrabUp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabUp (const MethodInfo* method);
// 0x5a7e8f0

System_String_o * CustomLogic_CustomLogicInputAnnieShifterEnum__get_AttackGrabUp(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546573 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    Il2CppMethodInitialized_07546573 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    return TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->AttackGrabUpValue;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum)->static_fields + 0x68)
  ;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputAnnieShifterEnum__get_ClassName (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x5a7e960

System_String_o *
CustomLogic_CustomLogicInputAnnieShifterEnum__get_ClassName
          (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546574 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputAnnieShifterEnum");
    Il2CppMethodInitialized_07546574 = '\x01';
  }
  return "InputAnnieShifterEnum";
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsAbstract (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x5a7e990

bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsAbstract
               (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsStatic (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x5a7e9a0

bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_IsStatic
               (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputAnnieShifterEnum_o* __this, const MethodInfo* method);
// 0x5a7e9b0

bool CustomLogic_CustomLogicInputAnnieShifterEnum__get_InheritBaseMembers
               (CustomLogic_CustomLogicInputAnnieShifterEnum_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicInputAnnieShifterEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputAnnieShifterEnum___cctor (const MethodInfo* method);
// 0x5a7e9c0

void CustomLogic_CustomLogicInputAnnieShifterEnum___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicInputAnnieShifterEnum_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_07546575 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackCombo");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackGrabMid");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackBrushHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackBrushFront");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackGrabBottom");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackBrushBack");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackGrabUp");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter/Walk");
    Il2CppMethodInitialized_07546575 = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->KickValue = "AnnieShifter/Kick";
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields->KickValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->JumpValue = "AnnieShifter/Jump";
  Il2CppCodeGenWriteBarrier(&pCVar1->JumpValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->WalkValue = "AnnieShifter/Walk";
  Il2CppCodeGenWriteBarrier(&pCVar1->WalkValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->AttackComboValue = "AnnieShifter/AttackCombo";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackComboValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->AttackSwingValue = "AnnieShifter/AttackSwing";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackSwingValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->AttackStompValue = "AnnieShifter/AttackStomp";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackStompValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->AttackBiteValue = "AnnieShifter/AttackBite";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackBiteValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->AttackHeadValue = "AnnieShifter/AttackHead";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackHeadValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->AttackBrushBackValue = "AnnieShifter/AttackBrushBack";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackBrushBackValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->AttackBrushFrontValue = "AnnieShifter/AttackBrushFront";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackBrushFrontValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->AttackBrushHeadValue = "AnnieShifter/AttackBrushHead";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackBrushHeadValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->AttackGrabBottomValue = "AnnieShifter/AttackGrabBottom";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackGrabBottomValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->AttackGrabMidValue = "AnnieShifter/AttackGrabMid";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackGrabMidValue);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicInputAnnieShifterEnum->static_fields;
  pCVar1->AttackGrabUpValue = "AnnieShifter/AttackGrabUp";
  Il2CppCodeGenWriteBarrier(&pCVar1->AttackGrabUpValue);
  return;
}


