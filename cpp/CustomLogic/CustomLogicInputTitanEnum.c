// Type: CustomLogic.CustomLogicInputTitanEnum
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicInputTitanEnum.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicInputTitanEnum.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicInputTitanEnum_o* CustomLogic_CustomLogicInputTitanEnum_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ff0740

CustomLogic_CustomLogicInputTitanEnum_o *
CustomLogic_CustomLogicInputTitanEnum_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicInputTitanEnum_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345e27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e27 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
      if (Il2CppMethodInitialized_184345e05 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345e05 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      return __this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicInputTitanEnum constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicInputTitanEnum_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181fd63e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicInputTitanEnum_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184345e28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBody");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteF");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprint");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlam");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitBack");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteL");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape1");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowR");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitFace");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCore");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChest");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAir");
    il2cpp_codegen_initialize_runtime_metadata(&"Sit");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFar");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPunch");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGround");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHigh");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowL");
    Il2CppMethodInitialized_184345e28 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x3a2d364f) {
    if (uVar2 < 0x1d298760) {
      if (uVar2 < 0x87de46c) {
        if (uVar2 == 0x3b80da8) {
          bVar1 = System_String__op_Equality(name,"AttackGrabGround",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345e40 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabGround_g____ge
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
              Il2CppMethodInitialized_184345e40 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabGround_g____ge
            ;
label_181fd77cf:
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,(intptr_t)pMVar4,(MethodInfo_16E67D0 *)0x0);
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                       (System_Action_T__object__o *)0x0,
                       (MethodInfo_12B8EE0 *)
                       MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            return (CustomLogic_ICLMemberBinding_o *)__this_00;
          }
        }
        else if (uVar2 == 0x4aec3cb) {
          bVar1 = System_String__op_Equality(name,"AttackSlapR",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345e32 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
              Il2CppMethodInitialized_184345e32 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____getter
            ;
            goto label_181fd77cf;
          }
        }
        else if (uVar2 == 0x87de46b) {
          bVar1 = System_String__op_Equality(name,"AttackPunch",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345e2f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackPunch_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
              Il2CppMethodInitialized_184345e2f = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackPunch_g____getter
            ;
            goto label_181fd77cf;
          }
        }
      }
      else if (uVar2 < 0x12aed9d6) {
        if (uVar2 == 0xe1ef32d) {
          bVar1 = System_String__op_Equality(name,"Jump",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345e2a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
              Il2CppMethodInitialized_184345e2a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3_0
            ;
            goto label_181fd77cf;
          }
        }
        else if (uVar2 == 0x12aed9d5) {
          bVar1 = System_String__op_Equality(name,"AttackSlapL",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345e31 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
              Il2CppMethodInitialized_184345e31 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____getter
            ;
            goto label_181fd77cf;
          }
        }
      }
      else if (uVar2 == 0x132daa5f) {
        bVar1 = System_String__op_Equality(name,"AttackBiteR",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e36 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e36 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____getter
          ;
          goto label_181fd77cf;
        }
      }
      else if (uVar2 == 0x1d29875f) {
        bVar1 = System_String__op_Equality(name,"AttackSlapHighR",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e44 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e44 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g____get
          ;
          goto label_181fd77cf;
        }
      }
    }
    else if (uVar2 < 0x292dcd02) {
      if (uVar2 < 0x22ccd731) {
        if (uVar2 == 0x1f2dbd43) {
          bVar1 = System_String__op_Equality(name,"AttackBiteF",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345e35 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
              Il2CppMethodInitialized_184345e35 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____getter
            ;
            goto label_181fd77cf;
          }
        }
        else if (uVar2 == 0x22ccd730) {
          bVar1 = System_String__op_Equality(name,"Walk",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345e2c == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_5_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
              Il2CppMethodInitialized_184345e2c = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_5_0
            ;
            goto label_181fd77cf;
          }
        }
      }
      else if (uVar2 == 0x28bc2bff) {
        bVar1 = System_String__op_Equality(name,"Sit",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e2b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sit_g____getter_4_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e2b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sit_g____getter_4_0
          ;
          goto label_181fd77cf;
        }
      }
      else if (uVar2 == 0x292dcd01) {
        bVar1 = System_String__op_Equality(name,"AttackBiteL",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e34 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e34 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____getter
          ;
          goto label_181fd77cf;
        }
      }
    }
    else if (uVar2 < 0x3329aa02) {
      if (uVar2 == 0x2cfbaa3f) {
        bVar1 = System_String__op_Equality(name,"Kick",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e29 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e29 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2_0
          ;
          goto label_181fd77cf;
        }
      }
      else if (uVar2 == 0x3329aa01) {
        bVar1 = System_String__op_Equality(name,"AttackSlapHighL",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e43 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g____get
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e43 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g____get
          ;
          goto label_181fd77cf;
        }
      }
    }
    else if (uVar2 == 0x371c1522) {
      bVar1 = System_String__op_Equality(name,"AttackStomp",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e3a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackStomp_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          Il2CppMethodInitialized_184345e3a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackStomp_g____getter
        ;
        goto label_181fd77cf;
      }
    }
    else if (uVar2 == 0x3a2d364e) {
      bVar1 = System_String__op_Equality(name,"AttackBellyFlop",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e30 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          Il2CppMethodInitialized_184345e30 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g____get
        ;
        goto label_181fd77cf;
      }
    }
  }
  else if (uVar2 < 0x8304792a) {
    if (uVar2 < 0x6136bd0e) {
      if (uVar2 < 0x4f638210) {
        if (uVar2 == 0x3f31bd4c) {
          bVar1 = System_String__op_Equality(name,"AttackGrabCore",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345e3f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabCore_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
              Il2CppMethodInitialized_184345e3f = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabCore_g____gett
            ;
            goto label_181fd77cf;
          }
        }
        else if (uVar2 == 0x4f63820f) {
          bVar1 = System_String__op_Equality(name,"AttackGrabBody",(MethodInfo *)0x0);
          if (bVar1) {
            if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
            }
            if (Il2CppMethodInitialized_184345e3e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabBody_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
              Il2CppMethodInitialized_184345e3e = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
            pMVar4 = 
            MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabBody_g____gett
            ;
            goto label_181fd77cf;
          }
        }
      }
      else if (uVar2 == 0x5aec6cb9) {
        bVar1 = System_String__op_Equality(name,"AttackGrabAir",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e3d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAir_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e3d = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAir_g____gette
          ;
          goto label_181fd77cf;
        }
      }
      else if (uVar2 == 0x6136bd0d) {
        bVar1 = System_String__op_Equality(name,"AttackGrabHead",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e41 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHead_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e41 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHead_g____gett
          ;
          goto label_181fd77cf;
        }
      }
    }
    else if (uVar2 < 0x745f154c) {
      if (uVar2 == 0x6700754b) {
        bVar1 = System_String__op_Equality(name,"AttackHitFace",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e37 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e37 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____gette
          ;
          goto label_181fd77cf;
        }
      }
      else if (uVar2 == 0x745f154b) {
        bVar1 = System_String__op_Equality(name,"AttackSlapLowR",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e46 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e46 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g____gett
          ;
          goto label_181fd77cf;
        }
      }
    }
    else if (uVar2 == 0x825f2b55) {
      bVar1 = System_String__op_Equality(name,"AttackSlapLowL",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e45 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          Il2CppMethodInitialized_184345e45 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g____gett
        ;
        goto label_181fd77cf;
      }
    }
    else if (uVar2 == 0x83047929) {
      bVar1 = System_String__op_Equality(name,"CoverNape1",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e2e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__CoverNape1_g____getter_7
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          Il2CppMethodInitialized_184345e2e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__CoverNape1_g____getter_7
        ;
        goto label_181fd77cf;
      }
    }
  }
  else if (uVar2 < 0xb502d8c1) {
    if (uVar2 < 0x92d2a9f2) {
      if (uVar2 == 0x838656ac) {
        bVar1 = System_String__op_Equality(name,"AttackSlam",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e39 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlam_g____getter_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e39 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlam_g____getter_1
          ;
          goto label_181fd77cf;
        }
      }
      else if (uVar2 == 0x92d2a9f1) {
        bVar1 = System_String__op_Equality(name,"AttackSwing",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
          }
          if (Il2CppMethodInitialized_184345e3b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSwing_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
            ;
            Il2CppMethodInitialized_184345e3b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          pMVar4 = 
          MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSwing_g____getter
          ;
          goto label_181fd77cf;
        }
      }
    }
    else if (uVar2 == 0x9ed36c5b) {
      bVar1 = System_String__op_Equality(name,"AttackGrabHigh",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e42 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHigh_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          Il2CppMethodInitialized_184345e42 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHigh_g____gett
        ;
        goto label_181fd77cf;
      }
    }
    else if (uVar2 == 0xb502d8c0) {
      bVar1 = System_String__op_Equality(name,"AttackBrushChest",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e47 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBrushChest_g____ge
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          Il2CppMethodInitialized_184345e47 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBrushChest_g____ge
        ;
        goto label_181fd77cf;
      }
    }
  }
  else if (uVar2 < 0xe8476a12) {
    if (uVar2 == 0xc65e5944) {
      bVar1 = System_String__op_Equality(name,"AttackRockThrow",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e33 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          Il2CppMethodInitialized_184345e33 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g____get
        ;
        goto label_181fd77cf;
      }
    }
    else if (uVar2 == 0xe8476a11) {
      bVar1 = System_String__op_Equality(name,"AttackHitBack",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
        }
        if (Il2CppMethodInitialized_184345e38 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
          Il2CppMethodInitialized_184345e38 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
        pMVar4 = 
        MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____gette
        ;
        goto label_181fd77cf;
      }
    }
  }
  else if (uVar2 == 0xe943dc75) {
    bVar1 = System_String__op_Equality(name,"Sprint",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345e2d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sprint_g____getter_6_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
        Il2CppMethodInitialized_184345e2d = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sprint_g____getter_6_0
      ;
      goto label_181fd77cf;
    }
  }
  else if (uVar2 == 0xeda35f22) {
    bVar1 = System_String__op_Equality(name,"AttackGrabAirFar",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
      }
      if (Il2CppMethodInitialized_184345e3c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAirFar_g____ge
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
        Il2CppMethodInitialized_184345e3c = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object)
      ;
      pMVar4 = 
      MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAirFar_g____ge
      ;
      goto label_181fd77cf;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicInputTitanEnum not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar3 = System_String__Concat_1969b70(str0,name,pSVar3,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar3,(MethodInfo *)0x0);
  pMVar4 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Kick
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick (const MethodInfo* method);
// 0x181fe4920

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Kick(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e29 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Kick_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Jump
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Jump (const MethodInfo* method);
// 0x181fe4560

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Jump(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e2a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Jump_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Sit
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sit (const MethodInfo* method);
// 0x181fe7260

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sit(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sit_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e2b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sit_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Walk
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Walk (const MethodInfo* method);
// 0x181fe9240

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Walk(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e2c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Walk_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__Sprint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sprint (const MethodInfo* method);
// 0x181fe79e0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__Sprint(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sprint_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e2d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__Sprint_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__CoverNape1
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__CoverNape1 (const MethodInfo* method);
// 0x181fe0fa0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__CoverNape1(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__CoverNape1_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e2e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__CoverNape1_g____getter_7
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackPunch
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackPunch (const MethodInfo* method);
// 0x181fdfec0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackPunch(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackPunch_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e2f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackPunch_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBellyFlop
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBellyFlop (const MethodInfo* method);
// 0x181fdf600

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBellyFlop(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e30 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBellyFlop_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapL (const MethodInfo* method);
// 0x181fe01e0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapL(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e31 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapL_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapR (const MethodInfo* method);
// 0x181fe03c0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapR(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e32 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapR_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackRockThrow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackRockThrow (const MethodInfo* method);
// 0x181fdff60

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackRockThrow(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e33 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackRockThrow_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteL (const MethodInfo* method);
// 0x181fdf740

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteL(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e34 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteL_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteF
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteF (const MethodInfo* method);
// 0x181fdf6a0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteF(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e35 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteF_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBiteR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteR (const MethodInfo* method);
// 0x181fdf7e0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBiteR(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e36 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBiteR_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackHitFace
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitFace (const MethodInfo* method);
// 0x181fdfe20

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitFace(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e37 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitFace_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackHitBack
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitBack (const MethodInfo* method);
// 0x181fdfd80

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackHitBack(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e38 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackHitBack_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlam
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlam (const MethodInfo* method);
// 0x181fe0000

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlam(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlam_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e39 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlam_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackStomp
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackStomp (const MethodInfo* method);
// 0x181fe0460

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackStomp(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackStomp_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e3a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackStomp_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSwing
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSwing (const MethodInfo* method);
// 0x181fe0500

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSwing(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSwing_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e3b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSwing_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabAirFar
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAirFar (const MethodInfo* method);
// 0x181fdf920

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAirFar(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAirFar_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e3c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAirFar_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabAir
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAir (const MethodInfo* method);
// 0x181fdf9c0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabAir(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAir_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e3d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabAir_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabBody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabBody (const MethodInfo* method);
// 0x181fdfa60

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabBody(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabBody_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e3e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabBody_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabCore
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabCore (const MethodInfo* method);
// 0x181fdfb00

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabCore(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabCore_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e3f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabCore_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabGround
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabGround (const MethodInfo* method);
// 0x181fdfba0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabGround(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabGround_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e40 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabGround_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabHead
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHead (const MethodInfo* method);
// 0x181fdfc40

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHead(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHead_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e41 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHead_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackGrabHigh
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHigh (const MethodInfo* method);
// 0x181fdfce0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackGrabHigh(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHigh_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e42 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackGrabHigh_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighL (const MethodInfo* method);
// 0x181fe00a0

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighL(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e43 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighL_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapHighR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighR (const MethodInfo* method);
// 0x181fe0140

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapHighR(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e44 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapHighR_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowL
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowL (const MethodInfo* method);
// 0x181fe0280

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowL(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e45 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowL_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackSlapLowR
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowR (const MethodInfo* method);
// 0x181fe0320

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackSlapLowR(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e46 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackSlapLowR_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$__CreatePropertyBinding__AttackBrushChest
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o* CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBrushChest (const MethodInfo* method);
// 0x181fdf880

CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *
CustomLogic_CustomLogicInputTitanEnum_Bindings____CreatePropertyBinding__AttackBrushChest(MethodInfo *method)

{
  System_Func_CustomLogicInputTitanEnum__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum__o *__this_00;
  
  if (Il2CppMethodInitialized_184345e47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBrushChest_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
    Il2CppMethodInitialized_184345e47 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicInputTitanEnum_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings___CreatePropertyBinding__AttackBrushChest_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicInputTitanEnum_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum_Bindings___cctor (const MethodInfo* method);
// 0x181febd60

void CustomLogic_CustomLogicInputTitanEnum_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345e48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabBody");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteF");
    il2cpp_codegen_initialize_runtime_metadata(&"Sprint");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlam");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitBack");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteL");
    il2cpp_codegen_initialize_runtime_metadata(&"CoverNape1");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowR");
    il2cpp_codegen_initialize_runtime_metadata(&"Jump");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighL");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBiteR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackHitFace");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabCore");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrushChest");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAir");
    il2cpp_codegen_initialize_runtime_metadata(&"Sit");
    il2cpp_codegen_initialize_runtime_metadata(&"Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabAirFar");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPunch");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHead");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabGround");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapR");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrabHigh");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlapLowL");
    Il2CppMethodInitialized_184345e48 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kick",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Jump",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sit",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Walk",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sprint",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CoverNape1",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackPunch",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBellyFlop",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackRockThrow",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteF",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBiteR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackHitFace",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackHitBack",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlam",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackStomp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSwing",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAirFar",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabAir",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabBody",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabCore",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabGround",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHead",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackGrabHigh",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapHighL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapHighR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapLowL",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSlapLowR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackBrushChest",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Kick>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdd370

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Kick_g____getter_2_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e49 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460a2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->KickValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Jump>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdd1f0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Jump_g____getter_3_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e4a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460a3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->JumpValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Sit>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sit_g____getter_4_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fde0a0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sit_g____getter_4_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e4b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460a4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SitValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Walk>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_5_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fde9c0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Walk_g____getter_5_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e4c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460a5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->WalkValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__Sprint>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sprint_g____getter_6_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fde2f0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__Sprint_g____getter_6_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e4d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460a6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SprintValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__CoverNape1>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__CoverNape1_g____getter_7_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdc080

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__CoverNape1_g____getter_7_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e4e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460a7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->CoverNape1Value;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackPunch>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_8_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb760

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackPunch_g____getter_8_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e4f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460a8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackPunchValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBellyFlop>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_9_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdaf80

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBellyFlop_g____getter_9_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e50 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460a9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBellyFlopValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapL>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_10_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdba30

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapL_g____getter_10_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e51 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460aa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapR>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_11_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdbbe0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapR_g____getter_11_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e52 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460ab = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapRValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackRockThrow>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_12_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb7f0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackRockThrow_g____getter_12_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e53 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460ac = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackRockThrowValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteL>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_13_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb0a0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteL_g____getter_13_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e54 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460ad = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteLValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteF>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_14_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb010

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteF_g____getter_14_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e55 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460ae = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteFValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBiteR>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_15_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb130

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBiteR_g____getter_15_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e56 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460af = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteRValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackHitFace>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_16_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb6d0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitFace_g____getter_16_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e57 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460b0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitFaceValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackHitBack>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_17_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb640

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackHitBack_g____getter_17_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e58 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460b1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitBackValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlam>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_18_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb880

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlam_g____getter_18_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e59 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460b2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlamValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackStomp>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_19_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdbc70

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackStomp_g____getter_19_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e5a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460b3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackStompValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSwing>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_20_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdbd00

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSwing_g____getter_20_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e5b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460b4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSwingValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAirFar>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFar_g____getter_21_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb250

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAirFar_g____getter_21_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e5c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460b5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirFarValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabAir>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAir_g____getter_22_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb2e0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabAir_g____getter_22_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e5d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460b6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabBody>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabBody_g____getter_23_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb370

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabBody_g____getter_23_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e5e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460b7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabBodyValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabCore>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabCore_g____getter_24_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb400

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabCore_g____getter_24_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e5f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460b8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabCoreValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabGround>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabGround_g____getter_25_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb490

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabGround_g____getter_25_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e60 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460b9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabGroundValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHead>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHead_g____getter_26_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb520

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHead_g____getter_26_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e61 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460ba = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHeadValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackGrabHigh>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHigh_g____getter_27_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb5b0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackGrabHigh_g____getter_27_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e62 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460bb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHighValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighL>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_28_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb910

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighL_g____getter_28_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e63 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460bc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighLValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapHighR>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_29_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb9a0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapHighR_g____getter_29_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e64 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460bd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighRValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowL>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_30_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdbac0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowL_g____getter_30_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e65 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460be = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowLValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackSlapLowR>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_31_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdbb50

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackSlapLowR_g____getter_31_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e66 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460bf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowRValue;
}


// CustomLogic.CustomLogicInputTitanEnum.Bindings$$<__CreatePropertyBinding__AttackBrushChest>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBrushChest_g____getter_32_0 (CustomLogic_CustomLogicInputTitanEnum_o* __i, const MethodInfo* method);
// 0x181fdb1c0

Il2CppObject *
CustomLogic_CustomLogicInputTitanEnum_Bindings_____CreatePropertyBinding__AttackBrushChest_g____getter_32_0
          (CustomLogic_CustomLogicInputTitanEnum_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e67 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  if (Il2CppMethodInitialized_1843460c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_1843460c0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBrushChestValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$.ctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum___ctor (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x181fed430

void CustomLogic_CustomLogicInputTitanEnum___ctor
               (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345e05 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Kick
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Kick (const MethodInfo* method);
// 0x181fede10

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Kick(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e06 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->KickValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Jump
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Jump (const MethodInfo* method);
// 0x181feddc0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Jump(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e07 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->JumpValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Sit
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Sit (const MethodInfo* method);
// 0x181fede60

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Sit(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e08 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SitValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Walk
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Walk (const MethodInfo* method);
// 0x181fedf00

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Walk(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e09 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->WalkValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_Sprint
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_Sprint (const MethodInfo* method);
// 0x181fedeb0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_Sprint(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e0a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SprintValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_CoverNape1
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_CoverNape1 (const MethodInfo* method);
// 0x181fedd70

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_CoverNape1(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e0b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->CoverNape1Value;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackPunch
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackPunch (const MethodInfo* method);
// 0x181fed960

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackPunch(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e0c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackPunchValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBellyFlop
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBellyFlop (const MethodInfo* method);
// 0x181fed480

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBellyFlop(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e0d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBellyFlopValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapL (const MethodInfo* method);
// 0x181fedb20

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e0e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapR (const MethodInfo* method);
// 0x181fedc30

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e0f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapRValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackRockThrow
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackRockThrow (const MethodInfo* method);
// 0x181fed9b0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackRockThrow(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e10 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackRockThrowValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteL (const MethodInfo* method);
// 0x181fed520

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e11 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteLValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteF
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteF (const MethodInfo* method);
// 0x181fed4d0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteF(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e12 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteFValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBiteR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteR (const MethodInfo* method);
// 0x181fed570

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBiteR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e13 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteRValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackHitFace
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackHitFace (const MethodInfo* method);
// 0x181fed910

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackHitFace(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e14 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitFaceValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackHitBack
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackHitBack (const MethodInfo* method);
// 0x181fed8c0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackHitBack(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e15 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitBackValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlam
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlam (const MethodInfo* method);
// 0x181feda00

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlam(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e16 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlamValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackStomp
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackStomp (const MethodInfo* method);
// 0x181fedc80

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackStomp(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e17 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackStompValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSwing
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSwing (const MethodInfo* method);
// 0x181fedce0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSwing(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e18 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSwingValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabAirFar
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAirFar (const MethodInfo* method);
// 0x181fed620

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAirFar(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e19 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirFarValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabAir
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAir (const MethodInfo* method);
// 0x181fed680

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabAir(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e1a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabBody
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabBody (const MethodInfo* method);
// 0x181fed6e0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabBody(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e1b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabBodyValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabCore
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabCore (const MethodInfo* method);
// 0x181fed740

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabCore(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e1c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabCoreValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabGround
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabGround (const MethodInfo* method);
// 0x181fed7a0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabGround(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e1d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabGroundValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabHead
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHead (const MethodInfo* method);
// 0x181fed800

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHead(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e1e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHeadValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackGrabHigh
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHigh (const MethodInfo* method);
// 0x181fed860

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackGrabHigh(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e1f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHighValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapHighL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighL (const MethodInfo* method);
// 0x181feda60

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e20 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighLValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapHighR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighR (const MethodInfo* method);
// 0x181fedac0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapHighR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e21 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighRValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapLowL
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowL (const MethodInfo* method);
// 0x181fedb70

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowL(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e22 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowLValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackSlapLowR
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowR (const MethodInfo* method);
// 0x181fedbd0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackSlapLowR(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e23 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowRValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_AttackBrushChest
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_AttackBrushChest (const MethodInfo* method);
// 0x181fed5c0

System_String_o * CustomLogic_CustomLogicInputTitanEnum__get_AttackBrushChest(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    Il2CppMethodInitialized_184345e24 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicInputTitanEnum->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
  }
  return TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBrushChestValue;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicInputTitanEnum__get_ClassName (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x181fedd40

System_String_o *
CustomLogic_CustomLogicInputTitanEnum__get_ClassName
          (CustomLogic_CustomLogicInputTitanEnum_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"InputTitanEnum");
    Il2CppMethodInitialized_184345e25 = '\x01';
  }
  return "InputTitanEnum";
}


// CustomLogic.CustomLogicInputTitanEnum$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_IsAbstract (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputTitanEnum__get_IsAbstract(CustomLogic_CustomLogicInputTitanEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_IsStatic (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputTitanEnum__get_IsStatic(CustomLogic_CustomLogicInputTitanEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputTitanEnum$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicInputTitanEnum__get_InheritBaseMembers (CustomLogic_CustomLogicInputTitanEnum_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicInputTitanEnum__get_InheritBaseMembers(CustomLogic_CustomLogicInputTitanEnum_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicInputTitanEnum$$.cctor
// il2cpp: void CustomLogic_CustomLogicInputTitanEnum___cctor (const MethodInfo* method);
// 0x181fecb90

void CustomLogic_CustomLogicInputTitanEnum___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345e26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicInputTitanEnum);
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackHitFace");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabHead");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackBrushChest");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackPunch");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackBiteR");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/Kick");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapR");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/Sprint");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapHighL");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabHigh");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackBiteL");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabAir");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapHighR");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapLowL");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabCore");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapL");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabAirFar");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlam");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/Walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/Sit");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/CoverNape1");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackStomp");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackHitBack");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackBiteF");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackSlapLowR");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/AttackGrabGround");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan/Jump");
    Il2CppMethodInitialized_184345e26 = '\x01';
  }
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->KickValue = "Titan/Kick";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->KickValue,"Titan/Kick");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->JumpValue = "Titan/Jump";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->JumpValue,"Titan/Jump");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SitValue = "Titan/Sit";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SitValue,"Titan/Sit");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->WalkValue = "Titan/Walk";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->WalkValue,"Titan/Walk");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SprintValue = "Titan/Sprint";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->SprintValue,"Titan/Sprint"
            );
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->CoverNape1Value = "Titan/CoverNape1";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->CoverNape1Value,
             "Titan/CoverNape1");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackPunchValue = "Titan/AttackPunch";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackPunchValue,
             "Titan/AttackPunch");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBellyFlopValue = "Titan/AttackBellyFlop";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBellyFlopValue,
             "Titan/AttackBellyFlop");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLValue = "Titan/AttackSlapL";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLValue,
             "Titan/AttackSlapL");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapRValue = "Titan/AttackSlapR";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapRValue,
             "Titan/AttackSlapR");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackRockThrowValue = "Titan/AttackRockThrow";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackRockThrowValue,
             "Titan/AttackRockThrow");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteLValue = "Titan/AttackBiteL";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteLValue,
             "Titan/AttackBiteL");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteFValue = "Titan/AttackBiteF";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteFValue,
             "Titan/AttackBiteF");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteRValue = "Titan/AttackBiteR";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBiteRValue,
             "Titan/AttackBiteR");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitFaceValue = "Titan/AttackHitFace";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitFaceValue,
             "Titan/AttackHitFace");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitBackValue = "Titan/AttackHitBack";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackHitBackValue,
             "Titan/AttackHitBack");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlamValue = "Titan/AttackSlam";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlamValue,
             "Titan/AttackSlam");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackStompValue = "Titan/AttackStomp";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackStompValue,
             "Titan/AttackStomp");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSwingValue = "Titan/AttackSwing";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSwingValue,
             "Titan/AttackSwing");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirFarValue = "Titan/AttackGrabAirFar"
  ;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirFarValue,
             "Titan/AttackGrabAirFar");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirValue = "Titan/AttackGrabAir";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabAirValue,
             "Titan/AttackGrabAir");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabBodyValue = "Titan/AttackGrabBody";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabBodyValue,
             "Titan/AttackGrabBody");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabCoreValue = "Titan/AttackGrabCore";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabCoreValue,
             "Titan/AttackGrabCore");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabGroundValue = "Titan/AttackGrabGround"
  ;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabGroundValue,
             "Titan/AttackGrabGround");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHeadValue = "Titan/AttackGrabHead";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHeadValue,
             "Titan/AttackGrabHead");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHighValue = "Titan/AttackGrabHigh";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackGrabHighValue,
             "Titan/AttackGrabHigh");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighLValue = "Titan/AttackSlapHighL";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighLValue,
             "Titan/AttackSlapHighL");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighRValue = "Titan/AttackSlapHighR";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapHighRValue,
             "Titan/AttackSlapHighR");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowLValue = "Titan/AttackSlapLowL";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowLValue,
             "Titan/AttackSlapLowL");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowRValue = "Titan/AttackSlapLowR";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackSlapLowRValue,
             "Titan/AttackSlapLowR");
  TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBrushChestValue = "Titan/AttackBrushChest"
  ;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicInputTitanEnum->static_fields->AttackBrushChestValue,
             "Titan/AttackBrushChest");
  return;
}


